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

// Function: sub_003215D0
// Address: 0x3215d0 - 0x3215f0
void sub_003215D0_0x3215d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003215D0_0x3215d0");
#endif

    switch (ctx->pc) {
        case 0x3215d8u: goto label_3215d8;
        case 0x3215e8u: goto label_3215e8;
        default: break;
    }

    ctx->pc = 0x3215d0u;

    // 0x3215d0: 0x2403ff98  addiu       $v1, $zero, -0x68
    ctx->pc = 0x3215d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967192));
    // 0x3215d4: 0xc  syscall     0
    ctx->pc = 0x3215d4u;
    ctx->pc = 0x3215D8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3215d8:
    // 0x3215d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3215D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3215D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3215E0u;
    // 0x3215e0: 0x2403ff96  addiu       $v1, $zero, -0x6A
    ctx->pc = 0x3215e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967190));
    // 0x3215e4: 0xc  syscall     0
    ctx->pc = 0x3215e4u;
    ctx->pc = 0x3215E8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3215e8:
    // 0x3215e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3215E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3215E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3215F0u;
}
