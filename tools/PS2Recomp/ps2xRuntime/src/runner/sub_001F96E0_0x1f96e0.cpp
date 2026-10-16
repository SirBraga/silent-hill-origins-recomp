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

// Function: sub_001F96E0
// Address: 0x1f96e0 - 0x1f9710
void sub_001F96E0_0x1f96e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F96E0_0x1f96e0");
#endif

    switch (ctx->pc) {
        case 0x1f96f0u: goto label_1f96f0;
        case 0x1f9704u: goto label_1f9704;
        default: break;
    }

    ctx->pc = 0x1f96e0u;

    // 0x1f96e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f96e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f96e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f96e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f96e8: 0xc07e144  jal         func_1F8510
    ctx->pc = 0x1F96E8u;
    SET_GPR_U32(ctx, 31, 0x1F96F0u);
    ctx->pc = 0x1F8510u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8510u, 0x1F96E8u, 0x1F96F0u)) {
        return;
    }
    ctx->pc = 0x1F96F0u;
label_1f96f0:
    // 0x1f96f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f96f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f96f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F96F4u;
    {
        const bool branch_taken_0x1f96f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F96F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96F4u;
        // 0x1f96f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f96f4) {
            ctx->pc = 0x1F9704u;
            goto label_1f9704;
        }
    }
    ctx->pc = 0x1F96FCu;
    // 0x1f96fc: 0xc07e4fc  jal         func_1F93F0
    ctx->pc = 0x1F96FCu;
    SET_GPR_U32(ctx, 31, 0x1F9704u);
    ctx->pc = 0x1F93F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F93F0u, 0x1F96FCu, 0x1F9704u)) {
        return;
    }
    ctx->pc = 0x1F9704u;
label_1f9704:
    // 0x1f9704: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1f9704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1f9708: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9708u;
        // 0x1f970c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9710u;
}
