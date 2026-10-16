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

// Function: sub_002D4ED8
// Address: 0x2d4ed8 - 0x2d4ee8
void sub_002D4ED8_0x2d4ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4ED8_0x2d4ed8");
#endif

    ctx->pc = 0x2d4ed8u;

    // 0x2d4ed8: 0x4a006078  vcallms     0xC08
    ctx->pc = 0x2d4ed8u;
    {     ctx->vu0_tpc = 0xC08;     runtime->executeVU0Microprogram(rdram, ctx, 0xC08); }
    // 0x2d4edc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4EDCu;
        // 0x2d4ee0: 0x4a0002ff  vnop (Delay Slot)
        // NOP operation, no action needed for VU0
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4EE4u;
    // 0x2d4ee4: 0x0  nop
    ctx->pc = 0x2d4ee4u;
    // NOP
    ctx->pc = 0x2d4ee8u;
}
