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

// Function: sub_001CF710
// Address: 0x1cf710 - 0x1cf748
void sub_001CF710_0x1cf710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF710_0x1cf710");
#endif

    switch (ctx->pc) {
        case 0x1cf720u: goto label_1cf720;
        default: break;
    }

    ctx->pc = 0x1cf710u;

    // 0x1cf710: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1cf710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1cf714: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cf714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cf718: 0x24820298  addiu       $v0, $a0, 0x298
    ctx->pc = 0x1cf718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 664));
    // 0x1cf71c: 0x0  nop
    ctx->pc = 0x1cf71cu;
    // NOP
label_1cf720:
    // 0x1cf720: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1cf720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1cf724: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1cf724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1cf728: 0x0  nop
    ctx->pc = 0x1cf728u;
    // NOP
    // 0x1cf72c: 0x0  nop
    ctx->pc = 0x1cf72cu;
    // NOP
    // 0x1cf730: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CF730u;
    {
        const bool branch_taken_0x1cf730 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1CF734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF730u;
        // 0x1cf734: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf730) {
            ctx->pc = 0x1CF720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf720;
        }
    }
    ctx->pc = 0x1CF738u;
    // 0x1cf738: 0xac800288  sw          $zero, 0x288($a0)
    ctx->pc = 0x1cf738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 648), GPR_U32(ctx, 0));
    // 0x1cf73c: 0xac800278  sw          $zero, 0x278($a0)
    ctx->pc = 0x1cf73cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 632), GPR_U32(ctx, 0));
    // 0x1cf740: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF740u;
        // 0x1cf744: 0xac80027c  sw          $zero, 0x27C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 636), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF748u;
}
