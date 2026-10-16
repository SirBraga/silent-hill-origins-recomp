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

// Function: sub_0017F628
// Address: 0x17f628 - 0x17f638
void sub_0017F628_0x17f628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F628_0x17f628");
#endif

    ctx->pc = 0x17f628u;

    // 0x17f628: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17f628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17f62c: 0x3e00008  jr          $ra
    ctx->pc = 0x17F62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F62Cu;
        // 0x17f630: 0x8c628984  lw          $v0, -0x767C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936964)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F62Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F634u;
    // 0x17f634: 0x0  nop
    ctx->pc = 0x17f634u;
    // NOP
    ctx->pc = 0x17f638u;
}
