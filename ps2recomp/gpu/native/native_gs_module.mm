// Native GS renderer (work in progress): translates GS draw state into Metal draw calls, so that triangles
// go through the GPU's hardware rasterizer instead of being rasterized by compute shaders. Same module ABI
// as the paraLLEl-GS bridge (runtime/gs/gs_parallel_api.h), so the runtime and gs-replay load either one.
//
// Blending, write masks and the alpha test are computed in the fragment shader from the destination colour
// (framebuffer fetch), which is what lets the GS equations be reproduced without approximating them with the
// fixed blend factors of the API.
#define XXH_INLINE_ALL
#include "third_party/xxhash.h"
#include "texture_replace.h"
#if defined(__APPLE__)
#import <ImageIO/ImageIO.h>
#import <CoreGraphics/CoreGraphics.h>
#endif
#include "gpu.h"
// Objective-C's autorelease pool around each entry point on macOS (Metal objects made inside are freed at once);
// nothing elsewhere.
#if defined(__OBJC__)
#define GS_AUTORELEASE @autoreleasepool
#else
#define GS_AUTORELEASE
#endif
#include "gs_decode.h"
#include "runtime/gs/gs_parallel_api.h"
#include "third_party/smaa/AreaTex.h"   // SMAA lookup tables (MIT licence, Jimenez et al.)
#include "third_party/smaa/SearchTex.h"

#include <atomic>
#include <chrono>
#include <algorithm>
#include <bitset>
#include <cstdio>
#include <cstdlib>
#include <map>
#include <mutex>
#include <unordered_map>
#include <unordered_set>
#include <vector>


struct PassTime { double seconds = 0.0; uint64_t passes = 0, draws = 0; };
static std::mutex g_passTimeMutex;
static std::map<uint64_t, PassTime> g_passTime;
static std::map<std::string, PassTime> g_sectionTime; // the same for the work outside the draw passes
// PS2X_GS_NATIVE_FILL_STATS=1 (diagnostic): the area the draws cover (in pixels of ours) by kind of shader.
struct FillStat { double pixels = 0.0; uint64_t draws = 0; };
static std::map<std::string, FillStat> g_fillStats;
static std::atomic<uint64_t> g_gpuNanoseconds{0};
// When frames really reached the screen (the drawable's presented time): how many came more than a vertical blank and
// a half after the one before, and the longest gap, since the last report.
static std::atomic<uint64_t> g_lastPresented{0}, g_presentLate{0}, g_presentWorst{0}, g_presented{0};

// Hitch report (always on, one line per late scanout): how long the GS thread spent in this module since the previous
// scanout, and how much of that was decoding textures or waiting for the GPU.
static std::atomic<uint64_t> g_busyNs{0}, g_textureNs{0}, g_gpuWaitNs{0}, g_decodedSince{0};
// And the other big parts of it: reading targets back from the GPU, filling targets from VRAM, the present pass, and
// flushes that wait for the GPU (each with how many there were).
static std::atomic<uint64_t> g_presentNsDummy{0};
static std::atomic<uint64_t> g_readbackNs{0}, g_readbacks{0}, g_refreshNs{0}, g_refreshes{0}, g_presentNs{0}, g_flushWaitNs{0}, g_flushWaits{0};
static inline uint64_t nowNs() { return uint64_t(std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now().time_since_epoch()).count()); }
struct BusyTimer
{
    std::atomic<uint64_t> &into;
    uint64_t start = nowNs();
    explicit BusyTimer(std::atomic<uint64_t> &counter) : into(counter) {}
    ~BusyTimer() { into.fetch_add(nowNs() - start, std::memory_order_relaxed); }
};

// A knob read on a hot path: getenv takes a process-wide lock (contended by the other threads), so read it once.
#define GS_ENV_FLAG(name) ([] { static const bool set = std::getenv(name) != nullptr; return set; }())

namespace
{
    constexpr uint32_t kVramBytes = 4u * 1024u * 1024u;
    constexpr uint32_t kPages = kVramBytes / 8192u;
    constexpr uint32_t kTargetHeight = 512u;
    constexpr uint32_t kChunkVertices = 512u * 1024u;

    struct GpuVertex
    {
        float x, y, z;
        uint32_t rgba;
        float s, t, q;
        float fog;
    };

    // Mirrors `Uniforms` in the shader source below: 4-byte fields only.
    struct Uniforms
    {
        float targetWidth, targetHeight;
        uint32_t tme, tfx, tcc, fge;
        uint32_t abe, blendA, blendB, blendC, blendD, fix;
        uint32_t atst, aref, alphaMode; // alphaMode: 0 no test, 1 drop what fails, 2 drop what passes
        uint32_t writeMode;             // 0 colour and alpha, 1 nothing (depth only), 2 colour without alpha
        uint32_t fbmask, fba, colclamp, destinationHasAlpha;
        float fogR, fogG, fogB;
        float texScaleU, texScaleV; // normalized texture coordinates to those of the bound texture (a render target is larger)
        uint32_t texAlphaFixed, ta0; // 24-bit read of a 32-bit target: alpha comes from TEXA
        uint32_t texIndexed, texLinear; // the alpha of a render target read as an 8-bit index into the palette texture
        float texWidth, texHeight;     // the size TEX0 gives, in texels
        uint32_t wrapU, wrapV;          // 2 region clamp, 3 region repeat
        float minU, maxU, minV, maxV;
        uint32_t maxLevel, lodFixed;    // mip levels below the base; LCM
        float lodScale, lodK;           // 1 << L and K
        float pointSize;
        uint32_t paletteScale; // texels of the palette texture per palette entry (a palette copied from an upscaled target)
        uint32_t texBox;       // texels of the bound texture per texel the game sees, when it filters a larger render target
        uint32_t texSelf;      // the texel is the very pixel being drawn (the batch re-reads its own target in place)
        uint32_t texReplaced;  // the bound texture is a replacement pack texture: full-range alpha, hardware mip level
        uint32_t nativeTexel;  // an unfiltered sprite drawn larger than the game draws it: texels as the game's pixels pick them
    };

    struct ShuffleUniforms
    {
        uint32_t sourceHalf, destinationHalf, mask16, sourceIsDepth;
    };

    // The shaders live in gs_shaders_msl.inc (Metal) and gs_shaders.glsl (Vulkan); the backends compile them.

    bool isPaletted(uint32_t psm) { return psm == 0x13u || psm == 0x14u || psm == 0x1Bu || psm == 0x24u || psm == 0x2Cu; }
    bool isDepthFormat(uint32_t psm) { return (psm & 0x30u) == 0x30u; }

    class Renderer final : public gsn::Sink
    {
    public:
        gsn::Frontend frontend;
        std::vector<uint8_t> vram;

        bool initialize(const uint8_t *initial)
        {
            // PS2X_GS_NATIVE_HW_BILINEAR=1: the GPU's own bilinear filter instead of the GS's (diagnostic).
            // PS2X_GS_NATIVE_NO_DOWNFILTER=1: textures drawn smaller than they are show one texel per pixel (diagnostic).
            gpu::ShaderOptions options;
            options.hwBilinear = std::getenv("PS2X_GS_NATIVE_HW_BILINEAR") != nullptr;
            options.noDownfilter = std::getenv("PS2X_GS_NATIVE_NO_DOWNFILTER") != nullptr;
            options.trivial = std::getenv("PS2X_GS_NATIVE_TRIVIAL") != nullptr;
            options.generic = std::getenv("PS2X_GS_NATIVE_GENERIC_SHADER") != nullptr;
            specializedAvailable = !options.generic && !options.trivial;
#if defined(__APPLE__) && !defined(GS_BACKEND_VULKAN)
            device = gpu::createMetalDevice(options);
#else
            device = gpu::createVulkanDevice(options);
#endif
            if (!device)
                return false;
            fixedBlend = device->prefersFixedBlend();
            if (fixedBlend)
                std::fprintf(stderr, "[native-gs] fixed-function blending where the GS formula allows (PS2X_GS_EXACT_BLEND=1 reads the target instead)\n");
            const auto make = [&](const char *vertex, const char *fragment, gpu::Format color, gpu::Format depth, gpu::VertexLayout layout) {
                gpu::PipelineDesc desc;
                desc.vertex = vertex;
                desc.fragment = fragment;
                desc.color = color;
                desc.depth = depth;
                desc.layout = layout;
                return device->pipeline(desc);
            };
            using F = gpu::Format;
            using V = gpu::VertexLayout;
            pipeline = make("vertexMain", "fragmentMain", F::RGBA8, F::Depth32F, V::GsVertex);
            opaquePipeline = make("vertexMain", "fragmentOpaque", F::RGBA8, F::Depth32F, V::GsVertex);
            if (!pipeline)
                return false;
            depthCopyPipeline = make("vertexMain", "depthCopyFragment", F::Invalid, F::Depth32F, V::GsVertex);
            depthCopyClearPipeline = make("vertexMain", "depthCopyClearFragment", F::RGBA8, F::Depth32F, V::GsVertex);
            shufflePipeline = make("quadVertex", "shuffleFragment", F::RGBA8, F::Invalid, V::None);
            // The same, inside a drawing pass on that target (which has a depth attachment): no pass break per shuffle.
            shuffleInPassPipeline = make("quadVertex", "shuffleFragment", F::RGBA8, F::Depth32F, V::None);
            {
                gpu::TextureDesc d;
                d.format = F::Depth32F;
                d.usage = gpu::ShaderRead | gpu::RenderTarget;
                d.storage = gpu::Storage::Private;
                dummyDepthTexture = device->newTexture(d);
            }
            presentPipeline = make("quadVertex", "presentFragment", F::BGRA8, F::Invalid, V::None);
            {
                // Ambient occlusion into the alpha of a target's scene copy (Target::scene), which the screen never shows.
                gpu::PipelineDesc desc;
                desc.vertex = "quadVertex";
                desc.fragment = "aoFragment";
                desc.color = F::RGBA8;
                aoPipeline = device->pipeline(desc);
                desc.fragment = "aoUpsampleFragment";
                desc.blend.writeMask = 0x8u;
                aoUpsamplePipeline = device->pipeline(desc);
                desc.fragment = "softMaskFragment"; // alpha only, like the upsample
                softMaskPipeline = device->pipeline(desc);
            }
            aoReduceDepthPipeline = make("quadVertex", "aoReduceDepthFragment", F::RGBA8, F::Invalid, V::None);
            aoReducePipeline = make("quadVertex", "aoReduceFragment", F::RGBA8, F::Invalid, V::None);
            aoMedianPipeline = make("quadVertex", "aoMedianFragment", F::RGBA8, F::Invalid, V::None);
            aoSmoothPipeline = make("quadVertex", "aoSmoothFragment", F::RGBA8, F::Invalid, V::None);
            smaaEdgePipeline = make("quadVertex", "smaaEdgeFragment", F::RGBA8, F::Invalid, V::None);
            smaaWeightPipeline = make("quadVertex", "smaaWeightFragment", F::RGBA8, F::Invalid, V::None);
            smaaBlendPipeline = make("quadVertex", "smaaBlendFragment", F::RGBA8, F::Invalid, V::None);
            {
                // SMAA's area table (160x560, two channels) with its search table (64x16) in the rows below.
                gpu::TextureDesc d;
                d.width = AREATEX_WIDTH;
                d.height = AREATEX_HEIGHT + SEARCHTEX_HEIGHT;
                smaaTables = device->newTexture(d);
                std::vector<uint8_t> rgba(size_t(d.width) * d.height * 4u, 0u);
                for (uint32_t y = 0; y < AREATEX_HEIGHT; ++y)
                    for (uint32_t x = 0; x < AREATEX_WIDTH; ++x)
                    {
                        rgba[(size_t(y) * d.width + x) * 4u] = areaTexBytes[y * AREATEX_PITCH + x * 2u];
                        rgba[(size_t(y) * d.width + x) * 4u + 1u] = areaTexBytes[y * AREATEX_PITCH + x * 2u + 1u];
                    }
                for (uint32_t y = 0; y < SEARCHTEX_HEIGHT; ++y)
                    for (uint32_t x = 0; x < SEARCHTEX_WIDTH; ++x)
                        rgba[(size_t(AREATEX_HEIGHT + y) * d.width + x) * 4u] = searchTexBytes[y * SEARCHTEX_PITCH + x];
                device->replaceRegion(smaaTables, 0, 0, 0, d.width, d.height, rgba.data(), d.width * 4u);
            }
            resolvePipeline = make("quadVertex", "presentFragment", F::RGBA8, F::Invalid, V::None);
            depthAsColorPipeline = make("quadVertex", "depthAsColorFragment", F::RGBA8, F::Invalid, V::None);
            alphaNibblePipeline = make("quadVertex", "alphaNibbleFragment", F::RGBA8, F::Invalid, V::None);
            if (!depthCopyPipeline || !depthCopyClearPipeline || !shufflePipeline || !presentPipeline)
                return false;
            {
                gpu::TextureDesc d;
                fallbackTexture = device->newTexture(d);
                const uint32_t pixel = 0xFFFFFFFFu;
                device->replaceRegion(fallbackTexture, 0, 0, 0, 1, 1, &pixel, 4);
            }

            GSMem::InitLookupTables();
            {
                // For each 16-bit texel (u, v) of a PSMCT16S page, the PSMCT32 pixel of the same page holding its bytes
                // and the half (0 low, 1 high).
                const gsn::Swizzle &c32 = gsn::Swizzle::of(0x00u), &c16 = gsn::Swizzle::of(0x0Au);
                std::vector<uint32_t> owner(2048, 0u); // 32-bit word in the page -> x | y << 8
                for (uint32_t y = 0; y < 32u; ++y)
                    for (uint32_t x = 0; x < 64u; ++x)
                        owner[(c32.bitAddress(0u, 1u, x, y) >> 5) & 2047u] = x | (y << 8);
                std::vector<uint32_t> table(64u * 64u);
                for (uint32_t v = 0; v < 64u; ++v)
                    for (uint32_t u = 0; u < 64u; ++u)
                    {
                        const uint32_t bit = c16.bitAddress(0u, 1u, u, v);
                        const uint32_t o = owner[(bit >> 5) & 2047u];
                        table[v * 64u + u] = (o & 0xFFu) | (((o >> 8) & 0xFFu) << 8) | (((bit >> 4) & 1u) << 16);
                    }
                gpu::TextureDesc d;
                d.width = d.height = 64;
                view16Table = device->newTexture(d);
                device->replaceRegion(view16Table, 0, 0, 0, 64, 64, table.data(), 256);
            }
            vram.assign(initial, initial + kVramBytes);
            frontend.vram = vram.data();
            frontend.sink = this;
            stats = std::getenv("PS2X_GS_NATIVE_STATS") != nullptr;
            // PS2X_GS_NATIVE_SCALE=<1..8>: internal resolution, as a multiple of the game's own.
            if (const char *wanted = std::getenv("PS2X_GS_NATIVE_SCALE"))
                scale = uint32_t(std::clamp(std::atoi(wanted), 1, 8));
            if (const char *narrow = std::getenv("PS2X_GS_NATIVE_SCALE_NARROW"); narrow && narrow[0] == '0')
                scaleMinWidth = 8;
#if defined(__APPLE__) && !defined(GS_BACKEND_VULKAN)
            std::fprintf(stderr, "[native-gs] Metal renderer on %s\n", device->name().c_str());
#else
            std::fprintf(stderr, "[native-gs] Vulkan renderer on %s\n", device->name().c_str());
#endif
            return true;
        }

        // gsn::Sink
        void stateChanging() override { closeBatch(); }

        void triangle(const gsn::Vertex &a, const gsn::Vertex &b, const gsn::Vertex &c) override
        {
            if (!batchOpen)
                openBatch();
            if (logging() && batch.logged < 2u && (uint32_t(batch.ctx.frame >> 32) != 0u || (uint32_t(batch.ctx.tex0 >> 20) & 0x3Fu) == 0x1Bu))
            {
                ++batch.logged;
                for (const gsn::Vertex *v : {&a, &b, &c})
                    std::fprintf(stderr, "[tri] xy %.2f,%.2f st %.4f,%.4f q %.4f (uv %.2f,%.2f) z %x rgba %08x\n", v->x / 16.0 - batch.offsetX, v->y / 16.0 - batch.offsetY, v->s, v->t, v->q,
                                 v->s / v->q * float(1u << (uint32_t(batch.ctx.tex0 >> 26) & 15u)), v->t / v->q * float(1u << (uint32_t(batch.ctx.tex0 >> 30) & 15u)), v->z, v->rgba);
            }
            if (batch.skip)
            {
                ++skipped[batch.skipReason];
                return;
            }
            GpuVertex *out = reserve(3);
            const uint32_t flat = c.rgba;
            put(out[0], a, batch.gouraud ? a.rgba : flat, a.z);
            put(out[1], b, batch.gouraud ? b.rgba : flat, b.z);
            put(out[2], c, flat, c.z);
            // Placed like sprites at a higher resolution (see sprite()): the GS pixel x covers the area from x - 1/2 to
            // x + 1/2 of the outline, so a game pixel is drawn where it is shown. Otherwise triangles land half a game
            // pixel lower and to the right than sprites: Silent Hill Origins' letterbox bars, triangles from row 0,
            // left the top rows of the frame showing what was under them (a pink line over the cutscenes).
            // PS2X_GS_NATIVE_TRIANGLE_SHIFT=0: as before.
            static const bool shiftTriangles = !(std::getenv("PS2X_GS_NATIVE_TRIANGLE_SHIFT") && std::getenv("PS2X_GS_NATIVE_TRIANGLE_SHIFT")[0] == '0');
            if (shiftTriangles && scaleOf(uint32_t(batch.ctx.frame >> 16) & 0x3Fu) > 1u)
                for (int i = 0; i < 3; ++i)
                {
                    out[i].x -= 0.5f;
                    out[i].y -= 0.5f;
                }
            ++drawn;
        }

        void sprite(const gsn::Vertex &a, const gsn::Vertex &b) override
        {
            if (!batchOpen)
                openBatch();
            if (batch.shuffle)
            {
                // Which half of the 32-bit word each side is: the 16-bit view lays the halves out 8 pixels apart.
                batch.shuffleDestination = (uint32_t(std::min(a.x, b.x) / 16 - int32_t(batch.offsetX)) & 8u) != 0u ? 1u : 0u;
                batch.shuffleSource = (uint32_t(std::min(a.u, b.u) / 16u) & 8u) != 0u ? 1u : 0u;
                ++batch.primitives;
                ++drawn;
                return;
            }
            if (logging() && batch.logged < 3u)
            {
                ++batch.logged;
                std::fprintf(stderr, "[sprite] xy %.2f,%.2f - %.2f,%.2f  uv %.2f,%.2f - %.2f,%.2f  st %.4f,%.4f - %.4f,%.4f q %.3f z %x rgba %08x\n", a.x / 16.0 - batch.offsetX, a.y / 16.0 - batch.offsetY,
                             b.x / 16.0 - batch.offsetX, b.y / 16.0 - batch.offsetY, a.u / 16.0, a.v / 16.0, b.u / 16.0, b.v / 16.0, a.s, a.t, b.s, b.t, b.q, b.z, b.rgba);
            }
            if (batch.skip)
            {
                ++skipped[batch.skipReason];
                return;
            }
            // Flat rectangle: colour, depth, fog and Q come from the second vertex.
            GpuVertex first, second;
            gsn::Vertex a1 = a;
            a1.q = b.q;
            a1.fog = b.fog;
            put(first, a1, b.rgba, b.z);
            put(second, b, b.rgba, b.z);
            if (!batch.fst)
            {
                first.s /= first.q;
                first.t /= first.q;
                second.s /= second.q;
                second.t /= second.q;
                first.q = second.q = 1.0f;
            }
            if (first.x > second.x)
            {
                std::swap(first.x, second.x);
                std::swap(first.s, second.s);
            }
            if (first.y > second.y)
            {
                std::swap(first.y, second.y);
                std::swap(first.t, second.t);
            }
            // Film grain at screen-pixel size: a small indexed noise texture repeated 1:1 over the screen and blended on top
            // (Silent Hill Origins: 128x128 4-bit tiles, 16 sprites) would grow to scale x scale blocks when enlarged. Its
            // texture coordinates advance scale times faster instead, so a grain stays one pixel of the screen, as on the
            // console (drawn in 32-pixel strips in the road scene). Replayed: grain blocks 95 % -> 0. PS2X_GS_NATIVE_FINE_GRAIN=0 keeps the enlarged grain.
            {
                static const bool fineGrain = [] { const char *v = std::getenv("PS2X_GS_NATIVE_FINE_GRAIN"); return !(v && v[0] == '0'); }();
                const uint32_t grainScale = scaleOf(uint32_t(batch.ctx.frame >> 16) & 0x3Fu);
                const uint64_t tex0 = batch.ctx.tex0;
                const uint32_t tw = 1u << (uint32_t(tex0 >> 26) & 15u), th = 1u << (uint32_t(tex0 >> 30) & 15u);
                const uint32_t tpsm = uint32_t(tex0 >> 20) & 0x3Fu;
                const bool indexed = tpsm == 0x13u || tpsm == 0x14u || tpsm == 0x1Bu || tpsm == 0x24u || tpsm == 0x2Cu;
                const bool repeat = (uint32_t(batch.ctx.clamp) & 0xFu) == 0u;
                const bool blended = ((batch.mode >> 6) & 1u) != 0u;
                const float w = second.x - first.x, h = second.y - first.y;
                const float texelsAcross = std::fabs(second.s - first.s) * float(tw); // s is normalized in both modes
                if (GS_ENV_FLAG("PS2X_GS_NATIVE_GRAIN_LOG") && indexed && tw == 128u)
                {
                    static unsigned n = 0;
                    if (n++ < 20u)
                        std::fprintf(stderr, "[grain] w=%.2f h=%.2f ds=%.5f dt=%.5f texelsAcross=%.2f fst=%d repeat=%d blended=%d textured=%d scale=%u psm=%x\n",
                                     w, h, second.s - first.s, second.t - first.t, texelsAcross, int(batch.fst), int(repeat), int(blended),
                                     int(batch.textured), grainScale, tpsm);
                }
                if (fineGrain && grainScale > 1u && batch.textured && indexed && repeat && blended && tw <= 128u && th <= 128u &&
                    std::fabs(texelsAcross - std::fabs(w)) < 1.0f && std::fabs(w) >= 8.0f &&
                    std::fabs(std::fabs(second.t - first.t) * float(th) - std::fabs(h)) < 2.0f)
                {
                    if (GS_ENV_FLAG("PS2X_GS_NATIVE_SKIP_GRAIN"))
                        return; // diagnostic: leave the grain out
                    // Absolute coordinates scaled (not each sprite's span): the grain is drawn in strips, which stay seamless.
                    batch.fineGrain = true;
                    first.s *= float(grainScale);
                    second.s *= float(grainScale);
                    first.t *= float(grainScale);
                    second.t *= float(grainScale);
                    if (GS_ENV_FLAG("PS2X_GS_NATIVE_GRAIN_LOG"))
                    {
                        static unsigned applied = 0;
                        if (applied++ < 5u)
                            std::fprintf(stderr, "[grain] applied: s %.3f..%.3f t %.3f..%.3f\n", first.s, second.s, first.t, second.t);
                    }
                }
            }
            if (scaleOf(uint32_t(batch.ctx.frame >> 16) & 0x3Fu) > 1u && second.x > first.x && second.y > first.y)
            {
                // The GS samples pixels at integer coordinates, so a sprite from x0 to x1 fills the pixels x0..x1-1: the
                // area half a pixel up and to the left of its outline. At the game's resolution both readings pick the same
                // pixels; at a higher one only the area reading fills a screen edge to edge. The texture mapping stays put.
                const float ds = (second.s - first.s) / (second.x - first.x) * 0.5f, dt = (second.t - first.t) / (second.y - first.y) * 0.5f;
                first.x -= 0.5f; second.x -= 0.5f; first.y -= 0.5f; second.y -= 0.5f;
                first.s -= ds; second.s -= ds; first.t -= dt; second.t -= dt;
                // A texture drawn smaller than it is without filtering (Silent Hill Origins' map: 16x16 tiles at about
                // half size): the shader shows the texel the game's own pixel shows, and the sprite covers exactly the
                // game pixels it covers there. Otherwise slivers that hold no pixel centre at the game's resolution,
                // and the edge texels the GS never reaches, show up as dotted lines.
                const uint32_t tw = 1u << (uint32_t(batch.ctx.tex0 >> 26) & 15u), th = 1u << (uint32_t(batch.ctx.tex0 >> 30) & 15u);
                const bool nearest = ((batch.ctx.tex1 >> 5) & 1u) == 0u;
                const float texelsX = std::fabs(second.s - first.s) * float(tw) / (second.x - first.x);
                const float texelsY = std::fabs(second.t - first.t) * float(th) / (second.y - first.y);
                if (batch.textured && nearest && !batch.fineGrain && (texelsX > 1.05f || texelsY > 1.05f) && !GS_ENV_FLAG("PS2X_GS_NATIVE_NO_DOWNFILTER"))
                {
                    const float slopeS = (second.s - first.s) / (second.x - first.x), slopeT = (second.t - first.t) / (second.y - first.y);
                    // A game pixel here spans X - 1/2 .. X + 1/2 around its integer coordinate (see vertexMain).
                    const float x0 = std::ceil(first.x + 0.5f) - 0.5f, x1 = std::ceil(second.x + 0.5f) - 0.5f;
                    const float y0 = std::ceil(first.y + 0.5f) - 0.5f, y1 = std::ceil(second.y + 0.5f) - 0.5f;
                    if (x1 <= x0 || y1 <= y0)
                    {
                        ++drawn;
                        return; // covers no pixel of the game's
                    }
                    first.s += slopeS * (x0 - first.x); second.s += slopeS * (x1 - second.x);
                    first.t += slopeT * (y0 - first.y); second.t += slopeT * (y1 - second.y);
                    first.x = x0; second.x = x1; first.y = y0; second.y = y1;
                }
            }
            GpuVertex *out = reserve(6);
            GpuVertex topRight = first, bottomLeft = first;
            topRight.x = second.x;
            topRight.s = second.s;
            bottomLeft.y = second.y;
            bottomLeft.t = second.t;
            out[0] = first;
            out[1] = topRight;
            out[2] = bottomLeft;
            out[3] = bottomLeft;
            out[4] = topRight;
            out[5] = second;
            ++drawn;
        }

        // Lines and points go through the GPU's own line and point rasterization (one pixel wide, like the GS's).
        void line(const gsn::Vertex &a, const gsn::Vertex &b) override
        {
            if (!batchOpen)
                openBatch();
            if (batch.skip || batch.shuffle || batch.depthCopy)
            {
                ++skipped[SkipLinesPoints];
                return;
            }
            GpuVertex *out = reserve(2);
            put(out[0], a, batch.gouraud ? a.rgba : b.rgba, a.z);
            put(out[1], b, b.rgba, b.z);
            ++drawn;
        }

        void point(const gsn::Vertex &a) override
        {
            if (!batchOpen)
                openBatch();
            if (batch.skip || batch.shuffle || batch.depthCopy)
            {
                ++skipped[SkipLinesPoints];
                return;
            }
            put(*reserve(1), a, a.rgba, a.z);
            ++drawn;
        }

        // A whole-page copy of one colour target to another place (Silent Hill Origins keeps the last picture this way at
        // block 7168 and fades from it): done on the GPU, from target to target. Other copies are left to VRAM.
        bool localCopy(uint64_t bitbltbuf, uint64_t trxpos, uint64_t trxreg) override
        {
            const uint32_t sbp = uint32_t(bitbltbuf & 0x3FFFu), sbw = uint32_t(bitbltbuf >> 16) & 0x3Fu, spsm = uint32_t(bitbltbuf >> 24) & 0x3Fu;
            const uint32_t dbp = uint32_t(bitbltbuf >> 32) & 0x3FFFu, dbw = uint32_t(bitbltbuf >> 48) & 0x3Fu, dpsm = uint32_t(bitbltbuf >> 56) & 0x3Fu;
            const uint32_t sx = uint32_t(trxpos & 0x7FFu), sy = uint32_t(trxpos >> 16) & 0x7FFu;
            const uint32_t dx = uint32_t(trxpos >> 32) & 0x7FFu, dy = uint32_t(trxpos >> 48) & 0x7FFu;
            const uint32_t w = uint32_t(trxreg & 0xFFFu), h = uint32_t(trxreg >> 32) & 0xFFFu;
            if (logging())
                std::fprintf(stderr, "[copy] %u/%u/%02x (%u,%u) -> %u/%u/%02x (%u,%u) %ux%u\n", sbp, sbw, spsm, sx, sy, dbp, dbw, dpsm, dx, dy, w, h);
            if (GS_ENV_FLAG("PS2X_GS_NATIVE_NO_LOCAL_COPY") || w == 0u || h == 0u)
                return false;
            const bool nibbleCopy = spsm == 0x2Cu && dpsm == 0x14u, byteCopy = spsm == 0x1Bu && dpsm == 0x13u;
            if ((nibbleCopy || byteCopy) && (sbp & 31u) == 0u && alphaNibblePipeline && !(byteCopy ? GS_ENV_FLAG("PS2X_GS_NATIVE_NO_ALPHA8_COPY") : GS_ENV_FLAG("PS2X_GS_NATIVE_NO_NIBBLE_COPY")))
            {
                // Silent Hill Origins builds its character shadow in the frame's alpha and copies the top four bits
                // of it into a 4-bit texture it then lays on the floor; the flashlight's circle is drawn the same way
                // and copied whole (PSMT8H) into the 8-bit texture the light projects. Kept on the GPU, at the
                // target's resolution.
                const auto from = targets.find(targetKey(sbp / 32u, sbw));
                if (from == targets.end() || !from->second.drawn || sx + w > sbw * 64u || sy + h > kTargetHeight)
                    return false;
                Target &source = from->second;
                refreshTarget(source, source.psm);
                const uint32_t scale = scaleOf(sbw);
                NibbleCopy &copy = nibbleCopies[dbp];
                copy.bits = nibbleCopy ? 4u : 8u;
                if (!copy.texture || copy.width != w || copy.height != h || copy.texture->width != w * scale)
                {
                    gpu::TextureDesc d;
                    d.width = w * scale;
                    d.height = h * scale;
                    d.usage = gpu::RenderTarget | gpu::ShaderRead;
                    d.storage = gpu::Storage::Private;
                    copy.texture = device->newTexture(d);
                    copy.width = w;
                    copy.height = h;
                }
                closeBatch();
                endPass();
                ensureCommandBuffer();
                gpu::PassDesc pass;
                pass.color = copy.texture;
                pass.colorLoad = gpu::Load::DontCare;
                auto quad = commandBuffer->renderPass(pass);
                const uint32_t origin[4] = {sx * scale, sy * scale, nibbleCopy ? 16u : 1u, 0u};
                quad->setPipeline(alphaNibblePipeline);
                quad->setFragmentTexture(source.color, 0);
                quad->setFragmentBytes(origin, sizeof(origin));
                quad->draw(gpu::Primitive::Triangle, 0, 3);
                quad->end();
                return true;
            }
            if ((sbp & 31u) || (dbp & 31u) || sbw != dbw || spsm != dpsm || (spsm != 0u && spsm != 1u))
                return false;
            const auto found = targets.find(targetKey(sbp / 32u, sbw));
            if (found == targets.end() || !found->second.drawn || sx + w > sbw * 64u || dx + w > dbw * 64u || sy + h > kTargetHeight || dy + h > kTargetHeight)
                return false;
            Target &source = found->second;
            refreshTarget(source, spsm);
            Target &destination = target(dbp / 32u, dbw, dpsm);
            refreshTarget(destination, dpsm);
            closeBatch();
            endPass();
            ensureCommandBuffer();
            const uint32_t scale = scaleOf(sbw);
            auto blit = commandBuffer->blit();
            blit->copyTexture(source.color, sx * scale, sy * scale, w * scale, h * scale, destination.color, dx * scale, dy * scale);
            blit->end();
            destination.drawn = true;
            ++destination.changesSincePresent;
            destination.usedRows = std::max(destination.usedRows, dy + h);
            // The copied pages now hold the copy, not what VRAM has there (a new target starts all stale, and only the
            // pages in use were refreshed above).
            for (uint32_t row = dy / 32u; row * 32u < dy + h; ++row)
                for (uint32_t column = dx / 64u; column * 64u < dx + w; ++column)
                    if (row * dbw + column < kPages)
                        destination.stale.reset(row * dbw + column);
            return true;
        }

        void vramWritten(const std::vector<uint16_t> &blocks) override
        {
            if (logging())
                std::fprintf(stderr, "[upload] %zu blocks changed from %u\n", blocks.size(), unsigned(blocks.front()));
            ++vramGeneration;
            std::bitset<kPages> pages;
            uint32_t firstPage = kPages, lastPage = 0;
            for (const uint16_t block : blocks)
            {
                ++blockGeneration[block];
                for (TextureEntry *user : blockUsers[block])
                    user->valid = false;
                pages.set(block >> 5);
                firstPage = std::min<uint32_t>(firstPage, block >> 5);
                lastPage = std::max<uint32_t>(lastPage, block >> 5);
            }
            for (auto it = nibbleCopies.begin(); it != nibbleCopies.end();)
            {
                // A transfer over a nibble copy's memory replaces it.
                const uint32_t start = it->first, end = start + (it->second.width * it->second.height * it->second.bits / 8u + 255u) / 256u;
                bool hit = false;
                for (const uint16_t block : blocks)
                    hit = hit || (block >= start && block < end);
                it = hit ? nibbleCopies.erase(it) : std::next(it);
            }
            for (auto &entry : targets)
            {
                Target &target = entry.second;
                const uint32_t count = target.pageCount();
                if (firstPage >= target.fbp + count || lastPage < target.fbp)
                    continue;
                for (uint32_t page = std::max(firstPage, target.fbp) - target.fbp; page < count && target.fbp + page <= lastPage; ++page)
                    if (pages.test(target.fbp + page))
                        target.stale.set(page);
            }
            releaseBlocks(blocks, false);
        }

        bool uploadUnchanged(uint32_t dbp, bool atOrigin, uint64_t hash, uint64_t rectKey) override
        {
            const auto found = rectangles.find(rectKey);
            if (found == rectangles.end() || found->second.hash != hash || generationSum(found->second.blocks) != found->second.blockSum)
                return false;
            for (const uint16_t block : found->second.blocks)
                if (gpuDirtyBlocks.test(block))
                    return false;
            // The content record evolves exactly as if the transfer had been written.
            UploadRecord &record = uploads[dbp];
            record.hash = atOrigin ? hash : record.hash * 0x100000001b3ull ^ hash;
            ++uploadsSkipped;
            return true;
        }

        void uploadFinished(uint32_t dbp, bool atOrigin, uint64_t hash, uint64_t rectKey, std::vector<uint16_t> &blocks) override
        {
            {
                UploadRecord &rectangle = rectangles[rectKey];
                rectangle.hash = hash;
                rectangle.blocks = blocks;
                rectangle.blockSum = generationSum(blocks);
            }
            // Several rectangles sent to one base (mip levels packed in a page) add up to one piece of content.
            UploadRecord &record = uploads[dbp];
            if (!record.member)
                record.member = std::make_unique<std::bitset<kVramBytes / 256u>>();
            if (atOrigin)
            {
                record.hash = hash;
                for (const uint16_t block : record.blocks)
                    record.member->reset(block);
                record.blocks.clear();
            }
            else
                record.hash = record.hash * 0x100000001b3ull ^ hash;
            for (const uint16_t block : blocks)
                if (!record.member->test(block))
                {
                    record.member->set(block);
                    record.blocks.push_back(block);
                }
            record.blockSum = generationSum(record.blocks);
            for (const uint16_t block : blocks)
                blockOwner[block] = uint16_t(dbp + 1u);
            // A transfer owns what it covers even when it changed no byte of the CPU copy: whatever a target drew
            // there is superseded (the texture is refreshed from VRAM before its next use) and must not be read back.
            releaseBlocks(blocks, true);
        }

        // These blocks now belong to the CPU copy: forget that targets drew there.
        void releaseBlocks(const std::vector<uint16_t> &blocks, bool refreshTargets)
        {
            bool any = false;
            for (const uint16_t block : blocks)
                any = any || gpuDirtyBlocks.test(block);
            if (!any)
                return;
            for (auto &entry : targets)
            {
                Target &target = entry.second;
                for (const uint16_t block : blocks)
                    if (target.gpuDirty.test(block))
                    {
                        target.gpuDirty.reset(block);
                        target.markedRect = ~0ull;
                        if (refreshTargets && (block >> 5) >= target.fbp)
                            target.stale.set((block >> 5) - target.fbp);
                    }
            }
            for (const uint16_t block : blocks)
                gpuDirtyBlocks.reset(block);
        }

        uint64_t generationSum(const std::vector<uint16_t> &blocks) const
        {
            uint64_t sum = 0;
            for (const uint16_t block : blocks)
                sum += blockGeneration[block];
            return sum;
        }

        uint64_t scanoutCount() const { return scanouts; }
        void flushRequested()
        {
            ++flushRequests;
            static const bool eager = std::getenv("PS2X_GS_NATIVE_EAGER_FLUSH") != nullptr;
            if (eager || drawCalls - drawsAtCommit >= 400u)
            {
                drawsAtCommit = drawCalls;
                flush(false);
            }
        }

        // Before VRAM is read back as memory (a GS-to-memory transfer): what is queued is drawn, and the given blocks
        // that targets drew to come back from the GPU.
        void syncForRead(const std::bitset<kVramBytes / 256u> &needed)
        {
            closeBatch();
            syncFromGpu(needed);
        }

        void flush(bool wait)
        {
            if (wait)
                g_flushWaits.fetch_add(1, std::memory_order_relaxed);
            BusyTimer timed(wait ? g_flushWaitNs : g_presentNsDummy);
            closeBatch();
            endPass();
            if (passTimes && commandBuffer)
                commitTimed("flush (present, readbacks)");
            if (commandBuffer)
            {
                commandBuffer->commit();
                if (wait)
                    commandBuffer->waitUntilCompleted();
                lastCommitted = commandBuffer;
                commandBuffer = nullptr;
            }
            else if (wait && lastCommitted)
                lastCommitted->waitUntilCompleted();
        }

        // Direct presentation: the backend's layer/surface over the window, fed from the displayed target without a
        // trip through the CPU.
        // Display options the in-game menu changes while the game runs (black_native_gs_set_option). Start values:
        // PS2X_GS_NATIVE_FXAA (0 off), PS2X_GS_NATIVE_GAMMA (>1 lifts dark tones), PS2X_GS_NATIVE_BRIGHTNESS,
        // PS2X_GS_NATIVE_SHARPEN (0..1, 0 off), PS2X_GS_NATIVE_AO (ambient occlusion strength 0..1, 0 off).
        std::atomic<float> optionFxaa{[] { const char *v = std::getenv("PS2X_GS_NATIVE_FXAA"); return (v && v[0] == '0') ? 0.0f : 1.0f; }()};
        std::atomic<float> optionGamma{[] { const char *v = std::getenv("PS2X_GS_NATIVE_GAMMA"); const float g = v ? float(std::atof(v)) : 1.0f; return (g > 0.2f && g < 5.0f) ? g : 1.0f; }()};
        std::atomic<float> optionSharpen{[] { const char *v = std::getenv("PS2X_GS_NATIVE_SHARPEN"); const float s = v ? float(std::atof(v)) : 0.0f; return std::clamp(s, 0.0f, 1.0f); }()};
        std::atomic<float> optionAo{[] { const char *v = std::getenv("PS2X_GS_NATIVE_AO"); const float s = v ? float(std::atof(v)) : 0.0f; return std::clamp(s, 0.0f, 1.0f); }()};
        // PS2X_GS_NATIVE_SMAA=1: SMAA instead of the FXAA-like filter of the present pass.
        std::atomic<float> optionSmaa{[] { const char *v = std::getenv("PS2X_GS_NATIVE_SMAA"); return (v && v[0] == '1') ? 1.0f : 0.0f; }()};
        // PS2X_GS_NATIVE_SOFT_SHADOWS=0..1: soften the edges of the game's shadow masks (0 off).
        std::atomic<float> optionSoftShadows{[] { const char *v = std::getenv("PS2X_GS_NATIVE_SOFT_SHADOWS"); const float s = v ? float(std::atof(v)) : 0.0f; return std::clamp(s, 0.0f, 1.0f); }()};
        std::atomic<float> optionBrightness{[] { const char *v = std::getenv("PS2X_GS_NATIVE_BRIGHTNESS"); const float b = v ? float(std::atof(v)) : 1.0f; return (b > 0.1f && b < 4.0f) ? b : 1.0f; }()};
        void setOption(const char *key, float value)
        {
            if (std::strcmp(key, "sharpen") == 0)
                optionSharpen.store(std::clamp(value, 0.0f, 1.0f));
            else if (std::strcmp(key, "ao") == 0)
                optionAo.store(std::clamp(value, 0.0f, 1.0f));
            else if (std::strcmp(key, "soft_shadows") == 0)
                optionSoftShadows.store(std::clamp(value, 0.0f, 1.0f));
            else if (std::strcmp(key, "smaa") == 0)
                optionSmaa.store(value != 0.0f ? 1.0f : 0.0f);
            else if (std::strcmp(key, "fxaa") == 0)
                optionFxaa.store(value != 0.0f ? 1.0f : 0.0f);
            else if (std::strcmp(key, "gamma") == 0 && value > 0.2f && value < 5.0f)
                optionGamma.store(value);
            else if (std::strcmp(key, "brightness") == 0 && value > 0.1f && value < 4.0f)
                optionBrightness.store(value);
        }
        void setPictureVisible(bool visible)
        {
            if (swapchain)
                swapchain->setVisible(visible);
        }

        bool attachWindow(void *window)
        {
            swapchain = device->attachWindow(window);
            return swapchain != nullptr;
        }

    private:
        struct Target;
    public:
        // The displayed part of a target with the picture options and effects, into a pass of outW x outH pixels.
        void encodePresent(gpu::RenderEncoder &quad, Target &shown, uint32_t fbw, uint32_t dbx, uint32_t dby, uint32_t width, uint32_t height, uint32_t outW, uint32_t outH,
                           const gpu::TextureRef &picture)
        {
            const bool smaa = picture != shown.color; // already antialiased (runSmaa)
            const float fxaa = smaa ? 0.0f : optionFxaa.load(std::memory_order_relaxed);
            // PS2X_GS_NATIVE_GAMMA (>1 lifts dark tones) and PS2X_GS_NATIVE_BRIGHTNESS (overall gain), both 1 by default.
            const float gamma = optionGamma.load(std::memory_order_relaxed), brightness = optionBrightness.load(std::memory_order_relaxed);
            // With the picture of the 3D part (Target::scene) at hand, the effects work on it; without it, on what is shown.
            // No copy for several frames while the target kept changing: the 3D has stopped (a menu, a video). A picture
            // left as it is (the last frame held on screen while a room loads) keeps its effects: they went off after
            // five presents there, and the occlusion vanished from the still picture.
            if (shown.sceneValid && ++shown.presentsSinceScene > 4u + 1u && shown.changesSincePresent != 0u)
                shown.sceneValid = false;
            shown.changesSincePresent = 0;
            const bool useScene = shown.sceneValid && shown.scene && sceneEffectsOn();
            const bool useAo = useScene && shown.sceneHasAo && optionAo.load(std::memory_order_relaxed) > 0.0f;
            if (sceneEffectsOn())
            {
                ++scenePresents;
                if (!useScene)
                    ++sceneMisses;
                // PS2X_GS_NATIVE_SCENE_LOG=1: every present without the 3D picture (the effects are off for that frame).
                if ((!useScene || shown.presentsSinceScene > 2u) && GS_ENV_FLAG("PS2X_GS_NATIVE_SCENE_LOG"))
                    std::fprintf(stderr, "[scene] present %llu %s (transitions %u, expected %u)\n", (unsigned long long)scenePresents,
                                 useScene ? "with an older 3D picture" : "without the 3D picture", shown.sceneTransitions, shown.sceneTransitionsBefore);
            }
            // PS2X_GS_NATIVE_PRESENT_BILINEAR=1: one bilinear sample per window pixel when reducing (as before).
            const float areaFilter = GS_ENV_FLAG("PS2X_GS_NATIVE_PRESENT_BILINEAR") ? 0.0f : 1.0f;
            const float uniforms[13] = {float(dbx) / float(fbw * 64u), float(dby) / float(kTargetHeight),
                                        float(width) / float(fbw * 64u) / float(outW), float(height) / float(kTargetHeight) / float(outH),
                                        fxaa, gamma, brightness, optionSharpen.load(std::memory_order_relaxed), useScene ? 1.0f : 0.0f, useAo ? 1.0f : 0.0f, areaFilter,
                                        1.0f / float(fbw * 64u), 1.0f / float(kTargetHeight)};
            quad.setPipeline(presentPipeline);
            quad.setFragmentTexture(picture, 0);
            quad.setFragmentTexture(useScene ? shown.scene : shown.color, 1);
            quad.setFragmentSampler(sampler(true, 1, 1), 0);
            quad.setFragmentBytes(uniforms, sizeof(uniforms));
            quad.draw(gpu::Primitive::Triangle, 0, 3);
        }

        int present(uint32_t fbp, uint32_t fbw, uint32_t psm, uint32_t dbx, uint32_t dby, uint32_t width, uint32_t height, GSParallelScanout &request)
        {
            BusyTimer timed(g_presentNs);
            closeBatch();
            // A buffer nothing was drawn to (a video frame sent by the CPU) becomes a target fed from VRAM.
            Target &shown = target(fbp, fbw, psm);
            const ShowKept kept(shown, displayed, targetKey(fbp, fbw));
            const uint32_t scale = scaleOf(fbw);
            shown.usedRows = std::max(shown.usedRows, std::min(dby + height, kTargetHeight));
            refreshTarget(shown, shown.psm);
            width = std::min(width, fbw * 64u - std::min(dbx, fbw * 64u));
            height = std::min(height, kTargetHeight - std::min(dby, kTargetHeight));
            if (width == 0u || height == 0u)
                return 0;
            // Drawn at the window's own pixel size (the shader resamples and smooths edges in one pass) instead of the
            // target's size scaled by the window system afterwards. PS2X_GS_NATIVE_WINDOW_RES=0 keeps the old way.
            static const bool windowRes = [] { const char *v = std::getenv("PS2X_GS_NATIVE_WINDOW_RES"); return !(v && v[0] == '0'); }();
            uint32_t pixelsW = 0, pixelsH = 0;
            swapchain->pixelSize(pixelsW, pixelsH);
            const bool toWindow = windowRes && pixelsW >= 16u && pixelsH >= 16u;
            ensureSceneAo(shown);
            const gpu::TextureRef picture = runSmaa(shown);
            gpu::DrawableRef drawable = swapchain->nextDrawable(toWindow ? pixelsW : width * scale, toWindow ? pixelsH : height * scale);
            if (!drawable)
                return 0;
            endPass();
            ensureCommandBuffer();
            gpu::PassDesc pass;
            pass.color = drawable->texture;
            pass.colorLoad = gpu::Load::DontCare;
            auto quad = commandBuffer->renderPass(pass);
            encodePresent(*quad, shown, fbw, dbx, dby, width, height, drawable->texture->width, drawable->texture->height, picture);
            shown.scenePresented = true;
            quad->end();
            drawable->onPresented([](double presentedTime) {
              const uint64_t at = uint64_t(presentedTime * 1e9);
              if (at == 0u)
                  return; // never shown
              const uint64_t before = g_lastPresented.exchange(at, std::memory_order_relaxed);
              if (before != 0u && at > before)
              {
                  const uint64_t gap = at - before;
                  g_presented.fetch_add(1u, std::memory_order_relaxed);
                  if (gap > 26000000u) // more than three refreshes of a 120 Hz screen: a frame's worth of delay at 60
                      g_presentLate.fetch_add(1u, std::memory_order_relaxed);
                  uint64_t worst = g_presentWorst.load(std::memory_order_relaxed);
                  while (gap > worst && !g_presentWorst.compare_exchange_weak(worst, gap, std::memory_order_relaxed)) {}
              }
            });
            commandBuffer->present(drawable);
            flush(false);
            // PS2X_GS_NATIVE_SNAPSHOT=<file.ppm>: while <file.ppm>.trigger exists, the shown target (at its enlarged size)
            // is written to <file.ppm> once and the trigger removed: lets tools look at the picture that never leaves the GPU.
            static const char *snapshot = std::getenv("PS2X_GS_NATIVE_SNAPSHOT");
            if (snapshot && snapshot[0])
            {
                const std::string trigger = std::string(snapshot) + ".trigger";
                if (std::FILE *t = std::fopen(trigger.c_str(), "rb"))
                {
                    std::fclose(t);
                    std::remove(trigger.c_str());
                    const uint32_t w = width * scale, h = height * scale;
                    gpu::TextureDesc d;
                    d.format = shown.color->format;
                    d.width = w;
                    d.height = h;
                    d.storage = gpu::Storage::Shared;
                    gpu::TextureRef copy = device->newTexture(d);
                    gpu::CommandBufferRef cb = device->commandBuffer();
                    auto blit = cb->blit();
                    blit->copyTexture(shown.color, dbx * scale, dby * scale, w, h, copy, 0, 0);
                    blit->end();
                    cb->commit();
                    cb->waitUntilCompleted();
                    std::vector<uint8_t> rgba(size_t(w) * h * 4u);
                    device->getBytes(copy, 0, 0, w, h, rgba.data(), w * 4u);
                    if (std::FILE *f = std::fopen(snapshot, "wb"))
                    {
                        std::fprintf(f, "P6\n%u %u\n255\n", w, h);
                        for (size_t i = 0; i < size_t(w) * h; ++i)
                            std::fwrite(&rgba[i * 4u], 1, 3, f);
                        std::fclose(f);
                    }
                }
            }
            request.width = width;
            request.height = height;
            ++scanouts;
            noteScanout();
            return 1;
        }

        int scanout(GSParallelScanout &request)
        {
            // Circuit 1 when it is enabled, else circuit 2.
            const bool first = (request.pmode & 1u) != 0u;
            if (!first && (request.pmode & 2u) == 0u)
                return 0;
            uint64_t dispfb = first ? request.dispfb1 : request.dispfb2;
            const uint64_t display = first ? request.display1 : request.display2;
            // The buffer of the last flip as of the command stream (when the runtime reports flips): the request was
            // made earlier and can be one flip behind when the game runs ahead. It then showed the buffer the game had
            // already started the next frame in (Silent Hill Origins: its shadow maps as a flickering black square).
            if (displayed.pending && !GS_ENV_FLAG("PS2X_GS_NATIVE_REQUESTED_DISPLAY"))
                dispfb = displayed.dispfb;
            uint32_t fbp = uint32_t(dispfb) & 0x1FFu, fbw = uint32_t(dispfb >> 9) & 0x3Fu, psm = uint32_t(dispfb >> 15) & 0x1Fu;
            // PS2X_GS_NATIVE_SHOW=<fbp>,<fbw>,<psm> (diagnostic): scan out that target instead of the displayed one.
            if (const char *show = std::getenv("PS2X_GS_NATIVE_SHOW"))
                std::sscanf(show, "%u,%u,%u", &fbp, &fbw, &psm);
            const uint32_t dbx = uint32_t(dispfb >> 32) & 0x7FFu, dby = uint32_t(dispfb >> 43) & 0x7FFu;
            const uint32_t magh = uint32_t(display >> 23) & 0xFu;
            uint32_t width = ((uint32_t(display >> 32) & 0xFFFu) + 1u) / (magh + 1u), height = (uint32_t(display >> 44) & 0x7FFu) + 1u;
            if (fbw == 0u)
                return 0;
            // PS2X_GS_NATIVE_SCANOUT_LOG=1: what each scanout shows, printed when it changes.
            static const bool scanoutLog = std::getenv("PS2X_GS_NATIVE_SCANOUT_LOG") != nullptr;
            if (scanoutLog)
            {
                static uint64_t lastKey = ~0ull;
                static unsigned printed = 0;
                const uint64_t key = uint64_t(fbp) | uint64_t(dby) << 12 | uint64_t(dbx) << 24 | uint64_t(height) << 36 | uint64_t(width) << 48;
                if (key != lastKey && printed++ < 400u)
                    std::fprintf(stderr, "[native-gs] scanout fbp=%u fbw=%u psm=%u dbx=%u dby=%u %ux%u magh=%u pmode=%x smode2=%llx | dispfb2 fbp=%u fbw=%u dbx=%u dby=%u\n", fbp, fbw, psm, dbx,
                                 dby, width, height, magh, unsigned(request.pmode), (unsigned long long)request.smode2,
                                 unsigned(request.dispfb2 & 0x1FFu), unsigned((request.dispfb2 >> 9) & 0x3Fu), unsigned((request.dispfb2 >> 32) & 0x7FFu),
                                 unsigned((request.dispfb2 >> 43) & 0x7FFu));
                lastKey = key;
            }
            if (swapchain && !request.rgba)
                return present(fbp, fbw, psm, dbx, dby, width, height, request);
            if (!request.rgba)
                return 0;
            width = std::min({width, fbw * 64u, request.stride / 4u});
            height = std::min(height, request.maxHeight);
            flush(true);
            const auto found = targets.find(targetKey(fbp, fbw));
            if (found != targets.end())
            {
                Target &target = found->second;
                refreshTarget(target, psm);
                const ShowKept kept(target, displayed, targetKey(fbp, fbw));
                flush(true);
                width = std::min(width, fbw * 64u - std::min(dbx, fbw * 64u));
                height = std::min(height, kTargetHeight - std::min(dby, kTargetHeight));
                if (width == 0u || height == 0u)
                    return 0;
                const uint32_t scale = scaleOf(fbw);
                // PS2X_GS_NATIVE_SCANOUT_PRESENT=1 (diagnostic, for gs-replay): the frame as the window would get it, through
                // the present pass with the picture options and effects. PS2X_GS_NATIVE_SCANOUT_SCENE=1: the copy of the
                // frame's 3D part those effects use (Target::scene).
                static const bool viaPresent = GS_ENV_FLAG("PS2X_GS_NATIVE_SCANOUT_PRESENT"), sceneOnly = GS_ENV_FLAG("PS2X_GS_NATIVE_SCANOUT_SCENE");
                if ((viaPresent || sceneOnly) && width * scale * 4u <= request.stride && height * scale <= request.maxHeight)
                {
                    flush(true); // what the target holds is finished, as for the other readbacks
                    ensureSceneAo(target);
                    uint32_t w = width * scale, h = height * scale;
                    // PS2X_GS_NATIVE_SCANOUT_PRESENT_SIZE=<w>x<h>: the present pass into a picture of that size (a window
                    // smaller than the internal resolution), to see the reduction.
                    static const std::pair<uint32_t, uint32_t> presentSize = [] {
                        unsigned pw = 0, ph = 0;
                        if (const char *v = std::getenv("PS2X_GS_NATIVE_SCANOUT_PRESENT_SIZE"))
                            std::sscanf(v, "%ux%u", &pw, &ph);
                        return std::pair<uint32_t, uint32_t>(pw, ph);
                    }();
                    if (viaPresent && presentSize.first && presentSize.second)
                        w = std::min(presentSize.first, w), h = std::min(presentSize.second, h);
                    gpu::TextureDesc d;
                    d.width = w;
                    d.height = h;
                    d.usage = gpu::RenderTarget;
                    d.storage = gpu::Storage::Shared;
                    d.format = gpu::Format::BGRA8;
                    gpu::TextureRef out = device->newTexture(d);
                    if (sceneOnly && !(target.sceneValid && target.scene))
                        std::memset(request.rgba, 0, size_t(w) * h * 4u);
                    else if (sceneOnly)
                    {
                        d.format = target.scene->format; // a private texture: read through a shared copy
                        d.usage = gpu::ShaderRead;
                        gpu::TextureRef copy = device->newTexture(d);
                        endPass();
                        ensureCommandBuffer();
                        auto blit = commandBuffer->blit();
                        blit->copyTexture(target.scene, dbx * scale, dby * scale, w, h, copy, 0, 0);
                        blit->end();
                        flush(true);
                        device->getBytes(copy, 0, 0, w, h, request.rgba, w * 4u);
                        // PS2X_GS_NATIVE_SCANOUT_AO=1 as well: the ambient occlusion (the copy's alpha) as grey.
                        if (GS_ENV_FLAG("PS2X_GS_NATIVE_SCANOUT_AO"))
                            for (size_t i = 0, n = size_t(w) * h; i < n; ++i)
                                request.rgba[i * 4u] = request.rgba[i * 4u + 1u] = request.rgba[i * 4u + 2u] = target.sceneHasAo ? request.rgba[i * 4u + 3u] : 0u;
                    }
                    else
                    {
                        const gpu::TextureRef picture = runSmaa(target);
                        endPass();
                        ensureCommandBuffer();
                        gpu::PassDesc pass;
                        pass.color = out;
                        pass.colorLoad = gpu::Load::DontCare;
                        auto quad = commandBuffer->renderPass(pass);
                        encodePresent(*quad, target, fbw, dbx, dby, width, height, w, h, picture);
                        quad->end();
                        flush(true);
                        device->getBytes(out, 0, 0, w, h, request.rgba, w * 4u);
                        for (size_t i = 0, n = size_t(w) * h; i < n; ++i)
                            std::swap(request.rgba[i * 4u], request.rgba[i * 4u + 2u]); // BGRA as the window takes it
                    }
                    target.scenePresented = true;
                    width = w;
                    height = h;
                }
                else if (scale == 1u)
                    device->getBytes(target.color, dbx, dby, width, height, request.rgba, width * 4u);
                else if (width * scale * 4u <= request.stride && height * scale <= request.maxHeight)
                {
                    // Room for the whole image: rows packed at its own width, as the caller expects from a larger scanout.
                    device->getBytes(target.color, dbx * scale, dby * scale, width * scale, height * scale, request.rgba, width * scale * 4u);
                    width *= scale;
                    height *= scale;
                }
                else
                {
                    // The caller's buffer is at the game's resolution: filter the larger image down to it.
                    if (!resolveTexture || resolveTexture->width != width || resolveTexture->height != height)
                    {
                        gpu::TextureDesc d;
                        d.width = width;
                        d.height = height;
                        d.usage = gpu::RenderTarget;
                        d.storage = gpu::Storage::Shared;
                        resolveTexture = device->newTexture(d);
                    }
                    ensureCommandBuffer();
                    gpu::PassDesc pass;
                    pass.color = resolveTexture;
                    pass.colorLoad = gpu::Load::DontCare;
                    auto quad = commandBuffer->renderPass(pass);
                    const float uniforms[4] = {float(dbx) / float(fbw * 64u), float(dby) / float(kTargetHeight), 1.0f / float(fbw * 64u), 1.0f / float(kTargetHeight)};
                    quad->setPipeline(resolvePipeline);
                    quad->setFragmentTexture(target.color, 0);
                    quad->setFragmentSampler(sampler(true, 1, 1), 0);
                    quad->setFragmentBytes(uniforms, sizeof(uniforms));
                    quad->draw(gpu::Primitive::Triangle, 0, 3);
                    quad->end();
                    flush(true);
                    device->getBytes(resolveTexture, 0, 0, width, height, request.rgba, width * 4u);
                }
            }
            else
            {
                GSMem::TexturePageCache cache;
                for (uint32_t y = 0; y < height; ++y)
                    for (uint32_t x = 0; x < width; ++x)
                    {
                        const uint32_t pixel = expand(GSMem::ReadTexture(cache, vram.data(), psm, fbp * 32u, fbw, x + dbx, y + dby), psm, 0x80u, 0x80u, false);
                        std::memcpy(request.rgba + (size_t(y) * width + x) * 4u, &pixel, 4);
                    }
            }
            for (size_t i = 0, n = size_t(width) * height; i < n; ++i)
                request.rgba[i * 4u + 3u] = 255u;
            request.width = width;
            request.height = height;
            ++scanouts;
            noteScanout();
            if (stats && scanouts % 60u == 0u)
            {
                std::fprintf(stderr, "[native-gs] gpu=%.2f ms/scanout passes=%.1f/scanout\n", double(g_gpuNanoseconds.load()) / 1e6 / double(std::max<uint64_t>(scanouts, 1)), double(passes) / double(std::max<uint64_t>(scanouts, 1)));
                if (replPack.size() != 0)
                    std::fprintf(stderr, "[texrepl] packs=%zu lookups=%llu hits=%llu (+mips %llu) loaded=%zu (%.0f MB) failures=%llu\n", replPack.size(), (unsigned long long)replLookups, (unsigned long long)replHitsBase, (unsigned long long)replHitsMips, replCache.size(), double(replBytes) / 1048576.0, (unsigned long long)replLoadFailures);
                std::fprintf(stderr, "[native-gs] drawn=%llu skipped: depth-format target=%llu aliased target=%llu lines/points=%llu ztest never=%llu | draws=%llu readbacks=%llu palette copies=%llu uploads skipped=%llu textures=%zu decoded=%llu (no upload %llu, changed since %llu, mips elsewhere %llu) reused=%llu targets=%zu target-as-texture=%llu (own target %llu)\n",
                             (unsigned long long)drawn, (unsigned long long)skipped[SkipDepthTarget], (unsigned long long)skipped[SkipAliasedTarget], (unsigned long long)skipped[SkipLinesPoints],
                             (unsigned long long)skipped[SkipNever], (unsigned long long)drawCalls, (unsigned long long)readbacks, (unsigned long long)drawnPaletteCopies, (unsigned long long)uploadsSkipped, textures.size(), (unsigned long long)decodes, (unsigned long long)unknownNoUpload, (unsigned long long)unknownChanged, (unsigned long long)unknownMips, (unsigned long long)contentHits, targets.size(), (unsigned long long)targetSamples, (unsigned long long)selfSamples);
            }
            return 1;
        }

    private:
        enum SkipReason { SkipNone, SkipDepthTarget, SkipAliasedTarget, SkipLinesPoints, SkipNever, SkipCount };

        struct Target
        {
            gpu::TextureRef color;
            uint32_t fbp = 0, fbw = 0, psm = 0;
            gpu::TextureRef copy; // for draws that sample the target they draw to
            bool drawn = false;
            std::bitset<kPages> stale; // pages (relative to fbp) whose CPU copy is newer than the texture
            std::bitset<kVramBytes / 256u> gpuDirty; // blocks (absolute) drawn to since VRAM last received them
            uint64_t markedRect = ~0ull;     // the rectangle gpuDirty already covers (most draws repeat it)
            uint32_t usedRows = 0; // how far down anything was drawn: the memory below belongs to something else
            // The picture as it was when the game last went from depth-tested (3D) draws to draws without a depth test,
            // which is where its 2D work starts: overlays, film grain, the HUD. Picture effects are computed on it and
            // only the change they make is added to what is shown, so what was drawn after the 3D is left alone. Taken
            // only while an effect that needs it is on (see noteSceneBatch).
            gpu::TextureRef scene, sceneDepth; // and the Z buffer at that moment, for ambient occlusion
            gpu::TextureRef ao;                // that occlusion at the game's resolution
            bool inScene = false, sceneValid = false, scenePresented = false, sceneHasAo = false, sceneDepthValid = false;
            float sceneZLimit = 16777216.0f; // what the Z buffer's format can hold (65536 for 16-bit Z)
            // 3D-to-2D transitions in this frame, and the fewest any of the last 64 frames had: frames repeat their
            // structure, so copies start at that one (earlier ones would be replaced). The fewest, not the last frame's
            // count: Silent Hill Origins alternates 5 and 6, and every frame with 5 was shown without its picture.
            uint32_t sceneTransitions = 0, sceneTransitionsBefore = 0;
            bool maskPending = false; // a shuffle wrote the alpha (the shadow mask) since the last one (softenMask)
            uint64_t softFrame = ~0ull; // the frame (frameIndex) whose first mask was softened
            std::array<uint8_t, 64> sceneHistory{};
            uint32_t sceneHistoryNext = 0;
            // Presents since the last copy. A frame that ends with no copy (fewer transitions than expected) keeps the
            // previous picture for a few presents instead of showing without its effects (they flickered): where the
            // picture changed, the present pass leaves the pixel alone anyway (presentSceneDelta).
            uint32_t presentsSinceScene = 0;
            uint64_t changesSincePresent = 0; // draws, copies and uploads into the target since it was last shown
            uint32_t pageCount() const
            {
                const uint32_t pageHeight = psm == 2u || psm == 0xAu ? 64u : 32u;
                return std::min(kPages - fbp, fbw * ((usedRows + pageHeight - 1u) / pageHeight));
            }
        };

        struct DepthTarget
        {
            gpu::TextureRef texture;
            bool fresh = false; // not drawn to yet: its first pass starts from depth 0
            gpu::TextureRef asColor; // the depth seen as colour, for draws that read the Z buffer as a texture
        };

        struct TextureEntry
        {
            gpu::TextureRef texture;
            std::vector<uint16_t> pages;
            uint64_t hash = 0;
            bool valid = false, drawnOver = false, registered = false;
            std::vector<uint16_t> mipBlocks; // blocks of the levels below the base, level after level
            uint32_t mipStart[9] = {};
        };

        struct Batch
        {
            gsn::Context ctx;
            uint32_t mode = 0;
            uint64_t texa = 0, fogcol = 0, colclamp = 0, texclut = 0;
            float offsetX = 0.0f, offsetY = 0.0f, texelU = 1.0f, texelV = 1.0f, maxY = 0.0f, maxX = 0.0f;
            bool gouraud = false, fst = false, textured = false, skip = false, depthCopy = false, shuffle = false, selfFetch = false;
            bool fineGrain = false; // film grain kept at screen-pixel size (sprite()): not drawn at the game's pixel size
            uint32_t shuffleSource = 0, shuffleDestination = 0;
            SkipReason skipReason = SkipNone;
            uint32_t firstVertex = 0, vertexCount = 0, logged = 0, primitives = 0;
        };

        std::unique_ptr<gpu::Device> device;
        gpu::PipelineRef opaquePipeline, boundPipeline;
        // One pipeline per combination of the path-selecting state (see GS_SPECIALIZED in the shader): compiled in the
        // background the first time the combination is drawn, the generic pipeline standing in until it is ready.
        bool specializedAvailable = false;
        bool fixedBlend = false; // device->prefersFixedBlend(): see hwBlend()
        struct Specialized { gpu::PipelineRef state; bool requested = false; };
        std::unordered_map<uint64_t, Specialized> specialized;
        std::mutex specializedMutex;
        uint64_t specializedDraws = 0, genericDraws = 0;
        // Fixed-function blending for this draw, when the GPU prefers it (reads of the target need barriers there) and
        // the GS formula maps onto it: ((A - B) * C >> 7) + D is ks * Cs + kd * Cd, where the shader gives |ks| * Cs and
        // C/128 (second output) and the blend unit applies kd. Left to the destination-reading shader: C from the
        // target's alpha, kd = 1 + C, both terms negative, wrapping colours (COLCLAMP off), write masks other than "no
        // alpha", and reads of the target itself. Rounding differs from the GS by at most a step (it truncates (A-B)*C).
    public:
        // Why draws still read the target (PS2X_GS_NATIVE_BLEND_STATS=1 prints these at exit).
        mutable std::map<std::string, uint64_t> blendMisses;
        uint64_t fixedBlendDraws = 0;
    private:
        bool hwBlend(const Uniforms &u, gpu::BlendDesc &out) const
        {
            static const bool stats = std::getenv("PS2X_GS_NATIVE_BLEND_STATS") != nullptr;
            const auto miss = [&](const char *why) {
                if (stats)
                {
                    char key[96];
                    std::snprintf(key, sizeof key, "%s A%u B%u C%u D%u mask%08x wm%u clamp%u", why, u.blendA, u.blendB, u.blendC, u.blendD, u.fbmask, u.writeMode, u.colclamp);
                    ++blendMisses[key];
                }
                return false;
            };
            if (u.texSelf != 0u)
                return miss("self");
            // Write masks that cover whole channels are the blend unit's write mask.
            uint8_t channels = 0xF;
            for (uint32_t byte = 0; byte < 4u; ++byte)
            {
                const uint32_t m = (u.fbmask >> (byte * 8u)) & 0xFFu;
                if (m == 0xFFu)
                    channels &= uint8_t(~(1u << byte));
                else if (m != 0u)
                    return miss("fbmask");
            }
            out = gpu::BlendDesc{};
            out.writeMask = u.writeMode == 1u ? 0u : u.writeMode == 2u ? uint8_t(channels & 0x7u) : channels;
            if (u.abe == 0u)
                return true;
            // C from the target's alpha: Cs * Ad + Cd, the one form the game uses, is the blend unit's
            // Cs * DST_ALPHA + Cd applied twice (the target keeps 0..255 where the GS divides by 128). A target without
            // alpha reads as 128 there: then C is a plain 1.
            const bool fromTargetAlpha = u.blendC == 1u && u.destinationHasAlpha != 0u;
            if (fromTargetAlpha && !(u.blendA == 0u && u.blendB == 2u && u.blendD == 1u))
                return miss("C=Ad");
            if (u.colclamp == 0u)
                return miss("wrap");
            const int fd = (u.blendA == 1u) - (u.blendB == 1u), od = u.blendD == 1u; // kd = fd * C + od
            const int fs = (u.blendA == 0u) - (u.blendB == 0u), os = u.blendD == 0u; // ks = fs * C + os
            if (fd == 1 && od == 1)
                return miss("Cd(1+C)");
            const bool kdNegative = fd == -1 && od == 0, ksNegative = fs == -1 && os == 0;
            if (kdNegative && ksNegative)
                return miss("both-negative");
            out.enabled = true;
            out.src = gpu::BlendFactor::One;
            out.dst = fd == 0 ? (od ? gpu::BlendFactor::One : gpu::BlendFactor::Zero) : fd == -1 && od ? gpu::BlendFactor::OneMinusSrc1Alpha : gpu::BlendFactor::Src1Alpha;
            out.op = kdNegative ? gpu::BlendOp::Subtract : ksNegative ? gpu::BlendOp::ReverseSubtract : gpu::BlendOp::Add;
            if (fromTargetAlpha)
            {
                out.src = gpu::BlendFactor::DstAlpha;
                out.dst = gpu::BlendFactor::One;
                out.op = gpu::BlendOp::Add;
                out.passes = 2;
            }
            return true;
        }
        gpu::PipelineRef fixedBlendPipeline(const Uniforms &u, uint32_t &passes)
        {
            gpu::BlendDesc blend;
            if (!hwBlend(u, blend))
                return nullptr;
            passes = blend.passes;
            const gpu::Specialization values = {u.tme, u.tfx, u.tcc, u.fge, u.abe, u.blendA, u.blendB, u.blendC, u.blendD, u.atst, u.alphaMode, u.writeMode, u.fba, u.colclamp,
                                                u.destinationHasAlpha, u.texAlphaFixed, u.texIndexed, u.texLinear, u.wrapU, u.wrapV, u.texBox, u.texSelf,
                                                u.maxLevel != 0u ? 1u : 0u, u.lodFixed != 0u ? 1u : 0u, 0u};
            uint64_t key = 0x5EED0000u | (uint64_t(blend.enabled) << 1) | (uint64_t(blend.op) << 2) | (uint64_t(blend.src) << 4) | (uint64_t(blend.dst) << 7) | (uint64_t(blend.writeMask) << 10);
            if (specializedAvailable)
                for (uint32_t value : values)
                    key = key * 11u + std::min(value, 10u);
            {
                std::lock_guard<std::mutex> lock(specializedMutex);
                Specialized &entry = specialized[key];
                if (entry.state || entry.requested)
                    return entry.state;
                entry.requested = true;
            }
            gpu::PipelineDesc desc;
            desc.vertex = "vertexMain";
            desc.fragment = "fragmentHwBlend";
            desc.color = gpu::Format::RGBA8;
            desc.depth = gpu::Format::Depth32F;
            desc.layout = gpu::VertexLayout::GsVertex;
            desc.specialized = specializedAvailable;
            desc.constants = values;
            desc.blend = blend;
            Renderer *self = this;
            device->pipelineAsync(desc, [self, key](gpu::PipelineRef state) {
              std::lock_guard<std::mutex> ready(self->specializedMutex);
              self->specialized[key].state = state;
            });
            return nullptr; // the destination-reading shader meanwhile
        }

        // The channels a frame write mask leaves writable when it covers whole bytes (every 24-bit target: its alpha
        // byte is kept), for the blend unit's write mask; 0xFF when it masks bits within a byte (left to the shader).
        static uint8_t byteWriteMask(uint32_t fbmask)
        {
            uint8_t channels = 0xF;
            for (uint32_t byte = 0; byte < 4u; ++byte)
            {
                const uint32_t m = (fbmask >> (byte * 8u)) & 0xFFu;
                if (m == 0xFFu)
                    channels &= uint8_t(~(1u << byte));
                else if (m != 0u)
                    return 0xFFu;
            }
            return channels;
        }

        gpu::PipelineRef specializedPipeline(const Uniforms &u, bool opaque)
        {
            if (!specializedAvailable)
                return nullptr;
            // A mask of whole channels is the pipeline's write mask: masking in the shader (unpacking the destination
            // and packing the result as integers) was over a quarter of the GPU time at 4x in Silent Hill Origins'
            // flashlight rooms, where every draw keeps the 24-bit frame's alpha.
            const uint8_t channels = byteWriteMask(u.fbmask);
            const bool shaderMask = u.fbmask != 0u && channels == 0xFFu;
            const gpu::Specialization values = {u.tme, u.tfx, u.tcc, u.fge, u.abe, u.blendA, u.blendB, u.blendC, u.blendD, u.atst, u.alphaMode, u.writeMode, u.fba, u.colclamp,
                                                u.destinationHasAlpha, u.texAlphaFixed, u.texIndexed, u.texLinear, u.wrapU, u.wrapV, u.texBox, u.texSelf,
                                                u.maxLevel != 0u ? 1u : 0u, u.lodFixed != 0u ? 1u : 0u, shaderMask ? 1u : 0u};
            uint64_t key = opaque ? 1u : 0u;
            for (uint32_t value : values)
                key = key * 11u + std::min(value, 10u);
            key = key * 17u + (shaderMask ? 16u : channels);
            {
                std::lock_guard<std::mutex> lock(specializedMutex);
                Specialized &entry = specialized[key];
                if (entry.state || entry.requested)
                    return entry.state;
                entry.requested = true;
            }
            gpu::PipelineDesc desc;
            desc.vertex = "vertexMain";
            desc.fragment = opaque ? "fragmentOpaque" : "fragmentMain";
            desc.color = gpu::Format::RGBA8;
            desc.depth = gpu::Format::Depth32F;
            desc.layout = gpu::VertexLayout::GsVertex;
            desc.specialized = true;
            desc.constants = values;
            desc.blend.writeMask = shaderMask ? 0xFu : channels;
            Renderer *self = this;
            device->pipelineAsync(desc, [self, key](gpu::PipelineRef state) {
              std::lock_guard<std::mutex> ready(self->specializedMutex);
              self->specialized[key].state = state;
            });
            return nullptr;
        }
        gpu::PipelineRef aoPipeline, aoUpsamplePipeline, aoReduceDepthPipeline, aoReducePipeline, aoMedianPipeline, aoSmoothPipeline, softMaskPipeline;
        gpu::TextureRef aoFollowed[2]; // the reference Z followed over time (aoSmoothFragment), alternately written
        uint32_t aoFollowedNext = 0;
        gpu::TextureRef softMaskCopy;
        gpu::TextureRef aoReduced[4]; // the nearest-Z reduction (ensureSceneAo), down to one pixel
        gpu::PipelineRef smaaEdgePipeline, smaaWeightPipeline, smaaBlendPipeline;
        gpu::TextureRef smaaTables, smaaEdges, smaaWeights, smaaOut;
        gpu::PipelineRef pipeline, depthCopyPipeline, depthCopyClearPipeline, shufflePipeline, presentPipeline, resolvePipeline, depthAsColorPipeline, alphaNibblePipeline,
            shuffleInPassPipeline;
        gpu::TextureRef dummyDepthTexture;
        // Indexed textures made by copying a target's alpha (PSMT4HH -> PSMT4, PSMT8H -> PSMT8), by their base block.
        struct NibbleCopy
        {
            gpu::TextureRef texture;
            uint32_t width = 0, height = 0, bits = 4;
        };
        std::map<uint32_t, NibbleCopy> nibbleCopies;
        std::unique_ptr<gpu::Swapchain> swapchain;
        std::map<uint64_t, std::pair<gpu::TextureRef, uint64_t>> palettes; // texture and the hash of its entries
        std::map<uint32_t, gpu::TextureRef> drawnPalettes;                 // by CBP: copies of palettes that live in a target
        uint64_t drawnPaletteCopies = 0;
        gpu::TextureRef fallbackTexture;
        gpu::TextureRef view16Table; // see the texIndexed == 2 path of the shader
        gpu::CommandBufferRef commandBuffer, lastCommitted;
        std::unique_ptr<gpu::RenderEncoder> encoder;
        gpu::BufferRef chunk;
        uint32_t chunkUsed = 0;
        std::vector<gpu::BufferRef> chunkPool;
        std::mutex chunkMutex;
        uint64_t passTarget = ~0ull, passDepth = ~0ull;
        uint32_t passRows = 0; // the open pass's render area, in rows of the game's resolution
        std::map<uint64_t, Target> targets;
        std::map<uint64_t, DepthTarget> depths;
        std::unordered_map<uint64_t, TextureEntry> textures;
        // What is known about the bytes at a transfer destination: used to recognize the same texture when the game
        // sends it again, possibly somewhere else (it refills its texture memory several times per frame).
        struct UploadRecord
        {
            uint64_t hash = 0, blockSum = 0;
            std::vector<uint16_t> blocks;
            // Membership of `blocks`, for pieces that add up (a video frame arrives in hundreds of small transfers to
            // one base: merging them by sorting the whole list each time took a second per frame on a laptop).
            std::unique_ptr<std::bitset<kVramBytes / 256u>> member;
        };
        std::unordered_map<uint32_t, UploadRecord> uploads;
        std::unordered_map<uint64_t, UploadRecord> rectangles; // by destination rectangle: the last transfer written there
        uint64_t uploadsSkipped = 0;
        std::unordered_map<uint64_t, gpu::TextureRef> contentCache;
        uint64_t blockGeneration[kVramBytes / 256u] = {};
        std::bitset<kVramBytes / 256u> gpuDirtyBlocks; // union of every target's gpuDirty
        uint64_t syncReason = 0;
        std::vector<TextureEntry *> blockUsers[kVramBytes / 256u]; // decoded textures that read each block
        uint64_t readbacks = 0;
        uint16_t blockOwner[kVramBytes / 256u] = {}; // base of the last upload that covered the block, plus one
        uint64_t vramGeneration = 1;
        Batch batch;
        bool batchOpen = false, stats = false;
        uint32_t scale = 1;
        // Every buffer is drawn larger, and a larger buffer read back with the bilinear filter is averaged over the
        // game's own texel size (texBox in the shader), which keeps the blur the game makes by reading half a texel
        // off (light shafts, glow, smoke: 160 wide buffers). PS2X_GS_NATIVE_SCALE_NARROW=0 instead keeps buffers
        // narrower than a screen (fbw < 8) at the game's size: exact, but blocky next to the enlarged scene.
        uint32_t scaleMinWidth = 0;
        uint32_t scaleOf(uint32_t fbw) const { return fbw >= scaleMinWidth ? scale : 1u; }
        gpu::TextureRef resolveTexture;
        uint64_t passes = 0, passDrawsStart = 0;
        bool passTimes = std::getenv("PS2X_GS_NATIVE_PASS_TIMES") != nullptr;
        uint64_t flushRequests = 0, drawsAtCommit = 0, windowFlushes = 0;
        bool noOpaque = std::getenv("PS2X_GS_NATIVE_NO_OPAQUE") != nullptr; // every draw through the destination-reading shader
        bool noSelfFetch = std::getenv("PS2X_GS_NATIVE_NO_SELF_FETCH") != nullptr; // in-place reads through a copy, as before
        bool splitting = false; // closeBatch() is drawing the primitives of a self-sampling batch one by one
        bool statsEnabled = std::getenv("PS2X_GS_NATIVE_STATS") != nullptr;
        uint64_t drawn = 0, skipped[SkipCount] = {}, drawCalls = 0, decodes = 0, scanouts = 0, targetSamples = 0, selfSamples = 0, contentHits = 0, unknownNoUpload = 0, unknownChanged = 0, unknownMips = 0;

        bool logging() const
        {
            static const char *const logAt = std::getenv("PS2X_GS_NATIVE_LOG");
            static const uint64_t at = logAt ? std::strtoull(logAt, nullptr, 0) : ~0ull;
            return scanouts == at || at == 0xFFFFFFFFull; // 0xFFFFFFFF: every scanout
        }

        static uint64_t targetKey(uint32_t fbp, uint32_t fbw) { return uint64_t(fbp) | (uint64_t(fbw) << 16); }

        void put(GpuVertex &out, const gsn::Vertex &in, uint32_t rgba, uint32_t z)
        {
            out.x = float(in.x) * (1.0f / 16.0f) - batch.offsetX;
            out.y = float(in.y) * (1.0f / 16.0f) - batch.offsetY;
            batch.maxY = std::max(batch.maxY, out.y);
            batch.maxX = std::max(batch.maxX, out.x);
            out.z = float(z & 0xFFFFFFu) * (1.0f / 16777216.0f);
            out.rgba = rgba;
            if (batch.fst)
            {
                out.s = float(in.u) * batch.texelU;
                out.t = float(in.v) * batch.texelV;
                out.q = 1.0f;
            }
            else
            {
                out.s = in.s;
                out.t = in.t;
                out.q = in.q;
            }
            out.fog = float(in.fog);
        }

        // PS2X_GS_NATIVE_TRACE=<scanout>,<fbp>,<fbw>,<dir> (diagnostic): during that scanout, the target (fbp, fbw) is
        // saved after every batch as <dir>/bNNN.ppm (at the game's resolution), to see which draw left what.
        uint32_t traceIndex = 0;
        void traceTarget(const char *why)
        {
            static const struct Trace { uint64_t at = ~0ull; uint32_t fbp = 0, fbw = 0; std::string dir; } trace = [] {
                Trace t;
                if (const char *v = std::getenv("PS2X_GS_NATIVE_TRACE"))
                {
                    unsigned long long at = 0; unsigned fbp = 0, fbw = 0; char dir[512] = {};
                    if (std::sscanf(v, "%llu,%u,%u,%511s", &at, &fbp, &fbw, dir) == 4)
                        t.at = at, t.fbp = fbp, t.fbw = fbw, t.dir = dir;
                }
                return t;
            }();
            if (scanouts != trace.at)
                return;
            const auto found = targets.find(targetKey(trace.fbp, trace.fbw));
            if (found == targets.end() || !found->second.color)
                return;
            endPass();
            ensureCommandBuffer();
            Target &t = found->second;
            const uint32_t sc = scaleOf(t.fbw), w = t.fbw * 64u, h = std::min<uint32_t>(448u, kTargetHeight);
            gpu::TextureDesc d;
            d.format = t.color->format;
            d.width = w * sc;
            d.height = h * sc;
            d.storage = gpu::Storage::Shared;
            gpu::TextureRef copy = device->newTexture(d);
            auto blit = commandBuffer->blit();
            blit->copyTexture(t.color, 0, 0, d.width, d.height, copy, 0, 0);
            blit->end();
            flush(true);
            std::vector<uint8_t> px(size_t(d.width) * d.height * 4u);
            device->getBytes(copy, 0, 0, d.width, d.height, px.data(), d.width * 4u);
            char path[640];
            std::snprintf(path, sizeof path, "%s/b%03u.ppm", trace.dir.c_str(), traceIndex);
            // PS2X_GS_NATIVE_TRACE_FULL=1: at the enlarged resolution, with the alpha as a second picture (bNNNa.ppm).
            const bool full = GS_ENV_FLAG("PS2X_GS_NATIVE_TRACE_FULL");
            const uint32_t ow = full ? d.width : w, oh = full ? d.height : h, step = full ? 1u : sc;
            if (std::FILE *f = std::fopen(path, "wb"))
            {
                std::fprintf(f, "P6\n%u %u\n255\n", ow, oh);
                for (uint32_t y = 0; y < oh; ++y)
                    for (uint32_t x = 0; x < ow; ++x)
                        std::fwrite(&px[(size_t(y * step) * d.width + x * step) * 4u], 1, 3, f);
                std::fclose(f);
            }
            if (full)
            {
                std::snprintf(path, sizeof path, "%s/b%03ua.ppm", trace.dir.c_str(), traceIndex);
                if (std::FILE *f = std::fopen(path, "wb"))
                {
                    std::fprintf(f, "P6\n%u %u\n255\n", ow, oh);
                    for (size_t i = 0, n = size_t(ow) * oh; i < n; ++i)
                    {
                        const uint8_t a = px[i * 4u + 3u];
                        const uint8_t rgb[3] = {a, a, a};
                        std::fwrite(rgb, 1, 3, f);
                    }
                    std::fclose(f);
                }
            }
            std::fprintf(stderr, "[trace] b%03u after %s\n", traceIndex, why);
            ++traceIndex;
            ensureCommandBuffer();
        }

        // The buffer the game last flipped to, as of the command stream (GS::noteOrderedDisplayFlip), and its picture
        // as it was then, copied only if the game draws into it before the scanout shows it (a game running a frame
        // ahead: Silent Hill Origins starts the next frame with shadow maps in a corner of that buffer, which flickered
        // as a black square). Its 3D picture and occlusion are kept with it.
        struct DisplayedCopy
        {
            bool pending = false, taken = false, sceneValid = false, sceneHasAo = false;
            uint64_t key = 0, dispfb = 0; // the last flip's DISPFB, as of the command stream
            gpu::TextureRef color, scene;
        } displayed;
        uint64_t displayedCopies = 0;
    public:
        // Where the next frame's copy of its 3D picture goes: the copy is made at that transition and at every one after
        // it, so the last transition of the frame (the end of its 3D) always gets one if the frame reaches the count.
        // - The fewest of the recent frames: Silent Hill Origins' cutscenes alternate between frames with one and two
        //   transitions, and the count of the frame before (2) missed the frames with one. They then showed an older
        //   copy, and the occlusion faded every second or third frame.
        // - At most two below the last frame's: in the flashlight rooms the count varies by several around a dozen, and
        //   the fewest of all made several copies a frame, each a break in the render pass (+4 ms at 3x). A frame that
        //   ends earlier than that keeps the previous copy for its present (presentsSinceScene).
        // PS2X_GS_NATIVE_SCENE_FEWEST=1: the fewest of the last 64 frames, without the limit.
        uint32_t predictedTransitions(const Target &t) const
        {
            const uint32_t recorded = std::min<uint32_t>(t.sceneHistoryNext, 64u);
            if (recorded == 0u)
                return t.sceneTransitions;
            const uint32_t window = GS_ENV_FLAG("PS2X_GS_NATIVE_SCENE_FEWEST") ? recorded : std::min(recorded, 16u);
            uint32_t fewest = 255u;
            for (uint32_t i = 0; i < window; ++i)
                fewest = std::min<uint32_t>(fewest, t.sceneHistory[(t.sceneHistoryNext - 1u - i) & 63u]);
            if (GS_ENV_FLAG("PS2X_GS_NATIVE_SCENE_FEWEST"))
                return fewest;
            const uint32_t last = t.sceneHistory[(t.sceneHistoryNext - 1u) & 63u];
            return std::max(fewest, last > 2u ? last - 2u : 0u);
        }

        void noteDisplayFlip(uint64_t dispfb)
        {
            if (GS_ENV_FLAG("PS2X_GS_NATIVE_DISPLAY_COPY_LOG"))
                std::fprintf(stderr, "[native-gs] display flip to fbp %u fbw %u (scanout %llu)\n", unsigned(dispfb & 0x1FFu), unsigned((dispfb >> 9) & 0x3Fu), (unsigned long long)scanouts);
            closeBatch();
            ++frameIndex;
            // A flip ends the frame of the buffer it shows: the transitions it had set where the next frame's copy goes.
            // A frame still in its 3D in another buffer goes on: Silent Hill Origins' cutscenes draw a frame across two
            // scanouts, and ending it at the other buffer's flip lost its 3D-to-2D transition (no copy of its 3D
            // picture, so the effects used an older one there and the occlusion faded every other frame).
            // PS2X_GS_NATIVE_FLIP_ENDS_ALL=1: every buffer's frame ends at any flip (as before).
            const uint64_t shownKey = targetKey(uint32_t(dispfb) & 0x1FFu, uint32_t(dispfb >> 9) & 0x3Fu);
            for (auto &entry : targets)
            {
                Target &t = entry.second;
                if (t.sceneTransitions == 0u && !t.inScene)
                    continue;
                if (entry.first != shownKey && t.inScene && !GS_ENV_FLAG("PS2X_GS_NATIVE_FLIP_ENDS_ALL"))
                    continue;
                t.sceneHistory[t.sceneHistoryNext++ & 63u] = uint8_t(std::min<uint32_t>(t.sceneTransitions, 255u));
                t.sceneTransitionsBefore = predictedTransitions(t);
                t.sceneTransitions = 0;
                t.inScene = false;
                t.scenePresented = false;
            }
            displayed.pending = true;
            displayed.taken = false;
            displayed.dispfb = dispfb;
            displayed.key = targetKey(uint32_t(dispfb) & 0x1FFu, uint32_t(dispfb >> 9) & 0x3Fu);
        }
    private:
        void protectDisplayed(uint32_t fbp, uint32_t fbw)
        {
            if (!displayed.pending || displayed.taken || targetKey(fbp, fbw) != displayed.key || GS_ENV_FLAG("PS2X_GS_NATIVE_NO_DISPLAY_COPY"))
                return;
            const auto found = targets.find(displayed.key);
            if (found == targets.end() || !found->second.color)
                return;
            Target &t = found->second;
            ensureSceneAo(t); // the occlusion of the frame being kept, while its Z copy is still that frame's
            endPass();
            ensureCommandBuffer();
            const auto copyOf = [&](const gpu::TextureRef &from, gpu::TextureRef &to) {
                if (!to || to->width != from->width || to->height != from->height || to->format != from->format)
                {
                    gpu::TextureDesc d;
                    d.format = from->format;
                    d.width = from->width;
                    d.height = from->height;
                    d.usage = gpu::RenderTarget | gpu::ShaderRead;
                    d.storage = gpu::Storage::Private;
                    to = device->newTexture(d);
                }
                auto blit = commandBuffer->blit();
                blit->copyTexture(from, 0, 0, from->width, from->height, to, 0, 0);
                blit->end();
            };
            copyOf(t.color, displayed.color);
            displayed.sceneValid = t.sceneValid && t.scene;
            displayed.sceneHasAo = t.sceneHasAo;
            if (displayed.sceneValid)
                copyOf(t.scene, displayed.scene);
            displayed.taken = true;
            ++displayedCopies;
            if (GS_ENV_FLAG("PS2X_GS_NATIVE_DISPLAY_COPY_LOG"))
                std::fprintf(stderr, "[native-gs] kept the displayed picture of fbp %u (drawn into before its scanout)\n", fbp);
        }
        // While a scanout shows a target whose picture was kept, the target is the kept picture.
        struct ShowKept
        {
            Target &t;
            DisplayedCopy &kept;
            bool active = false;
            ShowKept(Target &target, DisplayedCopy &copy, uint64_t key) : t(target), kept(copy)
            {
                active = kept.pending && kept.taken && kept.key == key && kept.color;
                if (!active)
                    return;
                std::swap(t.color, kept.color);
                std::swap(t.scene, kept.scene);
                std::swap(t.sceneValid, kept.sceneValid);
                std::swap(t.sceneHasAo, kept.sceneHasAo);
            }
            ~ShowKept()
            {
                if (!active)
                    return;
                std::swap(t.color, kept.color);
                std::swap(t.scene, kept.scene);
                std::swap(t.sceneValid, kept.sceneValid);
                std::swap(t.sceneHasAo, kept.sceneHasAo);
            }
        };

        void openBatch()
        {
            traceTarget("the batch before");
            const gsn::Registers &regs = frontend.regs;
            batch = Batch{};
            batch.mode = regs.mode();
            batch.ctx = regs.ctx[(batch.mode >> 9) & 1u];
            batch.texa = regs.texa;
            batch.fogcol = regs.fogcol;
            batch.colclamp = regs.colclamp;
            batch.texclut = regs.texclut;
            batch.gouraud = (batch.mode & 0x008u) != 0u;
            batch.textured = (batch.mode & 0x010u) != 0u;
            batch.fst = (batch.mode & 0x100u) != 0u;
            batch.offsetX = float(batch.ctx.xyoffset & 0xFFFFu) * (1.0f / 16.0f);
            batch.offsetY = float((batch.ctx.xyoffset >> 32) & 0xFFFFu) * (1.0f / 16.0f);
            batch.texelU = 1.0f / (16.0f * float(1u << (uint32_t(batch.ctx.tex0 >> 26) & 15u)));
            batch.texelV = 1.0f / (16.0f * float(1u << (uint32_t(batch.ctx.tex0 >> 30) & 15u)));
            const uint32_t fbp = uint32_t(batch.ctx.frame) & 0x1FFu, fbw = uint32_t(batch.ctx.frame >> 16) & 0x3Fu, psm = uint32_t(batch.ctx.frame >> 24) & 0x3Fu;
            protectDisplayed(fbp, fbw);
            const uint32_t test = uint32_t(batch.ctx.test);
            const uint32_t tpsm = uint32_t(batch.ctx.tex0 >> 20) & 0x3Fu, tbp = uint32_t(batch.ctx.tex0) & 0x3FFFu, tbw = uint32_t(batch.ctx.tex0 >> 14) & 0x3Fu;
            const bool flatSprite = (batch.mode & 7u) == 6u && batch.textured && batch.fst;
            if (fbw != 0u && isDepthFormat(psm) && flatSprite && isDepthFormat(tpsm) && (tbp & 31u) == 0u && tbw != 0u)
                batch.depthCopy = true;
            else if (isDepthFormat(psm) || fbw == 0u)
                batch.skip = true, batch.skipReason = SkipDepthTarget;
            else if ((test & 0x10000u) != 0u && ((test >> 17) & 3u) == 0u)
                batch.skip = true, batch.skipReason = SkipNever;
            else
            {
                // The same memory drawn to with another pixel size (32 bits against 16): not translated yet.
                const auto found = targets.find(targetKey(fbp, fbw));
                if (found != targets.end() && (found->second.psm == 2u || found->second.psm == 0xAu) != (psm == 2u || psm == 0xAu))
                {
                    // A 32-bit target drawn to as 16-bit pixels, textured with itself or with a depth buffer in the same
                    // 16-bit view: a channel shuffle, done in one full-screen pass. Anything else is not translated.
                    const bool fromSelf = (tpsm == 2u || tpsm == 0xAu) && tbp == fbp * 32u && tbw == fbw;
                    const bool fromDepth = (tpsm == 0x32u || tpsm == 0x3Au) && (tbp & 31u) == 0u && tbw == fbw;
                    if ((psm == 2u || psm == 0xAu) && flatSprite && (fromSelf || fromDepth) && (uint32_t(batch.ctx.tex0 >> 35) & 3u) == 1u
                        && ((batch.mode & 0x40u) == 0u || (uint32_t(batch.ctx.alpha) & 0xFFu) == 0x2Au)) // with blending off too: Silent Hill Origins' flashlight mask
                        batch.shuffle = true;
                    else if (!GS_ENV_FLAG("PS2X_GS_NATIVE_ALIAS_SKIP"))
                    {
                        // The memory changes pixel size: Silent Hill Origins captures the frame for its inventory's
                        // status box into the same buffers as 16-bit and 32-bit pictures in turn. Skipping the draw left
                        // the old picture (and garbage) there for good; instead what the old target drew goes back to
                        // VRAM and the draw makes a new target in its own format, read from that memory.
                        static unsigned logged = 0;
                        if (logged++ < 20u)
                            std::fprintf(stderr, "[native-gs] target fbp=%u fbw=%u changes pixel size (psm %02x -> %02x)\n", fbp, fbw, found->second.psm, psm);
                        endPass();
                        const std::bitset<kVramBytes / 256u> drawnThere = found->second.gpuDirty;
                        syncFromGpu(drawnThere);
                        targets.erase(found);
                    }
                    else
                        batch.skip = true, batch.skipReason = SkipAliasedTarget;
                }
            }
            batch.firstVertex = chunkUsed;
            batchOpen = true;
        }

        GpuVertex *reserve(uint32_t count)
        {
            if (!chunk || chunkUsed + count > kChunkVertices)
            {
                // Out of room: what is queued goes out with the old buffer, the batch carries on in a new one.
                const Batch saved = batch;
                closeBatch();
                if (chunk)
                {
                    // Command buffers finish in order: when the last one that may use this buffer is done, it is free.
                    ensureCommandBuffer();
                    gpu::BufferRef used = chunk;
                    Renderer *self = this;
                    commandBuffer->onCompleted([self, used](double, double) {
                      std::lock_guard<std::mutex> lock(self->chunkMutex);
                      self->chunkPool.push_back(used);
                    });
                    flush(false);
                    chunk = nullptr;
                }
                {
                    std::lock_guard<std::mutex> lock(chunkMutex);
                    if (!chunkPool.empty())
                    {
                        chunk = chunkPool.back();
                        chunkPool.pop_back();
                    }
                }
                if (!chunk)
                    chunk = device->newBuffer(kChunkVertices * sizeof(GpuVertex));
                chunkUsed = 0;
                batch = saved;
                batch.firstVertex = 0;
                batch.vertexCount = 0;
                batchOpen = true;
            }
            GpuVertex *out = static_cast<GpuVertex *>(chunk->contents) + chunkUsed;
            chunkUsed += count;
            batch.vertexCount += count;
            return out;
        }

        // GPU time per scanout, watched in windows of 120: when the GPU needed more than a vertical blank for some of
        // them, a line goes to stderr with the "[black-fps]" tag the launcher keeps in recomp/diagnostics/hitches.log
        // (the game's own counters do not see a late GPU: it hands every frame over on time).
        uint64_t windowGpu = 0, windowWorst = 0, windowLate = 0, windowCount = 0, lastGpu = 0, windowPasses = 0, windowDraws = 0, windowPrimitives = 0, windowCopies = 0;
        void noteScanout()
        {
            ++frameIndex;
            if (logging())
                std::fprintf(stderr, "[scanout] %llu\n", (unsigned long long)scanouts);
            batchIndexInScanout = 0;
            const uint64_t total = g_gpuNanoseconds.load(std::memory_order_relaxed), spent = total - lastGpu;
            lastGpu = total;
            windowGpu += spent;
            windowWorst = std::max(windowWorst, spent);
            windowLate += spent > 16000000u ? 1u : 0u;
            if (++windowCount < 120u)
                return;
            // On screen: frames that came more than 25 ms after the one before them are the ones the eye sees.
            const uint64_t shown = g_presented.exchange(0u), late = g_presentLate.exchange(0u), gap = g_presentWorst.exchange(0u);
            if (late != 0u || statsEnabled)
                std::fprintf(stderr, "[black-fps] gpu: %llu of %llu frames reached the screen late (longest gap %.1f ms) | GPU mean %.1f ms, %llu of 120 scanouts over 16 ms | per scanout: %.0f passes, %.0f flush requests, %.0f draws, %.0f primitives, %.1f copies of a target | scale %u\n",
                             (unsigned long long)late, (unsigned long long)shown, double(gap) / 1e6, double(windowGpu) / 120e6, (unsigned long long)windowLate, double(passes - windowPasses) / 120.0, double(flushRequests - windowFlushes) / 120.0,
                             double(drawCalls - windowDraws) / 120.0, double(drawn - windowPrimitives) / 120.0, double(selfSamples - windowCopies) / 120.0, scale);
            windowGpu = windowWorst = windowLate = windowCount = 0;
            windowPasses = passes;
            windowFlushes = flushRequests;
            windowDraws = drawCalls;
            windowPrimitives = drawn;
            windowCopies = selfSamples;
        }

        void ensureCommandBuffer()
        {
            if (commandBuffer)
                return;
            commandBuffer = device->commandBuffer();
            commandBuffer->onCompleted([](double gpuStart, double gpuEnd) {
                    // Command buffers overlap on the GPU (the next one starts while this one is still finishing): the
                    // time is counted once, as the union of their intervals, or the sum would say the GPU is busier than
                    // it is.
                    static std::mutex busyMutex;
                    static double busyUntil = 0.0;
                    std::lock_guard<std::mutex> lock(busyMutex);
                    const double begin = std::max(gpuStart, busyUntil), end = gpuEnd;
                    if (end > begin)
                        g_gpuNanoseconds.fetch_add(uint64_t((end - begin) * 1e9), std::memory_order_relaxed);
                    busyUntil = std::max(busyUntil, end);
                });
        }

        void endPass(const char *caller = __builtin_FUNCTION(), int line = __builtin_LINE())
        {
            if (encoder)
            {
                if (GS_ENV_FLAG("PS2X_GS_NATIVE_PASS_LOG"))
                    std::fprintf(stderr, "[pass] ended by %s:%d after %llu draws\n", caller, line, (unsigned long long)(drawCalls - passDrawsStart));
                encoder->end();
                encoder = nullptr;
                // PS2X_GS_NATIVE_PASS_TIMES=1 (diagnostic, slow): every pass in a command buffer of its own, so the GPU
                // time of each can be read; the totals per target are printed at the end.
                if (passTimes && commandBuffer)
                {
                    const uint64_t key = passTarget;
                    const uint64_t draws = drawCalls - passDrawsStart;
                    commandBuffer->onCompleted([key, draws](double gpuStart, double gpuEnd) {
                      std::lock_guard<std::mutex> lock(g_passTimeMutex);
                      PassTime &entry = g_passTime[key];
                      entry.seconds += gpuEnd - gpuStart;
                      entry.passes += 1;
                      entry.draws += draws;
                    });
                    commandBuffer->commit();
                    commandBuffer->waitUntilCompleted(); // one at a time, or the intervals overlap and add up to more than the frame
                    lastCommitted = commandBuffer;
                    commandBuffer = nullptr;
                    // Callers go on to encode right after ending a pass.
                    ensureCommandBuffer();
                }
            }
            passTarget = passDepth = ~0ull;
        }

        // PS2X_GS_NATIVE_PASS_TIMES=1: what is queued so far, committed and waited for under that name.
        void commitTimed(const std::string &name)
        {
            if (!commandBuffer)
                return;
            commandBuffer->onCompleted([name](double gpuStart, double gpuEnd) {
                std::lock_guard<std::mutex> lock(g_passTimeMutex);
                PassTime &entry = g_sectionTime[name];
                entry.seconds += gpuEnd - gpuStart;
                entry.passes += 1;
            });
            commandBuffer->commit();
            commandBuffer->waitUntilCompleted();
            lastCommitted = commandBuffer;
            commandBuffer = nullptr;
        }
        // The GPU work encoded while it lives, timed apart from the rest (PS2X_GS_NATIVE_PASS_TIMES=1 only).
        struct TimedSection
        {
            Renderer &r;
            const char *name;
            TimedSection(Renderer &renderer, const char *what) : r(renderer), name(what)
            {
                if (!r.passTimes)
                    return;
                r.endPass();
                r.commitTimed("other");
                r.ensureCommandBuffer();
            }
            ~TimedSection()
            {
                if (!r.passTimes)
                    return;
                r.endPass();
                r.commitTimed(name);
                r.ensureCommandBuffer();
            }
        };

        static uint32_t expand(uint32_t value, uint32_t psm, uint32_t ta0, uint32_t ta1, bool aem)
        {
            switch (psm)
            {
            case 0x00: return value;
            case 0x01: return (value & 0xFFFFFFu) | ((aem && (value & 0xFFFFFFu) == 0u ? 0u : ta0) << 24);
            case 0x02: case 0x0A:
            {
                const uint32_t rgb = ((value & 0x1Fu) << 3) | ((value & 0x3E0u) << 6) | ((value & 0x7C00u) << 9);
                const uint32_t alpha = (value & 0x8000u) != 0u ? ta1 : (aem && (value & 0x7FFFu) == 0u ? 0u : ta0);
                return rgb | (alpha << 24);
            }
            default: return value;
            }
        }

        Target &target(uint32_t fbp, uint32_t fbw, uint32_t psm)
        {
            Target &entry = targets[targetKey(fbp, fbw)];
            if (!entry.color)
            {
                const uint32_t scale = scaleOf(fbw);
                gpu::TextureDesc d;
                d.width = fbw * 64u * scale;
                d.height = kTargetHeight * scale;
                d.usage = gpu::RenderTarget | gpu::ShaderRead;
                d.storage = gpu::Storage::Shared;
                entry.color = device->newTexture(d);
                entry.fbp = fbp;
                entry.fbw = fbw;
                entry.psm = psm;
                entry.stale.set();
            }
            return entry;
        }

        // Brings the pages a host transfer wrote since the last use from the CPU copy of VRAM into the texture.
        void refreshTarget(Target &target, uint32_t psm)
        {
            BusyTimer timed(g_refreshNs);
            if (target.stale.none())
                return;
            g_refreshes.fetch_add(1, std::memory_order_relaxed);
            ++target.changesSincePresent;
            const bool narrow = psm == 2u || psm == 0xAu; // 16-bit pages hold 64x64 pixels
            const uint32_t pageHeight = narrow ? 64u : 32u, pages = target.pageCount();
            // The pages go through a buffer and a blit in the command stream, in order with the draws around them: writing
            // the texture from the CPU would mean waiting for the GPU to finish everything queued so far.
            uint32_t count = 0;
            for (uint32_t page = 0; page < pages; ++page)
                if (target.stale.test(page) && (page / target.fbw + 1u) * pageHeight <= kTargetHeight)
                    ++count;
            const uint32_t scale = scaleOf(target.fbw);
            const uint32_t stride = 64u * scale, rows = pageHeight * scale;
            const size_t pageBytes = size_t(stride) * rows * 4u;
            gpu::BufferRef staging = count != 0u ? device->newBuffer(pageBytes * count) : nullptr;
            std::unique_ptr<gpu::BlitEncoder> blit;
            const gsn::Swizzle &layout = gsn::Swizzle::of(psm);
            uint32_t slot = 0;
            for (uint32_t page = 0; page < pages; ++page)
            {
                if (!target.stale.test(page))
                    continue;
                target.stale.reset(page);
                const uint32_t x0 = (page % target.fbw) * 64u, y0 = (page / target.fbw) * pageHeight;
                if (y0 + pageHeight > kTargetHeight)
                    continue;
                if (!blit)
                {
                    closeBatch();
                    endPass();
                    ensureCommandBuffer();
                    blit = commandBuffer->blit();
                }
                uint32_t *pixels = reinterpret_cast<uint32_t *>(static_cast<uint8_t *>(staging->contents) + pageBytes * slot);
                // Enlarged with bilinear interpolation between the game's pixels (clamped to the target): the content
                // written to VRAM by a transfer shows through later blended layers (Silent Hill Origins' fog over the
                // pages it uploads to every frame), and repeating each pixel scale x scale made hard square blocks.
                // PS2X_GS_NATIVE_REFRESH_BILINEAR=1 turns this on (experimental; no measured effect yet).
                static const bool nearest = [] { const char *v = std::getenv("PS2X_GS_NATIVE_REFRESH_BILINEAR"); return !(v && v[0] == '1'); }(); // bilinear is experimental, opt-in
                if (nearest || scale == 1u)
                {
                    // Built in ordinary cached memory and copied once: the staging buffer can be write-combined (discrete GPUs
                    // under Vulkan), where reading back the previous pixel/row per output pixel cost ~250 ms per page set at 4x.
                    static thread_local std::vector<uint32_t> scratch;
                    scratch.resize(size_t(stride) * rows);
                    uint32_t *out = scratch.data();
                    for (uint32_t y = 0; y < rows; ++y)
                        for (uint32_t x = 0; x < stride; ++x)
                            out[size_t(y) * stride + x] = (y % scale) != 0u ? out[size_t(y - 1u) * stride + x] : (x % scale) != 0u ? out[size_t(y) * stride + x - 1u]
                                : expand(layout.read(vram.data(), target.fbp * 32u, target.fbw, x0 + x / scale, y0 + y / scale), psm, 0x80u, 0x80u, false);
                    std::memcpy(pixels, out, pageBytes);
                }
                else
                {
                    const uint32_t targetWidth = target.fbw * 64u;
                    // The page plus one pixel of border on each side, at the game's resolution.
                    uint32_t source[(32u + 2u) * (64u + 2u)];
                    const uint32_t srcW = 64u + 2u, srcH = pageHeight + 2u;
                    std::vector<uint32_t> big;
                    uint32_t *src = source;
                    if (srcW * srcH > sizeof(source) / sizeof(source[0]))
                    {
                        big.resize(size_t(srcW) * srcH);
                        src = big.data();
                    }
                    for (uint32_t sy = 0; sy < srcH; ++sy)
                        for (uint32_t sx = 0; sx < srcW; ++sx)
                        {
                            const int gx = std::clamp<int>(int(x0) + int(sx) - 1, 0, int(targetWidth) - 1);
                            const int gy = std::clamp<int>(int(y0) + int(sy) - 1, 0, int(kTargetHeight) - 1);
                            src[size_t(sy) * srcW + sx] = expand(layout.read(vram.data(), target.fbp * 32u, target.fbw, uint32_t(gx), uint32_t(gy)), psm, 0x80u, 0x80u, false);
                        }
                    const float inv = 1.0f / float(scale);
                    for (uint32_t y = 0; y < rows; ++y)
                    {
                        const float fy = (float(y) + 0.5f) * inv - 0.5f + 1.0f; // +1: border
                        const int iy = int(std::floor(fy));
                        const float wy = fy - float(iy);
                        for (uint32_t x = 0; x < stride; ++x)
                        {
                            const float fx = (float(x) + 0.5f) * inv - 0.5f + 1.0f;
                            const int ix = int(std::floor(fx));
                            const float wx = fx - float(ix);
                            const uint32_t c00 = src[size_t(iy) * srcW + ix], c10 = src[size_t(iy) * srcW + ix + 1];
                            const uint32_t c01 = src[size_t(iy + 1) * srcW + ix], c11 = src[size_t(iy + 1) * srcW + ix + 1];
                            uint32_t out = 0u;
                            for (int shift = 0; shift < 32; shift += 8)
                            {
                                const float a = float((c00 >> shift) & 255u) * (1.0f - wx) + float((c10 >> shift) & 255u) * wx;
                                const float b = float((c01 >> shift) & 255u) * (1.0f - wx) + float((c11 >> shift) & 255u) * wx;
                                out |= uint32_t(a * (1.0f - wy) + b * wy + 0.5f) << shift;
                            }
                            pixels[size_t(y) * stride + x] = out;
                        }
                    }
                }
                blit->copyBufferToTexture(staging, pageBytes * slot, stride * 4u, stride, rows, target.color, x0 * scale, y0 * scale);
                ++slot;
            }
            if (blit)
                blit->end();
        }

        DepthTarget &depth(uint32_t zbp, uint32_t fbw)
        {
            DepthTarget &entry = depths[targetKey(zbp, fbw)];
            gpu::TextureRef &texture = entry.texture;
            if (!texture)
            {
                const uint32_t scale = scaleOf(fbw);
                gpu::TextureDesc d;
                d.format = gpu::Format::Depth32F;
                d.width = fbw * 64u * scale;
                d.height = kTargetHeight * scale;
                d.usage = gpu::RenderTarget | gpu::ShaderRead;
                d.storage = gpu::Storage::Private;
                texture = device->newTexture(d);
                // Starts as what VRAM holds there (24-bit Z), e.g. a buffer the game filled before it was first used here.
                const uint32_t width = fbw * 64u * scale, rows = kTargetHeight * scale;
                gpu::BufferRef staging = device->newBuffer(size_t(width) * rows * 4u);
                float *values = static_cast<float *>(staging->contents);
                const gsn::Swizzle &layout = gsn::Swizzle::of(0x31u);
                for (uint32_t y = 0; y < rows; ++y)
                    for (uint32_t x = 0; x < width; ++x)
                        values[size_t(y) * width + x] = float(layout.read(vram.data(), zbp * 32u, fbw, x / scale, y / scale)) * (1.0f / 16777216.0f);
                endPass();
                ensureCommandBuffer();
                auto blit = commandBuffer->blit();
                blit->copyBufferToTexture(staging, 0, width * 4u, width, rows, texture, 0, 0);
                blit->end();
            }
            return entry;
        }

        gpu::DepthStateRef depthState(bool test, bool greaterOnly, bool write)
        {
            gpu::DepthDesc d;
            d.compare = !test ? gpu::Compare::Always : greaterOnly ? gpu::Compare::Greater : gpu::Compare::GreaterEqual;
            d.write = write;
            return device->depthState(d);
        }

        // The region modes resolve the coordinate in the shader; the sampler only has to stay out of the way.
        gpu::SamplerRef sampler(bool linear, uint32_t wrapU, uint32_t wrapV)
        {
            gpu::SamplerDesc d;
            d.linear = linear;
            d.clampU = wrapU != 0u;
            d.clampV = wrapV != 0u;
            return device->sampler(d);
        }

        // ---- texture replacement packs (PS2X_TEXTURE_PACKS), same naming and hashes as PCSX2 ----
        texrepl::Pack replPack;
        struct ReplEntry
        {
            gpu::TextureRef texture; // empty: the file could not be used, do not try again
            size_t bytes = 0;
            uint64_t lastUse = 0;
        };
        std::unordered_map<texrepl::Key, ReplEntry, texrepl::KeyHash> replCache;
        std::unordered_set<const void *> replacedTextures;
        std::unordered_set<texrepl::Key, texrepl::KeyHash> replLogged;
        size_t replBytes = 0, replBudget = 2048ull << 20;
        uint64_t replClock = 0, replLookups = 0, replHitsBase = 0, replHitsMips = 0, replLoadFailures = 0;
        bool replLog = false, replReady = false;

        void initReplacements()
        {
            if (replReady)
                return;
            replReady = true;
            if (const char *dirs = std::getenv("PS2X_TEXTURE_PACKS"))
                replPack.scan(dirs);
            if (const char *mb = std::getenv("PS2X_TEXTURE_CACHE_MB"))
                replBudget = size_t(std::max(64, std::atoi(mb))) << 20;
            replLog = std::getenv("PS2X_TEXTURE_LOG") != nullptr;
            if (replPack.size() != 0 && !device->supportsBC())
            {
                std::fprintf(stderr, "[texrepl] this GPU has no BC texture compression: replacements disabled\n");
                replPack = texrepl::Pack();
            }
        }

        bool loadPng(const std::string &path, texrepl::Image &out)
        {
#if !defined(__APPLE__)
            (void)path; (void)out;
            return false; // PNG replacements: macOS only for now (DDS works everywhere)
#else
            CFURLRef url = CFURLCreateFromFileSystemRepresentation(nullptr, reinterpret_cast<const UInt8 *>(path.c_str()), CFIndex(path.size()), false);
            CGImageSourceRef source = url ? CGImageSourceCreateWithURL(url, nullptr) : nullptr;
            if (url)
                CFRelease(url);
            if (!source)
                return false;
            CGImageRef image = CGImageSourceCreateImageAtIndex(source, 0, nullptr);
            CFRelease(source);
            if (!image)
                return false;
            const size_t w = CGImageGetWidth(image), h = CGImageGetHeight(image);
            if (w == 0 || h == 0 || w > 8192 || h > 8192)
            {
                CGImageRelease(image);
                return false;
            }
            std::vector<uint8_t> rgba(w * h * 4);
            CGColorSpaceRef space = CGColorSpaceCreateDeviceRGB();
            CGContextRef context = CGBitmapContextCreate(rgba.data(), w, h, 8, w * 4, space, kCGImageAlphaPremultipliedLast | kCGBitmapByteOrder32Big);
            CGColorSpaceRelease(space);
            if (!context)
            {
                CGImageRelease(image);
                return false;
            }
            CGContextDrawImage(context, CGRectMake(0, 0, double(w), double(h)), image);
            CGContextRelease(context);
            CGImageRelease(image);
            for (size_t i = 0; i < w * h; ++i) // back to straight alpha
            {
                uint8_t *p = &rgba[i * 4];
                if (p[3] != 0 && p[3] != 255)
                    for (int c = 0; c < 3; ++c)
                        p[c] = uint8_t(std::min(255u, (uint32_t(p[c]) * 255u + p[3] / 2u) / p[3]));
            }
            texrepl::buildMips(out, uint32_t(w), uint32_t(h), std::move(rgba));
            return true;
#endif
        }

        gpu::TextureRef loadReplacement(const texrepl::Key &key, const std::string &path)
        {
            ReplEntry &entry = replCache[key];
            entry.lastUse = ++replClock;
            if (entry.texture)
                return entry.texture;
            if (entry.bytes == ~size_t(0)) // failed before
                return nullptr;
            texrepl::Image image;
            const bool dds = path.size() > 4 && (path.compare(path.size() - 4, 4, ".dds") == 0 || path.compare(path.size() - 4, 4, ".DDS") == 0);
            if (!(dds ? texrepl::loadDds(path, image) : loadPng(path, image)))
            {
                entry.bytes = ~size_t(0);
                ++replLoadFailures;
                std::fprintf(stderr, "[texrepl] cannot load %s\n", path.c_str());
                return nullptr;
            }
            gpu::TextureDesc d;
            d.format = image.format == texrepl::Image::BC1 ? gpu::Format::BC1 : image.format == texrepl::Image::BC3 ? gpu::Format::BC3 : gpu::Format::RGBA8;
            d.width = image.levels[0].width;
            d.height = image.levels[0].height;
            d.levels = uint32_t(image.levels.size());
            gpu::TextureRef texture = device->newTexture(d);
            if (!texture)
            {
                entry.bytes = ~size_t(0);
                return nullptr;
            }
            for (size_t level = 0; level < image.levels.size(); ++level)
            {
                const texrepl::Level &lv = image.levels[level];
                device->replaceRegion(texture, uint32_t(level), 0, 0, lv.width, lv.height, image.data.data() + lv.offset, lv.rowBytes);
            }
            entry.texture = texture;
            entry.bytes = image.data.size();
            replBytes += entry.bytes;
            replacedTextures.insert(texture.get());
            // Over budget: drop the least recently used ones. Whoever still points at an evicted texture (a decoded entry, the
            // content cache) forgets it too, so the "replaced" flag can never outlive the texture it belongs to.
            std::vector<gpu::TextureRef> evicted;
            while (replBytes > replBudget)
            {
                auto oldest = replCache.end();
                for (auto it = replCache.begin(); it != replCache.end(); ++it)
                    if (it->second.texture && it->second.lastUse != replClock && (oldest == replCache.end() || it->second.lastUse < oldest->second.lastUse))
                        oldest = it;
                if (oldest == replCache.end())
                    break;
                replBytes -= oldest->second.bytes;
                evicted.push_back(oldest->second.texture);
                replCache.erase(oldest);
            }
            if (!evicted.empty())
            {
                for (auto &kv : textures)
                    for (const gpu::TextureRef &gone : evicted)
                        if (kv.second.texture == gone)
                        {
                            kv.second.texture = nullptr;
                            kv.second.valid = false;
                            kv.second.hash = 0;
                        }
                for (auto it = contentCache.begin(); it != contentCache.end();)
                {
                    bool match = false;
                    for (const gpu::TextureRef &gone : evicted)
                        match = match || it->second == gone;
                    it = match ? contentCache.erase(it) : std::next(it);
                }
                for (const gpu::TextureRef &gone : evicted)
                    replacedTextures.erase(gone.get());
            }
            return texture;
        }

        // The replacement for an indexed texture, or nil. `indices` holds one byte per texel for each mip level.
        gpu::TextureRef findReplacement(const std::vector<uint8_t> *indices, uint32_t levelCount, const uint32_t *palette, uint32_t entries, uint64_t tex0)
        {
            ++replLookups;
            texrepl::Key key;
            key.bits = (uint32_t(tex0 >> 20) & 0x3Fu) | ((uint32_t(tex0 >> 26) & 15u) << 6) | ((uint32_t(tex0 >> 30) & 15u) << 10);
            key.clut = XXH3_64bits(palette, size_t(entries) * 4u);
            // PCSX2 hashes the base level and then as many mip levels as the draw it saw used: try every prefix.
            const std::string *path = nullptr;
            uint32_t usedLevels = 0;
            {
                XXH3_state_t state;
                XXH3_64bits_reset(&state);
                for (uint32_t level = 0; level < levelCount && !path; ++level)
                {
                    XXH3_64bits_update(&state, indices[level].data(), indices[level].size());
                    key.tex = XXH3_64bits_digest(&state);
                    path = replPack.find(key);
                    usedLevels = level + 1u;
                }
            }
            const bool withMips = path && usedLevels > 1u;
            if (replLog && replLogged.insert(key).second)
                std::fprintf(stderr, "[texrepl] %s %016llx-%016llx-%08x levels=%u used=%u\n", path ? (withMips ? "hit+mips" : "hit") : "miss", (unsigned long long)key.tex, (unsigned long long)key.clut, key.bits, levelCount, usedLevels);
            if (!path)
            {
                // Diagnostic: PS2X_TEXTURE_DUMP=<dir> writes the indices and palette of what found no replacement.
                if (const char *dump = std::getenv("PS2X_TEXTURE_DUMP"))
                {
                    char name[512];
                    for (uint32_t level = 0; level < levelCount; ++level)
                    {
                        std::snprintf(name, sizeof name, "%s/%016llx-%08x-L%u.bin", dump, (unsigned long long)key.clut, key.bits, level);
                        if (FILE *f = std::fopen(name, "wb"))
                        {
                            std::fwrite(indices[level].data(), 1, indices[level].size(), f);
                            std::fclose(f);
                        }
                    }
                    std::snprintf(name, sizeof name, "%s/%016llx-%08x-palette.bin", dump, (unsigned long long)key.clut, key.bits);
                    if (FILE *f = std::fopen(name, "wb"))
                    {
                        std::fwrite(palette, 4, entries, f);
                        std::fclose(f);
                    }
                }
                return nullptr;
            }
            gpu::TextureRef texture = loadReplacement(key, *path);
            if (texture)
                ++(withMips ? replHitsMips : replHitsBase);
            return texture;
        }

        // The texture TEX0 names, decoded from the CPU copy of VRAM into RGBA (palette applied).
        gpu::TextureRef texture(const gsn::Context &ctx, uint64_t texa)
        {
            BusyTimer timed(g_textureNs);
            const uint64_t tex0 = ctx.tex0;
            // Mip levels live at their own addresses (MIPTBP1/2), each half the size of the one above.
            struct Level { uint32_t tbp, tbw, width, height; };
            Level levels[7];
            uint32_t levelCount = 1;
            {
                const uint32_t wanted = std::min<uint32_t>(uint32_t(ctx.tex1 >> 2) & 7u, 6u);
                const uint32_t w0 = 1u << std::min<uint32_t>(uint32_t(tex0 >> 26) & 15u, 10u), h0 = 1u << std::min<uint32_t>(uint32_t(tex0 >> 30) & 15u, 10u);
                for (uint32_t level = 1; level <= wanted && (w0 >> level) != 0u && (h0 >> level) != 0u; ++level)
                {
                    const uint64_t reg = level <= 3u ? ctx.miptbp1 : ctx.miptbp2;
                    const uint32_t shift = ((level - 1u) % 3u) * 20u;
                    levels[level] = {uint32_t(reg >> shift) & 0x3FFFu, std::max<uint32_t>(uint32_t(reg >> (shift + 14u)) & 0x3Fu, 1u), w0 >> level, h0 >> level};
                    levelCount = level + 1u;
                }
            }
            const uint32_t tbp = uint32_t(tex0) & 0x3FFFu, tbw = std::max<uint32_t>(uint32_t(tex0 >> 14) & 0x3Fu, 1u), psm = uint32_t(tex0 >> 20) & 0x3Fu;
            const uint32_t width = 1u << std::min<uint32_t>(uint32_t(tex0 >> 26) & 15u, 10u), height = 1u << std::min<uint32_t>(uint32_t(tex0 >> 30) & 15u, 10u);
            const uint32_t cbp = uint32_t(tex0 >> 37) & 0x3FFFu, cpsm = uint32_t(tex0 >> 51) & 15u;
            const bool paletted = isPaletted(psm);
            if (isDepthFormat(psm))
                return fallbackTexture;
            // Everything that decides the pixels, except their bytes: address, format, size, palette, TEXA.
            uint64_t key = ((tex0 & 0x3FFFFFFFFull) | (paletted ? tex0 & (0x1FFFFFFull << 37) : 0u)) ^ (texa * 0x9E3779B97F4A7C15ull);
            for (uint32_t level = 1; level < levelCount; ++level)
                key = (key ^ (uint64_t(levels[level].tbp) | (uint64_t(levels[level].tbw) << 14) | (uint64_t(level) << 20))) * 0x100000001b3ull;
            levels[0] = {tbp, tbw, width, height};
            TextureEntry &entry = textures[key];
            // Valid until a transfer changes one of its blocks or a target draws over one: both are told to the entry
            // through the per-block user lists, so this test costs nothing per lookup.
            if (entry.texture && entry.valid && !entry.drawnOver)
                return entry.texture;
            if (entry.drawnOver || !entry.registered)
            {
                // What a target drew over this texture's memory has to come back to VRAM first.
                std::bitset<kVramBytes / 256u> needed;
                if (entry.registered)
                    for (const uint16_t block : entry.pages)
                        needed.set(block);
                else
                {
                    if (paletted)
                        for (uint32_t block = cbp; block < cbp + (psm == 0x13u || psm == 0x1Bu ? 4u : 1u) && block < kVramBytes / 256u; ++block)
                            needed.set(block);
                    const gsn::Swizzle &where = gsn::Swizzle::of(psm);
                    // Only what can be sampled: a region clamp limits it, and a texture declared larger than its buffer
                    // (Silent Hill Origins reads the 512x448 frame as a 1024x1024 16-bit texture for the flashlight)
                    // reaches no further than the buffer's width and a frame's height. Asking for all of it made every
                    // frame wait for pages of the blur buffer that lie past it.
                    const uint32_t wms = uint32_t(ctx.clamp) & 3u, wmt = uint32_t(ctx.clamp >> 2) & 3u;
                    const uint32_t clampU = wms == 2u ? (uint32_t(ctx.clamp >> 14) & 0x3FFu) + 1u : ~0u;
                    const uint32_t clampV = wmt == 2u ? (uint32_t(ctx.clamp >> 34) & 0x3FFu) + 1u : ~0u;
                    for (uint32_t level = 0; level < levelCount; ++level)
                    {
                        const uint32_t w = std::min({levels[level].width, std::max(levels[level].tbw, 1u) * 64u, level ? ~0u : clampU});
                        const uint32_t h = std::min({levels[level].height, levels[level].width > levels[level].tbw * 64u ? kTargetHeight : ~0u, level ? ~0u : clampV});
                        for (uint32_t y = 0; y < h; y += 8u)
                            for (uint32_t x = 0; x < w; x += 8u)
                                needed.set(where.bitAddress(levels[level].tbp, levels[level].tbw, x, y) >> 11);
                    }
                }
                syncReason = tex0;
                syncFromGpu(needed);
                entry.drawnOver = false;
                if (entry.texture && entry.valid)
                    return entry.texture;
            }
            const uint32_t ta0 = uint32_t(texa) & 0xFFu, ta1 = uint32_t(texa >> 32) & 0xFFu;
            const bool aem = ((texa >> 15) & 1u) != 0u;
            uint32_t palette[256];
            uint64_t paletteHash = 0xcbf29ce484222325ull;
            const gsn::Swizzle &layout = gsn::Swizzle::of(psm);
            if (paletted)
            {
                const gsn::Swizzle &clut = gsn::Swizzle::of(cpsm);
                const uint32_t entries = psm == 0x13u || psm == 0x1Bu ? 256u : 16u;
                for (uint32_t i = 0; i < entries; ++i)
                {
                    // CSM1 layout: 16x16 with the middle index bits swapped, or 8x2.
                    const uint32_t at = entries == 256u ? (i & 0xE7u) | ((i & 0x08u) << 1) | ((i & 0x10u) >> 1) : i;
                    const uint32_t x = entries == 256u ? at & 15u : at & 7u, y = entries == 256u ? at >> 4 : at >> 3;
                    palette[i] = expand(clut.read(vram.data(), cbp, 1u, x, y), cpsm, ta0, ta1, aem);
                    paletteHash = (paletteHash ^ palette[i]) * 0x100000001b3ull;
                }
            }
            if (!entry.registered)
            {
                // The key fixes the address, format and size, so the blocks of an entry never change: listed once,
                // level by level (the first level also carries the palette's blocks).
                std::bitset<kVramBytes / 256u> used;
                if (paletted)
                {
                    const gsn::Swizzle &clut = gsn::Swizzle::of(cpsm);
                    for (uint32_t y = 0; y < (psm == 0x13u || psm == 0x1Bu ? 16u : 2u); y += 8u)
                        for (uint32_t x = 0; x < (psm == 0x13u || psm == 0x1Bu ? 16u : 8u); x += 8u)
                            used.set(clut.bitAddress(cbp, 1u, x, y) >> 11);
                }
                std::bitset<kVramBytes / 256u> all = used;
                entry.pages.clear();
                entry.mipBlocks.clear();
                for (uint32_t level = 0; level < levelCount; ++level)
                {
                    std::bitset<kVramBytes / 256u> mine;
                    for (uint32_t y = 0; y < levels[level].height; y += 8u)
                        for (uint32_t x = 0; x < levels[level].width; x += 8u)
                            mine.set(layout.bitAddress(levels[level].tbp, levels[level].tbw, x, y) >> 11);
                    all |= mine;
                    entry.mipStart[level] = uint32_t(entry.mipBlocks.size());
                    if (level != 0u)
                        for (uint32_t block = 0; block < kVramBytes / 256u; ++block)
                            if (mine.test(block))
                                entry.mipBlocks.push_back(uint16_t(block));
                }
                entry.mipStart[levelCount] = uint32_t(entry.mipBlocks.size());
                for (uint32_t block = 0; block < kVramBytes / 256u; ++block)
                    if (all.test(block))
                    {
                        entry.pages.push_back(uint16_t(block));
                        blockUsers[block].push_back(&entry);
                    }
                entry.registered = true;
            }
            entry.valid = true;

            // The same bytes as an earlier upload, in the same format: the texture decoded then.
            const auto record = uploads.find(tbp);
            bool known = record != uploads.end() && generationSum(record->second.blocks) == record->second.blockSum;
            if (record == uploads.end())
                ++unknownNoUpload;
            else if (!known)
                ++unknownChanged;
            const bool knownBase = known;
            // Mip levels may have been sent on their own: each one is identified by the upload that covers it.
            uint64_t mipHash = 0;
            for (uint32_t level = 1; level < levelCount && known; ++level)
            {
                const uint32_t first = entry.mipStart[level], last = entry.mipStart[level + 1u];
                const uint32_t owner = first != last ? blockOwner[entry.mipBlocks[first]] : 0u;
                const auto from = owner != 0u ? uploads.find(owner - 1u) : uploads.end();
                known = from != uploads.end() && generationSum(from->second.blocks) == from->second.blockSum;
                for (uint32_t i = first; i < last && known; ++i)
                    known = blockOwner[entry.mipBlocks[i]] == owner;
                if (known)
                    mipHash = (mipHash ^ from->second.hash ^ uint64_t(levels[level].tbp - (owner - 1u))) * 0x100000001b3ull;
            }
            if (knownBase && !known)
                ++unknownMips;
            const uint64_t contentKey = known ? (record->second.hash ^ (paletteHash * 0x9E3779B97F4A7C15ull) ^ ((tex0 >> 14) & 0xFFFFFull) * 0xD6E8FEB86659FD93ull ^ (texa << 1) ^ (uint64_t(levelCount) << 60) ^ mipHash) : 0u;
            if (known)
            {
                const auto hit = contentCache.find(contentKey);
                if (hit != contentCache.end())
                {
                    entry.texture = hit->second;
                    entry.hash = ~0ull;
                    ++contentHits;
                    return entry.texture;
                }
            }

            initReplacements();
            const bool wantIndices = paletted && replPack.size() != 0;
            std::vector<uint8_t> indices[7];
            const uint32_t indexMask = psm == 0x13u || psm == 0x1Bu ? 0xFFu : 0x0Fu;
            std::vector<uint32_t> pixels[7];
            uint64_t hash = 0xcbf29ce484222325ull;
            for (uint32_t level = 0; level < levelCount; ++level)
            {
                const Level &from = levels[level];
                pixels[level].resize(size_t(from.width) * from.height);
                if (wantIndices)
                    indices[level].resize(size_t(from.width) * from.height);
                for (uint32_t y = 0; y < from.height; ++y)
                    for (uint32_t x = 0; x < from.width; ++x)
                    {
                        const uint32_t value = layout.read(vram.data(), from.tbp, from.tbw, x, y);
                        const uint32_t pixel = paletted ? palette[value & 0xFFu] : expand(value, psm, ta0, ta1, aem);
                        pixels[level][size_t(y) * from.width + x] = pixel;
                        if (wantIndices)
                            indices[level][size_t(y) * from.width + x] = uint8_t(value & indexMask);
                        hash = (hash ^ pixel) * 0x100000001b3ull;
                    }
            }
            ++decodes;
            g_decodedSince.fetch_add(1u, std::memory_order_relaxed);
            if (wantIndices && (psm == 0x13u || psm == 0x14u))
            {
                // PCSX2 hashes plain 8- and 4-bit textures as the raw 256-byte GS blocks, row of blocks by row of blocks (a level
                // smaller than a block is hashed as expanded indices instead): the bytes a decoder never sees unswizzled.
                const uint32_t blockW = psm == 0x13u ? 16u : 32u, blockH = 16u;
                for (uint32_t level = 0; level < levelCount; ++level)
                {
                    const Level &from = levels[level];
                    if (from.width < blockW || from.height < blockH)
                        continue;
                    std::vector<uint8_t> &raw = indices[level];
                    raw.clear();
                    raw.reserve(size_t(from.width / blockW) * (from.height / blockH) * 256u);
                    for (uint32_t by = 0; by < from.height / blockH; ++by)
                        for (uint32_t bx = 0; bx < from.width / blockW; ++bx)
                        {
                            const uint8_t *block = vram.data() + (layout.bitAddress(from.tbp, from.tbw, bx * blockW, by * blockH) >> 3);
                            raw.insert(raw.end(), block, block + 256);
                        }
                }
            }
            if (wantIndices)
            {
                if (gpu::TextureRef replacement = findReplacement(indices, levelCount, palette, psm == 0x13u || psm == 0x1Bu ? 256u : 16u, tex0))
                {
                    entry.texture = replacement;
                    entry.hash = ~0ull;
                    if (known)
                        contentCache[contentKey] = replacement;
                    return replacement;
                }
            }
            if (!entry.texture || entry.hash != hash)
            {
                // A texture a queued draw may still sample is never rewritten: a new one takes its place.
                gpu::TextureDesc d;
                d.width = width;
                d.height = height;
                d.levels = levelCount;
                entry.texture = device->newTexture(d);
                for (uint32_t level = 0; level < levelCount; ++level)
                    device->replaceRegion(entry.texture, level, 0, 0, levels[level].width, levels[level].height, pixels[level].data(), levels[level].width * 4u);
                entry.hash = hash;
            }
            if (known)
                contentCache[contentKey] = entry.texture;
            return entry.texture;
        }

        // The 256 palette entries TEX0 names (CSM1), as a 256x1 texture.
        // The 256 palette entries TEX0 names (CSM1), as a texture in the layout they have in VRAM (16x16). A palette the
        // game drew on the GPU is copied from the target inside the command stream, with no trip through the CPU.
        gpu::TextureRef palette(uint64_t tex0, uint64_t texa, uint32_t &texelsPerEntry)
        {
            const uint32_t cbp = uint32_t(tex0 >> 37) & 0x3FFFu, cpsm = uint32_t(tex0 >> 51) & 15u;
            const uint32_t ta0 = uint32_t(texa) & 0xFFu, ta1 = uint32_t(texa >> 32) & 0xFFu;
            const bool aem = ((texa >> 15) & 1u) != 0u;
            texelsPerEntry = 1;
            if (cbp < kVramBytes / 256u && gpuDirtyBlocks.test(cbp))
                for (auto &entry : targets)
                {
                    Target &target = entry.second;
                    if (!target.gpuDirty.test(cbp) || (target.psm != 0u && target.psm != 1u))
                        continue;
                    const gsn::Swizzle &layout = gsn::Swizzle::of(target.psm);
                    for (uint32_t y = 0; y + 16u <= kTargetHeight; y += 8u)
                        for (uint32_t x = 0; x + 16u <= target.fbw * 64u; x += 8u)
                        {
                            if ((layout.bitAddress(target.fbp * 32u, target.fbw, x, y) >> 11) != cbp)
                                continue;
                            const uint32_t scale = scaleOf(target.fbw);
                            gpu::TextureRef &copy = drawnPalettes[cbp];
                            if (!copy || copy->width != 16u * scale)
                            {
                                gpu::TextureDesc d;
                                d.width = d.height = 16u * scale;
                                d.storage = gpu::Storage::Private;
                                copy = device->newTexture(d);
                            }
                            endPass();
                            ensureCommandBuffer();
                            auto blit = commandBuffer->blit();
                            blit->copyTexture(target.color, x * scale, y * scale, 16u * scale, 16u * scale, copy, 0, 0);
                            blit->end();
                            texelsPerEntry = scale;
                            ++drawnPaletteCopies;
                            return copy;
                        }
                }
            uint32_t entries[256];
            uint64_t hash = 0xcbf29ce484222325ull;
            const gsn::Swizzle &layout = gsn::Swizzle::of(cpsm);
            for (uint32_t i = 0; i < 256u; ++i)
            {
                entries[i] = expand(layout.read(vram.data(), cbp, 1u, i & 15u, i >> 4), cpsm, ta0, ta1, aem);
                hash = (hash ^ entries[i]) * 0x100000001b3ull;
            }
            auto &entry = palettes[uint64_t(cbp) | (uint64_t(cpsm) << 16) | ((texa * 0x9E3779B97F4A7C15ull) << 20)];
            if (!entry.first || entry.second != hash)
            {
                gpu::TextureDesc d;
                d.width = d.height = 16;
                entry.first = device->newTexture(d);
                device->replaceRegion(entry.first, 0, 0, 0, 16, 16, entries, 64);
                entry.second = hash;
            }
            return entry.first;
        }

        void shuffle()
        {
            const gsn::Context &ctx = batch.ctx;
            const uint32_t fbp = uint32_t(ctx.frame) & 0x1FFu, fbw = uint32_t(ctx.frame >> 16) & 0x3Fu, fbmask = uint32_t(ctx.frame >> 32);
            const uint32_t tbp = uint32_t(ctx.tex0) & 0x3FFFu, tpsm = uint32_t(ctx.tex0 >> 20) & 0x3Fu;
            if (logging())
                std::fprintf(stderr, "[shuffle] source half %u -> destination half %u, texa=%016llx fba=%llu test=%05x tex0=%016llx\n", batch.shuffleSource, batch.shuffleDestination,
                             (unsigned long long)batch.texa, (unsigned long long)(ctx.fba & 1u), uint32_t(ctx.test) & 0x7FFFFu, (unsigned long long)ctx.tex0);
            Target &destination = targets[targetKey(fbp, fbw)];
            refreshTarget(destination, destination.psm);
            if (batch.shuffleDestination == 1u)
            {
                destination.maskPending = true; // the upper half: blue and alpha, where the shadow mask is built
            }
            gpu::TextureRef shuffleDepth = isDepthFormat(tpsm) ? depth(tbp / 32u, fbw).texture : nullptr;
            const uint32_t shuffleBottom = std::min(((uint32_t(ctx.scissor >> 48) & 0x7FFu) + 1u) / 2u, kTargetHeight);
            if (encoder && passTarget == targetKey(fbp, fbw) && shuffleBottom <= passRows && !shuffleDepth && shuffleInPassPipeline && dummyDepthTexture &&
                !GS_ENV_FLAG("PS2X_GS_NATIVE_SHUFFLE_PASS_BREAK"))
            {
                // Silent Hill Origins shuffles the frame a hundred times a frame near some lights; each in its own pass
                // stored and reloaded the whole (upscaled) target. The shuffle reads the pixel it writes, which the
                // pass already has in tile memory.
                ShuffleUniforms u{};
                u.sourceHalf = batch.shuffleSource;
                u.destinationHalf = batch.shuffleDestination;
                u.mask16 = ((fbmask >> 3) & 0x1Fu) | (((fbmask >> 11) & 0x1Fu) << 5) | (((fbmask >> 19) & 0x1Fu) << 10) | (((fbmask >> 31) & 1u) << 15);
                u.sourceIsDepth = 0u;
                const uint32_t sx0 = uint32_t(ctx.scissor) & 0x7FFu, sx1 = uint32_t(ctx.scissor >> 16) & 0x7FFu, sy0 = uint32_t(ctx.scissor >> 32) & 0x7FFu, sy1 = uint32_t(ctx.scissor >> 48) & 0x7FFu;
                const uint32_t x0 = std::min(sx0, fbw * 64u), x1 = std::min(sx1 + 1u, fbw * 64u), y0 = std::min(sy0 / 2u, kTargetHeight), y1 = std::min((sy1 + 1u) / 2u, kTargetHeight);
                if (x1 > x0 && y1 > y0)
                {
                    const uint32_t scale = scaleOf(fbw);
                    encoder->setPipeline(shuffleInPassPipeline);
                    boundPipeline = shuffleInPassPipeline;
                    encoder->setDepthState(depthState(false, false, false));
                    encoder->setScissor(x0 * scale, y0 * scale, (x1 - x0) * scale, (y1 - y0) * scale);
                    encoder->setFragmentTexture(dummyDepthTexture, 0);
                    encoder->setFragmentBytes(&u, sizeof(u));
                    encoder->draw(gpu::Primitive::Triangle, 0, 3);
                    ++drawCalls;
                }
                return;
            }
            const TimedSection section(*this, "shuffle (own pass)");
            endPass();
            ensureCommandBuffer();
            gpu::PassDesc pass;
            pass.color = destination.color;
            auto quad = commandBuffer->renderPass(pass);
            ShuffleUniforms u{};
            u.sourceHalf = batch.shuffleSource;
            u.destinationHalf = batch.shuffleDestination;
            // The mask is given for 8-bit channels; a 16-bit pixel keeps the top 5 bits of each and the top bit of alpha.
            u.mask16 = ((fbmask >> 3) & 0x1Fu) | (((fbmask >> 11) & 0x1Fu) << 5) | (((fbmask >> 19) & 0x1Fu) << 10) | (((fbmask >> 31) & 1u) << 15);
            u.sourceIsDepth = isDepthFormat(tpsm) ? 1u : 0u;
            // Two rows of the 16-bit view are one row of the target.
            const uint32_t sx0 = uint32_t(ctx.scissor) & 0x7FFu, sx1 = uint32_t(ctx.scissor >> 16) & 0x7FFu, sy0 = uint32_t(ctx.scissor >> 32) & 0x7FFu, sy1 = uint32_t(ctx.scissor >> 48) & 0x7FFu;
            const uint32_t x0 = std::min(sx0, fbw * 64u), x1 = std::min(sx1 + 1u, fbw * 64u), y0 = std::min(sy0 / 2u, kTargetHeight), y1 = std::min((sy1 + 1u) / 2u, kTargetHeight);
            if (x1 > x0 && y1 > y0)
            {
                quad->setPipeline(shufflePipeline);
                const uint32_t scale = scaleOf(fbw);
                quad->setScissor(x0 * scale, y0 * scale, (x1 - x0) * scale, (y1 - y0) * scale);
                quad->setFragmentTexture(shuffleDepth ? shuffleDepth : dummyDepthTexture, 0);
                quad->setFragmentBytes(&u, sizeof(u));
                quad->draw(gpu::Primitive::Triangle, 0, 3);
                ++drawCalls;
            }
            quad->end();
        }

        void depthCopy()
        {
            const TimedSection section(*this, "depth copy");
            const gsn::Context &ctx = batch.ctx;
            const uint32_t fbp = uint32_t(ctx.frame) & 0x1FFu, fbw = uint32_t(ctx.frame >> 16) & 0x3Fu;
            const uint32_t tbp = uint32_t(ctx.tex0) & 0x3FFFu, tbw = uint32_t(ctx.tex0 >> 14) & 0x3Fu;
            DepthTarget &source = depth(tbp / 32u, tbw);
            DepthTarget &destination = depth(fbp, fbw);
            if (source.texture == destination.texture)
                return;
            // ZBUF is written too (always passing, not masked): whatever colour target lives there receives the sprite's Z.
            const uint32_t zbp = uint32_t(ctx.zbuf) & 0x1FFu;
            Target *cleared = ((ctx.zbuf >> 32) & 1u) == 0u && zbp != fbp ? &target(zbp, fbw, 0u) : nullptr;
            if (cleared)
            {
                // The rows about to be written must hold their VRAM contents first, or a later refresh would bring
                // the stale CPU copy back over what is drawn now.
                cleared->usedRows = std::max(cleared->usedRows, std::min(uint32_t(std::max(batch.maxY, 0.0f)) + 1u, kTargetHeight));
                refreshTarget(*cleared, cleared->psm);
                cleared->drawn = true;
                // Only what the sprites cover: the game keeps palettes in the unused strip beside these small targets.
                markDrawn(*cleared, 0u, 0u, std::min(uint32_t(std::max(batch.maxX, 0.0f)), fbw * 64u), std::min(uint32_t(std::max(batch.maxY, 0.0f)), kTargetHeight));
            }
            endPass();
            ensureCommandBuffer();
            gpu::PassDesc pass;
            if (cleared)
                pass.color = cleared->color;
            pass.depth = destination.texture;
            pass.depthLoad = destination.fresh ? gpu::Load::Clear : gpu::Load::Load;
            pass.clearDepth = 0.0f;
            destination.fresh = false;
            auto copy = commandBuffer->renderPass(pass);
            Uniforms u{};
            u.targetWidth = float(fbw * 64u);
            u.targetHeight = float(kTargetHeight);
            u.texScaleU = float(1u << (uint32_t(ctx.tex0 >> 26) & 15u)) / float(tbw * 64u);
            u.texScaleV = float(1u << (uint32_t(ctx.tex0 >> 30) & 15u)) / float(kTargetHeight);
            copy->setPipeline(cleared ? depthCopyClearPipeline : depthCopyPipeline);
            copy->setDepthState(depthState(false, false, true));
            copy->setVertexBuffer(chunk, 0);
            copy->setVertexBytes(&u, sizeof(u));
            copy->setFragmentBytes(&u, sizeof(u));
            copy->setFragmentTexture(source.texture, 0);
            copy->setFragmentSampler(sampler(false, 1, 1), 0);
            copy->draw(gpu::Primitive::Triangle, batch.firstVertex, batch.vertexCount);
            copy->end();
            ++drawCalls;
        }

        // Something was drawn to these pixels of a target: those blocks are now newer on the GPU than in VRAM.
        void markDrawn(Target &target, uint32_t x0, uint32_t y0, uint32_t x1, uint32_t y1)
        {
            if (x1 <= x0 || y1 <= y0)
                return;
            const uint64_t rect = uint64_t(x0) | (uint64_t(y0) << 12) | (uint64_t(x1) << 24) | (uint64_t(y1) << 36);
            if (rect == target.markedRect)
                return;
            target.markedRect = rect;
            const gsn::Swizzle &layout = gsn::Swizzle::of(target.psm);
            for (uint32_t y = y0 & ~7u; y < y1; y += 8u)
                for (uint32_t x = x0 & ~7u; x < x1; x += 8u)
                {
                    const uint32_t block = layout.bitAddress(target.fbp * 32u, target.fbw, x, y) >> 11;
                    if (!gpuDirtyBlocks.test(block))
                        for (TextureEntry *user : blockUsers[block])
                            user->drawnOver = true;
                    target.gpuDirty.set(block);
                    gpuDirtyBlocks.set(block);
                }
        }

        // The game also draws things it later reads as plain memory (palettes drawn with triangles, hidden in the unused
        // strip beside a small target, for one). Before VRAM is decoded, the blocks a target drew to come back from the GPU.
        // It waits for the GPU, so it only happens for blocks that are both drawn to and read as memory.
        void syncFromGpu(const std::bitset<kVramBytes / 256u> &needed)
        {
            BusyTimer timed(g_readbackNs);
            g_readbacks.fetch_add(1, std::memory_order_relaxed);
            if ((needed & gpuDirtyBlocks).none())
                return;
            flush(true);
            std::vector<uint16_t> changed;
            std::vector<uint32_t> pixels;
            for (auto &entry : targets)
            {
                Target &target = entry.second;
                if ((target.gpuDirty & needed).none())
                    continue;
                target.markedRect = ~0ull;
                const bool narrow = target.psm == 2u || target.psm == 0xAu;
                const uint32_t scale = scaleOf(target.fbw);
                const uint32_t pageHeight = narrow ? 64u : 32u, stride = 64u * scale, rows = pageHeight * scale;
                const gsn::Swizzle &layout = gsn::Swizzle::of(target.psm);
                for (uint32_t page = 0; page < target.fbw * (kTargetHeight / pageHeight) && target.fbp + page < kPages; ++page)
                {
                    const uint32_t x0 = (page % target.fbw) * 64u, y0 = (page / target.fbw) * pageHeight;
                    bool fetched = false;
                    for (uint32_t y = 0; y < pageHeight; y += 8u)
                        for (uint32_t x = 0; x < 64u; x += 8u)
                        {
                            const uint32_t block = layout.bitAddress(target.fbp * 32u, target.fbw, x0 + x, y0 + y) >> 11;
                            if (!target.gpuDirty.test(block) || !needed.test(block))
                                continue;
                            if (!fetched)
                            {
                                pixels.resize(size_t(stride) * rows);
                                device->getBytes(target.color, x0 * scale, y0 * scale, stride, rows, pixels.data(), stride * 4u);
                                fetched = true;
                                ++readbacks;
                                if (GS_ENV_FLAG("PS2X_GS_NATIVE_READBACK_LOG"))
                                    std::fprintf(stderr, "[readback] scanout %llu target fbp=%u fbw=%u page %u for tex0=%016llx\n", (unsigned long long)scanouts, target.fbp, target.fbw, target.fbp + page, (unsigned long long)syncReason);
                            }
                            bool different = false;
                            for (uint32_t v = y; v < y + 8u; ++v)
                                for (uint32_t h = x; h < x + 8u; ++h)
                                {
                                    uint32_t value = pixels[size_t(v * scale) * stride + h * scale];
                                    if (narrow)
                                        value = ((value >> 3) & 0x1Fu) | (((value >> 11) & 0x1Fu) << 5) | (((value >> 19) & 0x1Fu) << 10) | ((value >> 31) << 15);
                                    different = layout.write(vram.data(), target.fbp * 32u, target.fbw, x0 + h, y0 + v, value) || different;
                                }
                            if (different && (changed.empty() || changed.back() != block))
                                changed.push_back(uint16_t(block));
                        }
                }
                target.gpuDirty &= ~needed;
            }
            gpuDirtyBlocks.reset();
            for (auto &entry : targets)
                gpuDirtyBlocks |= entry.second.gpuDirty;
            if (!changed.empty())
            {
                // Decoded textures and palettes over these blocks are out of date; the targets themselves are not.
                ++vramGeneration;
                for (const uint16_t block : changed)
                {
                    ++blockGeneration[block];
                    for (TextureEntry *user : blockUsers[block])
                        user->valid = false;
                }
            }
        }

        uint32_t batchIndexInScanout = 0;

        bool sceneEffectsOn() const
        {
            return (optionSharpen.load(std::memory_order_relaxed) > 0.0f || optionAo.load(std::memory_order_relaxed) > 0.0f || optionSmaa.load(std::memory_order_relaxed) > 0.0f) &&
                   !GS_ENV_FLAG("PS2X_GS_NATIVE_NO_SCENE");
        }

        // Follows the 3D part of each frame on the target a batch draws to (see Target::scene).
        void noteSceneBatch(uint32_t fbp, uint32_t fbw, uint32_t psm, uint32_t test, uint32_t zbp, uint32_t zpsm)
        {
            if (psm != 0u && psm != 1u)
                return;
            const auto found = targets.find(targetKey(fbp, fbw));
            if (found == targets.end() || !found->second.color)
                return;
            Target &t = found->second;
            if (t.scenePresented && !displayed.pending)
            {
                // The first draw after the target was shown: a new frame, the old picture no longer belongs to it.
                // (With the runtime's flip markers the frame boundary is the flip itself: noteDisplayFlip.)
                t.scenePresented = false;
                t.inScene = false;
                t.sceneHistory[t.sceneHistoryNext++ & 63u] = uint8_t(std::min<uint32_t>(t.sceneTransitions, 255u));
                t.sceneTransitionsBefore = predictedTransitions(t);
                t.sceneTransitions = 0;
            }
            const bool depthTested = (test & 0x10000u) != 0u && ((test >> 17) & 3u) >= 2u; // ZTE with GEQUAL or GREATER
            if (depthTested)
            {
                t.inScene = true;
                return;
            }
            if (!t.inScene)
                return;
            // 3D ends here (for now: when more 3D follows, a later copy replaces this one).
            t.inScene = false;
            if (++t.sceneTransitions < t.sceneTransitionsBefore && !GS_ENV_FLAG("PS2X_GS_NATIVE_SCENE_EVERY"))
                return; // not the last one, judging by the frames before
            const TimedSection section(*this, "scene copy");
            endPass();
            ensureCommandBuffer();
            if (!t.scene || t.scene->width != t.color->width || t.scene->height != t.color->height)
            {
                gpu::TextureDesc d;
                d.format = t.color->format;
                d.width = t.color->width;
                d.height = t.color->height;
                d.storage = gpu::Storage::Private;
                t.scene = device->newTexture(d);
            }
            const uint32_t rows = std::min(t.color->height, std::max(t.usedRows, 1u) * scaleOf(t.fbw));
            auto blit = commandBuffer->blit();
            blit->copyTexture(t.color, 0, 0, t.color->width, rows, t.scene, 0, 0);
            blit->end();
            if (GS_ENV_FLAG("PS2X_GS_NATIVE_SCENE_LOG"))
                std::fprintf(stderr, "[scene-copy] fbp %u transition %u (expected %u) scanout %llu\n", fbp, t.sceneTransitions, t.sceneTransitionsBefore, (unsigned long long)scanouts);
            t.sceneValid = true;
            t.presentsSinceScene = 0;
            t.sceneHasAo = false;
            t.sceneDepthValid = false;
            ++sceneCopies;
            // The Z buffer as the 3D left it, for the ambient occlusion worked out once the frame is shown (ensureSceneAo):
            // by then the game may be drawing the next frame into it (both of its colour buffers share one Z buffer).
            const auto zfound = depths.find(targetKey(zbp, fbw));
            if (optionAo.load(std::memory_order_relaxed) > 0.0f && aoPipeline && zfound != depths.end() && zfound->second.texture &&
                zfound->second.texture->width == t.scene->width && zfound->second.texture->height == t.scene->height)
            {
                if (!t.sceneDepth || t.sceneDepth->width != t.scene->width || t.sceneDepth->height != t.scene->height)
                {
                    gpu::TextureDesc d;
                    d.format = gpu::Format::Depth32F;
                    d.width = t.scene->width;
                    d.height = t.scene->height;
                    d.usage = gpu::ShaderRead | gpu::RenderTarget;
                    d.storage = gpu::Storage::Private;
                    t.sceneDepth = device->newTexture(d);
                }
                auto zblit = commandBuffer->blit();
                zblit->copyTexture(zfound->second.texture, 0, 0, t.scene->width, t.scene->height, t.sceneDepth, 0, 0);
                zblit->end();
                t.sceneDepthValid = true;
                t.sceneZLimit = (zpsm & 2u) != 0u ? 65536.0f : 16777216.0f; // PSMZ16 and PSMZ16S keep 16 bits
            }
        }
        uint64_t sceneCopies = 0, scenePresents = 0, sceneMisses = 0;

        // SMAA 1x over a whole target (the three passes of the reference): the antialiased picture the present pass shows, or
        // the target itself when SMAA is off.
        gpu::TextureRef runSmaa(Target &t)
        {
            if (optionSmaa.load(std::memory_order_relaxed) == 0.0f || !smaaEdgePipeline || !smaaWeightPipeline || !smaaBlendPipeline || !smaaTables || !t.color)
                return t.color;
            const TimedSection section(*this, "smaa");
            const uint32_t w = t.color->width, h = t.color->height;
            const auto ensure = [&](gpu::TextureRef &texture) {
                if (texture && texture->width == w && texture->height == h)
                    return;
                gpu::TextureDesc d;
                d.width = w;
                d.height = h;
                d.usage = gpu::RenderTarget | gpu::ShaderRead;
                d.storage = gpu::Storage::Private;
                texture = device->newTexture(d);
            };
            ensure(smaaEdges);
            ensure(smaaWeights);
            ensure(smaaOut);
            endPass();
            ensureCommandBuffer();
            const bool useScene = t.sceneValid && t.scene && sceneEffectsOn();
            const float uniforms[8] = {1.0f / float(w), 1.0f / float(h), float(w), float(h), useScene ? 1.0f : 0.0f, 0.0f, 0.0f, 0.0f};
            // Only the rows the game uses (448 of the target's 512 in Silent Hill Origins), with room below for the
            // vertical edge searches (up to 2 x 16 pixels) to find no edge rather than leftovers.
            const uint32_t rows = std::min(h, std::max(t.usedRows, 1u) * scaleOf(t.fbw) + 64u);
            const auto run = [&](const gpu::PipelineRef &pipeline, const gpu::TextureRef &out, const gpu::TextureRef &a, const gpu::TextureRef &b) {
                gpu::PassDesc pass;
                pass.color = out;
                pass.colorLoad = gpu::Load::DontCare;
                auto quad = commandBuffer->renderPass(pass);
                quad->setScissor(0, 0, w, rows);
                quad->setPipeline(pipeline);
                quad->setFragmentTexture(a, 0);
                quad->setFragmentTexture(b, 1);
                quad->setFragmentSampler(sampler(true, 1, 1), 0);
                quad->setFragmentBytes(uniforms, sizeof(uniforms));
                quad->draw(gpu::Primitive::Triangle, 0, 3);
                quad->end();
            };
            run(smaaEdgePipeline, smaaEdges, t.color, useScene ? t.scene : t.color);
            run(smaaWeightPipeline, smaaWeights, smaaEdges, smaaTables);
            run(smaaBlendPipeline, smaaOut, t.color, smaaWeights);
            // PS2X_GS_NATIVE_SMAA_DEBUG=1 shows the edges, =2 the blending weights (diagnostic).
            static const int debug = [] { const char *v = std::getenv("PS2X_GS_NATIVE_SMAA_DEBUG"); return v ? std::atoi(v) : 0; }();
            return debug == 1 ? smaaEdges : debug == 2 ? smaaWeights : smaaOut;
        }

        // Soft shadows: the shadow mask a shuffle left in a target's alpha, averaged before the first draw that blends by
        // it (softMaskFragment). Once per mask.
        void softenMask(uint32_t fbp, uint32_t fbw, uint32_t zbp)
        {
            const float strength = optionSoftShadows.load(std::memory_order_relaxed);
            const auto found = targets.find(targetKey(fbp, fbw));
            if (found == targets.end() || !found->second.maskPending || strength <= 0.0f)
                return;
            Target &t = found->second;
            // The first mask of each frame on this target: the flashlight's shadow, built from the light-view depth (the
            // later ones are the other lights' and have no such steps). Softened whole, once: every softening breaks the
            // render pass (on Apple GPUs the whole target goes out to memory and comes back), so doing it per light pass
            // over just its area cost more (Silent Hill Origins has a dozen per frame in some rooms).
            if (t.softFrame == frameIndex)
            {
                t.maskPending = false;
                return;
            }
            t.softFrame = frameIndex;
            t.maskPending = false;
            const TimedSection section(*this, "soft shadows");
            const uint32_t sc = scaleOf(t.fbw);
            // Radius: 1 to 3 pixels of the game's resolution with the strength.
            const float radius = (1.0f + 2.0f * strength) * float(sc);
            const uint32_t rows = std::min(t.color->height, std::max(t.usedRows, 1u) * sc);
            const auto z = depths.find(targetKey(zbp, fbw));
            if (!softMaskPipeline || !t.color || z == depths.end() || !z->second.texture ||
                z->second.texture->width != t.color->width || z->second.texture->height != t.color->height)
                return;
            endPass();
            ensureCommandBuffer();
            if (!softMaskCopy || softMaskCopy->width != t.color->width || softMaskCopy->height != t.color->height)
            {
                gpu::TextureDesc d;
                d.format = t.color->format;
                d.width = t.color->width;
                d.height = t.color->height;
                d.storage = gpu::Storage::Private;
                softMaskCopy = device->newTexture(d);
            }
            auto blit = commandBuffer->blit();
            blit->copyTexture(t.color, 0, 0, t.color->width, rows, softMaskCopy, 0, 0);
            blit->end();
            gpu::PassDesc pass;
            pass.color = t.color;
            pass.colorLoad = gpu::Load::Load;
            auto quad = commandBuffer->renderPass(pass);
            const float uniforms[4] = {radius, 1.0f, 0.0f, 0.0f};
            quad->setPipeline(softMaskPipeline);
            quad->setScissor(0, 0, t.color->width, rows);
            quad->setFragmentTexture(softMaskCopy, 0);
            quad->setFragmentTexture(z->second.texture, 1);
            quad->setFragmentBytes(uniforms, sizeof(uniforms));
            quad->draw(gpu::Primitive::Triangle, 0, 3);
            quad->end();
            ++softenedMasks;
            if (GS_ENV_FLAG("PS2X_GS_NATIVE_SOFT_SHADOWS_LOG"))
                std::fprintf(stderr, "[soft] mask of fbp %u softened (scanout %llu)\n", fbp, (unsigned long long)scanouts);
        }
        uint64_t softenedMasks = 0;
        uint64_t frameIndex = 0; // advances at every display flip and every scanout (softenMask's "first of a frame")

        // Ambient occlusion of a target's last 3D picture, into that copy's alpha (once per frame, before it is shown).
        void ensureSceneAo(Target &t)
        {
            const float strength = optionAo.load(std::memory_order_relaxed);
            if (strength <= 0.0f || !t.sceneValid || !t.sceneDepthValid || t.sceneHasAo || !aoPipeline || !aoUpsamplePipeline || !aoReduceDepthPipeline || !aoReducePipeline || !aoMedianPipeline)
                return;
            // The occlusion is worked out at the game's resolution, then filtered up. PS2X_GS_NATIVE_AO_DIVISOR=<n>: n times
            // smaller than the target instead (2 at 4x: twice the game's resolution; measured no steadier, and dearer).
            const uint32_t sc = scaleOf(t.fbw);
            static const uint32_t divisor = [] { const char *v = std::getenv("PS2X_GS_NATIVE_AO_DIVISOR"); return v ? uint32_t(std::max(0, std::atoi(v))) : 0u; }();
            const uint32_t factor = std::clamp(divisor != 0u ? divisor : sc, 1u, sc);
            const uint32_t w = (t.scene->width + factor - 1u) / factor, h = (t.scene->height + factor - 1u) / factor;
            if (!t.ao || t.ao->width != w || t.ao->height != h)
            {
                gpu::TextureDesc d;
                d.width = w;
                d.height = h;
                d.usage = gpu::RenderTarget | gpu::ShaderRead;
                d.storage = gpu::Storage::Private;
                t.ao = device->newTexture(d);
            }
            endPass();
            ensureCommandBuffer();
            // The reference Z of the frame (see aoMedianFragment): the nearest Z of 8x8-pixel blocks of the game's
            // resolution, then of 64x64 blocks, then their median, in one pixel.
            gpu::TextureRef nearest;
            {
                const TimedSection section(*this, "ambient occlusion: reference Z");
                uint32_t rw = t.sceneDepth->width, rh = t.sceneDepth->height;
                gpu::TextureRef from = t.sceneDepth;
                // Steps: nearest Z of 8x8 game pixels, of 8x8 of those, each block's Z if it is not above the median
                // (aoMedianFragment), and the largest of those.
                for (int step = 0; step < 4; ++step)
                {
                    const uint32_t block = step == 0 ? 8u * sc : step == 1 ? 8u : step == 2 ? 1u : std::max(rw, rh);
                    rw = step == 3 ? 1u : std::max(1u, (rw + block - 1u) / block);
                    rh = step == 3 ? 1u : std::max(1u, (rh + block - 1u) / block);
                    gpu::TextureRef &to = aoReduced[step];
                    if (!to || to->width != rw || to->height != rh)
                    {
                        gpu::TextureDesc d;
                        d.width = rw;
                        d.height = rh;
                        d.usage = gpu::RenderTarget | gpu::ShaderRead;
                        d.storage = gpu::Storage::Private;
                        to = device->newTexture(d);
                    }
                    gpu::PassDesc pass;
                    pass.color = to;
                    pass.colorLoad = gpu::Load::DontCare;
                    auto quad = commandBuffer->renderPass(pass);
                    quad->setPipeline(step == 0 ? aoReduceDepthPipeline : step == 2 ? aoMedianPipeline : aoReducePipeline);
                    quad->setFragmentTexture(from, 0);
                    const float limit[4] = {t.sceneZLimit, float(block), float(step == 0 ? sc : 1u), step == 3 ? 1.0f : 0.0f}; // step 3: mean
                    quad->setFragmentBytes(limit, sizeof(limit));
                    quad->draw(gpu::Primitive::Triangle, 0, 3);
                    quad->end();
                    from = to;
                    nearest = to;
                }
                // PS2X_GS_NATIVE_AO_FOLLOW=<0..1>: how far the reference moves toward each frame's (default 0.1;
                // 1: no following).
                static const float follow = [] { const char *v = std::getenv("PS2X_GS_NATIVE_AO_FOLLOW"); const float f = v ? float(std::atof(v)) : 0.1f; return std::clamp(f, 0.01f, 1.0f); }();
                if (aoSmoothPipeline && follow < 1.0f)
                {
                    for (gpu::TextureRef &t1 : aoFollowed)
                        if (!t1)
                        {
                            gpu::TextureDesc d;
                            d.width = d.height = 1;
                            d.usage = gpu::RenderTarget | gpu::ShaderRead;
                            d.storage = gpu::Storage::Private;
                            t1 = device->newTexture(d);
                            gpu::PassDesc clear; // starts at 0: no reference yet
                            clear.color = t1;
                            clear.colorLoad = gpu::Load::Clear;
                            commandBuffer->renderPass(clear)->end();
                        }
                    const gpu::TextureRef &previous = aoFollowed[aoFollowedNext ^ 1u], &out = aoFollowed[aoFollowedNext];
                    gpu::PassDesc pass;
                    pass.color = out;
                    pass.colorLoad = gpu::Load::DontCare;
                    auto quad = commandBuffer->renderPass(pass);
                    quad->setPipeline(aoSmoothPipeline);
                    quad->setFragmentTexture(nearest, 0);
                    quad->setFragmentTexture(previous, 1);
                    const float rate[4] = {follow, 0.0f, 0.0f, 0.0f};
                    quad->setFragmentBytes(rate, sizeof(rate));
                    quad->draw(gpu::Primitive::Triangle, 0, 3);
                    quad->end();
                    nearest = out;
                    aoFollowedNext ^= 1u;
                }
                // PS2X_GS_NATIVE_AO_DEBUG=1 (diagnostic): print the nearest Z found and the Z at a few points.
                if (GS_ENV_FLAG("PS2X_GS_NATIVE_AO_DEBUG"))
                {
                    gpu::TextureDesc d;
                    d.width = aoReduced[1]->width;
                    d.height = aoReduced[1]->height;
                    d.storage = gpu::Storage::Shared;
                    gpu::TextureRef copy = device->newTexture(d);
                    auto blit = commandBuffer->blit();
                    blit->copyTexture(aoReduced[1], 0, 0, d.width, d.height, copy, 0, 0);
                    blit->end();
                    flush(true);
                    std::vector<uint8_t> px(size_t(d.width) * d.height * 4u);
                    device->getBytes(copy, 0, 0, d.width, d.height, px.data(), d.width * 4u);
                    std::string line = "[ao] 64x64 maxima of Z:";
                    for (uint32_t y = 0; y < d.height; y += 3)
                    {
                        line += "\n   ";
                        for (uint32_t x = 0; x < d.width; x += 2)
                        {
                            const uint8_t *c = &px[(size_t(y) * d.width + x) * 4u];
                            char v[16];
                            std::snprintf(v, sizeof v, " %6u", unsigned(c[0] | (c[1] << 8) | (c[2] << 16)));
                            line += v;
                        }
                    }
                    {
                        gpu::TextureDesc d1;
                        d1.width = nearest->width;
                        d1.height = nearest->height;
                        d1.storage = gpu::Storage::Shared;
                        gpu::TextureRef one = device->newTexture(d1);
                        ensureCommandBuffer();
                        auto b1 = commandBuffer->blit();
                        b1->copyTexture(nearest, 0, 0, d1.width, d1.height, one, 0, 0);
                        b1->end();
                        flush(true);
                        uint8_t c[4] = {};
                        device->getBytes(one, 0, 0, 1, 1, c, 4);
                        char v[96];
                        std::snprintf(v, sizeof v, "\n   nearest (%ux%u): %u (bytes %u %u %u %u)", d1.width, d1.height, unsigned(c[0] | (c[1] << 8) | (c[2] << 16)), c[0], c[1], c[2], c[3]);
                        line += v;
                    }
                    std::fprintf(stderr, "%s\n", line.c_str());
                    ensureCommandBuffer();
                }
            }
            {
                const TimedSection section(*this, "ambient occlusion: game resolution");
                gpu::PassDesc pass;
                pass.color = t.ao;
                pass.colorLoad = gpu::Load::DontCare;
                auto quad = commandBuffer->renderPass(pass);
                // PS2X_GS_NATIVE_AO_RADIUS: the sampling radius in pixels of the game's own resolution (default 10).
                static const float radius = [] { const char *v = std::getenv("PS2X_GS_NATIVE_AO_RADIUS"); const float r = v ? float(std::atof(v)) : 10.0f; return std::clamp(r, 1.0f, 64.0f); }();
                const float uniforms[4] = {radius * float(sc), strength, float(factor), t.sceneZLimit};
                quad->setScissor(0, 0, w, std::min(h, (std::max(t.usedRows, 1u) * sc + factor - 1u) / factor));
                quad->setPipeline(aoPipeline);
                quad->setFragmentTexture(t.sceneDepth, 0);
                quad->setFragmentTexture(nearest, 1);
                quad->setFragmentBytes(uniforms, sizeof(uniforms));
                quad->draw(gpu::Primitive::Triangle, 0, 3);
                quad->end();
            }
            {
                const TimedSection section(*this, "ambient occlusion: upsample");
                gpu::PassDesc pass;
                pass.color = t.scene;
                pass.colorLoad = gpu::Load::Load;
                auto quad = commandBuffer->renderPass(pass);
                const float uniforms[4] = {float(factor), 0.0f, 0.0f, 0.0f};
                quad->setScissor(0, 0, t.scene->width, std::min(t.scene->height, std::max(t.usedRows, 1u) * sc)); // the rows the game uses
                quad->setPipeline(aoUpsamplePipeline);
                quad->setFragmentTexture(t.ao, 0);
                quad->setFragmentTexture(t.sceneDepth, 1);
                quad->setFragmentSampler(sampler(false, 1, 1), 0);
                quad->setFragmentBytes(uniforms, sizeof(uniforms));
                quad->draw(gpu::Primitive::Triangle, 0, 3);
                quad->end();
            }
            t.sceneHasAo = true;
        }

        void closeBatch()
        {
            if (!batchOpen)
                return;
            batchOpen = false;
            // PS2X_GS_NATIVE_SKIP_BATCH=a,b,c (diagnostic): drop those batches (counted from 0 in every scanout, as
            // numbered by PS2X_GS_NATIVE_LOG), to find which draw makes a given part of the picture.
            if (!splitting && (batch.vertexCount != 0u || batch.skip))
            {
                static const std::vector<uint32_t> skipList = []
                {
                    std::vector<uint32_t> list;
                    if (const char *v = std::getenv("PS2X_GS_NATIVE_SKIP_BATCH"))
                        for (const char *p = v; *p;)
                        {
                            char *end = nullptr;
                            const unsigned long n = std::strtoul(p, &end, 10);
                            if (end == p)
                                break;
                            list.push_back(uint32_t(n));
                            p = *end == ',' ? end + 1 : end;
                        }
                    return list;
                }();
                const uint32_t index = batchIndexInScanout++;
                if (std::find(skipList.begin(), skipList.end(), index) != skipList.end())
                    batch.vertexCount = 0u;
            }
            // PS2X_GS_NATIVE_LOG=<scanout>: one line per batch drawn while that scanout is being built.
            if (logging() && !splitting && (batch.vertexCount != 0u || batch.skip))
            {
                const gsn::Context &c = batch.ctx;
                std::fprintf(stderr, "[draw] %s fb=%u/%u/%02x msk=%08x z=%u/%02x%s test=%05x sc=%u-%u,%u-%u %s%s", batch.skip ? "SKIP" : "    ", uint32_t(c.frame) & 0x1FFu, uint32_t(c.frame >> 16) & 0x3Fu,
                             uint32_t(c.frame >> 24) & 0x3Fu, uint32_t(c.frame >> 32), uint32_t(c.zbuf) & 0x1FFu, uint32_t(c.zbuf >> 24) & 0xFu, ((c.zbuf >> 32) & 1u) ? "m" : "", uint32_t(c.test) & 0x7FFFFu,
                             uint32_t(c.scissor) & 0x7FFu, uint32_t(c.scissor >> 16) & 0x7FFu, uint32_t(c.scissor >> 32) & 0x7FFu, uint32_t(c.scissor >> 48) & 0x7FFu,
                             (batch.mode & 7u) == 6u ? "sprite" : "tri", (batch.mode & 0x100u) ? " fst" : "");
                if (batch.mode & 0x40u)
                    std::fprintf(stderr, " blend=%u%u%u%u/%02x", uint32_t(c.alpha) & 3u, uint32_t(c.alpha >> 2) & 3u, uint32_t(c.alpha >> 4) & 3u, uint32_t(c.alpha >> 6) & 3u, uint32_t(c.alpha >> 32) & 0xFFu);
                if (batch.textured)
                    std::fprintf(stderr, " tex=%u/%u/%02x %ux%u tfx=%u tcc=%u cbp=%u clamp=%x tex1=%x", uint32_t(c.tex0) & 0x3FFFu, uint32_t(c.tex0 >> 14) & 0x3Fu, uint32_t(c.tex0 >> 20) & 0x3Fu, 1u << (uint32_t(c.tex0 >> 26) & 15u),
                                 1u << (uint32_t(c.tex0 >> 30) & 15u), uint32_t(c.tex0 >> 35) & 3u, uint32_t(c.tex0 >> 34) & 1u, uint32_t(c.tex0 >> 37) & 0x3FFFu, uint32_t(c.clamp) & 15u, uint32_t(c.tex1) & 0x1FFu);
                std::fprintf(stderr, " verts=%u\n", batch.vertexCount);
            }
            if (batch.shuffle && batch.primitives != 0u)
            {
                shuffle();
                return;
            }
            if (batch.skip || batch.vertexCount == 0u)
                return;
            if (batch.depthCopy)
            {
                depthCopy();
                return;
            }
            const gsn::Context &ctx = batch.ctx;
            const uint32_t fbp = uint32_t(ctx.frame) & 0x1FFu, fbw = uint32_t(ctx.frame >> 16) & 0x3Fu, psm = uint32_t(ctx.frame >> 24) & 0x3Fu;
            const uint32_t zbp = uint32_t(ctx.zbuf) & 0x1FFu;
            const bool zmask = ((ctx.zbuf >> 32) & 1u) != 0u;
            const uint32_t test = uint32_t(ctx.test);
            if (!splitting && sceneEffectsOn())
                noteSceneBatch(fbp, fbw, psm, test, zbp, uint32_t(ctx.zbuf >> 24) & 0xFu);
            // A draw blending by the destination's alpha (C = Ad): the light pass reading a shadow mask.
            if (!splitting && (batch.mode & 0x40u) != 0u && ((uint32_t(ctx.alpha) >> 4) & 3u) == 1u && chunk && batch.vertexCount != 0u)
                softenMask(fbp, fbw, zbp);

            // A batch that reads the target it draws to. On the GS every primitive sees what the ones before it
            // drew, and Black counts on it: it blurs its glow buffer with twenty sprites in a row, each reading what
            // the one before left. With one copy of the target for the whole batch nothing accumulated (the glow
            // came out sharp, with streaks). Such a batch goes one primitive at a time, each with a fresh copy.
            if (batch.textured && !splitting)
            {
                const uint32_t tbp = uint32_t(ctx.tex0) & 0x3FFFu, tbw = uint32_t(ctx.tex0 >> 14) & 0x3Fu, tpsm = uint32_t(ctx.tex0 >> 20) & 0x3Fu;
                const uint32_t kind = batch.mode & 7u, step = kind == 6u ? 6u : kind == 0u ? 1u : kind <= 2u ? 2u : 3u;
                if ((tbp & 31u) == 0u && tbp / 32u == fbp && tbw == fbw && (tpsm == 0u || tpsm == 1u || tpsm == 0x1Bu) && batch.vertexCount > step && chunk)
                {
                    // Only where it matters: a primitive starts a new group (and a new copy) when the texels it reads
                    // include pixels that an earlier primitive of the group has drawn, judged as the GS would see it
                    // (at the game's own resolution). The blur's sprites each read their neighbour's output, so they
                    // go one by one; the twenty tiles that re-read the main frame in place each read only their own
                    // pixels, and stay one group with one copy (forty copies of the whole frame per scanout otherwise).
                    const GpuVertex *vertices = static_cast<const GpuVertex *>(chunk->contents);
                    const float tw = float(1u << (uint32_t(ctx.tex0 >> 26) & 15u)), th = float(1u << (uint32_t(ctx.tex0 >> 30) & 15u));
                    const bool linear = ((ctx.tex1 >> 5) & 1u) != 0u;
                    const float shift = kind == 6u && scaleOf(fbw) > 1u ? 0.5f : 0.0f; // sprite() moved it half a pixel
                    struct Box { int x0, y0, x1, y1; };
                    std::vector<Box> drawn;
                    bool identity = kind == 6u && !noSelfFetch; // every sprite maps each pixel onto itself
                    bool fetch = false;
                    const Batch whole = batch;
                    const uint32_t end = whole.firstVertex + whole.vertexCount;
                    uint32_t groupFirst = whole.firstVertex;
                    splitting = true;
                    const auto flushGroup = [&](uint32_t until)
                    {
                        if (until == groupFirst)
                            return;
                        batch = whole;
                        batch.firstVertex = groupFirst;
                        batch.vertexCount = until - groupFirst;
                        batch.selfFetch = fetch;
                        batchOpen = true;
                        closeBatch();
                        groupFirst = until;
                        drawn.clear();
                    };
                    for (uint32_t first = whole.firstVertex; first + step <= end; first += step)
                    {
                        Box target{}, source{};
                        if (kind == 6u)
                        {
                            const GpuVertex &a = vertices[first], &b = vertices[first + 5u];
                            const float x0 = a.x + shift, x1 = b.x + shift, y0 = a.y + shift, y1 = b.y + shift;
                            target = {int(std::ceil(x0)), int(std::ceil(y0)), int(std::ceil(x1)) - 1, int(std::ceil(y1)) - 1};
                            // Texel coordinates at the first and last pixel the GS samples.
                            const float u0 = a.s / a.q * tw, u1 = b.s / b.q * tw, v0 = a.t / a.q * th, v1 = b.t / b.q * th;
                            const float du = x1 > x0 ? (u1 - u0) / (x1 - x0) : 0.0f, dv = y1 > y0 ? (v1 - v0) / (y1 - y0) : 0.0f;
                            // (u0, v0) belong to the vertex as it was emitted, half a pixel off when the target is enlarged.
                            float ua = u0 + (float(target.x0) - a.x) * du, ub = u0 + (float(target.x1) - a.x) * du;
                            float va = v0 + (float(target.y0) - a.y) * dv, vb = v0 + (float(target.y1) - a.y) * dv;
                            if (ua > ub) std::swap(ua, ub);
                            if (va > vb) std::swap(va, vb);
                            identity = identity && std::fabs(du - 1.0f) < 1e-4f && std::fabs(dv - 1.0f) < 1e-4f &&
                                       std::fabs(ua - (float(target.x0) + 0.5f)) < 1e-3f && std::fabs(va - (float(target.y0) + 0.5f)) < 1e-3f;
                            if (linear)
                                source = {int(std::floor(ua - 0.5f)), int(std::floor(va - 0.5f)), int(std::ceil(ub - 0.5f)), int(std::ceil(vb - 0.5f))};
                            else
                                source = {int(std::floor(ua)), int(std::floor(va)), int(std::floor(ub)), int(std::floor(vb))};
                        }
                        else
                        {
                            identity = false;
                            float x0 = 1e9f, y0 = 1e9f, x1 = -1e9f, y1 = -1e9f, u0 = 1e9f, v0 = 1e9f, u1 = -1e9f, v1 = -1e9f;
                            for (uint32_t k = 0; k < step; ++k)
                            {
                                const GpuVertex &v = vertices[first + k];
                                x0 = std::min(x0, v.x); x1 = std::max(x1, v.x); y0 = std::min(y0, v.y); y1 = std::max(y1, v.y);
                                const float u = v.s / v.q * tw, w = v.t / v.q * th;
                                u0 = std::min(u0, u); u1 = std::max(u1, u); v0 = std::min(v0, w); v1 = std::max(v1, w);
                            }
                            target = {int(std::floor(x0)) - 1, int(std::floor(y0)) - 1, int(std::ceil(x1)) + 1, int(std::ceil(y1)) + 1};
                            source = {int(std::floor(u0)) - 1, int(std::floor(v0)) - 1, int(std::ceil(u1)) + 1, int(std::ceil(v1)) + 1};
                        }
                        bool reads = false;
                        for (const Box &box : drawn)
                            reads = reads || (source.x0 <= box.x1 && source.x1 >= box.x0 && source.y0 <= box.y1 && source.y1 >= box.y0);
                        if (reads)
                            flushGroup(first);
                        drawn.push_back(target);
                    }
                    fetch = identity && groupFirst == whole.firstVertex; // one group of in-place reads: no copy at all
                    flushGroup(end);
                    splitting = false;
                    batch = whole;
                    return;
                }
            }

            // Textures and stale target pages first: both may have to end the current pass.
            Target &destination = target(fbp, fbw, psm);
            {
                const uint32_t bottom = std::min({(uint32_t(ctx.scissor >> 48) & 0x7FFu) + 1u, uint32_t(std::max(batch.maxY, 0.0f)) + 1u, kTargetHeight});
                destination.usedRows = std::max(destination.usedRows, bottom);
            }
            refreshTarget(destination, psm);
            gpu::TextureRef source = fallbackTexture;
            float texScaleU = 1.0f, texScaleV = 1.0f;
            bool texAlphaFixed = false;
            gpu::TextureRef indexPalette;
            uint32_t paletteScale = 1, texBox = 1;
            bool view16Batch = false;
            bool targetSource = false;
            if (batch.textured)
            {
                const uint32_t tbp = uint32_t(ctx.tex0) & 0x3FFFu, tbw = uint32_t(ctx.tex0 >> 14) & 0x3Fu, tpsm = uint32_t(ctx.tex0 >> 20) & 0x3Fu;
                auto nibble = tpsm == 0x14u || tpsm == 0x13u ? nibbleCopies.find(tbp) : nibbleCopies.end();
                if (nibble != nibbleCopies.end() && nibble->second.bits != (tpsm == 0x14u ? 4u : 8u))
                    nibble = nibbleCopies.end();
                auto found = (tbp & 31u) == 0u && (tpsm == 0u || tpsm == 1u || tpsm == 0x1Bu) ? targets.find(targetKey(tbp / 32u, tbw)) : targets.end();
                // A texture within one page is the same memory whatever buffer width it is read with: Silent Hill
                // Origins draws its character shadow into a 64x32 target set up 8 pages wide and reads it with width 1.
                // Not matching it meant a wait for the GPU and a copy back on every use (and a blocky shadow).
                if (found == targets.end() && (tbp & 31u) == 0u && (tpsm == 0u || tpsm == 1u) && (uint32_t(ctx.tex0 >> 26) & 15u) <= 6u &&
                    (uint32_t(ctx.tex0 >> 30) & 15u) <= 5u)
                    for (auto candidate = targets.begin(); candidate != targets.end(); ++candidate)
                        if (candidate->second.fbp == tbp / 32u && candidate->second.drawn)
                        {
                            found = candidate;
                            break;
                        }
                // A 32-bit target read through its 16-bit view (Silent Hill Origins' flashlight draws triangles textured
                // with the frame seen as PSMCT16S): decoded on the GPU through view16Table instead of bringing the
                // target back to VRAM before every draw (thousands of waits per frame by the hospital lift).
                const auto view16 = (tpsm == 0x0Au || tpsm == 0x02u) && (tbp & 31u) == 0u && view16Table && !GS_ENV_FLAG("PS2X_GS_NATIVE_NO_VIEW16")
                                        ? targets.find(targetKey(tbp / 32u, tbw)) : targets.end();
                if (view16 != targets.end() && view16->second.drawn && (view16->second.psm == 0u || view16->second.psm == 1u))
                {
                    Target &from = view16->second;
                    refreshTarget(from, from.psm);
                    source = from.color;
                    if (&from == &destination)
                    {
                        endPass();
                        ensureCommandBuffer();
                        if (!from.copy)
                        {
                            gpu::TextureDesc d;
                            d.width = from.color->width;
                            d.height = from.color->height;
                            d.storage = gpu::Storage::Private;
                            from.copy = device->newTexture(d);
                        }
                        const uint32_t rows = std::min(from.color->height, std::max(from.usedRows, 1u) * scaleOf(from.fbw));
                        auto blit = commandBuffer->blit();
                        blit->copyTexture(from.color, 0, 0, from.color->width, rows, from.copy, 0, 0);
                        blit->end();
                        source = from.copy;
                        ++selfSamples;
                    }
                    texScaleU = texScaleV = 1.0f;
                    indexPalette = view16Table;
                    paletteScale = std::max(tbw, 1u);
                    texBox = scaleOf(from.fbw);
                    view16Batch = true;
                }
                else if (nibble != nibbleCopies.end() && nibble->second.texture)
                {
                    // An indexed texture copied from a target's alpha (see localCopy): indices on the GPU, palette as usual.
                    source = nibble->second.texture;
                    texScaleU = float(1u << (uint32_t(ctx.tex0 >> 26) & 15u)) / float(nibble->second.width);
                    texScaleV = float(1u << (uint32_t(ctx.tex0 >> 30) & 15u)) / float(nibble->second.height);
                    indexPalette = palette(ctx.tex0, batch.texa, paletteScale);
                    targetSource = true;
                }
                else if (found != targets.end() && found->second.drawn && (found->second.psm == 0u || found->second.psm == 1u))
                {
                    // The texture is something that was drawn: sample the target itself.
                    Target &from = found->second;
                    refreshTarget(from, from.psm);
                    source = from.color;
                    if (&from == &destination && batch.selfFetch)
                        source = fallbackTexture; // the shader takes the texel from the pixel it is drawing
                    else if (&from == &destination)
                    {
                        // A pass cannot sample what it draws to: a copy of the target as it is now.
                        endPass();
                        ensureCommandBuffer();
                        if (!from.copy)
                        {
                            gpu::TextureDesc d;
                            d.width = from.color->width;
                            d.height = from.color->height;
                            d.storage = gpu::Storage::Private;
                            from.copy = device->newTexture(d);
                        }
                        // Only the rows in use: this now happens once per primitive of such a batch.
                        const uint32_t rows = std::min(from.color->height, std::max(from.usedRows, 1u) * scaleOf(from.fbw));
                        auto blit = commandBuffer->blit();
                        blit->copyTexture(from.color, 0, 0, from.color->width, rows, from.copy, 0, 0);
                        blit->end();
                        source = from.copy;
                        ++selfSamples;
                    }
                    texScaleU = float(1u << (uint32_t(ctx.tex0 >> 26) & 15u)) / float(from.fbw * 64u);
                    texScaleV = float(1u << (uint32_t(ctx.tex0 >> 30) & 15u)) / float(kTargetHeight);
                    texAlphaFixed = tpsm == 1u;
                    texBox = scaleOf(from.fbw);
                    targetSource = true;
                    if (tpsm == 0x1Bu)
                        indexPalette = palette(ctx.tex0, batch.texa, paletteScale);
                    ++targetSamples;
                }
                else if (const auto zfound = (tbp & 31u) == 0u && (tpsm == 0u || tpsm == 1u) && depthAsColorPipeline ? depths.find(targetKey(tbp / 32u, tbw)) : depths.end();
                         zfound != depths.end() && zfound->second.texture && !GS_ENV_FLAG("PS2X_GS_NATIVE_NO_DEPTH_AS_COLOR"))
                {
                    // The Z buffer read as a colour texture (Silent Hill Origins fades a loading transition through it):
                    // it lives on the GPU only, so VRAM there is stale (it showed old textures as coloured noise). Its
                    // depth is converted to the colour the GS memory would hold and sampled like a target.
                    DepthTarget &z = zfound->second;
                    if (!z.asColor)
                    {
                        gpu::TextureDesc d;
                        d.width = z.texture->width;
                        d.height = z.texture->height;
                        d.usage = gpu::RenderTarget | gpu::ShaderRead;
                        d.storage = gpu::Storage::Private;
                        z.asColor = device->newTexture(d);
                    }
                    endPass();
                    ensureCommandBuffer();
                    gpu::PassDesc convert;
                    convert.color = z.asColor;
                    convert.colorLoad = gpu::Load::DontCare;
                    auto quad = commandBuffer->renderPass(convert);
                    quad->setPipeline(depthAsColorPipeline);
                    quad->setFragmentTexture(z.texture, 0);
                    quad->draw(gpu::Primitive::Triangle, 0, 3);
                    quad->end();
                    source = z.asColor;
                    texScaleU = float(1u << (uint32_t(ctx.tex0 >> 26) & 15u)) / float(tbw * 64u);
                    texScaleV = float(1u << (uint32_t(ctx.tex0 >> 30) & 15u)) / float(kTargetHeight);
                    texAlphaFixed = tpsm == 1u;
                    texBox = scaleOf(tbw);
                    targetSource = true;
                }
                else
                    source = texture(ctx, batch.texa);
            }
            destination.drawn = true;
            ++destination.changesSincePresent;
            {
                const uint32_t sx0 = uint32_t(ctx.scissor) & 0x7FFu, sx1 = uint32_t(ctx.scissor >> 16) & 0x7FFu, sy0 = uint32_t(ctx.scissor >> 32) & 0x7FFu, sy1 = uint32_t(ctx.scissor >> 48) & 0x7FFu;
                // Bounded by what the primitives reach as well as by the scissor: Silent Hill Origins draws a half-height
                // blur buffer over the Z buffer with a full-screen scissor, and the rest of that memory holds textures that
                // would otherwise come back from the GPU before every use.
                const uint32_t bx1 = uint32_t(std::ceil(std::max(batch.maxX, 0.0f))), by1 = uint32_t(std::ceil(std::max(batch.maxY, 0.0f))); // edges are exclusive
                markDrawn(destination, std::min(sx0, fbw * 64u), std::min(sy0, destination.usedRows), std::min({sx1 + 1u, bx1, fbw * 64u}),
                          std::min({sy1 + 1u, by1, destination.usedRows}));
            }
            DepthTarget &depthTarget = depth(zbp, fbw);

            ensureCommandBuffer();
            const uint64_t wantedTarget = targetKey(fbp, fbw), wantedDepth = targetKey(zbp, fbw);
            // The pass covers the rows in use (448 of the 512 in Silent Hill Origins' frames) and what this draw reaches,
            // in whole pages: every pass break stores and reloads the attachments, and the rows below are dead weight.
            // A draw reaching further reopens the pass taller. PS2X_GS_NATIVE_FULL_PASS=1: always the whole target.
            const uint32_t reach = std::min({(uint32_t(ctx.scissor >> 48) & 0x7FFu) + 1u, uint32_t(std::ceil(std::max(batch.maxY, 0.0f))) + 2u, kTargetHeight});
            const uint32_t wantedRows = GS_ENV_FLAG("PS2X_GS_NATIVE_FULL_PASS") ? kTargetHeight : std::min(kTargetHeight, (std::max({destination.usedRows, reach, 1u}) + 31u) & ~31u);
            if (!encoder || passTarget != wantedTarget || passDepth != wantedDepth || wantedRows > passRows)
            {
                endPass();
                gpu::PassDesc pass;
                pass.color = destination.color;
                pass.depth = depthTarget.texture;
                pass.rows = wantedRows * scaleOf(fbw);
                passRows = wantedRows;
                pass.depthLoad = depthTarget.fresh ? gpu::Load::Clear : gpu::Load::Load;
                pass.clearDepth = 0.0f;
                depthTarget.fresh = false;
                encoder = commandBuffer->renderPass(pass);
                ++passes;
                // PS2X_GS_NATIVE_PASS_LOG=1 (diagnostic): every draw pass begun, and how many draws the previous one had.
                if (GS_ENV_FLAG("PS2X_GS_NATIVE_PASS_LOG"))
                    std::fprintf(stderr, "[pass] scanout %llu: fbp %u zbp %u fbw %u (%s depth; %llu draws since the last pass began)\n", (unsigned long long)scanouts, fbp, zbp, fbw,
                                 pass.depthLoad == gpu::Load::Clear ? "new" : "loaded", (unsigned long long)(drawCalls - passDrawsStart));
                encoder->setPipeline(pipeline);
                boundPipeline = pipeline;
                passTarget = wantedTarget;
                passDrawsStart = drawCalls;
                passDepth = wantedDepth;
                boundChunk = nullptr;
            }
            if (boundChunk != chunk)
            {
                encoder->setVertexBuffer(chunk, 0);
                boundChunk = chunk;
            }

            const uint32_t sx0 = uint32_t(ctx.scissor) & 0x7FFu, sx1 = uint32_t(ctx.scissor >> 16) & 0x7FFu, sy0 = uint32_t(ctx.scissor >> 32) & 0x7FFu, sy1 = uint32_t(ctx.scissor >> 48) & 0x7FFu;
            const uint32_t targetWidth = fbw * 64u;
            const uint32_t x0 = std::min(sx0, targetWidth), x1 = std::min(sx1 + 1u, targetWidth), y0 = std::min(sy0, kTargetHeight), y1 = std::min(sy1 + 1u, kTargetHeight);
            if (x1 <= x0 || y1 <= y0)
                return;
            const uint32_t scale = scaleOf(fbw);
            encoder->setScissor(x0 * scale, y0 * scale, (x1 - x0) * scale, (y1 - y0) * scale);

            Uniforms u{};
            u.pointSize = float(scale);
            u.paletteScale = paletteScale;
            u.targetWidth = float(targetWidth);
            u.targetHeight = float(kTargetHeight);
            u.tme = batch.textured ? 1u : 0u;
            u.tfx = uint32_t(ctx.tex0 >> 35) & 3u;
            u.tcc = uint32_t(ctx.tex0 >> 34) & 1u;
            u.fge = (batch.mode >> 5) & 1u;
            u.abe = (batch.mode >> 6) & 1u;
            u.blendA = uint32_t(ctx.alpha) & 3u;
            u.blendB = uint32_t(ctx.alpha >> 2) & 3u;
            u.blendC = uint32_t(ctx.alpha >> 4) & 3u;
            u.blendD = uint32_t(ctx.alpha >> 6) & 3u;
            u.fix = uint32_t(ctx.alpha >> 32) & 0xFFu;
            u.atst = (test >> 1) & 7u;
            u.aref = (test >> 4) & 0xFFu;
            u.fbmask = uint32_t(ctx.frame >> 32) | (psm == 1u ? 0xFF000000u : 0u);
            u.fba = uint32_t(ctx.fba) & 1u;
            u.colclamp = uint32_t(batch.colclamp) & 1u;
            u.destinationHasAlpha = psm == 1u ? 0u : 1u;
            u.fogR = float(batch.fogcol & 0xFFu);
            u.fogG = float((batch.fogcol >> 8) & 0xFFu);
            u.fogB = float((batch.fogcol >> 16) & 0xFFu);
            u.texScaleU = texScaleU;
            u.texScaleV = texScaleV;
            u.texAlphaFixed = texAlphaFixed ? 1u : 0u;
            u.ta0 = uint32_t(batch.texa) & 0xFFu;
            u.texWidth = float(1u << (uint32_t(ctx.tex0 >> 26) & 15u));
            u.texHeight = float(1u << (uint32_t(ctx.tex0 >> 30) & 15u));
            u.wrapU = uint32_t(ctx.clamp) & 3u;
            u.wrapV = uint32_t(ctx.clamp >> 2) & 3u;
            u.minU = float(uint32_t(ctx.clamp >> 4) & 0x3FFu);
            u.maxU = float(uint32_t(ctx.clamp >> 14) & 0x3FFu);
            u.minV = float(uint32_t(ctx.clamp >> 24) & 0x3FFu);
            u.maxV = float(uint32_t(ctx.clamp >> 34) & 0x3FFu);
            if (texBox != 0u && targetSource)
            {
                // The texture is a piece of a render target: the sampler's own clamping and wrapping act on the
                // whole target, so past the edge of the texture the filter would pick up whatever was drawn next to
                // it. Clamp and repeat are done on the texture's own size instead (a line of wrong pixels along the
                // bottom and right edges of the glow rectangles otherwise).
                if (u.wrapU == 1u) { u.wrapU = 2u; u.minU = 0.0f; u.maxU = u.texWidth - 1.0f; }
                else if (u.wrapU == 0u) u.wrapU = 4u;
                if (u.wrapV == 1u) { u.wrapV = 2u; u.minV = 0.0f; u.maxV = u.texHeight - 1.0f; }
                else if (u.wrapV == 0u) u.wrapV = 4u;
            }
            u.maxLevel = batch.textured && source != fallbackTexture ? source->levels - 1u : 0u;
            u.lodFixed = uint32_t(ctx.tex1) & 1u;
            u.lodScale = float(1u << (uint32_t(ctx.tex1 >> 19) & 3u));
            u.lodK = float(int32_t(uint32_t(ctx.tex1 >> 32) << 20) >> 20) * (1.0f / 16.0f);
            u.texIndexed = view16Batch ? 2u : indexPalette ? 1u : 0u;
            u.texLinear = ((ctx.tex1 >> 5) & 1u) != 0u ? 1u : 0u;
            u.texBox = u.texLinear != 0u ? texBox : 1u;
            if (view16Batch)
                u.texBox = texBox; // the 16-bit view reads exact pixels of the upscaled target: the scale, filtered or not
            u.texSelf = batch.selfFetch && targetSource ? 1u : 0u;
            u.nativeTexel = scale > 1u && (batch.mode & 7u) == 6u && ((ctx.tex1 >> 5) & 1u) == 0u && !targetSource && !batch.fineGrain && !GS_ENV_FLAG("PS2X_GS_NATIVE_NO_DOWNFILTER") ? 1u : 0u;
            u.texReplaced = batch.textured && source && replacedTextures.count(source.get()) != 0 ? 1u : 0u;
            if (u.texSelf != 0u)
                u.texBox = 1u;
            encoder->setFragmentTexture(indexPalette ? indexPalette : fallbackTexture, 1);

            if (batch.textured)
            {
                const bool linear = ((ctx.tex1 >> 5) & 1u) != 0u || u.texReplaced != 0u;
                encoder->setFragmentTexture(source, 0);
                encoder->setFragmentSampler(sampler(linear, uint32_t(ctx.clamp) & 3u, uint32_t(ctx.clamp >> 2) & 3u), 0);
            }
            else
            {
                encoder->setFragmentTexture(fallbackTexture, 0);
                encoder->setFragmentSampler(sampler(false, 0, 0), 0);
            }

            const bool depthTest = (test & 0x10000u) != 0u && ((test >> 17) & 3u) != 1u, greaterOnly = ((test >> 17) & 3u) == 3u;
            const bool alphaTest = (test & 1u) != 0u && u.atst != 1u;
            const uint32_t afail = (test >> 12) & 3u;
            const auto draw = [&](uint32_t alphaMode, uint32_t writeMode, bool depthWrite)
            {
                u.alphaMode = alphaMode;
                u.writeMode = writeMode;
                // A whole-channel write mask needs no read of the target either, given a pipeline that has it as its
                // write mask (a specialized one; the generic shaders mask in the shader).
                const bool opaque = opaquePipeline && !noOpaque && u.abe == 0u && writeMode == 0u && u.texSelf == 0u &&
                                    (u.fbmask == 0u || (specializedAvailable && byteWriteMask(u.fbmask) != 0xFFu));
                uint32_t passes = 1;
                gpu::PipelineRef wanted = !opaque && fixedBlend ? fixedBlendPipeline(u, passes) : nullptr;
                if (!wanted)
                    passes = 1;
                if (wanted)
                    ++fixedBlendDraws;
                else
                    wanted = specializedPipeline(u, opaque);
                if (wanted)
                    ++specializedDraws;
                else
                {
                    ++genericDraws;
                    wanted = opaque && u.fbmask == 0u ? opaquePipeline : pipeline;
                }
                if (wanted != boundPipeline)
                {
                    encoder->setPipeline(wanted);
                    boundPipeline = wanted;
                }
                encoder->setDepthState(depthState(depthTest, greaterOnly, depthWrite));
                encoder->setVertexBytes(&u, sizeof(u));
                encoder->setFragmentBytes(&u, sizeof(u));
                const uint32_t type = batch.mode & 7u;
                static const bool fillStats = GS_ENV_FLAG("PS2X_GS_NATIVE_FILL_STATS");
                if (fillStats && type >= 3u)
                {
                    const GpuVertex *v = static_cast<const GpuVertex *>(chunk->contents) + batch.firstVertex;
                    double area = 0.0;
                    for (uint32_t i = 0; i + 2u < batch.vertexCount; i += 3u)
                        area += std::abs(double(v[i + 1].x - v[i].x) * double(v[i + 2].y - v[i].y) - double(v[i + 2].x - v[i].x) * double(v[i + 1].y - v[i].y)) * 0.5;
                    area = std::min(area * passes, double(x1 - x0) * double(y1 - y0) * 64.0); // overdraw within one draw is real; a bound against nonsense
                    char key[256];
                    std::snprintf(key, sizeof key, "%s tme=%u idx=%u lin=%u box=%u native=%u self=%u abe=%u fge=%u atst=%u amode=%u wmode=%u zw=%u afail=%u zt=%u mask=%08x repl=%u fbp=%u",
                                  wanted == opaquePipeline || opaque ? "opaque" : passes > 1u || fixedBlendDraws ? "fetch/hw" : "fetch", u.tme, u.texIndexed, u.texLinear, u.texBox,
                                  u.nativeTexel, u.texSelf, u.abe, u.fge, u.atst, alphaMode, writeMode, depthWrite ? 1u : 0u, (test >> 12) & 3u, depthTest ? 1u : 0u, u.fbmask, u.texReplaced, fbp);
                    std::lock_guard<std::mutex> lock(g_passTimeMutex);
                    FillStat &f = g_fillStats[key];
                    f.pixels += area * double(scale) * double(scale);
                    f.draws += 1;
                }
                for (uint32_t pass = 0; pass < passes; ++pass)
                    encoder->draw(type == 0u ? gpu::Primitive::Point : type <= 2u ? gpu::Primitive::Line : gpu::Primitive::Triangle, batch.firstVertex, batch.vertexCount);
                ++drawCalls;
            };
            // What a failed alpha test still writes: 1 the frame buffer, 2 the depth buffer, 3 colour without alpha.
            const uint32_t failWrite = afail == 1u ? 0u : afail == 2u ? 1u : 2u;
            const bool failDepth = afail == 2u && !zmask;
            if (!alphaTest)
                draw(0u, 0u, !zmask);
            else if (u.atst == 0u)
            {
                if (afail != 0u)
                    draw(0u, failWrite, failDepth);
            }
            else
            {
                draw(1u, 0u, !zmask);
                if (afail != 0u)
                    draw(2u, failWrite, failDepth);
            }
        }
        gpu::BufferRef boundChunk;
    };

    Renderer &renderer(void *handle) { return *static_cast<Renderer *>(handle); }

    void *create(const char *, const uint8_t *initial)
    {
        GS_AUTORELEASE
        {
            Renderer *created = new Renderer();
            if (!created->initialize(initial))
            {
                delete created;
                return nullptr;
            }
            return created;
        }
    }
    // Replayable dump of the native renderer's input (PS2X_GS_DUMP=<file>), in the layout gs-replay reads (the
    // reference module writes the same): started when the file named by PS2X_GS_DUMP_REQUEST appears (F9 in the
    // runtime), PS2X_GS_DUMP_FRAMES scanouts long (default 300). VRAM is the CPU copy: what targets drew is
    // missing from the first frame, which the game draws again at once.
    std::FILE *g_dump = nullptr;
    uint32_t g_dumpLeft = 0;
    void dumpEvent(uint32_t kind, uint32_t path, const void *data, uint32_t size)
    {
        if (!g_dump)
            return;
        static std::mutex lock;
        std::lock_guard<std::mutex> guard(lock);
        const uint32_t header[3] = {kind, path, size};
        std::fwrite(header, sizeof(header), 1, g_dump);
        if (size)
            std::fwrite(data, size, 1, g_dump);
    }
    void dumpScanout(void *handle, const GSParallelScanout &request)
    {
        static const char *file = std::getenv("PS2X_GS_DUMP");
        static const char *trigger = std::getenv("PS2X_GS_DUMP_REQUEST");
        if (!file || !trigger)
            return;
        if (g_dump)
        {
            const uint64_t payload[11] = {request.pmode, request.smode1, request.smode2, request.dispfb1, request.display1, request.dispfb2,
                                          request.display2, request.bgcolor, request.vsyncTick, uint64_t(request.width) | (uint64_t(request.height) << 32), 0};
            dumpEvent(7, 0, payload, sizeof(payload));
            if (--g_dumpLeft == 0u)
            {
                std::fclose(g_dump);
                g_dump = nullptr;
                std::fprintf(stderr, "[native-gs] dump finished: %s\n", file);
            }
            return;
        }
        std::FILE *requested = std::fopen(trigger, "rb");
        if (!requested)
            return;
        // The request file may hold the length in scanouts (overrides PS2X_GS_DUMP_FRAMES for this dump).
        char text[32] = {};
        const size_t read = std::fread(text, 1, sizeof(text) - 1u, requested);
        std::fclose(requested);
        std::remove(trigger);
        g_dump = std::fopen(file, "wb");
        if (!g_dump)
            return;
        const char *frames = std::getenv("PS2X_GS_DUMP_FRAMES");
        const unsigned long asked = read ? std::strtoul(text, nullptr, 0) : 0ul;
        g_dumpLeft = asked ? asked : frames ? std::max(1ul, std::strtoul(frames, nullptr, 0)) : 300u;
        dumpEvent(5, 0, renderer(handle).vram.data(), kVramBytes);
        const gsn::Registers &r = renderer(handle).frontend.regs;
        const auto put = [](unsigned address, uint64_t value) { dumpEvent(2, address, &value, 8); };
        put(0x1C, r.texclut);
        put(0x3B, r.texa);
        for (unsigned c = 0; c < 2u; ++c)
        {
            const gsn::Context &x = r.ctx[c];
            put(0x14 + c, x.tex1); put(0x08 + c, x.clamp); put(0x18 + c, x.xyoffset); put(0x34 + c, x.miptbp1); put(0x36 + c, x.miptbp2);
            put(0x40 + c, x.scissor); put(0x42 + c, x.alpha); put(0x47 + c, x.test); put(0x4A + c, x.fba); put(0x4C + c, x.frame);
            put(0x4E + c, x.zbuf); put(0x06 + c, x.tex0);
        }
        uint32_t s, t;
        std::memcpy(&s, &r.s, 4);
        std::memcpy(&t, &r.t, 4);
        put(0x1A, 1); put(0x00, r.prim); put(0x1B, r.prmode); put(0x1A, r.prmodecont); put(0x01, r.rgbaq); put(0x02, uint64_t(s) | (uint64_t(t) << 32));
        put(0x03, r.uv); put(0x0A, r.fog); put(0x3D, r.fogcol); put(0x44, r.dimx); put(0x45, r.dthe); put(0x46, r.colclamp); put(0x49, r.pabe);
        put(0x22, r.scanmsk); put(0x50, r.bitbltbuf); put(0x51, r.trxpos); put(0x52, r.trxreg);
        std::fprintf(stderr, "[native-gs] dump started: %s\n", file);
    }

    void destroy(void *handle)
    {
        GS_AUTORELEASE
        {
            renderer(handle).flush(true);
            {
                std::vector<std::pair<uint64_t, std::string>> misses;
                for (const auto &[why, count] : renderer(handle).blendMisses)
                    misses.emplace_back(count, why);
                std::sort(misses.rbegin(), misses.rend());
                if (!misses.empty())
                    std::fprintf(stderr, "[native-gs] fixed blend: %llu draws; still reading the target:\n", (unsigned long long)renderer(handle).fixedBlendDraws);
                for (const auto &[count, why] : misses)
                    std::fprintf(stderr, "  %8llu  %s\n", (unsigned long long)count, why.c_str());
            }
            std::lock_guard<std::mutex> lock(g_passTimeMutex);
            const uint64_t scanouts = std::max<uint64_t>(renderer(handle).scanoutCount(), 1u);
            for (const auto &[key, entry] : g_passTime)
                std::fprintf(stderr, "[native-gs] target fbp=%llu fbw=%llu: %.2f ms/scanout in %.1f passes/scanout, %.0f draws/scanout\n", (unsigned long long)(key & 0xFFFFu),
                             (unsigned long long)(key >> 16), entry.seconds * 1e3 / double(scanouts), double(entry.passes) / double(scanouts), double(entry.draws) / double(scanouts));
            {
                std::vector<std::pair<double, std::string>> fills;
                double total = 0.0;
                for (const auto &[key, f] : g_fillStats)
                {
                    fills.emplace_back(f.pixels, key + " draws/scanout=" + std::to_string(f.draws / scanouts));
                    total += f.pixels;
                }
                std::sort(fills.rbegin(), fills.rend());
                if (!fills.empty())
                    std::fprintf(stderr, "[fill] %.2f Mpixels/scanout in all\n", total / 1e6 / double(scanouts));
                for (size_t i = 0; i < fills.size() && i < 25; ++i)
                    std::fprintf(stderr, "[fill] %6.2f Mpx/scanout  %s\n", fills[i].first / 1e6 / double(scanouts), fills[i].second.c_str());
            }
            for (const auto &[name, entry] : g_sectionTime)
                std::fprintf(stderr, "[native-gs] %s: %.2f ms/scanout, %.1f times/scanout\n", name.c_str(), entry.seconds * 1e3 / double(scanouts), double(entry.passes) / double(scanouts));
        }
        GS_AUTORELEASE
        {
            renderer(handle).flush(true);
            delete &renderer(handle);
        }
    }
    void reset(void *handle)
    {
        GS_AUTORELEASE
        {
            dumpEvent(6, 0, nullptr, 0);
            renderer(handle).stateChanging();
            renderer(handle).frontend.reset();
        }
    }
    void gif(void *handle, uint32_t path, const uint8_t *data, uint32_t size)
    {
        BusyTimer busy(g_busyNs);
        dumpEvent(1, path, data, size);
        GS_AUTORELEASE { renderer(handle).frontend.gif(path, data, size); }
    }
    void reg(void *handle, uint8_t address, uint64_t value)
    {
        dumpEvent(2, address, &value, 8);
        GS_AUTORELEASE
        {
            if (address == 0x59u) // the runtime's display flip marker (GS::noteOrderedDisplayFlip), not a GS register
                renderer(handle).noteDisplayFlip(value);
            else
                renderer(handle).frontend.writeRegister(address, value);
        }
    }
    void image(void *handle, const uint8_t *data, uint32_t size)
    {
        dumpEvent(3, 0, data, size);
        GS_AUTORELEASE { renderer(handle).frontend.transferData(data, size); }
    }
    // The runtime asks for a flush every time it has handed over a batch of GIF data, many times per frame. Committing
    // each time ends the render pass, and the next draw starts another one that reloads and later stores the whole
    // colour and depth target: at 3x that is most of the GPU time of a frame. The work is committed when it is
    // needed instead (a scanout, a wait, a read back, a full vertex buffer), and here only when a good amount has
    // piled up, so the GPU still starts on the frame before the scanout. PS2X_GS_NATIVE_EAGER_FLUSH=1: as before.
    void flush(void *handle)
    {
        BusyTimer busy(g_busyNs);
        GS_AUTORELEASE
        {
            renderer(handle).flushRequested();
        }
    }
    void wait(void *handle)
    {
        BusyTimer busy(g_busyNs), waiting(g_gpuWaitNs);
        GS_AUTORELEASE { renderer(handle).flush(true); }
    }
    // The CPU copy only: what was drawn on the GPU is not brought back yet.
    void read(void *handle, uint32_t offset, uint8_t *out, uint32_t size)
    {
        if (offset < kVramBytes)
            std::memcpy(out, renderer(handle).vram.data() + offset, std::min(size, kVramBytes - offset));
    }
    void write(void *handle, uint32_t offset, const uint8_t *in, uint32_t size)
    {
        GS_AUTORELEASE
        {
            dumpEvent(5, offset, in, size);
            if (offset >= kVramBytes || size == 0u)
                return;
            size = std::min(size, kVramBytes - offset);
            renderer(handle).stateChanging();
            std::memcpy(renderer(handle).vram.data() + offset, in, size);
            std::vector<uint16_t> blocks;
            for (uint32_t block = offset >> 8; block <= (offset + size - 1u) >> 8; ++block)
                blocks.push_back(uint16_t(block));
            renderer(handle).vramWritten(blocks);
        }
    }
    // A GS-to-memory transfer (TRXDIR 1): the rectangle BITBLTBUF/TRXPOS/TRXREG name, in raster order and the source
    // format's pixel size, with what targets drew there brought back from the GPU first. Silent Hill Origins reads
    // the frame back this way for the picture in its inventory's status box. PS2X_GS_NATIVE_NO_FIFO=1: zeros.
    void fifo(void *handle, uint8_t *out, uint32_t size)
    {
        std::memset(out, 0, size);
        if (GS_ENV_FLAG("PS2X_GS_NATIVE_NO_FIFO"))
            return;
        GS_AUTORELEASE
        {
            Renderer &r = renderer(handle);
            const gsn::Registers &regs = r.frontend.regs;
            const uint32_t sbp = uint32_t(regs.bitbltbuf & 0x3FFFu), sbw = uint32_t(regs.bitbltbuf >> 16) & 0x3Fu, spsm = uint32_t(regs.bitbltbuf >> 24) & 0x3Fu;
            const uint32_t sx = uint32_t(regs.trxpos & 0x7FFu), sy = uint32_t(regs.trxpos >> 16) & 0x7FFu;
            const uint32_t w = uint32_t(regs.trxreg & 0xFFFu), h = uint32_t(regs.trxreg >> 32) & 0xFFFu;
            const gsn::Swizzle &layout = gsn::Swizzle::of(spsm);
            if (layout.bits == 0u || w == 0u || h == 0u)
                return;
            static unsigned logged = 0;
            if (logged++ < 20u)
                std::fprintf(stderr, "[native-gs] GS-to-memory transfer: sbp=%u sbw=%u psm=%02x at %u,%u size %ux%u (%u bytes)\n", sbp, sbw, spsm, sx, sy, w, h, size);
            std::bitset<kVramBytes / 256u> needed;
            for (uint32_t y = 0; y < h; ++y)
                for (uint32_t x = 0; x < w; ++x)
                    needed.set(layout.bitAddress(sbp, sbw, (sx + x) & 2047u, (sy + y) & 2047u) >> 11);
            r.syncForRead(needed);
            const uint32_t bytes = layout.bits / 8u;
            uint64_t at = 0; // in bits
            for (uint32_t y = 0; y < h; ++y)
                for (uint32_t x = 0; x < w; ++x, at += layout.bits)
                {
                    if ((at + layout.bits + 7u) / 8u > size)
                        return;
                    const uint32_t value = layout.read(r.vram.data(), sbp, sbw, (sx + x) & 2047u, (sy + y) & 2047u);
                    if (layout.bits == 4u)
                        out[at / 8u] |= uint8_t((value & 15u) << (at & 4u));
                    else
                        for (uint32_t b = 0; b < bytes; ++b)
                            out[at / 8u + b] = uint8_t(value >> (8u * b));
                }
        }
    }
    void clear(void *handle, uint32_t fbp, uint32_t bw, uint32_t x0, uint32_t y0, uint32_t x1, uint32_t y1, uint32_t rgba, uint32_t fbmsk, uint32_t fba)
    {
        GS_AUTORELEASE
        {
            const uint32_t args[] = {fbp, bw, x0, y0, x1, y1, rgba, fbmsk, fba};
            dumpEvent(4, 0, args, sizeof(args));
            // A flat sprite through the normal path, with the register state put back afterwards.
            gsn::Frontend &frontend = renderer(handle).frontend;
            renderer(handle).stateChanging();
            const gsn::Registers saved = frontend.regs;
            frontend.writeRegister(0x1A, 1);
            frontend.writeRegister(0x00, 6);
            frontend.writeRegister(0x4C, uint64_t(fbp) | (uint64_t(bw) << 16) | (uint64_t(fbmsk) << 32));
            frontend.writeRegister(0x4E, uint64_t(1) << 32);
            frontend.writeRegister(0x18, 0);
            frontend.writeRegister(0x40, uint64_t(x0) | (uint64_t(x1) << 16) | (uint64_t(y0) << 32) | (uint64_t(y1) << 48));
            frontend.writeRegister(0x47, 0);
            frontend.writeRegister(0x4A, fba & 1u);
            frontend.writeRegister(0x01, uint64_t(rgba) | (uint64_t(0x3F800000u) << 32));
            frontend.writeRegister(0x05, uint64_t(x0 * 16u) | (uint64_t(y0 * 16u) << 16));
            frontend.writeRegister(0x05, uint64_t((x1 + 1u) * 16u) | (uint64_t((y1 + 1u) * 16u) << 16));
            renderer(handle).stateChanging();
            frontend.regs = saved;
        }
    }
    int scanout(void *handle, GSParallelScanout *request)
    {
        GS_AUTORELEASE
        {
            static uint64_t previous = 0, reported = 0;
            const uint64_t arrived = nowNs();
            int shown;
            {
                BusyTimer busy(g_busyNs);
                shown = request ? renderer(handle).scanout(*request) : 0;
            }
            const uint64_t interval = previous ? arrived - previous : 0, busyNs = g_busyNs.exchange(0), textureNs = g_textureNs.exchange(0), waitNs = g_gpuWaitNs.exchange(0),
                           decoded = g_decodedSince.exchange(0);
            previous = arrived;
            // PS2X_GS_NATIVE_HITCH_LOG=0 silences it; PS2X_GS_NATIVE_HITCH_MS=<ms> sets the gap that counts (default 100). It
            // was 25 ms: at the game's 30 fps every frame passed it, and the synchronous write on this (the presenting)
            // thread delayed the next frame in turn (Windows: 120 of 120 frames late, ~20 fps, until it was silenced).
            static const bool hitchLog = [] { const char *v = std::getenv("PS2X_GS_NATIVE_HITCH_LOG"); return !(v && v[0] == '0'); }();
            static const uint64_t hitchNs = [] { const char *v = std::getenv("PS2X_GS_NATIVE_HITCH_MS"); const long ms = v ? std::atol(v) : 0; return uint64_t(ms > 0 ? ms : 100) * 1000000ull; }();
            const uint64_t readbackNs = g_readbackNs.exchange(0), readbacks = g_readbacks.exchange(0), refreshNs = g_refreshNs.exchange(0), refreshes = g_refreshes.exchange(0),
                           presentNs = g_presentNs.exchange(0), flushWaitNs = g_flushWaitNs.exchange(0), flushWaits = g_flushWaits.exchange(0);
            g_presentNsDummy.store(0, std::memory_order_relaxed);
            if (hitchLog && interval > hitchNs && reported++ < 2000u)
                std::fprintf(stderr, "[hitch] scanout %.1f ms after the previous one: GS thread busy %.1f ms here (textures %.1f ms, %llu decoded; GPU waits %.1f ms;"
                                     " readbacks %.1f ms x%llu, VRAM to targets %.1f ms x%llu, present %.1f ms, waiting flushes %.1f ms x%llu)\n",
                             interval / 1e6, busyNs / 1e6, textureNs / 1e6, (unsigned long long)decoded, waitNs / 1e6, readbackNs / 1e6, (unsigned long long)readbacks,
                             refreshNs / 1e6, (unsigned long long)refreshes, presentNs / 1e6, flushWaitNs / 1e6, (unsigned long long)flushWaits);
            if (request)
                dumpScanout(handle, *request);
            return shown;
        }
    }
    int attachWindow(void *handle, void *window)
    {
        GS_AUTORELEASE { return window && renderer(handle).attachWindow(window) ? 1 : 0; }
    }
}

// For the in-game menu (looked up by name, outside the versioned ABI): hide or show the picture over the window,
// and change display options while the game runs ("fxaa" 0/1, "gamma", "brightness", "sharpen" 0..1).
extern "C" __attribute__((visibility("default"))) void black_native_gs_set_overlay(void *handle, int menuOpen)
{
    if (handle)
        renderer(handle).setPictureVisible(menuOpen == 0);
}
extern "C" __attribute__((visibility("default"))) void black_native_gs_set_option(void *handle, const char *key, float value)
{
    if (handle && key)
        renderer(handle).setOption(key, value);
}

extern "C" __attribute__((visibility("default"))) const GSParallelAPI *black_parallel_gs_api()
{
    static const GSParallelAPI api{6, create, destroy, reset, gif, reg, image, flush, wait, read, write, fifo, clear, scanout, attachWindow};
    return &api;
}
