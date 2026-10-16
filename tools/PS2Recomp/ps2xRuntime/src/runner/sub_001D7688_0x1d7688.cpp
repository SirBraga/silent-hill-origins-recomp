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

// Function: sub_001D7688
// Address: 0x1d7688 - 0x1d7698
void sub_001D7688_0x1d7688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7688_0x1d7688");
#endif

    ctx->pc = 0x1d7688u;

    // 0x1d7688: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d7688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d768c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D768Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D768Cu;
        // 0x1d7690: 0x8c629ce8  lw          $v0, -0x6318($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941928)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D768Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7694u;
    // 0x1d7694: 0x0  nop
    ctx->pc = 0x1d7694u;
    // NOP
    ctx->pc = 0x1d7698u;
}
