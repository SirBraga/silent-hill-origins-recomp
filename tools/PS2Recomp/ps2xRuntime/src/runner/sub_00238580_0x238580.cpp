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

// Function: sub_00238580
// Address: 0x238580 - 0x238598
void sub_00238580_0x238580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238580_0x238580");
#endif

    ctx->pc = 0x238580u;

    // 0x238580: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x238580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x238584: 0x8c633f18  lw          $v1, 0x3F18($v1)
    ctx->pc = 0x238584u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F18u));
    // 0x238588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23858c: 0x3e00008  jr          $ra
    ctx->pc = 0x23858Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23858Cu;
        // 0x238590: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23858Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238594u;
    // 0x238594: 0x0  nop
    ctx->pc = 0x238594u;
    // NOP
    ctx->pc = 0x238598u;
}
