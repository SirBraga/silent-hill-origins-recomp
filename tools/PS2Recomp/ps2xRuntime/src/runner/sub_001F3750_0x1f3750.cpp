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

// Function: sub_001F3750
// Address: 0x1f3750 - 0x1f3760
void sub_001F3750_0x1f3750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3750_0x1f3750");
#endif

    ctx->pc = 0x1f3750u;

    // 0x1f3750: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1f3750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1f3754: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3754u;
        // 0x1f3758: 0x8c62ead0  lw          $v0, -0x1530($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961872)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F375Cu;
    // 0x1f375c: 0x0  nop
    ctx->pc = 0x1f375cu;
    // NOP
    ctx->pc = 0x1f3760u;
}
