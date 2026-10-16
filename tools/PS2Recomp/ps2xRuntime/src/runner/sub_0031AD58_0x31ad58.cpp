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

// Function: sub_0031AD58
// Address: 0x31ad58 - 0x31bda0
void sub_0031AD58_0x31ad58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031AD58_0x31ad58");
#endif

    switch (ctx->pc) {
        case 0x31ad94u: goto label_31ad94;
        case 0x31ad98u: goto label_31ad98;
        case 0x31adc0u: goto label_31adc0;
        case 0x31ae4cu: goto label_31ae4c;
        case 0x31ae74u: goto label_31ae74;
        case 0x31aeb4u: goto label_31aeb4;
        case 0x31af00u: goto label_31af00;
        case 0x31af04u: goto label_31af04;
        case 0x31af10u: goto label_31af10;
        case 0x31afd8u: goto label_31afd8;
        case 0x31b014u: goto label_31b014;
        case 0x31b01cu: goto label_31b01c;
        case 0x31b028u: goto label_31b028;
        case 0x31b150u: goto label_31b150;
        case 0x31b164u: goto label_31b164;
        case 0x31b174u: goto label_31b174;
        case 0x31b180u: goto label_31b180;
        case 0x31b1a0u: goto label_31b1a0;
        case 0x31b1b0u: goto label_31b1b0;
        case 0x31b1bcu: goto label_31b1bc;
        case 0x31b208u: goto label_31b208;
        case 0x31b220u: goto label_31b220;
        case 0x31b338u: goto label_31b338;
        case 0x31b360u: goto label_31b360;
        case 0x31b488u: goto label_31b488;
        case 0x31b4d8u: goto label_31b4d8;
        case 0x31b4e0u: goto label_31b4e0;
        case 0x31b4fcu: goto label_31b4fc;
        case 0x31b530u: goto label_31b530;
        case 0x31b578u: goto label_31b578;
        case 0x31b5a8u: goto label_31b5a8;
        case 0x31b658u: goto label_31b658;
        case 0x31b680u: goto label_31b680;
        case 0x31b6a4u: goto label_31b6a4;
        case 0x31b6d8u: goto label_31b6d8;
        case 0x31b714u: goto label_31b714;
        case 0x31b73cu: goto label_31b73c;
        case 0x31b77cu: goto label_31b77c;
        case 0x31b7b4u: goto label_31b7b4;
        case 0x31b7f0u: goto label_31b7f0;
        case 0x31b830u: goto label_31b830;
        case 0x31b858u: goto label_31b858;
        case 0x31b898u: goto label_31b898;
        case 0x31b8c8u: goto label_31b8c8;
        case 0x31b8f0u: goto label_31b8f0;
        case 0x31b914u: goto label_31b914;
        case 0x31b948u: goto label_31b948;
        case 0x31b984u: goto label_31b984;
        case 0x31b9acu: goto label_31b9ac;
        case 0x31b9ecu: goto label_31b9ec;
        case 0x31ba10u: goto label_31ba10;
        case 0x31ba38u: goto label_31ba38;
        case 0x31ba5cu: goto label_31ba5c;
        case 0x31ba90u: goto label_31ba90;
        case 0x31baccu: goto label_31bacc;
        case 0x31baf4u: goto label_31baf4;
        case 0x31bb34u: goto label_31bb34;
        case 0x31bb64u: goto label_31bb64;
        case 0x31bb94u: goto label_31bb94;
        case 0x31bbd4u: goto label_31bbd4;
        case 0x31bc00u: goto label_31bc00;
        case 0x31bc28u: goto label_31bc28;
        case 0x31bc4cu: goto label_31bc4c;
        case 0x31bc80u: goto label_31bc80;
        case 0x31bcbcu: goto label_31bcbc;
        case 0x31bce4u: goto label_31bce4;
        case 0x31bd24u: goto label_31bd24;
        case 0x31bd68u: goto label_31bd68;
        default: break;
    }

    ctx->pc = 0x31ad58u;

    // 0x31ad58: 0x27bdfc60  addiu       $sp, $sp, -0x3A0
    ctx->pc = 0x31ad58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966368));
    // 0x31ad5c: 0x7fb10380  sq          $s1, 0x380($sp)
    ctx->pc = 0x31ad5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), GPR_VEC(ctx, 17));
    // 0x31ad60: 0x7fb30360  sq          $s3, 0x360($sp)
    ctx->pc = 0x31ad60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 19));
    // 0x31ad64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x31ad64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ad68: 0x7fb00390  sq          $s0, 0x390($sp)
    ctx->pc = 0x31ad68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), GPR_VEC(ctx, 16));
    // 0x31ad6c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x31ad6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ad70: 0x7fb20370  sq          $s2, 0x370($sp)
    ctx->pc = 0x31ad70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 18));
    // 0x31ad74: 0x7fb40350  sq          $s4, 0x350($sp)
    ctx->pc = 0x31ad74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 20));
    // 0x31ad78: 0x7fb50340  sq          $s5, 0x340($sp)
    ctx->pc = 0x31ad78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 21));
    // 0x31ad7c: 0x7fb60330  sq          $s6, 0x330($sp)
    ctx->pc = 0x31ad7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 22));
    // 0x31ad80: 0x7fb70320  sq          $s7, 0x320($sp)
    ctx->pc = 0x31ad80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 23));
    // 0x31ad84: 0x7fbe0310  sq          $fp, 0x310($sp)
    ctx->pc = 0x31ad84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 30));
    // 0x31ad88: 0xffbf0300  sd          $ra, 0x300($sp)
    ctx->pc = 0x31ad88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 768), GPR_U64(ctx, 31));
    // 0x31ad8c: 0xc0c79d0  jal         func_31E740
    ctx->pc = 0x31AD8Cu;
    SET_GPR_U32(ctx, 31, 0x31AD94u);
    ctx->pc = 0x31AD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AD8Cu;
    // 0x31ad90: 0xafa602d8  sw          $a2, 0x2D8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E740u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31E740u, 0x31AD8Cu, 0x31AD94u)) {
        return;
    }
    ctx->pc = 0x31AD94u;
label_31ad94:
    // 0x31ad94: 0xafa002dc  sw          $zero, 0x2DC($sp)
    ctx->pc = 0x31ad94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 0));
label_31ad98:
    // 0x31ad98: 0x8fb402d8  lw          $s4, 0x2D8($sp)
    ctx->pc = 0x31ad98u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x31ad9c: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x31ad9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x31ada0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x31ADA0u;
    {
        const bool branch_taken_0x31ada0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ADA0u;
        // 0x31ada4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ada0) {
            ctx->pc = 0x31ADD8u;
            goto label_31add8;
        }
    }
    ctx->pc = 0x31ADA8u;
    // 0x31ada8: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x31ada8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x31adac: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31ADACu;
    {
        const bool branch_taken_0x31adac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ADACu;
        // 0x31adb0: 0x280182d  daddu       $v1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31adac) {
            ctx->pc = 0x31ADD8u;
            goto label_31add8;
        }
    }
    ctx->pc = 0x31ADB4u;
    // 0x31adb4: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x31adb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x31adb8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x31adb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x31adbc: 0x0  nop
    ctx->pc = 0x31adbcu;
    // NOP
label_31adc0:
    // 0x31adc0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x31adc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31adc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31ADC4u;
    {
        const bool branch_taken_0x31adc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ADC4u;
        // 0x31adc8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31adc4) {
            ctx->pc = 0x31ADD8u;
            goto label_31add8;
        }
    }
    ctx->pc = 0x31ADCCu;
    // 0x31adcc: 0x0  nop
    ctx->pc = 0x31adccu;
    // NOP
    // 0x31add0: 0x1444fffb  bne         $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31ADD0u;
    {
        const bool branch_taken_0x31add0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x31ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ADD0u;
        // 0x31add4: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31add0) {
            ctx->pc = 0x31ADC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31adc0;
        }
    }
    ctx->pc = 0x31ADD8u;
label_31add8:
    // 0x31add8: 0x8fa302d8  lw          $v1, 0x2D8($sp)
    ctx->pc = 0x31add8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x31addc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x31addcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x31ade0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31ade0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31ade4: 0xafa302d8  sw          $v1, 0x2D8($sp)
    ctx->pc = 0x31ade4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 3));
    // 0x31ade8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x31ade8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31adec: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31ADECu;
    {
        const bool branch_taken_0x31adec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ADECu;
        // 0x31adf0: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31adec) {
            ctx->pc = 0x31ADFCu;
            goto label_31adfc;
        }
    }
    ctx->pc = 0x31ADF4u;
    // 0x31adf4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31ADF4u;
    {
        const bool branch_taken_0x31adf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ADF4u;
        // 0x31adf8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31adf4) {
            ctx->pc = 0x31AE0Cu;
            goto label_31ae0c;
        }
    }
    ctx->pc = 0x31ADFCu;
label_31adfc:
    // 0x31adfc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31ADFCu;
    {
        const bool branch_taken_0x31adfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ADFCu;
        // 0x31ae00: 0x8fa402d8  lw          $a0, 0x2D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31adfc) {
            ctx->pc = 0x31AE10u;
            goto label_31ae10;
        }
    }
    ctx->pc = 0x31AE04u;
    // 0x31ae04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ae08: 0x50800a  movz        $s0, $v0, $s0
    ctx->pc = 0x31ae08u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2));
label_31ae0c:
    // 0x31ae0c: 0x8fa402d8  lw          $a0, 0x2D8($sp)
    ctx->pc = 0x31ae0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
label_31ae10:
    // 0x31ae10: 0x941023  subu        $v0, $a0, $s4
    ctx->pc = 0x31ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x31ae14: 0x2a843  sra         $s5, $v0, 1
    ctx->pc = 0x31ae14u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 1));
    // 0x31ae18: 0x12a00029  beqz        $s5, . + 4 + (0x29 << 2)
    ctx->pc = 0x31AE18u;
    {
        const bool branch_taken_0x31ae18 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ae18) {
            ctx->pc = 0x31AEC0u;
            goto label_31aec0;
        }
    }
    ctx->pc = 0x31AE20u;
    // 0x31ae20: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x31ae20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31ae24: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x31ae24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x31ae28: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x31AE28u;
    {
        const bool branch_taken_0x31ae28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE28u;
        // 0x31ae2c: 0x159040  sll         $s2, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ae28) {
            ctx->pc = 0x31AE90u;
            goto label_31ae90;
        }
    }
    ctx->pc = 0x31AE30u;
    // 0x31ae30: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x31ae30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31ae34: 0x246102b  sltu        $v0, $s2, $a2
    ctx->pc = 0x31ae34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x31ae38: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31AE38u;
    {
        const bool branch_taken_0x31ae38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE38u;
        // 0x31ae3c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ae38) {
            ctx->pc = 0x31AE68u;
            goto label_31ae68;
        }
    }
    ctx->pc = 0x31AE40u;
    // 0x31ae40: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31ae40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31ae44: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31AE44u;
    SET_GPR_U32(ctx, 31, 0x31AE4Cu);
    ctx->pc = 0x31AE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AE44u;
    // 0x31ae48: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31AE44u, 0x31AE4Cu)) {
        return;
    }
    ctx->pc = 0x31AE4Cu;
label_31ae4c:
    // 0x31ae4c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31ae4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31ae50: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31ae54: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x31ae54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x31ae58: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x31ae58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x31ae5c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x31ae5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x31ae60: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x31AE60u;
    {
        const bool branch_taken_0x31ae60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE60u;
        // 0x31ae64: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ae60) {
            ctx->pc = 0x31AEB4u;
            goto label_31aeb4;
        }
    }
    ctx->pc = 0x31AE68u;
label_31ae68:
    // 0x31ae68: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31ae68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31ae6c: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31AE6Cu;
    SET_GPR_U32(ctx, 31, 0x31AE74u);
    ctx->pc = 0x31AE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AE6Cu;
    // 0x31ae70: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31AE6Cu, 0x31AE74u)) {
        return;
    }
    ctx->pc = 0x31AE74u;
label_31ae74:
    // 0x31ae74: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x31ae74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31ae78: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31ae7c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x31ae7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31ae80: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x31ae80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x31ae84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31ae84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31ae88: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31AE88u;
    {
        const bool branch_taken_0x31ae88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE88u;
        // 0x31ae8c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ae88) {
            ctx->pc = 0x31AEB4u;
            goto label_31aeb4;
        }
    }
    ctx->pc = 0x31AE90u;
label_31ae90:
    // 0x31ae90: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x31ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31ae94: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31AE94u;
    {
        const bool branch_taken_0x31ae94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ae94) {
            ctx->pc = 0x31AE98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AE94u;
            // 0x31ae98: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AEA8u;
            goto label_31aea8;
        }
    }
    ctx->pc = 0x31AE9Cu;
    // 0x31ae9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31aea0: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x31aea0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x31aea4: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x31aea4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_31aea8:
    // 0x31aea8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x31aea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aeac: 0xc0c6b14  jal         func_31AC50
    ctx->pc = 0x31AEACu;
    SET_GPR_U32(ctx, 31, 0x31AEB4u);
    ctx->pc = 0x31AEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AEACu;
    // 0x31aeb0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31AC50u, 0x31AEACu, 0x31AEB4u)) {
        return;
    }
    ctx->pc = 0x31AEB4u;
label_31aeb4:
    // 0x31aeb4: 0x8fa502dc  lw          $a1, 0x2DC($sp)
    ctx->pc = 0x31aeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
    // 0x31aeb8: 0xb52821  addu        $a1, $a1, $s5
    ctx->pc = 0x31aeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x31aebc: 0xafa502dc  sw          $a1, 0x2DC($sp)
    ctx->pc = 0x31aebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 5));
label_31aec0:
    // 0x31aec0: 0x5a0003a1  blezl       $s0, . + 4 + (0x3A1 << 2)
    ctx->pc = 0x31AEC0u;
    {
        const bool branch_taken_0x31aec0 = (GPR_S64(ctx, 16) <= 0);
        if (branch_taken_0x31aec0) {
            ctx->pc = 0x31AEC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AEC0u;
            // 0x31aec4: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BD48u;
            goto label_31bd48;
        }
    }
    ctx->pc = 0x31AEC8u;
    // 0x31aec8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31aec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31aecc: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31AECCu;
    {
        const bool branch_taken_0x31aecc = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x31AED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AECCu;
        // 0x31aed0: 0x8fa202d8  lw          $v0, 0x2D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aecc) {
            ctx->pc = 0x31AEE4u;
            goto label_31aee4;
        }
    }
    ctx->pc = 0x31AED4u;
    // 0x31aed4: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x31aed4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31aed8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x31aed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x31aedc: 0x144003a2  bnez        $v0, . + 4 + (0x3A2 << 2)
    ctx->pc = 0x31AEDCu;
    {
        const bool branch_taken_0x31aedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31AEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AEDCu;
        // 0x31aee0: 0x8fa202d8  lw          $v0, 0x2D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aedc) {
            ctx->pc = 0x31BD68u;
            goto label_31bd68;
        }
    }
    ctx->pc = 0x31AEE4u;
label_31aee4:
    // 0x31aee4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x31aee4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aee8: 0xa7a002d0  sh          $zero, 0x2D0($sp)
    ctx->pc = 0x31aee8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 720), (uint16_t)GPR_U32(ctx, 0));
    // 0x31aeec: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x31aeecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31aef0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x31aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x31aef4: 0xafa002e4  sw          $zero, 0x2E4($sp)
    ctx->pc = 0x31aef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 0));
    // 0x31aef8: 0xafa202d8  sw          $v0, 0x2D8($sp)
    ctx->pc = 0x31aef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 2));
    // 0x31aefc: 0xafa002e0  sw          $zero, 0x2E0($sp)
    ctx->pc = 0x31aefcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 0));
label_31af00:
    // 0x31af00: 0x8fa302d8  lw          $v1, 0x2D8($sp)
    ctx->pc = 0x31af00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
label_31af04:
    // 0x31af04: 0x94760000  lhu         $s6, 0x0($v1)
    ctx->pc = 0x31af04u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31af08: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x31af08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x31af0c: 0xafa302d8  sw          $v1, 0x2D8($sp)
    ctx->pc = 0x31af0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 3));
label_31af10:
    // 0x31af10: 0x26c3ffe0  addiu       $v1, $s6, -0x20
    ctx->pc = 0x31af10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967264));
    // 0x31af14: 0x2c620059  sltiu       $v0, $v1, 0x59
    ctx->pc = 0x31af14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x31af18: 0x104001a9  beqz        $v0, . + 4 + (0x1A9 << 2)
    ctx->pc = 0x31AF18u;
    {
        const bool branch_taken_0x31af18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF18u;
        // 0x31af1c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31af18) {
            ctx->pc = 0x31B5C0u;
            goto label_31b5c0;
        }
    }
    ctx->pc = 0x31AF20u;
    // 0x31af20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31af20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31af24: 0x24421e80  addiu       $v0, $v0, 0x1E80
    ctx->pc = 0x31af24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7808));
    // 0x31af28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31af28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31af2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x31af2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31af30: 0x800008  jr          $a0
    ctx->pc = 0x31AF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x31AF38u: goto label_31af38;
            case 0x31AF50u: goto label_31af50;
            case 0x31AF58u: goto label_31af58;
            case 0x31AF60u: goto label_31af60;
            case 0x31AF78u: goto label_31af78;
            case 0x31AF80u: goto label_31af80;
            case 0x31AF8Cu: goto label_31af8c;
            case 0x31B014u: goto label_31b014;
            case 0x31B01Cu: goto label_31b01c;
            case 0x31B058u: goto label_31b058;
            case 0x31B060u: goto label_31b060;
            case 0x31B068u: goto label_31b068;
            case 0x31B08Cu: goto label_31b08c;
            case 0x31B094u: goto label_31b094;
            case 0x31B0C0u: goto label_31b0c0;
            case 0x31B0C4u: goto label_31b0c4;
            case 0x31B114u: goto label_31b114;
            case 0x31B240u: goto label_31b240;
            case 0x31B2A8u: goto label_31b2a8;
            case 0x31B2ACu: goto label_31b2ac;
            case 0x31B2ECu: goto label_31b2ec;
            case 0x31B310u: goto label_31b310;
            case 0x31B374u: goto label_31b374;
            case 0x31B378u: goto label_31b378;
            case 0x31B3B8u: goto label_31b3b8;
            case 0x31B3C4u: goto label_31b3c4;
            case 0x31B5C0u: goto label_31b5c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AF30u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x31AF38u;
label_31af38:
    // 0x31af38: 0x97a202d0  lhu         $v0, 0x2D0($sp)
    ctx->pc = 0x31af38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x31af3c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x31AF3Cu;
    {
        const bool branch_taken_0x31af3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF3Cu;
        // 0x31af40: 0x8fa302d8  lw          $v1, 0x2D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31af3c) {
            ctx->pc = 0x31AF04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31af04;
        }
    }
    ctx->pc = 0x31AF44u;
    // 0x31af44: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x31af44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x31af48: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x31AF48u;
    {
        const bool branch_taken_0x31af48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF48u;
        // 0x31af4c: 0xa7a202d0  sh          $v0, 0x2D0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 720), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31af48) {
            ctx->pc = 0x31AF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31af00;
        }
    }
    ctx->pc = 0x31AF50u;
label_31af50:
    // 0x31af50: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x31AF50u;
    {
        const bool branch_taken_0x31af50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF50u;
        // 0x31af54: 0x36b50001  ori         $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31af50) {
            ctx->pc = 0x31AF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31af00;
        }
    }
    ctx->pc = 0x31AF58u;
label_31af58:
    // 0x31af58: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x31AF58u;
    {
        const bool branch_taken_0x31af58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF58u;
        // 0x31af5c: 0x36b50200  ori         $s5, $s5, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31af58) {
            ctx->pc = 0x31AF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31af00;
        }
    }
    ctx->pc = 0x31AF60u;
label_31af60:
    // 0x31af60: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31af60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x31af64: 0x8e64fff8  lw          $a0, -0x8($s3)
    ctx->pc = 0x31af64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x31af68: 0x481ffe5  bgez        $a0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x31AF68u;
    {
        const bool branch_taken_0x31af68 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x31AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF68u;
        // 0x31af6c: 0xafa402e0  sw          $a0, 0x2E0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31af68) {
            ctx->pc = 0x31AF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31af00;
        }
    }
    ctx->pc = 0x31AF70u;
    // 0x31af70: 0x42023  negu        $a0, $a0
    ctx->pc = 0x31af70u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x31af74: 0xafa402e0  sw          $a0, 0x2E0($sp)
    ctx->pc = 0x31af74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 4));
label_31af78:
    // 0x31af78: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x31AF78u;
    {
        const bool branch_taken_0x31af78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF78u;
        // 0x31af7c: 0x36b50004  ori         $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31af78) {
            ctx->pc = 0x31AF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31af00;
        }
    }
    ctx->pc = 0x31AF80u;
label_31af80:
    // 0x31af80: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x31af80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x31af84: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x31AF84u;
    {
        const bool branch_taken_0x31af84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF84u;
        // 0x31af88: 0xa7a202d0  sh          $v0, 0x2D0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 720), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31af84) {
            ctx->pc = 0x31AF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31af00;
        }
    }
    ctx->pc = 0x31AF8Cu;
label_31af8c:
    // 0x31af8c: 0x8fa502d8  lw          $a1, 0x2D8($sp)
    ctx->pc = 0x31af8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x31af90: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x31af90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x31af94: 0x94b60000  lhu         $s6, 0x0($a1)
    ctx->pc = 0x31af94u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31af98: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x31af98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x31af9c: 0x16c20008  bne         $s6, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31AF9Cu;
    {
        const bool branch_taken_0x31af9c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x31AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF9Cu;
        // 0x31afa0: 0xafa502d8  sw          $a1, 0x2D8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31af9c) {
            ctx->pc = 0x31AFC0u;
            goto label_31afc0;
        }
    }
    ctx->pc = 0x31AFA4u;
    // 0x31afa4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31afa4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x31afa8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x31afa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x31afac: 0x8e70fff8  lw          $s0, -0x8($s3)
    ctx->pc = 0x31afacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x31afb0: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x31afb0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31afb4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x31afb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x31afb8: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
    ctx->pc = 0x31AFB8u;
    {
        const bool branch_taken_0x31afb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AFB8u;
        // 0x31afbc: 0x202b80b  movn        $s7, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 23, GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31afb8) {
            ctx->pc = 0x31AF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31af00;
        }
    }
    ctx->pc = 0x31AFC0u;
label_31afc0:
    // 0x31afc0: 0x26c2ffd0  addiu       $v0, $s6, -0x30
    ctx->pc = 0x31afc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967248));
    // 0x31afc4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x31afc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x31afc8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x31AFC8u;
    {
        const bool branch_taken_0x31afc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AFC8u;
        // 0x31afcc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31afc8) {
            ctx->pc = 0x31B000u;
            goto label_31b000;
        }
    }
    ctx->pc = 0x31AFD0u;
    // 0x31afd0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x31afd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x31afd4: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x31afd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_31afd8:
    // 0x31afd8: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x31afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x31afdc: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x31afdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x31afe0: 0x8fa202d8  lw          $v0, 0x2D8($sp)
    ctx->pc = 0x31afe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x31afe4: 0x94560000  lhu         $s6, 0x0($v0)
    ctx->pc = 0x31afe4u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31afe8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x31afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x31afec: 0xafa202d8  sw          $v0, 0x2D8($sp)
    ctx->pc = 0x31afecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 2));
    // 0x31aff0: 0x26c2ffd0  addiu       $v0, $s6, -0x30
    ctx->pc = 0x31aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967248));
    // 0x31aff4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x31aff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x31aff8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x31AFF8u;
    {
        const bool branch_taken_0x31aff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AFF8u;
        // 0x31affc: 0x2031018  mult        $v0, $s0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aff8) {
            ctx->pc = 0x31AFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31afd8;
        }
    }
    ctx->pc = 0x31B000u;
label_31b000:
    // 0x31b000: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x31b000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x31b004: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x31b004u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31b008: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x31b008u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x31b00c: 0x1000ffc0  b           . + 4 + (-0x40 << 2)
    ctx->pc = 0x31B00Cu;
    {
        const bool branch_taken_0x31b00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B00Cu;
        // 0x31b010: 0x202b80b  movn        $s7, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 23, GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b00c) {
            ctx->pc = 0x31AF10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31af10;
        }
    }
    ctx->pc = 0x31B014u;
label_31b014:
    // 0x31b014: 0x1000ffba  b           . + 4 + (-0x46 << 2)
    ctx->pc = 0x31B014u;
    {
        const bool branch_taken_0x31b014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B014u;
        // 0x31b018: 0x36b50080  ori         $s5, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b014) {
            ctx->pc = 0x31AF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31af00;
        }
    }
    ctx->pc = 0x31B01Cu;
label_31b01c:
    // 0x31b01c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31b01cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b020: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x31b020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x31b024: 0x0  nop
    ctx->pc = 0x31b024u;
    // NOP
label_31b028:
    // 0x31b028: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x31b028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x31b02c: 0x8fa402d8  lw          $a0, 0x2D8($sp)
    ctx->pc = 0x31b02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x31b030: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x31b030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x31b034: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x31b034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x31b038: 0x94960000  lhu         $s6, 0x0($a0)
    ctx->pc = 0x31b038u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31b03c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x31b03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x31b040: 0x26c2ffd0  addiu       $v0, $s6, -0x30
    ctx->pc = 0x31b040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967248));
    // 0x31b044: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x31b044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x31b048: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x31B048u;
    {
        const bool branch_taken_0x31b048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B048u;
        // 0x31b04c: 0xafa402d8  sw          $a0, 0x2D8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b048) {
            ctx->pc = 0x31B028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31b028;
        }
    }
    ctx->pc = 0x31B050u;
    // 0x31b050: 0x1000ffaf  b           . + 4 + (-0x51 << 2)
    ctx->pc = 0x31B050u;
    {
        const bool branch_taken_0x31b050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B050u;
        // 0x31b054: 0xafb002e0  sw          $s0, 0x2E0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b050) {
            ctx->pc = 0x31AF10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31af10;
        }
    }
    ctx->pc = 0x31B058u;
label_31b058:
    // 0x31b058: 0x1000ffa9  b           . + 4 + (-0x57 << 2)
    ctx->pc = 0x31B058u;
    {
        const bool branch_taken_0x31b058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B058u;
        // 0x31b05c: 0x36b50008  ori         $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b058) {
            ctx->pc = 0x31AF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31af00;
        }
    }
    ctx->pc = 0x31B060u;
label_31b060:
    // 0x31b060: 0x1000ffa7  b           . + 4 + (-0x59 << 2)
    ctx->pc = 0x31B060u;
    {
        const bool branch_taken_0x31b060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B060u;
        // 0x31b064: 0x36b50040  ori         $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b060) {
            ctx->pc = 0x31AF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31af00;
        }
    }
    ctx->pc = 0x31B068u;
label_31b068:
    // 0x31b068: 0x8fa502d8  lw          $a1, 0x2D8($sp)
    ctx->pc = 0x31b068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x31b06c: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x31b06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x31b070: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x31b070u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31b074: 0x5462ffa2  bnel        $v1, $v0, . + 4 + (-0x5E << 2)
    ctx->pc = 0x31B074u;
    {
        const bool branch_taken_0x31b074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31b074) {
            ctx->pc = 0x31B078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B074u;
            // 0x31b078: 0x36b50010  ori         $s5, $s5, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31af00;
        }
    }
    ctx->pc = 0x31B07Cu;
    // 0x31b07c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x31b07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x31b080: 0x36b50020  ori         $s5, $s5, 0x20
    ctx->pc = 0x31b080u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32);
    // 0x31b084: 0x1000ff9e  b           . + 4 + (-0x62 << 2)
    ctx->pc = 0x31B084u;
    {
        const bool branch_taken_0x31b084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B084u;
        // 0x31b088: 0xafa502d8  sw          $a1, 0x2D8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b084) {
            ctx->pc = 0x31AF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31af00;
        }
    }
    ctx->pc = 0x31B08Cu;
label_31b08c:
    // 0x31b08c: 0x1000ff9c  b           . + 4 + (-0x64 << 2)
    ctx->pc = 0x31B08Cu;
    {
        const bool branch_taken_0x31b08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B08Cu;
        // 0x31b090: 0x36b50020  ori         $s5, $s5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b08c) {
            ctx->pc = 0x31AF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31af00;
        }
    }
    ctx->pc = 0x31B094u;
label_31b094:
    // 0x31b094: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31b094u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x31b098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31b098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b09c: 0x9663fff8  lhu         $v1, -0x8($s3)
    ctx->pc = 0x31b09cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x31b0a0: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x31b0a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b0a4: 0xafa202d4  sw          $v0, 0x2D4($sp)
    ctx->pc = 0x31b0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 2));
    // 0x31b0a8: 0x32be0084  andi        $fp, $s5, 0x84
    ctx->pc = 0x31b0a8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x31b0ac: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x31b0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x31b0b0: 0xa7a30000  sh          $v1, 0x0($sp)
    ctx->pc = 0x31b0b0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x31b0b4: 0xafa202f4  sw          $v0, 0x2F4($sp)
    ctx->pc = 0x31b0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 2));
    // 0x31b0b8: 0x1000014a  b           . + 4 + (0x14A << 2)
    ctx->pc = 0x31B0B8u;
    {
        const bool branch_taken_0x31b0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B0B8u;
        // 0x31b0bc: 0xa7a002d0  sh          $zero, 0x2D0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 720), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b0b8) {
            ctx->pc = 0x31B5E4u;
            goto label_31b5e4;
        }
    }
    ctx->pc = 0x31B0C0u;
label_31b0c0:
    // 0x31b0c0: 0x36b50010  ori         $s5, $s5, 0x10
    ctx->pc = 0x31b0c0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
label_31b0c4:
    // 0x31b0c4: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x31b0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x31b0c8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B0C8u;
    {
        const bool branch_taken_0x31b0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b0c8) {
            ctx->pc = 0x31B0CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B0C8u;
            // 0x31b0cc: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B0E0u;
            goto label_31b0e0;
        }
    }
    ctx->pc = 0x31B0D0u;
    // 0x31b0d0: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x31b0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x31b0d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B0D4u;
    {
        const bool branch_taken_0x31b0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B0D4u;
        // 0x31b0d8: 0x32a20040  andi        $v0, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b0d4) {
            ctx->pc = 0x31B0E8u;
            goto label_31b0e8;
        }
    }
    ctx->pc = 0x31B0DCu;
    // 0x31b0dc: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31b0dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_31b0e0:
    // 0x31b0e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31B0E0u;
    {
        const bool branch_taken_0x31b0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B0E0u;
        // 0x31b0e4: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b0e0) {
            ctx->pc = 0x31B0FCu;
            goto label_31b0fc;
        }
    }
    ctx->pc = 0x31B0E8u;
label_31b0e8:
    // 0x31b0e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31B0E8u;
    {
        const bool branch_taken_0x31b0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B0E8u;
        // 0x31b0ec: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b0e8) {
            ctx->pc = 0x31B0F8u;
            goto label_31b0f8;
        }
    }
    ctx->pc = 0x31B0F0u;
    // 0x31b0f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31B0F0u;
    {
        const bool branch_taken_0x31b0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B0F0u;
        // 0x31b0f4: 0x8670fff8  lh          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b0f0) {
            ctx->pc = 0x31B0FCu;
            goto label_31b0fc;
        }
    }
    ctx->pc = 0x31B0F8u;
label_31b0f8:
    // 0x31b0f8: 0x8e70fff8  lw          $s0, -0x8($s3)
    ctx->pc = 0x31b0f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_31b0fc:
    // 0x31b0fc: 0x60100c8  bgez        $s0, . + 4 + (0xC8 << 2)
    ctx->pc = 0x31B0FCu;
    {
        const bool branch_taken_0x31b0fc = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x31B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B0FCu;
        // 0x31b100: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b0fc) {
            ctx->pc = 0x31B420u;
            goto label_31b420;
        }
    }
    ctx->pc = 0x31B104u;
    // 0x31b104: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x31b104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x31b108: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x31b108u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x31b10c: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x31B10Cu;
    {
        const bool branch_taken_0x31b10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B10Cu;
        // 0x31b110: 0xa7a202d0  sh          $v0, 0x2D0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 720), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b10c) {
            ctx->pc = 0x31B420u;
            goto label_31b420;
        }
    }
    ctx->pc = 0x31B114u;
label_31b114:
    // 0x31b114: 0x171027  nor         $v0, $zero, $s7
    ctx->pc = 0x31b114u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 23)));
    // 0x31b118: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x31b118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x31b11c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31b11cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x31b120: 0x62b80a  movz        $s7, $v1, $v0
    ctx->pc = 0x31b120u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3));
    // 0x31b124: 0xde74fff8  ld          $s4, -0x8($s3)
    ctx->pc = 0x31b124u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x31b128: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x31b128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x31b12c: 0x12c20004  beq         $s6, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B12Cu;
    {
        const bool branch_taken_0x31b12c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x31B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B12Cu;
        // 0x31b130: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b12c) {
            ctx->pc = 0x31B140u;
            goto label_31b140;
        }
    }
    ctx->pc = 0x31B134u;
    // 0x31b134: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x31b134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x31b138: 0x16c2002a  bne         $s6, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x31B138u;
    {
        const bool branch_taken_0x31b138 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x31B13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B138u;
        // 0x31b13c: 0x32a20001  andi        $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b138) {
            ctx->pc = 0x31B1E4u;
            goto label_31b1e4;
        }
    }
    ctx->pc = 0x31B140u;
label_31b140:
    // 0x31b140: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x31b140u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b144: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31b144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b148: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x31B148u;
    SET_GPR_U32(ctx, 31, 0x31B150u);
    ctx->pc = 0x31B14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B148u;
    // 0x31b14c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x31B148u, 0x31B150u)) {
        return;
    }
    ctx->pc = 0x31B150u;
label_31b150:
    // 0x31b150: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x31B150u;
    {
        const bool branch_taken_0x31b150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B150u;
        // 0x31b154: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b150) {
            ctx->pc = 0x31B188u;
            goto label_31b188;
        }
    }
    ctx->pc = 0x31B158u;
    // 0x31b158: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31b158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b15c: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x31B15Cu;
    SET_GPR_U32(ctx, 31, 0x31B164u);
    ctx->pc = 0x31B160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B15Cu;
    // 0x31b160: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x31B15Cu, 0x31B164u)) {
        return;
    }
    ctx->pc = 0x31B164u;
label_31b164:
    // 0x31b164: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B164u;
    {
        const bool branch_taken_0x31b164 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x31B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B164u;
        // 0x31b168: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b164) {
            ctx->pc = 0x31B178u;
            goto label_31b178;
        }
    }
    ctx->pc = 0x31B16Cu;
    // 0x31b16c: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x31B16Cu;
    SET_GPR_U32(ctx, 31, 0x31B174u);
    ctx->pc = 0x31B170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B16Cu;
    // 0x31b170: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x31B16Cu, 0x31B174u)) {
        return;
    }
    ctx->pc = 0x31B174u;
label_31b174:
    // 0x31b174: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31b174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31b178:
    // 0x31b178: 0xc0c7cee  jal         func_31F3B8
    ctx->pc = 0x31B178u;
    SET_GPR_U32(ctx, 31, 0x31B180u);
    ctx->pc = 0x31B17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B178u;
    // 0x31b17c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F3B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31F3B8u, 0x31B178u, 0x31B180u)) {
        return;
    }
    ctx->pc = 0x31B180u;
label_31b180:
    // 0x31b180: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31B180u;
    {
        const bool branch_taken_0x31b180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B180u;
        // 0x31b184: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b180) {
            ctx->pc = 0x31B190u;
            goto label_31b190;
        }
    }
    ctx->pc = 0x31B188u;
label_31b188:
    // 0x31b188: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x31b188u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x31b18c: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x31b18cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
label_31b190:
    // 0x31b190: 0x3405c010  ori         $a1, $zero, 0xC010
    ctx->pc = 0x31b190u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49168);
    // 0x31b194: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x31b194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x31b198: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x31B198u;
    SET_GPR_U32(ctx, 31, 0x31B1A0u);
    ctx->pc = 0x31B19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B198u;
    // 0x31b19c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x31B198u, 0x31B1A0u)) {
        return;
    }
    ctx->pc = 0x31B1A0u;
label_31b1a0:
    // 0x31b1a0: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31B1A0u;
    {
        const bool branch_taken_0x31b1a0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x31B1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B1A0u;
        // 0x31b1a4: 0x3ac40067  xori        $a0, $s6, 0x67 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)103);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b1a0) {
            ctx->pc = 0x31B1C4u;
            goto label_31b1c4;
        }
    }
    ctx->pc = 0x31B1A8u;
    // 0x31b1a8: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x31B1A8u;
    SET_GPR_U32(ctx, 31, 0x31B1B0u);
    ctx->pc = 0x31B1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B1A8u;
    // 0x31b1ac: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x31B1A8u, 0x31B1B0u)) {
        return;
    }
    ctx->pc = 0x31B1B0u;
label_31b1b0:
    // 0x31b1b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b1b4: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x31B1B4u;
    SET_GPR_U32(ctx, 31, 0x31B1BCu);
    ctx->pc = 0x31B1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B1B4u;
    // 0x31b1b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x31B1B4u, 0x31B1BCu)) {
        return;
    }
    ctx->pc = 0x31B1BCu;
label_31b1bc:
    // 0x31b1bc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31B1BCu;
    {
        const bool branch_taken_0x31b1bc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x31B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B1BCu;
        // 0x31b1c0: 0x3ac40067  xori        $a0, $s6, 0x67 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)103);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b1bc) {
            ctx->pc = 0x31B1D8u;
            goto label_31b1d8;
        }
    }
    ctx->pc = 0x31B1C4u;
label_31b1c4:
    // 0x31b1c4: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x31b1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x31b1c8: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x31b1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x31b1cc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x31b1ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b1d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31B1D0u;
    {
        const bool branch_taken_0x31b1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B1D0u;
        // 0x31b1d4: 0x64b00b  movn        $s6, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b1d0) {
            ctx->pc = 0x31B1DCu;
            goto label_31b1dc;
        }
    }
    ctx->pc = 0x31B1D8u;
label_31b1d8:
    // 0x31b1d8: 0x24160066  addiu       $s6, $zero, 0x66
    ctx->pc = 0x31b1d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_31b1dc:
    // 0x31b1dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x31b1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b1e0: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x31b1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_31b1e4:
    // 0x31b1e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31B1E4u;
    {
        const bool branch_taken_0x31b1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B1E4u;
        // 0x31b1e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b1e4) {
            ctx->pc = 0x31B1F4u;
            goto label_31b1f4;
        }
    }
    ctx->pc = 0x31B1ECu;
    // 0x31b1ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31b1ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b1f0: 0x57b80a  movz        $s7, $v0, $s7
    ctx->pc = 0x31b1f0u;
    if (GPR_U64(ctx, 23) == 0) SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2));
label_31b1f4:
    // 0x31b1f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31b1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b1f8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x31b1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b1fc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x31b1fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b200: 0xc0c68fe  jal         func_31A3F8
    ctx->pc = 0x31B200u;
    SET_GPR_U32(ctx, 31, 0x31B208u);
    ctx->pc = 0x31B204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B200u;
    // 0x31b204: 0x27a802d0  addiu       $t0, $sp, 0x2D0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A3F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31A3F8u, 0x31B200u, 0x31B208u)) {
        return;
    }
    ctx->pc = 0x31B208u;
label_31b208:
    // 0x31b208: 0x32be0084  andi        $fp, $s5, 0x84
    ctx->pc = 0x31b208u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x31b20c: 0x32a30004  andi        $v1, $s5, 0x4
    ctx->pc = 0x31b20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x31b210: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x31b210u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b214: 0xafa302f4  sw          $v1, 0x2F4($sp)
    ctx->pc = 0x31b214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 3));
    // 0x31b218: 0xc0c5dc0  jal         func_317700
    ctx->pc = 0x31B218u;
    SET_GPR_U32(ctx, 31, 0x31B220u);
    ctx->pc = 0x31B21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B218u;
    // 0x31b21c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317700u, 0x31B218u, 0x31B220u)) {
        return;
    }
    ctx->pc = 0x31B220u;
label_31b220:
    // 0x31b220: 0x32a30200  andi        $v1, $s5, 0x200
    ctx->pc = 0x31b220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)512);
    // 0x31b224: 0x106000ef  beqz        $v1, . + 4 + (0xEF << 2)
    ctx->pc = 0x31B224u;
    {
        const bool branch_taken_0x31b224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B224u;
        // 0x31b228: 0xafa202d4  sw          $v0, 0x2D4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b224) {
            ctx->pc = 0x31B5E4u;
            goto label_31b5e4;
        }
    }
    ctx->pc = 0x31B22Cu;
    // 0x31b22c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31b22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b230: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x31b230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x31b234: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x31b234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31b238: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x31B238u;
    {
        const bool branch_taken_0x31b238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B238u;
        // 0x31b23c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b238) {
            ctx->pc = 0x31B5A0u;
            goto label_31b5a0;
        }
    }
    ctx->pc = 0x31B240u;
label_31b240:
    // 0x31b240: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x31b240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x31b244: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B244u;
    {
        const bool branch_taken_0x31b244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B244u;
        // 0x31b248: 0x8fa402dc  lw          $a0, 0x2DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b244) {
            ctx->pc = 0x31B25Cu;
            goto label_31b25c;
        }
    }
    ctx->pc = 0x31B24Cu;
    // 0x31b24c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31b24cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x31b250: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x31b250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x31b254: 0x1000fed0  b           . + 4 + (-0x130 << 2)
    ctx->pc = 0x31B254u;
    {
        const bool branch_taken_0x31b254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B254u;
        // 0x31b258: 0xfc440000  sd          $a0, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b254) {
            ctx->pc = 0x31AD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ad98;
        }
    }
    ctx->pc = 0x31B25Cu;
label_31b25c:
    // 0x31b25c: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x31b25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x31b260: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B260u;
    {
        const bool branch_taken_0x31b260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B260u;
        // 0x31b264: 0x8fa502dc  lw          $a1, 0x2DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b260) {
            ctx->pc = 0x31B278u;
            goto label_31b278;
        }
    }
    ctx->pc = 0x31B268u;
    // 0x31b268: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31b268u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x31b26c: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x31b26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x31b270: 0x1000fec9  b           . + 4 + (-0x137 << 2)
    ctx->pc = 0x31B270u;
    {
        const bool branch_taken_0x31b270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B270u;
        // 0x31b274: 0xfc450000  sd          $a1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b270) {
            ctx->pc = 0x31AD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ad98;
        }
    }
    ctx->pc = 0x31B278u;
label_31b278:
    // 0x31b278: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x31b278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
    // 0x31b27c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B27Cu;
    {
        const bool branch_taken_0x31b27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B27Cu;
        // 0x31b280: 0x8fa302dc  lw          $v1, 0x2DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b27c) {
            ctx->pc = 0x31B294u;
            goto label_31b294;
        }
    }
    ctx->pc = 0x31B284u;
    // 0x31b284: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31b284u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x31b288: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x31b288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x31b28c: 0x1000fec2  b           . + 4 + (-0x13E << 2)
    ctx->pc = 0x31B28Cu;
    {
        const bool branch_taken_0x31b28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B28Cu;
        // 0x31b290: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b28c) {
            ctx->pc = 0x31AD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ad98;
        }
    }
    ctx->pc = 0x31B294u;
label_31b294:
    // 0x31b294: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31b294u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x31b298: 0x8fa402dc  lw          $a0, 0x2DC($sp)
    ctx->pc = 0x31b298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
    // 0x31b29c: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x31b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x31b2a0: 0x1000febd  b           . + 4 + (-0x143 << 2)
    ctx->pc = 0x31B2A0u;
    {
        const bool branch_taken_0x31b2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B2A0u;
        // 0x31b2a4: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b2a0) {
            ctx->pc = 0x31AD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ad98;
        }
    }
    ctx->pc = 0x31B2A8u;
label_31b2a8:
    // 0x31b2a8: 0x36b50010  ori         $s5, $s5, 0x10
    ctx->pc = 0x31b2a8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
label_31b2ac:
    // 0x31b2ac: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x31b2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x31b2b0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B2B0u;
    {
        const bool branch_taken_0x31b2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b2b0) {
            ctx->pc = 0x31B2B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B2B0u;
            // 0x31b2b4: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B2C8u;
            goto label_31b2c8;
        }
    }
    ctx->pc = 0x31B2B8u;
    // 0x31b2b8: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x31b2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x31b2bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B2BCu;
    {
        const bool branch_taken_0x31b2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B2BCu;
        // 0x31b2c0: 0x32a20040  andi        $v0, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b2bc) {
            ctx->pc = 0x31B2D0u;
            goto label_31b2d0;
        }
    }
    ctx->pc = 0x31B2C4u;
    // 0x31b2c4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31b2c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_31b2c8:
    // 0x31b2c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31B2C8u;
    {
        const bool branch_taken_0x31b2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B2C8u;
        // 0x31b2cc: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b2c8) {
            ctx->pc = 0x31B2E4u;
            goto label_31b2e4;
        }
    }
    ctx->pc = 0x31B2D0u;
label_31b2d0:
    // 0x31b2d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31B2D0u;
    {
        const bool branch_taken_0x31b2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B2D0u;
        // 0x31b2d4: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b2d0) {
            ctx->pc = 0x31B2E0u;
            goto label_31b2e0;
        }
    }
    ctx->pc = 0x31B2D8u;
    // 0x31b2d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31B2D8u;
    {
        const bool branch_taken_0x31b2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B2D8u;
        // 0x31b2dc: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b2d8) {
            ctx->pc = 0x31B2E4u;
            goto label_31b2e4;
        }
    }
    ctx->pc = 0x31B2E0u;
label_31b2e0:
    // 0x31b2e0: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x31b2e0u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_31b2e4:
    // 0x31b2e4: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x31B2E4u;
    {
        const bool branch_taken_0x31b2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B2E4u;
        // 0x31b2e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b2e4) {
            ctx->pc = 0x31B41Cu;
            goto label_31b41c;
        }
    }
    ctx->pc = 0x31B2ECu;
label_31b2ec:
    // 0x31b2ec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x31b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x31b2f0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31b2f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x31b2f4: 0x24421de0  addiu       $v0, $v0, 0x1DE0
    ctx->pc = 0x31b2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7648));
    // 0x31b2f8: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x31b2f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31b2fc: 0xafa202ec  sw          $v0, 0x2EC($sp)
    ctx->pc = 0x31b2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 748), GPR_U32(ctx, 2));
    // 0x31b300: 0x36b50002  ori         $s5, $s5, 0x2
    ctx->pc = 0x31b300u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
    // 0x31b304: 0x24160078  addiu       $s6, $zero, 0x78
    ctx->pc = 0x31b304u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x31b308: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x31B308u;
    {
        const bool branch_taken_0x31b308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B308u;
        // 0x31b30c: 0x8e70fff8  lw          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b308) {
            ctx->pc = 0x31B41Cu;
            goto label_31b41c;
        }
    }
    ctx->pc = 0x31B310u;
label_31b310:
    // 0x31b310: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31b310u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x31b314: 0x8e74fff8  lw          $s4, -0x8($s3)
    ctx->pc = 0x31b314u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x31b318: 0x16800002  bnez        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x31B318u;
    {
        const bool branch_taken_0x31b318 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B318u;
        // 0x31b31c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b318) {
            ctx->pc = 0x31B324u;
            goto label_31b324;
        }
    }
    ctx->pc = 0x31B320u;
    // 0x31b320: 0x24541e08  addiu       $s4, $v0, 0x1E08
    ctx->pc = 0x31b320u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 7688));
label_31b324:
    // 0x31b324: 0x6e0000c  bltz        $s7, . + 4 + (0xC << 2)
    ctx->pc = 0x31B324u;
    {
        const bool branch_taken_0x31b324 = (GPR_S64(ctx, 23) < 0);
        ctx->pc = 0x31B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B324u;
        // 0x31b328: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b324) {
            ctx->pc = 0x31B358u;
            goto label_31b358;
        }
    }
    ctx->pc = 0x31B32Cu;
    // 0x31b32c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31b32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b330: 0xc0c837c  jal         func_320DF0
    ctx->pc = 0x31B330u;
    SET_GPR_U32(ctx, 31, 0x31B338u);
    ctx->pc = 0x31B334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B330u;
    // 0x31b334: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320DF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320DF0u, 0x31B330u, 0x31B338u)) {
        return;
    }
    ctx->pc = 0x31B338u;
label_31b338:
    // 0x31b338: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B338u;
    {
        const bool branch_taken_0x31b338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B338u;
        // 0x31b33c: 0x541023  subu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b338) {
            ctx->pc = 0x31B350u;
            goto label_31b350;
        }
    }
    ctx->pc = 0x31B340u;
    // 0x31b340: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x31b340u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x31b344: 0x2e2182a  slt         $v1, $s7, $v0
    ctx->pc = 0x31b344u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31b348: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31B348u;
    {
        const bool branch_taken_0x31b348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B348u;
        // 0x31b34c: 0xafa202d4  sw          $v0, 0x2D4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b348) {
            ctx->pc = 0x31B364u;
            goto label_31b364;
        }
    }
    ctx->pc = 0x31B350u;
label_31b350:
    // 0x31b350: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31B350u;
    {
        const bool branch_taken_0x31b350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B350u;
        // 0x31b354: 0xafb702d4  sw          $s7, 0x2D4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b350) {
            ctx->pc = 0x31B364u;
            goto label_31b364;
        }
    }
    ctx->pc = 0x31B358u;
label_31b358:
    // 0x31b358: 0xc0c5dc0  jal         func_317700
    ctx->pc = 0x31B358u;
    SET_GPR_U32(ctx, 31, 0x31B360u);
    ctx->pc = 0x31B35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B358u;
    // 0x31b35c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317700u, 0x31B358u, 0x31B360u)) {
        return;
    }
    ctx->pc = 0x31B360u;
label_31b360:
    // 0x31b360: 0xafa202d4  sw          $v0, 0x2D4($sp)
    ctx->pc = 0x31b360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 2));
label_31b364:
    // 0x31b364: 0x32a50004  andi        $a1, $s5, 0x4
    ctx->pc = 0x31b364u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x31b368: 0xa7a002d0  sh          $zero, 0x2D0($sp)
    ctx->pc = 0x31b368u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 720), (uint16_t)GPR_U32(ctx, 0));
    // 0x31b36c: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x31B36Cu;
    {
        const bool branch_taken_0x31b36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B36Cu;
        // 0x31b370: 0x32be0084  andi        $fp, $s5, 0x84 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b36c) {
            ctx->pc = 0x31B5E0u;
            goto label_31b5e0;
        }
    }
    ctx->pc = 0x31B374u;
label_31b374:
    // 0x31b374: 0x36b50010  ori         $s5, $s5, 0x10
    ctx->pc = 0x31b374u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
label_31b378:
    // 0x31b378: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x31b378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x31b37c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B37Cu;
    {
        const bool branch_taken_0x31b37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b37c) {
            ctx->pc = 0x31B380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B37Cu;
            // 0x31b380: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B394u;
            goto label_31b394;
        }
    }
    ctx->pc = 0x31B384u;
    // 0x31b384: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x31b384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x31b388: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B388u;
    {
        const bool branch_taken_0x31b388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B388u;
        // 0x31b38c: 0x32a20040  andi        $v0, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b388) {
            ctx->pc = 0x31B39Cu;
            goto label_31b39c;
        }
    }
    ctx->pc = 0x31B390u;
    // 0x31b390: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31b390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_31b394:
    // 0x31b394: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31B394u;
    {
        const bool branch_taken_0x31b394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B394u;
        // 0x31b398: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b394) {
            ctx->pc = 0x31B3B0u;
            goto label_31b3b0;
        }
    }
    ctx->pc = 0x31B39Cu;
label_31b39c:
    // 0x31b39c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31B39Cu;
    {
        const bool branch_taken_0x31b39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B39Cu;
        // 0x31b3a0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b39c) {
            ctx->pc = 0x31B3ACu;
            goto label_31b3ac;
        }
    }
    ctx->pc = 0x31B3A4u;
    // 0x31b3a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31B3A4u;
    {
        const bool branch_taken_0x31b3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B3A4u;
        // 0x31b3a8: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b3a4) {
            ctx->pc = 0x31B3B0u;
            goto label_31b3b0;
        }
    }
    ctx->pc = 0x31B3ACu;
label_31b3ac:
    // 0x31b3ac: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x31b3acu;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_31b3b0:
    // 0x31b3b0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x31B3B0u;
    {
        const bool branch_taken_0x31b3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B3B0u;
        // 0x31b3b4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b3b0) {
            ctx->pc = 0x31B41Cu;
            goto label_31b41c;
        }
    }
    ctx->pc = 0x31B3B8u;
label_31b3b8:
    // 0x31b3b8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x31b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x31b3bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31B3BCu;
    {
        const bool branch_taken_0x31b3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B3BCu;
        // 0x31b3c0: 0x24421e18  addiu       $v0, $v0, 0x1E18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b3bc) {
            ctx->pc = 0x31B3CCu;
            goto label_31b3cc;
        }
    }
    ctx->pc = 0x31B3C4u;
label_31b3c4:
    // 0x31b3c4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x31b3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x31b3c8: 0x24421de0  addiu       $v0, $v0, 0x1DE0
    ctx->pc = 0x31b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7648));
label_31b3cc:
    // 0x31b3cc: 0xafa202ec  sw          $v0, 0x2EC($sp)
    ctx->pc = 0x31b3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 748), GPR_U32(ctx, 2));
    // 0x31b3d0: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x31b3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x31b3d4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B3D4u;
    {
        const bool branch_taken_0x31b3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b3d4) {
            ctx->pc = 0x31B3D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B3D4u;
            // 0x31b3d8: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B3ECu;
            goto label_31b3ec;
        }
    }
    ctx->pc = 0x31B3DCu;
    // 0x31b3dc: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x31b3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x31b3e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B3E0u;
    {
        const bool branch_taken_0x31b3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B3E0u;
        // 0x31b3e4: 0x32a20040  andi        $v0, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b3e0) {
            ctx->pc = 0x31B3F4u;
            goto label_31b3f4;
        }
    }
    ctx->pc = 0x31B3E8u;
    // 0x31b3e8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31b3e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_31b3ec:
    // 0x31b3ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31B3ECu;
    {
        const bool branch_taken_0x31b3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B3ECu;
        // 0x31b3f0: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b3ec) {
            ctx->pc = 0x31B408u;
            goto label_31b408;
        }
    }
    ctx->pc = 0x31B3F4u;
label_31b3f4:
    // 0x31b3f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31B3F4u;
    {
        const bool branch_taken_0x31b3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B3F4u;
        // 0x31b3f8: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b3f4) {
            ctx->pc = 0x31B404u;
            goto label_31b404;
        }
    }
    ctx->pc = 0x31B3FCu;
    // 0x31b3fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31B3FCu;
    {
        const bool branch_taken_0x31b3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B3FCu;
        // 0x31b400: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b3fc) {
            ctx->pc = 0x31B408u;
            goto label_31b408;
        }
    }
    ctx->pc = 0x31B404u;
label_31b404:
    // 0x31b404: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x31b404u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_31b408:
    // 0x31b408: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x31b408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x31b40c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31B40Cu;
    {
        const bool branch_taken_0x31b40c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B40Cu;
        // 0x31b410: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b40c) {
            ctx->pc = 0x31B41Cu;
            goto label_31b41c;
        }
    }
    ctx->pc = 0x31B414u;
    // 0x31b414: 0x36a20002  ori         $v0, $s5, 0x2
    ctx->pc = 0x31b414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
    // 0x31b418: 0x50a80b  movn        $s5, $v0, $s0
    ctx->pc = 0x31b418u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2));
label_31b41c:
    // 0x31b41c: 0xa7a002d0  sh          $zero, 0x2D0($sp)
    ctx->pc = 0x31b41cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 720), (uint16_t)GPR_U32(ctx, 0));
label_31b420:
    // 0x31b420: 0x6e00003  bltz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x31B420u;
    {
        const bool branch_taken_0x31b420 = (GPR_S64(ctx, 23) < 0);
        ctx->pc = 0x31B424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B420u;
        // 0x31b424: 0xafb702e4  sw          $s7, 0x2E4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b420) {
            ctx->pc = 0x31B430u;
            goto label_31b430;
        }
    }
    ctx->pc = 0x31B428u;
    // 0x31b428: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x31b428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x31b42c: 0x2a2a824  and         $s5, $s5, $v0
    ctx->pc = 0x31b42cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_31b430:
    // 0x31b430: 0x27b402b8  addiu       $s4, $sp, 0x2B8
    ctx->pc = 0x31b430u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
    // 0x31b434: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31B434u;
    {
        const bool branch_taken_0x31b434 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B434u;
        // 0x31b438: 0x280b82d  daddu       $s7, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b434) {
            ctx->pc = 0x31B450u;
            goto label_31b450;
        }
    }
    ctx->pc = 0x31B43Cu;
    // 0x31b43c: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x31b43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x31b440: 0x8fa302e4  lw          $v1, 0x2E4($sp)
    ctx->pc = 0x31b440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
    // 0x31b444: 0x32be0084  andi        $fp, $s5, 0x84
    ctx->pc = 0x31b444u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x31b448: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x31B448u;
    {
        const bool branch_taken_0x31b448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B448u;
        // 0x31b44c: 0xafa202f4  sw          $v0, 0x2F4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b448) {
            ctx->pc = 0x31B580u;
            goto label_31b580;
        }
    }
    ctx->pc = 0x31B450u;
label_31b450:
    // 0x31b450: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31b450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b454: 0x1242001a  beq         $s2, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x31B454u;
    {
        const bool branch_taken_0x31b454 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x31B458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B454u;
        // 0x31b458: 0x32a50004  andi        $a1, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b454) {
            ctx->pc = 0x31B4C0u;
            goto label_31b4c0;
        }
    }
    ctx->pc = 0x31B45Cu;
    // 0x31b45c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B45Cu;
    {
        const bool branch_taken_0x31b45c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B45Cu;
        // 0x31b460: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b45c) {
            ctx->pc = 0x31B474u;
            goto label_31b474;
        }
    }
    ctx->pc = 0x31B464u;
    // 0x31b464: 0x1242002e  beq         $s2, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x31B464u;
    {
        const bool branch_taken_0x31b464 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x31B468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B464u;
        // 0x31b468: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b464) {
            ctx->pc = 0x31B520u;
            goto label_31b520;
        }
    }
    ctx->pc = 0x31B46Cu;
    // 0x31b46c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x31B46Cu;
    {
        const bool branch_taken_0x31b46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B46Cu;
        // 0x31b470: 0x32a40004  andi        $a0, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b46c) {
            ctx->pc = 0x31B564u;
            goto label_31b564;
        }
    }
    ctx->pc = 0x31B474u;
label_31b474:
    // 0x31b474: 0x32a40004  andi        $a0, $s5, 0x4
    ctx->pc = 0x31b474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x31b478: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x31b478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x31b47c: 0xafa402f4  sw          $a0, 0x2F4($sp)
    ctx->pc = 0x31b47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 4));
    // 0x31b480: 0x32be0084  andi        $fp, $s5, 0x84
    ctx->pc = 0x31b480u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x31b484: 0x0  nop
    ctx->pc = 0x31b484u;
    // NOP
label_31b488:
    // 0x31b488: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x31b488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x31b48c: 0x2694fffe  addiu       $s4, $s4, -0x2
    ctx->pc = 0x31b48cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967294));
    // 0x31b490: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x31b490u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x31b494: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x31b494u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
    // 0x31b498: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x31b498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31b49c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31B49Cu;
    {
        const bool branch_taken_0x31b49c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B49Cu;
        // 0x31b4a0: 0xa6820000  sh          $v0, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b49c) {
            ctx->pc = 0x31B488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31b488;
        }
    }
    ctx->pc = 0x31B4A4u;
    // 0x31b4a4: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x31B4A4u;
    {
        const bool branch_taken_0x31b4a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B4A4u;
        // 0x31b4a8: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b4a4) {
            ctx->pc = 0x31B580u;
            goto label_31b580;
        }
    }
    ctx->pc = 0x31B4ACu;
    // 0x31b4ac: 0x10430035  beq         $v0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x31B4ACu;
    {
        const bool branch_taken_0x31b4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x31B4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B4ACu;
        // 0x31b4b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b4ac) {
            ctx->pc = 0x31B584u;
            goto label_31b584;
        }
    }
    ctx->pc = 0x31B4B4u;
    // 0x31b4b4: 0x2694fffe  addiu       $s4, $s4, -0x2
    ctx->pc = 0x31b4b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967294));
    // 0x31b4b8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x31B4B8u;
    {
        const bool branch_taken_0x31b4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B4B8u;
        // 0x31b4bc: 0xa6830000  sh          $v1, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b4b8) {
            ctx->pc = 0x31B584u;
            goto label_31b584;
        }
    }
    ctx->pc = 0x31B4C0u;
label_31b4c0:
    // 0x31b4c0: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x31b4c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x31b4c4: 0x32be0084  andi        $fp, $s5, 0x84
    ctx->pc = 0x31b4c4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x31b4c8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x31B4C8u;
    {
        const bool branch_taken_0x31b4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B4C8u;
        // 0x31b4cc: 0xafa502f4  sw          $a1, 0x2F4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b4c8) {
            ctx->pc = 0x31B50Cu;
            goto label_31b50c;
        }
    }
    ctx->pc = 0x31B4D0u;
    // 0x31b4d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b4d4: 0x0  nop
    ctx->pc = 0x31b4d4u;
    // NOP
label_31b4d8:
    // 0x31b4d8: 0xc0ca672  jal         func_3299C8
    ctx->pc = 0x31B4D8u;
    SET_GPR_U32(ctx, 31, 0x31B4E0u);
    ctx->pc = 0x31B4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B4D8u;
    // 0x31b4dc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3299C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3299C8u, 0x31B4D8u, 0x31B4E0u)) {
        return;
    }
    ctx->pc = 0x31B4E0u;
label_31b4e0:
    // 0x31b4e0: 0x2694fffe  addiu       $s4, $s4, -0x2
    ctx->pc = 0x31b4e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967294));
    // 0x31b4e4: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x31b4e4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x31b4e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b4ec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x31b4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31b4f0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x31b4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x31b4f4: 0xc07db0a  jal         func_1F6C28
    ctx->pc = 0x31B4F4u;
    SET_GPR_U32(ctx, 31, 0x31B4FCu);
    ctx->pc = 0x31B4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B4F4u;
    // 0x31b4f8: 0xa6820000  sh          $v0, 0x0($s4) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6C28u, 0x31B4F4u, 0x31B4FCu)) {
        return;
    }
    ctx->pc = 0x31B4FCu;
label_31b4fc:
    // 0x31b4fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31b4fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b500: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x31b500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x31b504: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x31B504u;
    {
        const bool branch_taken_0x31b504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B504u;
        // 0x31b508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b504) {
            ctx->pc = 0x31B4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31b4d8;
        }
    }
    ctx->pc = 0x31B50Cu;
label_31b50c:
    // 0x31b50c: 0x66020030  daddiu      $v0, $s0, 0x30
    ctx->pc = 0x31b50cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
    // 0x31b510: 0x2694fffe  addiu       $s4, $s4, -0x2
    ctx->pc = 0x31b510u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967294));
    // 0x31b514: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x31b514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31b518: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x31B518u;
    {
        const bool branch_taken_0x31b518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B518u;
        // 0x31b51c: 0xa6820000  sh          $v0, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b518) {
            ctx->pc = 0x31B580u;
            goto label_31b580;
        }
    }
    ctx->pc = 0x31B520u;
label_31b520:
    // 0x31b520: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x31b520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x31b524: 0x32be0084  andi        $fp, $s5, 0x84
    ctx->pc = 0x31b524u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x31b528: 0xafa202f4  sw          $v0, 0x2F4($sp)
    ctx->pc = 0x31b528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 2));
    // 0x31b52c: 0x0  nop
    ctx->pc = 0x31b52cu;
    // NOP
label_31b530:
    // 0x31b530: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x31b530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x31b534: 0x8fa302ec  lw          $v1, 0x2EC($sp)
    ctx->pc = 0x31b534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 748)));
    // 0x31b538: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31b538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31b53c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x31b53cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x31b540: 0x2694fffe  addiu       $s4, $s4, -0x2
    ctx->pc = 0x31b540u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967294));
    // 0x31b544: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x31b544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x31b548: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x31b548u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
    // 0x31b54c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b550: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x31b550u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31b554: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x31B554u;
    {
        const bool branch_taken_0x31b554 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B554u;
        // 0x31b558: 0xa6830000  sh          $v1, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b554) {
            ctx->pc = 0x31B530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31b530;
        }
    }
    ctx->pc = 0x31B55Cu;
    // 0x31b55c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31B55Cu;
    {
        const bool branch_taken_0x31b55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B55Cu;
        // 0x31b560: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b55c) {
            ctx->pc = 0x31B584u;
            goto label_31b584;
        }
    }
    ctx->pc = 0x31B564u;
label_31b564:
    // 0x31b564: 0x24541e40  addiu       $s4, $v0, 0x1E40
    ctx->pc = 0x31b564u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 7744));
    // 0x31b568: 0xafa402f4  sw          $a0, 0x2F4($sp)
    ctx->pc = 0x31b568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 4));
    // 0x31b56c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31b56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b570: 0xc0c5dc0  jal         func_317700
    ctx->pc = 0x31B570u;
    SET_GPR_U32(ctx, 31, 0x31B578u);
    ctx->pc = 0x31B574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B570u;
    // 0x31b574: 0x32be0084  andi        $fp, $s5, 0x84 (Delay Slot)
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    ctx->in_delay_slot = false;
    ctx->pc = 0x317700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317700u, 0x31B570u, 0x31B578u)) {
        return;
    }
    ctx->pc = 0x31B578u;
label_31b578:
    // 0x31b578: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x31B578u;
    {
        const bool branch_taken_0x31b578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B578u;
        // 0x31b57c: 0xafa202d4  sw          $v0, 0x2D4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b578) {
            ctx->pc = 0x31B5E4u;
            goto label_31b5e4;
        }
    }
    ctx->pc = 0x31B580u;
label_31b580:
    // 0x31b580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31b580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31b584:
    // 0x31b584: 0x1642000a  bne         $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31B584u;
    {
        const bool branch_taken_0x31b584 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x31B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B584u;
        // 0x31b588: 0x2683fd48  addiu       $v1, $s4, -0x2B8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b584) {
            ctx->pc = 0x31B5B0u;
            goto label_31b5b0;
        }
    }
    ctx->pc = 0x31B58Cu;
    // 0x31b58c: 0x32a20200  andi        $v0, $s5, 0x200
    ctx->pc = 0x31b58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)512);
    // 0x31b590: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31B590u;
    {
        const bool branch_taken_0x31b590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B590u;
        // 0x31b594: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b590) {
            ctx->pc = 0x31B5B0u;
            goto label_31b5b0;
        }
    }
    ctx->pc = 0x31B598u;
    // 0x31b598: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x31b598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b59c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31b5a0:
    // 0x31b5a0: 0xc0c6f68  jal         func_31BDA0
    ctx->pc = 0x31B5A0u;
    SET_GPR_U32(ctx, 31, 0x31B5A8u);
    ctx->pc = 0x31B5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B5A0u;
    // 0x31b5a4: 0x27a702d4  addiu       $a3, $sp, 0x2D4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 724));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BDA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31BDA0u, 0x31B5A0u, 0x31B5A8u)) {
        return;
    }
    ctx->pc = 0x31B5A8u;
label_31b5a8:
    // 0x31b5a8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x31B5A8u;
    {
        const bool branch_taken_0x31b5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B5A8u;
        // 0x31b5ac: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b5a8) {
            ctx->pc = 0x31B5E4u;
            goto label_31b5e4;
        }
    }
    ctx->pc = 0x31B5B0u;
label_31b5b0:
    // 0x31b5b0: 0x3a31023  subu        $v0, $sp, $v1
    ctx->pc = 0x31b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x31b5b4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x31b5b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x31b5b8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31B5B8u;
    {
        const bool branch_taken_0x31b5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B5B8u;
        // 0x31b5bc: 0xafa202d4  sw          $v0, 0x2D4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b5b8) {
            ctx->pc = 0x31B5E4u;
            goto label_31b5e4;
        }
    }
    ctx->pc = 0x31B5C0u;
label_31b5c0:
    // 0x31b5c0: 0x12c001e0  beqz        $s6, . + 4 + (0x1E0 << 2)
    ctx->pc = 0x31B5C0u;
    {
        const bool branch_taken_0x31b5c0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B5C0u;
        // 0x31b5c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b5c0) {
            ctx->pc = 0x31BD44u;
            goto label_31bd44;
        }
    }
    ctx->pc = 0x31B5C8u;
    // 0x31b5c8: 0x32a50004  andi        $a1, $s5, 0x4
    ctx->pc = 0x31b5c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x31b5cc: 0xa7b60000  sh          $s6, 0x0($sp)
    ctx->pc = 0x31b5ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 22));
    // 0x31b5d0: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x31b5d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b5d4: 0xafa202d4  sw          $v0, 0x2D4($sp)
    ctx->pc = 0x31b5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 2));
    // 0x31b5d8: 0x32be0084  andi        $fp, $s5, 0x84
    ctx->pc = 0x31b5d8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x31b5dc: 0xa7a002d0  sh          $zero, 0x2D0($sp)
    ctx->pc = 0x31b5dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 720), (uint16_t)GPR_U32(ctx, 0));
label_31b5e0:
    // 0x31b5e0: 0xafa502f4  sw          $a1, 0x2F4($sp)
    ctx->pc = 0x31b5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 5));
label_31b5e4:
    // 0x31b5e4: 0x8fa202d4  lw          $v0, 0x2D4($sp)
    ctx->pc = 0x31b5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
    // 0x31b5e8: 0x8fa402e4  lw          $a0, 0x2E4($sp)
    ctx->pc = 0x31b5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
    // 0x31b5ec: 0xafa202e8  sw          $v0, 0x2E8($sp)
    ctx->pc = 0x31b5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 2));
    // 0x31b5f0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x31b5f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x31b5f4: 0x97a302d0  lhu         $v1, 0x2D0($sp)
    ctx->pc = 0x31b5f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x31b5f8: 0x8fa502e8  lw          $a1, 0x2E8($sp)
    ctx->pc = 0x31b5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x31b5fc: 0xa2200a  movz        $a0, $a1, $v0
    ctx->pc = 0x31b5fcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5));
    // 0x31b600: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B600u;
    {
        const bool branch_taken_0x31b600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B600u;
        // 0x31b604: 0xafa402e8  sw          $a0, 0x2E8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b600) {
            ctx->pc = 0x31B614u;
            goto label_31b614;
        }
    }
    ctx->pc = 0x31B608u;
    // 0x31b608: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x31b608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x31b60c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31B60Cu;
    {
        const bool branch_taken_0x31b60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B60Cu;
        // 0x31b610: 0xafa402e8  sw          $a0, 0x2E8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b60c) {
            ctx->pc = 0x31B624u;
            goto label_31b624;
        }
    }
    ctx->pc = 0x31B614u;
label_31b614:
    // 0x31b614: 0x8fa302e8  lw          $v1, 0x2E8($sp)
    ctx->pc = 0x31b614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x31b618: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x31b618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
    // 0x31b61c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x31b61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b620: 0xafa302e8  sw          $v1, 0x2E8($sp)
    ctx->pc = 0x31b620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 3));
label_31b624:
    // 0x31b624: 0x8fa402e8  lw          $a0, 0x2E8($sp)
    ctx->pc = 0x31b624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x31b628: 0x8fa502e0  lw          $a1, 0x2E0($sp)
    ctx->pc = 0x31b628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x31b62c: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x31b62cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x31b630: 0x17c00052  bnez        $fp, . + 4 + (0x52 << 2)
    ctx->pc = 0x31B630u;
    {
        const bool branch_taken_0x31b630 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B630u;
        // 0x31b634: 0xafa402f0  sw          $a0, 0x2F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b630) {
            ctx->pc = 0x31B77Cu;
            goto label_31b77c;
        }
    }
    ctx->pc = 0x31B638u;
    // 0x31b638: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x31b638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x31b63c: 0xa28023  subu        $s0, $a1, $v0
    ctx->pc = 0x31b63cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x31b640: 0x1a00004e  blez        $s0, . + 4 + (0x4E << 2)
    ctx->pc = 0x31B640u;
    {
        const bool branch_taken_0x31b640 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x31B644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B640u;
        // 0x31b644: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b640) {
            ctx->pc = 0x31B77Cu;
            goto label_31b77c;
        }
    }
    ctx->pc = 0x31B648u;
    // 0x31b648: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x31B648u;
    {
        const bool branch_taken_0x31b648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B648u;
        // 0x31b64c: 0x3c17006b  lui         $s7, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b648) {
            ctx->pc = 0x31B6E8u;
            goto label_31b6e8;
        }
    }
    ctx->pc = 0x31B650u;
    // 0x31b650: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x31b650u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b654: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x31b654u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_31b658:
    // 0x31b658: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x31b658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x31b65c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x31B65Cu;
    {
        const bool branch_taken_0x31b65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b65c) {
            ctx->pc = 0x31B660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B65Cu;
            // 0x31b660: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B6C0u;
            goto label_31b6c0;
        }
    }
    ctx->pc = 0x31B664u;
    // 0x31b664: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x31b664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31b668: 0x2cc20021  sltiu       $v0, $a2, 0x21
    ctx->pc = 0x31b668u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x31b66c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31B66Cu;
    {
        const bool branch_taken_0x31b66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B66Cu;
        // 0x31b670: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b66c) {
            ctx->pc = 0x31B69Cu;
            goto label_31b69c;
        }
    }
    ctx->pc = 0x31B674u;
    // 0x31b674: 0x26e51da0  addiu       $a1, $s7, 0x1DA0
    ctx->pc = 0x31b674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 7584));
    // 0x31b678: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31B678u;
    SET_GPR_U32(ctx, 31, 0x31B680u);
    ctx->pc = 0x31B67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B678u;
    // 0x31b67c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31B678u, 0x31B680u)) {
        return;
    }
    ctx->pc = 0x31B680u;
label_31b680:
    // 0x31b680: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31b680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31b684: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31b684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31b688: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31b688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x31b68c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x31b68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x31b690: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x31b690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x31b694: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x31B694u;
    {
        const bool branch_taken_0x31b694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B694u;
        // 0x31b698: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b694) {
            ctx->pc = 0x31B6D8u;
            goto label_31b6d8;
        }
    }
    ctx->pc = 0x31B69Cu;
label_31b69c:
    // 0x31b69c: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31B69Cu;
    SET_GPR_U32(ctx, 31, 0x31B6A4u);
    ctx->pc = 0x31B6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B69Cu;
    // 0x31b6a0: 0x26e51da0  addiu       $a1, $s7, 0x1DA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 7584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31B69Cu, 0x31B6A4u)) {
        return;
    }
    ctx->pc = 0x31B6A4u;
label_31b6a4:
    // 0x31b6a4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x31b6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31b6a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31b6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31b6ac: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x31b6acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31b6b0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x31b6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x31b6b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b6b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31B6B8u;
    {
        const bool branch_taken_0x31b6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B6B8u;
        // 0x31b6bc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b6b8) {
            ctx->pc = 0x31B6D8u;
            goto label_31b6d8;
        }
    }
    ctx->pc = 0x31B6C0u;
label_31b6c0:
    // 0x31b6c0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x31B6C0u;
    {
        const bool branch_taken_0x31b6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b6c0) {
            ctx->pc = 0x31B6C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B6C0u;
            // 0x31b6c4: 0xa632000e  sh          $s2, 0xE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B6C8u;
            goto label_31b6c8;
        }
    }
    ctx->pc = 0x31B6C8u;
label_31b6c8:
    // 0x31b6c8: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x31b6c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x31b6cc: 0x26e51da0  addiu       $a1, $s7, 0x1DA0
    ctx->pc = 0x31b6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 7584));
    // 0x31b6d0: 0xc0c6b14  jal         func_31AC50
    ctx->pc = 0x31B6D0u;
    SET_GPR_U32(ctx, 31, 0x31B6D8u);
    ctx->pc = 0x31B6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B6D0u;
    // 0x31b6d4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31AC50u, 0x31B6D0u, 0x31B6D8u)) {
        return;
    }
    ctx->pc = 0x31B6D8u;
label_31b6d8:
    // 0x31b6d8: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x31b6d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x31b6dc: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x31b6dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x31b6e0: 0x5040ffdd  beql        $v0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x31B6E0u;
    {
        const bool branch_taken_0x31b6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b6e0) {
            ctx->pc = 0x31B6E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B6E0u;
            // 0x31b6e4: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31b658;
        }
    }
    ctx->pc = 0x31B6E8u;
label_31b6e8:
    // 0x31b6e8: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x31b6e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31b6ec: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x31b6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x31b6f0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x31B6F0u;
    {
        const bool branch_taken_0x31b6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B6F0u;
        // 0x31b6f4: 0x109040  sll         $s2, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b6f0) {
            ctx->pc = 0x31B758u;
            goto label_31b758;
        }
    }
    ctx->pc = 0x31B6F8u;
    // 0x31b6f8: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x31b6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31b6fc: 0x246102b  sltu        $v0, $s2, $a2
    ctx->pc = 0x31b6fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x31b700: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31B700u;
    {
        const bool branch_taken_0x31b700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B700u;
        // 0x31b704: 0x26e51da0  addiu       $a1, $s7, 0x1DA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 7584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b700) {
            ctx->pc = 0x31B730u;
            goto label_31b730;
        }
    }
    ctx->pc = 0x31B708u;
    // 0x31b708: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31b708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31b70c: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31B70Cu;
    SET_GPR_U32(ctx, 31, 0x31B714u);
    ctx->pc = 0x31B710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B70Cu;
    // 0x31b710: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31B70Cu, 0x31B714u)) {
        return;
    }
    ctx->pc = 0x31B714u;
label_31b714:
    // 0x31b714: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31b714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31b718: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31b718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31b71c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x31b71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x31b720: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x31b720u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31b724: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x31b724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x31b728: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x31B728u;
    {
        const bool branch_taken_0x31b728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B728u;
        // 0x31b72c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b728) {
            ctx->pc = 0x31B77Cu;
            goto label_31b77c;
        }
    }
    ctx->pc = 0x31B730u;
label_31b730:
    // 0x31b730: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31b730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31b734: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31B734u;
    SET_GPR_U32(ctx, 31, 0x31B73Cu);
    ctx->pc = 0x31B738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B734u;
    // 0x31b738: 0x26e51da0  addiu       $a1, $s7, 0x1DA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 7584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31B734u, 0x31B73Cu)) {
        return;
    }
    ctx->pc = 0x31B73Cu;
label_31b73c:
    // 0x31b73c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x31b73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31b740: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31b740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31b744: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x31b744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31b748: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x31b748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x31b74c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b750: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31B750u;
    {
        const bool branch_taken_0x31b750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B750u;
        // 0x31b754: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b750) {
            ctx->pc = 0x31B77Cu;
            goto label_31b77c;
        }
    }
    ctx->pc = 0x31B758u;
label_31b758:
    // 0x31b758: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x31b758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31b75c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B75Cu;
    {
        const bool branch_taken_0x31b75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b75c) {
            ctx->pc = 0x31B760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B75Cu;
            // 0x31b760: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B770u;
            goto label_31b770;
        }
    }
    ctx->pc = 0x31B764u;
    // 0x31b764: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31b764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b768: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x31b768u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x31b76c: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x31b76cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_31b770:
    // 0x31b770: 0x26e51da0  addiu       $a1, $s7, 0x1DA0
    ctx->pc = 0x31b770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 7584));
    // 0x31b774: 0xc0c6b14  jal         func_31AC50
    ctx->pc = 0x31B774u;
    SET_GPR_U32(ctx, 31, 0x31B77Cu);
    ctx->pc = 0x31B778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B774u;
    // 0x31b778: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31AC50u, 0x31B774u, 0x31B77Cu)) {
        return;
    }
    ctx->pc = 0x31B77Cu;
label_31b77c:
    // 0x31b77c: 0x97a202d0  lhu         $v0, 0x2D0($sp)
    ctx->pc = 0x31b77cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x31b780: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x31B780u;
    {
        const bool branch_taken_0x31b780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B780u;
        // 0x31b784: 0x32a20002  andi        $v0, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b780) {
            ctx->pc = 0x31B7F8u;
            goto label_31b7f8;
        }
    }
    ctx->pc = 0x31B788u;
    // 0x31b788: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x31b788u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31b78c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x31b78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x31b790: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x31B790u;
    {
        const bool branch_taken_0x31b790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b790) {
            ctx->pc = 0x31B794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B790u;
            // 0x31b794: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B7D0u;
            goto label_31b7d0;
        }
    }
    ctx->pc = 0x31B798u;
    // 0x31b798: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x31b798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31b79c: 0x2cc20003  sltiu       $v0, $a2, 0x3
    ctx->pc = 0x31b79cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x31b7a0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31B7A0u;
    {
        const bool branch_taken_0x31b7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B7A0u;
        // 0x31b7a4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b7a0) {
            ctx->pc = 0x31B7C8u;
            goto label_31b7c8;
        }
    }
    ctx->pc = 0x31B7A8u;
    // 0x31b7a8: 0x27a502d0  addiu       $a1, $sp, 0x2D0
    ctx->pc = 0x31b7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x31b7ac: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31B7ACu;
    SET_GPR_U32(ctx, 31, 0x31B7B4u);
    ctx->pc = 0x31B7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B7ACu;
    // 0x31b7b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31B7ACu, 0x31B7B4u)) {
        return;
    }
    ctx->pc = 0x31B7B4u;
label_31b7b4:
    // 0x31b7b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31b7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31b7b8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31b7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31b7bc: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x31b7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x31b7c0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x31B7C0u;
    {
        const bool branch_taken_0x31b7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B7C0u;
        // 0x31b7c4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b7c0) {
            ctx->pc = 0x31B840u;
            goto label_31b840;
        }
    }
    ctx->pc = 0x31B7C8u;
label_31b7c8:
    // 0x31b7c8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x31B7C8u;
    {
        const bool branch_taken_0x31b7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B7C8u;
        // 0x31b7cc: 0x27a502d0  addiu       $a1, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b7c8) {
            ctx->pc = 0x31B850u;
            goto label_31b850;
        }
    }
    ctx->pc = 0x31B7D0u;
label_31b7d0:
    // 0x31b7d0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B7D0u;
    {
        const bool branch_taken_0x31b7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b7d0) {
            ctx->pc = 0x31B7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B7D0u;
            // 0x31b7d4: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B7E4u;
            goto label_31b7e4;
        }
    }
    ctx->pc = 0x31B7D8u;
    // 0x31b7d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31b7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b7dc: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x31b7dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x31b7e0: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x31b7e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_31b7e4:
    // 0x31b7e4: 0x27a502d0  addiu       $a1, $sp, 0x2D0
    ctx->pc = 0x31b7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x31b7e8: 0xc0c6b14  jal         func_31AC50
    ctx->pc = 0x31B7E8u;
    SET_GPR_U32(ctx, 31, 0x31B7F0u);
    ctx->pc = 0x31B7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B7E8u;
    // 0x31b7ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31AC50u, 0x31B7E8u, 0x31B7F0u)) {
        return;
    }
    ctx->pc = 0x31B7F0u;
label_31b7f0:
    // 0x31b7f0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x31B7F0u;
    {
        const bool branch_taken_0x31b7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B7F0u;
        // 0x31b7f4: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b7f0) {
            ctx->pc = 0x31B89Cu;
            goto label_31b89c;
        }
    }
    ctx->pc = 0x31B7F8u;
label_31b7f8:
    // 0x31b7f8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x31B7F8u;
    {
        const bool branch_taken_0x31b7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B7F8u;
        // 0x31b7fc: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b7f8) {
            ctx->pc = 0x31B898u;
            goto label_31b898;
        }
    }
    ctx->pc = 0x31B800u;
    // 0x31b800: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x31b800u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31b804: 0xa7a202c0  sh          $v0, 0x2C0($sp)
    ctx->pc = 0x31b804u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 704), (uint16_t)GPR_U32(ctx, 2));
    // 0x31b808: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x31b808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x31b80c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x31B80Cu;
    {
        const bool branch_taken_0x31b80c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B80Cu;
        // 0x31b810: 0xa7b602c2  sh          $s6, 0x2C2($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 706), (uint16_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b80c) {
            ctx->pc = 0x31B874u;
            goto label_31b874;
        }
    }
    ctx->pc = 0x31B814u;
    // 0x31b814: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x31b814u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31b818: 0x2cc20005  sltiu       $v0, $a2, 0x5
    ctx->pc = 0x31b818u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x31b81c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31B81Cu;
    {
        const bool branch_taken_0x31b81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B81Cu;
        // 0x31b820: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b81c) {
            ctx->pc = 0x31B84Cu;
            goto label_31b84c;
        }
    }
    ctx->pc = 0x31B824u;
    // 0x31b824: 0x27a502c0  addiu       $a1, $sp, 0x2C0
    ctx->pc = 0x31b824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x31b828: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31B828u;
    SET_GPR_U32(ctx, 31, 0x31B830u);
    ctx->pc = 0x31B82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B828u;
    // 0x31b82c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31B828u, 0x31B830u)) {
        return;
    }
    ctx->pc = 0x31B830u;
label_31b830:
    // 0x31b830: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31b830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31b834: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31b834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31b838: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x31b838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x31b83c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x31b83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_31b840:
    // 0x31b840: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x31b840u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x31b844: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x31B844u;
    {
        const bool branch_taken_0x31b844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B844u;
        // 0x31b848: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b844) {
            ctx->pc = 0x31B898u;
            goto label_31b898;
        }
    }
    ctx->pc = 0x31B84Cu;
label_31b84c:
    // 0x31b84c: 0x27a502c0  addiu       $a1, $sp, 0x2C0
    ctx->pc = 0x31b84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_31b850:
    // 0x31b850: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31B850u;
    SET_GPR_U32(ctx, 31, 0x31B858u);
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31B850u, 0x31B858u)) {
        return;
    }
    ctx->pc = 0x31B858u;
label_31b858:
    // 0x31b858: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x31b858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31b85c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31b860: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x31b860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31b864: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x31b864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x31b868: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b86c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31B86Cu;
    {
        const bool branch_taken_0x31b86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B86Cu;
        // 0x31b870: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b86c) {
            ctx->pc = 0x31B898u;
            goto label_31b898;
        }
    }
    ctx->pc = 0x31B874u;
label_31b874:
    // 0x31b874: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x31b874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31b878: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B878u;
    {
        const bool branch_taken_0x31b878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b878) {
            ctx->pc = 0x31B87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B878u;
            // 0x31b87c: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B88Cu;
            goto label_31b88c;
        }
    }
    ctx->pc = 0x31B880u;
    // 0x31b880: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31b880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b884: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x31b884u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x31b888: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x31b888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_31b88c:
    // 0x31b88c: 0x27a502c0  addiu       $a1, $sp, 0x2C0
    ctx->pc = 0x31b88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x31b890: 0xc0c6b14  jal         func_31AC50
    ctx->pc = 0x31B890u;
    SET_GPR_U32(ctx, 31, 0x31B898u);
    ctx->pc = 0x31B894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B890u;
    // 0x31b894: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31AC50u, 0x31B890u, 0x31B898u)) {
        return;
    }
    ctx->pc = 0x31B898u;
label_31b898:
    // 0x31b898: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x31b898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_31b89c:
    // 0x31b89c: 0x17c20054  bne         $fp, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x31B89Cu;
    {
        const bool branch_taken_0x31b89c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x31B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B89Cu;
        // 0x31b8a0: 0x8fa202d4  lw          $v0, 0x2D4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b89c) {
            ctx->pc = 0x31B9F0u;
            goto label_31b9f0;
        }
    }
    ctx->pc = 0x31B8A4u;
    // 0x31b8a4: 0x8fa302e0  lw          $v1, 0x2E0($sp)
    ctx->pc = 0x31b8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x31b8a8: 0x8fa402e8  lw          $a0, 0x2E8($sp)
    ctx->pc = 0x31b8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x31b8ac: 0x648023  subu        $s0, $v1, $a0
    ctx->pc = 0x31b8acu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b8b0: 0x1a00004e  blez        $s0, . + 4 + (0x4E << 2)
    ctx->pc = 0x31B8B0u;
    {
        const bool branch_taken_0x31b8b0 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x31B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B8B0u;
        // 0x31b8b4: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b8b0) {
            ctx->pc = 0x31B9ECu;
            goto label_31b9ec;
        }
    }
    ctx->pc = 0x31B8B8u;
    // 0x31b8b8: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x31B8B8u;
    {
        const bool branch_taken_0x31b8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B8B8u;
        // 0x31b8bc: 0x3c15006b  lui         $s5, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b8b8) {
            ctx->pc = 0x31B958u;
            goto label_31b958;
        }
    }
    ctx->pc = 0x31B8C0u;
    // 0x31b8c0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x31b8c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b8c4: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x31b8c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_31b8c8:
    // 0x31b8c8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x31b8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x31b8cc: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x31B8CCu;
    {
        const bool branch_taken_0x31b8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b8cc) {
            ctx->pc = 0x31B8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B8CCu;
            // 0x31b8d0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B930u;
            goto label_31b930;
        }
    }
    ctx->pc = 0x31B8D4u;
    // 0x31b8d4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x31b8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31b8d8: 0x2cc20021  sltiu       $v0, $a2, 0x21
    ctx->pc = 0x31b8d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x31b8dc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31B8DCu;
    {
        const bool branch_taken_0x31b8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B8DCu;
        // 0x31b8e0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b8dc) {
            ctx->pc = 0x31B90Cu;
            goto label_31b90c;
        }
    }
    ctx->pc = 0x31B8E4u;
    // 0x31b8e4: 0x26a51dc0  addiu       $a1, $s5, 0x1DC0
    ctx->pc = 0x31b8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 7616));
    // 0x31b8e8: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31B8E8u;
    SET_GPR_U32(ctx, 31, 0x31B8F0u);
    ctx->pc = 0x31B8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B8E8u;
    // 0x31b8ec: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31B8E8u, 0x31B8F0u)) {
        return;
    }
    ctx->pc = 0x31B8F0u;
label_31b8f0:
    // 0x31b8f0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31b8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31b8f4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31b8f8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31b8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x31b8fc: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x31b8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x31b900: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x31b900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x31b904: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x31B904u;
    {
        const bool branch_taken_0x31b904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B904u;
        // 0x31b908: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b904) {
            ctx->pc = 0x31B948u;
            goto label_31b948;
        }
    }
    ctx->pc = 0x31B90Cu;
label_31b90c:
    // 0x31b90c: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31B90Cu;
    SET_GPR_U32(ctx, 31, 0x31B914u);
    ctx->pc = 0x31B910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B90Cu;
    // 0x31b910: 0x26a51dc0  addiu       $a1, $s5, 0x1DC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 7616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31B90Cu, 0x31B914u)) {
        return;
    }
    ctx->pc = 0x31B914u;
label_31b914:
    // 0x31b914: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x31b914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31b918: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31b918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31b91c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x31b91cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31b920: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x31b920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x31b924: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b928: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31B928u;
    {
        const bool branch_taken_0x31b928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B928u;
        // 0x31b92c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b928) {
            ctx->pc = 0x31B948u;
            goto label_31b948;
        }
    }
    ctx->pc = 0x31B930u;
label_31b930:
    // 0x31b930: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x31B930u;
    {
        const bool branch_taken_0x31b930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b930) {
            ctx->pc = 0x31B934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B930u;
            // 0x31b934: 0xa632000e  sh          $s2, 0xE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B938u;
            goto label_31b938;
        }
    }
    ctx->pc = 0x31B938u;
label_31b938:
    // 0x31b938: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x31b938u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x31b93c: 0x26a51dc0  addiu       $a1, $s5, 0x1DC0
    ctx->pc = 0x31b93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 7616));
    // 0x31b940: 0xc0c6b14  jal         func_31AC50
    ctx->pc = 0x31B940u;
    SET_GPR_U32(ctx, 31, 0x31B948u);
    ctx->pc = 0x31B944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B940u;
    // 0x31b944: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31AC50u, 0x31B940u, 0x31B948u)) {
        return;
    }
    ctx->pc = 0x31B948u;
label_31b948:
    // 0x31b948: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x31b948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x31b94c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x31b94cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x31b950: 0x5040ffdd  beql        $v0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x31B950u;
    {
        const bool branch_taken_0x31b950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b950) {
            ctx->pc = 0x31B954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B950u;
            // 0x31b954: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B8C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31b8c8;
        }
    }
    ctx->pc = 0x31B958u;
label_31b958:
    // 0x31b958: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x31b958u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31b95c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x31b95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x31b960: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x31B960u;
    {
        const bool branch_taken_0x31b960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B960u;
        // 0x31b964: 0x109040  sll         $s2, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b960) {
            ctx->pc = 0x31B9C8u;
            goto label_31b9c8;
        }
    }
    ctx->pc = 0x31B968u;
    // 0x31b968: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x31b968u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31b96c: 0x246102b  sltu        $v0, $s2, $a2
    ctx->pc = 0x31b96cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x31b970: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31B970u;
    {
        const bool branch_taken_0x31b970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B970u;
        // 0x31b974: 0x26a51dc0  addiu       $a1, $s5, 0x1DC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 7616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b970) {
            ctx->pc = 0x31B9A0u;
            goto label_31b9a0;
        }
    }
    ctx->pc = 0x31B978u;
    // 0x31b978: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31b978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31b97c: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31B97Cu;
    SET_GPR_U32(ctx, 31, 0x31B984u);
    ctx->pc = 0x31B980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B97Cu;
    // 0x31b980: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31B97Cu, 0x31B984u)) {
        return;
    }
    ctx->pc = 0x31B984u;
label_31b984:
    // 0x31b984: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31b984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31b988: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31b988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31b98c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x31b98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x31b990: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x31b990u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31b994: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x31b994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x31b998: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x31B998u;
    {
        const bool branch_taken_0x31b998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B998u;
        // 0x31b99c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b998) {
            ctx->pc = 0x31B9ECu;
            goto label_31b9ec;
        }
    }
    ctx->pc = 0x31B9A0u;
label_31b9a0:
    // 0x31b9a0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31b9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31b9a4: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31B9A4u;
    SET_GPR_U32(ctx, 31, 0x31B9ACu);
    ctx->pc = 0x31B9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B9A4u;
    // 0x31b9a8: 0x26a51dc0  addiu       $a1, $s5, 0x1DC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 7616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31B9A4u, 0x31B9ACu)) {
        return;
    }
    ctx->pc = 0x31B9ACu;
label_31b9ac:
    // 0x31b9ac: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x31b9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31b9b0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31b9b4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x31b9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31b9b8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x31b9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x31b9bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b9c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31B9C0u;
    {
        const bool branch_taken_0x31b9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B9C0u;
        // 0x31b9c4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b9c0) {
            ctx->pc = 0x31B9ECu;
            goto label_31b9ec;
        }
    }
    ctx->pc = 0x31B9C8u;
label_31b9c8:
    // 0x31b9c8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x31b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31b9cc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B9CCu;
    {
        const bool branch_taken_0x31b9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b9cc) {
            ctx->pc = 0x31B9D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B9CCu;
            // 0x31b9d0: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B9E0u;
            goto label_31b9e0;
        }
    }
    ctx->pc = 0x31B9D4u;
    // 0x31b9d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b9d8: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x31b9d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x31b9dc: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x31b9dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_31b9e0:
    // 0x31b9e0: 0x26a51dc0  addiu       $a1, $s5, 0x1DC0
    ctx->pc = 0x31b9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 7616));
    // 0x31b9e4: 0xc0c6b14  jal         func_31AC50
    ctx->pc = 0x31B9E4u;
    SET_GPR_U32(ctx, 31, 0x31B9ECu);
    ctx->pc = 0x31B9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B9E4u;
    // 0x31b9e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31AC50u, 0x31B9E4u, 0x31B9ECu)) {
        return;
    }
    ctx->pc = 0x31B9ECu;
label_31b9ec:
    // 0x31b9ec: 0x8fa202d4  lw          $v0, 0x2D4($sp)
    ctx->pc = 0x31b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
label_31b9f0:
    // 0x31b9f0: 0x8fa502e4  lw          $a1, 0x2E4($sp)
    ctx->pc = 0x31b9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
    // 0x31b9f4: 0xa28023  subu        $s0, $a1, $v0
    ctx->pc = 0x31b9f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x31b9f8: 0x1a00004e  blez        $s0, . + 4 + (0x4E << 2)
    ctx->pc = 0x31B9F8u;
    {
        const bool branch_taken_0x31b9f8 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x31B9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B9F8u;
        // 0x31b9fc: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b9f8) {
            ctx->pc = 0x31BB34u;
            goto label_31bb34;
        }
    }
    ctx->pc = 0x31BA00u;
    // 0x31ba00: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x31BA00u;
    {
        const bool branch_taken_0x31ba00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA00u;
        // 0x31ba04: 0x3c15006b  lui         $s5, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ba00) {
            ctx->pc = 0x31BAA0u;
            goto label_31baa0;
        }
    }
    ctx->pc = 0x31BA08u;
    // 0x31ba08: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x31ba08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ba0c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x31ba0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_31ba10:
    // 0x31ba10: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x31ba10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x31ba14: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x31BA14u;
    {
        const bool branch_taken_0x31ba14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ba14) {
            ctx->pc = 0x31BA18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BA14u;
            // 0x31ba18: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BA78u;
            goto label_31ba78;
        }
    }
    ctx->pc = 0x31BA1Cu;
    // 0x31ba1c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x31ba1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31ba20: 0x2cc20021  sltiu       $v0, $a2, 0x21
    ctx->pc = 0x31ba20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x31ba24: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31BA24u;
    {
        const bool branch_taken_0x31ba24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA24u;
        // 0x31ba28: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ba24) {
            ctx->pc = 0x31BA54u;
            goto label_31ba54;
        }
    }
    ctx->pc = 0x31BA2Cu;
    // 0x31ba2c: 0x26a51dc0  addiu       $a1, $s5, 0x1DC0
    ctx->pc = 0x31ba2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 7616));
    // 0x31ba30: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31BA30u;
    SET_GPR_U32(ctx, 31, 0x31BA38u);
    ctx->pc = 0x31BA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BA30u;
    // 0x31ba34: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31BA30u, 0x31BA38u)) {
        return;
    }
    ctx->pc = 0x31BA38u;
label_31ba38:
    // 0x31ba38: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31ba38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31ba3c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31ba40: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31ba40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x31ba44: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x31ba44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x31ba48: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x31ba48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x31ba4c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x31BA4Cu;
    {
        const bool branch_taken_0x31ba4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA4Cu;
        // 0x31ba50: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ba4c) {
            ctx->pc = 0x31BA90u;
            goto label_31ba90;
        }
    }
    ctx->pc = 0x31BA54u;
label_31ba54:
    // 0x31ba54: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31BA54u;
    SET_GPR_U32(ctx, 31, 0x31BA5Cu);
    ctx->pc = 0x31BA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BA54u;
    // 0x31ba58: 0x26a51dc0  addiu       $a1, $s5, 0x1DC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 7616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31BA54u, 0x31BA5Cu)) {
        return;
    }
    ctx->pc = 0x31BA5Cu;
label_31ba5c:
    // 0x31ba5c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x31ba5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31ba60: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31ba64: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x31ba64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31ba68: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x31ba68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x31ba6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31ba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31ba70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31BA70u;
    {
        const bool branch_taken_0x31ba70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA70u;
        // 0x31ba74: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ba70) {
            ctx->pc = 0x31BA90u;
            goto label_31ba90;
        }
    }
    ctx->pc = 0x31BA78u;
label_31ba78:
    // 0x31ba78: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x31BA78u;
    {
        const bool branch_taken_0x31ba78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ba78) {
            ctx->pc = 0x31BA7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BA78u;
            // 0x31ba7c: 0xa632000e  sh          $s2, 0xE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BA80u;
            goto label_31ba80;
        }
    }
    ctx->pc = 0x31BA80u;
label_31ba80:
    // 0x31ba80: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x31ba80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x31ba84: 0x26a51dc0  addiu       $a1, $s5, 0x1DC0
    ctx->pc = 0x31ba84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 7616));
    // 0x31ba88: 0xc0c6b14  jal         func_31AC50
    ctx->pc = 0x31BA88u;
    SET_GPR_U32(ctx, 31, 0x31BA90u);
    ctx->pc = 0x31BA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BA88u;
    // 0x31ba8c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31AC50u, 0x31BA88u, 0x31BA90u)) {
        return;
    }
    ctx->pc = 0x31BA90u;
label_31ba90:
    // 0x31ba90: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x31ba90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x31ba94: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x31ba94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x31ba98: 0x5040ffdd  beql        $v0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x31BA98u;
    {
        const bool branch_taken_0x31ba98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ba98) {
            ctx->pc = 0x31BA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BA98u;
            // 0x31ba9c: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ba10;
        }
    }
    ctx->pc = 0x31BAA0u;
label_31baa0:
    // 0x31baa0: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x31baa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31baa4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x31baa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x31baa8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x31BAA8u;
    {
        const bool branch_taken_0x31baa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BAA8u;
        // 0x31baac: 0x109040  sll         $s2, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31baa8) {
            ctx->pc = 0x31BB10u;
            goto label_31bb10;
        }
    }
    ctx->pc = 0x31BAB0u;
    // 0x31bab0: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x31bab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31bab4: 0x246102b  sltu        $v0, $s2, $a2
    ctx->pc = 0x31bab4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x31bab8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31BAB8u;
    {
        const bool branch_taken_0x31bab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BAB8u;
        // 0x31babc: 0x26a51dc0  addiu       $a1, $s5, 0x1DC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 7616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bab8) {
            ctx->pc = 0x31BAE8u;
            goto label_31bae8;
        }
    }
    ctx->pc = 0x31BAC0u;
    // 0x31bac0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31bac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31bac4: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31BAC4u;
    SET_GPR_U32(ctx, 31, 0x31BACCu);
    ctx->pc = 0x31BAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BAC4u;
    // 0x31bac8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31BAC4u, 0x31BACCu)) {
        return;
    }
    ctx->pc = 0x31BACCu;
label_31bacc:
    // 0x31bacc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31baccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31bad0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31bad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31bad4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x31bad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x31bad8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x31bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31badc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x31badcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x31bae0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x31BAE0u;
    {
        const bool branch_taken_0x31bae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BAE0u;
        // 0x31bae4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bae0) {
            ctx->pc = 0x31BB34u;
            goto label_31bb34;
        }
    }
    ctx->pc = 0x31BAE8u;
label_31bae8:
    // 0x31bae8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31bae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31baec: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31BAECu;
    SET_GPR_U32(ctx, 31, 0x31BAF4u);
    ctx->pc = 0x31BAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BAECu;
    // 0x31baf0: 0x26a51dc0  addiu       $a1, $s5, 0x1DC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 7616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31BAECu, 0x31BAF4u)) {
        return;
    }
    ctx->pc = 0x31BAF4u;
label_31baf4:
    // 0x31baf4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x31baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31baf8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31bafc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x31bafcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31bb00: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x31bb00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x31bb04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31bb08: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31BB08u;
    {
        const bool branch_taken_0x31bb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB08u;
        // 0x31bb0c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bb08) {
            ctx->pc = 0x31BB34u;
            goto label_31bb34;
        }
    }
    ctx->pc = 0x31BB10u;
label_31bb10:
    // 0x31bb10: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x31bb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31bb14: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31BB14u;
    {
        const bool branch_taken_0x31bb14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31bb14) {
            ctx->pc = 0x31BB18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BB14u;
            // 0x31bb18: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BB28u;
            goto label_31bb28;
        }
    }
    ctx->pc = 0x31BB1Cu;
    // 0x31bb1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31bb20: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x31bb20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x31bb24: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x31bb24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_31bb28:
    // 0x31bb28: 0x26a51dc0  addiu       $a1, $s5, 0x1DC0
    ctx->pc = 0x31bb28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 7616));
    // 0x31bb2c: 0xc0c6b14  jal         func_31AC50
    ctx->pc = 0x31BB2Cu;
    SET_GPR_U32(ctx, 31, 0x31BB34u);
    ctx->pc = 0x31BB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BB2Cu;
    // 0x31bb30: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31AC50u, 0x31BB2Cu, 0x31BB34u)) {
        return;
    }
    ctx->pc = 0x31BB34u;
label_31bb34:
    // 0x31bb34: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x31bb34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31bb38: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x31bb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x31bb3c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x31BB3Cu;
    {
        const bool branch_taken_0x31bb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB3Cu;
        // 0x31bb40: 0x8fa302d4  lw          $v1, 0x2D4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bb3c) {
            ctx->pc = 0x31BBB0u;
            goto label_31bbb0;
        }
    }
    ctx->pc = 0x31BB44u;
    // 0x31bb44: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x31bb44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31bb48: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x31bb48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31bb4c: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x31bb4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x31bb50: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x31BB50u;
    {
        const bool branch_taken_0x31bb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB50u;
        // 0x31bb54: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bb50) {
            ctx->pc = 0x31BB88u;
            goto label_31bb88;
        }
    }
    ctx->pc = 0x31BB58u;
    // 0x31bb58: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31bb58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31bb5c: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31BB5Cu;
    SET_GPR_U32(ctx, 31, 0x31BB64u);
    ctx->pc = 0x31BB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BB5Cu;
    // 0x31bb60: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31BB5Cu, 0x31BB64u)) {
        return;
    }
    ctx->pc = 0x31BB64u;
label_31bb64:
    // 0x31bb64: 0x8fa502d4  lw          $a1, 0x2D4($sp)
    ctx->pc = 0x31bb64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
    // 0x31bb68: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31bb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31bb6c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x31bb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31bb70: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x31bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x31bb74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31bb78: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x31bb78u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x31bb7c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x31bb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x31bb80: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x31BB80u;
    {
        const bool branch_taken_0x31bb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB80u;
        // 0x31bb84: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bb80) {
            ctx->pc = 0x31BBD4u;
            goto label_31bbd4;
        }
    }
    ctx->pc = 0x31BB88u;
label_31bb88:
    // 0x31bb88: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31bb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31bb8c: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31BB8Cu;
    SET_GPR_U32(ctx, 31, 0x31BB94u);
    ctx->pc = 0x31BB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BB8Cu;
    // 0x31bb90: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31BB8Cu, 0x31BB94u)) {
        return;
    }
    ctx->pc = 0x31BB94u;
label_31bb94:
    // 0x31bb94: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x31bb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31bb98: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31bb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31bb9c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x31bb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31bba0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x31bba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x31bba4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31bba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31bba8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31BBA8u;
    {
        const bool branch_taken_0x31bba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BBA8u;
        // 0x31bbac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bba8) {
            ctx->pc = 0x31BBD4u;
            goto label_31bbd4;
        }
    }
    ctx->pc = 0x31BBB0u;
label_31bbb0:
    // 0x31bbb0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x31bbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31bbb4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31BBB4u;
    {
        const bool branch_taken_0x31bbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31bbb4) {
            ctx->pc = 0x31BBB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BBB4u;
            // 0x31bbb8: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BBC8u;
            goto label_31bbc8;
        }
    }
    ctx->pc = 0x31BBBCu;
    // 0x31bbbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31bbc0: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x31bbc0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x31bbc4: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x31bbc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_31bbc8:
    // 0x31bbc8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x31bbc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bbcc: 0xc0c6b14  jal         func_31AC50
    ctx->pc = 0x31BBCCu;
    SET_GPR_U32(ctx, 31, 0x31BBD4u);
    ctx->pc = 0x31BBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BBCCu;
    // 0x31bbd0: 0x8fa602d4  lw          $a2, 0x2D4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31AC50u, 0x31BBCCu, 0x31BBD4u)) {
        return;
    }
    ctx->pc = 0x31BBD4u;
label_31bbd4:
    // 0x31bbd4: 0x8fa202f4  lw          $v0, 0x2F4($sp)
    ctx->pc = 0x31bbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 756)));
    // 0x31bbd8: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x31BBD8u;
    {
        const bool branch_taken_0x31bbd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BBD8u;
        // 0x31bbdc: 0x8fa302e0  lw          $v1, 0x2E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bbd8) {
            ctx->pc = 0x31BD24u;
            goto label_31bd24;
        }
    }
    ctx->pc = 0x31BBE0u;
    // 0x31bbe0: 0x8fa402e8  lw          $a0, 0x2E8($sp)
    ctx->pc = 0x31bbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x31bbe4: 0x648023  subu        $s0, $v1, $a0
    ctx->pc = 0x31bbe4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31bbe8: 0x1a00004e  blez        $s0, . + 4 + (0x4E << 2)
    ctx->pc = 0x31BBE8u;
    {
        const bool branch_taken_0x31bbe8 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x31BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BBE8u;
        // 0x31bbec: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bbe8) {
            ctx->pc = 0x31BD24u;
            goto label_31bd24;
        }
    }
    ctx->pc = 0x31BBF0u;
    // 0x31bbf0: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x31BBF0u;
    {
        const bool branch_taken_0x31bbf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BBF0u;
        // 0x31bbf4: 0x3c17006b  lui         $s7, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bbf0) {
            ctx->pc = 0x31BC90u;
            goto label_31bc90;
        }
    }
    ctx->pc = 0x31BBF8u;
    // 0x31bbf8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x31bbf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31bbfc: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x31bbfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_31bc00:
    // 0x31bc00: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x31bc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x31bc04: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x31BC04u;
    {
        const bool branch_taken_0x31bc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bc04) {
            ctx->pc = 0x31BC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BC04u;
            // 0x31bc08: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BC68u;
            goto label_31bc68;
        }
    }
    ctx->pc = 0x31BC0Cu;
    // 0x31bc0c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x31bc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31bc10: 0x2cc20021  sltiu       $v0, $a2, 0x21
    ctx->pc = 0x31bc10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x31bc14: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31BC14u;
    {
        const bool branch_taken_0x31bc14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC14u;
        // 0x31bc18: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bc14) {
            ctx->pc = 0x31BC44u;
            goto label_31bc44;
        }
    }
    ctx->pc = 0x31BC1Cu;
    // 0x31bc1c: 0x26e51da0  addiu       $a1, $s7, 0x1DA0
    ctx->pc = 0x31bc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 7584));
    // 0x31bc20: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31BC20u;
    SET_GPR_U32(ctx, 31, 0x31BC28u);
    ctx->pc = 0x31BC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BC20u;
    // 0x31bc24: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31BC20u, 0x31BC28u)) {
        return;
    }
    ctx->pc = 0x31BC28u;
label_31bc28:
    // 0x31bc28: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31bc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31bc2c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31bc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31bc30: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31bc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x31bc34: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x31bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x31bc38: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x31bc38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x31bc3c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x31BC3Cu;
    {
        const bool branch_taken_0x31bc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC3Cu;
        // 0x31bc40: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bc3c) {
            ctx->pc = 0x31BC80u;
            goto label_31bc80;
        }
    }
    ctx->pc = 0x31BC44u;
label_31bc44:
    // 0x31bc44: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31BC44u;
    SET_GPR_U32(ctx, 31, 0x31BC4Cu);
    ctx->pc = 0x31BC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BC44u;
    // 0x31bc48: 0x26e51da0  addiu       $a1, $s7, 0x1DA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 7584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31BC44u, 0x31BC4Cu)) {
        return;
    }
    ctx->pc = 0x31BC4Cu;
label_31bc4c:
    // 0x31bc4c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x31bc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31bc50: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31bc54: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x31bc54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31bc58: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x31bc58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x31bc5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31bc60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31BC60u;
    {
        const bool branch_taken_0x31bc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC60u;
        // 0x31bc64: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bc60) {
            ctx->pc = 0x31BC80u;
            goto label_31bc80;
        }
    }
    ctx->pc = 0x31BC68u;
label_31bc68:
    // 0x31bc68: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x31BC68u;
    {
        const bool branch_taken_0x31bc68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bc68) {
            ctx->pc = 0x31BC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BC68u;
            // 0x31bc6c: 0xa632000e  sh          $s2, 0xE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BC70u;
            goto label_31bc70;
        }
    }
    ctx->pc = 0x31BC70u;
label_31bc70:
    // 0x31bc70: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x31bc70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x31bc74: 0x26e51da0  addiu       $a1, $s7, 0x1DA0
    ctx->pc = 0x31bc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 7584));
    // 0x31bc78: 0xc0c6b14  jal         func_31AC50
    ctx->pc = 0x31BC78u;
    SET_GPR_U32(ctx, 31, 0x31BC80u);
    ctx->pc = 0x31BC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BC78u;
    // 0x31bc7c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31AC50u, 0x31BC78u, 0x31BC80u)) {
        return;
    }
    ctx->pc = 0x31BC80u;
label_31bc80:
    // 0x31bc80: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x31bc80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x31bc84: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x31bc84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x31bc88: 0x5040ffdd  beql        $v0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x31BC88u;
    {
        const bool branch_taken_0x31bc88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bc88) {
            ctx->pc = 0x31BC8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BC88u;
            // 0x31bc8c: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31bc00;
        }
    }
    ctx->pc = 0x31BC90u;
label_31bc90:
    // 0x31bc90: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x31bc90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31bc94: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x31bc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x31bc98: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x31BC98u;
    {
        const bool branch_taken_0x31bc98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC98u;
        // 0x31bc9c: 0x109040  sll         $s2, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bc98) {
            ctx->pc = 0x31BD00u;
            goto label_31bd00;
        }
    }
    ctx->pc = 0x31BCA0u;
    // 0x31bca0: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x31bca0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31bca4: 0x246102b  sltu        $v0, $s2, $a2
    ctx->pc = 0x31bca4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x31bca8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31BCA8u;
    {
        const bool branch_taken_0x31bca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BCA8u;
        // 0x31bcac: 0x26e51da0  addiu       $a1, $s7, 0x1DA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 7584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bca8) {
            ctx->pc = 0x31BCD8u;
            goto label_31bcd8;
        }
    }
    ctx->pc = 0x31BCB0u;
    // 0x31bcb0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31bcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31bcb4: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31BCB4u;
    SET_GPR_U32(ctx, 31, 0x31BCBCu);
    ctx->pc = 0x31BCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BCB4u;
    // 0x31bcb8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31BCB4u, 0x31BCBCu)) {
        return;
    }
    ctx->pc = 0x31BCBCu;
label_31bcbc:
    // 0x31bcbc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31bcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31bcc0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31bcc4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x31bcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x31bcc8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x31bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31bccc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x31bcccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x31bcd0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x31BCD0u;
    {
        const bool branch_taken_0x31bcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BCD0u;
        // 0x31bcd4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bcd0) {
            ctx->pc = 0x31BD24u;
            goto label_31bd24;
        }
    }
    ctx->pc = 0x31BCD8u;
label_31bcd8:
    // 0x31bcd8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31bcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31bcdc: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31BCDCu;
    SET_GPR_U32(ctx, 31, 0x31BCE4u);
    ctx->pc = 0x31BCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BCDCu;
    // 0x31bce0: 0x26e51da0  addiu       $a1, $s7, 0x1DA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 7584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31BCDCu, 0x31BCE4u)) {
        return;
    }
    ctx->pc = 0x31BCE4u;
label_31bce4:
    // 0x31bce4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x31bce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31bce8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31bce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31bcec: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x31bcecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31bcf0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x31bcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x31bcf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31bcf8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31BCF8u;
    {
        const bool branch_taken_0x31bcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BCF8u;
        // 0x31bcfc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bcf8) {
            ctx->pc = 0x31BD24u;
            goto label_31bd24;
        }
    }
    ctx->pc = 0x31BD00u;
label_31bd00:
    // 0x31bd00: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x31bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31bd04: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31BD04u;
    {
        const bool branch_taken_0x31bd04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31bd04) {
            ctx->pc = 0x31BD08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BD04u;
            // 0x31bd08: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BD18u;
            goto label_31bd18;
        }
    }
    ctx->pc = 0x31BD0Cu;
    // 0x31bd0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31bd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31bd10: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x31bd10u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x31bd14: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x31bd14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_31bd18:
    // 0x31bd18: 0x26e51da0  addiu       $a1, $s7, 0x1DA0
    ctx->pc = 0x31bd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 7584));
    // 0x31bd1c: 0xc0c6b14  jal         func_31AC50
    ctx->pc = 0x31BD1Cu;
    SET_GPR_U32(ctx, 31, 0x31BD24u);
    ctx->pc = 0x31BD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BD1Cu;
    // 0x31bd20: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31AC50u, 0x31BD1Cu, 0x31BD24u)) {
        return;
    }
    ctx->pc = 0x31BD24u;
label_31bd24:
    // 0x31bd24: 0x8fa502e0  lw          $a1, 0x2E0($sp)
    ctx->pc = 0x31bd24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x31bd28: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x31bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x31bd2c: 0x8fa302e8  lw          $v1, 0x2E8($sp)
    ctx->pc = 0x31bd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x31bd30: 0x8fa402dc  lw          $a0, 0x2DC($sp)
    ctx->pc = 0x31bd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
    // 0x31bd34: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x31bd34u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
    // 0x31bd38: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x31bd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x31bd3c: 0x1000fc16  b           . + 4 + (-0x3EA << 2)
    ctx->pc = 0x31BD3Cu;
    {
        const bool branch_taken_0x31bd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD3Cu;
        // 0x31bd40: 0xafa402dc  sw          $a0, 0x2DC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bd3c) {
            ctx->pc = 0x31AD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ad98;
        }
    }
    ctx->pc = 0x31BD44u;
label_31bd44:
    // 0x31bd44: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x31bd44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_31bd48:
    // 0x31bd48: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x31bd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x31bd4c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31BD4Cu;
    {
        const bool branch_taken_0x31bd4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD4Cu;
        // 0x31bd50: 0x8fa202dc  lw          $v0, 0x2DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bd4c) {
            ctx->pc = 0x31BD6Cu;
            goto label_31bd6c;
        }
    }
    ctx->pc = 0x31BD54u;
    // 0x31bd54: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x31bd54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x31bd58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31bd58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bd5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31bd5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bd60: 0xc0c6ad2  jal         func_31AB48
    ctx->pc = 0x31BD60u;
    SET_GPR_U32(ctx, 31, 0x31BD68u);
    ctx->pc = 0x31BD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BD60u;
    // 0x31bd64: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AB48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31AB48u, 0x31BD60u, 0x31BD68u)) {
        return;
    }
    ctx->pc = 0x31BD68u;
label_31bd68:
    // 0x31bd68: 0x8fa202dc  lw          $v0, 0x2DC($sp)
    ctx->pc = 0x31bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
label_31bd6c:
    // 0x31bd6c: 0x7bb00390  lq          $s0, 0x390($sp)
    ctx->pc = 0x31bd6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x31bd70: 0x7bb10380  lq          $s1, 0x380($sp)
    ctx->pc = 0x31bd70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x31bd74: 0x7bb20370  lq          $s2, 0x370($sp)
    ctx->pc = 0x31bd74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x31bd78: 0x7bb30360  lq          $s3, 0x360($sp)
    ctx->pc = 0x31bd78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x31bd7c: 0x7bb40350  lq          $s4, 0x350($sp)
    ctx->pc = 0x31bd7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x31bd80: 0x7bb50340  lq          $s5, 0x340($sp)
    ctx->pc = 0x31bd80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x31bd84: 0x7bb60330  lq          $s6, 0x330($sp)
    ctx->pc = 0x31bd84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x31bd88: 0x7bb70320  lq          $s7, 0x320($sp)
    ctx->pc = 0x31bd88u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x31bd8c: 0x7bbe0310  lq          $fp, 0x310($sp)
    ctx->pc = 0x31bd8cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x31bd90: 0xdfbf0300  ld          $ra, 0x300($sp)
    ctx->pc = 0x31bd90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x31bd94: 0x3e00008  jr          $ra
    ctx->pc = 0x31BD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD94u;
        // 0x31bd98: 0x27bd03a0  addiu       $sp, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BD94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BD9Cu;
    // 0x31bd9c: 0x0  nop
    ctx->pc = 0x31bd9cu;
    // NOP
    ctx->pc = 0x31bda0u;
}
