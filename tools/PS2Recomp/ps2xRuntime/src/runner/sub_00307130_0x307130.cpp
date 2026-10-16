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

// Function: sub_00307130
// Address: 0x307130 - 0x307140
void sub_00307130_0x307130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307130_0x307130");
#endif

    ctx->pc = 0x307130u;

    // 0x307130: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x307130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x307134: 0x3e00008  jr          $ra
    ctx->pc = 0x307134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307134u;
        // 0x307138: 0x24426910  addiu       $v0, $v0, 0x6910 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26896));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30713Cu;
    // 0x30713c: 0x0  nop
    ctx->pc = 0x30713cu;
    // NOP
    ctx->pc = 0x307140u;
}
