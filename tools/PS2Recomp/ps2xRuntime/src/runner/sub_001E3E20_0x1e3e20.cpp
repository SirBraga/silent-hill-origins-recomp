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

// Function: sub_001E3E20
// Address: 0x1e3e20 - 0x1e3e30
void sub_001E3E20_0x1e3e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3E20_0x1e3e20");
#endif

    ctx->pc = 0x1e3e20u;

    // 0x1e3e20: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1e3e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e3e24: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E24u;
        // 0x1e3e28: 0x21100  sll         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3E2Cu;
    // 0x1e3e2c: 0x0  nop
    ctx->pc = 0x1e3e2cu;
    // NOP
    ctx->pc = 0x1e3e30u;
}
