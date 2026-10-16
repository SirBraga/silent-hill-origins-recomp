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

// Function: sub_003239B0
// Address: 0x3239b0 - 0x323a08
void sub_003239B0_0x3239b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003239B0_0x3239b0");
#endif

    ctx->pc = 0x3239b0u;

    // 0x3239b0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3239b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3239b4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3239B4u;
    {
        const bool branch_taken_0x3239b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3239B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3239B4u;
        // 0x3239b8: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3239b4) {
            ctx->pc = 0x3239C4u;
            goto label_3239c4;
        }
    }
    ctx->pc = 0x3239BCu;
    // 0x3239bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3239BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3239C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3239BCu;
        // 0x3239c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3239BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3239C4u;
label_3239c4:
    // 0x3239c4: 0x28c20100  slti        $v0, $a2, 0x100
    ctx->pc = 0x3239c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x3239c8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3239C8u;
    {
        const bool branch_taken_0x3239c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3239c8) {
            ctx->pc = 0x3239CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3239C8u;
            // 0x3239cc: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3239FCu;
            goto label_3239fc;
        }
    }
    ctx->pc = 0x3239D0u;
    // 0x3239d0: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x3239d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x3239d4: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x3239d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3239d8: 0x2300a  movz        $a2, $zero, $v0
    ctx->pc = 0x3239d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0));
    // 0x3239dc: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x3239dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x3239e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3239e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3239e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3239e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3239e8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3239e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3239ec: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x3239ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x3239f0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3239f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3239f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3239F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3239F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3239F4u;
        // 0x3239f8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3239F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3239FCu;
label_3239fc:
    // 0x3239fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3239fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a00: 0x3e00008  jr          $ra
    ctx->pc = 0x323A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A00u;
        // 0x323a04: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323A08u;
}
