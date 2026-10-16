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

// Function: sub_002065F8
// Address: 0x2065f8 - 0x206608
void sub_002065F8_0x2065f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002065F8_0x2065f8");
#endif

    ctx->pc = 0x2065f8u;

    // 0x2065f8: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2065f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2065fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2065FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2065FCu;
        // 0x206600: 0x8c622014  lw          $v0, 0x2014($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8212)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2065FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206604u;
    // 0x206604: 0x0  nop
    ctx->pc = 0x206604u;
    // NOP
    ctx->pc = 0x206608u;
}
