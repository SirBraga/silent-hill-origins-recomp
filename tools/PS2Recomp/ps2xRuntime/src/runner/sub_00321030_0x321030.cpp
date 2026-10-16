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

// Function: sub_00321030
// Address: 0x321030 - 0x321040
void sub_00321030_0x321030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321030_0x321030");
#endif

    switch (ctx->pc) {
        case 0x321038u: goto label_321038;
        default: break;
    }

    ctx->pc = 0x321030u;

    // 0x321030: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x321030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x321034: 0xc  syscall     0
    ctx->pc = 0x321034u;
    ctx->pc = 0x321038u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321038:
    // 0x321038: 0x3e00008  jr          $ra
    ctx->pc = 0x321038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321040u;
}
