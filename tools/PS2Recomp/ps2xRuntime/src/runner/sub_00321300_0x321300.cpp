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

// Function: sub_00321300
// Address: 0x321300 - 0x321320
void sub_00321300_0x321300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321300_0x321300");
#endif

    switch (ctx->pc) {
        case 0x321308u: goto label_321308;
        case 0x321318u: goto label_321318;
        default: break;
    }

    ctx->pc = 0x321300u;

    // 0x321300: 0x2403003e  addiu       $v1, $zero, 0x3E
    ctx->pc = 0x321300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x321304: 0xc  syscall     0
    ctx->pc = 0x321304u;
    ctx->pc = 0x321308u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321308:
    // 0x321308: 0x3e00008  jr          $ra
    ctx->pc = 0x321308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321310u;
    // 0x321310: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x321310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x321314: 0xc  syscall     0
    ctx->pc = 0x321314u;
    ctx->pc = 0x321318u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321318:
    // 0x321318: 0x3e00008  jr          $ra
    ctx->pc = 0x321318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321320u;
}
