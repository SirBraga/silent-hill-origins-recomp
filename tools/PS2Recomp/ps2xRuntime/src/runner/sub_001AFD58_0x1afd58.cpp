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

// Function: sub_001AFD58
// Address: 0x1afd58 - 0x1afec0
void sub_001AFD58_0x1afd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AFD58_0x1afd58");
#endif

    switch (ctx->pc) {
        case 0x1afd88u: goto label_1afd88;
        case 0x1afda8u: goto label_1afda8;
        case 0x1afdb0u: goto label_1afdb0;
        case 0x1afdc4u: goto label_1afdc4;
        case 0x1afde0u: goto label_1afde0;
        case 0x1afdf0u: goto label_1afdf0;
        case 0x1afe00u: goto label_1afe00;
        case 0x1afe10u: goto label_1afe10;
        case 0x1afe18u: goto label_1afe18;
        case 0x1afe20u: goto label_1afe20;
        case 0x1afe28u: goto label_1afe28;
        case 0x1afe30u: goto label_1afe30;
        case 0x1afe38u: goto label_1afe38;
        case 0x1afe40u: goto label_1afe40;
        case 0x1afe48u: goto label_1afe48;
        case 0x1afe50u: goto label_1afe50;
        case 0x1afe58u: goto label_1afe58;
        case 0x1afe60u: goto label_1afe60;
        case 0x1afe68u: goto label_1afe68;
        case 0x1afe70u: goto label_1afe70;
        case 0x1afe78u: goto label_1afe78;
        case 0x1afe80u: goto label_1afe80;
        case 0x1afe88u: goto label_1afe88;
        case 0x1afe90u: goto label_1afe90;
        case 0x1afe98u: goto label_1afe98;
        case 0x1afea0u: goto label_1afea0;
        default: break;
    }

    ctx->pc = 0x1afd58u;

    // 0x1afd58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1afd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1afd5c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1afd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1afd60: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1afd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1afd64: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x1afd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x1afd68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1afd68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afd6c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1afd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1afd70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1afd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1afd74: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1afd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1afd78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1afd78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afd7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1afd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1afd80: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1AFD80u;
    SET_GPR_U32(ctx, 31, 0x1AFD88u);
    ctx->pc = 0x1AFD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD80u;
    // 0x1afd84: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1AFD80u, 0x1AFD88u)) {
        return;
    }
    ctx->pc = 0x1AFD88u;
label_1afd88:
    // 0x1afd88: 0x2611015c  addiu       $s1, $s0, 0x15C
    ctx->pc = 0x1afd88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 348));
    // 0x1afd8c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1afd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1afd90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afd94: 0x24a58898  addiu       $a1, $a1, -0x7768
    ctx->pc = 0x1afd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    // 0x1afd98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1afd98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afd9c: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x1afd9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1afda0: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1AFDA0u;
    SET_GPR_U32(ctx, 31, 0x1AFDA8u);
    ctx->pc = 0x1AFDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFDA0u;
    // 0x1afda4: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1AFDA0u, 0x1AFDA8u)) {
        return;
    }
    ctx->pc = 0x1AFDA8u;
label_1afda8:
    // 0x1afda8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1afda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1afdac: 0x24539170  addiu       $s3, $v0, -0x6E90
    ctx->pc = 0x1afdacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938992));
label_1afdb0:
    // 0x1afdb0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1afdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1afdb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afdb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afdb8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1afdb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1afdbc: 0xc06bfb0  jal         func_1AFEC0
    ctx->pc = 0x1AFDBCu;
    SET_GPR_U32(ctx, 31, 0x1AFDC4u);
    ctx->pc = 0x1AFDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFDBCu;
    // 0x1afdc0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFEC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFEC0u, 0x1AFDBCu, 0x1AFDC4u)) {
        return;
    }
    ctx->pc = 0x1AFDC4u;
label_1afdc4:
    // 0x1afdc4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1afdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1afdc8: 0x641fff9  bgez        $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1AFDC8u;
    {
        const bool branch_taken_0x1afdc8 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x1AFDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDC8u;
        // 0x1afdcc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afdc8) {
            ctx->pc = 0x1AFDB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afdb0;
        }
    }
    ctx->pc = 0x1AFDD0u;
    // 0x1afdd0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1afdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1afdd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afdd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afdd8: 0xc06bfb0  jal         func_1AFEC0
    ctx->pc = 0x1AFDD8u;
    SET_GPR_U32(ctx, 31, 0x1AFDE0u);
    ctx->pc = 0x1AFDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFDD8u;
    // 0x1afddc: 0x24a5bf18  addiu       $a1, $a1, -0x40E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFEC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFEC0u, 0x1AFDD8u, 0x1AFDE0u)) {
        return;
    }
    ctx->pc = 0x1AFDE0u;
label_1afde0:
    // 0x1afde0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1afde0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1afde4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afde8: 0xc06bfb0  jal         func_1AFEC0
    ctx->pc = 0x1AFDE8u;
    SET_GPR_U32(ctx, 31, 0x1AFDF0u);
    ctx->pc = 0x1AFDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFDE8u;
    // 0x1afdec: 0x24a5bf20  addiu       $a1, $a1, -0x40E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFEC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFEC0u, 0x1AFDE8u, 0x1AFDF0u)) {
        return;
    }
    ctx->pc = 0x1AFDF0u;
label_1afdf0:
    // 0x1afdf0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1afdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1afdf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afdf8: 0xc06bfb0  jal         func_1AFEC0
    ctx->pc = 0x1AFDF8u;
    SET_GPR_U32(ctx, 31, 0x1AFE00u);
    ctx->pc = 0x1AFDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFDF8u;
    // 0x1afdfc: 0x24a5bf30  addiu       $a1, $a1, -0x40D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFEC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFEC0u, 0x1AFDF8u, 0x1AFE00u)) {
        return;
    }
    ctx->pc = 0x1AFE00u;
label_1afe00:
    // 0x1afe00: 0x8e03015c  lw          $v1, 0x15C($s0)
    ctx->pc = 0x1afe00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x1afe04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afe04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe08: 0xc073e3a  jal         func_1CF8E8
    ctx->pc = 0x1AFE08u;
    SET_GPR_U32(ctx, 31, 0x1AFE10u);
    ctx->pc = 0x1AFE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE08u;
    // 0x1afe0c: 0xae030158  sw          $v1, 0x158($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF8E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CF8E8u, 0x1AFE08u, 0x1AFE10u)) {
        return;
    }
    ctx->pc = 0x1AFE10u;
label_1afe10:
    // 0x1afe10: 0xc0743b8  jal         func_1D0EE0
    ctx->pc = 0x1AFE10u;
    SET_GPR_U32(ctx, 31, 0x1AFE18u);
    ctx->pc = 0x1AFE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE10u;
    // 0x1afe14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D0EE0u, 0x1AFE10u, 0x1AFE18u)) {
        return;
    }
    ctx->pc = 0x1AFE18u;
label_1afe18:
    // 0x1afe18: 0xc074414  jal         func_1D1050
    ctx->pc = 0x1AFE18u;
    SET_GPR_U32(ctx, 31, 0x1AFE20u);
    ctx->pc = 0x1AFE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE18u;
    // 0x1afe1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1050u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D1050u, 0x1AFE18u, 0x1AFE20u)) {
        return;
    }
    ctx->pc = 0x1AFE20u;
label_1afe20:
    // 0x1afe20: 0xc073e72  jal         func_1CF9C8
    ctx->pc = 0x1AFE20u;
    SET_GPR_U32(ctx, 31, 0x1AFE28u);
    ctx->pc = 0x1AFE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE20u;
    // 0x1afe24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF9C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CF9C8u, 0x1AFE20u, 0x1AFE28u)) {
        return;
    }
    ctx->pc = 0x1AFE28u;
label_1afe28:
    // 0x1afe28: 0xc0740f8  jal         func_1D03E0
    ctx->pc = 0x1AFE28u;
    SET_GPR_U32(ctx, 31, 0x1AFE30u);
    ctx->pc = 0x1AFE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE28u;
    // 0x1afe2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D03E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D03E0u, 0x1AFE28u, 0x1AFE30u)) {
        return;
    }
    ctx->pc = 0x1AFE30u;
label_1afe30:
    // 0x1afe30: 0xc073ea4  jal         func_1CFA90
    ctx->pc = 0x1AFE30u;
    SET_GPR_U32(ctx, 31, 0x1AFE38u);
    ctx->pc = 0x1AFE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE30u;
    // 0x1afe34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CFA90u, 0x1AFE30u, 0x1AFE38u)) {
        return;
    }
    ctx->pc = 0x1AFE38u;
label_1afe38:
    // 0x1afe38: 0xc074316  jal         func_1D0C58
    ctx->pc = 0x1AFE38u;
    SET_GPR_U32(ctx, 31, 0x1AFE40u);
    ctx->pc = 0x1AFE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE38u;
    // 0x1afe3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D0C58u, 0x1AFE38u, 0x1AFE40u)) {
        return;
    }
    ctx->pc = 0x1AFE40u;
label_1afe40:
    // 0x1afe40: 0xc074312  jal         func_1D0C48
    ctx->pc = 0x1AFE40u;
    SET_GPR_U32(ctx, 31, 0x1AFE48u);
    ctx->pc = 0x1AFE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE40u;
    // 0x1afe44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D0C48u, 0x1AFE40u, 0x1AFE48u)) {
        return;
    }
    ctx->pc = 0x1AFE48u;
label_1afe48:
    // 0x1afe48: 0xc074314  jal         func_1D0C50
    ctx->pc = 0x1AFE48u;
    SET_GPR_U32(ctx, 31, 0x1AFE50u);
    ctx->pc = 0x1AFE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE48u;
    // 0x1afe4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D0C50u, 0x1AFE48u, 0x1AFE50u)) {
        return;
    }
    ctx->pc = 0x1AFE50u;
label_1afe50:
    // 0x1afe50: 0xc07415a  jal         func_1D0568
    ctx->pc = 0x1AFE50u;
    SET_GPR_U32(ctx, 31, 0x1AFE58u);
    ctx->pc = 0x1AFE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE50u;
    // 0x1afe54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0568u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D0568u, 0x1AFE50u, 0x1AFE58u)) {
        return;
    }
    ctx->pc = 0x1AFE58u;
label_1afe58:
    // 0x1afe58: 0xc074186  jal         func_1D0618
    ctx->pc = 0x1AFE58u;
    SET_GPR_U32(ctx, 31, 0x1AFE60u);
    ctx->pc = 0x1AFE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE58u;
    // 0x1afe5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0618u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D0618u, 0x1AFE58u, 0x1AFE60u)) {
        return;
    }
    ctx->pc = 0x1AFE60u;
label_1afe60:
    // 0x1afe60: 0xc0741b2  jal         func_1D06C8
    ctx->pc = 0x1AFE60u;
    SET_GPR_U32(ctx, 31, 0x1AFE68u);
    ctx->pc = 0x1AFE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE60u;
    // 0x1afe64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D06C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D06C8u, 0x1AFE60u, 0x1AFE68u)) {
        return;
    }
    ctx->pc = 0x1AFE68u;
label_1afe68:
    // 0x1afe68: 0xc0741de  jal         func_1D0778
    ctx->pc = 0x1AFE68u;
    SET_GPR_U32(ctx, 31, 0x1AFE70u);
    ctx->pc = 0x1AFE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE68u;
    // 0x1afe6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0778u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D0778u, 0x1AFE68u, 0x1AFE70u)) {
        return;
    }
    ctx->pc = 0x1AFE70u;
label_1afe70:
    // 0x1afe70: 0xc07420a  jal         func_1D0828
    ctx->pc = 0x1AFE70u;
    SET_GPR_U32(ctx, 31, 0x1AFE78u);
    ctx->pc = 0x1AFE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE70u;
    // 0x1afe74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0828u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D0828u, 0x1AFE70u, 0x1AFE78u)) {
        return;
    }
    ctx->pc = 0x1AFE78u;
label_1afe78:
    // 0x1afe78: 0xc074236  jal         func_1D08D8
    ctx->pc = 0x1AFE78u;
    SET_GPR_U32(ctx, 31, 0x1AFE80u);
    ctx->pc = 0x1AFE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE78u;
    // 0x1afe7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D08D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D08D8u, 0x1AFE78u, 0x1AFE80u)) {
        return;
    }
    ctx->pc = 0x1AFE80u;
label_1afe80:
    // 0x1afe80: 0xc074262  jal         func_1D0988
    ctx->pc = 0x1AFE80u;
    SET_GPR_U32(ctx, 31, 0x1AFE88u);
    ctx->pc = 0x1AFE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE80u;
    // 0x1afe84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0988u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D0988u, 0x1AFE80u, 0x1AFE88u)) {
        return;
    }
    ctx->pc = 0x1AFE88u;
label_1afe88:
    // 0x1afe88: 0xc07428e  jal         func_1D0A38
    ctx->pc = 0x1AFE88u;
    SET_GPR_U32(ctx, 31, 0x1AFE90u);
    ctx->pc = 0x1AFE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE88u;
    // 0x1afe8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0A38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D0A38u, 0x1AFE88u, 0x1AFE90u)) {
        return;
    }
    ctx->pc = 0x1AFE90u;
label_1afe90:
    // 0x1afe90: 0xc0742ba  jal         func_1D0AE8
    ctx->pc = 0x1AFE90u;
    SET_GPR_U32(ctx, 31, 0x1AFE98u);
    ctx->pc = 0x1AFE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE90u;
    // 0x1afe94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0AE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D0AE8u, 0x1AFE90u, 0x1AFE98u)) {
        return;
    }
    ctx->pc = 0x1AFE98u;
label_1afe98:
    // 0x1afe98: 0xc0742e6  jal         func_1D0B98
    ctx->pc = 0x1AFE98u;
    SET_GPR_U32(ctx, 31, 0x1AFEA0u);
    ctx->pc = 0x1AFE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFE98u;
    // 0x1afe9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D0B98u, 0x1AFE98u, 0x1AFEA0u)) {
        return;
    }
    ctx->pc = 0x1AFEA0u;
label_1afea0:
    // 0x1afea0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1afea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1afea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1afea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1afea8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1afea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1afeac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1afeacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1afeb0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1afeb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1afeb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1afeb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFEB8u;
        // 0x1afebc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFEC0u;
}
