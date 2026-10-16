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

// Function: sub_001CEC70
// Address: 0x1cec70 - 0x1ced10
void sub_001CEC70_0x1cec70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CEC70_0x1cec70");
#endif

    switch (ctx->pc) {
        case 0x1cec70u: goto label_1cec70;
        case 0x1cec74u: goto label_1cec74;
        case 0x1cec78u: goto label_1cec78;
        case 0x1cec7cu: goto label_1cec7c;
        case 0x1cec80u: goto label_1cec80;
        case 0x1cec84u: goto label_1cec84;
        case 0x1cec88u: goto label_1cec88;
        case 0x1cec8cu: goto label_1cec8c;
        case 0x1cec90u: goto label_1cec90;
        case 0x1cec94u: goto label_1cec94;
        case 0x1cec98u: goto label_1cec98;
        case 0x1cec9cu: goto label_1cec9c;
        case 0x1ceca0u: goto label_1ceca0;
        case 0x1ceca4u: goto label_1ceca4;
        case 0x1ceca8u: goto label_1ceca8;
        case 0x1cecacu: goto label_1cecac;
        case 0x1cecb0u: goto label_1cecb0;
        case 0x1cecb4u: goto label_1cecb4;
        case 0x1cecb8u: goto label_1cecb8;
        case 0x1cecbcu: goto label_1cecbc;
        case 0x1cecc0u: goto label_1cecc0;
        case 0x1cecc4u: goto label_1cecc4;
        case 0x1cecc8u: goto label_1cecc8;
        case 0x1cecccu: goto label_1ceccc;
        case 0x1cecd0u: goto label_1cecd0;
        case 0x1cecd4u: goto label_1cecd4;
        case 0x1cecd8u: goto label_1cecd8;
        case 0x1cecdcu: goto label_1cecdc;
        case 0x1cece0u: goto label_1cece0;
        case 0x1cece4u: goto label_1cece4;
        case 0x1cece8u: goto label_1cece8;
        case 0x1cececu: goto label_1cecec;
        case 0x1cecf0u: goto label_1cecf0;
        case 0x1cecf4u: goto label_1cecf4;
        case 0x1cecf8u: goto label_1cecf8;
        case 0x1cecfcu: goto label_1cecfc;
        case 0x1ced00u: goto label_1ced00;
        case 0x1ced04u: goto label_1ced04;
        case 0x1ced08u: goto label_1ced08;
        case 0x1ced0cu: goto label_1ced0c;
        default: break;
    }

    ctx->pc = 0x1cec70u;

label_1cec70:
    // 0x1cec70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cec70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1cec74:
    // 0x1cec74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cec74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1cec78:
    // 0x1cec78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cec78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cec7c:
    // 0x1cec7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cec7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cec80:
    // 0x1cec80: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1cec80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1cec84:
    // 0x1cec84: 0x8e020268  lw          $v0, 0x268($s0)
    ctx->pc = 0x1cec84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
label_1cec88:
    // 0x1cec88: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1cec8c:
    if (ctx->pc == 0x1CEC8Cu) {
        ctx->pc = 0x1CEC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC88u;
        // 0x1cec8c: 0x8e050264  lw          $a1, 0x264($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEC90u;
        goto label_1cec90;
    }
    ctx->pc = 0x1CEC88u;
    {
        const bool branch_taken_0x1cec88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC88u;
        // 0x1cec8c: 0x8e050264  lw          $a1, 0x264($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cec88) {
            ctx->pc = 0x1CECACu;
            goto label_1cecac;
        }
    }
    ctx->pc = 0x1CEC90u;
label_1cec90:
    // 0x1cec90: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1cec90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1cec94:
    // 0x1cec94: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1cec94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1cec98:
    // 0x1cec98: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1cec98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1cec9c:
    // 0x1cec9c: 0x60f809  jalr        $v1
label_1ceca0:
    if (ctx->pc == 0x1CECA0u) {
        ctx->pc = 0x1CECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC9Cu;
        // 0x1ceca0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CECA4u;
        goto label_1ceca4;
    }
    ctx->pc = 0x1CEC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CECA4u);
        ctx->pc = 0x1CECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC9Cu;
        // 0x1ceca0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEC9Cu, 0x1CECA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CECA4u;
label_1ceca4:
    // 0x1ceca4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ceca8:
    if (ctx->pc == 0x1CECA8u) {
        ctx->pc = 0x1CECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CECA4u;
        // 0x1ceca8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CECACu;
        goto label_1cecac;
    }
    ctx->pc = 0x1CECA4u;
    {
        const bool branch_taken_0x1ceca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CECA4u;
        // 0x1ceca8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceca4) {
            ctx->pc = 0x1CECC4u;
            goto label_1cecc4;
        }
    }
    ctx->pc = 0x1CECACu;
label_1cecac:
    // 0x1cecac: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1cecacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1cecb0:
    // 0x1cecb0: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1cecb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_1cecb4:
    // 0x1cecb4: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x1cecb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_1cecb8:
    // 0x1cecb8: 0x60f809  jalr        $v1
label_1cecbc:
    if (ctx->pc == 0x1CECBCu) {
        ctx->pc = 0x1CECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CECB8u;
        // 0x1cecbc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CECC0u;
        goto label_1cecc0;
    }
    ctx->pc = 0x1CECB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CECC0u);
        ctx->pc = 0x1CECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CECB8u;
        // 0x1cecbc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CECB8u, 0x1CECC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CECC0u;
label_1cecc0:
    // 0x1cecc0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cecc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cecc4:
    // 0x1cecc4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cecc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cecc8:
    // 0x1cecc8: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1cecc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1ceccc:
    // 0x1ceccc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cecccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1cecd0:
    // 0x1cecd0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1cecd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1cecd4:
    // 0x1cecd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cecd8:
    // 0x1cecd8: 0x28a40008  slti        $a0, $a1, 0x8
    ctx->pc = 0x1cecd8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
label_1cecdc:
    // 0x1cecdc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_1cece0:
    if (ctx->pc == 0x1CECE0u) {
        ctx->pc = 0x1CECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CECDCu;
        // 0x1cece0: 0xac4601d0  sw          $a2, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CECE4u;
        goto label_1cece4;
    }
    ctx->pc = 0x1CECDCu;
    {
        const bool branch_taken_0x1cecdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CECDCu;
        // 0x1cece0: 0xac4601d0  sw          $a2, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cecdc) {
            ctx->pc = 0x1CECC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cecc8;
        }
    }
    ctx->pc = 0x1CECE4u;
label_1cece4:
    // 0x1cece4: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1cece4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1cece8:
    // 0x1cece8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cece8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cecec:
    // 0x1cecec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cececu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cecf0:
    // 0x1cecf0: 0xac6400f4  sw          $a0, 0xF4($v1)
    ctx->pc = 0x1cecf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 4));
label_1cecf4:
    // 0x1cecf4: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1cecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1cecf8:
    // 0x1cecf8: 0xac44002c  sw          $a0, 0x2C($v0)
    ctx->pc = 0x1cecf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 4));
label_1cecfc:
    // 0x1cecfc: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1cecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1ced00:
    // 0x1ced00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ced00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ced04:
    // 0x1ced04: 0xac6401d0  sw          $a0, 0x1D0($v1)
    ctx->pc = 0x1ced04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 4));
label_1ced08:
    // 0x1ced08: 0x3e00008  jr          $ra
label_1ced0c:
    if (ctx->pc == 0x1CED0Cu) {
        ctx->pc = 0x1CED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CED08u;
        // 0x1ced0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CED10u;
        goto label_fallthrough_0x1ced08;
    }
    ctx->pc = 0x1CED08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CED08u;
        // 0x1ced0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CED08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ced08:
    ctx->pc = 0x1CED10u;
}
