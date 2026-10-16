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

// Function: sub_00321170
// Address: 0x321170 - 0x3211b0
void sub_00321170_0x321170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321170_0x321170");
#endif

    switch (ctx->pc) {
        case 0x321178u: goto label_321178;
        case 0x321188u: goto label_321188;
        case 0x321198u: goto label_321198;
        case 0x3211a8u: goto label_3211a8;
        default: break;
    }

    ctx->pc = 0x321170u;

    // 0x321170: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x321170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x321174: 0xc  syscall     0
    ctx->pc = 0x321174u;
    ctx->pc = 0x321178u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321178:
    // 0x321178: 0x3e00008  jr          $ra
    ctx->pc = 0x321178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321180u;
    // 0x321180: 0x2403ffda  addiu       $v1, $zero, -0x26
    ctx->pc = 0x321180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967258));
    // 0x321184: 0xc  syscall     0
    ctx->pc = 0x321184u;
    ctx->pc = 0x321188u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321188:
    // 0x321188: 0x3e00008  jr          $ra
    ctx->pc = 0x321188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321190u;
    // 0x321190: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x321190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x321194: 0xc  syscall     0
    ctx->pc = 0x321194u;
    ctx->pc = 0x321198u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321198:
    // 0x321198: 0x3e00008  jr          $ra
    ctx->pc = 0x321198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3211A0u;
    // 0x3211a0: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x3211a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3211a4: 0xc  syscall     0
    ctx->pc = 0x3211a4u;
    ctx->pc = 0x3211A8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3211a8:
    // 0x3211a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3211A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3211A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3211B0u;
}
