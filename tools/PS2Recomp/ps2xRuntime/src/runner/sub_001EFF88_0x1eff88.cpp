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

// Function: sub_001EFF88
// Address: 0x1eff88 - 0x1effa8
void sub_001EFF88_0x1eff88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFF88_0x1eff88");
#endif

    switch (ctx->pc) {
        case 0x1eff98u: goto label_1eff98;
        default: break;
    }

    ctx->pc = 0x1eff88u;

    // 0x1eff88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eff88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eff8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eff8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eff90: 0xc07c30a  jal         func_1F0C28
    ctx->pc = 0x1EFF90u;
    SET_GPR_U32(ctx, 31, 0x1EFF98u);
    ctx->pc = 0x1F0C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F0C28u, 0x1EFF90u, 0x1EFF98u)) {
        return;
    }
    ctx->pc = 0x1EFF98u;
label_1eff98:
    // 0x1eff98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eff98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eff9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF9Cu;
        // 0x1effa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFFA4u;
    // 0x1effa4: 0x0  nop
    ctx->pc = 0x1effa4u;
    // NOP
    ctx->pc = 0x1effa8u;
}
