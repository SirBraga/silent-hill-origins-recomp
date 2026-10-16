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

// Function: sub_00321350
// Address: 0x321350 - 0x321360
void sub_00321350_0x321350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321350_0x321350");
#endif

    switch (ctx->pc) {
        case 0x321358u: goto label_321358;
        default: break;
    }

    ctx->pc = 0x321350u;

    // 0x321350: 0x2403ffbd  addiu       $v1, $zero, -0x43
    ctx->pc = 0x321350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967229));
    // 0x321354: 0xc  syscall     0
    ctx->pc = 0x321354u;
    ctx->pc = 0x321358u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321358:
    // 0x321358: 0x3e00008  jr          $ra
    ctx->pc = 0x321358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321360u;
}
