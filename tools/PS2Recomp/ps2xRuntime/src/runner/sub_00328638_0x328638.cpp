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

// Function: sub_00328638
// Address: 0x328638 - 0x328648
void sub_00328638_0x328638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328638_0x328638");
#endif

    switch (ctx->pc) {
        case 0x328640u: goto label_328640;
        default: break;
    }

    ctx->pc = 0x328638u;

    // 0x328638: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x328638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x32863c: 0xc  syscall     0
    ctx->pc = 0x32863cu;
    ctx->pc = 0x328640u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_328640:
    // 0x328640: 0x3e00008  jr          $ra
    ctx->pc = 0x328640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328648u;
}
