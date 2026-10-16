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

// Function: sub_001F81F0
// Address: 0x1f81f0 - 0x1f8208
void sub_001F81F0_0x1f81f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F81F0_0x1f81f0");
#endif

    switch (ctx->pc) {
        case 0x1f81f8u: goto label_1f81f8;
        case 0x1f81fcu: goto label_1f81fc;
        default: break;
    }

    ctx->pc = 0x1f81f0u;

    // 0x1f81f0: 0xc07e4fc  jal         func_1F93F0
    ctx->pc = 0x1F81F0u;
    SET_GPR_U32(ctx, 31, 0x1F81F8u);
    ctx->pc = 0x1F93F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F93F0u, 0x1F81F0u, 0x1F81F8u)) {
        return;
    }
    ctx->pc = 0x1F81F8u;
label_1f81f8:
    // 0x1f81f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f81f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f81fc:
    // 0x1f81fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f81fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8200: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8200u;
        // 0x1f8204: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8208u;
}
