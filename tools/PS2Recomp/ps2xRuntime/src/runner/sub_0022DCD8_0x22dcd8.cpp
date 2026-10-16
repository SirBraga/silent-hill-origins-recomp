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

// Function: sub_0022DCD8
// Address: 0x22dcd8 - 0x22dce8
void sub_0022DCD8_0x22dcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022DCD8_0x22dcd8");
#endif

    ctx->pc = 0x22dcd8u;

    // 0x22dcd8: 0x3e00008  jr          $ra
    ctx->pc = 0x22DCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DCD8u;
        // 0x22dcdc: 0xa3848404  sb          $a0, -0x7BFC($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935556), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DCD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DCE0u;
    // 0x22dce0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x22dce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22dce4: 0x0  nop
    ctx->pc = 0x22dce4u;
    // NOP
    ctx->pc = 0x22dce8u;
}
