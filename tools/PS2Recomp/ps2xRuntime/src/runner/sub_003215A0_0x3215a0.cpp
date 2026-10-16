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

// Function: sub_003215A0
// Address: 0x3215a0 - 0x3215d0
void sub_003215A0_0x3215a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003215A0_0x3215a0");
#endif

    switch (ctx->pc) {
        case 0x3215a8u: goto label_3215a8;
        case 0x3215b8u: goto label_3215b8;
        case 0x3215c8u: goto label_3215c8;
        default: break;
    }

    ctx->pc = 0x3215a0u;

    // 0x3215a0: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x3215a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3215a4: 0xc  syscall     0
    ctx->pc = 0x3215a4u;
    ctx->pc = 0x3215A8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3215a8:
    // 0x3215a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3215A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3215A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3215B0u;
    // 0x3215b0: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x3215b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x3215b4: 0xc  syscall     0
    ctx->pc = 0x3215b4u;
    ctx->pc = 0x3215B8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3215b8:
    // 0x3215b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3215B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3215B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3215C0u;
    // 0x3215c0: 0x2403ff99  addiu       $v1, $zero, -0x67
    ctx->pc = 0x3215c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967193));
    // 0x3215c4: 0xc  syscall     0
    ctx->pc = 0x3215c4u;
    ctx->pc = 0x3215C8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3215c8:
    // 0x3215c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3215C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3215C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3215D0u;
}
