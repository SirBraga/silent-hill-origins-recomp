R"MSL(
#include <metal_stdlib>
using namespace metal;

struct Uniforms
{
    float targetWidth, targetHeight;
    uint tme, tfx, tcc, fge;
    uint abe, blendA, blendB, blendC, blendD, fix;
    uint atst, aref, alphaMode;
    uint writeMode;
    uint fbmask, fba, colclamp, destinationHasAlpha;
    float fogR, fogG, fogB;
    float texScaleU, texScaleV;
    uint texAlphaFixed, ta0;
    uint texIndexed, texLinear;
    float texWidth, texHeight;
    uint wrapU, wrapV;
    float minU, maxU, minV, maxV;
    uint maxLevel, lodFixed;
    float lodScale, lodK;
    float pointSize;
    uint paletteScale;
    uint texBox;
    uint texSelf;
    uint texReplaced;
    uint nativeTexel;
};

// GS_SPECIALIZED: the fields that pick a code path come from function constants, one compiled variant per
// combination in use (the generic build reads them from the uniforms and decides per pixel).
#if defined(GS_SPECIALIZED)
constant uint k_tme [[function_constant(0)]];
constant uint k_tfx [[function_constant(1)]];
constant uint k_tcc [[function_constant(2)]];
constant uint k_fge [[function_constant(3)]];
constant uint k_abe [[function_constant(4)]];
constant uint k_blendA [[function_constant(5)]];
constant uint k_blendB [[function_constant(6)]];
constant uint k_blendC [[function_constant(7)]];
constant uint k_blendD [[function_constant(8)]];
constant uint k_atst [[function_constant(9)]];
constant uint k_alphaMode [[function_constant(10)]];
constant uint k_writeMode [[function_constant(11)]];
constant uint k_fba [[function_constant(12)]];
constant uint k_colclamp [[function_constant(13)]];
constant uint k_destinationHasAlpha [[function_constant(14)]];
constant uint k_texAlphaFixed [[function_constant(15)]];
constant uint k_texIndexed [[function_constant(16)]];
constant uint k_texLinear [[function_constant(17)]];
constant uint k_wrapU [[function_constant(18)]];
constant uint k_wrapV [[function_constant(19)]];
constant uint k_texBox [[function_constant(20)]];
constant uint k_texSelf [[function_constant(21)]];
constant uint k_hasLevels [[function_constant(22)]];
constant uint k_lodFixed [[function_constant(23)]];
constant uint k_hasMask [[function_constant(24)]];
#define S(field) k_##field
#define HAS_LEVELS (k_hasLevels != 0)
#define LOD_FIXED (k_lodFixed != 0)
#define HAS_MASK (k_hasMask != 0)
#else
#define S(field) u.field
#define HAS_LEVELS (u.maxLevel != 0)
#define LOD_FIXED (u.lodFixed != 0)
#define HAS_MASK (u.fbmask != 0)
#endif

struct ShuffleUniforms
{
    uint sourceHalf, destinationHalf, mask16, sourceIsDepth;
};

struct VertexIn
{
    float3 position [[attribute(0)]];
    float4 color [[attribute(1)]];
    float3 stq [[attribute(2)]];
    float fog [[attribute(3)]];
};

struct VertexOut
{
    float4 position [[position]];
    float4 color [[center_no_perspective]];
    float3 stq [[center_no_perspective]];
    float fog [[center_no_perspective]];
    float pointSize [[point_size]];
};

vertex VertexOut vertexMain(VertexIn in [[stage_in]], constant Uniforms &u [[buffer(1)]])
{
    VertexOut out;
    // The GS samples a pixel at its integer coordinate, the GPU at the centre: half a pixel of shift makes
    // both cover the same pixels.
    out.position = float4((in.position.x + 0.5) / u.targetWidth * 2.0 - 1.0, 1.0 - (in.position.y + 0.5) / u.targetHeight * 2.0, in.position.z, 1.0);
    out.color = in.color;
    out.stq = in.stq;
    out.fog = in.fog;
    out.pointSize = u.pointSize;
    return out;
}

// A render target's alpha channel used as an 8-bit texture: palette lookup per texel, filtered afterwards as the GS does.
static float4 indexedTexel(texture2d<float> tex, texture2d<float> palette, float2 at, float2 size, uint paletteScale)
{
    uint2 where = uint2(clamp(at, float2(0.0), size - 1.0));
    uint index = uint(round(tex.read(where).a * 255.0));
    // The palette texture keeps the layout it has in VRAM: 16x16, with the two middle index bits swapped.
    uint entry = (index & 0xE7u) | ((index & 0x08u) << 1) | ((index & 0x10u) >> 1);
    return round(palette.read(uint2(entry & 15u, entry >> 4) * paletteScale + paletteScale / 2) * 255.0);
}

struct QuadOut
{
    float4 position [[position]];
};

vertex QuadOut quadVertex(uint id [[vertex_id]])
{
    QuadOut out;
    out.position = float4(id == 1 ? 3.0 : -1.0, id == 2 ? 3.0 : -1.0, 0.0, 1.0);
    return out;
}

// A target's alpha copied into an indexed texture: through a PSMT4HH view into a 4-bit one (the top four bits,
// origin.z = 16) or through a PSMT8H view into an 8-bit one (the whole byte, origin.z = 1). The index is kept in
// alpha, where the indexed path reads it.
fragment float4 alphaNibbleFragment(QuadOut in [[stage_in]], texture2d<float> source [[texture(0)]], constant uint4 &origin [[buffer(1)]])
{
    const float a = round(source.read(uint2(in.position.xy) + origin.xy).a * 255.0);
    return float4(0.0, 0.0, 0.0, floor(a / float(origin.z)) / 255.0);
}

// A depth buffer read as a colour texture: the 24-bit Z as the GS memory holds it (low byte in red), alpha 0.
fragment float4 depthAsColorFragment(QuadOut in [[stage_in]], depth2d<float> depth [[texture(0)]])
{
    const float d = depth.read(uint2(in.position.xy));
    const uint z = uint(clamp(round(d * 16777216.0), 0.0, 16777215.0));
    return float4(float(z & 255u), float((z >> 8) & 255u), float(z >> 16), 0.0) / 255.0;
}

// The target seen as 16-bit pixels: each 32-bit pixel is two of them (red+green, blue+alpha). A full-screen copy
// in that view moves one half of the source word into one half of the destination word, under a write mask.
fragment float4 shuffleFragment(QuadOut in [[stage_in]], float4 destination [[color(0)]], depth2d<float> depth [[texture(0)]], constant ShuffleUniforms &u [[buffer(1)]])
{
    uint4 d = uint4(round(destination * 255.0));
    uint word = d.r | (d.g << 8) | (d.b << 16) | (d.a << 24);
    uint source = word;
    if (u.sourceIsDepth != 0) source = uint(depth.read(uint2(in.position.xy)) * 16777216.0 + 0.5);
    uint from = (source >> (16 * u.sourceHalf)) & 0xFFFFu;
    uint shift = 16 * u.destinationHalf;
    uint old = (word >> shift) & 0xFFFFu;
    uint merged = (old & u.mask16) | (from & ~u.mask16 & 0xFFFFu);
    word = (word & ~(0xFFFFu << shift)) | (merged << shift);
    return float4(float(word & 255u), float((word >> 8) & 255u), float((word >> 16) & 255u), float(word >> 24)) / 255.0;
}

struct PresentUniforms
{
    float originX, originY, scaleX, scaleY;
    float fxaa; // 1: smooth polygon edges (luminance-contrast edge filter), 0: plain sampling
    float gamma, brightness; // display adjustment: out = (c ^ (1 / gamma)) * brightness
    float sharpen; // 0..1: contrast-adaptive sharpening (after AMD's CAS), 0 off
    float useScene; // 1: texture 1 holds the picture of the frame's 3D part, before the game's 2D work (Target::scene)
    float useAo;    // 1: that picture's alpha holds ambient occlusion (aoFragment), 1 = open, 0 = fully occluded
    float areaFilter; // 1: reduce the picture to the window by area (presentPicture)
    float gamePixelX, gamePixelY; // one pixel of the game's resolution, in texture coordinates
};

struct AoUniforms
{
    float radius;   // pixels of the (enlarged) Z buffer
    float strength; // 0..1
    float factor;   // Z buffer pixels per pixel drawn: the occlusion is worked out at the game's own resolution
    float zLimit;   // Z at or above this is not geometry (beyond the Z buffer's format)
};

// Ambient occlusion from the Z buffer alone, which works without knowing the game's projection: the GS interpolates Z
// linearly across the screen, so on any flat surface the mean of two points on opposite sides of a pixel is that
// pixel's own Z. Where the mean comes out in front (a larger Z: nearer) the surface folds towards the viewer around the
// pixel, a corner or a crease, and the pixel is occluded in proportion. Pairs that straddle a large jump in depth (an
// outline against the background) are left out, which is what keeps halos off silhouettes. Differences are relative to
// the pixel's own Z (with perspective Z ~ 1/w they are relative distances), and never finer than the Z the game's vertices
// carry (whole units).
// Soft shadows (optional): the game builds its flashlight shadow as an on/off mask in the frame's alpha (a depth test
// against an 8-bit light-view depth, done with alpha tests), so its edges are hard steps. Before the light pass reads
// the mask, it is averaged over six samples on two radii, each weighted by how close its Z is to this pixel's, so light
// does not spread from one surface onto another. u.x: radius in pixels; u.y: strength.
fragment float4 softMaskFragment(QuadOut in [[stage_in]], texture2d<float> mask [[texture(0)]], depth2d<float> depth [[texture(1)]], constant float4 &u [[buffer(1)]])
{
    const int2 p = int2(in.position.xy), last = int2(mask.get_width(), mask.get_height()) - 1;
    const float a0 = mask.read(uint2(p)).a;
    const float z0 = depth.read(uint2(p)) * 16777216.0;
    float sum = a0, weight = 1.0;
    for (int i = 0; i < 6; ++i)
    {
        const float ring = (i & 1) != 0 ? 0.55 : 1.0; // alternating radii: two rings' worth of coverage from six taps
        const float a = float(i) * 1.0471976;
        const int2 q = clamp(p + int2(round(float2(cos(a), sin(a)) * u.x * ring)), int2(0), last);
        const float z = depth.read(uint2(q)) * 16777216.0;
        const float w = 1.0 / (1.0 + abs(z - z0) / max(z0, 1.0) * 400.0);
        sum += mask.read(uint2(q)).a * w;
        weight += w;
    }
    return float4(0.0, 0.0, 0.0, mix(a0, sum / weight, u.y));
}

// The nearest Z of the frame, for scaling the occlusion with distance: 8x8 maxima in steps down to one pixel, as 24-bit Z
// in the colour channels (the first step reads the Z buffer). Z beyond what the Z buffer's format holds (u.x: 65536
// for the 16-bit formats Silent Hill Origins uses) is not geometry but other data in that memory, and is left out.
float4 aoEncodeZ(float z) { const uint v = uint(clamp(z, 0.0, 16777215.0)); return float4(float(v & 255u), float((v >> 8) & 255u), float(v >> 16), 255.0) / 255.0; }
float aoDecodeZ(float4 c) { const uint3 b = uint3(round(c.rgb * 255.0)); return float(b.r | (b.g << 8) | (b.b << 16)); }
// u.y: the block size of this first step (8 pixels of the game's resolution: 8 x the enlargement); u.z: the
// enlargement. One sample per pixel of the game's (its centre): reading every pixel of an enlarged block was 1024
// reads per output at 4x, several milliseconds for a reference that does not need them.
fragment float4 aoReduceDepthFragment(QuadOut in [[stage_in]], depth2d<float> depth [[texture(0)]], constant float4 &u [[buffer(1)]])
{
    const int block = int(u.y), stride = max(int(u.z), 1), n = block / stride;
    const int2 last = int2(depth.get_width(), depth.get_height()) - 1, base = int2(in.position.xy) * block + stride / 2;
    float z = 0.0;
    for (int y = 0; y < n; ++y)
        for (int x = 0; x < n; ++x)
        {
            const float v = depth.read(uint2(min(base + int2(x, y) * stride, last))) * 16777216.0;
            if (v < u.x)
                z = max(z, v);
        }
    return aoEncodeZ(z);
}
// u.y: the block size (8, or the whole source for the last step). u.w = 1: the mean of the non-zero values instead
// of the largest (the last step, after aoMedianFragment).
fragment float4 aoReduceFragment(QuadOut in [[stage_in]], texture2d<float> source [[texture(0)]], constant float4 &u [[buffer(1)]])
{
    const int n = int(u.y);
    const int2 last = int2(source.get_width(), source.get_height()) - 1, base = int2(in.position.xy) * n;
    float z = 0.0, sum = 0.0, count = 0.0;
    for (int y = 0; y < n; ++y)
        for (int x = 0; x < n; ++x)
        {
            const float v = aoDecodeZ(source.read(uint2(min(base + int2(x, y), last))));
            z = max(z, v);
            sum += v;
            count += v > 0.0 ? 1.0 : 0.0;
        }
    return aoEncodeZ(u.w > 0.5 ? (count > 0.0 ? sum / count : 0.0) : z);
}

// The reference: the mean of the middle half of the 64x64-pixel blocks' nearest Z (the source is about 8x7 of them),
// so that one object right in front of the camera (Silent Hill Origins' flashlight volume) does not set it. Each block
// works out its own rank, in parallel, and keeps its Z if it is in the middle half; the next step averages those.
// The median it replaces jumped between two values when the picture was half one surface and half another (a wall and
// the street in front of it), and the occlusion of the whole picture stepped with it while the camera barely moved.
fragment float4 aoMedianFragment(QuadOut in [[stage_in]], texture2d<float> source [[texture(0)]])
{
    const int w = int(source.get_width()), h = int(source.get_height());
    const float v = aoDecodeZ(source.read(uint2(in.position.xy)));
    if (v <= 0.0)
        return aoEncodeZ(0.0);
    int valid = 0, below = 0;
    for (int y = 0; y < h; ++y)
        for (int x = 0; x < w; ++x)
        {
            const float o = aoDecodeZ(source.read(uint2(x, y)));
            valid += o > 0.0 ? 1 : 0;
            below += (o > 0.0 && o < v) ? 1 : 0;
        }
    const int lo = valid / 4, hi = max((3 * valid) / 4, lo);
    return aoEncodeZ(below >= lo && below <= hi ? v : 0.0);
}

// The reference followed over time: the median jumps from frame to frame as the camera moves (another block's Z
// becomes the middle one), and the radius and fade of the whole picture jumped with it, so the occlusion in corners
// pulsed. It now moves a fraction of the way each frame (u.x), and jumps only on a cut (more than 25% off).
fragment float4 aoSmoothFragment(QuadOut in [[stage_in]], texture2d<float> current [[texture(0)]], texture2d<float> previous [[texture(1)]], constant float4 &u [[buffer(1)]])
{
    const float now = aoDecodeZ(current.read(uint2(0))), before = aoDecodeZ(previous.read(uint2(0)));
    if (before <= 0.0 || now <= 0.0 || now > before * 1.25 || now < before * 0.8)
        return aoEncodeZ(now);
    return aoEncodeZ(before + (now - before) * u.x);
}

fragment float4 aoFragment(QuadOut in [[stage_in]], depth2d<float> depth [[texture(0)]], texture2d<float> nearest [[texture(1)]], constant AoUniforms &u [[buffer(1)]])
{
    const int f = int(u.factor);
    const int2 last = int2(depth.get_width(), depth.get_height()) - 1;
    const int2 p = min(int2(in.position.xy) * f + f / 2, last);
    const float zc = depth.read(uint2(p)) * 16777216.0;
    if (zc < 4.0 || zc >= u.zLimit)
        return float4(0.0, 0.0, 0.0, 1.0); // nothing drawn (sky, cleared) or masked off
    // Distance against the nearest thing in the frame (with perspective Z ~ 1/w, zc / zNear ~ wNear / w): the radius
    // shrinks with distance as objects do, and the occlusion fades out far away (where the fog is in Silent Hill),
    // instead of blotches of the near objects' size over small distant ones.
    const float zNear = max(aoDecodeZ(nearest.read(uint2(0))), zc);
    const float q = zc / zNear;
    const float fade = smoothstep(0.12, 0.35, q);
    if (fade <= 0.0)
        return float4(0.0, 0.0, 0.0, 1.0);
    const float radius = u.radius * clamp(q, 0.2, 1.0);
    const float minRel = max(0.002, 1.5 / zc), maxRel = 0.15;
    const float spin = fract(52.9829189 * fract(0.06711056 * float(p.x) + 0.00583715 * float(p.y))) * 6.2831853;
    float occlusion = 0.0, weight = 0.0;
    for (int i = 0; i < 12; ++i)
    {
        const float t = (float(i) + 0.5) / 12.0;
        const float a = spin + float(i) * 2.39996323;
        const float2 offset = float2(cos(a), sin(a)) * (radius * sqrt(t));
        const float z1 = depth.read(uint2(clamp(p + int2(round(offset)), int2(0), last))) * 16777216.0;
        const float z2 = depth.read(uint2(clamp(p - int2(round(offset)), int2(0), last))) * 16777216.0;
        if (abs(z1 - zc) > maxRel * zc || abs(z2 - zc) > maxRel * zc || z1 < 4.0 || z2 < 4.0 || z1 >= u.zLimit || z2 >= u.zLimit)
            continue;
        const float rel = ((z1 + z2) * 0.5 - zc) / zc;
        occlusion += smoothstep(minRel, minRel * 6.0, rel) * (1.0 - smoothstep(maxRel * 0.3, maxRel, rel)); // far in front: less
        weight += 1.0;
    }
    // Trusted only where most pairs were usable: alpha-tested foliage breaks the depth up into specks, and the few pairs
    // left there made a speckled occlusion that shimmered as the camera moved.
    const float confidence = smoothstep(7.0, 11.0, weight);
    const float ao = weight > 0.0 ? 1.0 - u.strength * fade * confidence * occlusion / weight : 1.0;
    return float4(0.0, 0.0, 0.0, saturate(ao));
}

// The occlusion worked out at the game's resolution, filtered up into the alpha of the full-size scene copy: of the four
// nearest low-resolution samples, each counts by its bilinear weight and by how close its depth is to this pixel's,
// so occlusion does not spill across outlines (a joint bilateral upsample).
fragment float4 aoUpsampleFragment(QuadOut in [[stage_in]], texture2d<float> ao [[texture(0)]], depth2d<float> depth [[texture(1)]], constant float4 &u [[buffer(1)]])
{
    const int f = int(u.x);
    const int2 lastAo = int2(ao.get_width(), ao.get_height()) - 1, lastZ = int2(depth.get_width(), depth.get_height()) - 1;
    const float z = depth.read(uint2(in.position.xy)) * 16777216.0;
    const float2 base = in.position.xy / float(f) - 0.5;
    const int2 i0 = int2(floor(base));
    const float2 fr = base - float2(i0);
    float sum = 0.0, weight = 0.0;
    for (int k = 0; k < 4; ++k)
    {
        const int2 i = clamp(i0 + int2(k & 1, k >> 1), int2(0), lastAo);
        const float zs = depth.read(uint2(min(i * f + f / 2, lastZ))) * 16777216.0;
        const float bil = ((k & 1) != 0 ? fr.x : 1.0 - fr.x) * ((k >> 1) != 0 ? fr.y : 1.0 - fr.y);
        const float w = bil / (1e-3 + abs(zs - z) / max(z, 1.0) * 50.0) + 1e-6;
        sum += ao.read(uint2(i)).a * w;
        weight += w;
    }
    return float4(0.0, 0.0, 0.0, sum / weight);
}

// Post-processing reads without derivatives (level 0): they are often made in control flow that only some pixels of a
// 2x2 quad take (an early return, a search loop), where implicit derivatives are undefined, and the linear sampler is
// anisotropic: the footprint, and so the result, then changed from run to run.
float4 sampleL0(texture2d<float> t, sampler s, float2 uv) { return t.sample(s, uv, level(0.0)); }

float4 presentAdjust(float3 c, constant PresentUniforms &u)
{
    return float4(saturate(pow(max(c, 0.0), float3(1.0 / u.gamma)) * u.brightness), 1.0);
}

float presentLuma(float3 c)
{
    return dot(c, float3(0.299, 0.587, 0.114));
}

// The displayed part of a target, drawn at the window's own pixel size. With fxaa on, an edge (a strong luminance step
// against the four neighbours) is blended along its direction, which smooths the stair steps of polygon edges.
//
// Sharpening: each channel is pushed away from its four neighbours by a weight that shrinks where the neighbourhood
// already has strong contrast (so edges do not ring and flat noise is not amplified), as AMD's CAS does.
float3 presentSharpen(float3 c, float3 n, float3 s, float3 w, float3 e, float amount)
{
    const float3 mn = min(c, min(min(n, s), min(w, e)));
    const float3 mx = max(c, max(max(n, s), max(w, e)));
    const float3 amp = sqrt(saturate(min(mn, 1.0 - mx) / max(mx, 1e-4)));
    const float3 weight = -amp * mix(0.125, 0.2, amount);
    return saturate((c + (n + s + w + e) * weight) / (1.0 + 4.0 * weight));
}

// The change an effect makes to the 3D picture, carried over to the shown one where the game's later 2D work kept that
// picture: film grain changes a pixel a little and darkening overlays and fades scale it (the change is scaled the same
// way), while the HUD and menus replace it (no change there). k, the scale, comes from the neighbourhood (shownAround,
// sceneAround: means over a few pixels of the game's): the grain adds and subtracts around zero, and taken per pixel it
// made k swing from 0.4 to 1 in dark areas from frame to frame (Silent Hill Origins' cutscenes: flickering occlusion).
float3 presentSceneDelta(float3 shown, float3 scene, float3 changed, float3 shownAround, float3 sceneAround)
{
    const float k = clamp(presentLuma(shownAround) / max(presentLuma(sceneAround), 1.0 / 255.0), 0.0, 1.0);
    const float3 d = abs(shown - scene * k);
    return (changed - scene) * k * (1.0 - smoothstep(0.06, 0.16, max(d.r, max(d.g, d.b))));
}

// The picture reduced to the window: when the internal resolution is larger than the window (4x of the game in a
// 1080p window: 1.6 texels per pixel), one bilinear sample per pixel skipped texels, which brought back some of the
// aliasing and shimmer the higher resolution had removed. Each pixel averages the whole area it covers instead (up to
// 4x4 bilinear samples spread over it), as a supersampled picture should be resolved. u.areaFilter = 0: one sample.
float3 presentPicture(texture2d<float> tex, sampler smp, float2 uv, constant PresentUniforms &u)
{
    const float2 footprint = float2(u.scaleX, u.scaleY), texels = footprint * float2(tex.get_width(), tex.get_height());
    if (u.areaFilter == 0.0 || (texels.x <= 1.01 && texels.y <= 1.01))
        return sampleL0(tex, smp, uv).rgb;
    const int2 n = clamp(int2(ceil(texels * 0.5 - 0.01)) * 2, int2(1), int2(4)); // bilinear taps each cover two texels
    float3 sum = float3(0.0);
    for (int y = 0; y < n.y; ++y)
        for (int x = 0; x < n.x; ++x)
            sum += sampleL0(tex, smp, uv + ((float2(x, y) + 0.5) / float2(n) - 0.5) * footprint).rgb;
    return sum / float(n.x * n.y);
}

fragment float4 presentFragment(QuadOut in [[stage_in]], texture2d<float> tex [[texture(0)]], texture2d<float> scene [[texture(1)]], sampler smp [[sampler(0)]], constant PresentUniforms &u [[buffer(1)]])
{
    const float2 uv = float2(u.originX, u.originY) + in.position.xy * float2(u.scaleX, u.scaleY);
    float3 c = presentPicture(tex, smp, uv, u);
    if (u.fxaa == 0.0 && u.sharpen == 0.0 && u.useAo == 0.0)
        return presentAdjust(c, u);
    const float2 texel = 1.0 / float2(tex.get_width(), tex.get_height());
    const float3 cN = sampleL0(tex, smp, uv + float2(0.0, -texel.y)).rgb;
    const float3 cS = sampleL0(tex, smp, uv + float2(0.0, texel.y)).rgb;
    const float3 cW = sampleL0(tex, smp, uv + float2(-texel.x, 0.0)).rgb;
    const float3 cE = sampleL0(tex, smp, uv + float2(texel.x, 0.0)).rgb;
    const float3 original = c;
    if (u.useScene != 0.0 && (u.sharpen != 0.0 || u.useAo != 0.0))
    {
        const float4 s = sampleL0(scene, smp, uv);
        const float4 sN = sampleL0(scene, smp, uv + float2(0.0, -texel.y)), sS = sampleL0(scene, smp, uv + float2(0.0, texel.y));
        const float4 sW = sampleL0(scene, smp, uv + float2(-texel.x, 0.0)), sE = sampleL0(scene, smp, uv + float2(texel.x, 0.0));
        float3 changed = s.rgb;
        if (u.sharpen != 0.0)
            changed = presentSharpen(s.rgb, sN.rgb, sS.rgb, sW.rgb, sE.rgb, u.sharpen);
        if (u.useAo != 0.0)
        {
            // The occlusion is noisy per pixel (a few rotated samples): a small blur, across 2-texel steps.
            const float2 t2 = texel * 2.0;
            const float ao = (s.a * 2.0 + sampleL0(scene, smp, uv + float2(t2.x, t2.y)).a + sampleL0(scene, smp, uv + float2(-t2.x, t2.y)).a +
                              sampleL0(scene, smp, uv + float2(t2.x, -t2.y)).a + sampleL0(scene, smp, uv + float2(-t2.x, -t2.y)).a + sN.a + sS.a + sW.a + sE.a) / 10.0;
            changed *= ao;
        }
        float3 shownAround = c, sceneAround = s.rgb;
        for (int i = 0; i < 4; ++i)
        {
            const float2 o = float2((i & 1) != 0 ? 1.0 : -1.0, (i & 2) != 0 ? 1.0 : -1.0) * float2(u.gamePixelX, u.gamePixelY);
            shownAround += sampleL0(tex, smp, uv + o).rgb;
            sceneAround += sampleL0(scene, smp, uv + o).rgb;
        }
        c = saturate(c + presentSceneDelta(c, s.rgb, changed, shownAround * 0.2, sceneAround * 0.2));
    }
    else if (u.sharpen != 0.0)
        c = presentSharpen(c, cN, cS, cW, cE, u.sharpen);
    if (u.fxaa == 0.0)
        return presentAdjust(c, u);
    const float lC = presentLuma(original);
    const float lN = presentLuma(cN), lS = presentLuma(cS), lW = presentLuma(cW), lE = presentLuma(cE);
    const float lMin = min(lC, min(min(lN, lS), min(lW, lE)));
    const float lMax = max(lC, max(max(lN, lS), max(lW, lE)));
    const float range = lMax - lMin;
    if (range < max(0.0625, lMax * 0.125))
        return presentAdjust(c, u); // flat area: no smoothing
    // Edge direction: across the larger luminance gradient; blend two samples along the edge.
    const float2 gradient = float2((lW + lE) - 2.0 * lC, (lN + lS) - 2.0 * lC);
    const float2 along = abs(gradient.x) > abs(gradient.y) ? float2(0.0, texel.y) : float2(texel.x, 0.0);
    const float3 a = sampleL0(tex, smp, uv + along * 0.5).rgb;
    const float3 b = sampleL0(tex, smp, uv - along * 0.5).rgb;
    const float3 across1 = sampleL0(tex, smp, uv + (along.x > 0.0 ? float2(0.0, texel.y) : float2(texel.x, 0.0)) * 0.5).rgb;
    const float3 across2 = sampleL0(tex, smp, uv - (along.x > 0.0 ? float2(0.0, texel.y) : float2(texel.x, 0.0)) * 0.5).rgb;
    const float strength = saturate(range / max(lMax, 1e-4) * 2.0);
    const float3 smoothed = (a + b) * 0.375 + (across1 + across2) * 0.125;
    return presentAdjust(mix(c, smoothed, strength * 0.75), u);
}

// ---- SMAA 1x (Jimenez et al., "SMAA: Enhanced Subpixel Morphological Antialiasing", MIT licence; third_party/smaa) ----
// The three passes of the reference implementation at its ULTRA preset (threshold 0.05, 32 search steps, corner
// rounding 25), without diagonal detection. Texture coordinates are top-left based as in the reference (DX). The area
// and search tables share one texture (smaaTables): the area table in rows 0-559, the search table below it, read
// texel by texel (every lookup lands on texel centres, so this equals the reference's filtered reads).
// Rounding is to the nearest even integer, as HLSL's round() (the reference's) does: many SMAA values are exact halves.
constant float SMAA_THRESHOLD = 0.05;
constant float SMAA_MAX_SEARCH_STEPS = 32.0;
constant float SMAA_CORNER_ROUNDING_NORM = 0.25;
constant float SMAA_LOCAL_CONTRAST = 2.0;

struct SmaaUniforms { float4 metrics; float4 flags; }; // metrics: 1/width, 1/height, width, height; flags.x: 1 = texture 1 is the scene copy

float smaaLuma(float3 c) { return dot(c, float3(0.2126, 0.7152, 0.0722)); }

// Luma edges at uv (the reference's luma edge detection with local contrast adaptation).
float2 smaaEdges(texture2d<float> color, sampler smp, float2 uv, float2 px)
{
    const float L = smaaLuma(sampleL0(color, smp, uv).rgb);
    const float Lleft = smaaLuma(sampleL0(color, smp, uv + float2(-px.x, 0.0)).rgb);
    const float Ltop = smaaLuma(sampleL0(color, smp, uv + float2(0.0, -px.y)).rgb);
    float4 delta;
    delta.xy = abs(L - float2(Lleft, Ltop));
    float2 edges = step(float2(SMAA_THRESHOLD), delta.xy);
    if (edges.x + edges.y == 0.0)
        return float2(0.0);
    const float Lright = smaaLuma(sampleL0(color, smp, uv + float2(px.x, 0.0)).rgb);
    const float Lbottom = smaaLuma(sampleL0(color, smp, uv + float2(0.0, px.y)).rgb);
    delta.zw = abs(L - float2(Lright, Lbottom));
    float2 maxDelta = max(delta.xy, delta.zw);
    const float Lleftleft = smaaLuma(sampleL0(color, smp, uv + float2(-2.0 * px.x, 0.0)).rgb);
    const float Ltoptop = smaaLuma(sampleL0(color, smp, uv + float2(0.0, -2.0 * px.y)).rgb);
    delta.zw = abs(float2(Lleft, Ltop) - float2(Lleftleft, Ltoptop));
    maxDelta = max(maxDelta.xy, delta.zw);
    const float finalDelta = max(maxDelta.x, maxDelta.y);
    return edges * step(finalDelta, SMAA_LOCAL_CONTRAST * delta.xy);
}

// With the frame's 3D picture at hand an edge must be one in both pictures: film grain makes edges only in the shown
// one, and an edge of the 3D under the HUD is not one in the shown picture (the HUD is not smoothed along it).
fragment float4 smaaEdgeFragment(QuadOut in [[stage_in]], texture2d<float> color [[texture(0)]], texture2d<float> scene [[texture(1)]], sampler smp [[sampler(0)]], constant SmaaUniforms &u [[buffer(1)]])
{
    const float2 uv = in.position.xy * u.metrics.xy, px = u.metrics.xy;
    float2 edges = smaaEdges(color, smp, uv, px);
    if (u.flags.x != 0.0 && edges.x + edges.y != 0.0)
        edges *= smaaEdges(scene, smp, uv, px);
    return float4(edges, 0.0, 0.0);
}

float smaaSearchLength(texture2d<float> tables, float2 e, float offset)
{
    // The reference's scale and bias into the 66x33 table, packed as 64x16.
    const float2 scale = float2(66.0 * 0.5 - 1.0, -33.0 + 1.0), bias = float2(66.0 * offset + 0.5, 33.0 - 0.5);
    const float2 t = (scale * e + bias); // in texels of the packed table
    const int2 i = clamp(int2(floor(t)), int2(0), int2(63, 15));
    return tables.read(uint2(i + int2(0, 560))).r;
}

float smaaSearchXLeft(texture2d<float> edges, texture2d<float> tables, sampler smp, float2 uv, float end, float2 px)
{
    float2 e = float2(0.0, 1.0);
    while (uv.x > end && e.g > 0.8281 && e.r == 0.0)
    {
        e = sampleL0(edges, smp, uv).rg;
        uv.x -= 2.0 * px.x;
    }
    const float offset = -(255.0 / 127.0) * smaaSearchLength(tables, e, 0.0) + 3.25;
    return px.x * offset + uv.x;
}
float smaaSearchXRight(texture2d<float> edges, texture2d<float> tables, sampler smp, float2 uv, float end, float2 px)
{
    float2 e = float2(0.0, 1.0);
    while (uv.x < end && e.g > 0.8281 && e.r == 0.0)
    {
        e = sampleL0(edges, smp, uv).rg;
        uv.x += 2.0 * px.x;
    }
    const float offset = -(255.0 / 127.0) * smaaSearchLength(tables, e, 0.5) + 3.25;
    return -px.x * offset + uv.x;
}
float smaaSearchYUp(texture2d<float> edges, texture2d<float> tables, sampler smp, float2 uv, float end, float2 px)
{
    float2 e = float2(1.0, 0.0);
    while (uv.y > end && e.r > 0.8281 && e.g == 0.0)
    {
        e = sampleL0(edges, smp, uv).rg;
        uv.y -= 2.0 * px.y;
    }
    const float offset = -(255.0 / 127.0) * smaaSearchLength(tables, e.gr, 0.0) + 3.25;
    return px.y * offset + uv.y;
}
float smaaSearchYDown(texture2d<float> edges, texture2d<float> tables, sampler smp, float2 uv, float end, float2 px)
{
    float2 e = float2(1.0, 0.0);
    while (uv.y < end && e.r > 0.8281 && e.g == 0.0)
    {
        e = sampleL0(edges, smp, uv).rg;
        uv.y += 2.0 * px.y;
    }
    const float offset = -(255.0 / 127.0) * smaaSearchLength(tables, e.gr, 0.5) + 3.25;
    return -px.y * offset + uv.y;
}

// The area table (160x560, two channels) read with bilinear filtering by hand.
float2 smaaArea(texture2d<float> tables, float2 dist, float e1, float e2)
{
    const float2 t = 16.0 * rint(4.0 * float2(e1, e2)) + dist; // texel coordinates (centres at +0.5)
    const float2 p = t; // already minus the half texel the reference adds back
    const int2 i = int2(floor(p));
    const float2 f = p - float2(i);
    const int2 hi = int2(159, 559);
    const float2 a = tables.read(uint2(clamp(i, int2(0), hi))).rg, b = tables.read(uint2(clamp(i + int2(1, 0), int2(0), hi))).rg;
    const float2 c = tables.read(uint2(clamp(i + int2(0, 1), int2(0), hi))).rg, d = tables.read(uint2(clamp(i + int2(1, 1), int2(0), hi))).rg;
    return mix(mix(a, b, f.x), mix(c, d, f.x), f.y);
}

fragment float4 smaaWeightFragment(QuadOut in [[stage_in]], texture2d<float> edges [[texture(0)]], texture2d<float> tables [[texture(1)]], sampler smp [[sampler(0)]], constant SmaaUniforms &u [[buffer(1)]])
{
    const float2 px = u.metrics.xy, uv = in.position.xy * px, pixcoord = in.position.xy;
    const float4 offset0 = uv.xyxy + px.xyxy * float4(-0.25, -0.125, 1.25, -0.125);
    const float4 offset1 = uv.xyxy + px.xyxy * float4(-0.125, -0.25, -0.125, 1.25);
    const float4 offset2 = float4(offset0.xz, offset1.yw) + px.xxyy * float4(-2.0, 2.0, -2.0, 2.0) * SMAA_MAX_SEARCH_STEPS;
    float4 weights = float4(0.0);
    const float2 e = sampleL0(edges, smp, uv).rg;
    if (e.g > 0.0) // an edge at the north
    {
        float3 coords;
        coords.x = smaaSearchXLeft(edges, tables, smp, offset0.xy, offset2.x, px);
        coords.y = offset1.y;
        float2 d;
        d.x = coords.x;
        const float e1 = sampleL0(edges, smp, coords.xy).r;
        coords.z = smaaSearchXRight(edges, tables, smp, offset0.zw, offset2.y, px);
        d.y = coords.z;
        d = abs(rint(u.metrics.zz * d - pixcoord.xx));
        const float e2 = sampleL0(edges, smp, coords.zy + float2(px.x, 0.0)).r;
        weights.rg = smaaArea(tables, sqrt(d), e1, e2);
        // Corner rounding.
        coords.y = uv.y;
        const float2 leftRight = step(d.xy, d.yx);
        float2 rounding = (1.0 - SMAA_CORNER_ROUNDING_NORM) * leftRight;
        rounding /= leftRight.x + leftRight.y;
        float2 factor = float2(1.0);
        factor.x -= rounding.x * sampleL0(edges, smp, coords.xy + px * float2(0.0, 1.0)).r;
        factor.x -= rounding.y * sampleL0(edges, smp, coords.zy + px * float2(1.0, 1.0)).r;
        factor.y -= rounding.x * sampleL0(edges, smp, coords.xy + px * float2(0.0, -2.0)).r;
        factor.y -= rounding.y * sampleL0(edges, smp, coords.zy + px * float2(1.0, -2.0)).r;
        weights.rg *= saturate(factor);
    }
    if (e.r > 0.0) // an edge at the west
    {
        float3 coords;
        coords.y = smaaSearchYUp(edges, tables, smp, offset1.xy, offset2.z, px);
        coords.x = offset0.x;
        float2 d;
        d.x = coords.y;
        const float e1 = sampleL0(edges, smp, coords.xy).g;
        coords.z = smaaSearchYDown(edges, tables, smp, offset1.zw, offset2.w, px);
        d.y = coords.z;
        d = abs(rint(u.metrics.ww * d - pixcoord.yy));
        const float e2 = sampleL0(edges, smp, coords.xz + float2(0.0, px.y)).g;
        weights.ba = smaaArea(tables, sqrt(d), e1, e2);
        coords.x = uv.x;
        const float2 leftRight = step(d.xy, d.yx);
        float2 rounding = (1.0 - SMAA_CORNER_ROUNDING_NORM) * leftRight;
        rounding /= leftRight.x + leftRight.y;
        float2 factor = float2(1.0);
        factor.x -= rounding.x * sampleL0(edges, smp, coords.xy + px * float2(1.0, 0.0)).g;
        factor.x -= rounding.y * sampleL0(edges, smp, coords.xz + px * float2(1.0, 1.0)).g;
        factor.y -= rounding.x * sampleL0(edges, smp, coords.xy + px * float2(-2.0, 0.0)).g;
        factor.y -= rounding.y * sampleL0(edges, smp, coords.xz + px * float2(-2.0, 1.0)).g;
        weights.ba *= saturate(factor);
    }
    return weights;
}

fragment float4 smaaBlendFragment(QuadOut in [[stage_in]], texture2d<float> color [[texture(0)]], texture2d<float> blend [[texture(1)]], sampler smp [[sampler(0)]], constant SmaaUniforms &u [[buffer(1)]])
{
    const float2 px = u.metrics.xy, uv = in.position.xy * px;
    float4 a;
    a.x = sampleL0(blend, smp, uv + float2(px.x, 0.0)).a; // right
    a.y = sampleL0(blend, smp, uv + float2(0.0, px.y)).g; // bottom
    a.wz = sampleL0(blend, smp, uv).xz;                   // top, left
    if (dot(a, float4(1.0)) < 1e-5)
        return sampleL0(color, smp, uv);
    const bool h = max(a.x, a.z) > max(a.y, a.w);
    const float4 blendingOffset = h ? float4(a.x, 0.0, a.z, 0.0) : float4(0.0, a.y, 0.0, a.w);
    float2 blendingWeight = h ? a.xz : a.yw;
    blendingWeight /= dot(blendingWeight, float2(1.0));
    const float4 blendingCoord = blendingOffset * float4(px, -px) + uv.xyxy;
    return blendingWeight.x * sampleL0(color, smp, blendingCoord.xy) + blendingWeight.y * sampleL0(color, smp, blendingCoord.zw);
}

struct DepthOut
{
    float depth [[depth(any)]];
};

// A depth buffer drawn to as if it were colour, textured with another depth buffer: a depth-to-depth copy.
fragment DepthOut depthCopyFragment(VertexOut in [[stage_in]], depth2d<float> source [[texture(0)]], sampler smp [[sampler(0)]], constant Uniforms &u [[buffer(1)]])
{
    DepthOut out;
    out.depth = source.sample(smp, in.stq.xy / in.stq.z * float2(u.texScaleU, u.texScaleV));
    return out;
}

struct DepthAndColorOut
{
    float4 color [[color(0)]];
    float depth [[depth(any)]];
};

// The same copy while ZBUF points at a colour target: the sprite's own Z lands there as pixel bytes (a clear in disguise).
fragment DepthAndColorOut depthCopyClearFragment(VertexOut in [[stage_in]], depth2d<float> source [[texture(0)]], sampler smp [[sampler(0)]], constant Uniforms &u [[buffer(1)]])
{
    DepthAndColorOut out;
    out.depth = source.sample(smp, in.stq.xy / in.stq.z * float2(u.texScaleU, u.texScaleV));
    uint word = uint(in.position.z * 16777216.0 + 0.5);
    out.color = float4(float(word & 255u), float((word >> 8) & 255u), float((word >> 16) & 255u), float(word >> 24)) / 255.0;
    return out;
}

static float4 shade(VertexOut in, float4 destination, texture2d<float> tex, texture2d<float> palette, sampler smp, constant Uniforms &u, bool hwBlend, thread float &factorOut)
{
#if defined(GS_TRIVIAL)
    return float4(in.color.rgb / 255.0, 1.0); // PS2X_GS_NATIVE_TRIVIAL=1: what rasterizing alone costs (diagnostic)
#endif
    // Everything below is in GS units: 0..255 per channel, alpha 128 meaning 1.0.
    float4 c = floor(in.color);
    if (S(tme) != 0)
    {
        float2 coordinate = in.stq.xy / in.stq.z;
        // How far the texture coordinate moves per pixel of ours (before the region modes bend it).
        const float2 stepX = dfdx(coordinate) * float2(u.texScaleU, u.texScaleV), stepY = dfdy(coordinate) * float2(u.texScaleU, u.texScaleV);
        if (S(wrapU) >= 2 || S(wrapV) >= 2)
        {
            // Region modes work on texel coordinates: clamp to [MIN, MAX], or (texel & MIN) | MAX (unfiltered).
            float2 texel = coordinate * float2(u.texWidth, u.texHeight);
            if (S(wrapU) == 2) texel.x = clamp(texel.x, u.minU + 0.5, u.maxU + 0.5);
            else if (S(wrapU) == 3) texel.x = float((int(floor(texel.x)) & int(u.minU)) | int(u.maxU)) + 0.5;
            else if (S(wrapU) == 4) texel.x = fract(coordinate.x) * u.texWidth;
            if (S(wrapV) == 2) texel.y = clamp(texel.y, u.minV + 0.5, u.maxV + 0.5);
            else if (S(wrapV) == 3) texel.y = float((int(floor(texel.y)) & int(u.minV)) | int(u.maxV)) + 0.5;
            else if (S(wrapV) == 4) texel.y = fract(coordinate.y) * u.texHeight;
            coordinate = texel / float2(u.texWidth, u.texHeight);
        }
        coordinate *= float2(u.texScaleU, u.texScaleV);
        float4 t;
        if (S(texSelf) != 0)
        {
            // The game re-reads the frame in place (each pixel reads itself): that is the destination pixel, with no
            // copy of the target and no break in the pass.
            if (S(texIndexed) != 0)
            {
                uint index = uint(round(destination.a * 255.0));
                uint entry = (index & 0xE7u) | ((index & 0x08u) << 1) | ((index & 0x10u) >> 1);
                t = round(palette.read(uint2(entry & 15u, entry >> 4) * u.paletteScale + u.paletteScale / 2) * 255.0);
            }
            else
                t = round(destination * 255.0);
        }
        else if (S(texIndexed) == 2)
        {
            // A 32-bit target read as 16-bit texels (PSMCT16S/16 view of the same memory): the palette slot holds a
            // 64x64 table giving, for each 16-bit texel of a page, the 32-bit pixel of that page holding it and
            // which half. paletteScale carries the buffer width, texBox the target's scale.
            const uint tbw = max(u.paletteScale, 1u), scale = max(u.texBox, 1u);
            const uint2 t16 = uint2(clamp(floor(coordinate * float2(u.texWidth, u.texHeight)), float2(0.0), float2(u.texWidth, u.texHeight) - 1.0));
            const uint page = (t16.x >> 6) + (t16.y >> 6) * tbw;
            const uint4 map = uint4(round(palette.read(uint2(t16.x & 63u, t16.y & 63u)) * 255.0));
            const uint2 p32 = uint2((page % tbw) * 64u + map.x, (page / tbw) * 32u + map.y);
            const uint2 at = min(p32 * scale + scale / 2u, uint2(tex.get_width() - 1, tex.get_height() - 1));
            const uint4 b = uint4(round(tex.read(at) * 255.0));
            const uint h = map.z != 0u ? (b.b | (b.a << 8)) : (b.r | (b.g << 8));
            t = float4(float((h & 31u) << 3), float(((h >> 5) & 31u) << 3), float(((h >> 10) & 31u) << 3), (h >> 15) != 0u ? 128.0 : float(u.ta0));
        }
        else if (S(texIndexed) != 0)
        {
            float2 size = float2(tex.get_width(), tex.get_height());
            float2 at = coordinate * size;
            if (S(texLinear) != 0)
            {
                at -= 0.5;
                float2 base = floor(at), f = at - base;
                float4 top = mix(indexedTexel(tex, palette, base, size, u.paletteScale), indexedTexel(tex, palette, base + float2(1.0, 0.0), size, u.paletteScale), f.x);
                float4 bottom = mix(indexedTexel(tex, palette, base + float2(0.0, 1.0), size, u.paletteScale), indexedTexel(tex, palette, base + float2(1.0, 1.0), size, u.paletteScale), f.x);
                t = floor(mix(top, bottom, f.y));
            }
            else
                t = indexedTexel(tex, palette, floor(at), size, u.paletteScale);
        }
        else
        {
            // The GS picks the mip level from Q, not from screen-space derivatives: (log2(1/Q) << L) + K, rounded.
            float lod = 0.0;
            if (HAS_LEVELS)
            {
                lod = LOD_FIXED ? u.lodK : log2(1.0 / abs(in.stq.z)) * u.lodScale + u.lodK;
                lod = clamp(floor(lod + 0.5), 0.0, float(u.maxLevel));
            }
            if (u.texReplaced != 0)
            {
                // A replacement from a texture pack: its own alpha is 0..255 (opaque = 255), the GS works in 0..128.
                t = round(tex.sample(smp, coordinate) * 255.0);
                t.a = floor(t.a * 128.0 / 255.0 + 0.5);
            }
            else if (S(texBox) > 1)
            {
                // A render target drawn larger, read with the GS's bilinear filter: the game counts on that filter
                // mixing neighbouring texels of its own size (it blurs by reading half a texel off). One of its
                // texels is texBox of ours across, so the same mix is the mean over that many of our samples.
                // Four filtered samples, a quarter of the game's texel away from the centre on each axis: together they
                // weigh the texBox x texBox texels of ours about evenly, at any scale (texBox squared samples would be
                // nine at 3x and sixteen at 4x, on passes that cover the whole screen).
                float2 reach = float(S(texBox)) * 0.25 / float2(tex.get_width(), tex.get_height());
                float4 sum = tex.sample(smp, coordinate + float2(-reach.x, -reach.y), level(0.0)) + tex.sample(smp, coordinate + float2(reach.x, -reach.y), level(0.0)) +
                             tex.sample(smp, coordinate + float2(-reach.x, reach.y), level(0.0)) + tex.sample(smp, coordinate + float2(reach.x, reach.y), level(0.0));
                t = round(sum * 0.25 * 255.0);
            }
#if !defined(GS_HW_BILINEAR)
            else if (S(texLinear) != 0 && lod == 0.0)
            {
                // The GS's bilinear filter: weights in sixteenths of a texel, the result truncated. The hardware filter
                // (finer weights, rounded) comes out a little higher, which Silent Hill Origins' flashlight turns into
                // shadow stripes: it compares a filtered depth ramp against its shadow map by subtracting them.
                const float2 size = float2(tex.get_width(), tex.get_height());
                const float2 at = coordinate * size - 0.5;
                const float2 snapped = (floor(at) + floor(fract(at) * 16.0) / 16.0 + 0.5) / size;
                t = floor(tex.sample(smp, snapped, level(0.0)) * 255.0 + 1.0 / 64.0);
            }
#endif
#if !defined(GS_NO_DOWNFILTER)
            else if (u.nativeTexel != 0u && lod == 0.0 && max(length(stepX * float2(tex.get_width(), tex.get_height())), length(stepY * float2(tex.get_width(), tex.get_height()))) * u.pointSize > 1.05)
            {
                // A texture drawn smaller than it is, unfiltered: at the game's resolution each pixel shows one texel out
                // of several and the fine detail drops out; drawn larger, every texel shows. Silent Hill Origins' map is
                // built from 16x16 tiles drawn about half size, and showed their dotted edges as broken lines. Here a
                // pixel averages the texels one pixel of the game's covers (spread a little less, so the edge of a tile
                // does not reach into its neighbour in the atlas).
                // The texel the game's own pixel would show: the coordinate at the centre of the game pixel this pixel
                // belongs to, so detail the GS skips stays skipped (measured: 4x then sampled = the 1x picture).
                const float scale = u.pointSize;
                const float2 offset = (floor(in.position.xy / scale) + 0.5) * scale - in.position.xy;
                t = round(tex.sample(smp, coordinate + stepX * offset.x + stepY * offset.y, level(0.0)) * 255.0);
            }
#endif
            else
                t = round(tex.sample(smp, coordinate, level(lod)) * 255.0);
        }
        if (S(texAlphaFixed) != 0) t.a = float(u.ta0);
        float3 modulated = min(floor(t.rgb * c.rgb / 128.0), 255.0);
        if (S(tfx) == 0)
        {
            c.rgb = modulated;
            if (S(tcc) != 0) c.a = min(floor(t.a * c.a / 128.0), 255.0);
        }
        else if (S(tfx) == 1)
        {
            c.rgb = t.rgb;
            if (S(tcc) != 0) c.a = t.a;
        }
        else
        {
            c.rgb = min(modulated + c.a, 255.0);
            if (S(tcc) != 0) c.a = S(tfx) == 2 ? min(t.a + c.a, 255.0) : t.a;
        }
    }
    if (S(fge) != 0)
    {
        float f = floor(in.fog);
        c.rgb = floor((c.rgb * f + float3(u.fogR, u.fogG, u.fogB) * (256.0 - f)) / 256.0);
    }
    if (S(alphaMode) != 0)
    {
        float a = c.a, r = float(u.aref);
        bool pass = S(atst) == 0 ? false : S(atst) == 1 ? true : S(atst) == 2 ? a < r : S(atst) == 3 ? a <= r : S(atst) == 4 ? a == r : S(atst) == 5 ? a >= r : S(atst) == 6 ? a > r : a != r;
        if (pass != (S(alphaMode) == 1)) discard_fragment();
    }
    if (hwBlend)
    {
        // Fixed-function blending (see gs_shaders.glsl, STAGE_FS_HWBLEND): |ks| * Cs, and the factor C/128 apart.
        float f = 1.0, ks = 1.0;
        if (S(abe) != 0)
        {
            // C from the target's alpha is applied by the blend unit (DestinationAlpha): f = 1 here.
            const float C = S(blendC) == 0 ? c.a : S(blendC) == 1 ? 128.0 : float(u.fix);
            f = C / 128.0;
            ks = (S(blendA) == 0 ? f : 0.0) - (S(blendB) == 0 ? f : 0.0) + (S(blendD) == 0 ? 1.0 : 0.0);
        }
        const float alphaOut = S(fba) != 0 && c.a < 128.0 ? c.a + 128.0 : c.a;
        factorOut = f;
        // The GS truncates (A - B) * C / 128 where the blend unit rounds the sum to nearest: when both terms add,
        // 0.49 less makes the rounding land where the truncation does.
        const float kd = (S(blendA) == 1 ? f : 0.0) - (S(blendB) == 1 ? f : 0.0) + (S(blendD) == 1 ? 1.0 : 0.0);
        const float bias = S(abe) != 0 && ks >= 0.0 && kd >= 0.0 && f != 1.0 && f != 0.0 ? 0.49 : 0.0;
        return float4(clamp(c.rgb * abs(ks) - bias, 0.0, 255.0), clamp(alphaOut, 0.0, 255.0)) / 255.0;
    }
    float4 d = round(destination * 255.0);
    if (S(writeMode) == 1) return destination;
    float3 rgb = c.rgb;
    if (S(abe) != 0)
    {
        float3 A = S(blendA) == 0 ? c.rgb : S(blendA) == 1 ? d.rgb : float3(0.0);
        float3 B = S(blendB) == 0 ? c.rgb : S(blendB) == 1 ? d.rgb : float3(0.0);
        float C = S(blendC) == 0 ? c.a : S(blendC) == 1 ? (S(destinationHasAlpha) != 0 ? d.a : 128.0) : float(u.fix);
        float3 D = S(blendD) == 0 ? c.rgb : S(blendD) == 1 ? d.rgb : float3(0.0);
        rgb = floor((A - B) * C / 128.0) + D;
    }
    rgb = S(colclamp) != 0 ? clamp(rgb, 0.0, 255.0) : rgb - 256.0 * floor(rgb / 256.0);
    float alpha = S(fba) != 0 && c.a < 128.0 ? c.a + 128.0 : c.a;
    if (S(writeMode) == 2) alpha = d.a;
    uint4 o = uint4(float4(rgb, clamp(alpha, 0.0, 255.0)));
    if (HAS_MASK)
    {
        uint packed = o.r | (o.g << 8) | (o.b << 16) | (o.a << 24);
        uint4 di = uint4(d);
        uint old = di.r | (di.g << 8) | (di.b << 16) | (di.a << 24);
        packed = (packed & ~u.fbmask) | (old & u.fbmask);
        o = uint4(packed & 255, (packed >> 8) & 255, (packed >> 16) & 255, packed >> 24);
    }
    return float4(o) / 255.0;
}

// Reads the pixel it writes to (programmable blending): for everything the GS mixes with or masks against the frame.
fragment float4 fragmentMain(VertexOut in [[stage_in]], float4 destination [[color(0)]], texture2d<float> tex [[texture(0)]], texture2d<float> palette [[texture(1)]],
                             sampler smp [[sampler(0)]], constant Uniforms &u [[buffer(1)]])
{
    float unused = 0.0;
    return shade(in, destination, tex, palette, smp, u, false, unused);
}

// The same without that read, for draws that just replace the pixel (no blending, no write mask, not the
// second pass of an alpha test): the GPU can then drop hidden fragments instead of shading every layer in order.
fragment float4 fragmentOpaque(VertexOut in [[stage_in]], texture2d<float> tex [[texture(0)]], texture2d<float> palette [[texture(1)]],
                               sampler smp [[sampler(0)]], constant Uniforms &u [[buffer(1)]])
{
    float unused = 0.0;
    return shade(in, float4(0.0), tex, palette, smp, u, false, unused);
}

struct HwBlendOut
{
    float4 color [[color(0), index(0)]];
    float4 factor [[color(0), index(1)]];
};

// Fixed-function blending: the blend unit mixes with the target (no read of it here).
fragment HwBlendOut fragmentHwBlend(VertexOut in [[stage_in]], texture2d<float> tex [[texture(0)]], texture2d<float> palette [[texture(1)]],
                                    sampler smp [[sampler(0)]], constant Uniforms &u [[buffer(1)]])
{
    HwBlendOut out;
    float factor = 1.0;
    out.color = shade(in, float4(0.0), tex, palette, smp, u, true, factor);
    out.factor = float4(factor);
    return out;
}
)MSL"
