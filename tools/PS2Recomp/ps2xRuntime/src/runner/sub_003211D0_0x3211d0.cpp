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

// Function: sub_003211D0
// Address: 0x3211d0 - 0x321210
void sub_003211D0_0x3211d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003211D0_0x3211d0");
#endif

    switch (ctx->pc) {
        case 0x3211d8u: goto label_3211d8;
        case 0x3211e8u: goto label_3211e8;
        case 0x3211f8u: goto label_3211f8;
        case 0x321208u: goto label_321208;
        default: break;
    }

    ctx->pc = 0x3211d0u;

    // 0x3211d0: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x3211d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x3211d4: 0xc  syscall     0
    ctx->pc = 0x3211d4u;
    ctx->pc = 0x3211D8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3211d8:
    // 0x3211d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3211D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3211D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3211E0u;
    // 0x3211e0: 0x2403ffd4  addiu       $v1, $zero, -0x2C
    ctx->pc = 0x3211e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967252));
    // 0x3211e4: 0xc  syscall     0
    ctx->pc = 0x3211e4u;
    ctx->pc = 0x3211E8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3211e8:
    // 0x3211e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3211E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3211E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3211F0u;
    // 0x3211f0: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x3211f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x3211f4: 0xc  syscall     0
    ctx->pc = 0x3211f4u;
    ctx->pc = 0x3211F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3211f8:
    // 0x3211f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3211F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3211F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321200u;
    // 0x321200: 0x2403ffd2  addiu       $v1, $zero, -0x2E
    ctx->pc = 0x321200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967250));
    // 0x321204: 0xc  syscall     0
    ctx->pc = 0x321204u;
    ctx->pc = 0x321208u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321208:
    // 0x321208: 0x3e00008  jr          $ra
    ctx->pc = 0x321208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321210u;
}
