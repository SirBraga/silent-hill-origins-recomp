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

// Function: sub_0019D298
// Address: 0x19d298 - 0x19d2a8
void sub_0019D298_0x19d298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D298_0x19d298");
#endif

    ctx->pc = 0x19d298u;

    // 0x19d298: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19d298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19d29c: 0x3e00008  jr          $ra
    ctx->pc = 0x19D29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D29Cu;
        // 0x19d2a0: 0x2442a2c8  addiu       $v0, $v0, -0x5D38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D2A4u;
    // 0x19d2a4: 0x0  nop
    ctx->pc = 0x19d2a4u;
    // NOP
    ctx->pc = 0x19d2a8u;
}
