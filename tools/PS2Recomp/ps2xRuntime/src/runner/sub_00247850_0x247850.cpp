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

// Function: sub_00247850
// Address: 0x247850 - 0x247860
void sub_00247850_0x247850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247850_0x247850");
#endif

    ctx->pc = 0x247850u;

    // 0x247850: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x247850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x247854: 0x3e00008  jr          $ra
    ctx->pc = 0x247854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247854u;
        // 0x247858: 0x8c621198  lw          $v0, 0x1198($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4504)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24785Cu;
    // 0x24785c: 0x0  nop
    ctx->pc = 0x24785cu;
    // NOP
    ctx->pc = 0x247860u;
}
