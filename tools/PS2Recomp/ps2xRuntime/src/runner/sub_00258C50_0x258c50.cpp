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

// Function: sub_00258C50
// Address: 0x258c50 - 0x258ca8
void sub_00258C50_0x258c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258C50_0x258c50");
#endif

    ctx->pc = 0x258c50u;

    // 0x258c50: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x258c50u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x258c54: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x258c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x258c58: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x258C58u;
    {
        const bool branch_taken_0x258c58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x258C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C58u;
        // 0x258c5c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c58) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x258C60u;
    // 0x258c60: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x258c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x258c64: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x258c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x258c68: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x258c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x258c6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x258C6Cu;
    {
        const bool branch_taken_0x258c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C6Cu;
        // 0x258c70: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c6c) {
            ctx->pc = 0x258C7Cu;
            goto label_258c7c;
        }
    }
    ctx->pc = 0x258C74u;
    // 0x258c74: 0x3e00008  jr          $ra
    ctx->pc = 0x258C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C74u;
        // 0x258c78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258C7Cu;
label_258c7c:
    // 0x258c7c: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x258C7Cu;
    {
        const bool branch_taken_0x258c7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x258C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C7Cu;
        // 0x258c80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c7c) {
            ctx->pc = 0x258C9Cu;
            goto label_258c9c;
        }
    }
    ctx->pc = 0x258C84u;
    // 0x258c84: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x258c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x258c88: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x258c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x258c8c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x258c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x258c90: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x258C90u;
    {
        const bool branch_taken_0x258c90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x258C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C90u;
        // 0x258c94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c90) {
            ctx->pc = 0x258C9Cu;
            goto label_258c9c;
        }
    }
    ctx->pc = 0x258C98u;
    // 0x258c98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x258c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_258c9c:
    // 0x258c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x258C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258CA4u;
    // 0x258ca4: 0x0  nop
    ctx->pc = 0x258ca4u;
    // NOP
    ctx->pc = 0x258ca8u;
}
