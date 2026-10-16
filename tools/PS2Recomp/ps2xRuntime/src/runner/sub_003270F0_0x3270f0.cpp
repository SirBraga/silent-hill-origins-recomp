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

// Function: sub_003270F0
// Address: 0x3270f0 - 0x327100
void sub_003270F0_0x3270f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003270F0_0x3270f0");
#endif

    switch (ctx->pc) {
        case 0x3270f8u: goto label_3270f8;
        default: break;
    }

    ctx->pc = 0x3270f0u;

    // 0x3270f0: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x3270f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x3270f4: 0xc  syscall     0
    ctx->pc = 0x3270f4u;
    ctx->pc = 0x3270F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3270f8:
    // 0x3270f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3270F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3270F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327100u;
}
