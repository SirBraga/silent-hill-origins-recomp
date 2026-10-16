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

// Function: sub_00321270
// Address: 0x321270 - 0x321290
void sub_00321270_0x321270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321270_0x321270");
#endif

    switch (ctx->pc) {
        case 0x321278u: goto label_321278;
        case 0x321288u: goto label_321288;
        default: break;
    }

    ctx->pc = 0x321270u;

    // 0x321270: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x321270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x321274: 0xc  syscall     0
    ctx->pc = 0x321274u;
    ctx->pc = 0x321278u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321278:
    // 0x321278: 0x3e00008  jr          $ra
    ctx->pc = 0x321278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321280u;
    // 0x321280: 0x2403ffca  addiu       $v1, $zero, -0x36
    ctx->pc = 0x321280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967242));
    // 0x321284: 0xc  syscall     0
    ctx->pc = 0x321284u;
    ctx->pc = 0x321288u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321288:
    // 0x321288: 0x3e00008  jr          $ra
    ctx->pc = 0x321288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321290u;
}
