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

// Function: sub_001657E0
// Address: 0x1657e0 - 0x1657e8
void sub_001657E0_0x1657e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001657E0_0x1657e0");
#endif

    ctx->pc = 0x1657e0u;

    // 0x1657e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1657E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1657E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1657E0u;
        // 0x1657e4: 0xaca60028  sw          $a2, 0x28($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1657E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1657E8u;
}
