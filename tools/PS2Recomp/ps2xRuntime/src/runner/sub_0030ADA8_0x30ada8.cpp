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

// Function: sub_0030ADA8
// Address: 0x30ada8 - 0x30afb8
void sub_0030ADA8_0x30ada8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030ADA8_0x30ada8");
#endif

    switch (ctx->pc) {
        case 0x30ade4u: goto label_30ade4;
        case 0x30adf8u: goto label_30adf8;
        case 0x30ae1cu: goto label_30ae1c;
        case 0x30ae38u: goto label_30ae38;
        case 0x30ae70u: goto label_30ae70;
        case 0x30ae88u: goto label_30ae88;
        case 0x30ae90u: goto label_30ae90;
        case 0x30ae9cu: goto label_30ae9c;
        case 0x30aed4u: goto label_30aed4;
        case 0x30aef0u: goto label_30aef0;
        case 0x30af2cu: goto label_30af2c;
        case 0x30af60u: goto label_30af60;
        case 0x30af84u: goto label_30af84;
        default: break;
    }

    ctx->pc = 0x30ada8u;

    // 0x30ada8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x30ada8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x30adac: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x30adacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x30adb0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x30adb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x30adb4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30adb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30adb8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x30adb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x30adbc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30adbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30adc0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30adc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30adc4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x30adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x30adc8: 0x34420015  ori         $v0, $v0, 0x15
    ctx->pc = 0x30adc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21);
    // 0x30adcc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30adccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30add0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30ADD0u;
    {
        const bool branch_taken_0x30add0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ADD0u;
        // 0x30add4: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30add0) {
            ctx->pc = 0x30ADF0u;
            goto label_30adf0;
        }
    }
    ctx->pc = 0x30ADD8u;
    // 0x30add8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x30add8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30addc: 0xc092782  jal         func_249E08
    ctx->pc = 0x30ADDCu;
    SET_GPR_U32(ctx, 31, 0x30ADE4u);
    ctx->pc = 0x30ADE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ADDCu;
    // 0x30ade0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30ADDCu, 0x30ADE4u)) {
        return;
    }
    ctx->pc = 0x30ADE4u;
label_30ade4:
    // 0x30ade4: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x30ADE4u;
    {
        const bool branch_taken_0x30ade4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30ADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ADE4u;
        // 0x30ade8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ade4) {
            ctx->pc = 0x30AF9Cu;
            goto label_30af9c;
        }
    }
    ctx->pc = 0x30ADECu;
    // 0x30adec: 0x0  nop
    ctx->pc = 0x30adecu;
    // NOP
label_30adf0:
    // 0x30adf0: 0xc0b5a68  jal         func_2D69A0
    ctx->pc = 0x30ADF0u;
    SET_GPR_U32(ctx, 31, 0x30ADF8u);
    ctx->pc = 0x30ADF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ADF0u;
    // 0x30adf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D69A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D69A0u, 0x30ADF0u, 0x30ADF8u)) {
        return;
    }
    ctx->pc = 0x30ADF8u;
label_30adf8:
    // 0x30adf8: 0x27b00014  addiu       $s0, $sp, 0x14
    ctx->pc = 0x30adf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x30adfc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x30adfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x30ae00: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30ae00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30ae04: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30ae04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30ae08: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x30AE08u;
    {
        const bool branch_taken_0x30ae08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE08u;
        // 0x30ae0c: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae08) {
            ctx->pc = 0x30AE50u;
            goto label_30ae50;
        }
    }
    ctx->pc = 0x30AE10u;
    // 0x30ae10: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x30ae10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x30ae14: 0xc092782  jal         func_249E08
    ctx->pc = 0x30AE14u;
    SET_GPR_U32(ctx, 31, 0x30AE1Cu);
    ctx->pc = 0x30AE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AE14u;
    // 0x30ae18: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30AE14u, 0x30AE1Cu)) {
        return;
    }
    ctx->pc = 0x30AE1Cu;
label_30ae1c:
    // 0x30ae1c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x30AE1Cu;
    {
        const bool branch_taken_0x30ae1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE1Cu;
        // 0x30ae20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae1c) {
            ctx->pc = 0x30AE68u;
            goto label_30ae68;
        }
    }
    ctx->pc = 0x30AE24u;
    // 0x30ae24: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30ae24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30ae28: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30AE28u;
    {
        const bool branch_taken_0x30ae28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE28u;
        // 0x30ae2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae28) {
            ctx->pc = 0x30AE50u;
            goto label_30ae50;
        }
    }
    ctx->pc = 0x30AE30u;
    // 0x30ae30: 0xc092782  jal         func_249E08
    ctx->pc = 0x30AE30u;
    SET_GPR_U32(ctx, 31, 0x30AE38u);
    ctx->pc = 0x30AE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AE30u;
    // 0x30ae34: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30AE30u, 0x30AE38u)) {
        return;
    }
    ctx->pc = 0x30AE38u;
label_30ae38:
    // 0x30ae38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30AE38u;
    {
        const bool branch_taken_0x30ae38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30ae38) {
            ctx->pc = 0x30AE50u;
            goto label_30ae50;
        }
    }
    ctx->pc = 0x30AE40u;
    // 0x30ae40: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x30ae40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30ae44: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30AE44u;
    {
        const bool branch_taken_0x30ae44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE44u;
        // 0x30ae48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae44) {
            ctx->pc = 0x30AE68u;
            goto label_30ae68;
        }
    }
    ctx->pc = 0x30AE4Cu;
    // 0x30ae4c: 0x0  nop
    ctx->pc = 0x30ae4cu;
    // NOP
label_30ae50:
    // 0x30ae50: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30AE50u;
    {
        const bool branch_taken_0x30ae50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE50u;
        // 0x30ae54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae50) {
            ctx->pc = 0x30AE68u;
            goto label_30ae68;
        }
    }
    ctx->pc = 0x30AE58u;
    // 0x30ae58: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x30ae58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30ae5c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30ae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30ae60: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x30ae60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x30ae64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30ae68:
    // 0x30ae68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30AE68u;
    {
        const bool branch_taken_0x30ae68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE68u;
        // 0x30ae6c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae68) {
            ctx->pc = 0x30AE78u;
            goto label_30ae78;
        }
    }
    ctx->pc = 0x30AE70u;
label_30ae70:
    // 0x30ae70: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x30AE70u;
    {
        const bool branch_taken_0x30ae70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE70u;
        // 0x30ae74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae70) {
            ctx->pc = 0x30AF9Cu;
            goto label_30af9c;
        }
    }
    ctx->pc = 0x30AE78u;
label_30ae78:
    // 0x30ae78: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30AE78u;
    {
        const bool branch_taken_0x30ae78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE78u;
        // 0x30ae7c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae78) {
            ctx->pc = 0x30AEB4u;
            goto label_30aeb4;
        }
    }
    ctx->pc = 0x30AE80u;
    // 0x30ae80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30ae80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ae84: 0x0  nop
    ctx->pc = 0x30ae84u;
    // NOP
label_30ae88:
    // 0x30ae88: 0xc0b5a6a  jal         func_2D69A8
    ctx->pc = 0x30AE88u;
    SET_GPR_U32(ctx, 31, 0x30AE90u);
    ctx->pc = 0x30AE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AE88u;
    // 0x30ae8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D69A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D69A8u, 0x30AE88u, 0x30AE90u)) {
        return;
    }
    ctx->pc = 0x30AE90u;
label_30ae90:
    // 0x30ae90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30ae90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ae94: 0xc0c2e54  jal         func_30B950
    ctx->pc = 0x30AE94u;
    SET_GPR_U32(ctx, 31, 0x30AE9Cu);
    ctx->pc = 0x30AE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AE94u;
    // 0x30ae98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B950u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30B950u, 0x30AE94u, 0x30AE9Cu)) {
        return;
    }
    ctx->pc = 0x30AE9Cu;
label_30ae9c:
    // 0x30ae9c: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x30AE9Cu;
    {
        const bool branch_taken_0x30ae9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE9Cu;
        // 0x30aea0: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae9c) {
            ctx->pc = 0x30AE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ae70;
        }
    }
    ctx->pc = 0x30AEA4u;
    // 0x30aea4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30aea4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x30aea8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x30aea8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30aeac: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x30AEACu;
    {
        const bool branch_taken_0x30aeac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AEACu;
        // 0x30aeb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aeac) {
            ctx->pc = 0x30AE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ae88;
        }
    }
    ctx->pc = 0x30AEB4u;
label_30aeb4:
    // 0x30aeb4: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x30aeb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x30aeb8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x30aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30aebc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30aebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30aec0: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x30AEC0u;
    {
        const bool branch_taken_0x30aec0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AEC0u;
        // 0x30aec4: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aec0) {
            ctx->pc = 0x30AEF8u;
            goto label_30aef8;
        }
    }
    ctx->pc = 0x30AEC8u;
    // 0x30aec8: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x30aec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x30aecc: 0xc092782  jal         func_249E08
    ctx->pc = 0x30AECCu;
    SET_GPR_U32(ctx, 31, 0x30AED4u);
    ctx->pc = 0x30AED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AECCu;
    // 0x30aed0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30AECCu, 0x30AED4u)) {
        return;
    }
    ctx->pc = 0x30AED4u;
label_30aed4:
    // 0x30aed4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x30AED4u;
    {
        const bool branch_taken_0x30aed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30aed4) {
            ctx->pc = 0x30AED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30AED4u;
            // 0x30aed8: 0x26500044  addiu       $s0, $s2, 0x44 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30AF10u;
            goto label_30af10;
        }
    }
    ctx->pc = 0x30AEDCu;
    // 0x30aedc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30aedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30aee0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30AEE0u;
    {
        const bool branch_taken_0x30aee0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AEE0u;
        // 0x30aee4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aee0) {
            ctx->pc = 0x30AEF8u;
            goto label_30aef8;
        }
    }
    ctx->pc = 0x30AEE8u;
    // 0x30aee8: 0xc09275c  jal         func_249D70
    ctx->pc = 0x30AEE8u;
    SET_GPR_U32(ctx, 31, 0x30AEF0u);
    ctx->pc = 0x30AEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AEE8u;
    // 0x30aeec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x30AEE8u, 0x30AEF0u)) {
        return;
    }
    ctx->pc = 0x30AEF0u;
label_30aef0:
    // 0x30aef0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30AEF0u;
    {
        const bool branch_taken_0x30aef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AEF0u;
        // 0x30aef4: 0x26500044  addiu       $s0, $s2, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aef0) {
            ctx->pc = 0x30AF10u;
            goto label_30af10;
        }
    }
    ctx->pc = 0x30AEF8u;
label_30aef8:
    // 0x30aef8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30AEF8u;
    {
        const bool branch_taken_0x30aef8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AEF8u;
        // 0x30aefc: 0x26500044  addiu       $s0, $s2, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aef8) {
            ctx->pc = 0x30AF10u;
            goto label_30af10;
        }
    }
    ctx->pc = 0x30AF00u;
    // 0x30af00: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x30af00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30af04: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30af04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30af08: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x30af08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x30af0c: 0x0  nop
    ctx->pc = 0x30af0cu;
    // NOP
label_30af10:
    // 0x30af10: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x30af10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30af14: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30af14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30af18: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30AF18u;
    {
        const bool branch_taken_0x30af18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AF18u;
        // 0x30af1c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30af18) {
            ctx->pc = 0x30AF34u;
            goto label_30af34;
        }
    }
    ctx->pc = 0x30AF20u;
    // 0x30af20: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x30af20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30af24: 0xc092782  jal         func_249E08
    ctx->pc = 0x30AF24u;
    SET_GPR_U32(ctx, 31, 0x30AF2Cu);
    ctx->pc = 0x30AF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AF24u;
    // 0x30af28: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30AF24u, 0x30AF2Cu)) {
        return;
    }
    ctx->pc = 0x30AF2Cu;
label_30af2c:
    // 0x30af2c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x30AF2Cu;
    {
        const bool branch_taken_0x30af2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AF2Cu;
        // 0x30af30: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30af2c) {
            ctx->pc = 0x30AF7Cu;
            goto label_30af7c;
        }
    }
    ctx->pc = 0x30AF34u;
label_30af34:
    // 0x30af34: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x30af34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30af38: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30af38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30af3c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x30af3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30af40: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x30af40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30af44: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x30af44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x30af48: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x30af48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30af4c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30AF4Cu;
    {
        const bool branch_taken_0x30af4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AF4Cu;
        // 0x30af50: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30af4c) {
            ctx->pc = 0x30AF68u;
            goto label_30af68;
        }
    }
    ctx->pc = 0x30AF54u;
    // 0x30af54: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30af54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30af58: 0xc09275c  jal         func_249D70
    ctx->pc = 0x30AF58u;
    SET_GPR_U32(ctx, 31, 0x30AF60u);
    ctx->pc = 0x30AF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AF58u;
    // 0x30af5c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x30AF58u, 0x30AF60u)) {
        return;
    }
    ctx->pc = 0x30AF60u;
label_30af60:
    // 0x30af60: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30AF60u;
    {
        const bool branch_taken_0x30af60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AF60u;
        // 0x30af64: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30af60) {
            ctx->pc = 0x30AF7Cu;
            goto label_30af7c;
        }
    }
    ctx->pc = 0x30AF68u;
label_30af68:
    // 0x30af68: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30AF68u;
    {
        const bool branch_taken_0x30af68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AF68u;
        // 0x30af6c: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30af68) {
            ctx->pc = 0x30AF7Cu;
            goto label_30af7c;
        }
    }
    ctx->pc = 0x30AF70u;
    // 0x30af70: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x30af70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30af74: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x30af74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x30af78: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x30af78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_30af7c:
    // 0x30af7c: 0xc0c26aa  jal         func_309AA8
    ctx->pc = 0x30AF7Cu;
    SET_GPR_U32(ctx, 31, 0x30AF84u);
    ctx->pc = 0x30AF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AF7Cu;
    // 0x30af80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309AA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x309AA8u, 0x30AF7Cu, 0x30AF84u)) {
        return;
    }
    ctx->pc = 0x30AF84u;
label_30af84:
    // 0x30af84: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30AF84u;
    {
        const bool branch_taken_0x30af84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AF84u;
        // 0x30af88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30af84) {
            ctx->pc = 0x30AF9Cu;
            goto label_30af9c;
        }
    }
    ctx->pc = 0x30AF8Cu;
    // 0x30af8c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x30af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30af90: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30af90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30af94: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x30af94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x30af98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30af98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30af9c:
    // 0x30af9c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x30af9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30afa0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x30afa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30afa4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x30afa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30afa8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30afa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30afac: 0x3e00008  jr          $ra
    ctx->pc = 0x30AFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30AFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AFACu;
        // 0x30afb0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30AFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30AFB4u;
    // 0x30afb4: 0x0  nop
    ctx->pc = 0x30afb4u;
    // NOP
    ctx->pc = 0x30afb8u;
}
