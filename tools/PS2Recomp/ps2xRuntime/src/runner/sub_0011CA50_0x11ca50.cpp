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

// Function: sub_0011CA50
// Address: 0x11ca50 - 0x11ca60
void sub_0011CA50_0x11ca50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CA50_0x11ca50");
#endif

    ctx->pc = 0x11ca50u;

    // 0x11ca50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ca54: 0x3e00008  jr          $ra
    ctx->pc = 0x11CA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA54u;
        // 0x11ca58: 0xac820050  sw          $v0, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CA5Cu;
    // 0x11ca5c: 0x0  nop
    ctx->pc = 0x11ca5cu;
    // NOP
    ctx->pc = 0x11ca60u;
}
