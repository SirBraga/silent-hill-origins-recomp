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

// Function: sub_0023B3B0
// Address: 0x23b3b0 - 0x23b408
void sub_0023B3B0_0x23b3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B3B0_0x23b3b0");
#endif

    ctx->pc = 0x23b3b0u;

    // 0x23b3b0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x23b3b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23b3b4: 0xd8c20010  lqc2        $vf2, 0x10($a2)
    ctx->pc = 0x23b3b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x23b3b8: 0xd8c30020  lqc2        $vf3, 0x20($a2)
    ctx->pc = 0x23b3b8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x23b3bc: 0x9ca10000  lwu         $at, 0x0($a1)
    ctx->pc = 0x23b3bcu;
    SET_GPR_ZE32(ctx, 1, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23b3c0: 0x9ca20004  lwu         $v0, 0x4($a1)
    ctx->pc = 0x23b3c0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x23b3c4: 0x9ca30008  lwu         $v1, 0x8($a1)
    ctx->pc = 0x23b3c4u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x23b3c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23b3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23b3cc: 0x411025  or          $v0, $v0, $at
    ctx->pc = 0x23b3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 1));
    // 0x23b3d0: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x23b3d0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x23b3d4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x23b3d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x23b3d8: 0x4bc409bc  vmulax.xyz  $ACC, $vf1, $vf4x
    ctx->pc = 0x23b3d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x23b3dc: 0x4bc410bd  vmadday.xyz $ACC, $vf2, $vf4y
    ctx->pc = 0x23b3dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x23b3e0: 0x4bc4190a  vmaddz.xyz  $vf4, $vf3, $vf4z
    ctx->pc = 0x23b3e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x23b3e4: 0x48212000  qmfc2.ni    $at, $vf4
    ctx->pc = 0x23b3e4u;
    SET_GPR_VEC(ctx, 1, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x23b3e8: 0x1103e  dsrl32      $v0, $at, 0
    ctx->pc = 0x23b3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> (32 + 0));
    // 0x23b3ec: 0x70211ba9  pcpyud      $v1, $at, $at
    ctx->pc = 0x23b3ecu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 1), GPR_VEC(ctx, 1)));
    // 0x23b3f0: 0xac810000  sw          $at, 0x0($a0)
    ctx->pc = 0x23b3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 1));
    // 0x23b3f4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x23b3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x23b3f8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x23b3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x23b3fc: 0x3e00008  jr          $ra
    ctx->pc = 0x23B3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3FCu;
        // 0x23b400: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B3FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B404u;
    // 0x23b404: 0x0  nop
    ctx->pc = 0x23b404u;
    // NOP
    ctx->pc = 0x23b408u;
}
