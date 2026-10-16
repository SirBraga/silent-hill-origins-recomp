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

// Function: sub_001D8660
// Address: 0x1d8660 - 0x1d8670
void sub_001D8660_0x1d8660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8660_0x1d8660");
#endif

    ctx->pc = 0x1d8660u;

    // 0x1d8660: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d8660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1d8664: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8664u;
        // 0x1d8668: 0x8c6289dc  lw          $v0, -0x7624($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937052)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D866Cu;
    // 0x1d866c: 0x0  nop
    ctx->pc = 0x1d866cu;
    // NOP
    ctx->pc = 0x1d8670u;
}
