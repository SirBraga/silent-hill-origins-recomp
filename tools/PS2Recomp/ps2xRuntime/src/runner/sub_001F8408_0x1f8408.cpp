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

// Function: sub_001F8408
// Address: 0x1f8408 - 0x1f8420
void sub_001F8408_0x1f8408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8408_0x1f8408");
#endif

    switch (ctx->pc) {
        case 0x1f8410u: goto label_1f8410;
        default: break;
    }

    ctx->pc = 0x1f8408u;

    // 0x1f8408: 0xc07e4fc  jal         func_1F93F0
    ctx->pc = 0x1F8408u;
    SET_GPR_U32(ctx, 31, 0x1F8410u);
    ctx->pc = 0x1F93F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F93F0u, 0x1F8408u, 0x1F8410u)) {
        return;
    }
    ctx->pc = 0x1F8410u;
label_1f8410:
    // 0x1f8410: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f8410u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8414: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8414u;
        // 0x1f8418: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F841Cu;
    // 0x1f841c: 0x0  nop
    ctx->pc = 0x1f841cu;
    // NOP
    ctx->pc = 0x1f8420u;
}
