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

// Function: sub_001AAA28
// Address: 0x1aaa28 - 0x1aaa38
void sub_001AAA28_0x1aaa28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AAA28_0x1aaa28");
#endif

    ctx->pc = 0x1aaa28u;

    // 0x1aaa28: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA28u;
        // 0x1aaa2c: 0x24020190  addiu       $v0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAA30u;
    // 0x1aaa30: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1aaa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1aaa34: 0x0  nop
    ctx->pc = 0x1aaa34u;
    // NOP
    ctx->pc = 0x1aaa38u;
}
