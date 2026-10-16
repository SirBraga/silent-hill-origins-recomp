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

// Function: sub_00326FD8
// Address: 0x326fd8 - 0x326ff0
void sub_00326FD8_0x326fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326FD8_0x326fd8");
#endif

    switch (ctx->pc) {
        case 0x326fe0u: goto label_326fe0;
        default: break;
    }

    ctx->pc = 0x326fd8u;

    // 0x326fd8: 0x24030083  addiu       $v1, $zero, 0x83
    ctx->pc = 0x326fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x326fdc: 0xc  syscall     0
    ctx->pc = 0x326fdcu;
    ctx->pc = 0x326FE0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_326fe0:
    // 0x326fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x326FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326FE8u;
    // 0x326fe8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x326fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x326fec: 0x0  nop
    ctx->pc = 0x326fecu;
    // NOP
    ctx->pc = 0x326ff0u;
}
