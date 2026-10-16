#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002977F0
// Address: 0x2977f0 - 0x2978d8
void sub_002977F0_0x2977f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002977F0_0x2977f0");
#endif

    switch (ctx->pc) {
        case 0x297804u: goto label_297804;
        case 0x297838u: goto label_297838;
        default: break;
    }

    ctx->pc = 0x2977f0u;

    // 0x2977f0: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x2977f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2977f4: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x2977f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2977f8: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x2977f8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2977fc: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x2977fcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x297800: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x297800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_297804:
    // 0x297804: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x297804u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x297808: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x297808u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x29780c: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x29780cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x297810: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x297810u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x297814: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x297814u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x297818: 0xf8890000  sqc2        $vf9, 0x0($a0)
    ctx->pc = 0x297818u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x29781c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x29781cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x297820: 0x20c60010  addi        $a2, $a2, 0x10
    ctx->pc = 0x297820u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x297824: 0x1407fff7  bne         $zero, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x297824u;
    {
        const bool branch_taken_0x297824 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 7));
        ctx->pc = 0x297828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297824u;
        // 0x297828: 0x20840010  addi        $a0, $a0, 0x10 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x297824) {
            ctx->pc = 0x297804u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_297804;
        }
    }
    ctx->pc = 0x29782Cu;
    // 0x29782c: 0x3e00008  jr          $ra
    ctx->pc = 0x29782Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29782Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297834u;
    // 0x297834: 0x0  nop
    ctx->pc = 0x297834u;
    // NOP
label_297838:
    // 0x297838: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x297838u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x29783c: 0x0  nop
    ctx->pc = 0x29783cu;
    // NOP
    // 0x297840: 0x0  nop
    ctx->pc = 0x297840u;
    // NOP
    // 0x297844: 0x0  nop
    ctx->pc = 0x297844u;
    // NOP
    // 0x297848: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x297848u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x29784c: 0x0  nop
    ctx->pc = 0x29784cu;
    // NOP
    // 0x297850: 0x7c8b0030  sq          $t3, 0x30($a0)
    ctx->pc = 0x297850u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 11));
    // 0x297854: 0x0  nop
    ctx->pc = 0x297854u;
    // NOP
    // 0x297858: 0xf8840030  sqc2        $vf4, 0x30($a0)
    ctx->pc = 0x297858u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x29785c: 0x0  nop
    ctx->pc = 0x29785cu;
    // NOP
    // 0x297860: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x297860u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x297864: 0x0  nop
    ctx->pc = 0x297864u;
    // NOP
    // 0x297868: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x297868u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x29786c: 0x0  nop
    ctx->pc = 0x29786cu;
    // NOP
    // 0x297870: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x297870u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x297874: 0x0  nop
    ctx->pc = 0x297874u;
    // NOP
    // 0x297878: 0xf8850030  sqc2        $vf5, 0x30($a0)
    ctx->pc = 0x297878u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x29787c: 0x0  nop
    ctx->pc = 0x29787cu;
    // NOP
    // 0x297880: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x297880u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x297884: 0x0  nop
    ctx->pc = 0x297884u;
    // NOP
    // 0x297888: 0x7c890030  sq          $t1, 0x30($a0)
    ctx->pc = 0x297888u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 9));
    // 0x29788c: 0x0  nop
    ctx->pc = 0x29788cu;
    // NOP
    // 0x297890: 0x0  nop
    ctx->pc = 0x297890u;
    // NOP
    // 0x297894: 0x0  nop
    ctx->pc = 0x297894u;
    // NOP
    // 0x297898: 0x0  nop
    ctx->pc = 0x297898u;
    // NOP
    // 0x29789c: 0x0  nop
    ctx->pc = 0x29789cu;
    // NOP
    // 0x2978a0: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x2978a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2978a4: 0x0  nop
    ctx->pc = 0x2978a4u;
    // NOP
    // 0x2978a8: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2978a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2978ac: 0x0  nop
    ctx->pc = 0x2978acu;
    // NOP
    // 0x2978b0: 0xf88a0000  sqc2        $vf10, 0x0($a0)
    ctx->pc = 0x2978b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x2978b4: 0x0  nop
    ctx->pc = 0x2978b4u;
    // NOP
    // 0x2978b8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2978b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2978bc: 0x0  nop
    ctx->pc = 0x2978bcu;
    // NOP
    // 0x2978c0: 0xf8890000  sqc2        $vf9, 0x0($a0)
    ctx->pc = 0x2978c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x2978c4: 0x0  nop
    ctx->pc = 0x2978c4u;
    // NOP
    // 0x2978c8: 0x0  nop
    ctx->pc = 0x2978c8u;
    // NOP
    // 0x2978cc: 0x0  nop
    ctx->pc = 0x2978ccu;
    // NOP
    // 0x2978d0: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2978d0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x2978d4: 0x0  nop
    ctx->pc = 0x2978d4u;
    // NOP
    ctx->pc = 0x2978d8u;
}
