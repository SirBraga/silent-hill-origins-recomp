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

// Function: sub_00321750
// Address: 0x321750 - 0x321780
void sub_00321750_0x321750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321750_0x321750");
#endif

    switch (ctx->pc) {
        case 0x321758u: goto label_321758;
        case 0x321768u: goto label_321768;
        case 0x321778u: goto label_321778;
        default: break;
    }

    ctx->pc = 0x321750u;

    // 0x321750: 0x2403007c  addiu       $v1, $zero, 0x7C
    ctx->pc = 0x321750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x321754: 0xc  syscall     0
    ctx->pc = 0x321754u;
    ctx->pc = 0x321758u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321758:
    // 0x321758: 0x3e00008  jr          $ra
    ctx->pc = 0x321758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321760u;
    // 0x321760: 0x2403007d  addiu       $v1, $zero, 0x7D
    ctx->pc = 0x321760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x321764: 0xc  syscall     0
    ctx->pc = 0x321764u;
    ctx->pc = 0x321768u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321768:
    // 0x321768: 0x3e00008  jr          $ra
    ctx->pc = 0x321768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321770u;
    // 0x321770: 0x2403007e  addiu       $v1, $zero, 0x7E
    ctx->pc = 0x321770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x321774: 0xc  syscall     0
    ctx->pc = 0x321774u;
    ctx->pc = 0x321778u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321778:
    // 0x321778: 0x3e00008  jr          $ra
    ctx->pc = 0x321778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321780u;
}
