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

// Function: sub_001CCA38
// Address: 0x1cca38 - 0x1ccaf8
void sub_001CCA38_0x1cca38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCA38_0x1cca38");
#endif

    switch (ctx->pc) {
        case 0x1cca4cu: goto label_1cca4c;
        case 0x1cca60u: goto label_1cca60;
        case 0x1cca68u: goto label_1cca68;
        case 0x1ccab8u: goto label_1ccab8;
        default: break;
    }

    ctx->pc = 0x1cca38u;

    // 0x1cca38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cca38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cca3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cca3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cca40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cca40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cca44: 0xc06bbe0  jal         func_1AEF80
    ctx->pc = 0x1CCA44u;
    SET_GPR_U32(ctx, 31, 0x1CCA4Cu);
    ctx->pc = 0x1CCA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCA44u;
    // 0x1cca48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEF80u, 0x1CCA44u, 0x1CCA4Cu)) {
        return;
    }
    ctx->pc = 0x1CCA4Cu;
label_1cca4c:
    // 0x1cca4c: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1cca4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1cca50: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CCA50u;
    {
        const bool branch_taken_0x1cca50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA50u;
        // 0x1cca54: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cca50) {
            ctx->pc = 0x1CCA64u;
            goto label_1cca64;
        }
    }
    ctx->pc = 0x1CCA58u;
    // 0x1cca58: 0xc06db7c  jal         func_1B6DF0
    ctx->pc = 0x1CCA58u;
    SET_GPR_U32(ctx, 31, 0x1CCA60u);
    ctx->pc = 0x1B6DF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6DF0u, 0x1CCA58u, 0x1CCA60u)) {
        return;
    }
    ctx->pc = 0x1CCA60u;
label_1cca60:
    // 0x1cca60: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cca60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cca64:
    // 0x1cca64: 0x260602ac  addiu       $a2, $s0, 0x2AC
    ctx->pc = 0x1cca64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 684));
label_1cca68:
    // 0x1cca68: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1cca68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1cca6c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cca6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cca70: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1cca70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cca74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cca74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cca78: 0x28a40008  slti        $a0, $a1, 0x8
    ctx->pc = 0x1cca78u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1cca7c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CCA7Cu;
    {
        const bool branch_taken_0x1cca7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA7Cu;
        // 0x1cca80: 0xac4001d0  sw          $zero, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cca7c) {
            ctx->pc = 0x1CCA68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cca68;
        }
    }
    ctx->pc = 0x1CCA84u;
    // 0x1cca84: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1cca84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1cca88: 0x24c4000c  addiu       $a0, $a2, 0xC
    ctx->pc = 0x1cca88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x1cca8c: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1cca8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cca90: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cca90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cca94: 0xac6000f4  sw          $zero, 0xF4($v1)
    ctx->pc = 0x1cca94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 0));
    // 0x1cca98: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1cca98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1cca9c: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x1cca9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x1ccaa0: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1ccaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1ccaa4: 0xac6001d0  sw          $zero, 0x1D0($v1)
    ctx->pc = 0x1ccaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 0));
    // 0x1ccaa8: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1ccaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1ccaac: 0xac4001ec  sw          $zero, 0x1EC($v0)
    ctx->pc = 0x1ccaacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 492), GPR_U32(ctx, 0));
    // 0x1ccab0: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1ccab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1ccab4: 0xac6001e8  sw          $zero, 0x1E8($v1)
    ctx->pc = 0x1ccab4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 488), GPR_U32(ctx, 0));
label_1ccab8:
    // 0x1ccab8: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1ccab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x1ccabc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1ccabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1ccac0: 0x0  nop
    ctx->pc = 0x1ccac0u;
    // NOP
    // 0x1ccac4: 0x0  nop
    ctx->pc = 0x1ccac4u;
    // NOP
    // 0x1ccac8: 0x4a1fffb  bgez        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CCAC8u;
    {
        const bool branch_taken_0x1ccac8 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x1CCACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAC8u;
        // 0x1ccacc: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccac8) {
            ctx->pc = 0x1CCAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccab8;
        }
    }
    ctx->pc = 0x1CCAD0u;
    // 0x1ccad0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ccad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ccad4: 0xae000288  sw          $zero, 0x288($s0)
    ctx->pc = 0x1ccad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
    // 0x1ccad8: 0xae0202a8  sw          $v0, 0x2A8($s0)
    ctx->pc = 0x1ccad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 2));
    // 0x1ccadc: 0xae000294  sw          $zero, 0x294($s0)
    ctx->pc = 0x1ccadcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 0));
    // 0x1ccae0: 0xae000290  sw          $zero, 0x290($s0)
    ctx->pc = 0x1ccae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 0));
    // 0x1ccae4: 0xae00028c  sw          $zero, 0x28C($s0)
    ctx->pc = 0x1ccae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
    // 0x1ccae8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ccae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ccaec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ccaecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccaf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAF0u;
        // 0x1ccaf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCAF8u;
}
