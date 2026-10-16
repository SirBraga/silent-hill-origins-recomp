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

// Function: sub_00321210
// Address: 0x321210 - 0x321220
void sub_00321210_0x321210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321210_0x321210");
#endif

    switch (ctx->pc) {
        case 0x321218u: goto label_321218;
        default: break;
    }

    ctx->pc = 0x321210u;

    // 0x321210: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x321210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x321214: 0xc  syscall     0
    ctx->pc = 0x321214u;
    ctx->pc = 0x321218u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321218:
    // 0x321218: 0x3e00008  jr          $ra
    ctx->pc = 0x321218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321220u;
}
