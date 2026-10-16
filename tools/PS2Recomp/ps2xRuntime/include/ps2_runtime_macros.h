#ifndef PS2_RUNTIME_MACROS_H
#define PS2_RUNTIME_MACROS_H
#include <cstdint>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <bit>
#if defined(_MSC_VER)
#include <intrin.h>
#elif defined(USE_SSE2NEON)
#include "sse2neon.h"
#else
#include <immintrin.h> // For SSE/AVX intrinsics
#endif

#include "ps2_runtime.h"

static inline int32_t Ps2ExtractEpi32(__m128i v, int index)
{
    switch (index & 3)
    {
    case 0:
        return _mm_extract_epi32(v, 0);
    case 1:
        return _mm_extract_epi32(v, 1);
    case 2:
        return _mm_extract_epi32(v, 2);
    default:
        return _mm_extract_epi32(v, 3);
    }
}

static inline int64_t Ps2ExtractEpi64(__m128i v, int index)
{
    if ((index & 1) == 0)
    {
        return _mm_cvtsi128_si64(v);
    }
    else
    {
        return _mm_extract_epi64(v, 1);
    }
}

static inline uint32_t ps2_clz32(uint32_t x)
{
    return static_cast<uint32_t>(std::countl_zero(x));
}

static inline uint64_t Ps2HiLoToU64(uint64_t hi, uint64_t lo)
{
    return ((hi & 0xFFFFFFFFull) << 32) | (lo & 0xFFFFFFFFull);
}

static inline uint64_t Ps2SignExt32ToU64(uint32_t v)
{
    return (uint64_t)(int64_t)(int32_t)v;
}

// PLZCW: Count leading bits that match the sign bit, minus 1.
// For positive values: count leading zeros minus 1 (excludes sign bit).
// For negative values: count leading ones minus 1 (excludes sign bit).
// Special cases: 0x00000000 -> 31, 0xFFFFFFFF -> 31.
static inline uint32_t ps2_plzcw32(uint32_t x)
{
    if (x == 0 || x == 0xFFFFFFFF)
        return 31;
    if (x & 0x80000000u)
        x = ~x; // If sign bit set, invert to count leading ones as zeros
    return static_cast<uint32_t>(std::countl_zero(x)) - 1;
}

#define PS2_BLENDV_PS(a, b, mask) _mm_blendv_ps((a), (b), (mask))
#define PS2_MIN_EPI32(a, b) _mm_min_epi32((a), (b))
#define PS2_MAX_EPI32(a, b) _mm_max_epi32((a), (b))
#define PS2_SHUFFLE_EPI8(v, mask) _mm_shuffle_epi8((v), (mask))

#define PS2_EXTRACT_EPI32(v, i) Ps2ExtractEpi32((v), (i))
#define PS2_EXTRACT_EPI64(v, i) Ps2ExtractEpi64((v), (i))

#define PS2_EXTRACT_EPI32_0(v) Ps2ExtractEpi32((v), 0)
#define PS2_EXTRACT_EPI32_1(v) Ps2ExtractEpi32((v), 1)
#define PS2_EXTRACT_EPI32_2(v) Ps2ExtractEpi32((v), 2)
#define PS2_EXTRACT_EPI32_3(v) Ps2ExtractEpi32((v), 3)

#define PS2_EXTRACT_EPI64_0(v) Ps2ExtractEpi64((v), 0)
#define PS2_EXTRACT_EPI64_1(v) Ps2ExtractEpi64((v), 1)

// Basic MIPS arithmetic operations
#define ADD32(a, b) ((uint32_t)((a) + (b)))
#define ADD32_OV(rs, rt, result32, overflow)              \
    do                                                    \
    {                                                     \
        int32_t _a = (int32_t)(rs);                       \
        int32_t _b = (int32_t)(rt);                       \
        int32_t _r = _a + _b;                             \
        overflow = (((_a ^ _b) >= 0) && ((_a ^ _r) < 0)); \
        result32 = (uint32_t)_r;                          \
    } while (0);
#define SUB32(a, b) ((uint32_t)((a) - (b)))
#define SUB32_OV(rs, rt, result32, overflow)             \
    do                                                   \
    {                                                    \
        int32_t _a = (int32_t)(rs);                      \
        int32_t _b = (int32_t)(rt);                      \
        int32_t _r = _a - _b;                            \
        overflow = (((_a ^ _b) < 0) && ((_a ^ _r) < 0)); \
        result32 = (uint32_t)_r;                         \
    } while (0);
#define MUL32(a, b) ((uint32_t)((a) * (b)))
#define DIV32(a, b) ((uint32_t)((a) / (b)))
#define AND32(a, b) ((uint32_t)((a) & (b)))
#define OR32(a, b) ((uint32_t)((a) | (b)))
#define XOR32(a, b) ((uint32_t)((a) ^ (b)))
#define NOR32(a, b) ((uint32_t)(~((a) | (b))))
#define SLL32(a, b) ((uint32_t)((a) << (b)))
#define SRL32(a, b) ((uint32_t)((a) >> (b)))
#define SRA32(a, b) ((uint32_t)((int32_t)(a) >> (b)))
#define SLT32(a, b) ((uint32_t)((int32_t)(a) < (int32_t)(b) ? 1 : 0))
#define SLTU32(a, b) ((uint32_t)((a) < (b) ? 1 : 0))

// PS2-specific 128-bit MMI operations
#define PS2_PEXTLW(a, b) _mm_unpacklo_epi32((__m128i)(b), (__m128i)(a))
#define PS2_PEXTUW(a, b) _mm_unpackhi_epi32((__m128i)(b), (__m128i)(a))
#define PS2_PEXTLH(a, b) _mm_unpacklo_epi16((__m128i)(b), (__m128i)(a))
#define PS2_PEXTUH(a, b) _mm_unpackhi_epi16((__m128i)(b), (__m128i)(a))
#define PS2_PEXTLB(a, b) _mm_unpacklo_epi8((__m128i)(b), (__m128i)(a))
#define PS2_PEXTUB(a, b) _mm_unpackhi_epi8((__m128i)(b), (__m128i)(a))
#define PS2_PADDW(a, b) _mm_add_epi32((__m128i)(a), (__m128i)(b))
#define PS2_PSUBW(a, b) _mm_sub_epi32((__m128i)(a), (__m128i)(b))
#define PS2_PMAXW(a, b) PS2_MAX_EPI32((__m128i)(a), (__m128i)(b))
#define PS2_PMINW(a, b) PS2_MIN_EPI32((__m128i)(a), (__m128i)(b))
#define PS2_PADDH(a, b) _mm_add_epi16((__m128i)(a), (__m128i)(b))
#define PS2_PSUBH(a, b) _mm_sub_epi16((__m128i)(a), (__m128i)(b))
#define PS2_PMAXH(a, b) _mm_max_epi16((__m128i)(a), (__m128i)(b))
#define PS2_PMINH(a, b) _mm_min_epi16((__m128i)(a), (__m128i)(b))
#define PS2_PADDB(a, b) _mm_add_epi8((__m128i)(a), (__m128i)(b))
#define PS2_PSUBB(a, b) _mm_sub_epi8((__m128i)(a), (__m128i)(b))
#define PS2_PAND(a, b) _mm_and_si128((__m128i)(a), (__m128i)(b))
#define PS2_POR(a, b) _mm_or_si128((__m128i)(a), (__m128i)(b))
#define PS2_PXOR(a, b) _mm_xor_si128((__m128i)(a), (__m128i)(b))
#define PS2_PNOR(a, b) _mm_xor_si128(_mm_or_si128((__m128i)(a), (__m128i)(b)), _mm_set1_epi32(0xFFFFFFFF))

// PS2 VU (Vector Unit) operations
// VU0 macro-mode arithmetic saturates like the VU: it has no infinities or NaNs, an overflowing result is the
// largest float of its sign (PCSX2 runs Black with VU clamping for the same reason). Without this a divide by zero
// (VDIV/VRSQRT give FLT_MAX, as the VU does) turns into infinities and NaNs a few instructions later, which broke
// collisions (the player fell through floors).
static inline __m128 ps2VuSaturate(__m128 value)
{
#if defined(__aarch64__)
    const float32x4_t f = vreinterpretq_f32_m128(value);
    return vreinterpretq_m128_f32(vminnmq_f32(vmaxnmq_f32(f, vdupq_n_f32(-3.402823466e+38f)), vdupq_n_f32(3.402823466e+38f)));
#else
    return _mm_min_ps(_mm_max_ps(value, _mm_set1_ps(-3.402823466e+38f)), _mm_set1_ps(3.402823466e+38f));
#endif
}
#define PS2_VADD(a, b) ps2VuSaturate(_mm_add_ps((__m128)(a), (__m128)(b)))
#define PS2_VSUB(a, b) ps2VuSaturate(_mm_sub_ps((__m128)(a), (__m128)(b)))
#define PS2_VMUL(a, b) ps2VuSaturate(_mm_mul_ps((__m128)(a), (__m128)(b)))
#define PS2_VDIV(a, b) _mm_div_ps((__m128)(a), (__m128)(b))
#define PS2_VMULQ(a, q) _mm_mul_ps((__m128)(a), _mm_set1_ps(q))
#define PS2_VBLEND(a, b, mask) PS2_BLENDV_PS((__m128)(a), (__m128)(b), (__m128)(mask))
// VMAX/VMINI as the VU does them: the operands are compared as sign-magnitude numbers, so a bit pattern IEEE calls
// NaN or infinity is simply the largest magnitude, -0 is below +0, and the result is one of the two inputs, bit for
// bit (IEEE max/min return a canonical NaN instead).
static inline __m128i ps2VuOrderedBits(__m128 value)
{
    const __m128i bits = _mm_castps_si128(value);
    return _mm_xor_si128(bits, _mm_srli_epi32(_mm_srai_epi32(bits, 31), 1));
}
static inline __m128 PS2_VMAX_VU(__m128 a, __m128 b)
{
    const __m128i aGreater = _mm_cmpgt_epi32(ps2VuOrderedBits(a), ps2VuOrderedBits(b));
    return _mm_or_ps(_mm_and_ps(_mm_castsi128_ps(aGreater), a), _mm_andnot_ps(_mm_castsi128_ps(aGreater), b));
}
static inline __m128 PS2_VMINI_VU(__m128 a, __m128 b)
{
    const __m128i aLess = _mm_cmpgt_epi32(ps2VuOrderedBits(b), ps2VuOrderedBits(a));
    return _mm_or_ps(_mm_and_ps(_mm_castsi128_ps(aLess), a), _mm_andnot_ps(_mm_castsi128_ps(aLess), b));
}

// VFTOI as the VU does it: truncate, saturating to 0x7FFFFFFF / 0x80000000. The VU has no infinities or NaNs: a value
// with exponent 255 is just a very large number, so it saturates by its sign too. (x86's cvttps, which sse2neon
// emulates, returns 0x80000000 for every out-of-range value, turning large positive results negative.)
static inline __m128i PS2_VFTOI_SAT(__m128 value)
{
#if defined(__aarch64__)
    const uint32x4_t bits = vreinterpretq_u32_f32(vreinterpretq_f32_m128(value));
    const uint32x4_t huge = vcgeq_u32(vandq_u32(bits, vdupq_n_u32(0x7FFFFFFFu)), vdupq_n_u32(0x7F800000u));
    const uint32x4_t clamped = vorrq_u32(vandq_u32(bits, vdupq_n_u32(0x80000000u)), vdupq_n_u32(0x7F7FFFFFu));
    const float32x4_t f = vreinterpretq_f32_u32(vbslq_u32(huge, clamped, bits));
    return vreinterpretq_m128i_s32(vcvtq_s32_f32(f));
#else
    const __m128i bits = _mm_castps_si128(value);
    const __m128i magnitude = _mm_and_si128(bits, _mm_set1_epi32(0x7FFFFFFF));
    const __m128i huge = _mm_cmpgt_epi32(magnitude, _mm_set1_epi32(0x7F7FFFFF));
    const __m128i clamped = _mm_or_si128(_mm_and_si128(bits, _mm_set1_epi32(int(0x80000000u))), _mm_set1_epi32(0x7F7FFFFF));
    const __m128 f = _mm_castsi128_ps(_mm_or_si128(_mm_and_si128(huge, clamped), _mm_andnot_si128(huge, bits)));
    const __m128i cvt = _mm_cvttps_epi32(f);
    const __m128i over = _mm_castps_si128(_mm_cmpge_ps(f, _mm_set1_ps(2147483648.0f)));
    return _mm_or_si128(_mm_and_si128(over, _mm_set1_epi32(0x7FFFFFFF)), _mm_andnot_si128(over, cvt));
#endif
}

// Memory access helpers - Hybrid Fast/Slow Path
// Fast path: Direct RDRAM access (masked).
// Slow path: Full runtime->Load/Store

static inline bool Ps2FastRangeIsContiguous(uint32_t offset, uint32_t bytes)
{
    return offset <= (PS2_RAM_SIZE - bytes);
}

static inline uint8_t Ps2FastRead8(const uint8_t *rdram, uint32_t addr)
{
    return rdram[addr & PS2_RAM_MASK];
}

static inline uint16_t Ps2FastRead16(const uint8_t *rdram, uint32_t addr)
{
    const uint32_t offset = addr & PS2_RAM_MASK;
    if (!Ps2FastRangeIsContiguous(offset, sizeof(uint16_t)))
    {
        uint8_t wrapped[sizeof(uint16_t)];
        for (uint32_t i = 0; i < sizeof(uint16_t); ++i)
        {
            wrapped[i] = rdram[(offset + i) & PS2_RAM_MASK];
        }
        uint16_t value;
        std::memcpy(&value, wrapped, sizeof(value));
        return value;
    }

    uint16_t value;
    std::memcpy(&value, rdram + offset, sizeof(value));
    return value;
}

static inline uint32_t Ps2FastRead32(const uint8_t *rdram, uint32_t addr)
{
    const uint32_t offset = addr & PS2_RAM_MASK;
    if (!Ps2FastRangeIsContiguous(offset, sizeof(uint32_t)))
    {
        uint8_t wrapped[sizeof(uint32_t)];
        for (uint32_t i = 0; i < sizeof(uint32_t); ++i)
        {
            wrapped[i] = rdram[(offset + i) & PS2_RAM_MASK];
        }
        uint32_t value;
        std::memcpy(&value, wrapped, sizeof(value));
        return value;
    }

    uint32_t value;
    std::memcpy(&value, rdram + offset, sizeof(value));
    return value;
}

static inline uint64_t Ps2FastRead64(const uint8_t *rdram, uint32_t addr)
{
    const uint32_t offset = addr & PS2_RAM_MASK;
    if (!Ps2FastRangeIsContiguous(offset, sizeof(uint64_t)))
    {
        uint8_t wrapped[sizeof(uint64_t)];
        for (uint32_t i = 0; i < sizeof(uint64_t); ++i)
        {
            wrapped[i] = rdram[(offset + i) & PS2_RAM_MASK];
        }
        uint64_t value;
        std::memcpy(&value, wrapped, sizeof(value));
        return value;
    }

    uint64_t value;
    std::memcpy(&value, rdram + offset, sizeof(value));
    return value;
}

static inline __m128i Ps2FastRead128(const uint8_t *rdram, uint32_t addr)
{
    const uint32_t offset = addr & PS2_RAM_MASK;
    if (!Ps2FastRangeIsContiguous(offset, sizeof(__m128i)))
    {
        alignas(16) uint8_t wrapped[sizeof(__m128i)];
        for (uint32_t i = 0; i < sizeof(__m128i); ++i)
        {
            wrapped[i] = rdram[(offset + i) & PS2_RAM_MASK];
        }
        __m128i value;
        std::memcpy(&value, wrapped, sizeof(value));
        return value;
    }

    __m128i value;
    std::memcpy(&value, rdram + offset, sizeof(value));
    return value;
}

static inline void Ps2FastWrite8(uint8_t *rdram, uint32_t addr, uint8_t value)
{
    rdram[addr & PS2_RAM_MASK] = value;
}

static inline void Ps2FastWrite16(uint8_t *rdram, uint32_t addr, uint16_t value)
{
    const uint32_t offset = addr & PS2_RAM_MASK;
    if (!Ps2FastRangeIsContiguous(offset, sizeof(uint16_t)))
    {
        uint8_t wrapped[sizeof(uint16_t)];
        std::memcpy(wrapped, &value, sizeof(value));
        for (uint32_t i = 0; i < sizeof(uint16_t); ++i)
        {
            rdram[(offset + i) & PS2_RAM_MASK] = wrapped[i];
        }
        return;
    }
    std::memcpy(rdram + offset, &value, sizeof(value));
}

static inline void Ps2FastWrite32(uint8_t *rdram, uint32_t addr, uint32_t value)
{
    const uint32_t offset = addr & PS2_RAM_MASK;
    if (!Ps2FastRangeIsContiguous(offset, sizeof(uint32_t)))
    {
        uint8_t wrapped[sizeof(uint32_t)];
        std::memcpy(wrapped, &value, sizeof(value));
        for (uint32_t i = 0; i < sizeof(uint32_t); ++i)
        {
            rdram[(offset + i) & PS2_RAM_MASK] = wrapped[i];
        }
        return;
    }
    std::memcpy(rdram + offset, &value, sizeof(value));
}

static inline void Ps2FastWrite64(uint8_t *rdram, uint32_t addr, uint64_t value)
{
    const uint32_t offset = addr & PS2_RAM_MASK;
    if (!Ps2FastRangeIsContiguous(offset, sizeof(uint64_t)))
    {
        uint8_t wrapped[sizeof(uint64_t)];
        std::memcpy(wrapped, &value, sizeof(value));
        for (uint32_t i = 0; i < sizeof(uint64_t); ++i)
        {
            rdram[(offset + i) & PS2_RAM_MASK] = wrapped[i];
        }
        return;
    }
    std::memcpy(rdram + offset, &value, sizeof(value));
}

static inline void Ps2FastWrite128(uint8_t *rdram, uint32_t addr, __m128i value)
{
    const uint32_t offset = addr & PS2_RAM_MASK;
    if (!Ps2FastRangeIsContiguous(offset, sizeof(__m128i)))
    {
        alignas(16) uint8_t wrapped[sizeof(__m128i)];
        std::memcpy(wrapped, &value, sizeof(value));
        for (uint32_t i = 0; i < sizeof(__m128i); ++i)
        {
            rdram[(offset + i) & PS2_RAM_MASK] = wrapped[i];
        }
        return;
    }
    std::memcpy(rdram + offset, &value, sizeof(value));
}

#define FAST_READ8(addr) Ps2FastRead8(rdram, (uint32_t)(addr))
#define FAST_READ16(addr) Ps2FastRead16(rdram, (uint32_t)(addr))
#define FAST_READ32(addr) Ps2FastRead32(rdram, (uint32_t)(addr))
#define FAST_READ64(addr) Ps2FastRead64(rdram, (uint32_t)(addr))
#define FAST_READ128(addr) Ps2FastRead128(rdram, (uint32_t)(addr))

#define FAST_WRITE8(addr, val) Ps2FastWrite8(rdram, (uint32_t)(addr), (uint8_t)(val))
#define FAST_WRITE16(addr, val) Ps2FastWrite16(rdram, (uint32_t)(addr), (uint16_t)(val))
#define FAST_WRITE32(addr, val) Ps2FastWrite32(rdram, (uint32_t)(addr), (uint32_t)(val))
#define FAST_WRITE64(addr, val) Ps2FastWrite64(rdram, (uint32_t)(addr), (uint64_t)(val))
#define FAST_WRITE128(addr, val) Ps2FastWrite128(rdram, (uint32_t)(addr), (val))

// Guest memory access. The common case, an address inside main RAM, is decided by one compare and goes
// straight to the host memory; everything else (mirrors, scratchpad, hardware registers, an access that
// wraps at the end of RAM) takes the out-of-line path, which behaves exactly as the macros always did.
// PS2X_EE_PLAIN_MEMORY_MACROS=1 at compile time brings the old macros back.
//
// The program counter and the delay-slot state are only ever looked at by that out-of-line path (a hardware
// handler that raises an exception or suspends the thread), so the generated code keeps them in a local
// (PS2X_EE_FRAME, written by PS2X_PC and PS2X_DELAY_BEGIN/END; ps2recomp/ee_postprocess.py puts them in) and
// they reach the context only there. Hand-written code has no such local and sees the one below, which says
// that the context is already up to date.
struct Ps2xLazyState
{
    uint32_t pc;
    uint32_t branchPc; // 0 outside a delay slot
    bool live;
};
static constexpr Ps2xLazyState ps2xLazy{0u, 0u, false};
#define PS2X_EE_FRAME Ps2xLazyState ps2xLazy{0u, 0u, true}
#define PS2X_PC(value) ((void)(ps2xLazy.pc = (value)))
#define PS2X_PC_SYNC(value) ((void)(ctx->pc = ps2xLazy.pc = (value)))
#define PS2X_DELAY_BEGIN(slotPc, branch) ((void)(ps2xLazy.pc = (slotPc), ps2xLazy.branchPc = (branch)))
#define PS2X_DELAY_END() ((void)(ps2xLazy.branchPc = 0u))

class PS2Runtime;
struct R5900Context;
// `pc` is 0 when the context already holds the program counter; `branchPc` is 0 outside a delay slot.
uint8_t ps2xSlowRead8(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint32_t addr, uint32_t pc, uint32_t branchPc);
uint16_t ps2xSlowRead16(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint32_t addr, uint32_t pc, uint32_t branchPc);
uint32_t ps2xSlowRead32(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint32_t addr, uint32_t pc, uint32_t branchPc);
uint64_t ps2xSlowRead64(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint32_t addr, uint32_t pc, uint32_t branchPc);
__m128i ps2xSlowRead128(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint32_t addr, uint32_t pc, uint32_t branchPc);
void ps2xSlowWrite8(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint32_t addr, uint8_t value, uint32_t pc, uint32_t branchPc);
void ps2xSlowWrite16(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint32_t addr, uint16_t value, uint32_t pc, uint32_t branchPc);
void ps2xSlowWrite32(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint32_t addr, uint32_t value, uint32_t pc, uint32_t branchPc);
void ps2xSlowWrite64(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint32_t addr, uint64_t value, uint32_t pc, uint32_t branchPc);
void ps2xSlowWrite128(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint32_t addr, __m128i value, uint32_t pc, uint32_t branchPc);

#define PS2X_DEFINE_GUEST_ACCESS(bits, type)                                                                      \
    __attribute__((always_inline)) static inline type Ps2GuestRead##bits(uint8_t *rdram, R5900Context *ctx,      \
                                                                         PS2Runtime *runtime,                    \
                                                                         const Ps2xLazyState &lazy,              \
                                                                         uint32_t addr)                          \
    {                                                                                                             \
        if (__builtin_expect(addr <= PS2_RAM_SIZE - static_cast<uint32_t>(sizeof(type)), 1))                      \
        {                                                                                                         \
            type value;                                                                                           \
            std::memcpy(&value, rdram + addr, sizeof(value));                                                     \
            return value;                                                                                         \
        }                                                                                                         \
        return ps2xSlowRead##bits(rdram, ctx, runtime, addr, lazy.live ? lazy.pc : 0u, lazy.branchPc);            \
    }                                                                                                             \
    __attribute__((always_inline)) static inline void Ps2GuestWrite##bits(uint8_t *rdram, R5900Context *ctx,     \
                                                                          PS2Runtime *runtime,                   \
                                                                          const Ps2xLazyState &lazy,             \
                                                                          uint32_t addr, type value)             \
    {                                                                                                             \
        if (__builtin_expect(addr <= PS2_RAM_SIZE - static_cast<uint32_t>(sizeof(type)), 1))                      \
        {                                                                                                         \
            std::memcpy(rdram + addr, &value, sizeof(value));                                                     \
            return;                                                                                               \
        }                                                                                                         \
        ps2xSlowWrite##bits(rdram, ctx, runtime, addr, value, lazy.live ? lazy.pc : 0u, lazy.branchPc);           \
    }
PS2X_DEFINE_GUEST_ACCESS(8, uint8_t)
PS2X_DEFINE_GUEST_ACCESS(16, uint16_t)
PS2X_DEFINE_GUEST_ACCESS(32, uint32_t)
PS2X_DEFINE_GUEST_ACCESS(64, uint64_t)
PS2X_DEFINE_GUEST_ACCESS(128, __m128i)
#undef PS2X_DEFINE_GUEST_ACCESS

// The checkpoint at a backward branch: nothing due is decided here; the rest is out of line and is handed the
// guest memory and the context, since it may run handlers that change both.
bool ps2xEeCheckpointSlow(PS2Runtime *runtime, uint8_t *rdram, R5900Context *ctx, uint32_t cycles) noexcept;
#define PS2X_EE_CHECKPOINT() Ps2EeCheckpoint(runtime, rdram, ctx, 32u)

#if !defined(PS2X_EE_PLAIN_MEMORY_MACROS)
#define READ8(addr) Ps2GuestRead8(rdram, ctx, runtime, ps2xLazy, (uint32_t)(addr))
#define READ16(addr) Ps2GuestRead16(rdram, ctx, runtime, ps2xLazy, (uint32_t)(addr))
#define READ32(addr) Ps2GuestRead32(rdram, ctx, runtime, ps2xLazy, (uint32_t)(addr))
#define READ64(addr) Ps2GuestRead64(rdram, ctx, runtime, ps2xLazy, (uint32_t)(addr))
#define READ128(addr) Ps2GuestRead128(rdram, ctx, runtime, ps2xLazy, (uint32_t)(addr))
#define WRITE8(addr, val) Ps2GuestWrite8(rdram, ctx, runtime, ps2xLazy, (uint32_t)(addr), (uint8_t)(val))
#define WRITE16(addr, val) Ps2GuestWrite16(rdram, ctx, runtime, ps2xLazy, (uint32_t)(addr), (uint16_t)(val))
#define WRITE32(addr, val) Ps2GuestWrite32(rdram, ctx, runtime, ps2xLazy, (uint32_t)(addr), (uint32_t)(val))
#define WRITE64(addr, val) Ps2GuestWrite64(rdram, ctx, runtime, ps2xLazy, (uint32_t)(addr), (uint64_t)(val))
#define WRITE128(addr, val) Ps2GuestWrite128(rdram, ctx, runtime, ps2xLazy, (uint32_t)(addr), (__m128i)(val))
#else
#define READ8(addr) ([&]() -> uint8_t {                       \
    uint32_t _addr = (uint32_t)(addr);                        \
    return PS2Runtime::isSpecialAddress(_addr)                \
        ? runtime->Load8(rdram, ctx, _addr)                   \
        : FAST_READ8(_addr); }())

#define READ16(addr) ([&]() -> uint16_t {                     \
    uint32_t _addr = (uint32_t)(addr);                        \
    return PS2Runtime::isSpecialAddress(_addr)                \
        ? runtime->Load16(rdram, ctx, _addr)                  \
        : FAST_READ16(_addr); }())

#define READ32(addr) ([&]() -> uint32_t {                     \
    uint32_t _addr = (uint32_t)(addr);                        \
    return PS2Runtime::isSpecialAddress(_addr)                \
        ? runtime->Load32(rdram, ctx, _addr)                  \
        : FAST_READ32(_addr); }())

#define READ64(addr) ([&]() -> uint64_t {                     \
    uint32_t _addr = (uint32_t)(addr);                        \
    return PS2Runtime::isSpecialAddress(_addr)                \
        ? runtime->Load64(rdram, ctx, _addr)                  \
        : FAST_READ64(_addr); }())

#define READ128(addr) ([&]() -> __m128i {                     \
    uint32_t _addr = (uint32_t)(addr);                        \
    return PS2Runtime::isSpecialAddress(_addr)                \
        ? runtime->Load128(rdram, ctx, _addr)                 \
        : FAST_READ128(_addr); }())

#define WRITE8(addr, val)                                                            \
    do                                                                               \
    {                                                                                \
        uint32_t _addr = (addr);                                                     \
        if (PS2Runtime::isSpecialAddress(_addr))                                     \
            runtime->Store8(rdram, ctx, _addr, (val));                               \
        else                                                                         \
        {                                                                            \
            ps2TraceGuestWrite(rdram, _addr, 1u, (uint8_t)(val), 0u, "WRITE8", ctx); \
            FAST_WRITE8(_addr, (val));                                               \
        }                                                                            \
    } while (0)

#define WRITE16(addr, val)                                                             \
    do                                                                                 \
    {                                                                                  \
        uint32_t _addr = (addr);                                                       \
        if (PS2Runtime::isSpecialAddress(_addr))                                       \
            runtime->Store16(rdram, ctx, _addr, (val));                                \
        else                                                                           \
        {                                                                              \
            ps2TraceGuestWrite(rdram, _addr, 2u, (uint16_t)(val), 0u, "WRITE16", ctx); \
            FAST_WRITE16(_addr, (val));                                                \
        }                                                                              \
    } while (0)

#define WRITE32(addr, val)                                                             \
    do                                                                                 \
    {                                                                                  \
        uint32_t _addr = (addr);                                                       \
        if (PS2Runtime::isSpecialAddress(_addr))                                       \
            runtime->Store32(rdram, ctx, _addr, (val));                                \
        else                                                                           \
        {                                                                              \
            ps2TraceGuestWrite(rdram, _addr, 4u, (uint32_t)(val), 0u, "WRITE32", ctx); \
            FAST_WRITE32(_addr, (val));                                                \
        }                                                                              \
    } while (0)

#define WRITE64(addr, val)                                                             \
    do                                                                                 \
    {                                                                                  \
        uint32_t _addr = (addr);                                                       \
        if (PS2Runtime::isSpecialAddress(_addr))                                       \
            runtime->Store64(rdram, ctx, _addr, (val));                                \
        else                                                                           \
        {                                                                              \
            ps2TraceGuestWrite(rdram, _addr, 8u, (uint64_t)(val), 0u, "WRITE64", ctx); \
            FAST_WRITE64(_addr, (val));                                                \
        }                                                                              \
    } while (0)

#define WRITE128(addr, val)                                                          \
    do                                                                               \
    {                                                                                \
        uint32_t _addr = (addr);                                                     \
        __m128i _value = (val);                                                      \
        if (PS2Runtime::isSpecialAddress(_addr))                                     \
            runtime->Store128(rdram, ctx, _addr, _value);                            \
        else                                                                         \
        {                                                                            \
            const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); \
            const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); \
            ps2TraceGuestWrite(rdram, _addr, 16u, _lo, _hi, "WRITE128", ctx);        \
            FAST_WRITE128(_addr, _value);                                            \
        }                                                                            \
    } while (0)

#endif // PS2X_EE_PLAIN_MEMORY_MACROS

// Packed Compare Greater Than (PCGT)
#define PS2_PCGTW(a, b) _mm_cmpgt_epi32((__m128i)(a), (__m128i)(b))
#define PS2_PCGTH(a, b) _mm_cmpgt_epi16((__m128i)(a), (__m128i)(b))
#define PS2_PCGTB(a, b) _mm_cmpgt_epi8((__m128i)(a), (__m128i)(b))

// Packed Add with Signed Saturation Word (PADDSW)
inline __m128i ps2_paddsw(__m128i a, __m128i b)
{

    __m128i sum = _mm_add_epi32(a, b);
    // Check for over/underflow. Clamp to either INT32_MIN/INT32_MAX.
    __m128i overflow = _mm_and_si128(_mm_xor_si128(a, sum),
                                     _mm_xor_si128(b, sum));
    // Extract input sign.
    overflow = _mm_srai_epi32(overflow, 31);
    __m128i input_sign = _mm_srai_epi32(a, 31);
    // Select saturation value based on overflow sign.
    #if defined(__SSE4_1__)
    __m128i sat = _mm_blendv_epi8(
        _mm_set1_epi32(INT32_MAX),
        _mm_set1_epi32(INT32_MIN),
        input_sign);
    return _mm_blendv_epi8(sum, sat, overflow);
    #else
    __m128i sat = _mm_or_si128(_mm_and_si128(input_sign, _mm_set1_epi32(INT32_MIN)),
                               _mm_andnot_si128(input_sign, _mm_set1_epi32(INT32_MAX)));
    return _mm_or_si128(_mm_and_si128(overflow, sat),
                        _mm_andnot_si128(overflow, sum));
    #endif
}
#define PS2_PADDSW(a, b) ps2_paddsw((__m128i)(a), (__m128i)(b))

// Packed Subtract with Signed Saturation Word (PSUBSW)
inline __m128i ps2_psubsw(__m128i a, __m128i b)
{
    __m128i diff = _mm_sub_epi32(a, b);
    // Check for over/underflow. Clamp to either INT32_MIN/INT32_MAX.
    __m128i overflow = _mm_and_si128(_mm_xor_si128(a, b),
                                     _mm_xor_si128(a, diff));
    // Extract input sign.
    overflow = _mm_srai_epi32(overflow, 31);
    __m128i input_sign = _mm_srai_epi32(a, 31);
    // Select saturation value based on overflow sign.
    #if defined(__SSE4_1__)
    __m128i sat = _mm_blendv_epi8(
        _mm_set1_epi32(INT32_MAX),
        _mm_set1_epi32(INT32_MIN),
        input_sign);
    return _mm_blendv_epi8(diff, sat, overflow);
    #else
    __m128i sat = _mm_or_si128(_mm_and_si128(input_sign, _mm_set1_epi32(INT32_MIN)),
                               _mm_andnot_si128(input_sign, _mm_set1_epi32(INT32_MAX)));
    return _mm_or_si128(_mm_and_si128(overflow, sat),
                        _mm_andnot_si128(overflow, diff));
    #endif

}
#define PS2_PSUBSW(a, b) ps2_psubsw((__m128i)(a), (__m128i)(b))

// Packed Compare Equal (PCEQ)
#define PS2_PCEQW(a, b) _mm_cmpeq_epi32((__m128i)(a), (__m128i)(b))
#define PS2_PCEQH(a, b) _mm_cmpeq_epi16((__m128i)(a), (__m128i)(b))
#define PS2_PCEQB(a, b) _mm_cmpeq_epi8((__m128i)(a), (__m128i)(b))

// Packed Absolute (PABS)
#define PS2_PABSW(a) _mm_abs_epi32((__m128i)(a))
#define PS2_PABSH(a) _mm_abs_epi16((__m128i)(a))
#define PS2_PABSB(a) _mm_abs_epi8((__m128i)(a))

// Packed Pack (PPAC) - Packs larger elements into smaller ones
inline __m128i ps2_paddu32(__m128i a, __m128i b)
{
    __m128i sum = _mm_add_epi32(a, b);
    __m128i overflow = _mm_cmpgt_epi32(_mm_xor_si128(a, _mm_set1_epi32(INT32_MIN)),
                                       _mm_xor_si128(sum, _mm_set1_epi32(INT32_MIN)));
    return _mm_or_si128(sum, overflow); // overflow lanes become all-1s
}
inline __m128i ps2_psubu32(__m128i a, __m128i b)
{
    __m128i diff = _mm_sub_epi32(a, b);
    // Underflow if a < b (unsigned). Clamp to 0.
    __m128i underflow = _mm_cmpgt_epi32(_mm_xor_si128(b, _mm_set1_epi32(INT32_MIN)),
                                        _mm_xor_si128(a, _mm_set1_epi32(INT32_MIN)));
    return _mm_andnot_si128(underflow, diff); // underflow lanes become 0
}

inline __m128i ps2_ppacw(__m128i rs, __m128i rt)
{
    // rs = [rs3 rs2 rs1 rs0], rt = [rt3 rt2 rt1 rt0]
    return _mm_castps_si128(_mm_shuffle_ps(_mm_castsi128_ps(rt), _mm_castsi128_ps(rs), _MM_SHUFFLE(2, 0, 2, 0)));
}
#define PS2_PPACW(a, b) ps2_ppacw((__m128i)(a), (__m128i)(b))

inline __m128i ps2_ppach(__m128i rs, __m128i rt)
{
    const __m128i mask = _mm_setr_epi8(
        0, 1, 4, 5, 8, 9, 12, 13,  // from rt: halfwords 0,2,4,6
        0, 1, 4, 5, 8, 9, 12, 13); // from rs: halfwords 0,2,4,6
    __m128i lo = _mm_shuffle_epi8(rt, mask);
    __m128i hi = _mm_shuffle_epi8(rs, mask);
    return _mm_unpacklo_epi64(lo, hi);
}
#define PS2_PPACH(a, b) ps2_ppach((__m128i)(a), (__m128i)(b))

inline __m128i ps2_ppacb(__m128i rs, __m128i rt)
{
    const __m128i mask = _mm_setr_epi8(
        0, 2, 4, 6, 8, 10, 12, 14,  // from rt: bytes 0,2,4,6,8,10,12,14
        0, 2, 4, 6, 8, 10, 12, 14); // from rs
    __m128i lo = _mm_shuffle_epi8(rt, mask);
    __m128i hi = _mm_shuffle_epi8(rs, mask);
    return _mm_unpacklo_epi64(lo, hi);
}
#define PS2_PPACB(a, b) ps2_ppacb((__m128i)(a), (__m128i)(b))

// Packed Interleave (PINT)
#define PS2_PINTH(a, b) _mm_unpacklo_epi16(_mm_shuffle_epi32((__m128i)(b), _MM_SHUFFLE(3, 2, 1, 0)), _mm_shuffle_epi32((__m128i)(a), _MM_SHUFFLE(3, 2, 1, 0)))
#define PS2_PINTEH(a, b) _mm_unpackhi_epi16(_mm_shuffle_epi32((__m128i)(b), _MM_SHUFFLE(3, 2, 1, 0)), _mm_shuffle_epi32((__m128i)(a), _MM_SHUFFLE(3, 2, 1, 0)))

// Packed Multiply-Add (PMADD)
#define PS2_PMADDW(a, b) _mm_add_epi32(_mm_mullo_epi32(_mm_shuffle_epi32((__m128i)(a), _MM_SHUFFLE(1, 0, 3, 2)), _mm_shuffle_epi32((__m128i)(b), _MM_SHUFFLE(1, 0, 3, 2))), _mm_mullo_epi32(_mm_shuffle_epi32((__m128i)(a), _MM_SHUFFLE(3, 2, 1, 0)), _mm_shuffle_epi32((__m128i)(b), _MM_SHUFFLE(3, 2, 1, 0))))

// Packed Variable Shifts
// PSLLVW/PSRLVW/PSRAVW: only words 0 and 2 of the value take part; each is shifted by the low five
// bits of the same word of the shift operand and the 32-bit result is sign-extended into the
// corresponding 64-bit half of the destination.
static inline __m128i ps2VariableWordShift(__m128i value, __m128i amounts, int kind)
{
    alignas(16) uint32_t v[4], n[4];
    std::memcpy(v, &value, sizeof(v));
    std::memcpy(n, &amounts, sizeof(n));
    int64_t out[2];
    for (int half = 0; half < 2; ++half)
    {
        const uint32_t word = v[half * 2], count = n[half * 2] & 31u;
        const uint32_t shifted = kind == 0 ? (word << count)
                               : kind == 1 ? (word >> count)
                                           : static_cast<uint32_t>(static_cast<int32_t>(word) >> count);
        out[half] = static_cast<int64_t>(static_cast<int32_t>(shifted));
    }
    return _mm_set_epi64x(out[1], out[0]);
}
#define PS2_PSLLVW(a, b) ps2VariableWordShift((__m128i)(a), (__m128i)(b), 0)
#define PS2_PSRLVW(a, b) ps2VariableWordShift((__m128i)(a), (__m128i)(b), 1)
#define PS2_PSRAVW(a, b) ps2VariableWordShift((__m128i)(a), (__m128i)(b), 2)

inline __m128i _mm_custom_sllv_epi32(__m128i a, __m128i count)
{
    alignas(16) int32_t a_arr[4];
    alignas(16) int32_t count_arr[4];
    alignas(16) int32_t result[4];

    std::memcpy(a_arr, &a, sizeof(a));
    std::memcpy(count_arr, &count, sizeof(count));

    for (int i = 0; i < 4; i++)
    {
        result[i] = a_arr[i] << (count_arr[i] & 0x1F);
    }

    __m128i out;
    std::memcpy(&out, result, sizeof(out));
    return out;
}

inline __m128i _mm_custom_srlv_epi32(__m128i a, __m128i count)
{
    int32_t a_arr[4], count_arr[4], result[4];
    _mm_storeu_si128((__m128i *)a_arr, a);
    _mm_storeu_si128((__m128i *)count_arr, count);
    for (int i = 0; i < 4; i++)
    {
        result[i] = (uint32_t)a_arr[i] >> (count_arr[i] & 0x1F);
    }
    return _mm_loadu_si128((__m128i *)result);
}

inline __m128i _mm_custom_srav_epi32(__m128i a, __m128i count)
{
    int32_t a_arr[4], count_arr[4], result[4];
    _mm_storeu_si128((__m128i *)a_arr, a);
    _mm_storeu_si128((__m128i *)count_arr, count);
    for (int i = 0; i < 4; i++)
    {
        result[i] = a_arr[i] >> (count_arr[i] & 0x1F);
    }
    return _mm_loadu_si128((__m128i *)result);
}

// PMFHL function implementations
inline __m128i ps2_u64_to_epi64_pair(uint64_t value)
{
    return _mm_set1_epi64x(static_cast<long long>(value));
}

#define PS2_PMFHL_LW(hi, lo) _mm_unpacklo_epi64(ps2_u64_to_epi64_pair(lo), ps2_u64_to_epi64_pair(hi))
#define PS2_PMFHL_UW(hi, lo) _mm_unpackhi_epi64(ps2_u64_to_epi64_pair(lo), ps2_u64_to_epi64_pair(hi))
#define PS2_PMFHL_SLW(hi, lo) _mm_packs_epi32(ps2_u64_to_epi64_pair(lo), ps2_u64_to_epi64_pair(hi))
#define PS2_PMFHL_LH(hi, lo) _mm_shuffle_epi32(_mm_packs_epi32(ps2_u64_to_epi64_pair(lo), ps2_u64_to_epi64_pair(hi)), _MM_SHUFFLE(3, 1, 2, 0))
#define PS2_PMFHL_SH(hi, lo) _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_packs_epi32(ps2_u64_to_epi64_pair(lo), ps2_u64_to_epi64_pair(hi)), _MM_SHUFFLE(3, 1, 2, 0)), _MM_SHUFFLE(3, 1, 2, 0))

// FPU (COP1) operations
#define FPU_SET_ACC(ctx, res) (ctx->f_acc = res)
#define FPU_ADD_S(a, b) ((float)(a) + (float)(b))
#define FPU_SUB_S(a, b) ((float)(a) - (float)(b))
#define FPU_MUL_S(a, b) ((float)(a) * (float)(b))
// EE FPU semantics that differ from IEEE (the EE has no infinities or NaNs):
//  - x / 0 is +/-FLT_MAX with the sign of x xor the sign of the zero (D flag, or I for 0/0);
//  - SQRT and RSQRT use the magnitude of their operand; RSQRT is fs / sqrt(ft), +/-FLT_MAX for ft == 0;
//  - CVT.W.S always truncates toward zero and saturates.
static inline float ps2FpuMaxWithSign(float a, float b)
{
    uint32_t ua, ub;
    std::memcpy(&ua, &a, sizeof(ua));
    std::memcpy(&ub, &b, sizeof(ub));
    const uint32_t bits = ((ua ^ ub) & 0x80000000u) | 0x7F7FFFFFu;
    float result;
    std::memcpy(&result, &bits, sizeof(result));
    return result;
}
template <typename Context>
static inline float ps2FpuDiv(Context *ctx, float a, float b)
{
    if (b == 0.0f)
    {
        ctx->fcr31 |= (a == 0.0f) ? 0x20040u : 0x10020u; // I / D cause and sticky flags
        return ps2FpuMaxWithSign(a, b);
    }
    return a / b;
}
template <typename Context>
static inline float ps2FpuRsqrt(Context *ctx, float a, float b)
{
    uint32_t divisorBits;
    std::memcpy(&divisorBits, &b, sizeof(divisorBits));
    if ((divisorBits & 0x7F800000u) == 0u) // zero or denormal: largest value, with the sign of ft
    {
        ctx->fcr31 |= 0x10020u;
        (void)a;
        const uint32_t resultBits = (divisorBits & 0x80000000u) | 0x7F7FFFFFu;
        float result;
        std::memcpy(&result, &resultBits, sizeof(result));
        return result;
    }
    return a / sqrtf(fabsf(b));
}
static inline int32_t ps2FpuCvtW(float value)
{
    if (!(value < 2147483648.0f))
        return (value != value) ? 0 : 0x7FFFFFFF;
    if (value <= -2147483648.0f)
        return static_cast<int32_t>(0x80000000u);
    return static_cast<int32_t>(value);
}
#define FPU_DIV_S(ctx, a, b) ps2FpuDiv((ctx), (float)(a), (float)(b))
#define FPU_RSQRT_S(ctx, a, b) ps2FpuRsqrt((ctx), (float)(a), (float)(b))
#define FPU_SQRT_S(a) sqrtf(fabsf((float)(a)))
#define FPU_ABS_S(a) fabsf((float)(a))
#define FPU_MOV_S(a) ((float)(a))
#define FPU_NEG_S(a) (-(float)(a))
#define FPU_ROUND_L_S(a) ((int64_t)roundf((float)(a)))
#define FPU_TRUNC_L_S(a) ((int64_t)(float)(a))
#define FPU_CEIL_L_S(a) ((int64_t)ceilf((float)(a)))
#define FPU_FLOOR_L_S(a) ((int64_t)floorf((float)(a)))
#define FPU_ROUND_W_S(a) ((int32_t)nearbyintf((float)(a)))
#define FPU_TRUNC_W_S(a) ((int32_t)(float)(a))
#define FPU_CEIL_W_S(a) ((int32_t)ceilf((float)(a)))
#define FPU_FLOOR_W_S(a) ((int32_t)floorf((float)(a)))
#define FPU_CVT_S_W(a) ((float)(int32_t)(a))
#define FPU_CVT_S_L(a) ((float)(int64_t)(a))
#define FPU_CVT_W_S(a) ps2FpuCvtW((float)(a))
#define FPU_CVT_L_S(a) ((int64_t)(float)(a))
#define FPU_C_F_S(a, b) (0)
#define FPU_C_UN_S(a, b) (isnan((float)(a)) || isnan((float)(b)))
#define FPU_C_EQ_S(a, b) ((float)(a) == (float)(b))
#define FPU_C_UEQ_S(a, b) ((float)(a) == (float)(b) || isnan((float)(a)) || isnan((float)(b)))
#define FPU_C_OLT_S(a, b) ((float)(a) < (float)(b))
#define FPU_C_ULT_S(a, b) ((float)(a) < (float)(b) || isnan((float)(a)) || isnan((float)(b)))
#define FPU_C_OLE_S(a, b) ((float)(a) <= (float)(b))
#define FPU_C_ULE_S(a, b) ((float)(a) <= (float)(b) || isnan((float)(a)) || isnan((float)(b)))
#define FPU_C_SF_S(a, b) (0)
#define FPU_C_NGLE_S(a, b) (isnan((float)(a)) || isnan((float)(b)))
#define FPU_C_SEQ_S(a, b) ((float)(a) == (float)(b))
#define FPU_C_NGL_S(a, b) ((float)(a) == (float)(b) || isnan((float)(a)) || isnan((float)(b)))
#define FPU_C_LT_S(a, b) ((float)(a) < (float)(b))
#define FPU_C_NGE_S(a, b) ((float)(a) < (float)(b) || isnan((float)(a)) || isnan((float)(b)))
#define FPU_C_LE_S(a, b) ((float)(a) <= (float)(b))
#define FPU_C_NGT_S(a, b) ((float)(a) <= (float)(b) || isnan((float)(a)) || isnan((float)(b)))

// QFSRV: Quadword Funnel Shift Right Variable
// Concatenates rs || rt (256 bits) and right-shifts by SA bits, taking lower 128 bits.
inline __m128i ps2_qfsrv(__m128i rs, __m128i rt, uint32_t sa)
{
    if (sa == 0)
        return rt;
    if (sa >= 128)
    {
        if (sa >= 256)
            return _mm_setzero_si128();
        uint32_t shift = sa - 128;
        if (shift == 0)
            return rs;
        // Shift rs right by (sa-128) bits
        uint32_t byteShift = shift / 8;
        uint32_t bitShift = shift % 8;
        // Byte shift rs right
        alignas(16) uint8_t buf[16] = {};
        alignas(16) uint8_t src[16];
        _mm_store_si128((__m128i *)src, rs);
        for (uint32_t i = 0; i + byteShift < 16; i++)
            buf[i] = src[i + byteShift];
        __m128i result = _mm_load_si128((__m128i *)buf);
        if (bitShift > 0)
            result = _mm_or_si128(_mm_srli_epi64(result, bitShift),
                                  _mm_slli_epi64(_mm_bsrli_si128(result, 8), 64 - bitShift));
        return result;
    }
    // sa is 1..127: result = (rs || rt) >> sa, lower 128 bits
    uint32_t byteShift = sa / 8;
    uint32_t bitShift = sa % 8;
    alignas(16) uint8_t combined[32];
    _mm_store_si128((__m128i *)(combined), rt);      // low 128 bits
    _mm_store_si128((__m128i *)(combined + 16), rs); // high 128 bits
    // Shift right by byteShift bytes
    alignas(16) uint8_t shifted[16];
    for (uint32_t i = 0; i < 16; i++)
        shifted[i] = (i + byteShift < 32) ? combined[i + byteShift] : 0;
    __m128i result = _mm_load_si128((__m128i *)shifted);
    if (bitShift > 0)
    {
        uint8_t extra = (byteShift + 16 < 32) ? combined[byteShift + 16] : 0;
        __m128i hi_byte = _mm_insert_epi8(_mm_setzero_si128(), extra, 15);
        alignas(16) uint8_t src32[32];
        for (uint32_t i = 0; i < 32; i++)
            src32[i] = combined[i];
        uint64_t lo0, lo1, hi0, hi1;
        std::memcpy(&lo0, src32, 8);
        std::memcpy(&lo1, src32 + 8, 8);
        std::memcpy(&hi0, src32 + 16, 8);
        std::memcpy(&hi1, src32 + 24, 8);
        // 256-bit right shift by sa bits
        uint64_t r0, r1;
        if (sa < 64)
        {
            r0 = (lo0 >> sa) | (lo1 << (64 - sa));
            r1 = (lo1 >> sa) | (hi0 << (64 - sa));
        }
        else if (sa < 128)
        {
            uint32_t s = sa - 64;
            if (s == 0)
            {
                r0 = lo1;
                r1 = hi0;
            }
            else
            {
                r0 = (lo1 >> s) | (hi0 << (64 - s));
                r1 = (hi0 >> s) | (hi1 << (64 - s));
            }
        }
        else
        {
            r0 = 0;
            r1 = 0; // handled above
        }
        result = _mm_set_epi64x((long long)r1, (long long)r0);
    }
    return result;
}
#define PS2_QFSRV(rs, rt, sa) ps2_qfsrv((__m128i)(rs), (__m128i)(rt), (uint32_t)(sa))
#define PS2_PCPYLD(rs, rt) _mm_unpacklo_epi64(rt, rs)
#define PS2_PEXEH(rs) _mm_shufflelo_epi16(_mm_shufflehi_epi16(rs, _MM_SHUFFLE(3, 0, 1, 2)), _MM_SHUFFLE(3, 0, 1, 2))
#define PS2_PEXEW(rs) _mm_shuffle_epi32(rs, _MM_SHUFFLE(3, 0, 1, 2))
#define PS2_PROT3W(rs) _mm_shuffle_epi32(rs, _MM_SHUFFLE(3, 0, 2, 1))

// Additional VU0 operations
#define PS2_VSQRT(x) sqrtf(x)
#define PS2_VRSQRT(x) (1.0f / sqrtf(x))

// General registers are 128 bits wide, but almost every instruction touches only the low 64 (or 32): those
// read and write that part of the register in place instead of rebuilding the whole vector.
__attribute__((always_inline)) static inline uint32_t Ps2GprLow32(const __m128i *reg)
{
    uint32_t value;
    std::memcpy(&value, reg, sizeof(value));
    return value;
}
__attribute__((always_inline)) static inline uint64_t Ps2GprLow64(const __m128i *reg)
{
    uint64_t value;
    std::memcpy(&value, reg, sizeof(value));
    return value;
}
#define GPR_U32(ctx_ptr, reg_idx) ((reg_idx == 0) ? 0U : Ps2GprLow32(&ctx_ptr->r[reg_idx]))
#define GPR_S32(ctx_ptr, reg_idx) ((reg_idx == 0) ? 0 : static_cast<int32_t>(Ps2GprLow32(&ctx_ptr->r[reg_idx])))
#define GPR_U64(ctx_ptr, reg_idx) ((reg_idx == 0) ? 0ULL : static_cast<uint64_t>(Ps2GprLow64(&ctx_ptr->r[reg_idx])))
#define GPR_S64(ctx_ptr, reg_idx) ((reg_idx == 0) ? 0LL : static_cast<long long>(Ps2GprLow64(&ctx_ptr->r[reg_idx])))
#define GPR_VEC(ctx_ptr, reg_idx) ((reg_idx == 0) ? _mm_setzero_si128() : ctx_ptr->r[reg_idx])

template <typename Context>
__attribute__((always_inline)) static inline void Ps2SetGprLow64Value(Context *ctx, int reg, uint64_t value)
{
    if (reg != 0)
        std::memcpy(&ctx->r[reg], &value, sizeof(value));
}
template <typename Context>
static inline void Ps2SetGprLow64(Context *ctx, int reg, __m128i new_low)
{
    Ps2SetGprLow64Value(ctx, reg, static_cast<uint64_t>(_mm_cvtsi128_si64(new_low)));
}

#define SET_GPR_U32(ctx_ptr, reg_idx, val)                                \
    do                                                                    \
    {                                                                     \
        if ((reg_idx) != 0)                                               \
        {                                                                 \
            Ps2SetGprLow64Value(ctx_ptr, reg_idx, (uint64_t)(int64_t)(int32_t)(val)); \
        }                                                                 \
    } while (0)


#define SET_GPR_ZE32(ctx_ptr, reg_idx, val)                               \
    do                                                                    \
    {                                                                     \
        if ((reg_idx) != 0)                                               \
        {                                                                 \
            Ps2SetGprLow64Value(ctx_ptr, reg_idx, (uint64_t)(int64_t)(uint32_t)(val)); \
        }                                                                 \
    } while (0)

#define SET_GPR_S32(ctx_ptr, reg_idx, val)                                \
    do                                                                    \
    {                                                                     \
        if ((reg_idx) != 0)                                               \
        {                                                                 \
            Ps2SetGprLow64Value(ctx_ptr, reg_idx, (uint64_t)(int64_t)(int32_t)(val)); \
        }                                                                 \
    } while (0)

#define SET_GPR_U64(ctx_ptr, reg_idx, val)                       \
    do                                                           \
    {                                                            \
        if ((reg_idx) != 0)                                      \
        {                                                        \
            Ps2SetGprLow64Value(ctx_ptr, reg_idx, (uint64_t)(int64_t)(val)); \
        }                                                        \
    } while (0)

#define SET_GPR_S64(ctx_ptr, reg_idx, val) SET_GPR_U64(ctx_ptr, reg_idx, val)

#define SET_GPR_VEC(ctx_ptr, reg_idx, val) \
    do                                     \
    {                                      \
        if (reg_idx != 0)                  \
            ctx_ptr->r[reg_idx] = (val);   \
    } while (0)

#include "runtime/ee_scheduler.h"
__attribute__((always_inline)) static inline bool Ps2EeCheckpoint(PS2Runtime *runtime, uint8_t *rdram, R5900Context *ctx,
                                                                  uint32_t cycles)
{
    if (__builtin_expect(runtime->eeSchedulerPtr()->checkpointQuick(cycles), 1))
        return false;
    return ps2xEeCheckpointSlow(runtime, rdram, ctx, cycles);
}

extern uint64_t g_ps2xGuestTransferSequence;
extern const bool g_ps2xDirectCallInline;
// A JAL to a fixed target: what dispatchGuestBranch() does for a call to a function that exists, without leaving the
// caller. Anything unusual (no generated function there, diagnostics on) goes to dispatchGuestBranch().
__attribute__((always_inline)) static inline bool ps2xDirectCall(PS2Runtime *runtime, uint8_t *rdram, R5900Context *ctx,
                                                                 uint32_t target, uint32_t sourcePc, uint32_t returnPc)
{
    const uint32_t slot = (target - g_ps2RecompiledFunctionTableBase) >> 2;
    PS2Runtime::RecompiledFunction fn = nullptr;
    if (__builtin_expect(g_ps2xDirectCallInline && (target & 3u) == 0u && target >= g_ps2RecompiledFunctionTableBase &&
                             slot < g_ps2RecompiledFunctionTableSlotCount,
                         1))
        fn = g_ps2RecompiledFunctionTable[slot];
    if (__builtin_expect(fn == nullptr, 0))
        return runtime->dispatchGuestBranch(rdram, ctx, target, sourcePc, returnPc, PS2Runtime::GuestBranchKind::DirectCall, "JAL");
    ctx->pc = target;
    EeScheduler *scheduler = runtime->eeSchedulerPtr();
    if (scheduler && scheduler->checkpointDueFast(EeScheduler::kGuestDispatchCycles))
    {
        ++g_ps2xGuestTransferSequence;
        return false;
    }
    const uint64_t entryTransfer = g_ps2xGuestTransferSequence;
    fn(rdram, ctx, runtime);
    if (g_ps2xGuestTransferSequence != entryTransfer)
        return false;
    if (runtime->stopRequestedRelaxed() || ctx->pc == 0u)
    {
        ++g_ps2xGuestTransferSequence;
        return false;
    }
    if (ctx->pc == target)
        ctx->pc = returnPc;
    if (ctx->pc != returnPc)
    {
        ++g_ps2xGuestTransferSequence;
        return false;
    }
    return true;
}

#endif // PS2_RUNTIME_MACROS_H
