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

// Function: sub_001CDCC8
// Address: 0x1cdcc8 - 0x1cdd00
void sub_001CDCC8_0x1cdcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CDCC8_0x1cdcc8");
#endif

    switch (ctx->pc) {
        case 0x1cdcd8u: goto label_1cdcd8;
        default: break;
    }

    ctx->pc = 0x1cdcc8u;

    // 0x1cdcc8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1cdcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1cdccc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1cdcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cdcd0: 0x2482028c  addiu       $v0, $a0, 0x28C
    ctx->pc = 0x1cdcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 652));
    // 0x1cdcd4: 0x0  nop
    ctx->pc = 0x1cdcd4u;
    // NOP
label_1cdcd8:
    // 0x1cdcd8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1cdcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1cdcdc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1cdcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1cdce0: 0x0  nop
    ctx->pc = 0x1cdce0u;
    // NOP
    // 0x1cdce4: 0x0  nop
    ctx->pc = 0x1cdce4u;
    // NOP
    // 0x1cdce8: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CDCE8u;
    {
        const bool branch_taken_0x1cdce8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1CDCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCE8u;
        // 0x1cdcec: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdce8) {
            ctx->pc = 0x1CDCD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdcd8;
        }
    }
    ctx->pc = 0x1CDCF0u;
    // 0x1cdcf0: 0xac800298  sw          $zero, 0x298($a0)
    ctx->pc = 0x1cdcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 664), GPR_U32(ctx, 0));
    // 0x1cdcf4: 0xac800294  sw          $zero, 0x294($a0)
    ctx->pc = 0x1cdcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 660), GPR_U32(ctx, 0));
    // 0x1cdcf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCF8u;
        // 0x1cdcfc: 0xac800290  sw          $zero, 0x290($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDCF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDD00u;
}
