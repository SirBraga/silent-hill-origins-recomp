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

// Function: sub_00321640
// Address: 0x321640 - 0x321660
void sub_00321640_0x321640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321640_0x321640");
#endif

    switch (ctx->pc) {
        case 0x321648u: goto label_321648;
        case 0x321658u: goto label_321658;
        default: break;
    }

    ctx->pc = 0x321640u;

    // 0x321640: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x321640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x321644: 0xc  syscall     0
    ctx->pc = 0x321644u;
    ctx->pc = 0x321648u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321648:
    // 0x321648: 0x3e00008  jr          $ra
    ctx->pc = 0x321648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321650u;
    // 0x321650: 0x2403ff90  addiu       $v1, $zero, -0x70
    ctx->pc = 0x321650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967184));
    // 0x321654: 0xc  syscall     0
    ctx->pc = 0x321654u;
    ctx->pc = 0x321658u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321658:
    // 0x321658: 0x3e00008  jr          $ra
    ctx->pc = 0x321658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321660u;
}
