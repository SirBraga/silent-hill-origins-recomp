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

// Function: sub_00231560
// Address: 0x231560 - 0x231570
void sub_00231560_0x231560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231560_0x231560");
#endif

    switch (ctx->pc) {
        case 0x231564u: goto label_231564;
        case 0x231568u: goto label_231568;
        default: break;
    }

    ctx->pc = 0x231560u;

    // 0x231560: 0x8f8284b0  lw          $v0, -0x7B50($gp)
    ctx->pc = 0x231560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935728)));
label_231564:
    // 0x231564: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x231564u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_231568:
    // 0x231568: 0x3e00008  jr          $ra
    ctx->pc = 0x231568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231568u;
        // 0x23156c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231570u;
}
