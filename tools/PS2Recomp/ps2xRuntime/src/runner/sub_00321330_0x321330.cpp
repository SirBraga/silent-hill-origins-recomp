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

// Function: sub_00321330
// Address: 0x321330 - 0x321340
void sub_00321330_0x321330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321330_0x321330");
#endif

    switch (ctx->pc) {
        case 0x321338u: goto label_321338;
        default: break;
    }

    ctx->pc = 0x321330u;

    // 0x321330: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x321330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x321334: 0xc  syscall     0
    ctx->pc = 0x321334u;
    ctx->pc = 0x321338u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321338:
    // 0x321338: 0x3e00008  jr          $ra
    ctx->pc = 0x321338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321340u;
}
