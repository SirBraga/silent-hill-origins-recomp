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

// Function: sub_00158818
// Address: 0x158818 - 0x158828
void sub_00158818_0x158818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158818_0x158818");
#endif

    ctx->pc = 0x158818u;

    // 0x158818: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x158818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x15881c: 0x3e00008  jr          $ra
    ctx->pc = 0x15881Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15881Cu;
        // 0x158820: 0xac458614  sw          $a1, -0x79EC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294936084), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15881Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158824u;
    // 0x158824: 0x0  nop
    ctx->pc = 0x158824u;
    // NOP
    ctx->pc = 0x158828u;
}
