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

// Function: sub_001BE2D0
// Address: 0x1be2d0 - 0x1be310
void sub_001BE2D0_0x1be2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE2D0_0x1be2d0");
#endif

    switch (ctx->pc) {
        case 0x1be2e8u: goto label_1be2e8;
        default: break;
    }

    ctx->pc = 0x1be2d0u;

    // 0x1be2d0: 0x8c8202dc  lw          $v0, 0x2DC($a0)
    ctx->pc = 0x1be2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 732)));
    // 0x1be2d4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1be2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1be2d8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BE2D8u;
    {
        const bool branch_taken_0x1be2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE2D8u;
        // 0x1be2dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be2d8) {
            ctx->pc = 0x1BE300u;
            goto label_1be300;
        }
    }
    ctx->pc = 0x1BE2E0u;
    // 0x1be2e0: 0x8c840320  lw          $a0, 0x320($a0)
    ctx->pc = 0x1be2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 800)));
    // 0x1be2e4: 0x0  nop
    ctx->pc = 0x1be2e4u;
    // NOP
label_1be2e8:
    // 0x1be2e8: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE2E8u;
    {
        const bool branch_taken_0x1be2e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1be2e8) {
            ctx->pc = 0x1BE304u;
            goto label_1be304;
        }
    }
    ctx->pc = 0x1BE2F0u;
    // 0x1be2f0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1be2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1be2f4: 0x0  nop
    ctx->pc = 0x1be2f4u;
    // NOP
    // 0x1be2f8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BE2F8u;
    {
        const bool branch_taken_0x1be2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE2F8u;
        // 0x1be2fc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be2f8) {
            ctx->pc = 0x1BE2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be2e8;
        }
    }
    ctx->pc = 0x1BE300u;
label_1be300:
    // 0x1be300: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1be300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1be304:
    // 0x1be304: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE30Cu;
    // 0x1be30c: 0x0  nop
    ctx->pc = 0x1be30cu;
    // NOP
    ctx->pc = 0x1be310u;
}
