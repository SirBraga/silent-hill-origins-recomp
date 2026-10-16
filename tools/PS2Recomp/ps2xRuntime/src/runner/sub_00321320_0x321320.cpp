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

// Function: sub_00321320
// Address: 0x321320 - 0x321330
void sub_00321320_0x321320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321320_0x321320");
#endif

    switch (ctx->pc) {
        case 0x321328u: goto label_321328;
        default: break;
    }

    ctx->pc = 0x321320u;

    // 0x321320: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x321320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x321324: 0xc  syscall     0
    ctx->pc = 0x321324u;
    ctx->pc = 0x321328u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321328:
    // 0x321328: 0x3e00008  jr          $ra
    ctx->pc = 0x321328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321330u;
}
