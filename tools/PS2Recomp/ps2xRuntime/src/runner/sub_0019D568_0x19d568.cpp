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

// Function: sub_0019D568
// Address: 0x19d568 - 0x19d578
void sub_0019D568_0x19d568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D568_0x19d568");
#endif

    ctx->pc = 0x19d568u;

    // 0x19d568: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19d568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19d56c: 0x3e00008  jr          $ra
    ctx->pc = 0x19D56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D56Cu;
        // 0x19d570: 0x2442a398  addiu       $v0, $v0, -0x5C68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D574u;
    // 0x19d574: 0x0  nop
    ctx->pc = 0x19d574u;
    // NOP
    ctx->pc = 0x19d578u;
}
