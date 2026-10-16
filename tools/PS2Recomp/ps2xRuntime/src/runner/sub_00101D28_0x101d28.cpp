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

// Function: sub_00101D28
// Address: 0x101d28 - 0x101d38
void sub_00101D28_0x101d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101D28_0x101d28");
#endif

    ctx->pc = 0x101d28u;

    // 0x101d28: 0xac8601e0  sw          $a2, 0x1E0($a0)
    ctx->pc = 0x101d28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 480), GPR_U32(ctx, 6));
    // 0x101d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x101D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101D2Cu;
        // 0x101d30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101D34u;
    // 0x101d34: 0x0  nop
    ctx->pc = 0x101d34u;
    // NOP
    ctx->pc = 0x101d38u;
}
