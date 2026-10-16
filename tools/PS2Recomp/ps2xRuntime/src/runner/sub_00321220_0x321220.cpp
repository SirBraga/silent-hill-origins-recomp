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

// Function: sub_00321220
// Address: 0x321220 - 0x321240
void sub_00321220_0x321220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321220_0x321220");
#endif

    switch (ctx->pc) {
        case 0x321228u: goto label_321228;
        case 0x321238u: goto label_321238;
        default: break;
    }

    ctx->pc = 0x321220u;

    // 0x321220: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x321220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x321224: 0xc  syscall     0
    ctx->pc = 0x321224u;
    ctx->pc = 0x321228u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321228:
    // 0x321228: 0x3e00008  jr          $ra
    ctx->pc = 0x321228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321230u;
    // 0x321230: 0x2403ffcf  addiu       $v1, $zero, -0x31
    ctx->pc = 0x321230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x321234: 0xc  syscall     0
    ctx->pc = 0x321234u;
    ctx->pc = 0x321238u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321238:
    // 0x321238: 0x3e00008  jr          $ra
    ctx->pc = 0x321238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321240u;
}
