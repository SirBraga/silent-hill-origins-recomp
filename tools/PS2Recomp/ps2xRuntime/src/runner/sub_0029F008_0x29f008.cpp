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

// Function: sub_0029F008
// Address: 0x29f008 - 0x29f020
void sub_0029F008_0x29f008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F008_0x29f008");
#endif

    switch (ctx->pc) {
        case 0x29f010u: goto label_29f010;
        default: break;
    }

    ctx->pc = 0x29f008u;

    // 0x29f008: 0xc07e4fc  jal         func_1F93F0
    ctx->pc = 0x29F008u;
    SET_GPR_U32(ctx, 31, 0x29F010u);
    ctx->pc = 0x1F93F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F93F0u, 0x29F008u, 0x29F010u)) {
        return;
    }
    ctx->pc = 0x29F010u;
label_29f010:
    // 0x29f010: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29f010u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f014: 0x3e00008  jr          $ra
    ctx->pc = 0x29F014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F014u;
        // 0x29f018: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F01Cu;
    // 0x29f01c: 0x0  nop
    ctx->pc = 0x29f01cu;
    // NOP
    ctx->pc = 0x29f020u;
}
