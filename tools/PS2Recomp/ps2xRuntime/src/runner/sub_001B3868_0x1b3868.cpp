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

// Function: sub_001B3868
// Address: 0x1b3868 - 0x1b3878
void sub_001B3868_0x1b3868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3868_0x1b3868");
#endif

    ctx->pc = 0x1b3868u;

    // 0x1b3868: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1b3868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1b386c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B386Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B386Cu;
        // 0x1b3870: 0xac449230  sw          $a0, -0x6DD0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294939184), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B386Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3874u;
    // 0x1b3874: 0x0  nop
    ctx->pc = 0x1b3874u;
    // NOP
    ctx->pc = 0x1b3878u;
}
