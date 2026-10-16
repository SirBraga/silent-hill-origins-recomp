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

// Function: sub_001B3888
// Address: 0x1b3888 - 0x1b3898
void sub_001B3888_0x1b3888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3888_0x1b3888");
#endif

    ctx->pc = 0x1b3888u;

    // 0x1b3888: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1b3888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1b388c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B388Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B388Cu;
        // 0x1b3890: 0x8c629230  lw          $v0, -0x6DD0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939184)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B388Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3894u;
    // 0x1b3894: 0x0  nop
    ctx->pc = 0x1b3894u;
    // NOP
    ctx->pc = 0x1b3898u;
}
