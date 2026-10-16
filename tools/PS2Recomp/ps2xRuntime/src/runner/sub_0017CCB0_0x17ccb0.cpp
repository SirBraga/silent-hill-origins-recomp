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

// Function: sub_0017CCB0
// Address: 0x17ccb0 - 0x17cd10
void sub_0017CCB0_0x17ccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CCB0_0x17ccb0");
#endif

    switch (ctx->pc) {
        case 0x17ccd0u: goto label_17ccd0;
        default: break;
    }

    ctx->pc = 0x17ccb0u;

    // 0x17ccb0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x17ccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17ccb4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17CCB4u;
    {
        const bool branch_taken_0x17ccb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CCB4u;
        // 0x17ccb8: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ccb4) {
            ctx->pc = 0x17CCFCu;
            goto label_17ccfc;
        }
    }
    ctx->pc = 0x17CCBCu;
    // 0x17ccbc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17ccbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ccc0: 0x24428758  addiu       $v0, $v0, -0x78A8
    ctx->pc = 0x17ccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936408));
    // 0x17ccc4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x17ccc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17ccc8: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x17ccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x17cccc: 0x0  nop
    ctx->pc = 0x17ccccu;
    // NOP
label_17ccd0:
    // 0x17ccd0: 0x8c43fff0  lw          $v1, -0x10($v0)
    ctx->pc = 0x17ccd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967280)));
    // 0x17ccd4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CCD4u;
    {
        const bool branch_taken_0x17ccd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ccd4) {
            ctx->pc = 0x17CCD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CCD4u;
            // 0x17ccd8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CCE8u;
            goto label_17cce8;
        }
    }
    ctx->pc = 0x17CCDCu;
    // 0x17ccdc: 0x54660003  bnel        $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x17CCDCu;
    {
        const bool branch_taken_0x17ccdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x17ccdc) {
            ctx->pc = 0x17CCE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CCDCu;
            // 0x17cce0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CCECu;
            goto label_17ccec;
        }
    }
    ctx->pc = 0x17CCE4u;
    // 0x17cce4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17cce4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_17cce8:
    // 0x17cce8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x17cce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_17ccec:
    // 0x17ccec: 0x4a1fff8  bgez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17CCECu;
    {
        const bool branch_taken_0x17ccec = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x17CCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CCECu;
        // 0x17ccf0: 0x24420018  addiu       $v0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ccec) {
            ctx->pc = 0x17CCD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ccd0;
        }
    }
    ctx->pc = 0x17CCF4u;
    // 0x17ccf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17ccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ccf8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x17ccf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_17ccfc:
    // 0x17ccfc: 0x3e00008  jr          $ra
    ctx->pc = 0x17CCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CCFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CD04u;
    // 0x17cd04: 0x0  nop
    ctx->pc = 0x17cd04u;
    // NOP
    // 0x17cd08: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17cd08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17cd0c: 0x0  nop
    ctx->pc = 0x17cd0cu;
    // NOP
    ctx->pc = 0x17cd10u;
}
