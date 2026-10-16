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

// Function: sub_002D4A70
// Address: 0x2d4a70 - 0x2d4af0
void sub_002D4A70_0x2d4a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4A70_0x2d4a70");
#endif

    ctx->pc = 0x2d4a70u;

    // 0x2d4a70: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2d4a70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4a74: 0x8cc2005c  lw          $v0, 0x5C($a2)
    ctx->pc = 0x2d4a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
    // 0x2d4a78: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2d4a78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4a7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D4A7Cu;
    {
        const bool branch_taken_0x2d4a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d4a7c) {
            ctx->pc = 0x2D4A8Cu;
            goto label_2d4a8c;
        }
    }
    ctx->pc = 0x2D4A84u;
    // 0x2d4a84: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4A84u;
        // 0x2d4a88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4A8Cu;
label_2d4a8c:
    // 0x2d4a8c: 0x48c21000  ctc2.ni     $v0, $vi2
    ctx->pc = 0x2d4a8cu;
    ctx->vi[2] = static_cast<uint16_t>(GPR_U32(ctx, 2));
    // 0x2d4a90: 0x8cc2005c  lw          $v0, 0x5C($a2)
    ctx->pc = 0x2d4a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
    // 0x2d4a94: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2d4a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d4a98: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2d4a98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4a9c: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D4A9Cu;
    {
        const bool branch_taken_0x2d4a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2d4a9c) {
            ctx->pc = 0x2D4AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4A9Cu;
            // 0x2d4aa0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4AB4u;
            goto label_2d4ab4;
        }
    }
    ctx->pc = 0x2D4AA4u;
    // 0x2d4aa4: 0x24c20040  addiu       $v0, $a2, 0x40
    ctx->pc = 0x2d4aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x2d4aa8: 0xd8470000  lqc2        $vf7, 0x0($v0)
    ctx->pc = 0x2d4aa8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4aac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D4AACu;
    {
        const bool branch_taken_0x2d4aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4AACu;
        // 0x2d4ab0: 0x24a40010  addiu       $a0, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4aac) {
            ctx->pc = 0x2D4ABCu;
            goto label_2d4abc;
        }
    }
    ctx->pc = 0x2D4AB4u;
label_2d4ab4:
    // 0x2d4ab4: 0x4be001ec  vsub.xyzw   $vf7, $vf0, $vf0
    ctx->pc = 0x2d4ab4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2d4ab8: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x2d4ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_2d4abc:
    // 0x2d4abc: 0x24a30020  addiu       $v1, $a1, 0x20
    ctx->pc = 0x2d4abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2d4ac0: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x2d4ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x2d4ac4: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x2d4ac4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d4ac8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2d4ac8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d4acc: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x2d4accu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d4ad0: 0xd8460000  lqc2        $vf6, 0x0($v0)
    ctx->pc = 0x2d4ad0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4ad4: 0x4a006eb8  vcallms     0xDD0
    ctx->pc = 0x2d4ad4u;
    {     ctx->vu0_tpc = 0xDD0;     runtime->executeVU0Microprogram(rdram, ctx, 0xDD0); }
    // 0x2d4ad8: 0x4a0002ff  vnop
    ctx->pc = 0x2d4ad8u;
    // NOP operation, no action needed for VU0
    // 0x2d4adc: 0xf8e20000  sqc2        $vf2, 0x0($a3)
    ctx->pc = 0x2d4adcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2d4ae0: 0xf8e10010  sqc2        $vf1, 0x10($a3)
    ctx->pc = 0x2d4ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d4ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4AE4u;
        // 0x2d4ae8: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4AECu;
    // 0x2d4aec: 0x0  nop
    ctx->pc = 0x2d4aecu;
    // NOP
    ctx->pc = 0x2d4af0u;
}
