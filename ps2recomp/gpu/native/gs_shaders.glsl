// The native GS renderer's shaders for Vulkan: a line-for-line port of gs_shaders_msl.inc (keep the two in step).
// One file, one entry point per build: compile with -DSTAGE_<NAME> (see gpu/native/compile_shaders.sh), e.g.
//   glslangValidator -V --target-env vulkan1.1 -S frag -DSTAGE_FS_MAIN -DGS_SPECIALIZED gs_shaders.glsl -o fs_main_spec.spv
//
// Differences from Metal, and why:
// - Metal's [[color(0)]] (the pixel being drawn to, read in the shader) is an input attachment here: the colour target
//   is bound both as attachment and as input, with a by-region self-dependency between draws (gpu_vulkan.cpp).
// - Function constants are specialization constants with the same numbers.
// - Uniforms come from one dynamic uniform buffer (binding 0) for both stages; textures and the sampler are separate
//   bindings, as in the Metal code (texture 0 -> binding 1, texture 1 -> binding 2, sampler 0 -> binding 3).
// - Vulkan's clip space has y pointing down: the vertex shaders flip it so the same pixels are covered.
// - round(): Metal rounds halves away from zero, GLSL leaves it open; every value rounded here is >= 0, so
//   floor(x + 0.5) gives Metal's result.
#version 450

#define RND(x) floor((x) + 0.5)

#if defined(STAGE_VS_MAIN) || defined(STAGE_FS_MAIN) || defined(STAGE_FS_OPAQUE) || defined(STAGE_FS_HWBLEND) || defined(STAGE_FS_DEPTH_COPY) || defined(STAGE_FS_DEPTH_COPY_CLEAR)
layout(set = 0, binding = 0, std140) uniform UniformBlock
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
} u;
// std140 lays scalars out tightly like the C++ struct (all 4-byte members, no vectors): the same bytes work for both.
#endif

layout(set = 0, binding = 1) uniform texture2D tex0;
layout(set = 0, binding = 2) uniform texture2D tex1;
layout(set = 0, binding = 3) uniform sampler smp;
#define TEX sampler2D(tex0, smp)
// Post-processing reads without derivatives: see sampleL0 in gs_shaders_msl.inc.
#define textureL0(s, uv) textureLod(s, uv, 0.0)
#define PALETTE sampler2D(tex1, smp)

#if defined(GS_SPECIALIZED)
layout(constant_id = 0) const uint k_tme = 0u;
layout(constant_id = 1) const uint k_tfx = 0u;
layout(constant_id = 2) const uint k_tcc = 0u;
layout(constant_id = 3) const uint k_fge = 0u;
layout(constant_id = 4) const uint k_abe = 0u;
layout(constant_id = 5) const uint k_blendA = 0u;
layout(constant_id = 6) const uint k_blendB = 0u;
layout(constant_id = 7) const uint k_blendC = 0u;
layout(constant_id = 8) const uint k_blendD = 0u;
layout(constant_id = 9) const uint k_atst = 0u;
layout(constant_id = 10) const uint k_alphaMode = 0u;
layout(constant_id = 11) const uint k_writeMode = 0u;
layout(constant_id = 12) const uint k_fba = 0u;
layout(constant_id = 13) const uint k_colclamp = 0u;
layout(constant_id = 14) const uint k_destinationHasAlpha = 0u;
layout(constant_id = 15) const uint k_texAlphaFixed = 0u;
layout(constant_id = 16) const uint k_texIndexed = 0u;
layout(constant_id = 17) const uint k_texLinear = 0u;
layout(constant_id = 18) const uint k_wrapU = 0u;
layout(constant_id = 19) const uint k_wrapV = 0u;
layout(constant_id = 20) const uint k_texBox = 0u;
layout(constant_id = 21) const uint k_texSelf = 0u;
layout(constant_id = 22) const uint k_hasLevels = 0u;
layout(constant_id = 23) const uint k_lodFixed = 0u;
layout(constant_id = 24) const uint k_hasMask = 0u;
#define S(field) k_##field
#define HAS_LEVELS (k_hasLevels != 0u)
#define LOD_FIXED (k_lodFixed != 0u)
#define HAS_MASK (k_hasMask != 0u)
#else
#define S(field) u.field
#define HAS_LEVELS (u.maxLevel != 0u)
#define LOD_FIXED (u.lodFixed != 0u)
#define HAS_MASK (u.fbmask != 0u)
#endif

// ---------------------------------------------------------------------------------------------------------------- vertex

#if defined(STAGE_VS_MAIN)
layout(location = 0) in vec3 inPosition;
layout(location = 1) in uvec4 inColor; // uchar4 as integers (R8G8B8A8_UINT, a format every GPU reads): the GS's 0..255
layout(location = 2) in vec3 inStq;
layout(location = 3) in float inFog;
layout(location = 0) noperspective out vec4 vColor;
layout(location = 1) noperspective out vec3 vStq;
layout(location = 2) noperspective out float vFog;
void main()
{
    // The GS samples a pixel at its integer coordinate, the GPU at the centre: half a pixel of shift makes
    // both cover the same pixels.
    gl_Position = vec4((inPosition.x + 0.5) / u.targetWidth * 2.0 - 1.0, (inPosition.y + 0.5) / u.targetHeight * 2.0 - 1.0, inPosition.z, 1.0);
    vColor = vec4(inColor);
    vStq = inStq;
    vFog = inFog;
    gl_PointSize = u.pointSize;
}
#endif

#if defined(STAGE_VS_QUAD)
void main()
{
    const int id = gl_VertexIndex;
    gl_Position = vec4(id == 1 ? 3.0 : -1.0, id == 2 ? 3.0 : -1.0, 0.0, 1.0);
}
#endif

// -------------------------------------------------------------------------------------------------------------- fragment

#if defined(STAGE_FS_MAIN) || defined(STAGE_FS_SHUFFLE)
// The pixel being drawn to (Metal: [[color(0)]]).
layout(input_attachment_index = 0, set = 0, binding = 4) uniform subpassInput destinationInput;
#endif

#if defined(STAGE_FS_MAIN) || defined(STAGE_FS_OPAQUE) || defined(STAGE_FS_HWBLEND) || defined(STAGE_FS_DEPTH_COPY) || defined(STAGE_FS_DEPTH_COPY_CLEAR)
layout(location = 0) noperspective in vec4 vColor;
layout(location = 1) noperspective in vec3 vStq;
layout(location = 2) noperspective in float vFog;
#endif

#if defined(STAGE_FS_NIBBLE)
// Metal passes a uint4 at buffer(1); here the first four words of the uniform block are reinterpreted. To keep the
// layout simple the backend writes the uint4 to the start of the same dynamic buffer: read it as raw words.
layout(set = 0, binding = 0, std140) uniform NibbleBlock { uvec4 origin; } nib;
layout(location = 0) out vec4 outColor;
void main()
{
    const float a = RND(texelFetch(TEX, ivec2(uvec2(gl_FragCoord.xy) + nib.origin.xy), 0).a * 255.0);
    outColor = vec4(0.0, 0.0, 0.0, floor(a / float(nib.origin.z)) / 255.0);
}
#endif

#if defined(STAGE_FS_DEPTH_AS_COLOR)
layout(location = 0) out vec4 outColor;
void main()
{
    const float d = texelFetch(TEX, ivec2(gl_FragCoord.xy), 0).r;
    const uint z = uint(clamp(RND(d * 16777216.0), 0.0, 16777215.0));
    outColor = vec4(float(z & 255u), float((z >> 8) & 255u), float(z >> 16), 0.0) / 255.0;
}
#endif

#if defined(STAGE_FS_AO)
// See aoFragment (MSL).
layout(set = 0, binding = 0, std140) uniform AoBlock { float radius, strength, factor, zLimit; } ao;
layout(location = 0) out vec4 outColor;
void main()
{
    const int f = int(ao.factor);
    const ivec2 last = textureSize(TEX, 0) - 1;
    const ivec2 p = min(ivec2(gl_FragCoord.xy) * f + f / 2, last);
    const float zc = texelFetch(TEX, p, 0).r * 16777216.0;
    if (zc < 4.0 || zc >= ao.zLimit)
    {
        outColor = vec4(0.0, 0.0, 0.0, 1.0);
        return;
    }
    const uvec3 nb = uvec3(round(texelFetch(PALETTE, ivec2(0), 0).rgb * 255.0));
    const float zNear = max(float(nb.r | (nb.g << 8) | (nb.b << 16)), zc);
    const float q = zc / zNear;
    const float fade = smoothstep(0.12, 0.35, q);
    if (fade <= 0.0)
    {
        outColor = vec4(0.0, 0.0, 0.0, 1.0);
        return;
    }
    const float radius = ao.radius * clamp(q, 0.2, 1.0);
    const float minRel = max(0.002, 1.5 / zc), maxRel = 0.15;
    const float spin = fract(52.9829189 * fract(0.06711056 * float(p.x) + 0.00583715 * float(p.y))) * 6.2831853;
    float occlusion = 0.0, weight = 0.0;
    for (int i = 0; i < 12; ++i)
    {
        const float t = (float(i) + 0.5) / 12.0;
        const float a = spin + float(i) * 2.39996323;
        const vec2 offset = vec2(cos(a), sin(a)) * (radius * sqrt(t));
        const ivec2 o = ivec2(round(offset));
        const float z1 = texelFetch(TEX, clamp(p + o, ivec2(0), last), 0).r * 16777216.0;
        const float z2 = texelFetch(TEX, clamp(p - o, ivec2(0), last), 0).r * 16777216.0;
        if (abs(z1 - zc) > maxRel * zc || abs(z2 - zc) > maxRel * zc || z1 < 4.0 || z2 < 4.0 || z1 >= ao.zLimit || z2 >= ao.zLimit)
            continue;
        const float rel = ((z1 + z2) * 0.5 - zc) / zc;
        occlusion += smoothstep(minRel, minRel * 6.0, rel) * (1.0 - smoothstep(maxRel * 0.3, maxRel, rel));
        weight += 1.0;
    }
    const float confidence = smoothstep(7.0, 11.0, weight);
    const float v = weight > 0.0 ? 1.0 - ao.strength * fade * confidence * occlusion / weight : 1.0;
    outColor = vec4(0.0, 0.0, 0.0, clamp(v, 0.0, 1.0));
}
#endif

#if defined(STAGE_FS_AO_REDUCE_DEPTH) || defined(STAGE_FS_AO_REDUCE) || defined(STAGE_FS_AO_MEDIAN) || defined(STAGE_FS_AO_SMOOTH)
// See aoReduceFragment and aoMedianFragment (MSL): nearest Z per block, kept in the colour channels, then their median.
layout(set = 0, binding = 0, std140) uniform ReduceBlock { vec4 limit; } rd;
layout(location = 0) out vec4 outColor;
vec4 aoEncodeZ(float z) { const uint v = uint(clamp(z, 0.0, 16777215.0)); return vec4(float(v & 255u), float((v >> 8) & 255u), float(v >> 16), 255.0) / 255.0; }
float aoDecodeZ(vec4 c) { const uvec3 b = uvec3(round(c.rgb * 255.0)); return float(b.r | (b.g << 8) | (b.b << 16)); }
#endif

#if defined(STAGE_FS_AO_SMOOTH)
// See aoSmoothFragment (MSL). TEX: this frame's reference, PALETTE: the followed one.
void main()
{
    const float now = aoDecodeZ(texelFetch(TEX, ivec2(0), 0)), before = aoDecodeZ(texelFetch(PALETTE, ivec2(0), 0));
    if (before <= 0.0 || now <= 0.0 || now > before * 1.25 || now < before * 0.8)
        outColor = aoEncodeZ(now);
    else
        outColor = aoEncodeZ(before + (now - before) * rd.limit.x);
}
#endif

#if defined(STAGE_FS_AO_MEDIAN)
void main()
{
    // Each block's own rank (see aoMedianFragment in the MSL).
    const ivec2 size = textureSize(TEX, 0);
    const float v = aoDecodeZ(texelFetch(TEX, ivec2(gl_FragCoord.xy), 0));
    int valid = 0, below = 0;
    for (int y = 0; y < size.y; ++y)
        for (int x = 0; x < size.x; ++x)
        {
            const float o = aoDecodeZ(texelFetch(TEX, ivec2(x, y), 0));
            valid += o > 0.0 ? 1 : 0;
            below += (o > 0.0 && o < v) ? 1 : 0;
        }
    const int lo = valid / 4, hi = max((3 * valid) / 4, lo); // the middle half (see aoMedianFragment in the MSL)
    outColor = aoEncodeZ(v > 0.0 && below >= lo && below <= hi ? v : 0.0);
}
#endif

#if defined(STAGE_FS_AO_REDUCE_DEPTH) || defined(STAGE_FS_AO_REDUCE)
void main()
{
#if defined(STAGE_FS_AO_REDUCE_DEPTH)
    const int block = int(rd.limit.y), stride = max(int(rd.limit.z), 1); // one sample per pixel of the game's (see the MSL)
#else
    const int block = int(rd.limit.y), stride = 1; // 8, or the whole source for the last step
#endif
    const int n = block / stride;
    const ivec2 last = textureSize(TEX, 0) - 1, base = ivec2(gl_FragCoord.xy) * block + stride / 2;
    float z = 0.0, sum = 0.0, count = 0.0;
    for (int y = 0; y < n; ++y)
        for (int x = 0; x < n; ++x)
        {
            const vec4 c = texelFetch(TEX, min(base + ivec2(x, y) * stride, last), 0);
#if defined(STAGE_FS_AO_REDUCE_DEPTH)
            if (c.r * 16777216.0 < rd.limit.x) // beyond the Z buffer's format: not geometry
                z = max(z, c.r * 16777216.0);
#else
            const float v = aoDecodeZ(c);
            z = max(z, v);
            sum += v;
            count += v > 0.0 ? 1.0 : 0.0;
#endif
        }
#if defined(STAGE_FS_AO_REDUCE)
    if (rd.limit.w > 0.5) // the mean of the non-zero values (see aoReduceFragment in the MSL)
        z = count > 0.0 ? sum / count : 0.0;
#endif
    outColor = aoEncodeZ(z);
}
#endif

#if defined(STAGE_FS_SOFT_MASK)
// See softMaskFragment (MSL). TEX: the mask (a copy of the target), PALETTE: the Z buffer.
layout(set = 0, binding = 0, std140) uniform SoftBlock { vec4 u; } sb;
layout(location = 0) out vec4 outColor;
void main()
{
    const ivec2 p = ivec2(gl_FragCoord.xy), last = textureSize(TEX, 0) - 1;
    const float a0 = texelFetch(TEX, p, 0).a;
    const float z0 = texelFetch(PALETTE, p, 0).r * 16777216.0;
    float sum = a0, weight = 1.0;
    for (int i = 0; i < 6; ++i)
    {
        const float ring = (i & 1) != 0 ? 0.55 : 1.0; // alternating radii: two rings' worth of coverage from six taps
        const float a = float(i) * 1.0471976;
        const ivec2 q = clamp(p + ivec2(round(vec2(cos(a), sin(a)) * sb.u.x * ring)), ivec2(0), last);
        const float z = texelFetch(PALETTE, q, 0).r * 16777216.0;
        const float w = 1.0 / (1.0 + abs(z - z0) / max(z0, 1.0) * 400.0);
        sum += texelFetch(TEX, q, 0).a * w;
        weight += w;
    }
    outColor = vec4(0.0, 0.0, 0.0, mix(a0, sum / weight, sb.u.y));
}
#endif

#if defined(STAGE_FS_AO_UPSAMPLE)
// See aoUpsampleFragment (MSL).
layout(set = 0, binding = 0, std140) uniform UpBlock { vec4 inv; } up;
layout(location = 0) out vec4 outColor;
void main()
{
    const int f = int(up.inv.x);
    const ivec2 lastAo = textureSize(TEX, 0) - 1, lastZ = textureSize(PALETTE, 0) - 1;
    const float z = texelFetch(PALETTE, ivec2(gl_FragCoord.xy), 0).r * 16777216.0;
    const vec2 base = gl_FragCoord.xy / float(f) - 0.5;
    const ivec2 i0 = ivec2(floor(base));
    const vec2 fr = base - vec2(i0);
    float sum = 0.0, weight = 0.0;
    for (int k = 0; k < 4; ++k)
    {
        const ivec2 i = clamp(i0 + ivec2(k & 1, k >> 1), ivec2(0), lastAo);
        const float zs = texelFetch(PALETTE, min(i * f + f / 2, lastZ), 0).r * 16777216.0;
        const float bil = ((k & 1) != 0 ? fr.x : 1.0 - fr.x) * ((k >> 1) != 0 ? fr.y : 1.0 - fr.y);
        const float w = bil / (1e-3 + abs(zs - z) / max(z, 1.0) * 50.0) + 1e-6;
        sum += texelFetch(TEX, i, 0).a * w;
        weight += w;
    }
    outColor = vec4(0.0, 0.0, 0.0, sum / weight);
}
#endif

#if defined(STAGE_FS_SMAA_EDGE) || defined(STAGE_FS_SMAA_WEIGHT) || defined(STAGE_FS_SMAA_BLEND)
// SMAA 1x: see the MSL version (gs_shaders_msl.inc) for the notes. TEX: colour, edges or colour; PALETTE: -, tables, blend.
layout(set = 0, binding = 0, std140) uniform SmaaBlock { vec4 metrics; vec4 flags; } sm;
layout(location = 0) out vec4 outColor;
const float SMAA_THRESHOLD = 0.05;
const float SMAA_MAX_SEARCH_STEPS = 32.0;
const float SMAA_CORNER_ROUNDING_NORM = 0.25;
const float SMAA_LOCAL_CONTRAST = 2.0;
float smaaLuma(vec3 c) { return dot(c, vec3(0.2126, 0.7152, 0.0722)); }
#endif

#if defined(STAGE_FS_SMAA_EDGE)
vec2 smaaEdges(bool scene, vec2 uv, vec2 px)
{
#define SMAA_C(o) (scene ? textureL0(PALETTE, uv + (o)).rgb : textureL0(TEX, uv + (o)).rgb)
    const float L = smaaLuma(SMAA_C(vec2(0.0)));
    const float Lleft = smaaLuma(SMAA_C(vec2(-px.x, 0.0)));
    const float Ltop = smaaLuma(SMAA_C(vec2(0.0, -px.y)));
    vec4 delta;
    delta.xy = abs(L - vec2(Lleft, Ltop));
    vec2 edges = step(vec2(SMAA_THRESHOLD), delta.xy);
    if (edges.x + edges.y == 0.0)
        return vec2(0.0);
    const float Lright = smaaLuma(SMAA_C(vec2(px.x, 0.0)));
    const float Lbottom = smaaLuma(SMAA_C(vec2(0.0, px.y)));
    delta.zw = abs(L - vec2(Lright, Lbottom));
    vec2 maxDelta = max(delta.xy, delta.zw);
    const float Lleftleft = smaaLuma(SMAA_C(vec2(-2.0 * px.x, 0.0)));
    const float Ltoptop = smaaLuma(SMAA_C(vec2(0.0, -2.0 * px.y)));
    delta.zw = abs(vec2(Lleft, Ltop) - vec2(Lleftleft, Ltoptop));
    maxDelta = max(maxDelta.xy, delta.zw);
    const float finalDelta = max(maxDelta.x, maxDelta.y);
    return edges * step(finalDelta, SMAA_LOCAL_CONTRAST * delta.xy);
#undef SMAA_C
}
void main()
{
    const vec2 px = sm.metrics.xy, uv = gl_FragCoord.xy * px;
    vec2 edges = smaaEdges(false, uv, px);
    if (sm.flags.x != 0.0 && edges.x + edges.y != 0.0)
        edges *= smaaEdges(true, uv, px);
    outColor = vec4(edges, 0.0, 0.0);
}
#endif

#if defined(STAGE_FS_SMAA_WEIGHT)
float smaaSearchLength(vec2 e, float offset)
{
    const vec2 scale = vec2(66.0 * 0.5 - 1.0, -33.0 + 1.0), bias = vec2(66.0 * offset + 0.5, 33.0 - 0.5);
    const ivec2 i = clamp(ivec2(floor(scale * e + bias)), ivec2(0), ivec2(63, 15));
    return texelFetch(PALETTE, i + ivec2(0, 560), 0).r;
}
float smaaSearchXLeft(vec2 uv, float end, vec2 px)
{
    vec2 e = vec2(0.0, 1.0);
    while (uv.x > end && e.g > 0.8281 && e.r == 0.0)
    {
        e = textureL0(TEX, uv).rg;
        uv.x -= 2.0 * px.x;
    }
    return px.x * (-(255.0 / 127.0) * smaaSearchLength(e, 0.0) + 3.25) + uv.x;
}
float smaaSearchXRight(vec2 uv, float end, vec2 px)
{
    vec2 e = vec2(0.0, 1.0);
    while (uv.x < end && e.g > 0.8281 && e.r == 0.0)
    {
        e = textureL0(TEX, uv).rg;
        uv.x += 2.0 * px.x;
    }
    return -px.x * (-(255.0 / 127.0) * smaaSearchLength(e, 0.5) + 3.25) + uv.x;
}
float smaaSearchYUp(vec2 uv, float end, vec2 px)
{
    vec2 e = vec2(1.0, 0.0);
    while (uv.y > end && e.r > 0.8281 && e.g == 0.0)
    {
        e = textureL0(TEX, uv).rg;
        uv.y -= 2.0 * px.y;
    }
    return px.y * (-(255.0 / 127.0) * smaaSearchLength(e.gr, 0.0) + 3.25) + uv.y;
}
float smaaSearchYDown(vec2 uv, float end, vec2 px)
{
    vec2 e = vec2(1.0, 0.0);
    while (uv.y < end && e.r > 0.8281 && e.g == 0.0)
    {
        e = textureL0(TEX, uv).rg;
        uv.y += 2.0 * px.y;
    }
    return -px.y * (-(255.0 / 127.0) * smaaSearchLength(e.gr, 0.5) + 3.25) + uv.y;
}
vec2 smaaArea(vec2 dist, float e1, float e2)
{
    const vec2 p = 16.0 * roundEven(4.0 * vec2(e1, e2)) + dist;
    const ivec2 i = ivec2(floor(p));
    const vec2 f = p - vec2(i);
    const ivec2 hi = ivec2(159, 559);
    const vec2 a = texelFetch(PALETTE, clamp(i, ivec2(0), hi), 0).rg, b = texelFetch(PALETTE, clamp(i + ivec2(1, 0), ivec2(0), hi), 0).rg;
    const vec2 c = texelFetch(PALETTE, clamp(i + ivec2(0, 1), ivec2(0), hi), 0).rg, d = texelFetch(PALETTE, clamp(i + ivec2(1, 1), ivec2(0), hi), 0).rg;
    return mix(mix(a, b, f.x), mix(c, d, f.x), f.y);
}
void main()
{
    const vec2 px = sm.metrics.xy, uv = gl_FragCoord.xy * px, pixcoord = gl_FragCoord.xy;
    const vec4 offset0 = uv.xyxy + px.xyxy * vec4(-0.25, -0.125, 1.25, -0.125);
    const vec4 offset1 = uv.xyxy + px.xyxy * vec4(-0.125, -0.25, -0.125, 1.25);
    const vec4 offset2 = vec4(offset0.xz, offset1.yw) + px.xxyy * vec4(-2.0, 2.0, -2.0, 2.0) * SMAA_MAX_SEARCH_STEPS;
    vec4 weights = vec4(0.0);
    const vec2 e = textureL0(TEX, uv).rg;
    if (e.g > 0.0)
    {
        vec3 coords;
        coords.x = smaaSearchXLeft(offset0.xy, offset2.x, px);
        coords.y = offset1.y;
        vec2 d;
        d.x = coords.x;
        const float e1 = textureL0(TEX, coords.xy).r;
        coords.z = smaaSearchXRight(offset0.zw, offset2.y, px);
        d.y = coords.z;
        d = abs(roundEven(sm.metrics.zz * d - pixcoord.xx));
        const float e2 = textureL0(TEX, coords.zy + vec2(px.x, 0.0)).r;
        weights.rg = smaaArea(sqrt(d), e1, e2);
        coords.y = uv.y;
        const vec2 leftRight = step(d.xy, d.yx);
        vec2 rounding = (1.0 - SMAA_CORNER_ROUNDING_NORM) * leftRight;
        rounding /= leftRight.x + leftRight.y;
        vec2 factor = vec2(1.0);
        factor.x -= rounding.x * textureL0(TEX, coords.xy + px * vec2(0.0, 1.0)).r;
        factor.x -= rounding.y * textureL0(TEX, coords.zy + px * vec2(1.0, 1.0)).r;
        factor.y -= rounding.x * textureL0(TEX, coords.xy + px * vec2(0.0, -2.0)).r;
        factor.y -= rounding.y * textureL0(TEX, coords.zy + px * vec2(1.0, -2.0)).r;
        weights.rg *= clamp(factor, 0.0, 1.0);
    }
    if (e.r > 0.0)
    {
        vec3 coords;
        coords.y = smaaSearchYUp(offset1.xy, offset2.z, px);
        coords.x = offset0.x;
        vec2 d;
        d.x = coords.y;
        const float e1 = textureL0(TEX, coords.xy).g;
        coords.z = smaaSearchYDown(offset1.zw, offset2.w, px);
        d.y = coords.z;
        d = abs(roundEven(sm.metrics.ww * d - pixcoord.yy));
        const float e2 = textureL0(TEX, coords.xz + vec2(0.0, px.y)).g;
        weights.ba = smaaArea(sqrt(d), e1, e2);
        coords.x = uv.x;
        const vec2 leftRight = step(d.xy, d.yx);
        vec2 rounding = (1.0 - SMAA_CORNER_ROUNDING_NORM) * leftRight;
        rounding /= leftRight.x + leftRight.y;
        vec2 factor = vec2(1.0);
        factor.x -= rounding.x * textureL0(TEX, coords.xy + px * vec2(1.0, 0.0)).g;
        factor.x -= rounding.y * textureL0(TEX, coords.xz + px * vec2(1.0, 1.0)).g;
        factor.y -= rounding.x * textureL0(TEX, coords.xy + px * vec2(-2.0, 0.0)).g;
        factor.y -= rounding.y * textureL0(TEX, coords.xz + px * vec2(-2.0, 1.0)).g;
        weights.ba *= clamp(factor, 0.0, 1.0);
    }
    outColor = weights;
}
#endif

#if defined(STAGE_FS_SMAA_BLEND)
void main()
{
    const vec2 px = sm.metrics.xy, uv = gl_FragCoord.xy * px;
    vec4 a;
    a.x = textureL0(PALETTE, uv + vec2(px.x, 0.0)).a;
    a.y = textureL0(PALETTE, uv + vec2(0.0, px.y)).g;
    a.wz = textureL0(PALETTE, uv).xz;
    if (dot(a, vec4(1.0)) < 1e-5)
    {
        outColor = textureL0(TEX, uv);
        return;
    }
    const bool h = max(a.x, a.z) > max(a.y, a.w);
    const vec4 blendingOffset = h ? vec4(a.x, 0.0, a.z, 0.0) : vec4(0.0, a.y, 0.0, a.w);
    vec2 blendingWeight = h ? a.xz : a.yw;
    blendingWeight /= dot(blendingWeight, vec2(1.0));
    const vec4 blendingCoord = blendingOffset * vec4(px, -px) + uv.xyxy;
    outColor = blendingWeight.x * textureL0(TEX, blendingCoord.xy) + blendingWeight.y * textureL0(TEX, blendingCoord.zw);
}
#endif

#if defined(STAGE_FS_SHUFFLE)
layout(set = 0, binding = 0, std140) uniform ShuffleBlock { uint sourceHalf, destinationHalf, mask16, sourceIsDepth; } sh;
layout(location = 0) out vec4 outColor;
void main()
{
    const vec4 destination = subpassLoad(destinationInput);
    const uvec4 d = uvec4(RND(destination * 255.0));
    uint word = d.r | (d.g << 8) | (d.b << 16) | (d.a << 24);
    uint source = word;
    if (sh.sourceIsDepth != 0u) source = uint(texelFetch(TEX, ivec2(gl_FragCoord.xy), 0).r * 16777216.0 + 0.5);
    const uint from = (source >> (16u * sh.sourceHalf)) & 0xFFFFu;
    const uint shift = 16u * sh.destinationHalf;
    const uint old = (word >> shift) & 0xFFFFu;
    const uint merged = (old & sh.mask16) | (from & ~sh.mask16 & 0xFFFFu);
    word = (word & ~(0xFFFFu << shift)) | (merged << shift);
    outColor = vec4(float(word & 255u), float((word >> 8) & 255u), float((word >> 16) & 255u), float(word >> 24)) / 255.0;
}
#endif

#if defined(STAGE_FS_PRESENT)
layout(set = 0, binding = 0, std140) uniform PresentBlock
{
    float originX, originY, scaleX, scaleY;
    float fxaa;
    float gamma, brightness;
    float sharpen;
    float useScene;
    float useAo;
    float areaFilter;
    float gamePixelX, gamePixelY;
} pu;
layout(location = 0) out vec4 outColor;
vec4 presentAdjust(vec3 c) { return vec4(clamp(pow(max(c, 0.0), vec3(1.0 / pu.gamma)) * pu.brightness, 0.0, 1.0), 1.0); }
float presentLuma(vec3 c) { return dot(c, vec3(0.299, 0.587, 0.114)); }
vec3 presentSharpen(vec3 c, vec3 n, vec3 s, vec3 w, vec3 e, float amount)
{
    const vec3 mn = min(c, min(min(n, s), min(w, e)));
    const vec3 mx = max(c, max(max(n, s), max(w, e)));
    const vec3 amp = sqrt(clamp(min(mn, 1.0 - mx) / max(mx, vec3(1e-4)), 0.0, 1.0));
    const vec3 weight = -amp * mix(0.125, 0.2, amount);
    return clamp((c + (n + s + w + e) * weight) / (1.0 + 4.0 * weight), 0.0, 1.0);
}
// See presentPicture (MSL).
vec3 presentPicture(vec2 uv)
{
    const vec2 footprint = vec2(pu.scaleX, pu.scaleY), texels = footprint * vec2(textureSize(TEX, 0));
    if (pu.areaFilter == 0.0 || (texels.x <= 1.01 && texels.y <= 1.01))
        return textureL0(TEX, uv).rgb;
    const ivec2 n = clamp(ivec2(ceil(texels * 0.5 - 0.01)) * 2, ivec2(1), ivec2(4));
    vec3 sum = vec3(0.0);
    for (int y = 0; y < n.y; ++y)
        for (int x = 0; x < n.x; ++x)
            sum += textureL0(TEX, uv + ((vec2(x, y) + 0.5) / vec2(n) - 0.5) * footprint).rgb;
    return sum / float(n.x * n.y);
}
void main()
{
    const vec2 uv = vec2(pu.originX, pu.originY) + gl_FragCoord.xy * vec2(pu.scaleX, pu.scaleY);
    vec3 c = presentPicture(uv);
    if (pu.fxaa == 0.0 && pu.sharpen == 0.0 && pu.useAo == 0.0)
    {
        outColor = presentAdjust(c);
        return;
    }
    const vec2 texel = 1.0 / vec2(textureSize(TEX, 0));
    const vec3 cN = textureL0(TEX, uv + vec2(0.0, -texel.y)).rgb;
    const vec3 cS = textureL0(TEX, uv + vec2(0.0, texel.y)).rgb;
    const vec3 cW = textureL0(TEX, uv + vec2(-texel.x, 0.0)).rgb;
    const vec3 cE = textureL0(TEX, uv + vec2(texel.x, 0.0)).rgb;
    const vec3 original = c;
    if (pu.useScene != 0.0 && (pu.sharpen != 0.0 || pu.useAo != 0.0))
    {
        // See presentFragment (MSL): the effects' change to the frame's 3D picture (tex1), where the 2D left it alone.
        const vec4 s = textureL0(sampler2D(tex1, smp), uv);
        const vec4 sN = textureL0(sampler2D(tex1, smp), uv + vec2(0.0, -texel.y)), sS = textureL0(sampler2D(tex1, smp), uv + vec2(0.0, texel.y));
        const vec4 sW = textureL0(sampler2D(tex1, smp), uv + vec2(-texel.x, 0.0)), sE = textureL0(sampler2D(tex1, smp), uv + vec2(texel.x, 0.0));
        vec3 changed = s.rgb;
        if (pu.sharpen != 0.0)
            changed = presentSharpen(s.rgb, sN.rgb, sS.rgb, sW.rgb, sE.rgb, pu.sharpen);
        if (pu.useAo != 0.0)
        {
            const vec2 t2 = texel * 2.0;
            const float ao = (s.a * 2.0 + textureL0(sampler2D(tex1, smp), uv + vec2(t2.x, t2.y)).a + textureL0(sampler2D(tex1, smp), uv + vec2(-t2.x, t2.y)).a +
                              textureL0(sampler2D(tex1, smp), uv + vec2(t2.x, -t2.y)).a + textureL0(sampler2D(tex1, smp), uv + vec2(-t2.x, -t2.y)).a + sN.a + sS.a + sW.a + sE.a) / 10.0;
            changed *= ao;
        }
        // k from the neighbourhood (see presentSceneDelta in the MSL): the film grain cancels out there.
        vec3 shownAround = c, sceneAround = s.rgb;
        for (int i = 0; i < 4; ++i)
        {
            const vec2 o = vec2((i & 1) != 0 ? 1.0 : -1.0, (i & 2) != 0 ? 1.0 : -1.0) * vec2(pu.gamePixelX, pu.gamePixelY);
            shownAround += textureL0(TEX, uv + o).rgb;
            sceneAround += textureL0(sampler2D(tex1, smp), uv + o).rgb;
        }
        const float k = clamp(presentLuma(shownAround) / max(presentLuma(sceneAround), 1.0 / 255.0), 0.0, 1.0);
        const vec3 d = abs(c - s.rgb * k);
        c = clamp(c + (changed - s.rgb) * k * (1.0 - smoothstep(0.06, 0.16, max(d.r, max(d.g, d.b)))), 0.0, 1.0);
    }
    else if (pu.sharpen != 0.0)
        c = presentSharpen(c, cN, cS, cW, cE, pu.sharpen);
    if (pu.fxaa == 0.0)
    {
        outColor = presentAdjust(c);
        return;
    }
    const float lC = presentLuma(original);
    const float lN = presentLuma(cN), lS = presentLuma(cS), lW = presentLuma(cW), lE = presentLuma(cE);
    const float lMin = min(lC, min(min(lN, lS), min(lW, lE)));
    const float lMax = max(lC, max(max(lN, lS), max(lW, lE)));
    const float range = lMax - lMin;
    if (range < max(0.0625, lMax * 0.125))
    {
        outColor = presentAdjust(c);
        return;
    }
    const vec2 gradient = vec2((lW + lE) - 2.0 * lC, (lN + lS) - 2.0 * lC);
    const vec2 along = abs(gradient.x) > abs(gradient.y) ? vec2(0.0, texel.y) : vec2(texel.x, 0.0);
    const vec3 a = textureL0(TEX, uv + along * 0.5).rgb;
    const vec3 b = textureL0(TEX, uv - along * 0.5).rgb;
    const vec2 across = along.x > 0.0 ? vec2(0.0, texel.y) : vec2(texel.x, 0.0);
    const vec3 across1 = textureL0(TEX, uv + across * 0.5).rgb;
    const vec3 across2 = textureL0(TEX, uv - across * 0.5).rgb;
    const float strength = clamp(range / max(lMax, 1e-4) * 2.0, 0.0, 1.0);
    const vec3 smoothed = (a + b) * 0.375 + (across1 + across2) * 0.125;
    outColor = presentAdjust(mix(c, smoothed, strength * 0.75));
}
#endif

#if defined(STAGE_FS_DEPTH_COPY)
void main()
{
    gl_FragDepth = texture(TEX, vStq.xy / vStq.z * vec2(u.texScaleU, u.texScaleV)).r;
}
#endif

#if defined(STAGE_FS_DEPTH_COPY_CLEAR)
layout(location = 0) out vec4 outColor;
void main()
{
    gl_FragDepth = texture(TEX, vStq.xy / vStq.z * vec2(u.texScaleU, u.texScaleV)).r;
    const uint word = uint(gl_FragCoord.z * 16777216.0 + 0.5);
    outColor = vec4(float(word & 255u), float((word >> 8) & 255u), float((word >> 16) & 255u), float(word >> 24)) / 255.0;
}
#endif

#if defined(STAGE_FS_MAIN) || defined(STAGE_FS_OPAQUE) || defined(STAGE_FS_HWBLEND)
layout(location = 0, index = 0) out vec4 outColor;
#if defined(STAGE_FS_HWBLEND)
layout(location = 0, index = 1) out vec4 outFactor; // dual-source blend factor
#endif
float hwFactor = 1.0;

// A render target's alpha channel used as an 8-bit texture: palette lookup per texel, filtered afterwards as the GS does.
vec4 indexedTexel(vec2 at, vec2 size, uint paletteScale)
{
    const uvec2 where = uvec2(clamp(at, vec2(0.0), size - 1.0));
    const uint index = uint(RND(texelFetch(TEX, ivec2(where), 0).a * 255.0));
    // The palette texture keeps the layout it has in VRAM: 16x16, with the two middle index bits swapped.
    const uint entry = (index & 0xE7u) | ((index & 0x08u) << 1) | ((index & 0x10u) >> 1);
    return RND(texelFetch(PALETTE, ivec2(uvec2(entry & 15u, entry >> 4) * paletteScale + paletteScale / 2u), 0) * 255.0);
}

// Returns false where Metal's discard_fragment() was.
bool shade(vec4 destination, out vec4 result)
{
#if defined(GS_TRIVIAL)
    result = vec4(vColor.rgb / 255.0, 1.0);
    return true;
#endif
    // Everything below is in GS units: 0..255 per channel, alpha 128 meaning 1.0.
    vec4 c = floor(vColor);
    // Derivatives outside the branches (GLSL wants them in uniform control flow).
    const vec2 baseCoordinate = vStq.xy / vStq.z;
    const vec2 stepX = dFdx(baseCoordinate) * vec2(u.texScaleU, u.texScaleV), stepY = dFdy(baseCoordinate) * vec2(u.texScaleU, u.texScaleV);
    if (S(tme) != 0u)
    {
        vec2 coordinate = baseCoordinate;
        if (S(wrapU) >= 2u || S(wrapV) >= 2u)
        {
            // Region modes work on texel coordinates: clamp to [MIN, MAX], or (texel & MIN) | MAX (unfiltered).
            vec2 texel = coordinate * vec2(u.texWidth, u.texHeight);
            if (S(wrapU) == 2u) texel.x = clamp(texel.x, u.minU + 0.5, u.maxU + 0.5);
            else if (S(wrapU) == 3u) texel.x = float((int(floor(texel.x)) & int(u.minU)) | int(u.maxU)) + 0.5;
            else if (S(wrapU) == 4u) texel.x = fract(coordinate.x) * u.texWidth;
            if (S(wrapV) == 2u) texel.y = clamp(texel.y, u.minV + 0.5, u.maxV + 0.5);
            else if (S(wrapV) == 3u) texel.y = float((int(floor(texel.y)) & int(u.minV)) | int(u.maxV)) + 0.5;
            else if (S(wrapV) == 4u) texel.y = fract(coordinate.y) * u.texHeight;
            coordinate = texel / vec2(u.texWidth, u.texHeight);
        }
        coordinate *= vec2(u.texScaleU, u.texScaleV);
        vec4 t;
        const vec2 size = vec2(textureSize(TEX, 0));
        if (S(texSelf) != 0u)
        {
            // The game re-reads the frame in place (each pixel reads itself): that is the destination pixel.
            if (S(texIndexed) != 0u)
            {
                const uint index = uint(RND(destination.a * 255.0));
                const uint entry = (index & 0xE7u) | ((index & 0x08u) << 1) | ((index & 0x10u) >> 1);
                t = RND(texelFetch(PALETTE, ivec2(uvec2(entry & 15u, entry >> 4) * u.paletteScale + u.paletteScale / 2u), 0) * 255.0);
            }
            else
                t = RND(destination * 255.0);
        }
        else if (S(texIndexed) == 2u)
        {
            // A 32-bit target read as 16-bit texels (see the Metal version).
            const uint tbw = max(u.paletteScale, 1u), scale = max(u.texBox, 1u);
            const uvec2 t16 = uvec2(clamp(floor(coordinate * vec2(u.texWidth, u.texHeight)), vec2(0.0), vec2(u.texWidth, u.texHeight) - 1.0));
            const uint page = (t16.x >> 6) + (t16.y >> 6) * tbw;
            const uvec4 map = uvec4(RND(texelFetch(PALETTE, ivec2(t16 & 63u), 0) * 255.0));
            const uvec2 p32 = uvec2((page % tbw) * 64u + map.x, (page / tbw) * 32u + map.y);
            const uvec2 at = min(p32 * scale + scale / 2u, uvec2(size) - 1u);
            const uvec4 b = uvec4(RND(texelFetch(TEX, ivec2(at), 0) * 255.0));
            const uint h = map.z != 0u ? (b.b | (b.a << 8)) : (b.r | (b.g << 8));
            t = vec4(float((h & 31u) << 3), float(((h >> 5) & 31u) << 3), float(((h >> 10) & 31u) << 3), (h >> 15) != 0u ? 128.0 : float(u.ta0));
        }
        else if (S(texIndexed) != 0u)
        {
            vec2 at = coordinate * size;
            if (S(texLinear) != 0u)
            {
                at -= 0.5;
                const vec2 base = floor(at), f = at - base;
                const vec4 top = mix(indexedTexel(base, size, u.paletteScale), indexedTexel(base + vec2(1.0, 0.0), size, u.paletteScale), f.x);
                const vec4 bottom = mix(indexedTexel(base + vec2(0.0, 1.0), size, u.paletteScale), indexedTexel(base + vec2(1.0, 1.0), size, u.paletteScale), f.x);
                t = floor(mix(top, bottom, f.y));
            }
            else
                t = indexedTexel(floor(at), size, u.paletteScale);
        }
        else
        {
            // The GS picks the mip level from Q, not from screen-space derivatives: (log2(1/Q) << L) + K, rounded.
            float lod = 0.0;
            if (HAS_LEVELS)
            {
                lod = LOD_FIXED ? u.lodK : log2(1.0 / abs(vStq.z)) * u.lodScale + u.lodK;
                lod = clamp(floor(lod + 0.5), 0.0, float(u.maxLevel));
            }
            if (u.texReplaced != 0u)
            {
                // A replacement from a texture pack: its own alpha is 0..255 (opaque = 255), the GS works in 0..128.
                // Explicit gradients: the same level choice as Metal's implicit sample, valid in non-uniform flow.
                t = RND(textureGrad(TEX, coordinate, dFdx(coordinate), dFdy(coordinate)) * 255.0);
                t.a = floor(t.a * 128.0 / 255.0 + 0.5);
            }
            else if (S(texBox) > 1u)
            {
                // A render target drawn larger, read with the GS's bilinear filter (see the Metal version).
                const vec2 reach = float(S(texBox)) * 0.25 / size;
                const vec4 sum = textureLod(TEX, coordinate + vec2(-reach.x, -reach.y), 0.0) + textureLod(TEX, coordinate + vec2(reach.x, -reach.y), 0.0) +
                                 textureLod(TEX, coordinate + vec2(-reach.x, reach.y), 0.0) + textureLod(TEX, coordinate + vec2(reach.x, reach.y), 0.0);
                t = RND(sum * 0.25 * 255.0);
            }
#if !defined(GS_HW_BILINEAR)
            else if (S(texLinear) != 0u && lod == 0.0)
            {
                // The GS's bilinear filter: weights in sixteenths of a texel, the result truncated.
                const vec2 at = coordinate * size - 0.5;
                const vec2 snapped = (floor(at) + floor(fract(at) * 16.0) / 16.0 + 0.5) / size;
                t = floor(textureLod(TEX, snapped, 0.0) * 255.0 + 1.0 / 64.0);
            }
#endif
#if !defined(GS_NO_DOWNFILTER)
            else if (u.nativeTexel != 0u && lod == 0.0 && max(length(stepX * size), length(stepY * size)) * u.pointSize > 1.05)
            {
                // A texture drawn smaller than it is, unfiltered: the texel the game's own pixel would show.
                const float scale = u.pointSize;
                const vec2 offset = (floor(gl_FragCoord.xy / scale) + 0.5) * scale - gl_FragCoord.xy;
                t = RND(textureLod(TEX, coordinate + stepX * offset.x + stepY * offset.y, 0.0) * 255.0);
            }
#endif
            else
                t = RND(textureLod(TEX, coordinate, lod) * 255.0);
        }
        if (S(texAlphaFixed) != 0u) t.a = float(u.ta0);
        const vec3 modulated = min(floor(t.rgb * c.rgb / 128.0), 255.0);
        if (S(tfx) == 0u)
        {
            c.rgb = modulated;
            if (S(tcc) != 0u) c.a = min(floor(t.a * c.a / 128.0), 255.0);
        }
        else if (S(tfx) == 1u)
        {
            c.rgb = t.rgb;
            if (S(tcc) != 0u) c.a = t.a;
        }
        else
        {
            c.rgb = min(modulated + c.a, 255.0);
            if (S(tcc) != 0u) c.a = S(tfx) == 2u ? min(t.a + c.a, 255.0) : t.a;
        }
    }
    if (S(fge) != 0u)
    {
        const float f = floor(vFog);
        c.rgb = floor((c.rgb * f + vec3(u.fogR, u.fogG, u.fogB) * (256.0 - f)) / 256.0);
    }
    if (S(alphaMode) != 0u)
    {
        const float a = c.a, r = float(u.aref);
        const uint atst = S(atst);
        const bool pass = atst == 0u ? false : atst == 1u ? true : atst == 2u ? a < r : atst == 3u ? a <= r : atst == 4u ? a == r : atst == 5u ? a >= r : atst == 6u ? a > r : a != r;
        if (pass != (S(alphaMode) == 1u))
            return false;
    }
#if defined(STAGE_FS_HWBLEND)
    // Fixed-function blending (GPUs without ordered reads of the target): this shader gives |ks| * Cs and the blend
    // factor C/128 as a second output; the blend unit adds or subtracts kd * Cd (see hwBlend() in the renderer).
    {
        float f = 1.0, ks = 1.0;
        if (S(abe) != 0u)
        {
            // C from the target's alpha is applied by the blend unit (DST_ALPHA): f = 1 here.
            const float C = S(blendC) == 0u ? c.a : S(blendC) == 1u ? 128.0 : float(u.fix);
            f = C / 128.0;
            ks = (S(blendA) == 0u ? f : 0.0) - (S(blendB) == 0u ? f : 0.0) + (S(blendD) == 0u ? 1.0 : 0.0);
        }
        const float alphaOut = S(fba) != 0u && c.a < 128.0 ? c.a + 128.0 : c.a;
        // The GS truncates (A - B) * C / 128 where the blend unit rounds the sum to nearest: when both terms add,
        // 0.49 less makes the rounding land where the truncation does.
        // (Both coefficients as values: a test built from the specialization constants alone trips SPIRV-Cross.)
        const float kd = (S(blendA) == 1u ? f : 0.0) - (S(blendB) == 1u ? f : 0.0) + (S(blendD) == 1u ? 1.0 : 0.0);
        const float bias = S(abe) != 0u && ks >= 0.0 && kd >= 0.0 && f != 1.0 && f != 0.0 ? 0.49 : 0.0;
        result = vec4(clamp(c.rgb * abs(ks) - bias, 0.0, 255.0), clamp(alphaOut, 0.0, 255.0)) / 255.0;
        hwFactor = f;
        return true;
    }
#endif
    const vec4 d = RND(destination * 255.0);
    if (S(writeMode) == 1u)
    {
        result = destination;
        return true;
    }
    vec3 rgb = c.rgb;
    if (S(abe) != 0u)
    {
        const vec3 A = S(blendA) == 0u ? c.rgb : S(blendA) == 1u ? d.rgb : vec3(0.0);
        const vec3 B = S(blendB) == 0u ? c.rgb : S(blendB) == 1u ? d.rgb : vec3(0.0);
        const float C = S(blendC) == 0u ? c.a : S(blendC) == 1u ? (S(destinationHasAlpha) != 0u ? d.a : 128.0) : float(u.fix);
        const vec3 D = S(blendD) == 0u ? c.rgb : S(blendD) == 1u ? d.rgb : vec3(0.0);
        rgb = floor((A - B) * C / 128.0) + D;
    }
    rgb = S(colclamp) != 0u ? clamp(rgb, 0.0, 255.0) : rgb - 256.0 * floor(rgb / 256.0);
    float alpha = S(fba) != 0u && c.a < 128.0 ? c.a + 128.0 : c.a;
    if (S(writeMode) == 2u) alpha = d.a;
    uvec4 o = uvec4(vec4(rgb, clamp(alpha, 0.0, 255.0)));
    if (HAS_MASK)
    {
        uint packed = o.r | (o.g << 8) | (o.b << 16) | (o.a << 24);
        const uvec4 di = uvec4(d);
        const uint old = di.r | (di.g << 8) | (di.b << 16) | (di.a << 24);
        packed = (packed & ~u.fbmask) | (old & u.fbmask);
        o = uvec4(packed & 255u, (packed >> 8) & 255u, (packed >> 16) & 255u, packed >> 24);
    }
    result = vec4(o) / 255.0;
    return true;
}

void main()
{
#if defined(STAGE_FS_MAIN)
    const vec4 destination = subpassLoad(destinationInput); // reads the pixel it writes to (programmable blending)
#else
    const vec4 destination = vec4(0.0); // draws that just replace the pixel: no read of the target
#endif
    vec4 result;
    if (!shade(destination, result))
        discard;
    outColor = result;
#if defined(STAGE_FS_HWBLEND)
    outFactor = vec4(hwFactor);
#endif
}
#endif
