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

// Function: sub_00113B28
// Address: 0x113b28 - 0x113b48
void sub_00113B28_0x113b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113B28_0x113b28");
#endif

    ctx->pc = 0x113b28u;

    // 0x113b28: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x113b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x113b2c: 0x8c42830c  lw          $v0, -0x7CF4($v0)
    ctx->pc = 0x113b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33830Cu));
    // 0x113b30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x113B30u;
    {
        const bool branch_taken_0x113b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x113b30) {
            ctx->pc = 0x113B40u;
            goto label_113b40;
        }
    }
    ctx->pc = 0x113B38u;
    // 0x113b38: 0x3e00008  jr          $ra
    ctx->pc = 0x113B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B38u;
        // 0x113b3c: 0x8c42019c  lw          $v0, 0x19C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 412)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113B40u;
label_113b40:
    // 0x113b40: 0x3e00008  jr          $ra
    ctx->pc = 0x113B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B40u;
        // 0x113b44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113B48u;
}
