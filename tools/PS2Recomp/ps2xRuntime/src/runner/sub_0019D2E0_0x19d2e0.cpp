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

// Function: sub_0019D2E0
// Address: 0x19d2e0 - 0x19d2f0
void sub_0019D2E0_0x19d2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D2E0_0x19d2e0");
#endif

    ctx->pc = 0x19d2e0u;

    // 0x19d2e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19d2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19d2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x19D2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D2E4u;
        // 0x19d2e8: 0x2442a2d8  addiu       $v0, $v0, -0x5D28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D2ECu;
    // 0x19d2ec: 0x0  nop
    ctx->pc = 0x19d2ecu;
    // NOP
    ctx->pc = 0x19d2f0u;
}
