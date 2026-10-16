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

// Function: sub_001586D8
// Address: 0x1586d8 - 0x1586e8
void sub_001586D8_0x1586d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001586D8_0x1586d8");
#endif

    ctx->pc = 0x1586d8u;

    // 0x1586d8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1586d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1586dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1586DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1586E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1586DCu;
        // 0x1586e0: 0x8c62861c  lw          $v0, -0x79E4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936092)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1586DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1586E4u;
    // 0x1586e4: 0x0  nop
    ctx->pc = 0x1586e4u;
    // NOP
    ctx->pc = 0x1586e8u;
}
