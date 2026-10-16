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

// Function: sub_00178B90
// Address: 0x178b90 - 0x178ba0
void sub_00178B90_0x178b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178B90_0x178b90");
#endif

    ctx->pc = 0x178b90u;

    // 0x178b90: 0x3e00008  jr          $ra
    ctx->pc = 0x178B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178B98u;
    // 0x178b98: 0xac870074  sw          $a3, 0x74($a0)
    ctx->pc = 0x178b98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 7));
    // 0x178b9c: 0x0  nop
    ctx->pc = 0x178b9cu;
    // NOP
    ctx->pc = 0x178ba0u;
}
