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

// Function: sub_00225DD0
// Address: 0x225dd0 - 0x225de0
void sub_00225DD0_0x225dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225DD0_0x225dd0");
#endif

    ctx->pc = 0x225dd0u;

    // 0x225dd0: 0xaf8483b0  sw          $a0, -0x7C50($gp)
    ctx->pc = 0x225dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935472), GPR_U32(ctx, 4));
    // 0x225dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x225DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DD4u;
        // 0x225dd8: 0xaf8583b4  sw          $a1, -0x7C4C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935476), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225DDCu;
    // 0x225ddc: 0x0  nop
    ctx->pc = 0x225ddcu;
    // NOP
    ctx->pc = 0x225de0u;
}
