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

// Function: sub_001D8728
// Address: 0x1d8728 - 0x1d8738
void sub_001D8728_0x1d8728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8728_0x1d8728");
#endif

    ctx->pc = 0x1d8728u;

    // 0x1d8728: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d8728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d872c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D872Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D872Cu;
        // 0x1d8730: 0x8c629d9c  lw          $v0, -0x6264($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942108)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D872Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8734u;
    // 0x1d8734: 0x0  nop
    ctx->pc = 0x1d8734u;
    // NOP
    ctx->pc = 0x1d8738u;
}
