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

// Function: sub_0017F668
// Address: 0x17f668 - 0x17f678
void sub_0017F668_0x17f668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F668_0x17f668");
#endif

    ctx->pc = 0x17f668u;

    // 0x17f668: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17f668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17f66c: 0x3e00008  jr          $ra
    ctx->pc = 0x17F66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F66Cu;
        // 0x17f670: 0x8c628994  lw          $v0, -0x766C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936980)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F674u;
    // 0x17f674: 0x0  nop
    ctx->pc = 0x17f674u;
    // NOP
    ctx->pc = 0x17f678u;
}
