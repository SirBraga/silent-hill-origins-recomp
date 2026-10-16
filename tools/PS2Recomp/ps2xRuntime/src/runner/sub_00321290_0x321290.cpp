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

// Function: sub_00321290
// Address: 0x321290 - 0x321300
void sub_00321290_0x321290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321290_0x321290");
#endif

    switch (ctx->pc) {
        case 0x321298u: goto label_321298;
        case 0x3212a8u: goto label_3212a8;
        case 0x3212b8u: goto label_3212b8;
        case 0x3212c8u: goto label_3212c8;
        case 0x3212d8u: goto label_3212d8;
        case 0x3212e8u: goto label_3212e8;
        case 0x3212f8u: goto label_3212f8;
        default: break;
    }

    ctx->pc = 0x321290u;

    // 0x321290: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x321290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x321294: 0xc  syscall     0
    ctx->pc = 0x321294u;
    ctx->pc = 0x321298u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321298:
    // 0x321298: 0x3e00008  jr          $ra
    ctx->pc = 0x321298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3212A0u;
    // 0x3212a0: 0x2403ffc8  addiu       $v1, $zero, -0x38
    ctx->pc = 0x3212a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967240));
    // 0x3212a4: 0xc  syscall     0
    ctx->pc = 0x3212a4u;
    ctx->pc = 0x3212A8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3212a8:
    // 0x3212a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3212A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3212A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3212B0u;
    // 0x3212b0: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x3212b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x3212b4: 0xc  syscall     0
    ctx->pc = 0x3212b4u;
    ctx->pc = 0x3212B8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3212b8:
    // 0x3212b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3212B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3212B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3212C0u;
    // 0x3212c0: 0x2403ffc6  addiu       $v1, $zero, -0x3A
    ctx->pc = 0x3212c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967238));
    // 0x3212c4: 0xc  syscall     0
    ctx->pc = 0x3212c4u;
    ctx->pc = 0x3212C8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3212c8:
    // 0x3212c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3212C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3212C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3212D0u;
    // 0x3212d0: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x3212d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x3212d4: 0xc  syscall     0
    ctx->pc = 0x3212d4u;
    ctx->pc = 0x3212D8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3212d8:
    // 0x3212d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3212D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3212D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3212E0u;
    // 0x3212e0: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x3212e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3212e4: 0xc  syscall     0
    ctx->pc = 0x3212e4u;
    ctx->pc = 0x3212E8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3212e8:
    // 0x3212e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3212E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3212E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3212F0u;
    // 0x3212f0: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x3212f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x3212f4: 0xc  syscall     0
    ctx->pc = 0x3212f4u;
    ctx->pc = 0x3212F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3212f8:
    // 0x3212f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3212F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3212F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321300u;
}
