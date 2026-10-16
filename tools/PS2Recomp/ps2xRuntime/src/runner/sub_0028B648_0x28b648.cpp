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

// Function: sub_0028B648
// Address: 0x28b648 - 0x28b6a0
void sub_0028B648_0x28b648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B648_0x28b648");
#endif

    switch (ctx->pc) {
        case 0x28b658u: goto label_28b658;
        default: break;
    }

    ctx->pc = 0x28b648u;

    // 0x28b648: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x28b648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x28b64c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28B64Cu;
    {
        const bool branch_taken_0x28b64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B64Cu;
        // 0x28b650: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b64c) {
            ctx->pc = 0x28B684u;
            goto label_28b684;
        }
    }
    ctx->pc = 0x28B654u;
    // 0x28b654: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x28b654u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28b658:
    // 0x28b658: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x28b658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28b65c: 0x54450005  bnel        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B65Cu;
    {
        const bool branch_taken_0x28b65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x28b65c) {
            ctx->pc = 0x28B660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B65Cu;
            // 0x28b660: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B674u;
            goto label_28b674;
        }
    }
    ctx->pc = 0x28B664u;
    // 0x28b664: 0x54c00001  bnel        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28B664u;
    {
        const bool branch_taken_0x28b664 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b664) {
            ctx->pc = 0x28B668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B664u;
            // 0x28b668: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B66Cu;
            goto label_28b66c;
        }
    }
    ctx->pc = 0x28B66Cu;
label_28b66c:
    // 0x28b66c: 0x3e00008  jr          $ra
    ctx->pc = 0x28B66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B66Cu;
        // 0x28b670: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B674u;
label_28b674:
    // 0x28b674: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28b674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28b678: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x28b678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x28b67c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x28B67Cu;
    {
        const bool branch_taken_0x28b67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B67Cu;
        // 0x28b680: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b67c) {
            ctx->pc = 0x28B658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b658;
        }
    }
    ctx->pc = 0x28B684u;
label_28b684:
    // 0x28b684: 0x3e00008  jr          $ra
    ctx->pc = 0x28B684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B684u;
        // 0x28b688: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B68Cu;
    // 0x28b68c: 0x0  nop
    ctx->pc = 0x28b68cu;
    // NOP
    // 0x28b690: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x28b690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28b694: 0x0  nop
    ctx->pc = 0x28b694u;
    // NOP
    // 0x28b698: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x28b698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x28b69c: 0x0  nop
    ctx->pc = 0x28b69cu;
    // NOP
    ctx->pc = 0x28b6a0u;
}
