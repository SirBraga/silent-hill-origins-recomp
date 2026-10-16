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

// Function: sub_00102F10
// Address: 0x102f10 - 0x102f40
void sub_00102F10_0x102f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102F10_0x102f10");
#endif

    switch (ctx->pc) {
        case 0x102f20u: goto label_102f20;
        default: break;
    }

    ctx->pc = 0x102f10u;

    // 0x102f10: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x102f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x102f14: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x102F14u;
    {
        const bool branch_taken_0x102f14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x102f14) {
            ctx->pc = 0x102F38u;
            goto label_102f38;
        }
    }
    ctx->pc = 0x102F1Cu;
    // 0x102f1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x102f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_102f20:
    // 0x102f20: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x102F20u;
    {
        const bool branch_taken_0x102f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x102f20) {
            ctx->pc = 0x102F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102F20u;
            // 0x102f24: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102F30u;
            goto label_102f30;
        }
    }
    ctx->pc = 0x102F28u;
    // 0x102f28: 0x3e00008  jr          $ra
    ctx->pc = 0x102F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F28u;
        // 0x102f2c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102F30u;
label_102f30:
    // 0x102f30: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x102F30u;
    {
        const bool branch_taken_0x102f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x102f30) {
            ctx->pc = 0x102F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102F30u;
            // 0x102f34: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102f20;
        }
    }
    ctx->pc = 0x102F38u;
label_102f38:
    // 0x102f38: 0x3e00008  jr          $ra
    ctx->pc = 0x102F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F38u;
        // 0x102f3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102F40u;
}
