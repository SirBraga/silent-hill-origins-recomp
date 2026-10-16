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

// Function: sub_001F9418
// Address: 0x1f9418 - 0x1f9428
void sub_001F9418_0x1f9418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9418_0x1f9418");
#endif

    ctx->pc = 0x1f9418u;

    // 0x1f9418: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x1f9418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x1f941c: 0x8c62ec50  lw          $v0, -0x13B0($v1)
    ctx->pc = 0x1f941cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BEC50u));
    // 0x1f9420: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9420u;
        // 0x1f9424: 0xac64ec50  sw          $a0, -0x13B0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294962256), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9428u;
}
