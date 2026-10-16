// The NEON intrinsics the VU fast paths use (the recompiled VU1 blocks and the interpreter's vector helpers),
// implemented with SSE4.1 for x86-64. Same results lane for lane, given the same floating-point mode: the VU runs
// with flush-to-zero, denormals-are-zero and round-toward-zero (FPCR on ARM, MXCSR here; see ps2_vu1.h).
//
// The types are clang/GCC vector types, so the lane-wise operators the generated code may use behave as on ARM.
// Only what the code uses is here; a missing intrinsic is a compile error, not a silent difference.
#pragma once
#if !defined(__SSE4_1__)
#error "neon_sse_shim.h needs SSE4.1 (-march=x86-64-v2 or later)"
#endif
#include <smmintrin.h>
#include <cstdint>
#include <cstring>

typedef float float32x4_t __attribute__((vector_size(16)));
typedef int32_t int32x4_t __attribute__((vector_size(16)));
typedef uint32_t uint32x4_t __attribute__((vector_size(16)));
typedef uint8_t uint8x16_t __attribute__((vector_size(16)));

#define NS_INLINE static inline __attribute__((always_inline))
#define NS_PS(v) ((__m128)(v))
#define NS_SI(v) ((__m128i)(v))

// ---- reinterpretation
NS_INLINE int32x4_t vreinterpretq_s32_f32(float32x4_t v) { return (int32x4_t)v; }
NS_INLINE uint32x4_t vreinterpretq_u32_f32(float32x4_t v) { return (uint32x4_t)v; }
NS_INLINE float32x4_t vreinterpretq_f32_s32(int32x4_t v) { return (float32x4_t)v; }
NS_INLINE float32x4_t vreinterpretq_f32_u32(uint32x4_t v) { return (float32x4_t)v; }
NS_INLINE uint32x4_t vreinterpretq_u32_s32(int32x4_t v) { return (uint32x4_t)v; }
NS_INLINE int32x4_t vreinterpretq_s32_u32(uint32x4_t v) { return (int32x4_t)v; }
NS_INLINE float32x4_t vreinterpretq_f32_u8(uint8x16_t v) { return (float32x4_t)v; }
NS_INLINE uint8x16_t vreinterpretq_u8_f32(float32x4_t v) { return (uint8x16_t)v; }

// ---- loads, stores, lanes
NS_INLINE float32x4_t vld1q_f32(const float *p) { return (float32x4_t)_mm_loadu_ps(p); }
NS_INLINE void vst1q_f32(float *p, float32x4_t v) { _mm_storeu_ps(p, NS_PS(v)); }
NS_INLINE uint32x4_t vld1q_u32(const uint32_t *p) { return (uint32x4_t)_mm_loadu_si128(reinterpret_cast<const __m128i *>(p)); }
NS_INLINE void vst1q_u32(uint32_t *p, uint32x4_t v) { _mm_storeu_si128(reinterpret_cast<__m128i *>(p), NS_SI(v)); }
NS_INLINE uint8x16_t vld1q_u8(const uint8_t *p) { return (uint8x16_t)_mm_loadu_si128(reinterpret_cast<const __m128i *>(p)); }
NS_INLINE void vst1q_u8(uint8_t *p, uint8x16_t v) { _mm_storeu_si128(reinterpret_cast<__m128i *>(p), NS_SI(v)); }
NS_INLINE float32x4_t vdupq_n_f32(float x) { return (float32x4_t)_mm_set1_ps(x); }
NS_INLINE int32x4_t vdupq_n_s32(int32_t x) { return (int32x4_t)_mm_set1_epi32(x); }
NS_INLINE uint32x4_t vdupq_n_u32(uint32_t x) { return (uint32x4_t)_mm_set1_epi32(int32_t(x)); }
#define vgetq_lane_f32(v, lane) (((float32x4_t)(v))[(lane)])
#define vgetq_lane_u32(v, lane) (((uint32x4_t)(v))[(lane)])
#define vgetq_lane_s32(v, lane) (((int32x4_t)(v))[(lane)])
#define vsetq_lane_f32(x, v, lane) __extension__({ float32x4_t ns_t = (v); ns_t[(lane)] = (x); ns_t; })
#define vdupq_laneq_f32(v, lane) ((float32x4_t)_mm_shuffle_ps(NS_PS(v), NS_PS(v), _MM_SHUFFLE((lane), (lane), (lane), (lane))))
// vextq_f32(a, b, n): lanes n..3 of a, then 0..n-1 of b.
#define vextq_f32(a, b, n) ((float32x4_t)_mm_castsi128_ps(_mm_alignr_epi8(_mm_castps_si128(NS_PS(b)), _mm_castps_si128(NS_PS(a)), 4 * (n))))

// ---- float arithmetic (the rounding and denormal handling come from MXCSR, as from FPCR on ARM)
NS_INLINE float32x4_t vaddq_f32(float32x4_t a, float32x4_t b) { return (float32x4_t)_mm_add_ps(NS_PS(a), NS_PS(b)); }
NS_INLINE float32x4_t vsubq_f32(float32x4_t a, float32x4_t b) { return (float32x4_t)_mm_sub_ps(NS_PS(a), NS_PS(b)); }
NS_INLINE float32x4_t vmulq_f32(float32x4_t a, float32x4_t b) { return (float32x4_t)_mm_mul_ps(NS_PS(a), NS_PS(b)); }
NS_INLINE float32x4_t vnegq_f32(float32x4_t a) { return (float32x4_t)_mm_xor_ps(NS_PS(a), _mm_set1_ps(-0.0f)); }
NS_INLINE float32x4_t vabsq_f32(float32x4_t a) { return (float32x4_t)_mm_andnot_ps(_mm_set1_ps(-0.0f), NS_PS(a)); }

// ---- float compares (all-ones lanes)
NS_INLINE uint32x4_t vcgtq_f32(float32x4_t a, float32x4_t b) { return (uint32x4_t)_mm_castps_si128(_mm_cmpgt_ps(NS_PS(a), NS_PS(b))); }
NS_INLINE uint32x4_t vcltq_f32(float32x4_t a, float32x4_t b) { return (uint32x4_t)_mm_castps_si128(_mm_cmplt_ps(NS_PS(a), NS_PS(b))); }
NS_INLINE uint32x4_t vceqq_f32(float32x4_t a, float32x4_t b) { return (uint32x4_t)_mm_castps_si128(_mm_cmpeq_ps(NS_PS(a), NS_PS(b))); }
NS_INLINE uint32x4_t vceqzq_f32(float32x4_t a) { return vceqq_f32(a, vdupq_n_f32(0.0f)); }

// ---- integer
#define vshrq_n_u32(v, n) ((uint32x4_t)_mm_srli_epi32(NS_SI(v), (n)))
#define vshlq_n_u32(v, n) ((uint32x4_t)_mm_slli_epi32(NS_SI(v), (n)))
NS_INLINE uint32x4_t vandq_u32(uint32x4_t a, uint32x4_t b) { return a & b; }
NS_INLINE uint32x4_t vorrq_u32(uint32x4_t a, uint32x4_t b) { return a | b; }
NS_INLINE uint32x4_t veorq_u32(uint32x4_t a, uint32x4_t b) { return a ^ b; }
NS_INLINE int32x4_t veorq_s32(int32x4_t a, int32x4_t b) { return a ^ b; }
NS_INLINE uint32x4_t vbicq_u32(uint32x4_t a, uint32x4_t b) { return a & ~b; }
NS_INLINE uint32x4_t vceqq_u32(uint32x4_t a, uint32x4_t b) { return (uint32x4_t)_mm_cmpeq_epi32(NS_SI(a), NS_SI(b)); }
NS_INLINE uint32x4_t vceqzq_u32(uint32x4_t a) { return vceqq_u32(a, vdupq_n_u32(0u)); }
NS_INLINE uint32x4_t vtstq_u32(uint32x4_t a, uint32x4_t b) { return ~vceqzq_u32(a & b); }
NS_INLINE uint32x4_t vcgtq_s32(int32x4_t a, int32x4_t b) { return (uint32x4_t)_mm_cmpgt_epi32(NS_SI(a), NS_SI(b)); }
NS_INLINE uint32x4_t vcltzq_s32(int32x4_t a) { return (uint32x4_t)_mm_srai_epi32(NS_SI(a), 31); }
NS_INLINE uint32x4_t vcgeq_u32(uint32x4_t a, uint32x4_t b) { return (uint32x4_t)_mm_cmpeq_epi32(_mm_max_epu32(NS_SI(a), NS_SI(b)), NS_SI(a)); }
NS_INLINE int32x4_t vminq_s32(int32x4_t a, int32x4_t b) { return (int32x4_t)_mm_min_epi32(NS_SI(a), NS_SI(b)); }
NS_INLINE uint32x4_t vminq_u32(uint32x4_t a, uint32x4_t b) { return (uint32x4_t)_mm_min_epu32(NS_SI(a), NS_SI(b)); }
NS_INLINE int32x4_t vmaxq_s32(int32x4_t a, int32x4_t b) { return (int32x4_t)_mm_max_epi32(NS_SI(a), NS_SI(b)); }
NS_INLINE uint32x4_t vmaxq_u32(uint32x4_t a, uint32x4_t b) { return (uint32x4_t)_mm_max_epu32(NS_SI(a), NS_SI(b)); }
NS_INLINE uint32_t vmaxvq_u32(uint32x4_t a)
{
    const __m128i m = _mm_max_epu32(NS_SI(a), _mm_shuffle_epi32(NS_SI(a), _MM_SHUFFLE(1, 0, 3, 2)));
    return uint32_t(_mm_cvtsi128_si32(_mm_max_epu32(m, _mm_shuffle_epi32(m, _MM_SHUFFLE(2, 3, 0, 1)))));
}
NS_INLINE uint32_t vaddvq_u32(uint32x4_t a) { return a[0] + a[1] + a[2] + a[3]; }

// ---- bit select: mask lanes are all-ones or all-zeros wherever the VU code uses it, but done bitwise like NEON.
NS_INLINE float32x4_t vbslq_f32(uint32x4_t mask, float32x4_t a, float32x4_t b) { return (float32x4_t)((mask & (uint32x4_t)a) | (~mask & (uint32x4_t)b)); }
NS_INLINE uint32x4_t vbslq_u32(uint32x4_t mask, uint32x4_t a, uint32x4_t b) { return (mask & a) | (~mask & b); }

// ---- conversions
NS_INLINE float32x4_t vcvtq_f32_s32(int32x4_t v) { return (float32x4_t)_mm_cvtepi32_ps(NS_SI(v)); }
// Float to int, truncating and saturating as NEON's FCVTZS: too large -> INT32_MAX / INT32_MIN, NaN -> 0.
// (cvttps gives 0x80000000 for every out-of-range lane and NaN.)
NS_INLINE int32x4_t vcvtq_s32_f32(float32x4_t v)
{
    const __m128 f = NS_PS(v);
    __m128i r = _mm_cvttps_epi32(f);
    const __m128i positiveOverflow = _mm_castps_si128(_mm_cmpge_ps(f, _mm_set1_ps(2147483648.0f)));
    r = _mm_xor_si128(r, positiveOverflow); // 0x80000000 -> 0x7FFFFFFF
    const __m128i nan = _mm_castps_si128(_mm_cmpunord_ps(f, f));
    return (int32x4_t)_mm_andnot_si128(nan, r);
}
// Fixed point (n fraction bits): exact power-of-two scaling, then the conversion above / the plain one.
#define vcvtq_n_s32_f32(v, n) vcvtq_s32_f32(vmulq_f32((v), vdupq_n_f32(float(1u << (n)))))
#define vcvtq_n_f32_s32(v, n) vmulq_f32(vcvtq_f32_s32(v), vdupq_n_f32(1.0f / float(1u << (n))))
