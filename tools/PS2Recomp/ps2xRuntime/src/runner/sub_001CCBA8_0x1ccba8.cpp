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

// Function: sub_001CCBA8
// Address: 0x1ccba8 - 0x1cccd0
void sub_001CCBA8_0x1ccba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCBA8_0x1ccba8");
#endif

    switch (ctx->pc) {
        case 0x1ccbc4u: goto label_1ccbc4;
        case 0x1ccbd8u: goto label_1ccbd8;
        case 0x1ccc10u: goto label_1ccc10;
        case 0x1ccc48u: goto label_1ccc48;
        case 0x1ccc80u: goto label_1ccc80;
        case 0x1cccb8u: goto label_1cccb8;
        default: break;
    }

    ctx->pc = 0x1ccba8u;

    // 0x1ccba8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ccba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ccbac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ccbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ccbb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ccbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ccbb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ccbb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccbb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ccbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ccbbc: 0xc06bcae  jal         func_1AF2B8
    ctx->pc = 0x1CCBBCu;
    SET_GPR_U32(ctx, 31, 0x1CCBC4u);
    ctx->pc = 0x1CCBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCBBCu;
    // 0x1ccbc0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF2B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF2B8u, 0x1CCBBCu, 0x1CCBC4u)) {
        return;
    }
    ctx->pc = 0x1CCBC4u;
label_1ccbc4:
    // 0x1ccbc4: 0x8e040268  lw          $a0, 0x268($s0)
    ctx->pc = 0x1ccbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x1ccbc8: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1CCBC8u;
    {
        const bool branch_taken_0x1ccbc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccbc8) {
            ctx->pc = 0x1CCBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCBC8u;
            // 0x1ccbcc: 0x8e04026c  lw          $a0, 0x26C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCC00u;
            goto label_1ccc00;
        }
    }
    ctx->pc = 0x1CCBD0u;
    // 0x1ccbd0: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1CCBD0u;
    SET_GPR_U32(ctx, 31, 0x1CCBD8u);
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1CCBD0u, 0x1CCBD8u)) {
        return;
    }
    ctx->pc = 0x1CCBD8u;
label_1ccbd8:
    // 0x1ccbd8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ccbd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccbdc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CCBDCu;
    {
        const bool branch_taken_0x1ccbdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBDCu;
        // 0x1ccbe0: 0xae030278  sw          $v1, 0x278($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccbdc) {
            ctx->pc = 0x1CCBFCu;
            goto label_1ccbfc;
        }
    }
    ctx->pc = 0x1CCBE4u;
    // 0x1ccbe4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CCBE4u;
    {
        const bool branch_taken_0x1ccbe4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBE4u;
        // 0x1ccbe8: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccbe4) {
            ctx->pc = 0x1CCBF4u;
            goto label_1ccbf4;
        }
    }
    ctx->pc = 0x1CCBECu;
    // 0x1ccbec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CCBECu;
    {
        const bool branch_taken_0x1ccbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBECu;
        // 0x1ccbf0: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccbec) {
            ctx->pc = 0x1CCBF8u;
            goto label_1ccbf8;
        }
    }
    ctx->pc = 0x1CCBF4u;
label_1ccbf4:
    // 0x1ccbf4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ccbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ccbf8:
    // 0x1ccbf8: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1ccbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_1ccbfc:
    // 0x1ccbfc: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x1ccbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
label_1ccc00:
    // 0x1ccc00: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1CCC00u;
    {
        const bool branch_taken_0x1ccc00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccc00) {
            ctx->pc = 0x1CCC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCC00u;
            // 0x1ccc04: 0x8e040270  lw          $a0, 0x270($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCC38u;
            goto label_1ccc38;
        }
    }
    ctx->pc = 0x1CCC08u;
    // 0x1ccc08: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1CCC08u;
    SET_GPR_U32(ctx, 31, 0x1CCC10u);
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1CCC08u, 0x1CCC10u)) {
        return;
    }
    ctx->pc = 0x1CCC10u;
label_1ccc10:
    // 0x1ccc10: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ccc10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccc14: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CCC14u;
    {
        const bool branch_taken_0x1ccc14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC14u;
        // 0x1ccc18: 0xae03027c  sw          $v1, 0x27C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc14) {
            ctx->pc = 0x1CCC34u;
            goto label_1ccc34;
        }
    }
    ctx->pc = 0x1CCC1Cu;
    // 0x1ccc1c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CCC1Cu;
    {
        const bool branch_taken_0x1ccc1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC1Cu;
        // 0x1ccc20: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc1c) {
            ctx->pc = 0x1CCC2Cu;
            goto label_1ccc2c;
        }
    }
    ctx->pc = 0x1CCC24u;
    // 0x1ccc24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CCC24u;
    {
        const bool branch_taken_0x1ccc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC24u;
        // 0x1ccc28: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc24) {
            ctx->pc = 0x1CCC30u;
            goto label_1ccc30;
        }
    }
    ctx->pc = 0x1CCC2Cu;
label_1ccc2c:
    // 0x1ccc2c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ccc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ccc30:
    // 0x1ccc30: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1ccc30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_1ccc34:
    // 0x1ccc34: 0x8e040270  lw          $a0, 0x270($s0)
    ctx->pc = 0x1ccc34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_1ccc38:
    // 0x1ccc38: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1CCC38u;
    {
        const bool branch_taken_0x1ccc38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccc38) {
            ctx->pc = 0x1CCC3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCC38u;
            // 0x1ccc3c: 0x8e040274  lw          $a0, 0x274($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCC70u;
            goto label_1ccc70;
        }
    }
    ctx->pc = 0x1CCC40u;
    // 0x1ccc40: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1CCC40u;
    SET_GPR_U32(ctx, 31, 0x1CCC48u);
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1CCC40u, 0x1CCC48u)) {
        return;
    }
    ctx->pc = 0x1CCC48u;
label_1ccc48:
    // 0x1ccc48: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ccc48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccc4c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CCC4Cu;
    {
        const bool branch_taken_0x1ccc4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC4Cu;
        // 0x1ccc50: 0xae030280  sw          $v1, 0x280($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc4c) {
            ctx->pc = 0x1CCC6Cu;
            goto label_1ccc6c;
        }
    }
    ctx->pc = 0x1CCC54u;
    // 0x1ccc54: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CCC54u;
    {
        const bool branch_taken_0x1ccc54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC54u;
        // 0x1ccc58: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc54) {
            ctx->pc = 0x1CCC64u;
            goto label_1ccc64;
        }
    }
    ctx->pc = 0x1CCC5Cu;
    // 0x1ccc5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CCC5Cu;
    {
        const bool branch_taken_0x1ccc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC5Cu;
        // 0x1ccc60: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc5c) {
            ctx->pc = 0x1CCC68u;
            goto label_1ccc68;
        }
    }
    ctx->pc = 0x1CCC64u;
label_1ccc64:
    // 0x1ccc64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ccc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ccc68:
    // 0x1ccc68: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1ccc68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_1ccc6c:
    // 0x1ccc6c: 0x8e040274  lw          $a0, 0x274($s0)
    ctx->pc = 0x1ccc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
label_1ccc70:
    // 0x1ccc70: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1CCC70u;
    {
        const bool branch_taken_0x1ccc70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccc70) {
            ctx->pc = 0x1CCC74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCC70u;
            // 0x1ccc74: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCCA8u;
            goto label_1ccca8;
        }
    }
    ctx->pc = 0x1CCC78u;
    // 0x1ccc78: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1CCC78u;
    SET_GPR_U32(ctx, 31, 0x1CCC80u);
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1CCC78u, 0x1CCC80u)) {
        return;
    }
    ctx->pc = 0x1CCC80u;
label_1ccc80:
    // 0x1ccc80: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ccc80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccc84: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CCC84u;
    {
        const bool branch_taken_0x1ccc84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC84u;
        // 0x1ccc88: 0xae030284  sw          $v1, 0x284($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc84) {
            ctx->pc = 0x1CCCA4u;
            goto label_1ccca4;
        }
    }
    ctx->pc = 0x1CCC8Cu;
    // 0x1ccc8c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CCC8Cu;
    {
        const bool branch_taken_0x1ccc8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC8Cu;
        // 0x1ccc90: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc8c) {
            ctx->pc = 0x1CCC9Cu;
            goto label_1ccc9c;
        }
    }
    ctx->pc = 0x1CCC94u;
    // 0x1ccc94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CCC94u;
    {
        const bool branch_taken_0x1ccc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC94u;
        // 0x1ccc98: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc94) {
            ctx->pc = 0x1CCCA0u;
            goto label_1ccca0;
        }
    }
    ctx->pc = 0x1CCC9Cu;
label_1ccc9c:
    // 0x1ccc9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ccc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ccca0:
    // 0x1ccca0: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1ccca0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_1ccca4:
    // 0x1ccca4: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1ccca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1ccca8:
    // 0x1ccca8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CCCA8u;
    {
        const bool branch_taken_0x1ccca8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCCA8u;
        // 0x1cccac: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccca8) {
            ctx->pc = 0x1CCCBCu;
            goto label_1cccbc;
        }
    }
    ctx->pc = 0x1CCCB0u;
    // 0x1cccb0: 0xc06db64  jal         func_1B6D90
    ctx->pc = 0x1CCCB0u;
    SET_GPR_U32(ctx, 31, 0x1CCCB8u);
    ctx->pc = 0x1CCCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCCB0u;
    // 0x1cccb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D90u, 0x1CCCB0u, 0x1CCCB8u)) {
        return;
    }
    ctx->pc = 0x1CCCB8u;
label_1cccb8:
    // 0x1cccb8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1cccb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cccbc:
    // 0x1cccbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cccbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cccc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cccc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cccc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCCC4u;
        // 0x1cccc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCCCCu;
    // 0x1ccccc: 0x0  nop
    ctx->pc = 0x1cccccu;
    // NOP
    ctx->pc = 0x1cccd0u;
}
