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

// Function: sub_0017F698
// Address: 0x17f698 - 0x17f6a8
void sub_0017F698_0x17f698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F698_0x17f698");
#endif

    ctx->pc = 0x17f698u;

    // 0x17f698: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17f698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17f69c: 0x3e00008  jr          $ra
    ctx->pc = 0x17F69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F69Cu;
        // 0x17f6a0: 0x8c6289a4  lw          $v0, -0x765C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936996)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F6A4u;
    // 0x17f6a4: 0x0  nop
    ctx->pc = 0x17f6a4u;
    // NOP
    ctx->pc = 0x17f6a8u;
}
