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

// Function: sub_001EDF98
// Address: 0x1edf98 - 0x1edfa8
void sub_001EDF98_0x1edf98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EDF98_0x1edf98");
#endif

    ctx->pc = 0x1edf98u;

    // 0x1edf98: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1edf98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1edf9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDF9Cu;
        // 0x1edfa0: 0x24421eb0  addiu       $v0, $v0, 0x1EB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7856));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDFA4u;
    // 0x1edfa4: 0x0  nop
    ctx->pc = 0x1edfa4u;
    // NOP
    ctx->pc = 0x1edfa8u;
}
