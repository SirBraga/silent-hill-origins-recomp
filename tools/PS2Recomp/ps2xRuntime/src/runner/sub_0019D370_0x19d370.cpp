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

// Function: sub_0019D370
// Address: 0x19d370 - 0x19d380
void sub_0019D370_0x19d370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D370_0x19d370");
#endif

    ctx->pc = 0x19d370u;

    // 0x19d370: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19d370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19d374: 0x3e00008  jr          $ra
    ctx->pc = 0x19D374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D374u;
        // 0x19d378: 0x2442a2f8  addiu       $v0, $v0, -0x5D08 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D37Cu;
    // 0x19d37c: 0x0  nop
    ctx->pc = 0x19d37cu;
    // NOP
    ctx->pc = 0x19d380u;
}
