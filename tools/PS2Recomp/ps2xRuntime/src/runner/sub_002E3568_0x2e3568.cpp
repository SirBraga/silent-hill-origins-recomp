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

// Function: sub_002E3568
// Address: 0x2e3568 - 0x2e3578
void sub_002E3568_0x2e3568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3568_0x2e3568");
#endif

    ctx->pc = 0x2e3568u;

    // 0x2e3568: 0x40024800  mfc0        $v0, Count
    ctx->pc = 0x2e3568u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_count);
    // 0x2e356c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E356Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E356Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3574u;
    // 0x2e3574: 0x0  nop
    ctx->pc = 0x2e3574u;
    // NOP
    ctx->pc = 0x2e3578u;
}
