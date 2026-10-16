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

// Function: sub_0019D490
// Address: 0x19d490 - 0x19d4a0
void sub_0019D490_0x19d490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D490_0x19d490");
#endif

    ctx->pc = 0x19d490u;

    // 0x19d490: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19d490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19d494: 0x3e00008  jr          $ra
    ctx->pc = 0x19D494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D494u;
        // 0x19d498: 0x2442a360  addiu       $v0, $v0, -0x5CA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943584));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D49Cu;
    // 0x19d49c: 0x0  nop
    ctx->pc = 0x19d49cu;
    // NOP
    ctx->pc = 0x19d4a0u;
}
