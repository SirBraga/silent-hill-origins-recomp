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

// Function: sub_002DAB50
// Address: 0x2dab50 - 0x2dab60
void sub_002DAB50_0x2dab50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAB50_0x2dab50");
#endif

    ctx->pc = 0x2dab50u;

    // 0x2dab50: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x2dab50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x2dab54: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAB54u;
        // 0x2dab58: 0x24427c20  addiu       $v0, $v0, 0x7C20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31776));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAB54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAB5Cu;
    // 0x2dab5c: 0x0  nop
    ctx->pc = 0x2dab5cu;
    // NOP
    ctx->pc = 0x2dab60u;
}
