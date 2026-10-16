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

// Function: sub_00321730
// Address: 0x321730 - 0x321750
void sub_00321730_0x321730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321730_0x321730");
#endif

    switch (ctx->pc) {
        case 0x321738u: goto label_321738;
        case 0x321748u: goto label_321748;
        default: break;
    }

    ctx->pc = 0x321730u;

    // 0x321730: 0x2403007a  addiu       $v1, $zero, 0x7A
    ctx->pc = 0x321730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x321734: 0xc  syscall     0
    ctx->pc = 0x321734u;
    ctx->pc = 0x321738u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321738:
    // 0x321738: 0x3e00008  jr          $ra
    ctx->pc = 0x321738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321740u;
    // 0x321740: 0x2403007b  addiu       $v1, $zero, 0x7B
    ctx->pc = 0x321740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x321744: 0xc  syscall     0
    ctx->pc = 0x321744u;
    ctx->pc = 0x321748u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321748:
    // 0x321748: 0x3e00008  jr          $ra
    ctx->pc = 0x321748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321750u;
}
