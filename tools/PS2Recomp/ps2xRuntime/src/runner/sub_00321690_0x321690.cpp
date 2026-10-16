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

// Function: sub_00321690
// Address: 0x321690 - 0x3216c0
void sub_00321690_0x321690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321690_0x321690");
#endif

    switch (ctx->pc) {
        case 0x321698u: goto label_321698;
        case 0x3216a8u: goto label_3216a8;
        case 0x3216b8u: goto label_3216b8;
        default: break;
    }

    ctx->pc = 0x321690u;

    // 0x321690: 0x24030073  addiu       $v1, $zero, 0x73
    ctx->pc = 0x321690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x321694: 0xc  syscall     0
    ctx->pc = 0x321694u;
    ctx->pc = 0x321698u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321698:
    // 0x321698: 0x3e00008  jr          $ra
    ctx->pc = 0x321698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3216A0u;
    // 0x3216a0: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x3216a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x3216a4: 0xc  syscall     0
    ctx->pc = 0x3216a4u;
    ctx->pc = 0x3216A8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3216a8:
    // 0x3216a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3216A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3216A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3216B0u;
    // 0x3216b0: 0x24030075  addiu       $v1, $zero, 0x75
    ctx->pc = 0x3216b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x3216b4: 0xc  syscall     0
    ctx->pc = 0x3216b4u;
    ctx->pc = 0x3216B8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3216b8:
    // 0x3216b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3216B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3216B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3216C0u;
}
