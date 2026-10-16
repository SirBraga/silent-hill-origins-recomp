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

// Function: sub_001DA0A0
// Address: 0x1da0a0 - 0x1da0b0
void sub_001DA0A0_0x1da0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA0A0_0x1da0a0");
#endif

    ctx->pc = 0x1da0a0u;

    // 0x1da0a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1da0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1da0a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA0A4u;
        // 0x1da0a8: 0x24421a38  addiu       $v0, $v0, 0x1A38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6712));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA0A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA0ACu;
    // 0x1da0ac: 0x0  nop
    ctx->pc = 0x1da0acu;
    // NOP
    ctx->pc = 0x1da0b0u;
}
