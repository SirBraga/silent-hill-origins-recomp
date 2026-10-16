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

// Function: sub_0017F648
// Address: 0x17f648 - 0x17f658
void sub_0017F648_0x17f648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F648_0x17f648");
#endif

    ctx->pc = 0x17f648u;

    // 0x17f648: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17f648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17f64c: 0x3e00008  jr          $ra
    ctx->pc = 0x17F64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F64Cu;
        // 0x17f650: 0x8c62898c  lw          $v0, -0x7674($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936972)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F654u;
    // 0x17f654: 0x0  nop
    ctx->pc = 0x17f654u;
    // NOP
    ctx->pc = 0x17f658u;
}
