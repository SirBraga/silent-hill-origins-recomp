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

// Function: sub_001D9908
// Address: 0x1d9908 - 0x1d9918
void sub_001D9908_0x1d9908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9908_0x1d9908");
#endif

    ctx->pc = 0x1d9908u;

    // 0x1d9908: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d9908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1d990c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D990Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D990Cu;
        // 0x1d9910: 0x8c628a64  lw          $v0, -0x759C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937188)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D990Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9914u;
    // 0x1d9914: 0x0  nop
    ctx->pc = 0x1d9914u;
    // NOP
    ctx->pc = 0x1d9918u;
}
