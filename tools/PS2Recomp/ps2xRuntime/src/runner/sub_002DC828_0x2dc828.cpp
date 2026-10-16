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

// Function: sub_002DC828
// Address: 0x2dc828 - 0x2dce48
void sub_002DC828_0x2dc828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC828_0x2dc828");
#endif

    switch (ctx->pc) {
        case 0x2dc888u: goto label_2dc888;
        case 0x2dc8c0u: goto label_2dc8c0;
        case 0x2dc8d8u: goto label_2dc8d8;
        case 0x2dc900u: goto label_2dc900;
        case 0x2dc910u: goto label_2dc910;
        case 0x2dc920u: goto label_2dc920;
        case 0x2dc938u: goto label_2dc938;
        case 0x2dc978u: goto label_2dc978;
        case 0x2dc98cu: goto label_2dc98c;
        case 0x2dc990u: goto label_2dc990;
        case 0x2dc9a0u: goto label_2dc9a0;
        case 0x2dc9bcu: goto label_2dc9bc;
        case 0x2dc9d0u: goto label_2dc9d0;
        case 0x2dc9e8u: goto label_2dc9e8;
        case 0x2dca38u: goto label_2dca38;
        case 0x2dca4cu: goto label_2dca4c;
        case 0x2dca50u: goto label_2dca50;
        case 0x2dca60u: goto label_2dca60;
        case 0x2dca7cu: goto label_2dca7c;
        case 0x2dca90u: goto label_2dca90;
        case 0x2dcaa8u: goto label_2dcaa8;
        case 0x2dcad0u: goto label_2dcad0;
        case 0x2dcb10u: goto label_2dcb10;
        case 0x2dcb24u: goto label_2dcb24;
        case 0x2dcb28u: goto label_2dcb28;
        case 0x2dcb38u: goto label_2dcb38;
        case 0x2dcb54u: goto label_2dcb54;
        case 0x2dcb68u: goto label_2dcb68;
        case 0x2dcb80u: goto label_2dcb80;
        case 0x2dcb9cu: goto label_2dcb9c;
        case 0x2dcbb8u: goto label_2dcbb8;
        case 0x2dcbf8u: goto label_2dcbf8;
        case 0x2dcc0cu: goto label_2dcc0c;
        case 0x2dcc10u: goto label_2dcc10;
        case 0x2dcc20u: goto label_2dcc20;
        case 0x2dcc3cu: goto label_2dcc3c;
        case 0x2dcc50u: goto label_2dcc50;
        case 0x2dcc68u: goto label_2dcc68;
        case 0x2dcc98u: goto label_2dcc98;
        case 0x2dccacu: goto label_2dccac;
        case 0x2dccc8u: goto label_2dccc8;
        case 0x2dccf0u: goto label_2dccf0;
        case 0x2dccfcu: goto label_2dccfc;
        case 0x2dcd04u: goto label_2dcd04;
        case 0x2dcd48u: goto label_2dcd48;
        case 0x2dcd5cu: goto label_2dcd5c;
        case 0x2dcd60u: goto label_2dcd60;
        case 0x2dcd70u: goto label_2dcd70;
        case 0x2dcd8cu: goto label_2dcd8c;
        case 0x2dcda0u: goto label_2dcda0;
        case 0x2dcdb8u: goto label_2dcdb8;
        case 0x2dcdd8u: goto label_2dcdd8;
        case 0x2dce08u: goto label_2dce08;
        default: break;
    }

    ctx->pc = 0x2dc828u;

    // 0x2dc828: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2dc828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2dc82c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2dc82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2dc830: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x2dc830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x2dc834: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x2dc834u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc838: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x2dc838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x2dc83c: 0x169103  sra         $s2, $s6, 4
    ctx->pc = 0x2dc83cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 22), 4));
    // 0x2dc840: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x2dc840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x2dc844: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2dc844u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc848: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2dc848u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc84c: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x2dc84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x2dc850: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x2dc850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x2dc854: 0x32520001  andi        $s2, $s2, 0x1
    ctx->pc = 0x2dc854u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x2dc858: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x2dc858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x2dc85c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2dc85cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc860: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x2dc860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x2dc864: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2dc864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc868: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2dc868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x2dc86c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2dc86cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc870: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x2dc870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x2dc874: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2dc874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc878: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2dc878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2dc87c: 0xafa70028  sw          $a3, 0x28($sp)
    ctx->pc = 0x2dc87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 7));
    // 0x2dc880: 0xc0b85e6  jal         func_2E1798
    ctx->pc = 0x2DC880u;
    SET_GPR_U32(ctx, 31, 0x2DC888u);
    ctx->pc = 0x2DC884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC880u;
    // 0x2dc884: 0xafa8002c  sw          $t0, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1798u, 0x2DC880u, 0x2DC888u)) {
        return;
    }
    ctx->pc = 0x2DC888u;
label_2dc888:
    // 0x2dc888: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2DC888u;
    {
        const bool branch_taken_0x2dc888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC888u;
        // 0x2dc88c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc888) {
            ctx->pc = 0x2DC910u;
            goto label_2dc910;
        }
    }
    ctx->pc = 0x2DC890u;
    // 0x2dc890: 0x2402080a  addiu       $v0, $zero, 0x80A
    ctx->pc = 0x2dc890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2058));
    // 0x2dc894: 0x14620160  bne         $v1, $v0, . + 4 + (0x160 << 2)
    ctx->pc = 0x2DC894u;
    {
        const bool branch_taken_0x2dc894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DC898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC894u;
        // 0x2dc898: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc894) {
            ctx->pc = 0x2DCE18u;
            goto label_2dce18;
        }
    }
    ctx->pc = 0x2DC89Cu;
    // 0x2dc89c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2dc89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dc8a0: 0x1040015d  beqz        $v0, . + 4 + (0x15D << 2)
    ctx->pc = 0x2DC8A0u;
    {
        const bool branch_taken_0x2dc8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC8A0u;
        // 0x2dc8a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc8a0) {
            ctx->pc = 0x2DCE18u;
            goto label_2dce18;
        }
    }
    ctx->pc = 0x2DC8A8u;
    // 0x2dc8a8: 0x5660001b  bnel        $s3, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2DC8A8u;
    {
        const bool branch_taken_0x2dc8a8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc8a8) {
            ctx->pc = 0x2DC8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC8A8u;
            // 0x2dc8ac: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC918u;
            goto label_2dc918;
        }
    }
    ctx->pc = 0x2DC8B0u;
    // 0x2dc8b0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2dc8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2dc8b4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2dc8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2dc8b8: 0xc0b7076  jal         func_2DC1D8
    ctx->pc = 0x2DC8B8u;
    SET_GPR_U32(ctx, 31, 0x2DC8C0u);
    ctx->pc = 0x2DC8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC8B8u;
    // 0x2dc8bc: 0x34a50808  ori         $a1, $a1, 0x808 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2056);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC1D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC1D8u, 0x2DC8B8u, 0x2DC8C0u)) {
        return;
    }
    ctx->pc = 0x2DC8C0u;
label_2dc8c0:
    // 0x2dc8c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2dc8c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc8c4: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x2DC8C4u;
    {
        const bool branch_taken_0x2dc8c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC8C4u;
        // 0x2dc8c8: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc8c4) {
            ctx->pc = 0x2DC910u;
            goto label_2dc910;
        }
    }
    ctx->pc = 0x2DC8CCu;
    // 0x2dc8cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2dc8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc8d0: 0xc093546  jal         func_24D518
    ctx->pc = 0x2DC8D0u;
    SET_GPR_U32(ctx, 31, 0x2DC8D8u);
    ctx->pc = 0x2DC8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC8D0u;
    // 0x2dc8d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x2DC8D0u, 0x2DC8D8u)) {
        return;
    }
    ctx->pc = 0x2DC8D8u;
label_2dc8d8:
    // 0x2dc8d8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2dc8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2dc8dc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2DC8DCu;
    {
        const bool branch_taken_0x2dc8dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DC8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC8DCu;
        // 0x2dc8e0: 0x36c30010  ori         $v1, $s6, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc8dc) {
            ctx->pc = 0x2DC908u;
            goto label_2dc908;
        }
    }
    ctx->pc = 0x2DC8E4u;
    // 0x2dc8e4: 0x9262001b  lbu         $v0, 0x1B($s3)
    ctx->pc = 0x2dc8e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 27)));
    // 0x2dc8e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dc8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc8ec: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x2dc8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x2dc8f0: 0x30520001  andi        $s2, $v0, 0x1
    ctx->pc = 0x2dc8f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2dc8f4: 0x72b00b  movn        $s6, $v1, $s2
    ctx->pc = 0x2dc8f4u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3));
    // 0x2dc8f8: 0xc0b74d6  jal         func_2DD358
    ctx->pc = 0x2DC8F8u;
    SET_GPR_U32(ctx, 31, 0x2DC900u);
    ctx->pc = 0x2DC8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC8F8u;
    // 0x2dc8fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DD358u, 0x2DC8F8u, 0x2DC900u)) {
        return;
    }
    ctx->pc = 0x2DC900u;
label_2dc900:
    // 0x2dc900: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DC900u;
    {
        const bool branch_taken_0x2dc900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC900u;
        // 0x2dc904: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc900) {
            ctx->pc = 0x2DC928u;
            goto label_2dc928;
        }
    }
    ctx->pc = 0x2DC908u;
label_2dc908:
    // 0x2dc908: 0xc0b7080  jal         func_2DC200
    ctx->pc = 0x2DC908u;
    SET_GPR_U32(ctx, 31, 0x2DC910u);
    ctx->pc = 0x2DC90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC908u;
    // 0x2dc90c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2DC908u, 0x2DC910u)) {
        return;
    }
    ctx->pc = 0x2DC910u;
label_2dc910:
    // 0x2dc910: 0x10000141  b           . + 4 + (0x141 << 2)
    ctx->pc = 0x2DC910u;
    {
        const bool branch_taken_0x2dc910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC910u;
        // 0x2dc914: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc910) {
            ctx->pc = 0x2DCE18u;
            goto label_2dce18;
        }
    }
    ctx->pc = 0x2DC918u;
label_2dc918:
    // 0x2dc918: 0xc093620  jal         func_24D880
    ctx->pc = 0x2DC918u;
    SET_GPR_U32(ctx, 31, 0x2DC920u);
    ctx->pc = 0x2DC91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC918u;
    // 0x2dc91c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D880u, 0x2DC918u, 0x2DC920u)) {
        return;
    }
    ctx->pc = 0x2DC920u;
label_2dc920:
    // 0x2dc920: 0x1040013d  beqz        $v0, . + 4 + (0x13D << 2)
    ctx->pc = 0x2DC920u;
    {
        const bool branch_taken_0x2dc920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC920u;
        // 0x2dc924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc920) {
            ctx->pc = 0x2DCE18u;
            goto label_2dce18;
        }
    }
    ctx->pc = 0x2DC928u;
label_2dc928:
    // 0x2dc928: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2dc928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc92c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2dc92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc930: 0xc0b85e6  jal         func_2E1798
    ctx->pc = 0x2DC930u;
    SET_GPR_U32(ctx, 31, 0x2DC938u);
    ctx->pc = 0x2DC934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC930u;
    // 0x2dc934: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1798u, 0x2DC930u, 0x2DC938u)) {
        return;
    }
    ctx->pc = 0x2DC938u;
label_2dc938:
    // 0x2dc938: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2DC938u;
    {
        const bool branch_taken_0x2dc938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC938u;
        // 0x2dc93c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc938) {
            ctx->pc = 0x2DC9F0u;
            goto label_2dc9f0;
        }
    }
    ctx->pc = 0x2DC940u;
    // 0x2dc940: 0x13c0fff3  beqz        $fp, . + 4 + (-0xD << 2)
    ctx->pc = 0x2DC940u;
    {
        const bool branch_taken_0x2dc940 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC940u;
        // 0x2dc944: 0x2675000c  addiu       $s5, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc940) {
            ctx->pc = 0x2DC910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc910;
        }
    }
    ctx->pc = 0x2DC948u;
    // 0x2dc948: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x2dc948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2dc94c: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x2dc94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2dc950: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2dc950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2dc954: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x2dc954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2dc958: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2dc958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2dc95c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2dc95cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2dc960: 0x8e720010  lw          $s2, 0x10($s3)
    ctx->pc = 0x2dc960u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2dc964: 0x12550018  beq         $s2, $s5, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DC964u;
    {
        const bool branch_taken_0x2dc964 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        ctx->pc = 0x2DC968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC964u;
        // 0x2dc968: 0x2a0b82d  daddu       $s7, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc964) {
            ctx->pc = 0x2DC9C8u;
            goto label_2dc9c8;
        }
    }
    ctx->pc = 0x2DC96Cu;
    // 0x2dc96c: 0x27969020  addiu       $s6, $gp, -0x6FE0
    ctx->pc = 0x2dc96cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938656));
    // 0x2dc970: 0x8f909020  lw          $s0, -0x6FE0($gp)
    ctx->pc = 0x2dc970u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x2dc974: 0x0  nop
    ctx->pc = 0x2dc974u;
    // NOP
label_2dc978:
    // 0x2dc978: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2dc978u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc97c: 0x16160004  bne         $s0, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DC97Cu;
    {
        const bool branch_taken_0x2dc97c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x2DC980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC97Cu;
        // 0x2dc980: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc97c) {
            ctx->pc = 0x2DC990u;
            goto label_2dc990;
        }
    }
    ctx->pc = 0x2DC984u;
    // 0x2dc984: 0xc0b7c4e  jal         func_2DF138
    ctx->pc = 0x2DC984u;
    SET_GPR_U32(ctx, 31, 0x2DC98Cu);
    ctx->pc = 0x2DC988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC984u;
    // 0x2dc988: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF138u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF138u, 0x2DC984u, 0x2DC98Cu)) {
        return;
    }
    ctx->pc = 0x2DC98Cu;
label_2dc98c:
    // 0x2dc98c: 0x0  nop
    ctx->pc = 0x2dc98cu;
    // NOP
label_2dc990:
    // 0x2dc990: 0x12160006  beq         $s0, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DC990u;
    {
        const bool branch_taken_0x2dc990 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x2DC994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC990u;
        // 0x2dc994: 0x2604ffe4  addiu       $a0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc990) {
            ctx->pc = 0x2DC9ACu;
            goto label_2dc9ac;
        }
    }
    ctx->pc = 0x2DC998u;
    // 0x2dc998: 0xc0b746c  jal         func_2DD1B0
    ctx->pc = 0x2DC998u;
    SET_GPR_U32(ctx, 31, 0x2DC9A0u);
    ctx->pc = 0x2DC99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC998u;
    // 0x2dc99c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD1B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DD1B0u, 0x2DC998u, 0x2DC9A0u)) {
        return;
    }
    ctx->pc = 0x2DC9A0u;
label_2dc9a0:
    // 0x2dc9a0: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2DC9A0u;
    {
        const bool branch_taken_0x2dc9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc9a0) {
            ctx->pc = 0x2DC9A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC9A0u;
            // 0x2dc9a4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc990;
        }
    }
    ctx->pc = 0x2DC9A8u;
    // 0x2dc9a8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2dc9a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dc9ac:
    // 0x2dc9ac: 0x56800004  bnel        $s4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DC9ACu;
    {
        const bool branch_taken_0x2dc9ac = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc9ac) {
            ctx->pc = 0x2DC9B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC9ACu;
            // 0x2dc9b0: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC9C0u;
            goto label_2dc9c0;
        }
    }
    ctx->pc = 0x2DC9B4u;
    // 0x2dc9b4: 0xc0b7c4e  jal         func_2DF138
    ctx->pc = 0x2DC9B4u;
    SET_GPR_U32(ctx, 31, 0x2DC9BCu);
    ctx->pc = 0x2DC9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC9B4u;
    // 0x2dc9b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF138u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF138u, 0x2DC9B4u, 0x2DC9BCu)) {
        return;
    }
    ctx->pc = 0x2DC9BCu;
label_2dc9bc:
    // 0x2dc9bc: 0x8e520004  lw          $s2, 0x4($s2)
    ctx->pc = 0x2dc9bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2dc9c0:
    // 0x2dc9c0: 0x1657ffed  bne         $s2, $s7, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2DC9C0u;
    {
        const bool branch_taken_0x2dc9c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 23));
        ctx->pc = 0x2DC9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC9C0u;
        // 0x2dc9c4: 0x8f909020  lw          $s0, -0x6FE0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc9c0) {
            ctx->pc = 0x2DC978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc978;
        }
    }
    ctx->pc = 0x2DC9C8u;
label_2dc9c8:
    // 0x2dc9c8: 0xc0b8370  jal         func_2E0DC0
    ctx->pc = 0x2DC9C8u;
    SET_GPR_U32(ctx, 31, 0x2DC9D0u);
    ctx->pc = 0x2DC9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC9C8u;
    // 0x2dc9cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0DC0u, 0x2DC9C8u, 0x2DC9D0u)) {
        return;
    }
    ctx->pc = 0x2DC9D0u;
label_2dc9d0:
    // 0x2dc9d0: 0x8f828be4  lw          $v0, -0x741C($gp)
    ctx->pc = 0x2dc9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937572)));
    // 0x2dc9d4: 0x16620002  bne         $s3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DC9D4u;
    {
        const bool branch_taken_0x2dc9d4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DC9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC9D4u;
        // 0x2dc9d8: 0x8f828be0  lw          $v0, -0x7420($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc9d4) {
            ctx->pc = 0x2DC9E0u;
            goto label_2dc9e0;
        }
    }
    ctx->pc = 0x2DC9DCu;
    // 0x2dc9dc: 0xaf828be4  sw          $v0, -0x741C($gp)
    ctx->pc = 0x2dc9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937572), GPR_U32(ctx, 2));
label_2dc9e0:
    // 0x2dc9e0: 0xc0b7506  jal         func_2DD418
    ctx->pc = 0x2DC9E0u;
    SET_GPR_U32(ctx, 31, 0x2DC9E8u);
    ctx->pc = 0x2DC9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC9E0u;
    // 0x2dc9e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DD418u, 0x2DC9E0u, 0x2DC9E8u)) {
        return;
    }
    ctx->pc = 0x2DC9E8u;
label_2dc9e8:
    // 0x2dc9e8: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x2DC9E8u;
    {
        const bool branch_taken_0x2dc9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC9E8u;
        // 0x2dc9ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc9e8) {
            ctx->pc = 0x2DCE18u;
            goto label_2dce18;
        }
    }
    ctx->pc = 0x2DC9F0u;
label_2dc9f0:
    // 0x2dc9f0: 0x2402080c  addiu       $v0, $zero, 0x80C
    ctx->pc = 0x2dc9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x2dc9f4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DC9F4u;
    {
        const bool branch_taken_0x2dc9f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DC9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC9F4u;
        // 0x2dc9f8: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc9f4) {
            ctx->pc = 0x2DCA04u;
            goto label_2dca04;
        }
    }
    ctx->pc = 0x2DC9FCu;
    // 0x2dc9fc: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2DC9FCu;
    {
        const bool branch_taken_0x2dc9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DCA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC9FCu;
        // 0x2dca00: 0x8f828be4  lw          $v0, -0x741C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937572)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc9fc) {
            ctx->pc = 0x2DCAB0u;
            goto label_2dcab0;
        }
    }
    ctx->pc = 0x2DCA04u;
label_2dca04:
    // 0x2dca04: 0x13c0ffc2  beqz        $fp, . + 4 + (-0x3E << 2)
    ctx->pc = 0x2DCA04u;
    {
        const bool branch_taken_0x2dca04 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCA04u;
        // 0x2dca08: 0x2675000c  addiu       $s5, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dca04) {
            ctx->pc = 0x2DC910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc910;
        }
    }
    ctx->pc = 0x2DCA0Cu;
    // 0x2dca0c: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x2dca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2dca10: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x2dca10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2dca14: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2dca14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2dca18: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x2dca18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2dca1c: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2dca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2dca20: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2dca20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2dca24: 0x8e720010  lw          $s2, 0x10($s3)
    ctx->pc = 0x2dca24u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2dca28: 0x12550017  beq         $s2, $s5, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DCA28u;
    {
        const bool branch_taken_0x2dca28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        ctx->pc = 0x2DCA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCA28u;
        // 0x2dca2c: 0x2a0b82d  daddu       $s7, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dca28) {
            ctx->pc = 0x2DCA88u;
            goto label_2dca88;
        }
    }
    ctx->pc = 0x2DCA30u;
    // 0x2dca30: 0x27969020  addiu       $s6, $gp, -0x6FE0
    ctx->pc = 0x2dca30u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938656));
    // 0x2dca34: 0x8f909020  lw          $s0, -0x6FE0($gp)
    ctx->pc = 0x2dca34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
label_2dca38:
    // 0x2dca38: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2dca38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dca3c: 0x16160004  bne         $s0, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DCA3Cu;
    {
        const bool branch_taken_0x2dca3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x2DCA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCA3Cu;
        // 0x2dca40: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dca3c) {
            ctx->pc = 0x2DCA50u;
            goto label_2dca50;
        }
    }
    ctx->pc = 0x2DCA44u;
    // 0x2dca44: 0xc0b7c4e  jal         func_2DF138
    ctx->pc = 0x2DCA44u;
    SET_GPR_U32(ctx, 31, 0x2DCA4Cu);
    ctx->pc = 0x2DCA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCA44u;
    // 0x2dca48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF138u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF138u, 0x2DCA44u, 0x2DCA4Cu)) {
        return;
    }
    ctx->pc = 0x2DCA4Cu;
label_2dca4c:
    // 0x2dca4c: 0x0  nop
    ctx->pc = 0x2dca4cu;
    // NOP
label_2dca50:
    // 0x2dca50: 0x12160006  beq         $s0, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DCA50u;
    {
        const bool branch_taken_0x2dca50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x2DCA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCA50u;
        // 0x2dca54: 0x2604ffe4  addiu       $a0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dca50) {
            ctx->pc = 0x2DCA6Cu;
            goto label_2dca6c;
        }
    }
    ctx->pc = 0x2DCA58u;
    // 0x2dca58: 0xc0b746c  jal         func_2DD1B0
    ctx->pc = 0x2DCA58u;
    SET_GPR_U32(ctx, 31, 0x2DCA60u);
    ctx->pc = 0x2DCA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCA58u;
    // 0x2dca5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD1B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DD1B0u, 0x2DCA58u, 0x2DCA60u)) {
        return;
    }
    ctx->pc = 0x2DCA60u;
label_2dca60:
    // 0x2dca60: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2DCA60u;
    {
        const bool branch_taken_0x2dca60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dca60) {
            ctx->pc = 0x2DCA64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCA60u;
            // 0x2dca64: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCA50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dca50;
        }
    }
    ctx->pc = 0x2DCA68u;
    // 0x2dca68: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2dca68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dca6c:
    // 0x2dca6c: 0x56800004  bnel        $s4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DCA6Cu;
    {
        const bool branch_taken_0x2dca6c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dca6c) {
            ctx->pc = 0x2DCA70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCA6Cu;
            // 0x2dca70: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCA80u;
            goto label_2dca80;
        }
    }
    ctx->pc = 0x2DCA74u;
    // 0x2dca74: 0xc0b7c4e  jal         func_2DF138
    ctx->pc = 0x2DCA74u;
    SET_GPR_U32(ctx, 31, 0x2DCA7Cu);
    ctx->pc = 0x2DCA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCA74u;
    // 0x2dca78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF138u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF138u, 0x2DCA74u, 0x2DCA7Cu)) {
        return;
    }
    ctx->pc = 0x2DCA7Cu;
label_2dca7c:
    // 0x2dca7c: 0x8e520004  lw          $s2, 0x4($s2)
    ctx->pc = 0x2dca7cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2dca80:
    // 0x2dca80: 0x1657ffed  bne         $s2, $s7, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2DCA80u;
    {
        const bool branch_taken_0x2dca80 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 23));
        ctx->pc = 0x2DCA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCA80u;
        // 0x2dca84: 0x8f909020  lw          $s0, -0x6FE0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dca80) {
            ctx->pc = 0x2DCA38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dca38;
        }
    }
    ctx->pc = 0x2DCA88u;
label_2dca88:
    // 0x2dca88: 0xc0b8370  jal         func_2E0DC0
    ctx->pc = 0x2DCA88u;
    SET_GPR_U32(ctx, 31, 0x2DCA90u);
    ctx->pc = 0x2DCA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCA88u;
    // 0x2dca8c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0DC0u, 0x2DCA88u, 0x2DCA90u)) {
        return;
    }
    ctx->pc = 0x2DCA90u;
label_2dca90:
    // 0x2dca90: 0x8f828be4  lw          $v0, -0x741C($gp)
    ctx->pc = 0x2dca90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937572)));
    // 0x2dca94: 0x16620002  bne         $s3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DCA94u;
    {
        const bool branch_taken_0x2dca94 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DCA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCA94u;
        // 0x2dca98: 0x8f828be0  lw          $v0, -0x7420($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dca94) {
            ctx->pc = 0x2DCAA0u;
            goto label_2dcaa0;
        }
    }
    ctx->pc = 0x2DCA9Cu;
    // 0x2dca9c: 0xaf828be4  sw          $v0, -0x741C($gp)
    ctx->pc = 0x2dca9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937572), GPR_U32(ctx, 2));
label_2dcaa0:
    // 0x2dcaa0: 0xc0b7506  jal         func_2DD418
    ctx->pc = 0x2DCAA0u;
    SET_GPR_U32(ctx, 31, 0x2DCAA8u);
    ctx->pc = 0x2DCAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCAA0u;
    // 0x2dcaa4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DD418u, 0x2DCAA0u, 0x2DCAA8u)) {
        return;
    }
    ctx->pc = 0x2DCAA8u;
label_2dcaa8:
    // 0x2dcaa8: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x2DCAA8u;
    {
        const bool branch_taken_0x2dcaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCAA8u;
        // 0x2dcaac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcaa8) {
            ctx->pc = 0x2DCE18u;
            goto label_2dce18;
        }
    }
    ctx->pc = 0x2DCAB0u;
label_2dcab0:
    // 0x2dcab0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2dcab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2dcab4: 0xaf938be4  sw          $s3, -0x741C($gp)
    ctx->pc = 0x2dcab4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937572), GPR_U32(ctx, 19));
    // 0x2dcab8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2dcab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcabc: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2dcabcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x2dcac0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dcac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcac4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2dcac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dcac8: 0xc093546  jal         func_24D518
    ctx->pc = 0x2DCAC8u;
    SET_GPR_U32(ctx, 31, 0x2DCAD0u);
    ctx->pc = 0x2DCACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCAC8u;
    // 0x2dcacc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x2DCAC8u, 0x2DCAD0u)) {
        return;
    }
    ctx->pc = 0x2DCAD0u;
label_2dcad0:
    // 0x2dcad0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2dcad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dcad4: 0x1043002d  beq         $v0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2DCAD4u;
    {
        const bool branch_taken_0x2dcad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2DCAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCAD4u;
        // 0x2dcad8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcad4) {
            ctx->pc = 0x2DCB8Cu;
            goto label_2dcb8c;
        }
    }
    ctx->pc = 0x2DCADCu;
    // 0x2dcadc: 0x13c0ff8c  beqz        $fp, . + 4 + (-0x74 << 2)
    ctx->pc = 0x2DCADCu;
    {
        const bool branch_taken_0x2dcadc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCADCu;
        // 0x2dcae0: 0x2675000c  addiu       $s5, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcadc) {
            ctx->pc = 0x2DC910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc910;
        }
    }
    ctx->pc = 0x2DCAE4u;
    // 0x2dcae4: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x2dcae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2dcae8: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x2dcae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2dcaec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2dcaecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2dcaf0: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x2dcaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2dcaf4: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2dcaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2dcaf8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2dcaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2dcafc: 0x8e720010  lw          $s2, 0x10($s3)
    ctx->pc = 0x2dcafcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2dcb00: 0x12550017  beq         $s2, $s5, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DCB00u;
    {
        const bool branch_taken_0x2dcb00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        ctx->pc = 0x2DCB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB00u;
        // 0x2dcb04: 0x2a0b82d  daddu       $s7, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcb00) {
            ctx->pc = 0x2DCB60u;
            goto label_2dcb60;
        }
    }
    ctx->pc = 0x2DCB08u;
    // 0x2dcb08: 0x27969020  addiu       $s6, $gp, -0x6FE0
    ctx->pc = 0x2dcb08u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938656));
    // 0x2dcb0c: 0x8f909020  lw          $s0, -0x6FE0($gp)
    ctx->pc = 0x2dcb0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
label_2dcb10:
    // 0x2dcb10: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2dcb10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcb14: 0x16160004  bne         $s0, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DCB14u;
    {
        const bool branch_taken_0x2dcb14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x2DCB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB14u;
        // 0x2dcb18: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcb14) {
            ctx->pc = 0x2DCB28u;
            goto label_2dcb28;
        }
    }
    ctx->pc = 0x2DCB1Cu;
    // 0x2dcb1c: 0xc0b7c4e  jal         func_2DF138
    ctx->pc = 0x2DCB1Cu;
    SET_GPR_U32(ctx, 31, 0x2DCB24u);
    ctx->pc = 0x2DCB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCB1Cu;
    // 0x2dcb20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF138u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF138u, 0x2DCB1Cu, 0x2DCB24u)) {
        return;
    }
    ctx->pc = 0x2DCB24u;
label_2dcb24:
    // 0x2dcb24: 0x0  nop
    ctx->pc = 0x2dcb24u;
    // NOP
label_2dcb28:
    // 0x2dcb28: 0x12160006  beq         $s0, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DCB28u;
    {
        const bool branch_taken_0x2dcb28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x2DCB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB28u;
        // 0x2dcb2c: 0x2604ffe4  addiu       $a0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcb28) {
            ctx->pc = 0x2DCB44u;
            goto label_2dcb44;
        }
    }
    ctx->pc = 0x2DCB30u;
    // 0x2dcb30: 0xc0b746c  jal         func_2DD1B0
    ctx->pc = 0x2DCB30u;
    SET_GPR_U32(ctx, 31, 0x2DCB38u);
    ctx->pc = 0x2DCB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCB30u;
    // 0x2dcb34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD1B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DD1B0u, 0x2DCB30u, 0x2DCB38u)) {
        return;
    }
    ctx->pc = 0x2DCB38u;
label_2dcb38:
    // 0x2dcb38: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2DCB38u;
    {
        const bool branch_taken_0x2dcb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcb38) {
            ctx->pc = 0x2DCB3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCB38u;
            // 0x2dcb3c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCB28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dcb28;
        }
    }
    ctx->pc = 0x2DCB40u;
    // 0x2dcb40: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2dcb40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dcb44:
    // 0x2dcb44: 0x56800004  bnel        $s4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DCB44u;
    {
        const bool branch_taken_0x2dcb44 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dcb44) {
            ctx->pc = 0x2DCB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCB44u;
            // 0x2dcb48: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCB58u;
            goto label_2dcb58;
        }
    }
    ctx->pc = 0x2DCB4Cu;
    // 0x2dcb4c: 0xc0b7c4e  jal         func_2DF138
    ctx->pc = 0x2DCB4Cu;
    SET_GPR_U32(ctx, 31, 0x2DCB54u);
    ctx->pc = 0x2DCB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCB4Cu;
    // 0x2dcb50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF138u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF138u, 0x2DCB4Cu, 0x2DCB54u)) {
        return;
    }
    ctx->pc = 0x2DCB54u;
label_2dcb54:
    // 0x2dcb54: 0x8e520004  lw          $s2, 0x4($s2)
    ctx->pc = 0x2dcb54u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2dcb58:
    // 0x2dcb58: 0x1657ffed  bne         $s2, $s7, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2DCB58u;
    {
        const bool branch_taken_0x2dcb58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 23));
        ctx->pc = 0x2DCB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB58u;
        // 0x2dcb5c: 0x8f909020  lw          $s0, -0x6FE0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcb58) {
            ctx->pc = 0x2DCB10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dcb10;
        }
    }
    ctx->pc = 0x2DCB60u;
label_2dcb60:
    // 0x2dcb60: 0xc0b8370  jal         func_2E0DC0
    ctx->pc = 0x2DCB60u;
    SET_GPR_U32(ctx, 31, 0x2DCB68u);
    ctx->pc = 0x2DCB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCB60u;
    // 0x2dcb64: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0DC0u, 0x2DCB60u, 0x2DCB68u)) {
        return;
    }
    ctx->pc = 0x2DCB68u;
label_2dcb68:
    // 0x2dcb68: 0x8f828be4  lw          $v0, -0x741C($gp)
    ctx->pc = 0x2dcb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937572)));
    // 0x2dcb6c: 0x16620002  bne         $s3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DCB6Cu;
    {
        const bool branch_taken_0x2dcb6c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DCB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB6Cu;
        // 0x2dcb70: 0x8f828be0  lw          $v0, -0x7420($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcb6c) {
            ctx->pc = 0x2DCB78u;
            goto label_2dcb78;
        }
    }
    ctx->pc = 0x2DCB74u;
    // 0x2dcb74: 0xaf828be4  sw          $v0, -0x741C($gp)
    ctx->pc = 0x2dcb74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937572), GPR_U32(ctx, 2));
label_2dcb78:
    // 0x2dcb78: 0xc0b7506  jal         func_2DD418
    ctx->pc = 0x2DCB78u;
    SET_GPR_U32(ctx, 31, 0x2DCB80u);
    ctx->pc = 0x2DCB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCB78u;
    // 0x2dcb7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DD418u, 0x2DCB78u, 0x2DCB80u)) {
        return;
    }
    ctx->pc = 0x2DCB80u;
label_2dcb80:
    // 0x2dcb80: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2dcb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dcb84: 0x1000ff62  b           . + 4 + (-0x9E << 2)
    ctx->pc = 0x2DCB84u;
    {
        const bool branch_taken_0x2dcb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB84u;
        // 0x2dcb88: 0xaf828be4  sw          $v0, -0x741C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcb84) {
            ctx->pc = 0x2DC910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc910;
        }
    }
    ctx->pc = 0x2DCB8Cu;
label_2dcb8c:
    // 0x2dcb8c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DCB8Cu;
    {
        const bool branch_taken_0x2dcb8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB8Cu;
        // 0x2dcb90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcb8c) {
            ctx->pc = 0x2DCB9Cu;
            goto label_2dcb9c;
        }
    }
    ctx->pc = 0x2DCB94u;
    // 0x2dcb94: 0xc0b83da  jal         func_2E0F68
    ctx->pc = 0x2DCB94u;
    SET_GPR_U32(ctx, 31, 0x2DCB9Cu);
    ctx->pc = 0x2DCB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCB94u;
    // 0x2dcb98: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0F68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0F68u, 0x2DCB94u, 0x2DCB9Cu)) {
        return;
    }
    ctx->pc = 0x2DCB9Cu;
label_2dcb9c:
    // 0x2dcb9c: 0x8f828bd0  lw          $v0, -0x7430($gp)
    ctx->pc = 0x2dcb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937552)));
    // 0x2dcba0: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2DCBA0u;
    {
        const bool branch_taken_0x2dcba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DCBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCBA0u;
        // 0x2dcba4: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcba0) {
            ctx->pc = 0x2DCC84u;
            goto label_2dcc84;
        }
    }
    ctx->pc = 0x2DCBA8u;
    // 0x2dcba8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2dcba8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2dcbac: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2dcbacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2dcbb0: 0xc0b7096  jal         func_2DC258
    ctx->pc = 0x2DCBB0u;
    SET_GPR_U32(ctx, 31, 0x2DCBB8u);
    ctx->pc = 0x2DCBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCBB0u;
    // 0x2dcbb4: 0x34a50808  ori         $a1, $a1, 0x808 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2056);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC258u, 0x2DCBB0u, 0x2DCBB8u)) {
        return;
    }
    ctx->pc = 0x2DCBB8u;
label_2dcbb8:
    // 0x2dcbb8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2dcbb8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcbbc: 0x16e0002e  bnez        $s7, . + 4 + (0x2E << 2)
    ctx->pc = 0x2DCBBCu;
    {
        const bool branch_taken_0x2dcbbc = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DCBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCBBCu;
        // 0x2dcbc0: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcbbc) {
            ctx->pc = 0x2DCC78u;
            goto label_2dcc78;
        }
    }
    ctx->pc = 0x2DCBC4u;
    // 0x2dcbc4: 0x13c0ff52  beqz        $fp, . + 4 + (-0xAE << 2)
    ctx->pc = 0x2DCBC4u;
    {
        const bool branch_taken_0x2dcbc4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCBC4u;
        // 0x2dcbc8: 0x2675000c  addiu       $s5, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcbc4) {
            ctx->pc = 0x2DC910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc910;
        }
    }
    ctx->pc = 0x2DCBCCu;
    // 0x2dcbcc: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x2dcbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2dcbd0: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x2dcbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2dcbd4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2dcbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2dcbd8: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x2dcbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2dcbdc: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2dcbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2dcbe0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2dcbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2dcbe4: 0x8e720010  lw          $s2, 0x10($s3)
    ctx->pc = 0x2dcbe4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2dcbe8: 0x12550017  beq         $s2, $s5, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DCBE8u;
    {
        const bool branch_taken_0x2dcbe8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        ctx->pc = 0x2DCBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCBE8u;
        // 0x2dcbec: 0x2a0b82d  daddu       $s7, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcbe8) {
            ctx->pc = 0x2DCC48u;
            goto label_2dcc48;
        }
    }
    ctx->pc = 0x2DCBF0u;
    // 0x2dcbf0: 0x27969020  addiu       $s6, $gp, -0x6FE0
    ctx->pc = 0x2dcbf0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938656));
    // 0x2dcbf4: 0x8f909020  lw          $s0, -0x6FE0($gp)
    ctx->pc = 0x2dcbf4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
label_2dcbf8:
    // 0x2dcbf8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2dcbf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcbfc: 0x16160004  bne         $s0, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DCBFCu;
    {
        const bool branch_taken_0x2dcbfc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x2DCC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCBFCu;
        // 0x2dcc00: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcbfc) {
            ctx->pc = 0x2DCC10u;
            goto label_2dcc10;
        }
    }
    ctx->pc = 0x2DCC04u;
    // 0x2dcc04: 0xc0b7c4e  jal         func_2DF138
    ctx->pc = 0x2DCC04u;
    SET_GPR_U32(ctx, 31, 0x2DCC0Cu);
    ctx->pc = 0x2DCC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCC04u;
    // 0x2dcc08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF138u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF138u, 0x2DCC04u, 0x2DCC0Cu)) {
        return;
    }
    ctx->pc = 0x2DCC0Cu;
label_2dcc0c:
    // 0x2dcc0c: 0x0  nop
    ctx->pc = 0x2dcc0cu;
    // NOP
label_2dcc10:
    // 0x2dcc10: 0x12160006  beq         $s0, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DCC10u;
    {
        const bool branch_taken_0x2dcc10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x2DCC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCC10u;
        // 0x2dcc14: 0x2604ffe4  addiu       $a0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcc10) {
            ctx->pc = 0x2DCC2Cu;
            goto label_2dcc2c;
        }
    }
    ctx->pc = 0x2DCC18u;
    // 0x2dcc18: 0xc0b746c  jal         func_2DD1B0
    ctx->pc = 0x2DCC18u;
    SET_GPR_U32(ctx, 31, 0x2DCC20u);
    ctx->pc = 0x2DCC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCC18u;
    // 0x2dcc1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD1B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DD1B0u, 0x2DCC18u, 0x2DCC20u)) {
        return;
    }
    ctx->pc = 0x2DCC20u;
label_2dcc20:
    // 0x2dcc20: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2DCC20u;
    {
        const bool branch_taken_0x2dcc20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcc20) {
            ctx->pc = 0x2DCC24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCC20u;
            // 0x2dcc24: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dcc10;
        }
    }
    ctx->pc = 0x2DCC28u;
    // 0x2dcc28: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2dcc28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dcc2c:
    // 0x2dcc2c: 0x56800004  bnel        $s4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DCC2Cu;
    {
        const bool branch_taken_0x2dcc2c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dcc2c) {
            ctx->pc = 0x2DCC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCC2Cu;
            // 0x2dcc30: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCC40u;
            goto label_2dcc40;
        }
    }
    ctx->pc = 0x2DCC34u;
    // 0x2dcc34: 0xc0b7c4e  jal         func_2DF138
    ctx->pc = 0x2DCC34u;
    SET_GPR_U32(ctx, 31, 0x2DCC3Cu);
    ctx->pc = 0x2DCC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCC34u;
    // 0x2dcc38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF138u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF138u, 0x2DCC34u, 0x2DCC3Cu)) {
        return;
    }
    ctx->pc = 0x2DCC3Cu;
label_2dcc3c:
    // 0x2dcc3c: 0x8e520004  lw          $s2, 0x4($s2)
    ctx->pc = 0x2dcc3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2dcc40:
    // 0x2dcc40: 0x1657ffed  bne         $s2, $s7, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2DCC40u;
    {
        const bool branch_taken_0x2dcc40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 23));
        ctx->pc = 0x2DCC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCC40u;
        // 0x2dcc44: 0x8f909020  lw          $s0, -0x6FE0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcc40) {
            ctx->pc = 0x2DCBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dcbf8;
        }
    }
    ctx->pc = 0x2DCC48u;
label_2dcc48:
    // 0x2dcc48: 0xc0b8370  jal         func_2E0DC0
    ctx->pc = 0x2DCC48u;
    SET_GPR_U32(ctx, 31, 0x2DCC50u);
    ctx->pc = 0x2DCC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCC48u;
    // 0x2dcc4c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0DC0u, 0x2DCC48u, 0x2DCC50u)) {
        return;
    }
    ctx->pc = 0x2DCC50u;
label_2dcc50:
    // 0x2dcc50: 0x8f828be4  lw          $v0, -0x741C($gp)
    ctx->pc = 0x2dcc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937572)));
    // 0x2dcc54: 0x16620002  bne         $s3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DCC54u;
    {
        const bool branch_taken_0x2dcc54 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DCC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCC54u;
        // 0x2dcc58: 0x8f828be0  lw          $v0, -0x7420($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcc54) {
            ctx->pc = 0x2DCC60u;
            goto label_2dcc60;
        }
    }
    ctx->pc = 0x2DCC5Cu;
    // 0x2dcc5c: 0xaf828be4  sw          $v0, -0x741C($gp)
    ctx->pc = 0x2dcc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937572), GPR_U32(ctx, 2));
label_2dcc60:
    // 0x2dcc60: 0xc0b7506  jal         func_2DD418
    ctx->pc = 0x2DCC60u;
    SET_GPR_U32(ctx, 31, 0x2DCC68u);
    ctx->pc = 0x2DCC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCC60u;
    // 0x2dcc64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DD418u, 0x2DCC60u, 0x2DCC68u)) {
        return;
    }
    ctx->pc = 0x2DCC68u;
label_2dcc68:
    // 0x2dcc68: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2dcc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dcc6c: 0x1000ff28  b           . + 4 + (-0xD8 << 2)
    ctx->pc = 0x2DCC6Cu;
    {
        const bool branch_taken_0x2dcc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCC6Cu;
        // 0x2dcc70: 0xaf828be4  sw          $v0, -0x741C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcc6c) {
            ctx->pc = 0x2DC910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc910;
        }
    }
    ctx->pc = 0x2DCC74u;
    // 0x2dcc74: 0x0  nop
    ctx->pc = 0x2dcc74u;
    // NOP
label_2dcc78:
    // 0x2dcc78: 0xaf978bd0  sw          $s7, -0x7430($gp)
    ctx->pc = 0x2dcc78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937552), GPR_U32(ctx, 23));
    // 0x2dcc7c: 0xaf828bd4  sw          $v0, -0x742C($gp)
    ctx->pc = 0x2dcc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937556), GPR_U32(ctx, 2));
    // 0x2dcc80: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2dcc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2dcc84:
    // 0x2dcc84: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x2DCC84u;
    {
        const bool branch_taken_0x2dcc84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCC84u;
        // 0x2dcc88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcc84) {
            ctx->pc = 0x2DCDF0u;
            goto label_2dcdf0;
        }
    }
    ctx->pc = 0x2DCC8Cu;
    // 0x2dcc8c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2dcc8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dcc90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2dcc90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcc94: 0x0  nop
    ctx->pc = 0x2dcc94u;
    // NOP
label_2dcc98:
    // 0x2dcc98: 0x24050802  addiu       $a1, $zero, 0x802
    ctx->pc = 0x2dcc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
    // 0x2dcc9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dcc9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcca0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dcca0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcca4: 0xc0b8614  jal         func_2E1850
    ctx->pc = 0x2DCCA4u;
    SET_GPR_U32(ctx, 31, 0x2DCCACu);
    ctx->pc = 0x2DCCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCCA4u;
    // 0x2dcca8: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1850u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1850u, 0x2DCCA4u, 0x2DCCACu)) {
        return;
    }
    ctx->pc = 0x2DCCACu;
label_2dccac:
    // 0x2dccac: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2dccacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2dccb0: 0x2a2880a  movz        $s1, $s5, $v0
    ctx->pc = 0x2dccb0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21));
    // 0x2dccb4: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x2dccb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2dccb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2dccb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dccbc: 0x8fa7002c  lw          $a3, 0x2C($sp)
    ctx->pc = 0x2dccbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2dccc0: 0xc0b79fc  jal         func_2DE7F0
    ctx->pc = 0x2DCCC0u;
    SET_GPR_U32(ctx, 31, 0x2DCCC8u);
    ctx->pc = 0x2DCCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCCC0u;
    // 0x2dccc4: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE7F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DE7F0u, 0x2DCCC0u, 0x2DCCC8u)) {
        return;
    }
    ctx->pc = 0x2DCCC8u;
label_2dccc8:
    // 0x2dccc8: 0x2a2880a  movz        $s1, $s5, $v0
    ctx->pc = 0x2dccc8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21));
    // 0x2dcccc: 0x12200044  beqz        $s1, . + 4 + (0x44 << 2)
    ctx->pc = 0x2DCCCCu;
    {
        const bool branch_taken_0x2dcccc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCCCCu;
        // 0x2dccd0: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcccc) {
            ctx->pc = 0x2DCDE0u;
            goto label_2dcde0;
        }
    }
    ctx->pc = 0x2DCCD4u;
    // 0x2dccd4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2dccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2dccd8: 0x2675000c  addiu       $s5, $s3, 0xC
    ctx->pc = 0x2dccd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x2dccdc: 0x1055000c  beq         $v0, $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x2DCCDCu;
    {
        const bool branch_taken_0x2dccdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x2dccdc) {
            ctx->pc = 0x2DCD10u;
            goto label_2dcd10;
        }
    }
    ctx->pc = 0x2DCCE4u;
    // 0x2dcce4: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x2dcce4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcce8: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x2dcce8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dccec: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x2dccecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2dccf0:
    // 0x2dccf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dccf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dccf4: 0xc0b8342  jal         func_2E0D08
    ctx->pc = 0x2DCCF4u;
    SET_GPR_U32(ctx, 31, 0x2DCCFCu);
    ctx->pc = 0x2DCCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCCF4u;
    // 0x2dccf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0D08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0D08u, 0x2DCCF4u, 0x2DCCFCu)) {
        return;
    }
    ctx->pc = 0x2DCCFCu;
label_2dccfc:
    // 0x2dccfc: 0xc0b7c4e  jal         func_2DF138
    ctx->pc = 0x2DCCFCu;
    SET_GPR_U32(ctx, 31, 0x2DCD04u);
    ctx->pc = 0x2DCD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCCFCu;
    // 0x2dcd00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF138u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF138u, 0x2DCCFCu, 0x2DCD04u)) {
        return;
    }
    ctx->pc = 0x2DCD04u;
label_2dcd04:
    // 0x2dcd04: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2dcd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2dcd08: 0x5451fff9  bnel        $v0, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2DCD08u;
    {
        const bool branch_taken_0x2dcd08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2dcd08) {
            ctx->pc = 0x2DCD0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCD08u;
            // 0x2dcd0c: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCCF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dccf0;
        }
    }
    ctx->pc = 0x2DCD10u;
label_2dcd10:
    // 0x2dcd10: 0x13c0002b  beqz        $fp, . + 4 + (0x2B << 2)
    ctx->pc = 0x2DCD10u;
    {
        const bool branch_taken_0x2dcd10 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcd10) {
            ctx->pc = 0x2DCDC0u;
            goto label_2dcdc0;
        }
    }
    ctx->pc = 0x2DCD18u;
    // 0x2dcd18: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x2dcd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2dcd1c: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x2dcd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2dcd20: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2dcd20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2dcd24: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x2dcd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2dcd28: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2dcd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2dcd2c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2dcd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2dcd30: 0x8e710010  lw          $s1, 0x10($s3)
    ctx->pc = 0x2dcd30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2dcd34: 0x12350018  beq         $s1, $s5, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DCD34u;
    {
        const bool branch_taken_0x2dcd34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        if (branch_taken_0x2dcd34) {
            ctx->pc = 0x2DCD98u;
            goto label_2dcd98;
        }
    }
    ctx->pc = 0x2DCD3Cu;
    // 0x2dcd3c: 0x27969020  addiu       $s6, $gp, -0x6FE0
    ctx->pc = 0x2dcd3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938656));
    // 0x2dcd40: 0x8f909020  lw          $s0, -0x6FE0($gp)
    ctx->pc = 0x2dcd40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x2dcd44: 0x0  nop
    ctx->pc = 0x2dcd44u;
    // NOP
label_2dcd48:
    // 0x2dcd48: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2dcd48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcd4c: 0x16160004  bne         $s0, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DCD4Cu;
    {
        const bool branch_taken_0x2dcd4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x2DCD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCD4Cu;
        // 0x2dcd50: 0x8e320008  lw          $s2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcd4c) {
            ctx->pc = 0x2DCD60u;
            goto label_2dcd60;
        }
    }
    ctx->pc = 0x2DCD54u;
    // 0x2dcd54: 0xc0b7c4e  jal         func_2DF138
    ctx->pc = 0x2DCD54u;
    SET_GPR_U32(ctx, 31, 0x2DCD5Cu);
    ctx->pc = 0x2DCD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCD54u;
    // 0x2dcd58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF138u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF138u, 0x2DCD54u, 0x2DCD5Cu)) {
        return;
    }
    ctx->pc = 0x2DCD5Cu;
label_2dcd5c:
    // 0x2dcd5c: 0x0  nop
    ctx->pc = 0x2dcd5cu;
    // NOP
label_2dcd60:
    // 0x2dcd60: 0x12160006  beq         $s0, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DCD60u;
    {
        const bool branch_taken_0x2dcd60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x2DCD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCD60u;
        // 0x2dcd64: 0x2604ffe4  addiu       $a0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcd60) {
            ctx->pc = 0x2DCD7Cu;
            goto label_2dcd7c;
        }
    }
    ctx->pc = 0x2DCD68u;
    // 0x2dcd68: 0xc0b746c  jal         func_2DD1B0
    ctx->pc = 0x2DCD68u;
    SET_GPR_U32(ctx, 31, 0x2DCD70u);
    ctx->pc = 0x2DCD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCD68u;
    // 0x2dcd6c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD1B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DD1B0u, 0x2DCD68u, 0x2DCD70u)) {
        return;
    }
    ctx->pc = 0x2DCD70u;
label_2dcd70:
    // 0x2dcd70: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2DCD70u;
    {
        const bool branch_taken_0x2dcd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcd70) {
            ctx->pc = 0x2DCD74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCD70u;
            // 0x2dcd74: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dcd60;
        }
    }
    ctx->pc = 0x2DCD78u;
    // 0x2dcd78: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2dcd78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dcd7c:
    // 0x2dcd7c: 0x56800004  bnel        $s4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DCD7Cu;
    {
        const bool branch_taken_0x2dcd7c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dcd7c) {
            ctx->pc = 0x2DCD80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCD7Cu;
            // 0x2dcd80: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCD90u;
            goto label_2dcd90;
        }
    }
    ctx->pc = 0x2DCD84u;
    // 0x2dcd84: 0xc0b7c4e  jal         func_2DF138
    ctx->pc = 0x2DCD84u;
    SET_GPR_U32(ctx, 31, 0x2DCD8Cu);
    ctx->pc = 0x2DCD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCD84u;
    // 0x2dcd88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF138u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF138u, 0x2DCD84u, 0x2DCD8Cu)) {
        return;
    }
    ctx->pc = 0x2DCD8Cu;
label_2dcd8c:
    // 0x2dcd8c: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x2dcd8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2dcd90:
    // 0x2dcd90: 0x5635ffed  bnel        $s1, $s5, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2DCD90u;
    {
        const bool branch_taken_0x2dcd90 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        if (branch_taken_0x2dcd90) {
            ctx->pc = 0x2DCD94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCD90u;
            // 0x2dcd94: 0x8f909020  lw          $s0, -0x6FE0($gp) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dcd48;
        }
    }
    ctx->pc = 0x2DCD98u;
label_2dcd98:
    // 0x2dcd98: 0xc0b8370  jal         func_2E0DC0
    ctx->pc = 0x2DCD98u;
    SET_GPR_U32(ctx, 31, 0x2DCDA0u);
    ctx->pc = 0x2DCD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCD98u;
    // 0x2dcd9c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0DC0u, 0x2DCD98u, 0x2DCDA0u)) {
        return;
    }
    ctx->pc = 0x2DCDA0u;
label_2dcda0:
    // 0x2dcda0: 0x8f828be4  lw          $v0, -0x741C($gp)
    ctx->pc = 0x2dcda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937572)));
    // 0x2dcda4: 0x16620002  bne         $s3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DCDA4u;
    {
        const bool branch_taken_0x2dcda4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DCDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCDA4u;
        // 0x2dcda8: 0x8f828be0  lw          $v0, -0x7420($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcda4) {
            ctx->pc = 0x2DCDB0u;
            goto label_2dcdb0;
        }
    }
    ctx->pc = 0x2DCDACu;
    // 0x2dcdac: 0xaf828be4  sw          $v0, -0x741C($gp)
    ctx->pc = 0x2dcdacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937572), GPR_U32(ctx, 2));
label_2dcdb0:
    // 0x2dcdb0: 0xc0b7506  jal         func_2DD418
    ctx->pc = 0x2DCDB0u;
    SET_GPR_U32(ctx, 31, 0x2DCDB8u);
    ctx->pc = 0x2DCDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCDB0u;
    // 0x2dcdb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DD418u, 0x2DCDB0u, 0x2DCDB8u)) {
        return;
    }
    ctx->pc = 0x2DCDB8u;
label_2dcdb8:
    // 0x2dcdb8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2dcdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dcdbc: 0xaf828be4  sw          $v0, -0x741C($gp)
    ctx->pc = 0x2dcdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937572), GPR_U32(ctx, 2));
label_2dcdc0:
    // 0x2dcdc0: 0x12e00015  beqz        $s7, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DCDC0u;
    {
        const bool branch_taken_0x2dcdc0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCDC0u;
        // 0x2dcdc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcdc0) {
            ctx->pc = 0x2DCE18u;
            goto label_2dce18;
        }
    }
    ctx->pc = 0x2DCDC8u;
    // 0x2dcdc8: 0xaf808bd0  sw          $zero, -0x7430($gp)
    ctx->pc = 0x2dcdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937552), GPR_U32(ctx, 0));
    // 0x2dcdcc: 0xaf808bd4  sw          $zero, -0x742C($gp)
    ctx->pc = 0x2dcdccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937556), GPR_U32(ctx, 0));
    // 0x2dcdd0: 0xc0b70a6  jal         func_2DC298
    ctx->pc = 0x2DCDD0u;
    SET_GPR_U32(ctx, 31, 0x2DCDD8u);
    ctx->pc = 0x2DCDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCDD0u;
    // 0x2dcdd4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC298u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC298u, 0x2DCDD0u, 0x2DCDD8u)) {
        return;
    }
    ctx->pc = 0x2DCDD8u;
label_2dcdd8:
    // 0x2dcdd8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2DCDD8u;
    {
        const bool branch_taken_0x2dcdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCDD8u;
        // 0x2dcddc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcdd8) {
            ctx->pc = 0x2DCE18u;
            goto label_2dce18;
        }
    }
    ctx->pc = 0x2DCDE0u;
label_2dcde0:
    // 0x2dcde0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2dcde0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2dcde4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2dcde4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2dcde8: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x2DCDE8u;
    {
        const bool branch_taken_0x2dcde8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DCDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCDE8u;
        // 0x2dcdec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcde8) {
            ctx->pc = 0x2DCC98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dcc98;
        }
    }
    ctx->pc = 0x2DCDF0u;
label_2dcdf0:
    // 0x2dcdf0: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DCDF0u;
    {
        const bool branch_taken_0x2dcdf0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCDF0u;
        // 0x2dcdf4: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcdf0) {
            ctx->pc = 0x2DCE10u;
            goto label_2dce10;
        }
    }
    ctx->pc = 0x2DCDF8u;
    // 0x2dcdf8: 0xaf808bd0  sw          $zero, -0x7430($gp)
    ctx->pc = 0x2dcdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937552), GPR_U32(ctx, 0));
    // 0x2dcdfc: 0xaf808bd4  sw          $zero, -0x742C($gp)
    ctx->pc = 0x2dcdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937556), GPR_U32(ctx, 0));
    // 0x2dce00: 0xc0b70a6  jal         func_2DC298
    ctx->pc = 0x2DCE00u;
    SET_GPR_U32(ctx, 31, 0x2DCE08u);
    ctx->pc = 0x2DCE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCE00u;
    // 0x2dce04: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC298u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC298u, 0x2DCE00u, 0x2DCE08u)) {
        return;
    }
    ctx->pc = 0x2DCE08u;
label_2dce08:
    // 0x2dce08: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2dce08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dce0c: 0x0  nop
    ctx->pc = 0x2dce0cu;
    // NOP
label_2dce10:
    // 0x2dce10: 0xaf828be4  sw          $v0, -0x741C($gp)
    ctx->pc = 0x2dce10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937572), GPR_U32(ctx, 2));
    // 0x2dce14: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2dce14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dce18:
    // 0x2dce18: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x2dce18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2dce1c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x2dce1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2dce20: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x2dce20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2dce24: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x2dce24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2dce28: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x2dce28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2dce2c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2dce2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2dce30: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2dce30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dce34: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x2dce34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dce38: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x2dce38u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dce3c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2dce3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dce40: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE40u;
        // 0x2dce44: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCE48u;
}
