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

// Function: sub_0029ACF0
// Address: 0x29acf0 - 0x29ae78
void sub_0029ACF0_0x29acf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029ACF0_0x29acf0");
#endif

    switch (ctx->pc) {
        case 0x29ad84u: goto label_29ad84;
        case 0x29adb4u: goto label_29adb4;
        case 0x29adc8u: goto label_29adc8;
        case 0x29ae20u: goto label_29ae20;
        default: break;
    }

    ctx->pc = 0x29acf0u;

    // 0x29acf0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29acf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29acf4: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x29acf4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x29acf8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29acf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29acfc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x29acfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x29ad00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29ad00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ad04: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x29ad04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29ad08: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x29ad08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ad0c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x29ad0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x29ad10: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x29ad10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ad14: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x29ad14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x29ad18: 0x78e03  sra         $s1, $a3, 24
    ctx->pc = 0x29ad18u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 7), 24));
    // 0x29ad1c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x29ad1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x29ad20: 0x1e400007  bgtz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x29AD20u;
    {
        const bool branch_taken_0x29ad20 = (GPR_S64(ctx, 18) > 0);
        ctx->pc = 0x29AD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD20u;
        // 0x29ad24: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad20) {
            ctx->pc = 0x29AD40u;
            goto label_29ad40;
        }
    }
    ctx->pc = 0x29AD28u;
    // 0x29ad28: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29ad28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29ad2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29ad2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ad30: 0x9083001a  lbu         $v1, 0x1A($a0)
    ctx->pc = 0x29ad30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x29ad34: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x29ad34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x29ad38: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x29AD38u;
    {
        const bool branch_taken_0x29ad38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD38u;
        // 0x29ad3c: 0xa083001a  sb          $v1, 0x1A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad38) {
            ctx->pc = 0x29AE58u;
            goto label_29ae58;
        }
    }
    ctx->pc = 0x29AD40u;
label_29ad40:
    // 0x29ad40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29ad40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29ad44: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x29ad44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x29ad48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29AD48u;
    {
        const bool branch_taken_0x29ad48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD48u;
        // 0x29ad4c: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad48) {
            ctx->pc = 0x29AD5Cu;
            goto label_29ad5c;
        }
    }
    ctx->pc = 0x29AD50u;
    // 0x29ad50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29ad50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ad54: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29AD54u;
    {
        const bool branch_taken_0x29ad54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD54u;
        // 0x29ad58: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad54) {
            ctx->pc = 0x29AD88u;
            goto label_29ad88;
        }
    }
    ctx->pc = 0x29AD5Cu;
label_29ad5c:
    // 0x29ad5c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x29ad5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29ad60: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x29AD60u;
    {
        const bool branch_taken_0x29ad60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD60u;
        // 0x29ad64: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad60) {
            ctx->pc = 0x29AD88u;
            goto label_29ad88;
        }
    }
    ctx->pc = 0x29AD68u;
    // 0x29ad68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x29ad68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29ad6c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x29ad6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29ad70: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x29ad70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x29ad74: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29AD74u;
    {
        const bool branch_taken_0x29ad74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x29AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD74u;
        // 0x29ad78: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad74) {
            ctx->pc = 0x29AD88u;
            goto label_29ad88;
        }
    }
    ctx->pc = 0x29AD7Cu;
    // 0x29ad7c: 0xc0a65a0  jal         func_299680
    ctx->pc = 0x29AD7Cu;
    SET_GPR_U32(ctx, 31, 0x29AD84u);
    ctx->pc = 0x29AD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AD7Cu;
    // 0x29ad80: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x29AD7Cu, 0x29AD84u)) {
        return;
    }
    ctx->pc = 0x29AD84u;
label_29ad84:
    // 0x29ad84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29ad84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29ad88:
    // 0x29ad88: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x29AD88u;
    {
        const bool branch_taken_0x29ad88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD88u;
        // 0x29ad8c: 0x2646ffff  addiu       $a2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad88) {
            ctx->pc = 0x29AE28u;
            goto label_29ae28;
        }
    }
    ctx->pc = 0x29AD90u;
    // 0x29ad90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29ad94: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x29ad94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ad98: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x29ad98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ad9c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x29ad9cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29ada0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x29ada0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29ada4: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x29ada4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ada8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x29ada8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29adac: 0xc0a799c  jal         func_29E670
    ctx->pc = 0x29ADACu;
    SET_GPR_U32(ctx, 31, 0x29ADB4u);
    ctx->pc = 0x29ADB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ADACu;
    // 0x29adb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29E670u, 0x29ADACu, 0x29ADB4u)) {
        return;
    }
    ctx->pc = 0x29ADB4u;
label_29adb4:
    // 0x29adb4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x29adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29adb8: 0x10730006  beq         $v1, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x29ADB8u;
    {
        const bool branch_taken_0x29adb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x29ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ADB8u;
        // 0x29adbc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29adb8) {
            ctx->pc = 0x29ADD4u;
            goto label_29add4;
        }
    }
    ctx->pc = 0x29ADC0u;
    // 0x29adc0: 0xc0a7bbe  jal         func_29EEF8
    ctx->pc = 0x29ADC0u;
    SET_GPR_U32(ctx, 31, 0x29ADC8u);
    ctx->pc = 0x29ADC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ADC0u;
    // 0x29adc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EEF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EEF8u, 0x29ADC0u, 0x29ADC8u)) {
        return;
    }
    ctx->pc = 0x29ADC8u;
label_29adc8:
    // 0x29adc8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29adc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29adcc: 0x1473000c  bne         $v1, $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x29ADCCu;
    {
        const bool branch_taken_0x29adcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x29ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ADCCu;
        // 0x29add0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29adcc) {
            ctx->pc = 0x29AE00u;
            goto label_29ae00;
        }
    }
    ctx->pc = 0x29ADD4u;
label_29add4:
    // 0x29add4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x29add4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29add8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29add8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29addc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x29addcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29ade0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x29ade0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29ade4: 0x90c2001a  lbu         $v0, 0x1A($a2)
    ctx->pc = 0x29ade4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 26)));
    // 0x29ade8: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x29ade8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x29adec: 0x85180a  movz        $v1, $a0, $a1
    ctx->pc = 0x29adecu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
    // 0x29adf0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29adf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29adf4: 0xa0c2001a  sb          $v0, 0x1A($a2)
    ctx->pc = 0x29adf4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26), (uint8_t)GPR_U32(ctx, 2));
    // 0x29adf8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x29ADF8u;
    {
        const bool branch_taken_0x29adf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ADF8u;
        // 0x29adfc: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29adf8) {
            ctx->pc = 0x29AE38u;
            goto label_29ae38;
        }
    }
    ctx->pc = 0x29AE00u;
label_29ae00:
    // 0x29ae00: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x29ae00u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x29ae04: 0x1071000c  beq         $v1, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x29AE04u;
    {
        const bool branch_taken_0x29ae04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x29AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AE04u;
        // 0x29ae08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ae04) {
            ctx->pc = 0x29AE38u;
            goto label_29ae38;
        }
    }
    ctx->pc = 0x29AE0Cu;
    // 0x29ae0c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29ae0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29ae10: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x29ae10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x29ae14: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x29ae14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x29ae18: 0xc0a6e26  jal         func_29B898
    ctx->pc = 0x29AE18u;
    SET_GPR_U32(ctx, 31, 0x29AE20u);
    ctx->pc = 0x29AE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AE18u;
    // 0x29ae1c: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29B898u, 0x29AE18u, 0x29AE20u)) {
        return;
    }
    ctx->pc = 0x29AE20u;
label_29ae20:
    // 0x29ae20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29AE20u;
    {
        const bool branch_taken_0x29ae20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AE20u;
        // 0x29ae24: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ae20) {
            ctx->pc = 0x29AE38u;
            goto label_29ae38;
        }
    }
    ctx->pc = 0x29AE28u;
label_29ae28:
    // 0x29ae28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29ae2c: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x29ae2cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x29ae30: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x29ae30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x29ae34: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29ae34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29ae38:
    // 0x29ae38: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x29ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29ae3c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x29ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x29ae40: 0x14710004  bne         $v1, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29AE40u;
    {
        const bool branch_taken_0x29ae40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x29AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AE40u;
        // 0x29ae44: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ae40) {
            ctx->pc = 0x29AE54u;
            goto label_29ae54;
        }
    }
    ctx->pc = 0x29AE48u;
    // 0x29ae48: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x29ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29ae4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29ae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29ae50: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x29ae50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_29ae54:
    // 0x29ae54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29ae54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29ae58:
    // 0x29ae58: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x29ae58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29ae5c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x29ae5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29ae60: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x29ae60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29ae64: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x29ae64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29ae68: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x29ae68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29ae6c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29ae6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ae70: 0x3e00008  jr          $ra
    ctx->pc = 0x29AE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AE70u;
        // 0x29ae74: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AE78u;
}
