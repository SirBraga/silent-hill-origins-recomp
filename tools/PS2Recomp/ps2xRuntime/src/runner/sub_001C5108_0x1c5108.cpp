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

// Function: sub_001C5108
// Address: 0x1c5108 - 0x1c5128
void sub_001C5108_0x1c5108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5108_0x1c5108");
#endif

    switch (ctx->pc) {
        case 0x1c5118u: goto label_1c5118;
        default: break;
    }

    ctx->pc = 0x1c5108u;

    // 0x1c5108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c5108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c510c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c510cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c5110: 0xc06d778  jal         func_1B5DE0
    ctx->pc = 0x1C5110u;
    SET_GPR_U32(ctx, 31, 0x1C5118u);
    ctx->pc = 0x1B5DE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B5DE0u, 0x1C5110u, 0x1C5118u)) {
        return;
    }
    ctx->pc = 0x1C5118u;
label_1c5118:
    // 0x1c5118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c511c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C511Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C511Cu;
        // 0x1c5120: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C511Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5124u;
    // 0x1c5124: 0x0  nop
    ctx->pc = 0x1c5124u;
    // NOP
    ctx->pc = 0x1c5128u;
}
