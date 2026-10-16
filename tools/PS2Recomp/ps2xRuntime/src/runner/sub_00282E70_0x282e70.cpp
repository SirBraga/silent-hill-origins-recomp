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

// Function: sub_00282E70
// Address: 0x282e70 - 0x282e90
void sub_00282E70_0x282e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282E70_0x282e70");
#endif

    ctx->pc = 0x282e70u;

    // 0x282e70: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x282e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x282e74: 0x8c43e6e8  lw          $v1, -0x1918($v0)
    ctx->pc = 0x282e74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x67E6E8u));
    // 0x282e78: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x282e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x282e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x282E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282E7Cu;
        // 0x282e80: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282E84u;
    // 0x282e84: 0x0  nop
    ctx->pc = 0x282e84u;
    // NOP
    // 0x282e88: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x282e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x282e8c: 0x0  nop
    ctx->pc = 0x282e8cu;
    // NOP
    ctx->pc = 0x282e90u;
}
