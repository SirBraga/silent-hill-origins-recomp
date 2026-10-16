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

// Function: sub_00282DD0
// Address: 0x282dd0 - 0x282de8
void sub_00282DD0_0x282dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282DD0_0x282dd0");
#endif

    ctx->pc = 0x282dd0u;

    // 0x282dd0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x282dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x282dd4: 0x8c43e6e4  lw          $v1, -0x191C($v0)
    ctx->pc = 0x282dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x67E6E4u));
    // 0x282dd8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x282dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x282ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x282DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282DDCu;
        // 0x282de0: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282DE4u;
    // 0x282de4: 0x0  nop
    ctx->pc = 0x282de4u;
    // NOP
    ctx->pc = 0x282de8u;
}
