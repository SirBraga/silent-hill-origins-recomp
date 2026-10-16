#include "runtime/gs/gs_cpu_backend.h"
#include "runtime/gs/gs_sdl_gpu_raster.h"
#include "runtime/gs/gs_metal_raster.h"
#include "runtime/gs/gs_record.h"
#include <tuple>
#include <cstdio>
#include "runtime/gs/ps2_gs_common.h"
#include "runtime/gs/ps2_gs_psmct16.h"
#include "runtime/gs/ps2_gs_psmct32.h"
#include "runtime/gs/ps2_gs_psmt4.h"
#include "runtime/gs/ps2_gs_psmt8.h"
#include "runtime/gs/ps2_gs_memory.h"
#include "ps2_log.h"
#include <atomic>
#include <condition_variable>
#include <cstdlib>
#include <functional>
#include <mutex>
#include <thread>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cfenv>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <iostream>
#include <numeric>
#include <stdexcept>

using namespace GSInternal;
namespace
{
#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)
    bool sdlGpuWasRequested()
    {
        const char *value = std::getenv("PS2X_GS_SDL_GPU");
        return value && value[0] == '1';
    }

    void rejectSdlGpuCpuPath(const char *operation)
    {
        if (sdlGpuWasRequested())
        {
            std::fprintf(stderr, "[gs-sdl-gpu] GPU-only mode rejected CPU path for %s\n", operation);
            throw std::runtime_error(std::string("SDL_GPU GS GPU-only mode: unsupported ") + operation + " would use CPU");
        }
    }
#endif

    // Row-parallel rasterization for large sprites. Pixels of one primitive are independent
    // (each one only reads/writes its own framebuffer/Z location and reads the texture), so rows
    // can be split across workers as long as the texture does not alias the target.
    // PS2X_GS_RASTER_THREADS=<n> overrides the worker count (0 = serial).
    class RasterPool
    {
    public:
        static RasterPool &instance()
        {
            static RasterPool s_pool;
            return s_pool;
        }

        // Runs fn(y) for y in [y0, y1], blocking until all rows are done.
        template <typename Fn>
        void forRows(int y0, int y1, Fn &&fn)
        {
            const int rows = y1 - y0 + 1;
            if (m_threads.empty() || rows < 8)
            {
                for (int y = y0; y <= y1; ++y)
                    fn(y);
                return;
            }
            const int roundingMode = std::fegetround();
            std::function<void(int)> job = [&fn](int y)
            { fn(y); };
            {
                std::lock_guard<std::mutex> lock(m_mutex);
                m_job = &job;
                m_roundingMode = roundingMode;
                m_next.store(y0, std::memory_order_relaxed);
                m_end = y1;
                m_active = static_cast<unsigned>(m_threads.size());
                ++m_generation;
            }
            m_wake.notify_all();
            runRows(job, roundingMode);
            std::unique_lock<std::mutex> lock(m_mutex);
            m_done.wait(lock, [this]
                        { return m_active == 0u; });
            m_job = nullptr;
        }

    private:
        RasterPool()
        {
            unsigned count = std::min(4u, std::max(1u, std::thread::hardware_concurrency()) / 2u);
            if (const char *env = std::getenv("PS2X_GS_RASTER_THREADS"))
                count = static_cast<unsigned>(std::strtoul(env, nullptr, 10));
            for (unsigned i = 0; i < count; ++i)
                m_threads.emplace_back([this]
                                       { workerLoop(); });
        }
        ~RasterPool()
        {
            {
                std::lock_guard<std::mutex> lock(m_mutex);
                m_stop = true;
                ++m_generation;
            }
            m_wake.notify_all();
            for (std::thread &t : m_threads)
                t.join();
        }
        void runRows(const std::function<void(int)> &job, int roundingMode)
        {
            const int previousRounding = std::fegetround();
            if (previousRounding != roundingMode) std::fesetround(roundingMode);
            for (;;)
            {
                const int y = m_next.fetch_add(1, std::memory_order_relaxed);
                if (y > m_end)
                    break;
                job(y);
            }
            if (previousRounding != roundingMode) std::fesetround(previousRounding);
        }
        void workerLoop()
        {
            uint64_t seen = 0;
            for (;;)
            {
                const std::function<void(int)> *job = nullptr;
                int roundingMode = FE_TONEAREST;
                {
                    std::unique_lock<std::mutex> lock(m_mutex);
                    m_wake.wait(lock, [&]
                                { return m_stop || m_generation != seen; });
                    if (m_stop)
                        return;
                    seen = m_generation;
                    job = m_job;
                    roundingMode = m_roundingMode;
                }
                if (job)
                    runRows(*job, roundingMode);
                {
                    std::lock_guard<std::mutex> lock(m_mutex);
                    --m_active;
                }
                m_done.notify_one();
            }
        }

        std::vector<std::thread> m_threads;
        std::mutex m_mutex;
        std::condition_variable m_wake;
        std::condition_variable m_done;
        const std::function<void(int)> *m_job = nullptr;
        std::atomic<int> m_next{0};
        int m_end = 0;
        int m_roundingMode = FE_TONEAREST;
        unsigned m_active = 0;
        uint64_t m_generation = 0;
        bool m_stop = false;
    };

    // True when the texture's block range may overlap the framebuffer rows being drawn.
    bool textureMayAliasFrame(const GSContext &ctx, int lastRow)
    {
        const uint32_t frameBlock = ctx.frame.fbp * 32u;
        const uint32_t pagesHigh = static_cast<uint32_t>(std::max(lastRow, 0)) / 32u + 1u;
        const uint32_t frameBlocks = std::max<uint32_t>(ctx.frame.fbw, 1u) * pagesHigh * 32u;
        const uint32_t tbp = ctx.tex0.tbp0;
        return tbp + 32u > frameBlock && tbp < frameBlock + frameBlocks;
    }

    bool texturePageSize(uint8_t psm, unsigned &pageW, unsigned &pageH)
    {
        pageW = 64;
        pageH = 32;
        switch (psm)
        {
        case 0:
        case 1:
        case 27:
        case 36:
        case 44:
        case 48:
        case 49:
            return true;
        case 2:
        case 10:
        case 50:
        case 58:
            pageH = 64;
            return true;
        case 19:
            pageW = 128;
            pageH = 64;
            return true;
        case 20:
            pageW = 128;
            pageH = 128;
            return true;
        default:
            return false;
        }
    }

    bool decodedCacheDisabled()
    {
        static const bool disabled = std::getenv("PS2X_GS_NOTEXCACHE") != nullptr;
        return disabled;
    }

    // Conservatively bound every touched allocation. Wrapped VRAM and
    // render-to-texture feedback retain serial ordering. Frame/Z stores
    // touch distinct 16- or 32-bit pixels in their swizzled page layouts.
    bool triangleRowsIndependent(const GSDrawState &state, int maxX, int maxY,
                                bool restrictToSampledMip = false, uint32_t sampledTbp = 0,
                                uint32_t sampledTbw = 1, int sampledW = 1, int sampledH = 1)
    {
        const auto &c = state.context;
        const uint64_t width = std::max(c.frame.fbw, 1u);
        if (maxX < 0 || maxY < 0 || static_cast<uint64_t>(maxX) >= width * 64u ||
            (c.frame.psm != 0u && c.frame.psm != 1u && c.frame.psm != 2u && c.frame.psm != 10u &&
             c.frame.psm != 48u && c.frame.psm != 49u && c.frame.psm != 50u && c.frame.psm != 58u))
            return false;
        const uint64_t frameStart = c.frame.fbp * 8192ull;
        const unsigned framePageH = (c.frame.psm == 2u || c.frame.psm == 10u || c.frame.psm == 50u || c.frame.psm == 58u) ? 64u : 32u;
        const uint64_t extent = width * (static_cast<uint64_t>(maxY) / framePageH + 1u) * 8192u;
        const uint64_t frameEnd = frameStart + extent;
        if (frameEnd > (4u * 1024u * 1024u)) return false;
        const bool depthUsed = !c.zbuf.zmask || ((c.test >> 17u) & 3u) >= 2u;
        const uint64_t depthStart = c.zbuf.zbp * 8192ull;
        const unsigned depthPageH = (c.zbuf.psm == 50u || c.zbuf.psm == 58u) ? 64u : 32u;
        const uint64_t depthEnd = depthStart + width * (static_cast<uint64_t>(maxY) / depthPageH + 1u) * 8192u;
        auto overlaps = [](uint64_t a, uint64_t b, uint64_t c, uint64_t d) { return a < d && c < b; };
        if (depthUsed && ((c.zbuf.psm != 48u && c.zbuf.psm != 49u && c.zbuf.psm != 50u && c.zbuf.psm != 58u) ||
            depthEnd > (4u * 1024u * 1024u) || overlaps(frameStart, frameEnd, depthStart, depthEnd)))
            return false;
        if (!state.prim.tme) return true;
        unsigned pageW = 64, pageH = 32;
        if (!texturePageSize(c.tex0.psm, pageW, pageH))
            return false;
        auto lastCoord = [](unsigned mode, unsigned size, unsigned lo, unsigned hi) {
            return mode < 2 ? std::max(size, 1u) - 1u : mode == 2 ? std::max(lo, hi) : lo | hi;
        };
        auto rangeOverlaps = [&](uint32_t tbp, uint32_t tbw, unsigned x, unsigned y) {
            const uint64_t columns = std::max<unsigned>(tbw / std::max(pageW / 64u, 1u), 1u);
            const uint64_t texStart = static_cast<uint64_t>(tbp) * 256ull;
            const uint64_t texEnd = texStart + (static_cast<uint64_t>(y) / pageH * columns + static_cast<uint64_t>(x) / pageW + 1u) * 8192u;
            return texEnd > (4u * 1024u * 1024u) || overlaps(texStart, texEnd, frameStart, frameEnd) ||
                   (depthUsed && !c.zbuf.zmask && overlaps(texStart, texEnd, depthStart, depthEnd));
        };
        if (restrictToSampledMip)
        {
            const unsigned sx = static_cast<unsigned>(std::max(sampledW, 1)) - 1u;
            const unsigned sy = static_cast<unsigned>(std::max(sampledH, 1)) - 1u;
            return !rangeOverlaps(sampledTbp, std::max<uint32_t>(sampledTbw, 1u), sx, sy);
        }
        const unsigned x = lastCoord(c.clamp & 3u, state.textureWidth, (c.clamp >> 4u) & 1023u, (c.clamp >> 14u) & 1023u);
        const unsigned y = lastCoord((c.clamp >> 2u) & 3u, state.textureHeight, (c.clamp >> 24u) & 1023u, (c.clamp >> 34u) & 1023u);
        if (rangeOverlaps(c.tex0.tbp0, std::max<uint32_t>(c.tex0.tbw, 1u), x, y))
            return false;
        // A mipmapped draw can read MIPTBP1/2 instead of TEX0.TBP0. Rows stay
        // independent when none of those bases overlap the frame or Z.
        const unsigned mmin = static_cast<unsigned>((c.tex1 >> 6) & 7u);
        const unsigned mxl = std::min<unsigned>(static_cast<unsigned>((c.tex1 >> 2) & 7u), 6u);
        if (mmin >= 2u && mxl >= 1u)
        {
            for (unsigned level = 1; level <= mxl; ++level)
            {
                const uint64_t reg = level <= 3u ? c.miptbp1 : c.miptbp2;
                const int slot = static_cast<int>(level - 1u) % 3;
                const int shift = slot * 20;
                const uint32_t mipBp = static_cast<uint32_t>((reg >> shift) & 0x3FFFu);
                const uint32_t mipBw = static_cast<uint32_t>((reg >> (shift + 14)) & 0x3Fu);
                if (mipBp == 0u && mipBw == 0u)
                    continue;
                const unsigned mipX = std::max(1u, static_cast<unsigned>(state.textureWidth) >> level) - 1u;
                const unsigned mipY = std::max(1u, static_cast<unsigned>(state.textureHeight) >> level) - 1u;
                if (rangeOverlaps(mipBp, std::max<uint32_t>(mipBw, 1u), mipX, mipY))
                    return false;
            }
        }
        return true;
    }
    float fabsQ(float q)
    {
        return (std::fabs(q) > 1.0e-8f) ? q : 1.0f;
    }

    // TEX1 chooses the mip. MMIN 4 (Black's world materials) is bilinear
    // inside the nearest level. Levels 1-3 and 4-6 come from MIPTBP1/2.
    // An all-zero slot means the game did not supply that level.
    struct ResolvedMip
    {
        uint32_t tbp = 0;
        uint32_t tbw = 1;
        int width = 1;
        int height = 1;
        int level = 0;
        bool linear = false;
    };

    ResolvedMip resolveTextureMip(const GSDrawState &state, float q)
    {
        const GSContext &ctx = state.context;
        const GSTex0Reg &tex = ctx.tex0;
        const uint64_t tex1 = ctx.tex1;
        const int baseW = std::max<int>(state.textureWidth, 1);
        const int baseH = std::max<int>(state.textureHeight, 1);
        const unsigned mmag = static_cast<unsigned>((tex1 >> 5) & 1u);
        const unsigned mmin = static_cast<unsigned>((tex1 >> 6) & 7u);
        const unsigned mxl = std::min<unsigned>(static_cast<unsigned>((tex1 >> 2) & 7u), 6u);
        const unsigned lcm = static_cast<unsigned>(tex1 & 1u);
        const unsigned lodShift = static_cast<unsigned>((tex1 >> 19) & 3u);
        int kRaw = static_cast<int>((tex1 >> 32) & 0xFFFu);
        if ((kRaw & 0x800) != 0)
            kRaw -= 0x1000;
        const float k = static_cast<float>(kRaw) / 16.0f;

        float lod = k;
        if (lcm == 0u)
        {
            float aq = std::fabs(q);
            if (aq < 1.0e-8f)
                aq = 1.0e-8f;
            lod = std::log2(1.0f / aq) * static_cast<float>(1u << lodShift) + k;
        }

        int level = 0;
        bool linear = mmag != 0u;
        if (lod > 0.0f)
        {
            if (mmin >= 2u)
            {
                level = static_cast<int>(std::floor(lod + 0.5f));
                if (level < 0)
                    level = 0;
                if (level > static_cast<int>(mxl))
                    level = static_cast<int>(mxl);
                linear = (mmin & 4u) != 0u;
            }
            else
            {
                linear = mmin == 1u;
            }
        }

        ResolvedMip mip{tex.tbp0, std::max<uint32_t>(tex.tbw, 1u), baseW, baseH, 0, linear};
        if (level > 0)
        {
            const uint64_t reg = level <= 3 ? ctx.miptbp1 : ctx.miptbp2;
            const int slot = (level - 1) % 3;
            const int shift = slot * 20;
            const uint32_t mipBp = static_cast<uint32_t>((reg >> shift) & 0x3FFFu);
            const uint32_t mipBw = static_cast<uint32_t>((reg >> (shift + 14)) & 0x3Fu);
            if (mipBp != 0u || mipBw != 0u)
            {
                mip.tbp = mipBp;
                mip.tbw = std::max<uint32_t>(mipBw, 1u);
                mip.width = std::max(1, baseW >> level);
                mip.height = std::max(1, baseH >> level);
                mip.level = level;
            }
        }
        return mip;
    }

    // Black's wall mesh is triangles of a few pixels whose Q is about 0.02.
    // log2(1/Q) then picks mip 2 or 3, and the whole triangle collapses to one
    // texel. The texel density across the triangle is the level that keeps
    // the surface from turning into a flat color. TEX1.K stays as a bias.
    void biasMipToTexelDensity(GSDrawState &state, const GSVertex &v0, const GSVertex &v1, const GSVertex &v2)
    {
        static const bool enabled = std::getenv("PS2X_GS_DENSITY_LOD") != nullptr;
        if (!enabled || !state.prim.tme || state.prim.fst)
            return;
        const float u0 = v0.s / fabsQ(v0.q);
        const float u1 = v1.s / fabsQ(v1.q);
        const float u2 = v2.s / fabsQ(v2.q);
        const float t0 = v0.t / fabsQ(v0.q);
        const float t1 = v1.t / fabsQ(v1.q);
        const float t2 = v2.t / fabsQ(v2.q);
        const float spanU = std::max({u0, u1, u2}) - std::min({u0, u1, u2});
        const float spanV = std::max({t0, t1, t2}) - std::min({t0, t1, t2});
        const float spanX = std::max(1.0f, std::max({v0.x, v1.x, v2.x}) - std::min({v0.x, v1.x, v2.x}));
        const float spanY = std::max(1.0f, std::max({v0.y, v1.y, v2.y}) - std::min({v0.y, v1.y, v2.y}));
        const float densityU = spanU * static_cast<float>(std::max<int>(state.textureWidth, 1)) / spanX;
        const float densityV = spanV * static_cast<float>(std::max<int>(state.textureHeight, 1)) / spanY;
        const float density = std::max(densityU, densityV);
        int kRaw = static_cast<int>((state.context.tex1 >> 32) & 0xFFFu);
        if ((kRaw & 0x800) != 0)
            kRaw -= 0x1000;
        float lod = (density > 1.0e-6f ? std::log2(density) : -8.0f) + static_cast<float>(kRaw) / 16.0f;
        int encoded = static_cast<int>(std::lround(lod * 16.0f));
        if (encoded > 2047)
            encoded = 2047;
        if (encoded < -2048)
            encoded = -2048;
        uint64_t tex1 = state.context.tex1;
        tex1 &= ~(1ull | (0xFFFull << 32));
        tex1 |= 1ull | (static_cast<uint64_t>(encoded & 0xFFF) << 32);
        state.context.tex1 = tex1;
    }

    u16 Rgba8888ToRgba5551(u32 c)
    {
        uint32_t r = ((c >> 0) & 0xFF) >> 3;
        uint32_t g = ((c >> 8) & 0xFF) >> 3;
        uint32_t b = ((c >> 16) & 0xFF) >> 3;
        uint32_t a = ((c >> 24) & 0xFF) >> 7;

        return (r | (g << 5) | (b << 10) | (a << 15));
    }

    u32 Rgba5551ToRgba8888(u16 c)
    {
        u32 r = ((c >> 0) & 0x1F) << 3;
        u32 g = ((c >> 5) & 0x1F) << 3;
        u32 b = ((c >> 10) & 0x1F) << 3;
        u32 a = ((c >> 15) & 0x01) << 7;

        return (r | (g << 8) | (b << 16) | (a << 24));
    }

    u32 pack32(u8 r, u8 g, u8 b, u8 a)
    {
        return static_cast<u32>(r) | (g << 8) | (b << 16) | (a << 24);
    }

    uint32_t applyTexa(const GSTexaReg &texa, uint8_t psm, uint32_t texel)
    {
        if (psm == GS_PSM_CT32)
            return texel;

        const uint8_t r = static_cast<uint8_t>(texel & 0xFFu);
        const uint8_t g = static_cast<uint8_t>((texel >> 8) & 0xFFu);
        const uint8_t b = static_cast<uint8_t>((texel >> 16) & 0xFFu);
        const bool rgbZero = r == 0u && g == 0u && b == 0u;
        uint8_t a = static_cast<uint8_t>((texel >> 24) & 0xFFu);

        switch (psm)
        {
        case GS_PSM_CT24:
            a = (texa.aem && rgbZero) ? 0u : texa.ta0;
            break;
        case GS_PSM_CT16:
        case GS_PSM_CT16S:
            if ((a & 0x80u) != 0u)
                a = texa.ta1;
            else
                a = (texa.aem && rgbZero) ? 0u : texa.ta0;
            break;
        default:
            break;
        }

        return (texel & 0x00FFFFFFu) | (static_cast<uint32_t>(a) << 24);
    }

    uint32_t addrPSMCT16Family(uint32_t basePtr, uint32_t width, uint8_t psm, uint32_t x, uint32_t y)
    {
        switch (psm)
        {
        case GS_PSM_CT16:
            return GSPSMCT16::addrPSMCT16(basePtr, width, x, y);
        case GS_PSM_CT16S:
            return GSPSMCT16::addrPSMCT16S(basePtr, width, x, y);
        case GS_PSM_Z16:
            return GSPSMCT16::addrPSMZ16(basePtr, width, x, y);
        case GS_PSM_Z16S:
            return GSPSMCT16::addrPSMZ16S(basePtr, width, x, y);
        default:
            return 0u;
        }
    }

    std::atomic<uint32_t> s_debugPrimitiveCount{0};
    std::atomic<uint32_t> s_debugPixelCount{0};
    std::atomic<uint32_t> s_debugContext1PrimitiveCount{0};
    std::atomic<uint32_t> s_debugFbp150PixelCount{0};

    int wrapTextureCoordinate(int coordinate,
                              int textureSize,
                              uint8_t mode,
                              uint16_t regionMin,
                              uint16_t regionMax)
    {
        switch (mode & 0x3u)
        {
        case 0: // REPEAT
            return static_cast<int>(static_cast<uint32_t>(coordinate) & static_cast<uint32_t>(textureSize - 1));
        case 1: // CLAMP
            return clampInt(coordinate, 0, textureSize - 1);
        case 2: // REGION_CLAMP
            return std::min(std::max(coordinate, static_cast<int>(regionMin)), static_cast<int>(regionMax));
        case 3: // REGION_REPEAT
            return static_cast<int>((static_cast<uint32_t>(coordinate) & static_cast<uint32_t>(regionMin)) | static_cast<uint32_t>(regionMax));
        default:
            return coordinate;
        }
    }

    bool passesAlphaTest(uint64_t testReg, uint8_t alpha)
    {
        if ((testReg & 0x1u) == 0u)
            return true;

        const uint8_t atst = static_cast<uint8_t>((testReg >> 1) & 0x7u);
        const uint8_t aref = static_cast<uint8_t>((testReg >> 4) & 0xFFu);

        switch (atst)
        {
        case 0:
            return false;
        case 1:
            return true;
        case 2:
            return alpha < aref;
        case 3:
            return alpha <= aref;
        case 4:
            return alpha == aref;
        case 5:
            return alpha >= aref;
        case 6:
            return alpha > aref;
        case 7:
            return alpha != aref;
        default:
            return true;
        }
    }

    struct PixelWriteMask
    {
        bool writeRgb = true;
        bool writeAlpha = true;
        bool writeDepth = true;

        bool writesFramebuffer() const
        {
            return writeRgb || writeAlpha;
        }

        bool writesAnything() const
        {
            return writesFramebuffer() || writeDepth;
        }
    };

    PixelWriteMask classifyAlphaTest(uint64_t testReg, uint8_t alpha, uint8_t framePsm)
    {
        const bool pass = passesAlphaTest(testReg, alpha);
        if (pass)
            return {};

        // TEST.AFAIL controls what happens when the alpha comparison fails.
        switch (static_cast<uint8_t>((testReg >> 12) & 0x3u))
        {
        case 1: // FB_ONLY
            return {true, true, false};
        case 2: // ZB_ONLY
            return {false, false, true};
        case 3: // RGB_ONLY
            // RGB_ONLY is only distinct for RGBA32. The GS treats it as
            // FB_ONLY for RGB24 and RGBA16 framebuffers.
            if (framePsm == GS_PSM_CT32)
                return {true, false, false};
            return {true, true, false};
        case 0: // KEEP
        default:
            return {false, false, false};
        }
    }

    bool passesDestinationAlphaTest(uint64_t testReg, uint8_t framePsm, uint32_t rawFramebufferPixel)
    {
        const bool date = ((testReg >> 14) & 0x1u) != 0u;
        if (!date)
            return true;

        const bool datm = ((testReg >> 15) & 0x1u) != 0u;
        switch (framePsm)
        {
        case GS_PSM_CT32:
            return (((rawFramebufferPixel >> 31) & 0x1u) != 0u) == datm;
        case GS_PSM_CT16:
        case GS_PSM_CT16S:
            return (((rawFramebufferPixel >> 15) & 0x1u) != 0u) == datm;
        case GS_PSM_CT24:
            // RGB24 has no destination alpha, so DATE always passes.
            return true;
        default:
            return true;
        }
    }

    struct TextureCombineResult
    {
        uint8_t r;
        uint8_t g;
        uint8_t b;
        uint8_t a;
    };

    TextureCombineResult combineTexture(const GSTex0Reg &tex,
                                        uint8_t vr,
                                        uint8_t vg,
                                        uint8_t vb,
                                        uint8_t va,
                                        uint8_t tr,
                                        uint8_t tg,
                                        uint8_t tb,
                                        uint8_t ta)
    {
        const bool textureHasAlpha = tex.tcc != 0u;
        TextureCombineResult out{tr, tg, tb, textureHasAlpha ? ta : va};

        switch (tex.tfx)
        {
        case 0: // MODULATE
            out.r = clampU8((tr * vr) >> 7);
            out.g = clampU8((tg * vg) >> 7);
            out.b = clampU8((tb * vb) >> 7);
            out.a = textureHasAlpha ? clampU8((ta * va) >> 7) : va;
            break;
        case 1: // DECAL
            out.r = tr;
            out.g = tg;
            out.b = tb;
            out.a = textureHasAlpha ? ta : va;
            break;
        case 2: // HIGHLIGHT
            out.r = clampU8(((tr * vr) >> 7) + va);
            out.g = clampU8(((tg * vg) >> 7) + va);
            out.b = clampU8(((tb * vb) >> 7) + va);
            out.a = textureHasAlpha ? clampU8(ta + va) : va;
            break;
        case 3: // HIGHLIGHT2
            out.r = clampU8(((tr * vr) >> 7) + va);
            out.g = clampU8(((tg * vg) >> 7) + va);
            out.b = clampU8(((tb * vb) >> 7) + va);
            out.a = textureHasAlpha ? ta : va;
            break;
        default:
            out.r = tr;
            out.g = tg;
            out.b = tb;
            out.a = textureHasAlpha ? ta : va;
            break;
        }

        return out;
    }

    uint32_t swizzleClutIndexCSM1(uint32_t index)
    {
        // CSM1 swaps address bits 3 and 4. Preserve the remaining bits:
        // 16-bit CLUTs expose a ninth address bit through CSA[4].
        return (index & ~0x18u) | ((index & 0x08u) << 1u) | ((index & 0x10u) >> 1u);
    }

    bool isFourBitIndexedPsm(uint8_t psm)
    {
        return psm == GS_PSM_T4 || psm == GS_PSM_T4HL || psm == GS_PSM_T4HH;
    }

    bool isEightBitIndexedPsm(uint8_t psm)
    {
        return psm == GS_PSM_T8 || psm == GS_PSM_T8H;
    }

    uint8_t lerpChannel(uint8_t c00, uint8_t c10, uint8_t c01, uint8_t c11, float fx, float fy)
    {
        const float top = static_cast<float>(c00) + (static_cast<float>(c10) - static_cast<float>(c00)) * fx;
        const float bottom = static_cast<float>(c01) + (static_cast<float>(c11) - static_cast<float>(c01)) * fx;
        return clampU8(static_cast<int>(std::lround(top + (bottom - top) * fy)));
    }
}

namespace
{
    static constexpr uint32_t kDefaultDisplayWidth = 640u;
    static constexpr uint32_t kDefaultDisplayHeight = 448u;
    static constexpr uint32_t kHostFrameWidth = 640u;
    static constexpr uint32_t kHostFrameHeight = 512u;

    uint16_t encodeFramePixelPSMCT16(uint8_t r, uint8_t g, uint8_t b, uint8_t a)
    {
        return static_cast<uint16_t>(((r >> 3) & 0x1Fu) |
                                     (((g >> 3) & 0x1Fu) << 5) |
                                     (((b >> 3) & 0x1Fu) << 10) |
                                     ((a >= 0x40u) ? 0x8000u : 0u));
    }

    void decodeDisplaySize(uint64_t display64, uint32_t &outWidth, uint32_t &outHeight)
    {
        const uint32_t dw = static_cast<uint32_t>((display64 >> 32) & 0x0FFFu);
        const uint32_t dh = static_cast<uint32_t>((display64 >> 44) & 0x07FFu);
        const uint32_t magh = static_cast<uint32_t>((display64 >> 23) & 0x0Fu);

        outWidth = (dw + 1u) / (magh + 1u);
        outHeight = dh + 1u;
        if (outWidth < 64u || outHeight < 64u)
        {
            outWidth = kDefaultDisplayWidth;
            outHeight = kDefaultDisplayHeight;
        }
        outWidth = std::min<uint32_t>(outWidth, kHostFrameWidth);
        outHeight = std::min<uint32_t>(outHeight, kHostFrameHeight);
    }

    GSFrameReg decodeDisplayFrame(uint64_t dispfb64)
    {
        GSFrameReg frame{};
        frame.fbp = static_cast<uint32_t>(dispfb64 & 0x1FFu);
        frame.fbw = static_cast<uint32_t>((dispfb64 >> 9) & 0x3Fu);
        frame.psm = static_cast<uint8_t>((dispfb64 >> 15) & 0x1Fu);
        return frame;
    }

    struct GSDisplayReadOrigin
    {
        uint32_t x = 0u;
        uint32_t y = 0u;
    };

    GSDisplayReadOrigin decodeDisplayReadOrigin(uint64_t dispfb64)
    {
        return {
            static_cast<uint32_t>((dispfb64 >> 32) & 0x7FFu),
            static_cast<uint32_t>((dispfb64 >> 43) & 0x7FFu)};
    }

    bool hasDisplaySetup(uint64_t display64, const GSFrameReg &frame)
    {
        const uint32_t dw = static_cast<uint32_t>((display64 >> 32) & 0x0FFFu);
        const uint32_t dh = static_cast<uint32_t>((display64 >> 44) & 0x07FFu);
        const uint32_t magh = static_cast<uint32_t>((display64 >> 23) & 0x0Fu);
        return frame.fbw != 0u || dw != 0u || dh != 0u || magh != 0u;
    }

    struct GSPmodeState
    {
        bool enableCrt1 = false;
        bool enableCrt2 = false;
        bool mmod = false;
        bool amod = false;
        bool slbg = false;
        uint8_t alp = 0u;
    };

    GSPmodeState decodePmode(uint64_t pmode64)
    {
        return {
            (pmode64 & 0x1ull) != 0ull,
            (pmode64 & 0x2ull) != 0ull,
            ((pmode64 >> 5) & 0x1ull) != 0ull,
            ((pmode64 >> 6) & 0x1ull) != 0ull,
            ((pmode64 >> 7) & 0x1ull) != 0ull,
            static_cast<uint8_t>((pmode64 >> 8) & 0xFFu)};
    }

    struct GSSmode2State
    {
        bool interlaced = false;
        bool frameMode = true;
    };

    GSSmode2State decodeSMode2(uint64_t smode2)
    {
        return {(smode2 & 0x1ull) != 0ull, ((smode2 >> 1) & 0x1ull) != 0ull};
    }

    void applyFieldPresentation(std::vector<uint8_t> &pixels, uint32_t width, uint32_t height, bool oddField)
    {
        if (pixels.empty() || width == 0u || height < 2u)
            return;
        const std::vector<uint8_t> source = pixels;
        for (uint32_t y = 0; y < height; ++y)
        {
            uint32_t sourceY = ((y >> 1u) << 1u) + (oddField ? 1u : 0u);
            if (sourceY >= height)
                sourceY = height - 1u;
            std::memcpy(pixels.data() + y * kHostFrameWidth * 4u,
                        source.data() + sourceY * kHostFrameWidth * 4u,
                        width * 4u);
        }
    }

    void normalizePresentationAlpha(std::vector<uint8_t> &pixels, uint32_t width, uint32_t height)
    {
        for (uint32_t y = 0; y < height; ++y)
        {
            uint8_t *row = pixels.data() + y * kHostFrameWidth * 4u;
            for (uint32_t x = 0; x < width; ++x)
                row[x * 4u + 3u] = 255u;
        }
    }

    uint8_t blendPresentationChannel(uint8_t src, uint8_t dst, uint32_t factor)
    {
        const int delta = static_cast<int>(src) - static_cast<int>(dst);
        return GSInternal::clampU8(static_cast<int>(dst) + ((delta * static_cast<int>(factor)) / 255));
    }

    bool hasNonBlackPixel(const std::vector<uint8_t> &pixels, uint32_t width, uint32_t height)
    {
        for (uint32_t y = 0; y < height; ++y)
        {
            const uint8_t *row = pixels.data() + y * kHostFrameWidth * 4u;
            for (uint32_t x = 0; x < width; ++x)
            {
                if (row[x * 4u] != 0u || row[x * 4u + 1u] != 0u || row[x * 4u + 2u] != 0u)
                    return true;
            }
        }
        return false;
    }
}

GSCpuBackend::GSCpuBackend()
{
    using namespace GSMem;
    static std::once_flag lookupTablesOnce;
    std::call_once(lookupTablesOnce, []()
                   { InitLookupTables(); });
    for (size_t i = 0; i < kPsmHandlerCount; ++i)
    {
        switch (i)
        {
        case GS_PSM_CT32:
            m_readVramFuncs[i] = ReadCT32;
            m_writeVramFuncs[i] = WriteCT32;
            break;
        case GS_PSM_CT24:
            m_readVramFuncs[i] = ReadCT24;
            m_writeVramFuncs[i] = WriteCT24;
            break;
        case GS_PSM_CT16:
            m_readVramFuncs[i] = ReadCT16;
            m_writeVramFuncs[i] = WriteCT16;
            break;
        case GS_PSM_CT16S:
            m_readVramFuncs[i] = ReadCT16S;
            m_writeVramFuncs[i] = WriteCT16S;
            break;
        case GS_PSM_T8:
            m_readVramFuncs[i] = ReadP8;
            m_writeVramFuncs[i] = WriteP8;
            break;
        case GS_PSM_T8H:
            m_readVramFuncs[i] = ReadP8H;
            m_writeVramFuncs[i] = WriteP8H;
            break;
        case GS_PSM_T4:
            m_readVramFuncs[i] = ReadP4;
            m_writeVramFuncs[i] = WriteP4;
            break;
        case GS_PSM_T4HH:
            m_readVramFuncs[i] = ReadP4HH;
            m_writeVramFuncs[i] = WriteP4HH;
            break;
        case GS_PSM_T4HL:
            m_readVramFuncs[i] = ReadP4HL;
            m_writeVramFuncs[i] = WriteP4HL;
            break;
        case GS_PSM_Z32:
            m_readVramFuncs[i] = ReadZ32;
            m_writeVramFuncs[i] = WriteZ32;
            break;
        case GS_PSM_Z24:
            m_readVramFuncs[i] = ReadZ24;
            m_writeVramFuncs[i] = WriteZ24;
            break;
        case GS_PSM_Z16:
            m_readVramFuncs[i] = ReadZ16;
            m_writeVramFuncs[i] = WriteZ16;
            break;
        case GS_PSM_Z16S:
            m_readVramFuncs[i] = ReadZ16S;
            m_writeVramFuncs[i] = WriteZ16S;
            break;
        default:
            m_readVramFuncs[i] = ReadNull;
            m_writeVramFuncs[i] = WriteNull;
            break;
        }
    }
    Reset();
}

GSCpuBackend::~GSCpuBackend() = default;
uint64_t GSCpuBackend::MetalDrawCount() const {return m_metal ? m_metal->draws() : 0;}

void GSCpuBackend::EnsureSDLGpu()
{
#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)
    if (m_sdlGpu || m_metal || !m_vram)
        return;
    const char *sdlGpu = std::getenv("PS2X_GS_SDL_GPU");
    if (!sdlGpu || sdlGpu[0] != '1')
        return;
    m_metalTried = true;
    m_sdlGpu = std::make_unique<GSSDLGpuRaster>(m_vram, m_clut.data());
#endif
}

void GSCpuBackend::SyncMetal() const
{
    if (m_metal) {m_metal->sync();if(m_metalClutDirty){m_metal->copyClut(m_clut.data());m_metalClutDirty=false;}}
#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)
    if (m_sdlGpu) m_sdlGpu->sync();
#endif
}

bool GSCpuBackend::TryMetal(const GSPrimitiveBatch &batch)
{
    if (!m_metalTried)
    {
        m_metalTried = true;
#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)
        EnsureSDLGpu();
#endif
        if (GSMetalRaster::requested() && GSMetalRaster::aligned(m_vram))
        {
#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)
            if (!m_sdlGpu)
#endif
                m_metal = std::make_unique<GSMetalRaster>(m_vram,m_clut.data());
        }
    }
#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)
    if (!m_metal && !m_sdlGpu) return false;
#else
    if (!m_metal) return false;
#endif
    auto rejectGpu = [&](unsigned reason)
    {
#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)
        if (m_sdlGpu)
        {
            const auto &state = batch.state;
            const auto &ctx = state.context;
            std::fprintf(stderr,
                "[gs-sdl-gpu] rejected draw reason=%u frame=%u/%u/%u z=%u/%u zmask=%u test=%llx tex=%u/%u/%u tme=%u offset=%u,%u scissor=%u..%u,%u..%u\n",
                reason, unsigned(ctx.frame.fbp), unsigned(ctx.frame.fbw), unsigned(ctx.frame.psm),
                unsigned(ctx.zbuf.zbp), unsigned(ctx.zbuf.psm), unsigned(ctx.zbuf.zmask),
                static_cast<unsigned long long>(ctx.test),
                unsigned(ctx.tex0.tbp0), unsigned(ctx.tex0.tbw), unsigned(ctx.tex0.psm), unsigned(state.prim.tme),
                unsigned(ctx.xyoffset.ofx), unsigned(ctx.xyoffset.ofy),
                unsigned(ctx.scissor.x0), unsigned(ctx.scissor.x1),
                unsigned(ctx.scissor.y0), unsigned(ctx.scissor.y1));
            if (reason == 7u)
                for (unsigned i = 0; i < batch.vertexCount; ++i)
                {
                    const auto &vertex = batch.vertices[i];
                    std::fprintf(stderr, "[gs-sdl-gpu] vertex[%u] xy=(%.9g,%.9g) z=%.9g stq=(%.9g,%.9g,%.9g)\n",
                        i, double(vertex.x), double(vertex.y), double(vertex.z),
                        double(vertex.s), double(vertex.t), double(vertex.q));
                }
        }
#else
        (void)reason;
#endif
        return false;
    };
    const auto &s = batch.state;
    const auto &c = s.context;
    const bool sprite = s.prim.type == GS_PRIM_SPRITE;
    const bool point = s.prim.type == GS_PRIM_POINT;
    const bool line = s.prim.type == GS_PRIM_LINE || s.prim.type == GS_PRIM_LINESTRIP;
    if (!sprite && !point && !line && s.prim.type != GS_PRIM_TRIANGLE && s.prim.type != GS_PRIM_TRISTRIP && s.prim.type != GS_PRIM_TRIFAN) return rejectGpu(0);
    if (c.frame.psm != 0 && c.frame.psm != 1 && c.frame.psm != 2 && c.frame.psm != 10 && c.frame.psm != 48 && c.frame.psm != 49 && c.frame.psm != 50 && c.frame.psm != 58) return rejectGpu(1);
    if (c.zbuf.psm != 48 && c.zbuf.psm != 49 && c.zbuf.psm != 50 && c.zbuf.psm != 58) return rejectGpu(2);
    // AA1 only softens primitive edges through coverage. The GPU path has no coverage
    // output, so the primitive is drawn with hard edges rather than dropped.
    // PS2X_GS_SDL_GPU_REJECT_AA1=1 restores the rejection (diagnostics).
    if (s.prim.aa1 && [] { static const bool reject = [] { const char *v = std::getenv("PS2X_GS_SDL_GPU_REJECT_AA1"); return v && v[0] == '1'; }(); return reject; }())
        return rejectGpu(3);
    if (s.scanmsk) return rejectGpu(5);
    if (!line && !point && s.prim.tme && c.tex0.psm != 0 && c.tex0.psm != 1 && c.tex0.psm != 2 && c.tex0.psm != 10 && c.tex0.psm != 19 && c.tex0.psm != 20 && c.tex0.psm != 27 && c.tex0.psm != 36 && c.tex0.psm != 44 && c.tex0.psm != 48 && c.tex0.psm != 49 && c.tex0.psm != 50 && c.tex0.psm != 58) return rejectGpu(6);
    float xs[3]{},ys[3]{};
    for(unsigned i=0;i<batch.vertexCount;++i) {
        const auto &v=batch.vertices[i];
        if(!std::isfinite(v.x)||!std::isfinite(v.y)||!std::isfinite(v.z)||v.z<0 || v.z>4294967040.0) return rejectGpu(7);
        xs[i]=v.x-float(c.xyoffset.ofx>>4);ys[i]=v.y-float(c.xyoffset.ofy>>4);
    }
    if ((line || point) && (xs[0] < -32768.0f || xs[0] > 32767.0f || (line && (xs[1] < -32768.0f || xs[1] > 32767.0f)) ||
                 ys[0] < -32768.0f || ys[0] > 32767.0f || (line && (ys[1] < -32768.0f || ys[1] > 32767.0f))))
        return rejectGpu(7);
    int minX,maxX,minY,maxY;
    if (point) {
        minX = maxX = int(xs[0]); minY = maxY = int(ys[0]);
    } else if (line) {
        minX = std::min(int(xs[0]), int(xs[1])); maxX = std::max(int(xs[0]), int(xs[1]));
        minY = std::min(int(ys[0]), int(ys[1])); maxY = std::max(int(ys[0]), int(ys[1]));
        if (std::max(maxX - minX, maxY - minY) > 8192) return rejectGpu(7);
    } else if(sprite) {
        minX=std::min(int(xs[0]),int(xs[1]));maxX=std::max(int(xs[0]),int(xs[1]))-1;
        minY=std::min(int(ys[0]),int(ys[1]));maxY=std::max(int(ys[0]),int(ys[1]))-1;
    } else {
        minX=int(std::floor(std::min({xs[0],xs[1],xs[2]})));maxX=int(std::ceil(std::max({xs[0],xs[1],xs[2]})));
        minY=int(std::floor(std::min({ys[0],ys[1],ys[2]})));maxY=int(std::ceil(std::max({ys[0],ys[1],ys[2]})));
    }
    minX=std::max(minX,int(c.scissor.x0));maxX=std::min(maxX,int(c.scissor.x1));minY=std::max(minY,int(c.scissor.y0));maxY=std::min(maxY,int(c.scissor.y1));
    if(maxX<minX||maxY<minY) return true;
    GSPrimitiveBatch normalizedBatch;
    const GSPrimitiveBatch *gpuBatch = &batch;
    if (!line && !point && s.prim.tme)
    {
        bool invalidS = false, invalidT = false, invalidQ = false;
        for (unsigned i = 0; i < batch.vertexCount; ++i)
        {
            invalidS |= !std::isfinite(batch.vertices[i].s);
            invalidT |= !std::isfinite(batch.vertices[i].t);
            if (!sprite || i == 1u)
                invalidQ |= !std::isfinite(batch.vertices[i].q);
        }
        if (invalidS || invalidT || invalidQ)
        {
            // The GS can receive non-finite STQ values. Normalize the affected
            // texture axis across this primitive before GPU interpolation.
            normalizedBatch = batch;
            for (unsigned i = 0; i < normalizedBatch.vertexCount; ++i)
            {
                if (invalidS || invalidQ) normalizedBatch.vertices[i].s = 0.0f;
                if (invalidT || invalidQ) normalizedBatch.vertices[i].t = 0.0f;
                if (invalidQ) normalizedBatch.vertices[i].q = 1.0f;
            }
            gpuBatch = &normalizedBatch;
            static std::atomic<unsigned> logged{0};
            if (logged.fetch_add(1u, std::memory_order_relaxed) < 16u)
                std::fprintf(stderr, "[gs-sdl-gpu] normalized non-finite STQ for GPU draw (S=%u T=%u Q=%u)\n",
                    unsigned(invalidS), unsigned(invalidT), unsigned(invalidQ));
        }
    }
    // Tiny accepted draws are cheap on the CPU in isolation, but forcing them
    // through CPU while the GS VRAM is GPU-resident causes full 4 MiB
    // readback/upload handoffs. Keep these draws on the GPU by default.
    static const uint64_t minPixels=std::getenv("PS2X_GS_METAL_MIN_PIXELS")?std::strtoull(std::getenv("PS2X_GS_METAL_MIN_PIXELS"),nullptr,10):1u;
    if(uint64_t(maxX-minX+1)*uint64_t(maxY-minY+1)<minPixels) return rejectGpu(8);
    GSDrawState independenceState = s;
    if (line || point) independenceState.prim.tme = false; // Lines and points do not sample textures in the reference path.
    const bool alphaNeverPasses = (c.test & 1u) && (((c.test >> 1u) & 7u) == 0u);
    const bool frameOnlyOnAlphaFailure = alphaNeverPasses && (((c.test >> 12u) & 3u) == 1u);
    const bool depthTestAlwaysPasses = (((c.test >> 17u) & 3u) == 1u);
    if (frameOnlyOnAlphaFailure && depthTestAlwaysPasses)
    {
        // AFAIL=FB_ONLY suppresses every Z write when ATST=NEVER; ZTST=ALWAYS
        // also makes the read irrelevant. The alias is inert for this draw.
        independenceState.context.zbuf.zmask = true;
        independenceState.context.test &= ~(3ull << 17u);
    }
    bool serialGpuDraw = false;
    bool snapshotTexture = false;
    if (!triangleRowsIndependent(independenceState, maxX, maxY))
    {
#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)
        if (m_sdlGpu && !line && !point)
        {
            // Texture feedback can use a GPU-local snapshot, keeping a large
            // draw parallel. Frame/depth overlap still needs raster order.
            GSDrawState noTexture = independenceState;
            noTexture.prim.tme = false;
            snapshotTexture = independenceState.prim.tme && triangleRowsIndependent(noTexture, maxX, maxY);
            serialGpuDraw = !snapshotTexture;
            static std::atomic<unsigned> serialLogged{0};
            if (serialLogged.fetch_add(1u, std::memory_order_relaxed) < 16u)
                std::fprintf(stderr, "[gs-sdl-gpu] aliased draw on GPU (%d x %d, frame=%u/%u/%u depth=%u/%u/%u test=%llx tex=%u/%u/%u snapshot=%u serial=%u)\n",
                    maxX - minX + 1, maxY - minY + 1,
                    unsigned(c.frame.fbp), unsigned(c.frame.fbw), unsigned(c.frame.psm),
                    unsigned(c.zbuf.zbp), unsigned(c.zbuf.psm), unsigned(c.zbuf.zmask),
                    static_cast<unsigned long long>(c.test),
                    unsigned(c.tex0.tbp0), unsigned(c.tex0.tbw), unsigned(c.tex0.psm),
                    unsigned(snapshotTexture), unsigned(serialGpuDraw));
        }
#endif
        if (!serialGpuDraw && !snapshotTexture) return rejectGpu(9);
    }
#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)
    if (m_sdlGpu)
        m_sdlGpu->submit(*gpuBatch, minX, minY, maxX, maxY, serialGpuDraw, snapshotTexture);
    else
#endif
        m_metal->submit(*gpuBatch,minX,minY,maxX,maxY,nullptr);
    return true;
}

void GSCpuBackend::Initialize(uint8_t *vram, uint32_t vramSize)
{
    if (vram && vramSize < GSMem::MEMORY_SIZE)
        throw std::invalid_argument("GS CPU backend requires at least 4 MiB of VRAM");

    std::lock_guard<std::mutex> lock(m_mutex);
    if(m_vram != vram) { SyncMetal(); m_metal.reset();
#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)
        m_sdlGpu.reset();
#endif
        m_metalTried=false; }
    m_vram = vram;
    m_vramSize = vramSize;
    ResetUnlocked();
}

void GSCpuBackend::Reset()
{
    std::lock_guard<std::mutex> lock(m_mutex);
    ResetUnlocked();
}

void GSCpuBackend::ResetUnlocked()
{
    SyncMetal();
    GSRecord::instance().event(this,6,nullptr,0);
    m_clut.fill(0u);
    if(m_metal)m_metal->setClut(m_clut.data());
#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)
    if(m_sdlGpu)m_sdlGpu->setClut(m_clut.data());
#endif
    m_clutCbp.fill(0u);
    m_texturePageCache.Invalidate();
    invalidateDecodedTextures();
    m_hotClutCount = 0;
    m_transfer = {};
    m_transfer.direction = 3u;
    m_transferState = {};
    m_transferState.direction = 3u;
    m_localToHostBuffer.clear();
    m_localToHostReadPos = 0u;
}

// PS2X_GS_TEX_DUMP=<n> dumps the first n distinct textures drawn (to PS2X_GS_TEX_DUMP_DIR or /tmp).
std::atomic<int> g_gsTextureDumpRequest{[] { const char *v = std::getenv("PS2X_GS_TEX_DUMP"); return v ? std::atoi(v) : 0; }()};
namespace
{
    const char *gsTextureDumpDir()
    {
        static const char *dir = [] { const char *v = std::getenv("PS2X_GS_TEX_DUMP_DIR"); return (v && v[0]) ? v : "/tmp"; }();
        return dir;
    }
}
std::atomic<int> g_gsTransferTraceBudget{0};

void GSCpuBackend::DumpTextureForDebug(const GSPrimitiveBatch &batch)
{
    static std::vector<std::tuple<uint32_t, uint32_t, uint32_t>> s_seen;
    static int s_index = 0;
    const GSTex0Reg &tex = batch.state.context.tex0;
    const auto key = std::make_tuple(tex.tbp0, static_cast<uint32_t>(tex.psm), tex.cbp);
    if (std::find(s_seen.begin(), s_seen.end(), key) != s_seen.end())
        return;
    s_seen.push_back(key);
    g_gsTextureDumpRequest.fetch_sub(1);
    const int n = s_index++;
    const uint32_t w = std::min<uint32_t>(batch.state.textureWidth, 1024u);
    const uint32_t h = std::min<uint32_t>(batch.state.textureHeight, 1024u);
    const bool indexed = isFourBitIndexedPsm(tex.psm) || isEightBitIndexedPsm(tex.psm);
    char path[1024];
    std::snprintf(path, sizeof(path), "%s/gs_tex_%d_%u_%u_rgb.ppm", gsTextureDumpDir(), n, unsigned(tex.tbp0), unsigned(tex.psm));
    FILE *rgb = std::fopen(path, "wb");
    std::snprintf(path, sizeof(path), "%s/gs_tex_%d_%u_%u_idx.pgm", gsTextureDumpDir(), n, unsigned(tex.tbp0), unsigned(tex.psm));
    FILE *idx = std::fopen(path, "wb");
    if (rgb && idx)
    {
        std::fprintf(rgb, "P6\n%u %u\n255\n", w, h);
        std::fprintf(idx, "P5\n%u %u\n255\n", w, h);
        for (uint32_t y = 0; y < h; ++y)
            for (uint32_t x = 0; x < w; ++x)
            {
                const uint32_t raw = ReadTextureVramUnlocked(tex.psm, tex.tbp0, tex.tbw, x, y);
                uint32_t c = raw;
                if (indexed)
                    c = LookupCLUT(batch.state, static_cast<uint8_t>(raw), tex.cpsm, tex.csm, tex.csa, tex.psm);
                else if (tex.psm == GS_PSM_CT16 || tex.psm == GS_PSM_CT16S)
                    c = Rgba5551ToRgba8888(raw);
                const uint8_t px[3] = {static_cast<uint8_t>(c), static_cast<uint8_t>(c >> 8), static_cast<uint8_t>(c >> 16)};
                std::fwrite(px, 1, 3, rgb);
                std::fputc(isFourBitIndexedPsm(tex.psm) ? static_cast<int>((raw & 0xFu) * 17u) : static_cast<int>(raw & 0xFFu), idx);
            }
    }
    if (rgb)
        std::fclose(rgb);
    if (idx)
        std::fclose(idx);
    if (indexed)
    {
        std::snprintf(path, sizeof(path), "/tmp/gs_tex_%d_clut.ppm", n);
        if (FILE *pal = std::fopen(path, "wb"))
        {
            std::fprintf(pal, "P6\n16 16\n255\n");
            for (uint32_t i = 0; i < 256u; ++i)
            {
                const uint32_t c = LookupCLUT(batch.state, static_cast<uint8_t>(i), tex.cpsm, tex.csm, tex.csa, GS_PSM_T8);
                const uint8_t px[3] = {static_cast<uint8_t>(c), static_cast<uint8_t>(c >> 8), static_cast<uint8_t>(c >> 16)};
                std::fwrite(px, 1, 3, pal);
            }
            std::fclose(pal);
        }
    }
    const GSVertex &v0 = batch.vertices[0];
    std::fprintf(stderr,
                 "[gs-texdump] %d prim=%d fst=%d tbp=%u tbw=%u psm=0x%x %ux%u cbp=%u cpsm=0x%x csm=%u csa=%u tcc=%u tfx=%u "
                 "clamp=0x%llx tex1=0x%llx mip1=0x%llx mip2=0x%llx v0 s=%g t=%g q=%g u=%u v=%u\n",
                 n, static_cast<int>(batch.state.prim.type), batch.state.prim.fst ? 1 : 0, tex.tbp0, tex.tbw, tex.psm, w, h,
                 tex.cbp, tex.cpsm, tex.csm, tex.csa, tex.tcc, tex.tfx,
                 static_cast<unsigned long long>(batch.state.context.clamp), static_cast<unsigned long long>(batch.state.context.tex1),
                 static_cast<unsigned long long>(batch.state.context.miptbp1), static_cast<unsigned long long>(batch.state.context.miptbp2),
                 v0.s, v0.t, v0.q, v0.u, v0.v);
}

void GSCpuBackend::Submit(const GSPrimitiveBatch &batch)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    if (!m_vram || batch.vertexCount == 0u)
        return;
    GSRecord::instance().event(this,1,&batch,sizeof(batch));
    // Diagnostic: PS2X_GS_DRAW_TRACE=<n> prints the first n textured triangle batches after
    // PS2X_GS_DRAW_TRACE_SKIP draws (state, vertices, texture coordinates).
    if (static const long traceLimit = [] { const char *v = std::getenv("PS2X_GS_DRAW_TRACE"); return v ? std::strtol(v, nullptr, 10) : 0L; }(); traceLimit > 0)
    {
        static const long traceSkip = [] { const char *v = std::getenv("PS2X_GS_DRAW_TRACE_SKIP"); return v ? std::strtol(v, nullptr, 10) : 0L; }();
        static long seen = 0;
        const auto &st = batch.state;
        const auto &cx = st.context;
        if (st.prim.tme && batch.vertexCount == 3u)
        {
            const long index = seen++;
            if (index >= traceSkip && index < traceSkip + traceLimit)
            {
                std::fprintf(stderr,
                    "[gs-draw] #%ld prim=%u iip=%u abe=%u aa1=%u fst=%u fix=%u tex0{tbp=%u tbw=%u psm=%u tw=%u th=%u tcc=%u tfx=%u cbp=%u cpsm=%u csm=%u} clamp=%llx alpha=%llx test=%llx tex1=%llx fb=%u/%u/%u scissor=%u..%u,%u..%u ofs=%u,%u\n",
                    index, unsigned(st.prim.type), unsigned(st.prim.iip), unsigned(st.prim.abe), unsigned(st.prim.aa1),
                    unsigned(st.prim.fst), unsigned(st.prim.fix),
                    unsigned(cx.tex0.tbp0), unsigned(cx.tex0.tbw), unsigned(cx.tex0.psm), unsigned(cx.tex0.tw), unsigned(cx.tex0.th),
                    unsigned(cx.tex0.tcc), unsigned(cx.tex0.tfx), unsigned(cx.tex0.cbp), unsigned(cx.tex0.cpsm), unsigned(cx.tex0.csm),
                    static_cast<unsigned long long>(cx.clamp), static_cast<unsigned long long>(cx.alpha),
                    static_cast<unsigned long long>(cx.test), static_cast<unsigned long long>(cx.tex1),
                    unsigned(cx.frame.fbp), unsigned(cx.frame.fbw), unsigned(cx.frame.psm),
                    unsigned(cx.scissor.x0), unsigned(cx.scissor.x1), unsigned(cx.scissor.y0), unsigned(cx.scissor.y1),
                    unsigned(cx.xyoffset.ofx), unsigned(cx.xyoffset.ofy));
                for (unsigned i = 0; i < 3u; ++i)
                {
                    const GSVertex &v = batch.vertices[i];
                    std::fprintf(stderr, "[gs-draw]    v%u xy=%.2f,%.2f z=%.0f rgba=%u,%u,%u,%u stq=%.5f,%.5f,%.5f uv=%u,%u\n",
                        i, v.x, v.y, v.z, unsigned(v.r), unsigned(v.g), unsigned(v.b), unsigned(v.a), v.s, v.t, v.q, unsigned(v.u), unsigned(v.v));
                }
            }
        }
    }
    if (g_gsTextureDumpRequest.load(std::memory_order_relaxed) > 0 && batch.state.prim.tme &&
        (batch.state.prim.type == GS_PRIM_TRIANGLE || batch.state.prim.type == GS_PRIM_TRISTRIP ||
         batch.state.prim.type == GS_PRIM_TRIFAN))
    { SyncMetal(); DumpTextureForDebug(batch); }
    if ([] { static const bool e = std::getenv("PS2X_GS_NOTEXCACHE") != nullptr; return e; }())
        m_texturePageCache.Invalidate();
    if(TryMetal(batch)) {
        if(m_metal && m_metal->draws() && m_metal->draws()%4096u==0u)
            std::fprintf(stderr,"[gs-metal] GPU draws=%llu CPU compatibility draws=%llu\n",(unsigned long long)m_metal->draws(),(unsigned long long)m_cpuDraws);
        return;
    }
#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)
    if (m_sdlGpu)
    {
        std::fprintf(stderr, "[gs-sdl-gpu] GPU-only mode rejected unsupported GS draw: prim=%u frame-psm=%u zpsm=%u aa1=%u dthe=%u scanmsk=%u vertices=%u\n",
            unsigned(batch.state.prim.type), unsigned(batch.state.context.frame.psm), unsigned(batch.state.context.zbuf.psm),
            unsigned(batch.state.prim.aa1), unsigned(batch.state.dthe), unsigned(batch.state.scanmsk), unsigned(batch.vertexCount));
        throw std::runtime_error("SDL_GPU GS GPU-only mode: unsupported draw would require CPU rasterization");
    }
#endif
    SyncMetal();
    ++m_cpuDraws;
    DrawPrimitive(batch);
}

void GSCpuBackend::LoadClut(const GSTex0Reg &tex0, const GSTexClutReg &texclut)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    struct ClutRecord {GSTex0Reg tex;GSTexClutReg clut;} record{tex0,texclut};
    GSRecord::instance().event(this,2,&record,sizeof(record));
    if (!m_vram || (!isFourBitIndexedPsm(tex0.psm) && !isEightBitIndexedPsm(tex0.psm)))
        return;

    switch (tex0.cld)
    {
    case 0u:
    case 6u:
    case 7u:
        return;
    case 1u:
        break;
    case 2u:
        m_clutCbp[0] = tex0.cbp;
        break;
    case 3u:
        m_clutCbp[1] = tex0.cbp;
        break;
    case 4u:
        if (m_clutCbp[0] == tex0.cbp)
            return;
        m_clutCbp[0] = tex0.cbp;
        break;
    case 5u:
        if (m_clutCbp[1] == tex0.cbp)
            return;
        m_clutCbp[1] = tex0.cbp;
        break;
    default:
        return;
    }

#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)
    EnsureSDLGpu();
    if(m_sdlGpu && (tex0.cpsm==0 || tex0.cpsm==1 || tex0.cpsm==2 || tex0.cpsm==10)) {
        m_sdlGpu->loadClut(tex0, texclut);
        return;
    }
    if (m_sdlGpu || sdlGpuWasRequested())
        rejectSdlGpuCpuPath("CLUT load");
#endif
    if(m_metal && (tex0.cpsm==0 || tex0.cpsm==1 || tex0.cpsm==2 || tex0.cpsm==10)) {
        m_metal->loadClut(tex0,texclut);m_metalClutDirty=true;return;
    }
    SyncMetal();
    LoadClutUnlocked(tex0, texclut);
}

void GSCpuBackend::LoadClutUnlocked(const GSTex0Reg &tex0, const GSTexClutReg &texclut)
{
    m_hotClutCount = 0;
    const bool fourBit = isFourBitIndexedPsm(tex0.psm);
    const bool sixteenBit = tex0.cpsm == GS_PSM_CT16 || tex0.cpsm == GS_PSM_CT16S;
    const bool thirtyTwoBit = tex0.cpsm == GS_PSM_CT32 || tex0.cpsm == GS_PSM_CT24;
    if (!sixteenBit && !thirtyTwoBit)
        return;

    const uint32_t entryCount = fourBit ? 16u : 256u;
    const uint32_t csaMask = sixteenBit ? 0x1Fu : 0x0Fu;
    const uint32_t destinationBase = (static_cast<uint32_t>(tex0.csa) & csaMask) << 4u;

    const bool loadCsm1Suffix = tex0.csm == 0u && thirtyTwoBit && !fourBit;
    const uint32_t firstEntry = loadCsm1Suffix ? destinationBase : 0u;

    for (uint32_t entry = firstEntry; entry < entryCount; ++entry)
    {
        uint32_t sourceX = 0u;
        uint32_t sourceY = 0u;
        uint32_t sourceWidth = 1u;

        if (tex0.csm == 0u)
        {
            const uint32_t sourceIndex = swizzleClutIndexCSM1(entry);
            sourceX = sourceIndex & 0x0Fu;
            sourceY = sourceIndex >> 4u;
        }
        else
        {
            sourceWidth = texclut.cbw != 0u ? static_cast<uint32_t>(texclut.cbw) : 1u;
            sourceX = (static_cast<uint32_t>(texclut.cou) << 4u) + entry;
            sourceY = static_cast<uint32_t>(texclut.cov);
        }

        const uint32_t raw = ReadTextureVramUnlocked(tex0.cpsm, tex0.cbp, sourceWidth, sourceX, sourceY); 
        const uint32_t destination = (loadCsm1Suffix ? entry : destinationBase + entry) & (sixteenBit ? 0x1FFu : 0x0FFu);
        if (sixteenBit)
        {
            m_clut[destination] = static_cast<uint16_t>(raw);
        }
        else
        {
            m_clut[destination] = static_cast<uint16_t>(raw & 0xFFFFu);
            m_clut[destination + 256u] = static_cast<uint16_t>(raw >> 16u);
        }
    }
}

void GSCpuBackend::Flush()
{
    std::lock_guard<std::mutex> lock(m_mutex);
    if (m_metal) m_metal->sync();
#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)
    if (m_sdlGpu) m_sdlGpu->flush();
#endif
}

void GSCpuBackend::FlushForPresentation()
{
    std::lock_guard<std::mutex> lock(m_mutex);
#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)
    if (m_sdlGpu)
    {
        m_sdlGpu->flushForPresentation();
        return;
    }
#endif
    if (m_metal) m_metal->sync();
}

void GSCpuBackend::TextureFlush()
{
    std::lock_guard<std::mutex> lock(m_mutex);
#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)
    if (m_sdlGpu)
        m_sdlGpu->textureFlush();
    else
#endif
    if (m_metal) m_metal->sync();
    m_texturePageCache.Invalidate();
}

void GSCpuBackend::Sync(GSSyncReason reason)
{
    std::lock_guard<std::mutex> lock(m_mutex);
#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)
    if (m_sdlGpu && reason == GSSyncReason::Presentation)
    {
        m_sdlGpu->syncForPresentation();
        return;
    }
#endif
    SyncMetal();
}

uint32_t GSCpuBackend::ReadVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y) const
{
    std::lock_guard<std::mutex> lock(m_mutex);
    SyncMetal();
    return ReadVramUnlocked(psm, base, bw, x, y);
}

uint32_t GSCpuBackend::ReadVramUnlocked(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y) const
{
    if (!m_vram)
        return 0u;
    return m_readVramFuncs[psm & 0x3Fu](m_vram, base, bw, x, y);
}

uint32_t GSCpuBackend::ReadTextureVramUnlocked(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y)
{
    if (!m_vram)
        return 0u;

    return GSMem::ReadTexture(m_texturePageCache, m_vram, psm, base, bw, x, y);
}

void GSCpuBackend::WriteVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y, uint32_t value)
{
    std::lock_guard<std::mutex> lock(m_mutex);
#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)
    if (m_sdlGpu || sdlGpuWasRequested())
        rejectSdlGpuCpuPath("direct VRAM write");
#endif
    SyncMetal();
    WriteVramUnlocked(psm, base, bw, x, y, value);
}

void GSCpuBackend::WriteVramUnlocked(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y, uint32_t value)
{
    if (!m_vram)
        return;
    m_writeVramFuncs[psm & 0x3Fu](m_vram, base, bw, x, y, value);
#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)
    if (m_sdlGpu) m_sdlGpu->markHostDirty();
#endif
    if (!m_inRaster)
        invalidateDecodedOnWrite(psm, base, bw, x, y);
}

void GSCpuBackend::SnapshotVram(std::vector<uint8_t> &out) const
{
    std::lock_guard<std::mutex> lock(m_mutex);
    SyncMetal();
    if (!m_vram || m_vramSize == 0u)
    {
        out.clear();
        return;
    }
    out.resize(m_vramSize);
    std::memcpy(out.data(), m_vram, m_vramSize);
}

GSTransferSnapshot GSCpuBackend::GetTransferSnapshot() const
{
    std::lock_guard<std::mutex> lock(m_mutex);
    GSTransferSnapshot result = m_transferState;
    result.localToHostPendingBytes = m_localToHostReadPos < m_localToHostBuffer.size()
                                         ? m_localToHostBuffer.size() - m_localToHostReadPos
                                         : 0u;
    return result;
}

void GSCpuBackend::DrawPrimitive(const GSPrimitiveBatch &batch)
{
    const GSDrawState &state = batch.state;
    const auto &ctx = state.context;
    PS2_IF_AGRESSIVE_LOGS({
        const uint32_t primitiveIndex = s_debugPrimitiveCount.fetch_add(1u, std::memory_order_relaxed);
        if (primitiveIndex < 64u)
        {
            std::cout << "[gs:prim] idx=" << primitiveIndex
                      << " type=" << static_cast<uint32_t>(state.prim.type)
                      << " tme=" << static_cast<uint32_t>(state.prim.tme)
                      << " abe=" << static_cast<uint32_t>(state.prim.abe)
                      << " fst=" << static_cast<uint32_t>(state.prim.fst)
                      << " ctxt=" << static_cast<uint32_t>(state.prim.ctxt)
                      << " fbp=" << ctx.frame.fbp
                      << " fbw=" << ctx.frame.fbw
                      << " psm=0x" << std::hex << static_cast<uint32_t>(ctx.frame.psm) << std::dec
                      << " tex0=("
                      << "tbp0=" << ctx.tex0.tbp0
                      << " tbw=" << static_cast<uint32_t>(ctx.tex0.tbw)
                      << " psm=0x" << std::hex << static_cast<uint32_t>(ctx.tex0.psm) << std::dec
                      << " tw=" << static_cast<uint32_t>(ctx.tex0.tw)
                      << " th=" << static_cast<uint32_t>(ctx.tex0.th)
                      << " tcc=" << static_cast<uint32_t>(ctx.tex0.tcc)
                      << " tfx=" << static_cast<uint32_t>(ctx.tex0.tfx)
                      << " cbp=" << ctx.tex0.cbp
                      << " cpsm=0x" << std::hex << static_cast<uint32_t>(ctx.tex0.cpsm) << std::dec
                      << " csm=" << static_cast<uint32_t>(ctx.tex0.csm)
                      << " csa=" << static_cast<uint32_t>(ctx.tex0.csa)
                      << ")"
                      << " texclut=("
                      << "cbw=" << static_cast<uint32_t>(state.texclut.cbw)
                      << " cou=" << static_cast<uint32_t>(state.texclut.cou)
                      << " cov=" << state.texclut.cov
                      << ")"
                      << " ofx=" << (ctx.xyoffset.ofx >> 4)
                      << " ofy=" << (ctx.xyoffset.ofy >> 4)
                      << " scissor=(" << ctx.scissor.x0
                      << "," << ctx.scissor.y0
                      << ")-(" << ctx.scissor.x1
                      << "," << ctx.scissor.y1 << ")"
                      << " test=0x" << std::hex << ctx.test
                      << " alpha=0x" << ctx.alpha
                      << std::dec
                      << " v0=(" << batch.vertices[0].x << "," << batch.vertices[0].y << ")"
                      << " uv0=(" << (batch.vertices[0].u >> 4) << "," << (batch.vertices[0].v >> 4) << ")"
                      << " stq0=(" << batch.vertices[0].s << "," << batch.vertices[0].t << "," << batch.vertices[0].q << ")"
                      << " v1=(" << batch.vertices[1].x << "," << batch.vertices[1].y << ")"
                      << " uv1=(" << (batch.vertices[1].u >> 4) << "," << (batch.vertices[1].v >> 4) << ")"
                      << " stq1=(" << batch.vertices[1].s << "," << batch.vertices[1].t << "," << batch.vertices[1].q << ")"
                      << " v2=(" << batch.vertices[2].x << "," << batch.vertices[2].y << ")"
                      << " uv2=(" << (batch.vertices[2].u >> 4) << "," << (batch.vertices[2].v >> 4) << ")"
                      << " stq2=(" << batch.vertices[2].s << "," << batch.vertices[2].t << "," << batch.vertices[2].q << ")"
                      << " rgba0=(" << static_cast<uint32_t>(batch.vertices[0].r) << ","
                      << static_cast<uint32_t>(batch.vertices[0].g) << ","
                      << static_cast<uint32_t>(batch.vertices[0].b) << ","
                      << static_cast<uint32_t>(batch.vertices[0].a) << ")"
                      << " rgba1=(" << static_cast<uint32_t>(batch.vertices[1].r) << ","
                      << static_cast<uint32_t>(batch.vertices[1].g) << ","
                      << static_cast<uint32_t>(batch.vertices[1].b) << ","
                      << static_cast<uint32_t>(batch.vertices[1].a) << ")"
                      << " rgba2=(" << static_cast<uint32_t>(batch.vertices[2].r) << ","
                      << static_cast<uint32_t>(batch.vertices[2].g) << ","
                      << static_cast<uint32_t>(batch.vertices[2].b) << ","
                      << static_cast<uint32_t>(batch.vertices[2].a) << ")"
                      << std::endl;
        }
    });

    PS2_IF_AGRESSIVE_LOGS({
        if ((state.prim.ctxt != 0u || ctx.frame.fbp == 150u) &&
            s_debugContext1PrimitiveCount.fetch_add(1u, std::memory_order_relaxed) < 32u)
        {
            std::cout << "[gs:copy-prim]"
                      << " type=" << static_cast<uint32_t>(state.prim.type)
                      << " tme=" << static_cast<uint32_t>(state.prim.tme)
                      << " abe=" << static_cast<uint32_t>(state.prim.abe)
                      << " fst=" << static_cast<uint32_t>(state.prim.fst)
                      << " ctxt=" << static_cast<uint32_t>(state.prim.ctxt)
                      << " fbp=" << ctx.frame.fbp
                      << " fbw=" << ctx.frame.fbw
                      << " psm=0x" << std::hex << static_cast<uint32_t>(ctx.frame.psm) << std::dec
                      << " tex0=("
                      << "tbp0=" << ctx.tex0.tbp0
                      << " tbw=" << static_cast<uint32_t>(ctx.tex0.tbw)
                      << " psm=0x" << std::hex << static_cast<uint32_t>(ctx.tex0.psm) << std::dec
                      << " tcc=" << static_cast<uint32_t>(ctx.tex0.tcc)
                      << " tfx=" << static_cast<uint32_t>(ctx.tex0.tfx)
                      << " cbp=" << ctx.tex0.cbp
                      << " cpsm=0x" << std::hex << static_cast<uint32_t>(ctx.tex0.cpsm) << std::dec
                      << " csm=" << static_cast<uint32_t>(ctx.tex0.csm)
                      << " csa=" << static_cast<uint32_t>(ctx.tex0.csa)
                      << ")"
                      << " texclut=("
                      << "cbw=" << static_cast<uint32_t>(state.texclut.cbw)
                      << " cou=" << static_cast<uint32_t>(state.texclut.cou)
                      << " cov=" << state.texclut.cov
                      << ")"
                      << " ofx=" << (ctx.xyoffset.ofx >> 4)
                      << " ofy=" << (ctx.xyoffset.ofy >> 4)
                      << " scissor=(" << ctx.scissor.x0
                      << "," << ctx.scissor.y0
                      << ")-(" << ctx.scissor.x1
                      << "," << ctx.scissor.y1 << ")"
                      << " test=0x" << std::hex << ctx.test
                      << " alpha=0x" << ctx.alpha
                      << std::dec << std::endl;
        }
    });

    m_inRaster = true;
    switch (state.prim.type)
    {
    case GS_PRIM_SPRITE:
        DrawSprite(batch);
        break;
    case GS_PRIM_TRIANGLE:
    case GS_PRIM_TRISTRIP:
    case GS_PRIM_TRIFAN:
        DrawTriangle(batch);
        break;
    case GS_PRIM_LINE:
    case GS_PRIM_LINESTRIP:
        DrawLine(batch);
        break;
    case GS_PRIM_POINT:
    {
        const GSVertex &v = batch.vertices[0];
        int px = static_cast<int>(v.x) - (ctx.xyoffset.ofx >> 4);
        int py = static_cast<int>(v.y) - (ctx.xyoffset.ofy >> 4);
        WritePixel(state, px, py, static_cast<u32>(v.z), v.r, v.g, v.b, v.a, v.fog);
        break;
    }
    default:
        break;
    }
    m_inRaster = false;
}

void GSCpuBackend::WritePixel(const GSDrawState &state, int x, int y, int z, uint8_t r, uint8_t g, uint8_t b, uint8_t a, uint8_t fog)
{
    const auto &ctx = state.context;
    if (x < ctx.scissor.x0 || x > ctx.scissor.x1 || y < ctx.scissor.y0 || y > ctx.scissor.y1)
        return;

    if (state.prim.fge)
    {
        const uint32_t inverseFog = 255u - fog;
        auto applyFog = [&](uint8_t input, uint8_t fogColor) -> uint8_t
        {
            return static_cast<uint8_t>(((static_cast<uint32_t>(fog) * input) >> 8) + ((inverseFog * fogColor) >> 8));
        };

        r = applyFog(r, state.fogR);
        g = applyFog(g, state.fogG);
        b = applyFog(b, state.fogB);
    }

    const u32 fbp = GSInternal::framePageBaseToBlock(ctx.frame.fbp);
    const u32 fbw = std::max<u32>(ctx.frame.fbw, 1u);
    const u32 fpsm = ctx.frame.psm;
    const u32 zbp = GSInternal::framePageBaseToBlock(ctx.zbuf.zbp);
    const u32 zpsm = ctx.zbuf.psm;

    const PixelWriteMask writeMask = classifyAlphaTest(ctx.test, a, static_cast<uint8_t>(fpsm));
    if (!writeMask.writesAnything())
    {
        return;
    }

    const uint32_t ztestMethod = static_cast<uint32_t>((ctx.test >> 17) & 3u);
    const bool alphaBlendEnabled = state.prim.abe;
    const bool preserveDestinationAlpha = writeMask.writeRgb && !writeMask.writeAlpha && fpsm == GS_PSM_CT32;
    const bool destinationAlphaTestNeedsRead = ((ctx.test >> 14) & 0x1u) != 0u && (fpsm == GS_PSM_CT32 || fpsm == GS_PSM_CT16 || fpsm == GS_PSM_CT16S);

    // small optimization, avoid reading the framebuffer for simple draws
    // TODO: only one address lookup for rmw
    const bool frmw = destinationAlphaTestNeedsRead || (writeMask.writesFramebuffer() && ((ctx.frame.fbmsk != 0) || alphaBlendEnabled || preserveDestinationAlpha));

    u32 rawFramebufferPixel = 0;
    u32 fbrgba = 0;
    if (frmw)
    {
        rawFramebufferPixel = ReadVramUnlocked(fpsm, fbp, fbw, x, y);
        fbrgba = rawFramebufferPixel;

        if (bitsPerPixel(fpsm) == 16)
        {
            fbrgba = Rgba5551ToRgba8888(fbrgba);
        }
        else if (fpsm == GS_PSM_CT24)
        {
            // The GS supplies 0x80 as destination alpha for RGB24 blending.
            fbrgba |= 0x80000000u;
        }
    }

    if (!passesDestinationAlphaTest(ctx.test, static_cast<uint8_t>(fpsm), rawFramebufferPixel))
    {
        return;
    }

    bool zpass = false;
    uint32_t storedZ = 0u;
    switch (ztestMethod)
    {
    case 0:
        zpass = false;
        break;
    case 1:
        zpass = true;
        break;
    case 2:
        storedZ = ReadVramUnlocked(zpsm, zbp, fbw, x, y);
        zpass = static_cast<uint32_t>(z) >= storedZ;
        break;
    case 3:
        storedZ = ReadVramUnlocked(zpsm, zbp, fbw, x, y);
        zpass = static_cast<uint32_t>(z) > storedZ;
        break;
    }

    if (!zpass)
    {
        return;
    }

    if (writeMask.writesFramebuffer())
    {
        const u8 srcR = r;
        const u8 srcG = g;
        const u8 srcB = b;

        if (state.prim.abe)
        {
            uint8_t dr = fbrgba & 0xFF;
            uint8_t dg = (fbrgba >> 8) & 0xFF;
            uint8_t db = (fbrgba >> 16) & 0xFF;
            uint8_t da = (fbrgba >> 24) & 0xFF;

            // PABE disables alpha blending when the source alpha MSB is clear.
            if (!(state.pabe && (a & 0x80u) == 0u))
            {
                uint64_t alphaReg = ctx.alpha;
                uint8_t asel = alphaReg & 3;
                uint8_t bsel = (alphaReg >> 2) & 3;
                uint8_t csel = (alphaReg >> 4) & 3;
                uint8_t dsel = (alphaReg >> 6) & 3;
                uint8_t fix = static_cast<uint8_t>((alphaReg >> 32) & 0xFF);

                auto pickRGB = [&](uint8_t sel, int cs, int cd) -> int
                {
                    if (sel == 0)
                        return cs;
                    if (sel == 1)
                        return cd;
                    return 0;
                };
                int cAlpha = (csel == 0) ? a : (csel == 1) ? da
                                                           : fix;

                auto finishRgb = [&](int value) -> uint8_t
                {
                    return (state.colclamp & 1u) ? clampU8(value) : static_cast<uint8_t>(value & 0xFF);
                };
                r = finishRgb(((pickRGB(asel, r, dr) - pickRGB(bsel, r, dr)) * cAlpha >> 7) + pickRGB(dsel, r, dr));
                g = finishRgb(((pickRGB(asel, g, dg) - pickRGB(bsel, g, dg)) * cAlpha >> 7) + pickRGB(dsel, g, dg));
                b = finishRgb(((pickRGB(asel, b, db) - pickRGB(bsel, b, db)) * cAlpha >> 7) + pickRGB(dsel, b, db));
            }
            else
            {
                r = srcR;
                g = srcG;
                b = srcB;
            }
        }

        if (writeMask.writeAlpha && (ctx.fba & 0x1ull) != 0ull && ctx.frame.psm != GS_PSM_CT24)
        {
            a = static_cast<uint8_t>(a | 0x80u);
        }

        u32 pixel = pack32(r, g, b, a);

        if (ctx.frame.fbmsk != 0)
        {
            pixel = (pixel & ~ctx.frame.fbmsk) | (fbrgba & ctx.frame.fbmsk);
        }

        if (preserveDestinationAlpha)
        {
            pixel = (pixel & 0x00FFFFFFu) | (fbrgba & 0xFF000000u);
        }

        // format conversion
        if (bitsPerPixel(fpsm) == 16)
        {
            pixel = Rgba8888ToRgba5551(pixel);
        }

        WriteVramUnlocked(fpsm, fbp, fbw, x, y, pixel);
    }

    if (writeMask.writeDepth && !ctx.zbuf.zmask)
    {
        WriteVramUnlocked(zpsm, zbp, fbw, x, y, z);
    }
}

void GSCpuBackend::clearHotDecoded()
{
    m_hotDecodedRgba.fill(nullptr);
    m_hotDecodedIdx.fill(nullptr);
    m_hotLodConstant = false;
    m_hotNearest = false;
}

void GSCpuBackend::rebuildDecodedPageUnion()
{
    m_decodedPageUnion.fill(0u);
    if (m_decodedValidCount <= 0)
        return;
    for (const auto &slot : m_decodedTextures)
    {
        if (!slot.valid)
            continue;
        for (size_t i = 0; i < m_decodedPageUnion.size(); ++i)
            m_decodedPageUnion[i] |= slot.pageBits[i];
    }
}

void GSCpuBackend::invalidateDecodedTextures()
{
    if (m_decodedValidCount == 0)
    {
        clearHotDecoded();
        return;
    }
    for (auto &slot : m_decodedTextures)
        slot.valid = false;
    m_decodedValidCount = 0;
    m_decodedPageUnion.fill(0u);
    clearHotDecoded();
}

void GSCpuBackend::invalidateDecodedOnWrite(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y)
{
    if (m_decodedValidCount == 0)
        return;
    unsigned pageW = 64;
    unsigned pageH = 32;
    if (!texturePageSize(static_cast<uint8_t>(psm), pageW, pageH))
    {
        invalidateDecodedTextures();
        return;
    }
    const uint32_t pagesPerRow = std::max(std::max<uint32_t>(bw, 1u) / std::max(pageW / 64u, 1u), 1u);
    const uint32_t page = (base / 32u + (y / pageH) * pagesPerRow + (x / pageW)) & 511u;
    const uint64_t bit = 1ull << (page & 63u);
    const size_t word = static_cast<size_t>(page >> 6);
    if ((m_decodedPageUnion[word] & bit) == 0u)
        return;
    bool lost = false;
    for (auto &slot : m_decodedTextures)
    {
        if (!slot.valid || (slot.pageBits[word] & bit) == 0u)
            continue;
        slot.valid = false;
        --m_decodedValidCount;
        lost = true;
    }
    if (lost)
        rebuildDecodedPageUnion();
}

void GSCpuBackend::invalidateDrawDestination(const GSDrawState &state, int x0, int y0, int x1, int y1)
{
    if (m_decodedValidCount == 0 || x1 < x0 || y1 < y0)
        return;
    const auto &ctx = state.context;
    const uint32_t fbp = GSInternal::framePageBaseToBlock(ctx.frame.fbp);
    const uint32_t fbw = std::max<uint32_t>(ctx.frame.fbw, 1u);
    const uint32_t zbp = GSInternal::framePageBaseToBlock(ctx.zbuf.zbp);
    auto markRect = [&](uint32_t psm, uint32_t base) {
        unsigned pageW = 64;
        unsigned pageH = 32;
        if (!texturePageSize(static_cast<uint8_t>(psm), pageW, pageH))
        {
            invalidateDecodedTextures();
            return;
        }
        const int stepX = static_cast<int>(pageW);
        const int stepY = static_cast<int>(pageH);
        for (int y = y0; y <= y1; y += stepY)
            for (int x = x0; x <= x1; x += stepX)
                invalidateDecodedOnWrite(psm, base, fbw, static_cast<uint32_t>(x), static_cast<uint32_t>(y));
        invalidateDecodedOnWrite(psm, base, fbw, static_cast<uint32_t>(x1), static_cast<uint32_t>(y1));
    };
    markRect(ctx.frame.psm, fbp);
    if (!ctx.zbuf.zmask)
        markRect(ctx.zbuf.psm, zbp);
}

uint32_t GSCpuBackend::sampledTexelRgba(const GSDrawState &state, uint32_t tbp, uint32_t tbw, int x, int y)
{
    const auto &tex = state.context.tex0;
    const uint32_t out = ReadTextureVramUnlocked(tex.psm, tbp, tbw, x, y);
    switch (tex.psm)
    {
    case GS_PSM_CT32:
    case GS_PSM_Z32:
    case GS_PSM_CT24:
    case GS_PSM_Z24:
        return applyTexa(state.texa, tex.psm, out);
    case GS_PSM_CT16:
    case GS_PSM_CT16S:
    case GS_PSM_Z16:
    case GS_PSM_Z16S:
        return applyTexa(state.texa, tex.psm, Rgba5551ToRgba8888(out));
    case GS_PSM_T8:
    case GS_PSM_T8H:
    case GS_PSM_T4:
    case GS_PSM_T4HL:
    case GS_PSM_T4HH:
        return LookupCLUT(state, static_cast<uint8_t>(out), tex.cpsm, tex.csm, tex.csa, tex.psm);
    default:
        break;
    }
    return 0xFFFF00FFu;
}

void GSCpuBackend::bindDecodedLevel(int level, const GSDrawState &state, uint32_t tbp, uint32_t tbw, int width, int height)
{
    if (level < 0 || level > 6 || decodedCacheDisabled() || !m_vram || width <= 0 || height <= 0)
        return;
    const uint32_t psm = state.context.tex0.psm;
    const uint64_t pixels = static_cast<uint64_t>(width) * static_cast<uint64_t>(height);
    if (pixels > 262144u)
        return;

    const uint32_t safeTbw = std::max<uint32_t>(tbw, 1u);
    const bool indexed = isFourBitIndexedPsm(static_cast<uint8_t>(psm)) || isEightBitIndexedPsm(static_cast<uint8_t>(psm));
    ++m_decodedUseClock;
    if (m_decodedUseClock == 0u)
        m_decodedUseClock = 1u;

    int freeSlot = -1;
    int lruSlot = 0;
    uint32_t lruUse = UINT32_MAX;
    DecodedTextureSlot *hit = nullptr;
    for (int i = 0; i < kDecodedTextureSlots; ++i)
    {
        auto &slot = m_decodedTextures[static_cast<size_t>(i)];
        if (slot.valid &&
            slot.tbp == tbp && slot.tbw == safeTbw && slot.psm == psm &&
            slot.width == static_cast<uint32_t>(width) && slot.height == static_cast<uint32_t>(height) &&
            slot.indexed == indexed)
        {
            slot.lastUse = m_decodedUseClock;
            hit = &slot;
            break;
        }
        if (!slot.valid && freeSlot < 0)
            freeSlot = i;
        if (!slot.valid || slot.lastUse <= lruUse)
        {
            lruUse = slot.valid ? slot.lastUse : 0u;
            lruSlot = i;
        }
    }

    if (hit == nullptr)
    {
        const int chosen = freeSlot >= 0 ? freeSlot : lruSlot;
        auto &slot = m_decodedTextures[static_cast<size_t>(chosen)];
        const bool wasValid = slot.valid;
        slot.valid = false;
        slot.indexed = indexed;
        slot.tbp = tbp;
        slot.tbw = safeTbw;
        slot.psm = psm;
        slot.width = static_cast<uint32_t>(width);
        slot.height = static_cast<uint32_t>(height);
        slot.lastUse = m_decodedUseClock;
        slot.pageBits.fill(0u);
        slot.rgba.clear();
        slot.indices.clear();

        unsigned pageW = 64;
        unsigned pageH = 32;
        if (!texturePageSize(static_cast<uint8_t>(psm), pageW, pageH))
            slot.pageBits.fill(~0ull);
        else
        {
            const uint64_t columns = std::max<unsigned>(safeTbw / std::max(pageW / 64u, 1u), 1u);
            const uint64_t texStart = static_cast<uint64_t>(tbp) * 256ull;
            const unsigned lastX = static_cast<unsigned>(std::max(width, 1)) - 1u;
            const unsigned lastY = static_cast<unsigned>(std::max(height, 1)) - 1u;
            const uint64_t texEnd = texStart + (static_cast<uint64_t>(lastY) / pageH * columns + static_cast<uint64_t>(lastX) / pageW + 1u) * 8192u;
            const uint32_t startPage = static_cast<uint32_t>((texStart / 8192u) & 511u);
            const uint32_t endPage = static_cast<uint32_t>(std::min<uint64_t>((texEnd + 8191u) / 8192u, 512u));
            if (endPage <= startPage)
            {
                for (uint32_t page = startPage; page < 512u; ++page)
                    slot.pageBits[page >> 6] |= 1ull << (page & 63u);
                for (uint32_t page = 0; page < endPage; ++page)
                    slot.pageBits[page >> 6] |= 1ull << (page & 63u);
            }
            else
            {
                for (uint32_t page = startPage; page < endPage; ++page)
                    slot.pageBits[page >> 6] |= 1ull << (page & 63u);
            }
        }

        if (indexed)
        {
            slot.indices.resize(static_cast<size_t>(pixels));
            for (int y = 0; y < height; ++y)
                for (int x = 0; x < width; ++x)
                    slot.indices[static_cast<size_t>(y) * static_cast<size_t>(width) + static_cast<size_t>(x)] =
                        static_cast<uint8_t>(ReadTextureVramUnlocked(psm, tbp, safeTbw, x, y));
        }
        else
        {
            slot.rgba.resize(static_cast<size_t>(pixels));
            for (int y = 0; y < height; ++y)
                for (int x = 0; x < width; ++x)
                    slot.rgba[static_cast<size_t>(y) * static_cast<size_t>(width) + static_cast<size_t>(x)] =
                        sampledTexelRgba(state, tbp, safeTbw, x, y);
        }

        slot.valid = true;
        if (!wasValid)
            ++m_decodedValidCount;
        for (size_t i = 0; i < m_decodedPageUnion.size(); ++i)
            m_decodedPageUnion[i] |= slot.pageBits[i];
        hit = &slot;
    }

    m_hotDecodedRgba[static_cast<size_t>(level)] = hit->rgba.empty() ? nullptr : hit->rgba.data();
    m_hotDecodedIdx[static_cast<size_t>(level)] = hit->indices.empty() ? nullptr : hit->indices.data();
}

void GSCpuBackend::prepareDecodedTextures(const GSDrawState &state, float q)
{
    clearHotDecoded();
    if (!state.prim.tme || decodedCacheDisabled())
        return;

    // One mip for the whole primitive. Per-pixel log2(1/Q) on Black's wall
    // mesh costs more than the LOD error of using the kicking vertex Q.
    const ResolvedMip mip = resolveTextureMip(state, q);
    m_hotLodConstant = true;
    m_hotTbp = mip.tbp;
    m_hotTbw = mip.tbw;
    m_hotWidth = mip.width;
    m_hotHeight = mip.height;
    m_hotLevel = mip.level;
    m_hotLinear = mip.linear;
    bindDecodedLevel(mip.level, state, mip.tbp, mip.tbw, mip.width, mip.height);

    const auto &tex = state.context.tex0;
    const unsigned clutN = isFourBitIndexedPsm(static_cast<uint8_t>(tex.psm))
                               ? 16u
                               : (isEightBitIndexedPsm(static_cast<uint8_t>(tex.psm)) ? 256u : 0u);
    if (clutN != 0u &&
        (m_hotClutCount != clutN || m_hotClutPsm != tex.psm || m_hotClutCpsm != tex.cpsm ||
         m_hotClutCsm != tex.csm || m_hotClutCsa != tex.csa))
    {
        for (unsigned i = 0; i < clutN; ++i)
            m_hotClut[i] = LookupCLUT(state, static_cast<uint8_t>(i), tex.cpsm, tex.csm, tex.csa, tex.psm);
        m_hotClutCount = clutN;
        m_hotClutPsm = tex.psm;
        m_hotClutCpsm = tex.cpsm;
        m_hotClutCsm = tex.csm;
        m_hotClutCsa = tex.csa;
    }
}

uint32_t GSCpuBackend::LookupCLUT(const GSDrawState &state,
                                  uint8_t index,
                                  uint8_t cpsm,
                                  uint8_t csm,
                                  uint8_t csa,
                                  uint8_t sourcePsm)
{
    const bool sixteenBit = cpsm == GS_PSM_CT16 || cpsm == GS_PSM_CT16S;
    const uint32_t csaMask = sixteenBit ? 0x1Fu : 0x0Fu;
    const uint32_t clutBase = (static_cast<uint32_t>(csa) & csaMask) << 4u;
    const uint32_t sourceIndex = isFourBitIndexedPsm(sourcePsm)
                                     ? (static_cast<uint32_t>(index) & 0x0Fu)
                                     : static_cast<uint32_t>(index);

    uint32_t clutIndex = (clutBase + sourceIndex) & (sixteenBit ? 0x1FFu : 0x0FFu);
    if (!sixteenBit && csm == 0u && isEightBitIndexedPsm(sourcePsm))
    {
        const uint32_t block = std::min((sourceIndex & 0xF0u) + clutBase, 240u);
        clutIndex = block + (sourceIndex & 0x0Fu);
    }

    switch (cpsm)
    {
    case GS_PSM_CT32:
    {
        const uint32_t raw = static_cast<uint32_t>(m_clut[clutIndex]) | (static_cast<uint32_t>(m_clut[clutIndex + 256u]) << 16u);
        return applyTexa(state.texa, cpsm, raw);
    }
    case GS_PSM_CT24:
    {
        const uint32_t raw = static_cast<uint32_t>(m_clut[clutIndex]) | (static_cast<uint32_t>(m_clut[clutIndex + 256u]) << 16u);
        return applyTexa(state.texa, cpsm, raw & 0x00FFFFFFu);
    }
    case GS_PSM_CT16:
    case GS_PSM_CT16S:
        return applyTexa(state.texa, cpsm, Rgba5551ToRgba8888(m_clut[clutIndex]));
    default:
        break;
    }

    return 0xFFFF00FFu;
}

uint32_t GSCpuBackend::SampleTexture(const GSDrawState &state, float s, float t, float q, uint16_t u, uint16_t v)
{
    const auto &ctx = state.context;
    ResolvedMip mip;
    if (m_hotLodConstant)
    {
        mip.tbp = m_hotTbp;
        mip.tbw = m_hotTbw;
        mip.width = m_hotWidth;
        mip.height = m_hotHeight;
        mip.level = m_hotLevel;
        mip.linear = m_hotLinear;
    }
    else
        mip = resolveTextureMip(state, q);

    const int texW = mip.width;
    const int texH = mip.height;
    const uint32_t *decoded = nullptr;
    const uint8_t *decodedIdx = nullptr;
    if (mip.level >= 0 && mip.level <= 6)
    {
        decoded = m_hotDecodedRgba[static_cast<size_t>(mip.level)];
        decodedIdx = m_hotDecodedIdx[static_cast<size_t>(mip.level)];
    }
    const uint64_t clamp = ctx.clamp;
    const uint8_t wrapU = static_cast<uint8_t>(clamp & 0x3u);
    const uint8_t wrapV = static_cast<uint8_t>((clamp >> 2) & 0x3u);
    const int level = mip.level;
    const uint16_t minU = static_cast<uint16_t>(((clamp >> 4) & 0x3FFu) >> level);
    const uint16_t maxU = static_cast<uint16_t>(((clamp >> 14) & 0x3FFu) >> level);
    const uint16_t minV = static_cast<uint16_t>(((clamp >> 24) & 0x3FFu) >> level);
    const uint16_t maxV = static_cast<uint16_t>(((clamp >> 34) & 0x3FFu) >> level);

    float texUf, texVf;
    if (state.prim.fst)
    {
        const float baseW = static_cast<float>(std::max<int>(state.textureWidth, 1));
        const float baseH = static_cast<float>(std::max<int>(state.textureHeight, 1));
        texUf = (static_cast<float>(u) / 16.0f) * (static_cast<float>(texW) / baseW);
        texVf = (static_cast<float>(v) / 16.0f) * (static_cast<float>(texH) / baseH);
    }
    else
    {
        const float invQ = 1.0f / fabsQ(q);
        texUf = s * invQ * static_cast<float>(texW);
        texVf = t * invQ * static_cast<float>(texH);
    }

    auto samplePoint = [&](int sampleU, int sampleV) -> uint32_t
    {
        sampleU = wrapTextureCoordinate(sampleU, texW, wrapU, minU, maxU);
        sampleV = wrapTextureCoordinate(sampleV, texH, wrapV, minV, maxV);
        if (sampleU >= 0 && sampleU < texW && sampleV >= 0 && sampleV < texH)
        {
            const size_t offset = static_cast<size_t>(sampleV) * static_cast<size_t>(texW) + static_cast<size_t>(sampleU);
            if (decodedIdx)
            {
                const uint8_t index = decodedIdx[offset];
                if (m_hotClutCount == 16u)
                    return m_hotClut[index & 0x0Fu];
                if (m_hotClutCount == 256u)
                    return m_hotClut[index];
                const auto &tex = ctx.tex0;
                return LookupCLUT(state, index, tex.cpsm, tex.csm, tex.csa, tex.psm);
            }
            if (decoded)
                return decoded[offset];
        }
        if (decodedIdx || decoded)
        {
            sampleU = clampInt(sampleU, 0, texW - 1);
            sampleV = clampInt(sampleV, 0, texH - 1);
            const size_t clamped = static_cast<size_t>(sampleV) * static_cast<size_t>(texW) + static_cast<size_t>(sampleU);
            if (decodedIdx)
            {
                const uint8_t index = decodedIdx[clamped];
                if (m_hotClutCount == 16u)
                    return m_hotClut[index & 0x0Fu];
                if (m_hotClutCount == 256u)
                    return m_hotClut[index];
                const auto &tex = ctx.tex0;
                return LookupCLUT(state, index, tex.cpsm, tex.csm, tex.csa, tex.psm);
            }
            return decoded[clamped];
        }
        return sampledTexelRgba(state, mip.tbp, mip.tbw, sampleU, sampleV);
    };

    // Batches built before TEX1 existed carry the filter on the draw state.
    // Once TEX1 or a mip base is set, the register picks nearest or linear.
    const bool linear = !m_hotNearest && ((ctx.tex1 == 0u && ctx.miptbp1 == 0u && ctx.miptbp2 == 0u)
                            ? state.linearFilter
                            : mip.linear);
    if (!linear)
    {
        return samplePoint(static_cast<int>(texUf), static_cast<int>(texVf));
    }

    const float sampleU = texUf - 0.5f;
    const float sampleV = texVf - 0.5f;
    const int u0 = static_cast<int>(std::floor(sampleU));
    const int v0 = static_cast<int>(std::floor(sampleV));
    const int u1 = u0 + 1;
    const int v1 = v0 + 1;
    const float fx = sampleU - static_cast<float>(u0);
    const float fy = sampleV - static_cast<float>(v0);
    // The GS weights texels in 1/16 steps; at a texel center all weight goes to one texel.
    // 1:1 sprites (UI, video composites) always land there, so skip the other three fetches.
    if (fx < 1.0f / 32.0f && fy < 1.0f / 32.0f)
        return samplePoint(u0, v0);

    const uint32_t c00 = samplePoint(u0, v0);
    const uint32_t c10 = samplePoint(u1, v0);
    const uint32_t c01 = samplePoint(u0, v1);
    const uint32_t c11 = samplePoint(u1, v1);

    const uint8_t r = lerpChannel(static_cast<uint8_t>(c00 & 0xFFu),
                                  static_cast<uint8_t>(c10 & 0xFFu),
                                  static_cast<uint8_t>(c01 & 0xFFu),
                                  static_cast<uint8_t>(c11 & 0xFFu),
                                  fx, fy);
    const uint8_t g = lerpChannel(static_cast<uint8_t>((c00 >> 8) & 0xFFu),
                                  static_cast<uint8_t>((c10 >> 8) & 0xFFu),
                                  static_cast<uint8_t>((c01 >> 8) & 0xFFu),
                                  static_cast<uint8_t>((c11 >> 8) & 0xFFu),
                                  fx, fy);
    const uint8_t b = lerpChannel(static_cast<uint8_t>((c00 >> 16) & 0xFFu),
                                  static_cast<uint8_t>((c10 >> 16) & 0xFFu),
                                  static_cast<uint8_t>((c01 >> 16) & 0xFFu),
                                  static_cast<uint8_t>((c11 >> 16) & 0xFFu),
                                  fx, fy);
    const uint8_t a = lerpChannel(static_cast<uint8_t>((c00 >> 24) & 0xFFu),
                                  static_cast<uint8_t>((c10 >> 24) & 0xFFu),
                                  static_cast<uint8_t>((c01 >> 24) & 0xFFu),
                                  static_cast<uint8_t>((c11 >> 24) & 0xFFu),
                                  fx, fy);

    return static_cast<uint32_t>(r) |
           (static_cast<uint32_t>(g) << 8) |
           (static_cast<uint32_t>(b) << 16) |
           (static_cast<uint32_t>(a) << 24);
}

void GSCpuBackend::DrawSprite(const GSPrimitiveBatch &batch)
{
    const GSDrawState &state = batch.state;
    const GSVertex &v0 = batch.vertices[0];
    const GSVertex &v1 = batch.vertices[1];
    const auto &ctx = state.context;

    int ofx = ctx.xyoffset.ofx >> 4;
    int ofy = ctx.xyoffset.ofy >> 4;

    const bool budgetTrace = g_gsTransferTraceBudget.load(std::memory_order_relaxed) > 0 &&
                             g_gsTransferTraceBudget.fetch_sub(1, std::memory_order_relaxed) > 0;
    if (budgetTrace || [] { static const bool enabled = std::getenv("PS2X_GS_SPRITE_TRACE") != nullptr; return enabled; }())
    {
        static unsigned s_n = 0;
        if (budgetTrace || s_n++ < 400000u)
            std::fprintf(stderr, "[gs-sprite] x=%.3f..%.3f y=%.3f..%.3f of=%d,%d tme=%d fst=%d u=%u..%u v=%u..%u st=%.4f,%.4f..%.4f,%.4f q=%.3f tbp=%u tbw=%u tw=%d th=%d psm=0x%x fbp=%u abe=%d\n",
                         v0.x, v1.x, v0.y, v1.y, ctx.xyoffset.ofx, ctx.xyoffset.ofy, state.prim.tme, state.prim.fst,
                         v0.u, v1.u, v0.v, v1.v, v0.s, v0.t, v1.s, v1.t, v1.q, ctx.tex0.tbp0, ctx.tex0.tbw,
                         state.textureWidth, state.textureHeight, ctx.tex0.psm, ctx.frame.fbp, state.prim.abe);
    }
    int x0 = static_cast<int>(v0.x) - ofx;
    int y0 = static_cast<int>(v0.y) - ofy;
    int x1 = static_cast<int>(v1.x) - ofx;
    int y1 = static_cast<int>(v1.y) - ofy;
    u32 z1 = static_cast<u32>(v1.z);

    const bool reverseX = x0 > x1;
    const bool reverseY = y0 > y1;
    if (reverseX)
        std::swap(x0, x1);
    if (reverseY)
        std::swap(y0, y1);

    const int unclippedX0 = x0;
    const int unclippedY0 = y0;
    const int spanX = std::max(1, x1 - x0);
    const int spanY = std::max(1, y1 - y0);
    const int unclippedX1 = unclippedX0 + spanX - 1;
    const int unclippedY1 = unclippedY0 + spanY - 1;

    // If the sprite rectangle is fully outside scissor, nothing should render.
    if (unclippedX1 < ctx.scissor.x0 || unclippedX0 > ctx.scissor.x1 ||
        unclippedY1 < ctx.scissor.y0 || unclippedY0 > ctx.scissor.y1)
        return;

    const int drawX0 = clampInt(unclippedX0, ctx.scissor.x0, ctx.scissor.x1);
    const int drawY0 = clampInt(unclippedY0, ctx.scissor.y0, ctx.scissor.y1);
    const int drawX1 = clampInt(unclippedX1, ctx.scissor.x0, ctx.scissor.x1);
    const int drawY1 = clampInt(unclippedY1, ctx.scissor.y0, ctx.scissor.y1);

    const uint64_t alphaReg = ctx.alpha;
    const uint8_t alphaMode = static_cast<uint8_t>(alphaReg & 0xFFu);
    const uint8_t alphaFix = static_cast<uint8_t>((alphaReg >> 32) & 0xFFu);

    uint8_t r = v1.r, g = v1.g, b = v1.b, a = v1.a;

    if (state.prim.tme)
    {
        prepareDecodedTextures(state, v1.q);
        const auto &tex = ctx.tex0;
        const int texW = state.textureWidth;
        const int texH = state.textureHeight;

        float u0f, v0f, u1f, v1f;
        if (state.prim.fst)
        {
            u0f = static_cast<float>(v0.u >> 4);
            v0f = static_cast<float>(v0.v >> 4);
            u1f = static_cast<float>(v1.u >> 4);
            v1f = static_cast<float>(v1.v >> 4);
        }
        else
        {
            // GS sprites use the second vertex Q for both texture endpoints.
            const float q0 = fabsQ(v1.q);
            const float q1 = q0;
            u0f = (v0.s / q0) * static_cast<float>(texW);
            v0f = (v0.t / q0) * static_cast<float>(texH);
            u1f = (v1.s / q1) * static_cast<float>(texW);
            v1f = (v1.t / q1) * static_cast<float>(texH);
        }

        // Bounds are sorted for rasterization, but texture endpoints still belong
        // to their original vertices. Sort each texture axis with its screen axis.
        if (reverseX)
            std::swap(u0f, u1f);
        if (reverseY)
            std::swap(v0f, v1f);

        float spriteW = static_cast<float>(spanX);
        float spriteH = static_cast<float>(spanY);
        if (spriteW < 1.0f)
            spriteW = 1.0f;
        if (spriteH < 1.0f)
            spriteH = 1.0f;

        auto drawRow = [&](int y)
        {
            float ty = (static_cast<float>(y - unclippedY0) + 0.5f) / spriteH;
            float texVf = v0f + (v1f - v0f) * ty;

            for (int x = drawX0; x <= drawX1; ++x)
            {
                float tx = (static_cast<float>(x - unclippedX0) + 0.5f) / spriteW;
                float texUf = u0f + (u1f - u0f) * tx;
                uint32_t texel = 0xFFFF00FFu;
                if (state.prim.fst)
                {
                    const int fixedU = static_cast<int>((texUf * 16.0f) + 0.5f);
                    const int fixedV = static_cast<int>((texVf * 16.0f) + 0.5f);
                    const uint16_t sampleU = static_cast<uint16_t>(clampInt(fixedU, 0, 0xFFFF));
                    const uint16_t sampleV = static_cast<uint16_t>(clampInt(fixedV, 0, 0xFFFF));
                    texel = SampleTexture(state, 0.0f, 0.0f, 1.0f, sampleU, sampleV);
                }
                else
                {
                    texel = SampleTexture(state, texUf / static_cast<float>(texW), texVf / static_cast<float>(texH), 1.0f, 0u, 0u);
                }

                uint8_t tr = static_cast<uint8_t>(texel & 0xFF);
                uint8_t tg = static_cast<uint8_t>((texel >> 8) & 0xFF);
                uint8_t tb = static_cast<uint8_t>((texel >> 16) & 0xFF);
                uint8_t ta = static_cast<uint8_t>((texel >> 24) & 0xFF);

                const TextureCombineResult color = combineTexture(tex, r, g, b, a, tr, tg, tb, ta);
                WritePixel(state, x, y, z1, color.r, color.g, color.b, color.a, v1.fog);
            }
        };
        if ((drawX1 - drawX0 + 1) * (drawY1 - drawY0 + 1) >= 2048 && !textureMayAliasFrame(ctx, drawY1))
            RasterPool::instance().forRows(drawY0, drawY1, drawRow);
        else
            for (int y = drawY0; y <= drawY1; ++y)
                drawRow(y);
    }
    else
    {
        auto fillRow = [&](int y)
        {
            for (int x = drawX0; x <= drawX1; ++x)
                WritePixel(state, x, y, z1, r, g, b, a, v1.fog);
        };
        if ((drawX1 - drawX0 + 1) * (drawY1 - drawY0 + 1) >= 2048)
            RasterPool::instance().forRows(drawY0, drawY1, fillRow);
        else
            for (int y = drawY0; y <= drawY1; ++y)
                fillRow(y);
    }
}

void GSCpuBackend::DrawTriangle(const GSPrimitiveBatch &batch)
{
    GSDrawState stateCopy = batch.state;
    biasMipToTexelDensity(stateCopy, batch.vertices[0], batch.vertices[1], batch.vertices[2]);
    const GSDrawState &state = stateCopy;
    const GSVertex &v0 = batch.vertices[0];
    const GSVertex &v1 = batch.vertices[1];
    const GSVertex &v2 = batch.vertices[2];
    const auto &ctx = state.context;

    int ofx = ctx.xyoffset.ofx >> 4;
    int ofy = ctx.xyoffset.ofy >> 4;

    float fx0 = v0.x - static_cast<float>(ofx);
    float fy0 = v0.y - static_cast<float>(ofy);
    float fx1 = v1.x - static_cast<float>(ofx);
    float fy1 = v1.y - static_cast<float>(ofy);
    float fx2 = v2.x - static_cast<float>(ofx);
    float fy2 = v2.y - static_cast<float>(ofy);

    int minX = static_cast<int>(std::floor(std::min({fx0, fx1, fx2})));
    int maxX = static_cast<int>(std::ceil(std::max({fx0, fx1, fx2})));
    int minY = static_cast<int>(std::floor(std::min({fy0, fy1, fy2})));
    int maxY = static_cast<int>(std::ceil(std::max({fy0, fy1, fy2})));

    minX = clampInt(minX, ctx.scissor.x0, ctx.scissor.x1);
    maxX = clampInt(maxX, ctx.scissor.x0, ctx.scissor.x1);
    minY = clampInt(minY, ctx.scissor.y0, ctx.scissor.y1);
    maxY = clampInt(maxY, ctx.scissor.y0, ctx.scissor.y1);

    float denom = (fy1 - fy2) * (fx0 - fx2) + (fx2 - fx1) * (fy0 - fy2);
    if (std::fabs(denom) < 0.001f)
        return;

    prepareDecodedTextures(state, (v0.q + v1.q + v2.q) * (1.0f / 3.0f));
    m_hotNearest = true;

    const float winding = (denom < 0.0f) ? -1.0f : 1.0f;
    const float invAbsDenom = 1.0f / std::fabs(denom);
    constexpr float kEdgeEpsilon = 1.0e-4f;
    const float dw0dx = (fy1 - fy2) * winding * invAbsDenom;
    const float dw0dy = (fx2 - fx1) * winding * invAbsDenom;
    const float dw1dx = (fy2 - fy0) * winding * invAbsDenom;
    const float dw1dy = (fx0 - fx2) * winding * invAbsDenom;
    const float originX = static_cast<float>(minX) + 0.5f;
    const float originY = static_cast<float>(minY) + 0.5f;
    const float w0Origin = (((fy1 - fy2) * (originX - fx2) + (fx2 - fx1) * (originY - fy2)) * winding) * invAbsDenom;
    const float w1Origin = (((fy2 - fy0) * (originX - fx2) + (fx0 - fx2) * (originY - fy2)) * winding) * invAbsDenom;
    const uint32_t ztestMethod = static_cast<uint32_t>((ctx.test >> 17) & 3u);
    const uint32_t earlyZbp = GSInternal::framePageBaseToBlock(ctx.zbuf.zbp);
    const uint32_t earlyZpsm = ctx.zbuf.psm;
    const uint32_t earlyFbw = std::max<uint32_t>(ctx.frame.fbw, 1u);
    const int spanWidth = maxX - minX;

    auto clipGreaterEq = [](float w, float dw, float limit, int &lo, int &hi) {
        constexpr float kZero = 1.0e-8f;
        if (std::fabs(dw) <= kZero)
        {
            if (w < limit)
                hi = lo - 1;
            return;
        }
        const float t = (limit - w) / dw;
        if (dw > 0.0f)
            lo = std::max(lo, static_cast<int>(std::ceil(t - 1.0e-5f)));
        else
            hi = std::min(hi, static_cast<int>(std::floor(t + 1.0e-5f)));
    };

    auto drawRow = [&](int y)
    {
        const float row = static_cast<float>(y - minY);
        const float w0Row = w0Origin + dw0dy * row;
        const float w1Row = w1Origin + dw1dy * row;
        int spanLo = 0;
        int spanHi = spanWidth;
        clipGreaterEq(w0Row, dw0dx, -kEdgeEpsilon, spanLo, spanHi);
        clipGreaterEq(w1Row, dw1dx, -kEdgeEpsilon, spanLo, spanHi);
        clipGreaterEq(1.0f - w0Row - w1Row, -(dw0dx + dw1dx), -kEdgeEpsilon, spanLo, spanHi);
        if (spanLo > spanHi)
            return;
        for (int x = minX + spanLo; x <= minX + spanHi; ++x)
        {
            const float col = static_cast<float>(x - minX);
            const float w0 = w0Row + dw0dx * col;
            const float w1 = w1Row + dw1dx * col;
            const float w2 = 1.0f - w0 - w1;

            if (w0 < -kEdgeEpsilon || w1 < -kEdgeEpsilon || w2 < -kEdgeEpsilon)
                continue;

            double z = v0.z * w0 + v1.z * w1 + v2.z * w2;
            const uint32_t zBits = static_cast<uint32_t>(z + 0.5);

            if (ztestMethod >= 2u)
            {
                const uint32_t storedZ = ReadVramUnlocked(earlyZpsm, earlyZbp, earlyFbw, x, y);
                if (ztestMethod == 2u ? zBits < storedZ : zBits <= storedZ)
                    continue;
            }

            uint8_t r, g, b, a;
            if (state.prim.iip)
            {
                r = clampU8(static_cast<int>(v0.r * w0 + v1.r * w1 + v2.r * w2));
                g = clampU8(static_cast<int>(v0.g * w0 + v1.g * w1 + v2.g * w2));
                b = clampU8(static_cast<int>(v0.b * w0 + v1.b * w1 + v2.b * w2));
                a = clampU8(static_cast<int>(v0.a * w0 + v1.a * w1 + v2.a * w2));
            }
            else
            {
                r = v2.r;
                g = v2.g;
                b = v2.b;
                a = v2.a;
            }

            if (state.prim.tme)
            {
                float is, it, iq;
                uint16_t iu, iv;
                if (state.prim.fst)
                {
                    iu = static_cast<uint16_t>(v0.u * w0 + v1.u * w1 + v2.u * w2);
                    iv = static_cast<uint16_t>(v0.v * w0 + v1.v * w1 + v2.v * w2);
                    is = 0.0f;
                    it = 0.0f;
                    iq = 1.0f;
                }
                else
                {
                    // The GS DDA interpolates the homogeneous S, T and Q
                    // values. Texel coordinates are calculated from S/Q and
                    // T/Q only after interpolation.
                    is = v0.s * w0 + v1.s * w1 + v2.s * w2;
                    it = v0.t * w0 + v1.t * w1 + v2.t * w2;
                    iq = v0.q * w0 + v1.q * w1 + v2.q * w2;
                    iu = 0;
                    iv = 0;
                }

                uint32_t texel = SampleTexture(state, is, it, iq, iu, iv);

                uint8_t tr = static_cast<uint8_t>(texel & 0xFF);
                uint8_t tg = static_cast<uint8_t>((texel >> 8) & 0xFF);
                uint8_t tb = static_cast<uint8_t>((texel >> 16) & 0xFF);
                uint8_t ta = static_cast<uint8_t>((texel >> 24) & 0xFF);

                const auto &tex = ctx.tex0;
                const uint8_t shadeR = r;
                const uint8_t shadeG = g;
                const uint8_t shadeB = b;
                const uint8_t shadeA = a;
                const TextureCombineResult color = combineTexture(tex, shadeR, shadeG, shadeB, shadeA, tr, tg, tb, ta);

                r = color.r;
                g = color.g;
                b = color.b;
                a = color.a;
            }

            const uint8_t fog = clampU8(static_cast<int>(v0.fog * w0 + v1.fog * w1 + v2.fog * w2));
            WritePixel(state, x, y, static_cast<u32>(zBits), r, g, b, a, fog);
        }
    };
    const uint64_t area = static_cast<uint64_t>(maxX - minX + 1) * (maxY - minY + 1);
    const bool independent = m_hotLodConstant && state.prim.tme
        ? triangleRowsIndependent(state, maxX, maxY, true, m_hotTbp, m_hotTbw, m_hotWidth, m_hotHeight)
        : triangleRowsIndependent(state, maxX, maxY);
    if (area >= 8192u && independent)
        RasterPool::instance().forRows(minY, maxY, drawRow);
    else
        for (int y = minY; y <= maxY; ++y) drawRow(y);
}

void GSCpuBackend::DrawLine(const GSPrimitiveBatch &batch)
{
    const GSDrawState &state = batch.state;
    const GSVertex &v0 = batch.vertices[0];
    const GSVertex &v1 = batch.vertices[1];
    const auto &ctx = state.context;

    int ofx = ctx.xyoffset.ofx >> 4;
    int ofy = ctx.xyoffset.ofy >> 4;

    int x0 = static_cast<int>(v0.x) - ofx;
    int y0 = static_cast<int>(v0.y) - ofy;
    int x1 = static_cast<int>(v1.x) - ofx;
    int y1 = static_cast<int>(v1.y) - ofy;

    int dx = std::abs(x1 - x0);
    int dy = -std::abs(y1 - y0);
    int sx = (x0 < x1) ? 1 : -1;
    int sy = (y0 < y1) ? 1 : -1;
    int err = dx + dy;

    int totalSteps = std::max(std::abs(x1 - x0), std::abs(y1 - y0));
    if (totalSteps == 0)
        totalSteps = 1;
    int step = 0;

    for (;;)
    {
        float t = static_cast<float>(step) / static_cast<float>(totalSteps);
        uint8_t r, g, b, a;
        if (state.prim.iip)
        {
            r = clampU8(static_cast<int>(v0.r + (v1.r - v0.r) * t));
            g = clampU8(static_cast<int>(v0.g + (v1.g - v0.g) * t));
            b = clampU8(static_cast<int>(v0.b + (v1.b - v0.b) * t));
            a = clampU8(static_cast<int>(v0.a + (v1.a - v0.a) * t));
        }
        else
        {
            r = v1.r;
            g = v1.g;
            b = v1.b;
            a = v1.a;
        }

        double z = (v0.z + (v1.z - v0.z) * t);
        const uint8_t fog = clampU8(static_cast<int>(v0.fog + (v1.fog - v0.fog) * t));
        WritePixel(state, x0, y0, static_cast<u32>(z), r, g, b, a, fog);

        if (x0 == x1 && y0 == y1)
            break;

        int e2 = 2 * err;
        if (e2 >= dy)
        {
            err += dy;
            x0 += sx;
        }
        if (e2 <= dx)
        {
            err += dx;
            y0 += sy;
        }
        ++step;
    }
}

void GSCpuBackend::BeginTransfer(const GSTransferCommand &command)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    bool gpuLocalToLocal = false;
    bool gpuLocalToHost = false;
#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)
    if (command.direction == 1u || command.direction == 2u)
    {
        EnsureSDLGpu();
        if (m_sdlGpu && command.direction == 2u)
            gpuLocalToLocal = m_sdlGpu->localToLocal(command);
        else if (m_sdlGpu && command.direction == 1u)
            gpuLocalToHost = m_sdlGpu->localToHost(command, m_localToHostBuffer);
        if (std::getenv("PS2X_GS_SDL_GPU_STATS"))
            std::fprintf(stderr, "[gs-sdl-gpu] transfer route=%s direction=%u psm=%u rect=%ux%u bp=%u\n",
                gpuLocalToLocal ? "gpu-local" : gpuLocalToHost ? "gpu-readback" : "cpu",
                command.direction, command.bitbltbuf.spsm,
                command.trxreg.rrw, command.trxreg.rrh, command.bitbltbuf.sbp);
    }
#endif
#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)
    if ((command.direction == 1u || command.direction == 2u) &&
        (m_sdlGpu || sdlGpuWasRequested()) && !gpuLocalToLocal && !gpuLocalToHost)
        rejectSdlGpuCpuPath("VRAM transfer");
#endif
    // Host-to-local data is either copied to SDL_GPU by UploadImage or
    // synchronized there before the CPU implementation. Do not force an eager
    // readback just to latch the transfer registers. GPU local copies also
    // stay resident and ordered in the same SDL_GPU command stream.
    if (command.direction != 0u && !gpuLocalToLocal && !gpuLocalToHost)
        SyncMetal();
    GSRecord::instance().start(this,command,m_vram,m_vramSize);
    GSRecord::instance().event(this,3,&command,sizeof(command));
    m_transfer = command;
    m_transferState.x = command.trxpos.dsax;
    m_transferState.y = command.trxpos.dsay;
    m_transferState.totalPixels = static_cast<uint32_t>(command.trxreg.rrw) * static_cast<uint32_t>(command.trxreg.rrh);
    m_transferState.copiedPixels = 0u;
    m_transferState.direction = command.direction;
    m_transferState.localToHostPendingBytes = 0u;
    if ([] { static const bool enabled = std::getenv("PS2X_GS_SPRITE_TRACE") != nullptr; return enabled; }())
    {
        static unsigned s_n = 0;
        if (s_n++ < 400000u)
            std::fprintf(stderr, "[gs-xfer] dir=%u sbp=%u sbw=%u spsm=0x%x dbp=%u dbw=%u dpsm=0x%x ssa=%u,%u dsa=%u,%u rr=%ux%u dir2=%u\n",
                         command.direction, command.bitbltbuf.sbp, command.bitbltbuf.sbw, command.bitbltbuf.spsm,
                         command.bitbltbuf.dbp, command.bitbltbuf.dbw, command.bitbltbuf.dpsm, command.trxpos.ssax,
                         command.trxpos.ssay, command.trxpos.dsax, command.trxpos.dsay, command.trxreg.rrw,
                         command.trxreg.rrh, command.trxpos.dir);
    }

    if (command.direction == 2u)
    {
        if (gpuLocalToLocal)
        {
            const uint32_t total = m_transferState.totalPixels;
            m_transferState.copiedPixels = total;
            m_transferState.direction = 3u;
            m_texturePageCache.Invalidate();
            invalidateDecodedTextures();
        }
        else
            PerformLocalToLocalTransfer();
    }
    else if (command.direction == 1u)
    {
        if (gpuLocalToHost)
        {
            m_localToHostReadPos = 0u;
            m_transferState.copiedPixels = m_transferState.totalPixels;
            m_transferState.localToHostPendingBytes = m_localToHostBuffer.size();
        }
        else
            PerformLocalToHostTransfer();
    }
}

void GSCpuBackend::UploadImage(const uint8_t *data, uint32_t sizeBytes)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    if(data)GSRecord::instance().event(this,4,data,sizeBytes);
    if (!data || sizeBytes == 0u || !m_vram || m_transferState.direction != 0u)
        return;
    if (m_transfer.trxreg.rrw == 0u || m_transfer.trxreg.rrh == 0u || m_transferState.totalPixels == 0u)
        return;

#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)
    EnsureSDLGpu();
    const uint8_t destinationPsm = m_transfer.bitbltbuf.dpsm;
    uint32_t bitsPerPixel = 0u;
    switch (destinationPsm)
    {
    case GS_PSM_CT32: case GS_PSM_Z32: bitsPerPixel = 32u; break;
    case GS_PSM_CT24: case GS_PSM_Z24: bitsPerPixel = 24u; break;
    case GS_PSM_CT16: case GS_PSM_CT16S: case GS_PSM_Z16: case GS_PSM_Z16S: bitsPerPixel = 16u; break;
    case GS_PSM_T8: case GS_PSM_T8H: bitsPerPixel = 8u; break;
    case GS_PSM_T4: case GS_PSM_T4HL: case GS_PSM_T4HH: bitsPerPixel = 4u; break;
    default: break;
    }
    const bool wholePixels = bitsPerPixel != 0u && (uint64_t(sizeBytes) * 8u) % bitsPerPixel == 0u;
    if (m_sdlGpu && wholePixels)
    {
        const uint32_t pixels = std::min<uint32_t>(static_cast<uint32_t>(uint64_t(sizeBytes) * 8u / bitsPerPixel),
            m_transferState.totalPixels - m_transferState.copiedPixels);
        if (m_sdlGpu->uploadImage(m_transfer, m_transferState.copiedPixels, data, pixels))
        {
            m_transferState.copiedPixels += pixels;
            if (m_transferState.copiedPixels >= m_transferState.totalPixels)
            {
                m_transferState.direction = 3u;
                m_transferState.totalPixels = 0u;
            }
            else
            {
                m_transferState.x = m_transfer.trxpos.dsax + (m_transferState.copiedPixels % m_transfer.trxreg.rrw);
                m_transferState.y = m_transfer.trxpos.dsay + (m_transferState.copiedPixels / m_transfer.trxreg.rrw);
            }
            m_texturePageCache.Invalidate();
            invalidateDecodedTextures();
            return;
        }
    }
#endif

#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)
    if (m_sdlGpu || sdlGpuWasRequested())
    {
        char message[256]{};
        std::snprintf(message, sizeof(message),
            "SDL_GPU GS GPU-only mode: unsupported host-to-local upload would use CPU "
            "(PSM=0x%02x bytes=%u pixel=%u/%u rect=%ux%u)",
            destinationPsm, sizeBytes, m_transferState.copiedPixels, m_transferState.totalPixels,
            m_transfer.trxreg.rrw, m_transfer.trxreg.rrh);
        throw std::runtime_error(message);
    }
#endif

    SyncMetal();

    const uint32_t dbp = m_transfer.bitbltbuf.dbp;
    const uint32_t dbw = std::max<uint32_t>(m_transfer.bitbltbuf.dbw, 1u);
    const uint8_t dpsm = m_transfer.bitbltbuf.dpsm;
    const uint32_t rrw = m_transfer.trxreg.rrw;
    const uint32_t dsax = m_transfer.trxpos.dsax;
    uint32_t offset = 0u;

    auto advancePixel = [&](uint32_t count)
    {
        const uint32_t totalPixels = m_transferState.totalPixels;
        m_transferState.copiedPixels =
            std::min<uint32_t>(totalPixels, m_transferState.copiedPixels + count);

        if (m_transferState.copiedPixels >= totalPixels)
        {
            m_transferState.direction = 3u;
            m_transferState.totalPixels = 0u;
            return;
        }

        m_transferState.x = dsax + (m_transferState.copiedPixels % rrw);
        m_transferState.y = m_transfer.trxpos.dsay + (m_transferState.copiedPixels / rrw);
    };

    while (offset < sizeBytes && m_transferState.direction == 0u)
    {
        switch (dpsm)
        {
        case GS_PSM_CT32:
        case GS_PSM_Z32:
        {
            if (sizeBytes - offset < 4u)
                return;
            uint32_t value = 0u;
            std::memcpy(&value, data + offset, sizeof(value));
            WriteVramUnlocked(dpsm, dbp, dbw, m_transferState.x, m_transferState.y, value);
            offset += 4u;
            advancePixel(1u);
            break;
        }
        case GS_PSM_CT24:
        case GS_PSM_Z24:
        {
            if (sizeBytes - offset < 3u)
                return;
            const uint32_t value = static_cast<uint32_t>(data[offset]) |
                                   (static_cast<uint32_t>(data[offset + 1u]) << 8u) |
                                   (static_cast<uint32_t>(data[offset + 2u]) << 16u);
            WriteVramUnlocked(dpsm, dbp, dbw, m_transferState.x, m_transferState.y, value);
            offset += 3u;
            advancePixel(1u);
            break;
        }
        case GS_PSM_CT16:
        case GS_PSM_CT16S:
        case GS_PSM_Z16:
        case GS_PSM_Z16S:
        {
            if (sizeBytes - offset < 2u)
                return;
            uint16_t value = 0u;
            std::memcpy(&value, data + offset, sizeof(value));
            WriteVramUnlocked(dpsm, dbp, dbw, m_transferState.x, m_transferState.y, value);
            offset += 2u;
            advancePixel(1u);
            break;
        }
        case GS_PSM_T8:
        case GS_PSM_T8H:
            WriteVramUnlocked(dpsm, dbp, dbw, m_transferState.x, m_transferState.y, data[offset++]);
            advancePixel(1u);
            break;
        case GS_PSM_T4:
        case GS_PSM_T4HL:
        case GS_PSM_T4HH:
        {
            const uint8_t packed = data[offset++];
            const uint32_t firstPixel = m_transferState.copiedPixels;
            WriteVramUnlocked(dpsm, dbp, dbw,
                              dsax + (firstPixel % rrw),
                              m_transfer.trxpos.dsay + (firstPixel / rrw),
                              packed & 0x0Fu);
            if (firstPixel + 1u < m_transferState.totalPixels)
            {
                const uint32_t secondPixel = firstPixel + 1u;
                WriteVramUnlocked(dpsm, dbp, dbw,
                                  dsax + (secondPixel % rrw),
                                  m_transfer.trxpos.dsay + (secondPixel / rrw),
                                  (packed >> 4u) & 0x0Fu);
            }
            advancePixel(std::min<uint32_t>(2u, m_transferState.totalPixels - firstPixel));
            break;
        }
        default:
            return;
        }
    }
}

void GSCpuBackend::PerformLocalToLocalTransfer()
{
    if (!m_vram)
        return;

    const uint32_t rrw = m_transfer.trxreg.rrw;
    const uint32_t rrh = m_transfer.trxreg.rrh;
    const uint32_t total = rrw * rrh;
    if (total == 0u)
    {
        m_transferState.direction = 3u;
        return;
    }

    for (uint32_t pixel = 0; pixel < total; ++pixel)
    {
        uint32_t x = pixel % rrw;
        uint32_t y = pixel / rrw;
        if ((m_transfer.trxpos.dir & 0x2u) != 0u)
            x = rrw - x - 1u;
        if ((m_transfer.trxpos.dir & 0x1u) != 0u)
            y = rrh - y - 1u;

        const uint32_t value = ReadVramUnlocked(m_transfer.bitbltbuf.spsm,
                                                m_transfer.bitbltbuf.sbp,
                                                std::max<uint32_t>(m_transfer.bitbltbuf.sbw, 1u),
                                                x + m_transfer.trxpos.ssax,
                                                y + m_transfer.trxpos.ssay);
        WriteVramUnlocked(m_transfer.bitbltbuf.dpsm,
                          m_transfer.bitbltbuf.dbp,
                          std::max<uint32_t>(m_transfer.bitbltbuf.dbw, 1u),
                          x + m_transfer.trxpos.dsax,
                          y + m_transfer.trxpos.dsay,
                          value);
    }

    m_transferState.copiedPixels = total;
    m_transferState.direction = 3u;
}

void GSCpuBackend::PerformLocalToHostTransfer()
{
    m_localToHostBuffer.clear();
    m_localToHostReadPos = 0u;
    if (!m_vram)
        return;

    const uint32_t rrw = m_transfer.trxreg.rrw;
    const uint32_t rrh = m_transfer.trxreg.rrh;
    const uint32_t sbw = std::max<uint32_t>(m_transfer.bitbltbuf.sbw, 1u);
    const uint8_t spsm = m_transfer.bitbltbuf.spsm;
    const uint32_t bpp = static_cast<uint32_t>(GSMem::BitsPerPixel(static_cast<GSMem::PixelStorageMode>(spsm)));
    const uint32_t total = rrw * rrh;
    m_localToHostBuffer.reserve((static_cast<size_t>(total) * bpp + 7u) / 8u);

    for (uint32_t pixel = 0u; pixel < total; ++pixel)
    {
        const uint32_t x = pixel % rrw;
        const uint32_t y = pixel / rrw;
        const uint32_t value = ReadVramUnlocked(spsm,
                                                m_transfer.bitbltbuf.sbp,
                                                sbw,
                                                x + m_transfer.trxpos.ssax,
                                                y + m_transfer.trxpos.ssay);
        switch (bpp)
        {
        case 32:
            m_localToHostBuffer.push_back(static_cast<uint8_t>(value));
            m_localToHostBuffer.push_back(static_cast<uint8_t>(value >> 8u));
            m_localToHostBuffer.push_back(static_cast<uint8_t>(value >> 16u));
            m_localToHostBuffer.push_back(static_cast<uint8_t>(value >> 24u));
            break;
        case 24:
            m_localToHostBuffer.push_back(static_cast<uint8_t>(value));
            m_localToHostBuffer.push_back(static_cast<uint8_t>(value >> 8u));
            m_localToHostBuffer.push_back(static_cast<uint8_t>(value >> 16u));
            break;
        case 16:
            m_localToHostBuffer.push_back(static_cast<uint8_t>(value));
            m_localToHostBuffer.push_back(static_cast<uint8_t>(value >> 8u));
            break;
        case 8:
            m_localToHostBuffer.push_back(static_cast<uint8_t>(value));
            break;
        case 4:
        {
            if ((pixel & 1u) != 0u)
                break;
            uint32_t next = 0u;
            if (pixel + 1u < total)
            {
                const uint32_t nextPixel = pixel + 1u;
                const uint32_t nextX = nextPixel % rrw;
                const uint32_t nextY = nextPixel / rrw;
                next = ReadVramUnlocked(spsm, m_transfer.bitbltbuf.sbp, sbw,
                                        nextX + m_transfer.trxpos.ssax,
                                        nextY + m_transfer.trxpos.ssay);
            }
            m_localToHostBuffer.push_back(static_cast<uint8_t>((value & 0x0Fu) | ((next & 0x0Fu) << 4u)));
            break;
        }
        default:
            break;
        }
    }

    m_transferState.copiedPixels = total;
    m_transferState.localToHostPendingBytes = m_localToHostBuffer.size();
}

uint32_t GSCpuBackend::ConsumeLocalToHostBytes(uint8_t *dst, uint32_t maxBytes)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    if (!dst || maxBytes == 0u || m_localToHostReadPos >= m_localToHostBuffer.size())
        return 0u;
    const size_t count = std::min<size_t>(maxBytes, m_localToHostBuffer.size() - m_localToHostReadPos);
    std::memcpy(dst, m_localToHostBuffer.data() + m_localToHostReadPos, count);
    m_localToHostReadPos += count;
    m_transferState.localToHostPendingBytes = m_localToHostBuffer.size() - m_localToHostReadPos;
    return static_cast<uint32_t>(count);
}

bool GSCpuBackend::ClearFramebuffer(const GSContext &context, uint32_t rgba)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    struct ClearRecord {GSContext context;uint32_t color;} record{context,rgba};
    GSRecord::instance().event(this,5,&record,sizeof(record));
    if (!m_vram || context.frame.fbw == 0u)
        return false;

    const uint32_t x0 = context.scissor.x0;
    const uint32_t x1 = std::max<uint32_t>(x0, context.scissor.x1);
    const uint32_t y0 = context.scissor.y0;
    const uint32_t y1 = std::max<uint32_t>(y0, context.scissor.y1);

#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)
    const char *sdlGpu = std::getenv("PS2X_GS_SDL_GPU");
    if (sdlGpu && sdlGpu[0] == '1' &&
        (context.frame.psm == GS_PSM_CT32 || context.frame.psm == GS_PSM_CT24 ||
         context.frame.psm == GS_PSM_CT16 || context.frame.psm == GS_PSM_CT16S))
    {
        GSPrimitiveBatch clear{};
        clear.vertexCount = 2u;
        clear.state.context = context;
        clear.state.context.zbuf.psm = GS_PSM_Z32;
        clear.state.context.zbuf.zmask = true;
        clear.state.context.test = uint64_t(1) << 17; // Z test ALWAYS; depth writes disabled above.
        clear.state.prim.type = GS_PRIM_SPRITE;
        clear.vertices[0].x = static_cast<float>(x0);
        clear.vertices[0].y = static_cast<float>(y0);
        clear.vertices[1].x = static_cast<float>(x1 + 1u);
        clear.vertices[1].y = static_cast<float>(y1 + 1u);
        uint8_t alpha = static_cast<uint8_t>(rgba >> 24u);
        if ((context.fba & 1ull) != 0ull && context.frame.psm != GS_PSM_CT24)
            alpha |= 0x80u;
        for (auto &vertex : clear.vertices)
        {
            vertex.r = static_cast<uint8_t>(rgba);
            vertex.g = static_cast<uint8_t>(rgba >> 8u);
            vertex.b = static_cast<uint8_t>(rgba >> 16u);
            vertex.a = alpha;
        }
        if (TryMetal(clear))
            return true;
    }
    if (m_sdlGpu || sdlGpuWasRequested())
        rejectSdlGpuCpuPath("framebuffer clear");
#endif

    SyncMetal();
    uint8_t r = static_cast<uint8_t>(rgba);
    uint8_t g = static_cast<uint8_t>(rgba >> 8u);
    uint8_t b = static_cast<uint8_t>(rgba >> 16u);
    uint8_t a = static_cast<uint8_t>(rgba >> 24u);
    if ((context.fba & 1ull) != 0ull && context.frame.psm != GS_PSM_CT24)
        a |= 0x80u;

    const uint32_t fbp = GSInternal::framePageBaseToBlock(context.frame.fbp);
    const uint32_t fbw = std::max<uint32_t>(context.frame.fbw, 1u);
    if (context.frame.psm == GS_PSM_CT32 || context.frame.psm == GS_PSM_CT24)
    {
        const uint32_t source = static_cast<uint32_t>(r) |
                                (static_cast<uint32_t>(g) << 8u) |
                                (static_cast<uint32_t>(b) << 16u) |
                                (static_cast<uint32_t>(a) << 24u);
        for (uint32_t y = y0; y <= y1; ++y)
            for (uint32_t x = x0; x <= x1; ++x)
            {
                uint32_t pixel = source;
                if (context.frame.fbmsk != 0u)
                {
                    const uint32_t old = ReadVramUnlocked(context.frame.psm, fbp, fbw, x, y);
                    pixel = (pixel & ~context.frame.fbmsk) | (old & context.frame.fbmsk);
                }
                WriteVramUnlocked(context.frame.psm, fbp, fbw, x, y, pixel);
            }
        return true;
    }

    if (context.frame.psm == GS_PSM_CT16 || context.frame.psm == GS_PSM_CT16S)
    {
        const uint16_t source = encodeFramePixelPSMCT16(r, g, b, a);
        const uint16_t mask = static_cast<uint16_t>(context.frame.fbmsk);
        for (uint32_t y = y0; y <= y1; ++y)
            for (uint32_t x = x0; x <= x1; ++x)
            {
                uint16_t pixel = source;
                if (mask != 0u)
                {
                    const uint16_t old = static_cast<uint16_t>(ReadVramUnlocked(context.frame.psm, fbp, fbw, x, y));
                    pixel = static_cast<uint16_t>((pixel & ~mask) | (old & mask));
                }
                WriteVramUnlocked(context.frame.psm, fbp, fbw, x, y, pixel);
            }
        return true;
    }
    return false;
}

bool GSCpuBackend::CopyFrameToHostRgba(const GSFrameReg &frame,
                                       uint32_t width,
                                       uint32_t height,
                                       std::vector<uint8_t> &outPixels,
                                       bool preserveAlpha,
                                       bool useLocalMemoryLayout,
                                       bool frameBaseIsPages,
                                       uint32_t sourceOriginX,
                                       uint32_t sourceOriginY) const
{
    if (!m_vram || m_vramSize == 0u)
        return false;

    outPixels.assign(kHostFrameWidth * kHostFrameHeight * 4u, 0u);
    const uint32_t baseBytes = frameBaseIsPages ? frame.fbp * 8192u : frame.fbp * 256u;
    const uint32_t basePtr = frameBaseIsPages ? GSInternal::framePageBaseToBlock(frame.fbp) : frame.fbp;
    const uint32_t fbw = frame.fbw ? frame.fbw : kHostFrameWidth / 64u;
    const uint32_t bytesPerPixel = (frame.psm == GS_PSM_CT16 || frame.psm == GS_PSM_CT16S) ? 2u : 4u;
    const uint32_t stride = fbw * 64u * bytesPerPixel;

    for (uint32_t y = 0; y < height; ++y)
    {
        uint8_t *dst = outPixels.data() + y * kHostFrameWidth * 4u;
        for (uint32_t x = 0; x < width; ++x)
        {
            const uint32_t sx = sourceOriginX + x;
            const uint32_t sy = sourceOriginY + y;
            if (frame.psm == GS_PSM_CT32 || frame.psm == GS_PSM_CT24)
            {
                uint32_t color = 0u;
                if (useLocalMemoryLayout)
                    color = ReadVramUnlocked(frame.psm, basePtr, fbw, sx, sy);
                else
                {
                    const uint32_t pixelBytes = frame.psm == GS_PSM_CT24 ? 3u : 4u;
                    const uint64_t offset = static_cast<uint64_t>(baseBytes) + static_cast<uint64_t>(sy) * stride + static_cast<uint64_t>(sx) * pixelBytes;
                    if (offset + pixelBytes > m_vramSize)
                        return false;
                    color = m_vram[offset] | (static_cast<uint32_t>(m_vram[offset + 1u]) << 8u) |
                            (static_cast<uint32_t>(m_vram[offset + 2u]) << 16u);
                    if (pixelBytes == 4u)
                        color |= static_cast<uint32_t>(m_vram[offset + 3u]) << 24u;
                }
                dst[x * 4u] = static_cast<uint8_t>(color);
                dst[x * 4u + 1u] = static_cast<uint8_t>(color >> 8u);
                dst[x * 4u + 2u] = static_cast<uint8_t>(color >> 16u);
                dst[x * 4u + 3u] = preserveAlpha && frame.psm != GS_PSM_CT24 ? static_cast<uint8_t>(color >> 24u) : 255u;
            }
            else if (frame.psm == GS_PSM_CT16 || frame.psm == GS_PSM_CT16S)
            {
                uint16_t color = 0u;
                if (useLocalMemoryLayout)
                    color = static_cast<uint16_t>(ReadVramUnlocked(frame.psm, basePtr, fbw, sx, sy));
                else
                {
                    const uint64_t offset = static_cast<uint64_t>(baseBytes) + static_cast<uint64_t>(sy) * stride + static_cast<uint64_t>(sx) * 2u;
                    if (offset + 2u > m_vramSize)
                        return false;
                    std::memcpy(&color, m_vram + offset, sizeof(color));
                }
                const uint32_t r = color & 31u;
                const uint32_t g = (color >> 5u) & 31u;
                const uint32_t b = (color >> 10u) & 31u;
                dst[x * 4u] = static_cast<uint8_t>((r << 3u) | (r >> 2u));
                dst[x * 4u + 1u] = static_cast<uint8_t>((g << 3u) | (g >> 2u));
                dst[x * 4u + 2u] = static_cast<uint8_t>((b << 3u) | (b >> 2u));
                dst[x * 4u + 3u] = preserveAlpha ? ((color & 0x8000u) ? 0x80u : 0u) : 255u;
            }
            else
            {
                outPixels.clear();
                return false;
            }
        }
    }
    return true;
}

PresentationFrame GSCpuBackend::Present(const GSPresentationRequest &request)
{
#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)
    {
        std::unique_lock<std::mutex> lock(m_mutex);
        EnsureSDLGpu();
        if (m_sdlGpu)
            return PresentFromLocalMemory(request, m_sdlGpu.get(), &lock);
    }
#endif
    // Snapshot local memory under the backend lock, then perform the expensive
    // display conversion without holding the producer-side raster lock.
    thread_local std::vector<uint8_t> snapshot;
    SnapshotVram(snapshot);
    if (snapshot.empty())
        return {};

    thread_local GSCpuBackend snapshotBackend;
    snapshotBackend.Initialize(snapshot.data(), static_cast<uint32_t>(snapshot.size()));
    return snapshotBackend.PresentFromLocalMemory(request);
}

PresentationFrame GSCpuBackend::PresentFromLocalMemory(const GSPresentationRequest &request,
                                                        GSSDLGpuRaster *scanoutGpu,
                                                        std::unique_lock<std::mutex> *producerLock)
{
    PresentationFrame result{};
    const GSPmodeState pmode = decodePmode(request.pmode);
    const GSSmode2State smode2 = decodeSMode2(request.smode2);
    const bool fieldMode = smode2.interlaced && !smode2.frameMode;
    const bool oddField = (request.vsyncTick & 1ull) != 0ull;
    const GSFrameReg displayFrame1 = decodeDisplayFrame(request.dispfb1);
    const GSFrameReg displayFrame2 = decodeDisplayFrame(request.dispfb2);
    const GSDisplayReadOrigin origin1 = decodeDisplayReadOrigin(request.dispfb1);
    const GSDisplayReadOrigin origin2 = decodeDisplayReadOrigin(request.dispfb2);
    uint32_t width1 = 0u, height1 = 0u, width2 = 0u, height2 = 0u;
    decodeDisplaySize(request.display1, width1, height1);
    decodeDisplaySize(request.display2, width2, height2);
    const bool valid1 = pmode.enableCrt1 && hasDisplaySetup(request.display1, displayFrame1);
    const bool valid2 = pmode.enableCrt2 && hasDisplaySetup(request.display2, displayFrame2);
    if (!valid1 && !valid2)
        return result;
    const bool dualSameFramebuffer = valid1 && valid2 &&
                                     displayFrame1.fbp == displayFrame2.fbp &&
                                     displayFrame1.fbw == displayFrame2.fbw &&
                                     displayFrame1.psm == displayFrame2.psm;
    const uint32_t fieldVariant = fieldMode ? (oddField ? 2u : 1u) : 0u;
    const bool asyncSimpleScanout = scanoutGpu != nullptr;

    auto copyFrameToRgba = [&](const GSFrameReg &frame, uint32_t width, uint32_t height,
                               std::vector<uint8_t> &pixels, bool preserveAlpha,
                               bool useLocalMemoryLayout, bool frameBaseIsPages,
                               uint32_t originX, uint32_t originY, bool asyncReadback,
                               uint32_t readbackFieldVariant) {
#if defined(PS2X_ENABLE_SDL_GPU_GS_BACKEND)
        if (scanoutGpu && useLocalMemoryLayout && scanoutGpu->copyFrameToHostRgba(
                frame, width, height, pixels, preserveAlpha, frameBaseIsPages, originX, originY,
                asyncReadback, producerLock, readbackFieldVariant))
            return true;
        if (scanoutGpu)
            rejectSdlGpuCpuPath("scanout conversion");
#endif
        if (scanoutGpu)
            SyncMetal();
        return CopyFrameToHostRgba(frame, width, height, pixels, preserveAlpha,
                                   useLocalMemoryLayout, frameBaseIsPages, originX, originY);
    };

    auto copySource = [&](const GSFrameReg &displayFrame,
                          const GSDisplayReadOrigin &origin,
                          uint32_t width,
                          uint32_t height,
                          bool allowPreferred,
                          bool asyncDisplayFrame,
                          uint32_t displayFieldVariant,
                          bool preserveAlpha,
                          GSFrameReg &selected,
                          std::vector<uint8_t> &pixels,
                          bool &usedPreferred) -> bool
    {
        selected = displayFrame;
        pixels.clear();
        usedPreferred = false;
        if (allowPreferred && request.hasPreferredSource && request.preferredDestFbp == displayFrame.fbp &&
            (request.preferredSource.fbw != 0u || request.preferredSource.fbp != displayFrame.fbp) &&
            copyFrameToRgba(request.preferredSource, width, height, pixels, preserveAlpha, true, false,
                            0u, 0u, asyncDisplayFrame, displayFieldVariant))
        {
            selected = request.preferredSource;
            usedPreferred = true;
        }
        if (pixels.empty() && !copyFrameToRgba(displayFrame, width, height, pixels, preserveAlpha, true, true, origin.x, origin.y, asyncDisplayFrame, displayFieldVariant))
            return false;

        if (!usedPreferred && displayFrame.fbp == 0u && !hasNonBlackPixel(pixels, width, height))
        {
            for (const GSFrameReg &candidate : request.contextFrames)
            {
                if (candidate.fbp == selected.fbp && candidate.fbw == selected.fbw && candidate.psm == selected.psm)
                    continue;
                std::vector<uint8_t> candidatePixels;
                if (!copyFrameToRgba(candidate, width, height, candidatePixels, preserveAlpha, true, true, 0u, 0u, false, 0u))
                    continue;
                if (!hasNonBlackPixel(candidatePixels, width, height))
                    continue;
                selected = candidate;
                pixels.swap(candidatePixels);
                break;
            }
        }
        return true;
    };

    // Black enables both CRT circuits on the same FBP. The second circuit is a
    // 1-line DBY offset of the same CT16 page; blending it costs a second
    // convert plus 640x448 per-pixel math for a scanout the GPU already drew.
    if (valid1 && valid2 && !dualSameFramebuffer)
    {
        GSFrameReg selected1{}, selected2{};
        std::vector<uint8_t> crt1, crt2;
        bool preferred1 = false, preferred2 = false;
        if (copySource(displayFrame1, origin1, width1, height1, false, asyncSimpleScanout, fieldVariant, true, selected1, crt1, preferred1) &&
            copySource(displayFrame2, origin2, width2, height2, false, asyncSimpleScanout, fieldVariant, true, selected2, crt2, preferred2))
        {
            result.width = std::max(width1, width2);
            result.height = std::max(height1, height2);
            result.pixels.assign(kHostFrameWidth * kHostFrameHeight * 4u, 0u);
            const uint8_t bgR = static_cast<uint8_t>(request.bgcolor);
            const uint8_t bgG = static_cast<uint8_t>(request.bgcolor >> 8u);
            const uint8_t bgB = static_cast<uint8_t>(request.bgcolor >> 16u);
            for (uint32_t y = 0; y < result.height; ++y)
                for (uint32_t x = 0; x < result.width; ++x)
                {
                    uint8_t *dst = result.pixels.data() + (y * kHostFrameWidth + x) * 4u;
                    dst[0] = bgR;
                    dst[1] = bgG;
                    dst[2] = bgB;
                    dst[3] = pmode.alp;
                }
            if (!pmode.slbg)
                for (uint32_t y = 0; y < height2; ++y)
                    std::memcpy(result.pixels.data() + y * kHostFrameWidth * 4u, crt2.data() + y * kHostFrameWidth * 4u, width2 * 4u);
            for (uint32_t y = 0; y < height1; ++y)
                for (uint32_t x = 0; x < width1; ++x)
                {
                    const uint8_t *src = crt1.data() + (y * kHostFrameWidth + x) * 4u;
                    uint8_t *dst = result.pixels.data() + (y * kHostFrameWidth + x) * 4u;
                    const uint32_t factor = pmode.mmod ? pmode.alp : std::min<uint32_t>(255u, static_cast<uint32_t>(src[3]) * 2u);
                    dst[0] = blendPresentationChannel(src[0], dst[0], factor);
                    dst[1] = blendPresentationChannel(src[1], dst[1], factor);
                    dst[2] = blendPresentationChannel(src[2], dst[2], factor);
                    dst[3] = pmode.amod ? dst[3] : src[3];
                }
            normalizePresentationAlpha(result.pixels, result.width, result.height);
            if (fieldMode)
                applyFieldPresentation(result.pixels, result.width, result.height, oddField);
            result.displayFbp = displayFrame1.fbp;
            result.sourceFbp = selected1.fbp;
            return result;
        }
    }

    const GSFrameReg &displayFrame = valid1 ? displayFrame1 : displayFrame2;
    const GSDisplayReadOrigin &origin = valid1 ? origin1 : origin2;
    result.width = valid1 ? width1 : width2;
    result.height = valid1 ? height1 : height2;
    GSFrameReg selected = displayFrame;
    if (!copySource(displayFrame, origin, result.width, result.height, true, asyncSimpleScanout, fieldVariant, false,
                    selected, result.pixels, result.usedPreferred))
        return {};
    if (fieldMode)
        applyFieldPresentation(result.pixels, result.width, result.height, oddField);
    normalizePresentationAlpha(result.pixels, result.width, result.height);
    result.displayFbp = displayFrame.fbp;
    result.sourceFbp = selected.fbp;
    return result;
}
