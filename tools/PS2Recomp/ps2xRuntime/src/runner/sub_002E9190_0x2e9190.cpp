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

// Function: sub_002E9190
// Address: 0x2e9190 - 0x2e91a0
void sub_002E9190_0x2e9190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9190_0x2e9190");
#endif

    ctx->pc = 0x2e9190u;

    // 0x2e9190: 0x8f828c60  lw          $v0, -0x73A0($gp)
    ctx->pc = 0x2e9190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x2e9194: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E919Cu;
    // 0x2e919c: 0x0  nop
    ctx->pc = 0x2e919cu;
    // NOP
    ctx->pc = 0x2e91a0u;
}
