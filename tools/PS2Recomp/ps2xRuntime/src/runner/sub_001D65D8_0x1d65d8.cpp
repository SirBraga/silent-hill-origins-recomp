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

// Function: sub_001D65D8
// Address: 0x1d65d8 - 0x1d65e8
void sub_001D65D8_0x1d65d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D65D8_0x1d65d8");
#endif

    ctx->pc = 0x1d65d8u;

    // 0x1d65d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D65D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D65DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D65D8u;
        // 0x1d65dc: 0x24820028  addiu       $v0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D65D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D65E0u;
    // 0x1d65e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d65e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d65e4: 0x0  nop
    ctx->pc = 0x1d65e4u;
    // NOP
    ctx->pc = 0x1d65e8u;
}
