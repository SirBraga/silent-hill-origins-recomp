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

// Function: sub_0023B320
// Address: 0x23b320 - 0x23b3b0
void sub_0023B320_0x23b320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B320_0x23b320");
#endif

    switch (ctx->pc) {
        case 0x23b350u: goto label_23b350;
        default: break;
    }

    ctx->pc = 0x23b320u;

    // 0x23b320: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x23b320u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b324: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x23b324u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23b328: 0xd8e20010  lqc2        $vf2, 0x10($a3)
    ctx->pc = 0x23b328u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x23b32c: 0xd8e30020  lqc2        $vf3, 0x20($a3)
    ctx->pc = 0x23b32cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x23b330: 0xd8e40030  lqc2        $vf4, 0x30($a3)
    ctx->pc = 0x23b330u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x23b334: 0x9cad0000  lwu         $t5, 0x0($a1)
    ctx->pc = 0x23b334u;
    SET_GPR_ZE32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23b338: 0x9cab0004  lwu         $t3, 0x4($a1)
    ctx->pc = 0x23b338u;
    SET_GPR_ZE32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x23b33c: 0x9cac0008  lwu         $t4, 0x8($a1)
    ctx->pc = 0x23b33cu;
    SET_GPR_ZE32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x23b340: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x23b340u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x23b344: 0x16d5825  or          $t3, $t3, $t5
    ctx->pc = 0x23b344u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 13));
    // 0x23b348: 0x718b6389  pcpyld      $t4, $t4, $t3
    ctx->pc = 0x23b348u;
    SET_GPR_VEC(ctx, 12, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x23b34c: 0x48ac2800  qmtc2.ni    $t4, $vf5
    ctx->pc = 0x23b34cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 12));
label_23b350:
    // 0x23b350: 0x18c00015  blez        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x23B350u;
    {
        const bool branch_taken_0x23b350 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x23B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B350u;
        // 0x23b354: 0x20a5000c  addi        $a1, $a1, 0xC (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)12, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b350) {
            ctx->pc = 0x23B3A8u;
            goto label_23b3a8;
        }
    }
    ctx->pc = 0x23B358u;
    // 0x23b358: 0x4bc509bc  vmulax.xyz  $ACC, $vf1, $vf5x
    ctx->pc = 0x23b358u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x23b35c: 0x4bc510bd  vmadday.xyz $ACC, $vf2, $vf5y
    ctx->pc = 0x23b35cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x23b360: 0x4bc518be  vmaddaz.xyz $ACC, $vf3, $vf5z
    ctx->pc = 0x23b360u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x23b364: 0x4bc0218b  vmaddw.xyz  $vf6, $vf4, $vf0w
    ctx->pc = 0x23b364u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x23b368: 0x9cad0000  lwu         $t5, 0x0($a1)
    ctx->pc = 0x23b368u;
    SET_GPR_ZE32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23b36c: 0x9cab0004  lwu         $t3, 0x4($a1)
    ctx->pc = 0x23b36cu;
    SET_GPR_ZE32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x23b370: 0x9cac0008  lwu         $t4, 0x8($a1)
    ctx->pc = 0x23b370u;
    SET_GPR_ZE32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x23b374: 0x20c6ffff  addi        $a2, $a2, -0x1
    ctx->pc = 0x23b374u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x23b378: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x23b378u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x23b37c: 0x16d5825  or          $t3, $t3, $t5
    ctx->pc = 0x23b37cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 13));
    // 0x23b380: 0x718b6389  pcpyld      $t4, $t4, $t3
    ctx->pc = 0x23b380u;
    SET_GPR_VEC(ctx, 12, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x23b384: 0x48ac2800  qmtc2.ni    $t4, $vf5
    ctx->pc = 0x23b384u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 12));
    // 0x23b388: 0x48393000  qmfc2.ni    $t9, $vf6
    ctx->pc = 0x23b388u;
    SET_GPR_VEC(ctx, 25, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x23b38c: 0x19103e  dsrl32      $v0, $t9, 0
    ctx->pc = 0x23b38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) >> (32 + 0));
    // 0x23b390: 0x73391ba9  pcpyud      $v1, $t9, $t9
    ctx->pc = 0x23b390u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 25), GPR_VEC(ctx, 25)));
    // 0x23b394: 0xac990000  sw          $t9, 0x0($a0)
    ctx->pc = 0x23b394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 25));
    // 0x23b398: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x23b398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x23b39c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x23b39cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x23b3a0: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x23B3A0u;
    {
        const bool branch_taken_0x23b3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3A0u;
        // 0x23b3a4: 0x2084000c  addi        $a0, $a0, 0xC (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)12, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b3a0) {
            ctx->pc = 0x23B350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b350;
        }
    }
    ctx->pc = 0x23B3A8u;
label_23b3a8:
    // 0x23b3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x23B3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3A8u;
        // 0x23b3ac: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B3B0u;
}
