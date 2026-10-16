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

// Function: sub_001D7550
// Address: 0x1d7550 - 0x1d7560
void sub_001D7550_0x1d7550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7550_0x1d7550");
#endif

    ctx->pc = 0x1d7550u;

    // 0x1d7550: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d7550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d7554: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7554u;
        // 0x1d7558: 0x8c629ce0  lw          $v0, -0x6320($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941920)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D755Cu;
    // 0x1d755c: 0x0  nop
    ctx->pc = 0x1d755cu;
    // NOP
    ctx->pc = 0x1d7560u;
}
