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

// Function: sub_002488F8
// Address: 0x2488f8 - 0x248910
void sub_002488F8_0x2488f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002488F8_0x2488f8");
#endif

    ctx->pc = 0x2488f8u;

    // 0x2488f8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2488f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2488fc: 0x8c634188  lw          $v1, 0x4188($v1)
    ctx->pc = 0x2488fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4188u));
    // 0x248900: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x248900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x248904: 0x24421010  addiu       $v0, $v0, 0x1010
    ctx->pc = 0x248904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4112));
    // 0x248908: 0x3e00008  jr          $ra
    ctx->pc = 0x248908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248908u;
        // 0x24890c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248910u;
}
