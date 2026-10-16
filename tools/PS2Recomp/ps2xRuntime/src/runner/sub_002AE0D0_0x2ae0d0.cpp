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

// Function: sub_002AE0D0
// Address: 0x2ae0d0 - 0x2ae0e0
void sub_002AE0D0_0x2ae0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AE0D0_0x2ae0d0");
#endif

    ctx->pc = 0x2ae0d0u;

    // 0x2ae0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE0D0u;
        // 0x2ae0d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE0D8u;
    // 0x2ae0d8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2ae0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ae0dc: 0x0  nop
    ctx->pc = 0x2ae0dcu;
    // NOP
    ctx->pc = 0x2ae0e0u;
}
