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

// Function: sub_001D59D4
// Address: 0x1d59d4 - 0x1d59f8
void sub_001D59D4_0x1d59d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D59D4_0x1d59d4");
#endif

    switch (ctx->pc) {
        case 0x1d59dcu: goto label_1d59dc;
        case 0x1d59e0u: goto label_1d59e0;
        default: break;
    }

    ctx->pc = 0x1d59d4u;

    // 0x1d59d4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1d59d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1d59d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d59d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1d59dc:
    // 0x1d59dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1d59dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1d59e0:
    // 0x1d59e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d59e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d59e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d59e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d59e8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d59e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d59ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d59ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d59f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D59F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D59F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D59F0u;
        // 0x1d59f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D59F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D59F8u;
}
