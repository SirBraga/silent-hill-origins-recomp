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

// Function: sub_00312268
// Address: 0x312268 - 0x312278
void sub_00312268_0x312268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312268_0x312268");
#endif

    ctx->pc = 0x312268u;

    // 0x312268: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x312268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x31226c: 0x3e00008  jr          $ra
    ctx->pc = 0x31226Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31226Cu;
        // 0x312270: 0x8c626ccc  lw          $v0, 0x6CCC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27852)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31226Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312274u;
    // 0x312274: 0x0  nop
    ctx->pc = 0x312274u;
    // NOP
    ctx->pc = 0x312278u;
}
