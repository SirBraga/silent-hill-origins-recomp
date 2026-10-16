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

// Function: sub_0023B408
// Address: 0x23b408 - 0x23b490
void sub_0023B408_0x23b408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B408_0x23b408");
#endif

    switch (ctx->pc) {
        case 0x23b434u: goto label_23b434;
        default: break;
    }

    ctx->pc = 0x23b408u;

    // 0x23b408: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x23b408u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b40c: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x23b40cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23b410: 0xd8e20010  lqc2        $vf2, 0x10($a3)
    ctx->pc = 0x23b410u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x23b414: 0xd8e30020  lqc2        $vf3, 0x20($a3)
    ctx->pc = 0x23b414u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x23b418: 0x9cb80000  lwu         $t8, 0x0($a1)
    ctx->pc = 0x23b418u;
    SET_GPR_ZE32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23b41c: 0x9cae0004  lwu         $t6, 0x4($a1)
    ctx->pc = 0x23b41cu;
    SET_GPR_ZE32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x23b420: 0x9caf0008  lwu         $t7, 0x8($a1)
    ctx->pc = 0x23b420u;
    SET_GPR_ZE32(ctx, 15, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x23b424: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x23b424u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x23b428: 0x1d87025  or          $t6, $t6, $t8
    ctx->pc = 0x23b428u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 24));
    // 0x23b42c: 0x71ee7b89  pcpyld      $t7, $t7, $t6
    ctx->pc = 0x23b42cu;
    SET_GPR_VEC(ctx, 15, PS2_PCPYLD(GPR_VEC(ctx, 15), GPR_VEC(ctx, 14)));
    // 0x23b430: 0x48af2800  qmtc2.ni    $t7, $vf5
    ctx->pc = 0x23b430u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 15));
label_23b434:
    // 0x23b434: 0x18c00014  blez        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x23B434u;
    {
        const bool branch_taken_0x23b434 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x23B438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B434u;
        // 0x23b438: 0x20a5000c  addi        $a1, $a1, 0xC (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)12, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b434) {
            ctx->pc = 0x23B488u;
            goto label_23b488;
        }
    }
    ctx->pc = 0x23B43Cu;
    // 0x23b43c: 0x4bc509bc  vmulax.xyz  $ACC, $vf1, $vf5x
    ctx->pc = 0x23b43cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x23b440: 0x4bc510bd  vmadday.xyz $ACC, $vf2, $vf5y
    ctx->pc = 0x23b440u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x23b444: 0x4bc5198a  vmaddz.xyz  $vf6, $vf3, $vf5z
    ctx->pc = 0x23b444u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x23b448: 0x9cb80000  lwu         $t8, 0x0($a1)
    ctx->pc = 0x23b448u;
    SET_GPR_ZE32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23b44c: 0x9cae0004  lwu         $t6, 0x4($a1)
    ctx->pc = 0x23b44cu;
    SET_GPR_ZE32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x23b450: 0x9caf0008  lwu         $t7, 0x8($a1)
    ctx->pc = 0x23b450u;
    SET_GPR_ZE32(ctx, 15, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x23b454: 0x20c6ffff  addi        $a2, $a2, -0x1
    ctx->pc = 0x23b454u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x23b458: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x23b458u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x23b45c: 0x1d87025  or          $t6, $t6, $t8
    ctx->pc = 0x23b45cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 24));
    // 0x23b460: 0x71ee7b89  pcpyld      $t7, $t7, $t6
    ctx->pc = 0x23b460u;
    SET_GPR_VEC(ctx, 15, PS2_PCPYLD(GPR_VEC(ctx, 15), GPR_VEC(ctx, 14)));
    // 0x23b464: 0x48af2800  qmtc2.ni    $t7, $vf5
    ctx->pc = 0x23b464u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 15));
    // 0x23b468: 0x48393000  qmfc2.ni    $t9, $vf6
    ctx->pc = 0x23b468u;
    SET_GPR_VEC(ctx, 25, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x23b46c: 0x19103e  dsrl32      $v0, $t9, 0
    ctx->pc = 0x23b46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) >> (32 + 0));
    // 0x23b470: 0x73391ba9  pcpyud      $v1, $t9, $t9
    ctx->pc = 0x23b470u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 25), GPR_VEC(ctx, 25)));
    // 0x23b474: 0xac990000  sw          $t9, 0x0($a0)
    ctx->pc = 0x23b474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 25));
    // 0x23b478: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x23b478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x23b47c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x23b47cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x23b480: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x23B480u;
    {
        const bool branch_taken_0x23b480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B480u;
        // 0x23b484: 0x2084000c  addi        $a0, $a0, 0xC (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)12, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b480) {
            ctx->pc = 0x23B434u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b434;
        }
    }
    ctx->pc = 0x23B488u;
label_23b488:
    // 0x23b488: 0x3e00008  jr          $ra
    ctx->pc = 0x23B488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B488u;
        // 0x23b48c: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B490u;
}
