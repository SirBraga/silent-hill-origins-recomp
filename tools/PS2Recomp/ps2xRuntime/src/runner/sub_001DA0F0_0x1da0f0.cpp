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

// Function: sub_001DA0F0
// Address: 0x1da0f0 - 0x1da100
void sub_001DA0F0_0x1da0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA0F0_0x1da0f0");
#endif

    ctx->pc = 0x1da0f0u;

    // 0x1da0f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1da0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1da0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA0F4u;
        // 0x1da0f8: 0x24421a48  addiu       $v0, $v0, 0x1A48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6728));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA0FCu;
    // 0x1da0fc: 0x0  nop
    ctx->pc = 0x1da0fcu;
    // NOP
    ctx->pc = 0x1da100u;
}
