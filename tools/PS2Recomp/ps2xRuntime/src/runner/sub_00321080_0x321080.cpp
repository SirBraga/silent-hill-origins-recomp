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

// Function: sub_00321080
// Address: 0x321080 - 0x321090
void sub_00321080_0x321080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321080_0x321080");
#endif

    switch (ctx->pc) {
        case 0x321088u: goto label_321088;
        default: break;
    }

    ctx->pc = 0x321080u;

    // 0x321080: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x321080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x321084: 0xc  syscall     0
    ctx->pc = 0x321084u;
    ctx->pc = 0x321088u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321088:
    // 0x321088: 0x3e00008  jr          $ra
    ctx->pc = 0x321088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321090u;
}
