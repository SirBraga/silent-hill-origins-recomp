// Upper-instruction bodies, shared by the interpreter and the recompiled blocks.
#pragma once
#include "runtime/ps2_vu1.h"
#include "ps2_vu1_detail.h"

#include <cmath>
#include <cstring>
#include <limits>
#if defined(PS2X_VU_SIMD)
#endif

namespace
{
#if defined(PS2X_VU_SIMD)
    inline void normalizeVuVector(float output[4], const float input[4])
    {
        const uint32x4_t bits = vreinterpretq_u32_f32(vld1q_f32(input));
        const uint32x4_t exponent = vandq_u32(bits, vdupq_n_u32(0x7F800000u));
        const uint32x4_t sign = vandq_u32(bits, vdupq_n_u32(0x80000000u));
        const uint32x4_t finiteMaximum = vorrq_u32(sign, vdupq_n_u32(0x7F7FFFFFu));
        uint32x4_t normalized = vbslq_u32(vceqq_u32(exponent, vdupq_n_u32(0u)), sign, bits);
        normalized = vbslq_u32(vceqq_u32(exponent, vdupq_n_u32(0x7F800000u)), finiteMaximum, normalized);
        vst1q_f32(output, vreinterpretq_f32_u32(normalized));
    }
#endif

#if defined(PS2X_VU_SIMD)
    // Operand of an add/sub/mul that runs with flush-to-zero: only infinities and NaNs need replacing
    // (by the largest finite value of the same sign).
    inline void vuClampVector(float output[4], const float input[4])
    {
        const uint32x4_t bits = vreinterpretq_u32_f32(vld1q_f32(input));
        const uint32x4_t sign = vandq_u32(bits, vdupq_n_u32(0x80000000u));
        const uint32x4_t magnitude = vminq_u32(vbicq_u32(bits, vdupq_n_u32(0x80000000u)), vdupq_n_u32(0x7F7FFFFFu));
        vst1q_f32(output, vreinterpretq_f32_u32(vorrq_u32(magnitude, sign)));
    }
#endif

    // add/sub/mul family (the ops that go through fmacI()), as opposed to MAX/MINI/ABS/ITOF/FTOI/CLIP.
    constexpr bool vuIsFmacArithmetic(uint32_t instr)
    {
        const uint32_t op = instr & 0x3Fu;
        if (op < 0x3Cu)
            return op < 0x30u && !(op >= 0x10u && op <= 0x17u) && op != 0x1Du && op != 0x1Fu && op != 0x2Bu && op != 0x2Fu;
        const uint32_t special = (instr & 0x3u) | ((instr >> 4) & 0x7Cu);
        return special <= 0x0Fu || (special >= 0x18u && special <= 0x1Cu) || special == 0x1Eu ||
               (special >= 0x20u && special <= 0x2Au) || (special >= 0x2Cu && special <= 0x2Eu);
    }

    inline int32_t vuFloatToInt(float value, float scale)
    {
        const double scaled = static_cast<double>(value) * static_cast<double>(scale);
        if (scaled >= static_cast<double>(std::numeric_limits<int32_t>::max()))
            return std::numeric_limits<int32_t>::max();
        if (scaled <= static_cast<double>(std::numeric_limits<int32_t>::min()))
            return std::numeric_limits<int32_t>::min();
        return static_cast<int32_t>(scaled);
    }
}


namespace
{
    // Inline copies of the interpreter helpers so that an instruction word
    // known at compile time folds down to its arithmetic.
    inline float vuNormalizeOperand(float value)
    {
        uint32_t bits = 0;
        std::memcpy(&bits, &value, sizeof(bits));
        const uint32_t exponent = (bits >> 23) & 0xFFu;
        if (exponent == 0u)
            bits &= 0x80000000u;
        else if (exponent == 0xFFu)
            bits = (bits & 0x80000000u) | 0x7F7FFFFFu;
        std::memcpy(&value, &bits, sizeof(value));
        return value;
    }

    inline float vuBroadcast(const float *vf, uint8_t bc)
    {
        return vuNormalizeOperand(vf[bc & 3u]);
    }

    inline void vuApplyDest(float *dst, const float *result, uint8_t dest)
    {
        if (dest & 0x8u) dst[0] = result[0];
        if (dest & 0x4u) dst[1] = result[1];
        if (dest & 0x2u) dst[2] = result[2];
        if (dest & 0x1u) dst[3] = result[3];
    }

#if defined(PS2X_VU_SIMD)
    // normalizeVuResults without the per-lane flags.
    inline void vuNormalizeValues(float *result, uint8_t dest)
    {
        const uint32x4_t bits = vreinterpretq_u32_f32(vld1q_f32(result));
        const uint32x4_t sign = vandq_u32(bits, vdupq_n_u32(0x80000000u));
        const uint32x4_t exponent = vandq_u32(bits, vdupq_n_u32(0x7f800000u));
        const uint32x4_t zeroExponent = vceqq_u32(exponent, vdupq_n_u32(0));
        const uint32x4_t overflow = vceqq_u32(exponent, vdupq_n_u32(0x7f800000u));
        const uint32_t active[4] = {dest & 8u ? ~0u : 0u, dest & 4u ? ~0u : 0u,
                                    dest & 2u ? ~0u : 0u, dest & 1u ? ~0u : 0u};
        const uint32x4_t mask = vld1q_u32(active);
        uint32x4_t normalized = vbslq_u32(zeroExponent, sign, bits);
        normalized = vbslq_u32(overflow, vorrq_u32(sign, vdupq_n_u32(0x7f7fffffu)), normalized);
        vst1q_f32(result, vreinterpretq_f32_u32(vbslq_u32(mask, normalized, bits)));
    }
#endif
}

inline __attribute__((always_inline)) void VU1Interpreter::pushLazyFlags(const float *x, const float *y, uint8_t kind, uint8_t dest)
{
    if (dest == 0u)
        return;
    LazyFlags &record = m_lazy[m_lazyCount++ & 7u];
    std::memcpy(record.x, x, sizeof(record.x));
    std::memcpy(record.y, y, sizeof(record.y));
    record.readyCycle = m_cycle + kFmacLatency;
    record.dest = dest;
    record.kind = kind;
    record.noStatus = false;
}

inline __attribute__((always_inline)) void VU1Interpreter::resolveLazyClip()
{
    if (__builtin_expect(m_lazyClipApplied != m_lazyClipCount, 0))
        resolveLazyClipSlow();
}

// Last stage of every FMAC op: result = x (+|-|*) y, written under the DEST mask, plus its flags.
inline __attribute__((always_inline)) void VU1Interpreter::fmacI(bool flagsDead, bool fz, uint8_t kind, float *dst,
                                                                  const float *x, const float *y, uint8_t dest, bool toAcc)
{
    float result[4];
    for (int c = 0; c < 4; c++)
        result[c] = kind == FmacAdd ? x[c] + y[c] : (kind == FmacSub ? x[c] - y[c] : x[c] * y[c]);
    if (fz)
    {
        if (!flagsDead)
        {
            if (m_lazyFlags)
                pushLazyFlags(x, y, kind, dest);
            else
                queueFzFlags(x, y, kind, dest);
        }
        vuApplyDest(dst, result, dest);
        return;
    }
    if (toAcc)
        applyFmacDestAcc(result, dest);
    else
        applyFmacDest(dst, result, dest);
}

inline __attribute__((always_inline)) void VU1Interpreter::resolveLazyFlags()
{
    if (__builtin_expect(m_lazyApplied != m_lazyCount, 0))
        resolveLazyFlagsSlow();
}

// ============================================================================
// Upper instructions (FMAC pipeline)
// ============================================================================
inline __attribute__((always_inline)) void VU1Interpreter::execUpperInline(uint32_t instr, const bool flagsDead, const bool fz)
{
    m_currentUpperInstruction = instr;
    // NOP has no operands. Pair timing and lower-instruction execution are
    // handled by run(); avoid normalizing unused VF/ACC/Q/I values here.
    if ((instr & 0x3Fu) >= 0x3Cu)
    {
        const uint8_t specialOp = static_cast<uint8_t>((instr & 0x3u) | ((instr >> 4) & 0x7Cu));
        if (specialOp == 0x2Fu || specialOp == 0x30u)
            return;
    }
    uint8_t dest = DEST(instr);
    uint8_t ft = FT(instr);
    uint8_t fs = FS(instr);
    uint8_t fd = FD(instr);
    uint8_t op = instr & 0x3F;

    float *vd = m_state.vf[fd];
    float normalizedVs[4];
    float normalizedVt[4];
    float normalizedAcc[4];
#if defined(PS2X_VU_SIMD)
    // With flush-to-zero on, the FPU itself treats denormal operands as zero and never produces a
    // denormal or (rounding toward zero) an infinity: add/sub/mul only need their operands kept finite.
    // The other ops copy operand bits around and still want them fully normalized.
    if (fz && vuIsFmacArithmetic(instr))
    {
        vuClampVector(normalizedVs, m_state.vf[fs]);
        vuClampVector(normalizedVt, m_state.vf[ft]);
        vuClampVector(normalizedAcc, m_state.acc);
    }
    else
    {
        normalizeVuVector(normalizedVs, m_state.vf[fs]);
        normalizeVuVector(normalizedVt, m_state.vf[ft]);
        normalizeVuVector(normalizedAcc, m_state.acc);
    }
#else
    for (uint32_t component = 0; component < 4u; ++component)
    {
        normalizedVs[component] = vuNormalizeOperand(m_state.vf[fs][component]);
        normalizedVt[component] = vuNormalizeOperand(m_state.vf[ft][component]);
        normalizedAcc[component] = vuNormalizeOperand(m_state.acc[component]);
    }
#endif
    const float *vs = normalizedVs;
    const float *vt = normalizedVt;
    const float *acc = normalizedAcc;
    const float q = vuNormalizeOperand(m_state.q);
    const float i = vuNormalizeOperand(m_state.i);
    float result[4];
    float x[4], y[4]; // operands of the last stage of an FMAC op (the flags come from them)
    // vt is already finite here in an add/sub/mul under flush-to-zero, which is all that op needs.
    const bool clampedOperands = fz && vuIsFmacArithmetic(instr);
    const auto broadcast = [vt, clampedOperands](uint8_t component)
    {
        return clampedOperands ? vt[component & 3u] : vuBroadcast(vt, component);
    };
    // The product of a multiply-add goes through the multiplier's own normalization before the add.
    const auto product = [fz](float left, float right)
    {
        const float value = left * right;
        return fz ? value : vuNormalizeOperand(value);
    };

    // Upper opcode decoding (bits 5:0 of upper word)
    switch (op)
    {
    case 0x00:
    case 0x01:
    case 0x02:
    case 0x03: // ADDbc
    {
        float bc = broadcast(op & 3);
        for (int c = 0; c < 4; c++)
        {
            x[c] = vs[c];
            y[c] = bc;
        }
        fmacI(flagsDead, fz, FmacAdd, vd, x, y, dest, false);
        return;
    }
    case 0x04:
    case 0x05:
    case 0x06:
    case 0x07: // SUBbc
    {
        float bc = broadcast(op & 3);
        for (int c = 0; c < 4; c++)
        {
            x[c] = vs[c];
            y[c] = bc;
        }
        fmacI(flagsDead, fz, FmacSub, vd, x, y, dest, false);
        return;
    }
    case 0x08:
    case 0x09:
    case 0x0A:
    case 0x0B: // MADDbc
    {
        float bc = broadcast(op & 3);
        for (int c = 0; c < 4; c++)
        {
            x[c] = acc[c];
            y[c] = product(vs[c], bc);
        }
        fmacI(flagsDead, fz, FmacAdd, vd, x, y, dest, false);
        return;
    }
    case 0x0C:
    case 0x0D:
    case 0x0E:
    case 0x0F: // MSUBbc
    {
        float bc = broadcast(op & 3);
        for (int c = 0; c < 4; c++)
        {
            x[c] = acc[c];
            y[c] = product(vs[c], bc);
        }
        fmacI(flagsDead, fz, FmacSub, vd, x, y, dest, false);
        return;
    }
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13: // MAXbc
    {
        float bc = broadcast(op & 3);
        for (int c = 0; c < 4; c++)
            result[c] = (vs[c] > bc) ? vs[c] : bc;
        vuApplyDest(vd, result, dest);
        return;
    }
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17: // MINIbc
    {
        float bc = broadcast(op & 3);
        for (int c = 0; c < 4; c++)
            result[c] = (vs[c] < bc) ? vs[c] : bc;
        vuApplyDest(vd, result, dest);
        return;
    }
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B: // MULbc
    {
        float bc = broadcast(op & 3);
        for (int c = 0; c < 4; c++)
        {
            x[c] = vs[c];
            y[c] = bc;
        }
        fmacI(flagsDead, fz, FmacMul, vd, x, y, dest, false);
        return;
    }
    case 0x1C: // MULq
        for (int c = 0; c < 4; c++)
        {
            x[c] = vs[c];
            y[c] = q;
        }
        fmacI(flagsDead, fz, FmacMul, vd, x, y, dest, false);
        return;
    case 0x1D: // MAXi
        for (int c = 0; c < 4; c++)
            result[c] = (vs[c] > i) ? vs[c] : i;
        vuApplyDest(vd, result, dest);
        return;
    case 0x1E: // MULi
        for (int c = 0; c < 4; c++)
        {
            x[c] = vs[c];
            y[c] = i;
        }
        fmacI(flagsDead, fz, FmacMul, vd, x, y, dest, false);
        return;
    case 0x1F: // MINIi
        for (int c = 0; c < 4; c++)
            result[c] = (vs[c] < i) ? vs[c] : i;
        vuApplyDest(vd, result, dest);
        return;
    case 0x20: // ADDq
        for (int c = 0; c < 4; c++)
        {
            x[c] = vs[c];
            y[c] = q;
        }
        fmacI(flagsDead, fz, FmacAdd, vd, x, y, dest, false);
        return;
    case 0x21: // MADDq
        for (int c = 0; c < 4; c++)
        {
            x[c] = acc[c];
            y[c] = product(vs[c], q);
        }
        fmacI(flagsDead, fz, FmacAdd, vd, x, y, dest, false);
        return;
    case 0x22: // ADDi
        for (int c = 0; c < 4; c++)
        {
            x[c] = vs[c];
            y[c] = i;
        }
        fmacI(flagsDead, fz, FmacAdd, vd, x, y, dest, false);
        return;
    case 0x23: // MADDi
        for (int c = 0; c < 4; c++)
        {
            x[c] = acc[c];
            y[c] = product(vs[c], i);
        }
        fmacI(flagsDead, fz, FmacAdd, vd, x, y, dest, false);
        return;
    case 0x24: // SUBq
        for (int c = 0; c < 4; c++)
        {
            x[c] = vs[c];
            y[c] = q;
        }
        fmacI(flagsDead, fz, FmacSub, vd, x, y, dest, false);
        return;
    case 0x25: // MSUBq
        for (int c = 0; c < 4; c++)
        {
            x[c] = acc[c];
            y[c] = product(vs[c], q);
        }
        fmacI(flagsDead, fz, FmacSub, vd, x, y, dest, false);
        return;
    case 0x26: // SUBi
        for (int c = 0; c < 4; c++)
        {
            x[c] = vs[c];
            y[c] = i;
        }
        fmacI(flagsDead, fz, FmacSub, vd, x, y, dest, false);
        return;
    case 0x27: // MSUBi
        for (int c = 0; c < 4; c++)
        {
            x[c] = acc[c];
            y[c] = product(vs[c], i);
        }
        fmacI(flagsDead, fz, FmacSub, vd, x, y, dest, false);
        return;
    case 0x28: // ADD
        for (int c = 0; c < 4; c++)
        {
            x[c] = vs[c];
            y[c] = vt[c];
        }
        fmacI(flagsDead, fz, FmacAdd, vd, x, y, dest, false);
        return;
    case 0x29: // MADD
        for (int c = 0; c < 4; c++)
        {
            x[c] = acc[c];
            y[c] = product(vs[c], vt[c]);
        }
        fmacI(flagsDead, fz, FmacAdd, vd, x, y, dest, false);
        return;
    case 0x2A: // MUL
        for (int c = 0; c < 4; c++)
        {
            x[c] = vs[c];
            y[c] = vt[c];
        }
        fmacI(flagsDead, fz, FmacMul, vd, x, y, dest, false);
        return;
    case 0x2B: // MAX
        for (int c = 0; c < 4; c++)
            result[c] = (vs[c] > vt[c]) ? vs[c] : vt[c];
        vuApplyDest(vd, result, dest);
        return;
    case 0x2C: // SUB
        for (int c = 0; c < 4; c++)
        {
            x[c] = vs[c];
            y[c] = vt[c];
        }
        fmacI(flagsDead, fz, FmacSub, vd, x, y, dest, false);
        return;
    case 0x2D: // MSUB
        for (int c = 0; c < 4; c++)
        {
            x[c] = acc[c];
            y[c] = product(vs[c], vt[c]);
        }
        fmacI(flagsDead, fz, FmacSub, vd, x, y, dest, false);
        return;
    case 0x2E: // OPMSUB
        x[0] = acc[0]; y[0] = product(vs[1], vt[2]);
        x[1] = acc[1]; y[1] = product(vs[2], vt[0]);
        x[2] = acc[2]; y[2] = product(vs[0], vt[1]);
        x[3] = 0.0f; y[3] = 0.0f;
        fmacI(flagsDead, fz, FmacSub, vd, x, y, dest, false);
        return;
    case 0x2F: // MINI
        for (int c = 0; c < 4; c++)
            result[c] = (vs[c] < vt[c]) ? vs[c] : vt[c];
        vuApplyDest(vd, result, dest);
        return;

    // Upper special group (low op 0x3C..0x3F).
    // Like lower1 special, the real selector is not just bits 5:0.  Dobie decodes:
    //   op = (instr & 0x3) | ((instr >> 4) & 0x7C)
    // Several instructions in this group also use FT as the destination, not FD.
    case 0x3C:
    case 0x3D:
    case 0x3E:
    case 0x3F:
    {
        const uint8_t specialOp = static_cast<uint8_t>((instr & 0x3u) | ((instr >> 4) & 0x7Cu));
        float *vtDest = m_state.vf[ft];

        switch (specialOp)
        {
        case 0x00:
        case 0x01:
        case 0x02:
        case 0x03: // ADDAbc
        {
            float bc = broadcast(specialOp & 3);
            for (int c = 0; c < 4; c++)
            {
                x[c] = vs[c];
                y[c] = bc;
            }
            fmacI(flagsDead, fz, FmacAdd, m_state.acc, x, y, dest, true);
            return;
        }
        case 0x04:
        case 0x05:
        case 0x06:
        case 0x07: // SUBAbc
        {
            float bc = broadcast(specialOp & 3);
            for (int c = 0; c < 4; c++)
            {
                x[c] = vs[c];
                y[c] = bc;
            }
            fmacI(flagsDead, fz, FmacSub, m_state.acc, x, y, dest, true);
            return;
        }
        case 0x08:
        case 0x09:
        case 0x0A:
        case 0x0B: // MADDAbc
        {
            float bc = broadcast(specialOp & 3);
            for (int c = 0; c < 4; c++)
            {
                x[c] = acc[c];
                y[c] = product(vs[c], bc);
            }
            fmacI(flagsDead, fz, FmacAdd, m_state.acc, x, y, dest, true);
            return;
        }
        case 0x0C:
        case 0x0D:
        case 0x0E:
        case 0x0F: // MSUBAbc
        {
            float bc = broadcast(specialOp & 3);
            for (int c = 0; c < 4; c++)
            {
                x[c] = acc[c];
                y[c] = product(vs[c], bc);
            }
            fmacI(flagsDead, fz, FmacSub, m_state.acc, x, y, dest, true);
            return;
        }
        case 0x10: // ITOF0
            for (int c = 0; c < 4; c++)
            {
                int32_t iv;
                std::memcpy(&iv, &m_state.vf[fs][c], 4);
                result[c] = static_cast<float>(iv);
            }
            vuApplyDest(vtDest, result, dest);
            return;
        case 0x11: // ITOF4
            for (int c = 0; c < 4; c++)
            {
                int32_t iv;
                std::memcpy(&iv, &m_state.vf[fs][c], 4);
                result[c] = static_cast<float>(iv) / 16.0f;
            }
            vuApplyDest(vtDest, result, dest);
            return;
        case 0x12: // ITOF12
            for (int c = 0; c < 4; c++)
            {
                int32_t iv;
                std::memcpy(&iv, &m_state.vf[fs][c], 4);
                result[c] = static_cast<float>(iv) / 4096.0f;
            }
            vuApplyDest(vtDest, result, dest);
            return;
        case 0x13: // ITOF15
            for (int c = 0; c < 4; c++)
            {
                int32_t iv;
                std::memcpy(&iv, &m_state.vf[fs][c], 4);
                result[c] = static_cast<float>(iv) / 32768.0f;
            }
            vuApplyDest(vtDest, result, dest);
            return;
        case 0x14: // FTOI0
            for (int c = 0; c < 4; c++)
            {
                int32_t iv = vuFloatToInt(vs[c], 1.0f);
                std::memcpy(&result[c], &iv, 4);
            }
            vuApplyDest(vtDest, result, dest);
            return;
        case 0x15: // FTOI4
            for (int c = 0; c < 4; c++)
            {
                int32_t iv = vuFloatToInt(vs[c], 16.0f);
                std::memcpy(&result[c], &iv, 4);
            }
            vuApplyDest(vtDest, result, dest);
            return;
        case 0x16: // FTOI12
            for (int c = 0; c < 4; c++)
            {
                int32_t iv = vuFloatToInt(vs[c], 4096.0f);
                std::memcpy(&result[c], &iv, 4);
            }
            vuApplyDest(vtDest, result, dest);
            return;
        case 0x17: // FTOI15
            for (int c = 0; c < 4; c++)
            {
                int32_t iv = vuFloatToInt(vs[c], 32768.0f);
                std::memcpy(&result[c], &iv, 4);
            }
            vuApplyDest(vtDest, result, dest);
            return;
        case 0x18:
        case 0x19:
        case 0x1A:
        case 0x1B: // MULAbc
        {
            float bc = broadcast(specialOp & 3);
            for (int c = 0; c < 4; c++)
            {
                x[c] = vs[c];
                y[c] = bc;
            }
            fmacI(flagsDead, fz, FmacMul, m_state.acc, x, y, dest, true);
            return;
        }
        case 0x1C: // MULAq
            for (int c = 0; c < 4; c++)
            {
                x[c] = vs[c];
                y[c] = q;
            }
            fmacI(flagsDead, fz, FmacMul, m_state.acc, x, y, dest, true);
            return;
        case 0x1D: // ABS
            for (int c = 0; c < 4; c++)
                result[c] = std::fabs(vs[c]);
            vuApplyDest(vtDest, result, dest);
            return;
        case 0x1E: // MULAi
            for (int c = 0; c < 4; c++)
            {
                x[c] = vs[c];
                y[c] = i;
            }
            fmacI(flagsDead, fz, FmacMul, m_state.acc, x, y, dest, true);
            return;
        case 0x1F: // CLIP
        {
            uint32_t wBits = 0u;
            std::memcpy(&wBits, &m_state.vf[ft][3], sizeof(wBits));
            const int32_t limit = (wBits & 0x7F800000u) != 0u ? static_cast<int32_t>(wBits & 0x7FFFFFFFu) : 0x007FFFFF;

            const auto exceedsClipPlane = [limit](float value, uint32_t signMask)
            {
                uint32_t bits = 0u;
                std::memcpy(&bits, &value, sizeof(bits));
                bits ^= signMask;
                int32_t orderedBits = 0;
                std::memcpy(&orderedBits, &bits, sizeof(orderedBits));
                return orderedBits > limit;
            };

            uint32_t flags = 0u;
            if (exceedsClipPlane(m_state.vf[fs][0], 0x00000000u))
                flags |= 0x01u;
            if (exceedsClipPlane(m_state.vf[fs][0], 0x80000000u))
                flags |= 0x02u;
            if (exceedsClipPlane(m_state.vf[fs][1], 0x00000000u))
                flags |= 0x04u;
            if (exceedsClipPlane(m_state.vf[fs][1], 0x80000000u))
                flags |= 0x08u;
            if (exceedsClipPlane(m_state.vf[fs][2], 0x00000000u))
                flags |= 0x10u;
            if (exceedsClipPlane(m_state.vf[fs][2], 0x80000000u))
                flags |= 0x20u;
            queueClip(flags);
            return;
        }
        case 0x20: // ADDAq
            for (int c = 0; c < 4; c++)
            {
                x[c] = vs[c];
                y[c] = q;
            }
            fmacI(flagsDead, fz, FmacAdd, m_state.acc, x, y, dest, true);
            return;
        case 0x21: // MADDAq
            for (int c = 0; c < 4; c++)
            {
                x[c] = acc[c];
                y[c] = product(vs[c], q);
            }
            fmacI(flagsDead, fz, FmacAdd, m_state.acc, x, y, dest, true);
            return;
        case 0x22: // ADDAi
            for (int c = 0; c < 4; c++)
            {
                x[c] = vs[c];
                y[c] = i;
            }
            fmacI(flagsDead, fz, FmacAdd, m_state.acc, x, y, dest, true);
            return;
        case 0x23: // MADDAi
            for (int c = 0; c < 4; c++)
            {
                x[c] = acc[c];
                y[c] = product(vs[c], i);
            }
            fmacI(flagsDead, fz, FmacAdd, m_state.acc, x, y, dest, true);
            return;
        case 0x24: // SUBAq
            for (int c = 0; c < 4; c++)
            {
                x[c] = vs[c];
                y[c] = q;
            }
            fmacI(flagsDead, fz, FmacSub, m_state.acc, x, y, dest, true);
            return;
        case 0x25: // MSUBAq
            for (int c = 0; c < 4; c++)
            {
                x[c] = acc[c];
                y[c] = product(vs[c], q);
            }
            fmacI(flagsDead, fz, FmacSub, m_state.acc, x, y, dest, true);
            return;
        case 0x26: // SUBAi
            for (int c = 0; c < 4; c++)
            {
                x[c] = vs[c];
                y[c] = i;
            }
            fmacI(flagsDead, fz, FmacSub, m_state.acc, x, y, dest, true);
            return;
        case 0x27: // MSUBAi
            for (int c = 0; c < 4; c++)
            {
                x[c] = acc[c];
                y[c] = product(vs[c], i);
            }
            fmacI(flagsDead, fz, FmacSub, m_state.acc, x, y, dest, true);
            return;
        case 0x28: // ADDA
            for (int c = 0; c < 4; c++)
            {
                x[c] = vs[c];
                y[c] = vt[c];
            }
            fmacI(flagsDead, fz, FmacAdd, m_state.acc, x, y, dest, true);
            return;
        case 0x29: // MADDA
            for (int c = 0; c < 4; c++)
            {
                x[c] = acc[c];
                y[c] = product(vs[c], vt[c]);
            }
            fmacI(flagsDead, fz, FmacAdd, m_state.acc, x, y, dest, true);
            return;
        case 0x2A: // MULA
            for (int c = 0; c < 4; c++)
            {
                x[c] = vs[c];
                y[c] = vt[c];
            }
            fmacI(flagsDead, fz, FmacMul, m_state.acc, x, y, dest, true);
            return;
        case 0x2C: // SUBA
            for (int c = 0; c < 4; c++)
            {
                x[c] = vs[c];
                y[c] = vt[c];
            }
            fmacI(flagsDead, fz, FmacSub, m_state.acc, x, y, dest, true);
            return;
        case 0x2D: // MSUBA
            for (int c = 0; c < 4; c++)
            {
                x[c] = acc[c];
                y[c] = product(vs[c], vt[c]);
            }
            fmacI(flagsDead, fz, FmacSub, m_state.acc, x, y, dest, true);
            return;
        case 0x2E: // OPMULA
            x[0] = vs[1]; y[0] = vt[2];
            x[1] = vs[2]; y[1] = vt[0];
            x[2] = vs[0]; y[2] = vt[1];
            x[3] = 0.0f; y[3] = 0.0f;
            fmacI(flagsDead, fz, FmacMul, m_state.acc, x, y, dest, true);
            return;
        case 0x2F:
        case 0x30: // NOP
            return;
        default:
            reportReservedInstruction(true, instr);
            return;
        }
    }

    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    default:
        reportReservedInstruction(true, instr);
        return;
    }
}
