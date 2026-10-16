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

// Function: sub_00321660
// Address: 0x321660 - 0x321690
void sub_00321660_0x321660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321660_0x321660");
#endif

    switch (ctx->pc) {
        case 0x321668u: goto label_321668;
        case 0x321678u: goto label_321678;
        case 0x321688u: goto label_321688;
        default: break;
    }

    ctx->pc = 0x321660u;

    // 0x321660: 0x24030071  addiu       $v1, $zero, 0x71
    ctx->pc = 0x321660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x321664: 0xc  syscall     0
    ctx->pc = 0x321664u;
    ctx->pc = 0x321668u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321668:
    // 0x321668: 0x3e00008  jr          $ra
    ctx->pc = 0x321668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321670u;
    // 0x321670: 0x2403ff8f  addiu       $v1, $zero, -0x71
    ctx->pc = 0x321670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967183));
    // 0x321674: 0xc  syscall     0
    ctx->pc = 0x321674u;
    ctx->pc = 0x321678u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321678:
    // 0x321678: 0x3e00008  jr          $ra
    ctx->pc = 0x321678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321680u;
    // 0x321680: 0x24030072  addiu       $v1, $zero, 0x72
    ctx->pc = 0x321680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x321684: 0xc  syscall     0
    ctx->pc = 0x321684u;
    ctx->pc = 0x321688u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321688:
    // 0x321688: 0x3e00008  jr          $ra
    ctx->pc = 0x321688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321690u;
}
