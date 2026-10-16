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

// Function: sub_001F3580
// Address: 0x1f3580 - 0x1f35a0
void sub_001F3580_0x1f3580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3580_0x1f3580");
#endif

    ctx->pc = 0x1f3580u;

    // 0x1f3580: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1f3580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1f3584: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3584u;
        // 0x1f3588: 0x8c62eac4  lw          $v0, -0x153C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961860)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F358Cu;
    // 0x1f358c: 0x0  nop
    ctx->pc = 0x1f358cu;
    // NOP
    // 0x1f3590: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1f3590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1f3594: 0x0  nop
    ctx->pc = 0x1f3594u;
    // NOP
    // 0x1f3598: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f3598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f359c: 0x0  nop
    ctx->pc = 0x1f359cu;
    // NOP
    ctx->pc = 0x1f35a0u;
}
