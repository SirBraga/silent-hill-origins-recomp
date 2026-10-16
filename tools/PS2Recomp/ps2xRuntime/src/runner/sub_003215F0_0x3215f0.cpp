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

// Function: sub_003215F0
// Address: 0x3215f0 - 0x321640
void sub_003215F0_0x3215f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003215F0_0x3215f0");
#endif

    switch (ctx->pc) {
        case 0x3215f8u: goto label_3215f8;
        case 0x321608u: goto label_321608;
        case 0x321618u: goto label_321618;
        case 0x321628u: goto label_321628;
        case 0x321638u: goto label_321638;
        default: break;
    }

    ctx->pc = 0x3215f0u;

    // 0x3215f0: 0x2403006b  addiu       $v1, $zero, 0x6B
    ctx->pc = 0x3215f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x3215f4: 0xc  syscall     0
    ctx->pc = 0x3215f4u;
    ctx->pc = 0x3215F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3215f8:
    // 0x3215f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3215F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3215F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321600u;
    // 0x321600: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x321600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x321604: 0xc  syscall     0
    ctx->pc = 0x321604u;
    ctx->pc = 0x321608u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321608:
    // 0x321608: 0x3e00008  jr          $ra
    ctx->pc = 0x321608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321610u;
    // 0x321610: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x321610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x321614: 0xc  syscall     0
    ctx->pc = 0x321614u;
    ctx->pc = 0x321618u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321618:
    // 0x321618: 0x3e00008  jr          $ra
    ctx->pc = 0x321618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321620u;
    // 0x321620: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x321620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x321624: 0xc  syscall     0
    ctx->pc = 0x321624u;
    ctx->pc = 0x321628u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321628:
    // 0x321628: 0x3e00008  jr          $ra
    ctx->pc = 0x321628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321630u;
    // 0x321630: 0x2403006f  addiu       $v1, $zero, 0x6F
    ctx->pc = 0x321630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x321634: 0xc  syscall     0
    ctx->pc = 0x321634u;
    ctx->pc = 0x321638u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321638:
    // 0x321638: 0x3e00008  jr          $ra
    ctx->pc = 0x321638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321640u;
}
