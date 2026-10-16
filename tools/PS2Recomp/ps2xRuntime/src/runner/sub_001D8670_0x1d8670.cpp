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

// Function: sub_001D8670
// Address: 0x1d8670 - 0x1d8680
void sub_001D8670_0x1d8670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8670_0x1d8670");
#endif

    ctx->pc = 0x1d8670u;

    // 0x1d8670: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d8670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d8674: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8674u;
        // 0x1d8678: 0xac4489dc  sw          $a0, -0x7624($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294937052), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D867Cu;
    // 0x1d867c: 0x0  nop
    ctx->pc = 0x1d867cu;
    // NOP
    ctx->pc = 0x1d8680u;
}
