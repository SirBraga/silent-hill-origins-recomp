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

// Function: sub_001B2AB8
// Address: 0x1b2ab8 - 0x1b2ac8
void sub_001B2AB8_0x1b2ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2AB8_0x1b2ab8");
#endif

    ctx->pc = 0x1b2ab8u;

    // 0x1b2ab8: 0xac85023c  sw          $a1, 0x23C($a0)
    ctx->pc = 0x1b2ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 572), GPR_U32(ctx, 5));
    // 0x1b2abc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2ABCu;
        // 0x1b2ac0: 0xac800238  sw          $zero, 0x238($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 568), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2AC4u;
    // 0x1b2ac4: 0x0  nop
    ctx->pc = 0x1b2ac4u;
    // NOP
    ctx->pc = 0x1b2ac8u;
}
