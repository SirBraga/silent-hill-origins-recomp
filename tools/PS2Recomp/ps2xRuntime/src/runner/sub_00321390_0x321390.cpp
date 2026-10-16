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

// Function: sub_00321390
// Address: 0x321390 - 0x3213a0
void sub_00321390_0x321390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321390_0x321390");
#endif

    switch (ctx->pc) {
        case 0x321398u: goto label_321398;
        default: break;
    }

    ctx->pc = 0x321390u;

    // 0x321390: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x321390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x321394: 0xc  syscall     0
    ctx->pc = 0x321394u;
    ctx->pc = 0x321398u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321398:
    // 0x321398: 0x3e00008  jr          $ra
    ctx->pc = 0x321398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3213A0u;
}
