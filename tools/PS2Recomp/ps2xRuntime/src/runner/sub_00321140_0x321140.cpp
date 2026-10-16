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

// Function: sub_00321140
// Address: 0x321140 - 0x321160
void sub_00321140_0x321140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321140_0x321140");
#endif

    switch (ctx->pc) {
        case 0x321148u: goto label_321148;
        case 0x321158u: goto label_321158;
        default: break;
    }

    ctx->pc = 0x321140u;

    // 0x321140: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x321140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x321144: 0xc  syscall     0
    ctx->pc = 0x321144u;
    ctx->pc = 0x321148u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321148:
    // 0x321148: 0x3e00008  jr          $ra
    ctx->pc = 0x321148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321150u;
    // 0x321150: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x321150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x321154: 0xc  syscall     0
    ctx->pc = 0x321154u;
    ctx->pc = 0x321158u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321158:
    // 0x321158: 0x3e00008  jr          $ra
    ctx->pc = 0x321158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321160u;
}
