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

// Function: sub_001D65C8
// Address: 0x1d65c8 - 0x1d65d8
void sub_001D65C8_0x1d65c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D65C8_0x1d65c8");
#endif

    ctx->pc = 0x1d65c8u;

    // 0x1d65c8: 0x8c82009c  lw          $v0, 0x9C($a0)
    ctx->pc = 0x1d65c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x1d65cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D65CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D65D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D65CCu;
        // 0x1d65d0: 0xac85009c  sw          $a1, 0x9C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D65CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D65D4u;
    // 0x1d65d4: 0x0  nop
    ctx->pc = 0x1d65d4u;
    // NOP
    ctx->pc = 0x1d65d8u;
}
