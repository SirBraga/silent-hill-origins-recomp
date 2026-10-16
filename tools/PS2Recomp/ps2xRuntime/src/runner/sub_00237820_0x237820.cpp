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

// Function: sub_00237820
// Address: 0x237820 - 0x237a80
void sub_00237820_0x237820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237820_0x237820");
#endif

    switch (ctx->pc) {
        case 0x237950u: goto label_237950;
        case 0x237964u: goto label_237964;
        case 0x237984u: goto label_237984;
        case 0x2379d0u: goto label_2379d0;
        case 0x237a18u: goto label_237a18;
        case 0x237a4cu: goto label_237a4c;
        default: break;
    }

    ctx->pc = 0x237820u;

    // 0x237820: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x237820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x237824: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x237824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x237828: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x237828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x23782c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x23782cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237830: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x237830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x237834: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x237834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x237838: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x237838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x23783c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x23783cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x237840: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x237840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x237844: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x237844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x237848: 0x92820022  lbu         $v0, 0x22($s4)
    ctx->pc = 0x237848u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 34)));
    // 0x23784c: 0x3042001e  andi        $v0, $v0, 0x1E
    ctx->pc = 0x23784cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)30);
    // 0x237850: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x237850u;
    {
        const bool branch_taken_0x237850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237850u;
        // 0x237854: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237850) {
            ctx->pc = 0x23798Cu;
            goto label_23798c;
        }
    }
    ctx->pc = 0x237858u;
    // 0x237858: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x237858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x23785c: 0x8c63416c  lw          $v1, 0x416C($v1)
    ctx->pc = 0x23785cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B416Cu));
    // 0x237860: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x237860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x237864: 0x92820023  lbu         $v0, 0x23($s4)
    ctx->pc = 0x237864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 35)));
    // 0x237868: 0x2839821  addu        $s3, $s4, $v1
    ctx->pc = 0x237868u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x23786c: 0x92840020  lbu         $a0, 0x20($s4)
    ctx->pc = 0x23786cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x237870: 0x8e650028  lw          $a1, 0x28($s3)
    ctx->pc = 0x237870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x237874: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x237874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x237878: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x237878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x23787c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x23787cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x237880: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x237880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x237884: 0xa3b021  addu        $s6, $a1, $v1
    ctx->pc = 0x237884u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x237888: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x237888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x23788c: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x23788cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x237890: 0x92630036  lbu         $v1, 0x36($s3)
    ctx->pc = 0x237890u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x237894: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x237894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x237898: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x237898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x23789c: 0xa7a4000c  sh          $a0, 0xC($sp)
    ctx->pc = 0x23789cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x2378a0: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x2378a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x2378a4: 0x14670006  bne         $v1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2378A4u;
    {
        const bool branch_taken_0x2378a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x2378A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2378A4u;
        // 0x2378a8: 0xa7a0000e  sh          $zero, 0xE($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2378a4) {
            ctx->pc = 0x2378C0u;
            goto label_2378c0;
        }
    }
    ctx->pc = 0x2378ACu;
    // 0x2378ac: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2378acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2378b0: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2378B0u;
    {
        const bool branch_taken_0x2378b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2378b0) {
            ctx->pc = 0x2378B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2378B0u;
            // 0x2378b4: 0x92620036  lbu         $v0, 0x36($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2378C4u;
            goto label_2378c4;
        }
    }
    ctx->pc = 0x2378B8u;
    // 0x2378b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2378b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2378bc: 0xa7a2000e  sh          $v0, 0xE($sp)
    ctx->pc = 0x2378bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 2));
label_2378c0:
    // 0x2378c0: 0x92620036  lbu         $v0, 0x36($s3)
    ctx->pc = 0x2378c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
label_2378c4:
    // 0x2378c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2378c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2378c8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2378C8u;
    {
        const bool branch_taken_0x2378c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2378CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2378C8u;
        // 0x2378cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2378c8) {
            ctx->pc = 0x2378D4u;
            goto label_2378d4;
        }
    }
    ctx->pc = 0x2378D0u;
    // 0x2378d0: 0xa7a2000e  sh          $v0, 0xE($sp)
    ctx->pc = 0x2378d0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 2));
label_2378d4:
    // 0x2378d4: 0x8e720008  lw          $s2, 0x8($s3)
    ctx->pc = 0x2378d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2378d8: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x2378d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x2378dc: 0x8e71000c  lw          $s1, 0xC($s3)
    ctx->pc = 0x2378dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2378e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2378e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2378e4: 0x8e700010  lw          $s0, 0x10($s3)
    ctx->pc = 0x2378e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2378e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2378e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2378ec: 0x926f0016  lbu         $t7, 0x16($s3)
    ctx->pc = 0x2378ecu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x2378f0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2378f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2378f4: 0x8e6e0018  lw          $t6, 0x18($s3)
    ctx->pc = 0x2378f4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2378f8: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x2378f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x2378fc: 0x8e6d001c  lw          $t5, 0x1C($s3)
    ctx->pc = 0x2378fcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x237900: 0x24080065  addiu       $t0, $zero, 0x65
    ctx->pc = 0x237900u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x237904: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x237904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x237908: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x237908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x23790c: 0x8e690028  lw          $t1, 0x28($s3)
    ctx->pc = 0x23790cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x237910: 0x8e6a002c  lw          $t2, 0x2C($s3)
    ctx->pc = 0x237910u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x237914: 0x8e6b0030  lw          $t3, 0x30($s3)
    ctx->pc = 0x237914u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x237918: 0x966c0014  lhu         $t4, 0x14($s3)
    ctx->pc = 0x237918u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x23791c: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x23791cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x237920: 0xafb10014  sw          $s1, 0x14($sp)
    ctx->pc = 0x237920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 17));
    // 0x237924: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x237924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x237928: 0xafaf001c  sw          $t7, 0x1C($sp)
    ctx->pc = 0x237928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 15));
    // 0x23792c: 0xafae0020  sw          $t6, 0x20($sp)
    ctx->pc = 0x23792cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 14));
    // 0x237930: 0xafad0024  sw          $t5, 0x24($sp)
    ctx->pc = 0x237930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 13));
    // 0x237934: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x237934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x237938: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x237938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x23793c: 0xafa90030  sw          $t1, 0x30($sp)
    ctx->pc = 0x23793cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 9));
    // 0x237940: 0xafaa0034  sw          $t2, 0x34($sp)
    ctx->pc = 0x237940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 10));
    // 0x237944: 0xafab0038  sw          $t3, 0x38($sp)
    ctx->pc = 0x237944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 11));
    // 0x237948: 0xc0926f4  jal         func_249BD0
    ctx->pc = 0x237948u;
    SET_GPR_U32(ctx, 31, 0x237950u);
    ctx->pc = 0x23794Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237948u;
    // 0x23794c: 0xafac003c  sw          $t4, 0x3C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249BD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249BD0u, 0x237948u, 0x237950u)) {
        return;
    }
    ctx->pc = 0x237950u;
label_237950:
    // 0x237950: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x237950u;
    {
        const bool branch_taken_0x237950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237950u;
        // 0x237954: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237950) {
            ctx->pc = 0x23798Cu;
            goto label_23798c;
        }
    }
    ctx->pc = 0x237958u;
    // 0x237958: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x237958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23795c: 0xc092782  jal         func_249E08
    ctx->pc = 0x23795Cu;
    SET_GPR_U32(ctx, 31, 0x237964u);
    ctx->pc = 0x237960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23795Cu;
    // 0x237960: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x23795Cu, 0x237964u)) {
        return;
    }
    ctx->pc = 0x237964u;
label_237964:
    // 0x237964: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x237964u;
    {
        const bool branch_taken_0x237964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237964u;
        // 0x237968: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237964) {
            ctx->pc = 0x23798Cu;
            goto label_23798c;
        }
    }
    ctx->pc = 0x23796Cu;
    // 0x23796c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23796cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237970: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x237970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237974: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x237974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237978: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x237978u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x23797c: 0xc0926f4  jal         func_249BD0
    ctx->pc = 0x23797Cu;
    SET_GPR_U32(ctx, 31, 0x237984u);
    ctx->pc = 0x237980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23797Cu;
    // 0x237980: 0x24080065  addiu       $t0, $zero, 0x65 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249BD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249BD0u, 0x23797Cu, 0x237984u)) {
        return;
    }
    ctx->pc = 0x237984u;
label_237984:
    // 0x237984: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x237984u;
    {
        const bool branch_taken_0x237984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237984u;
        // 0x237988: 0x97a2000e  lhu         $v0, 0xE($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237984) {
            ctx->pc = 0x237994u;
            goto label_237994;
        }
    }
    ctx->pc = 0x23798Cu;
label_23798c:
    // 0x23798c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x23798Cu;
    {
        const bool branch_taken_0x23798c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23798Cu;
        // 0x237990: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23798c) {
            ctx->pc = 0x237A58u;
            goto label_237a58;
        }
    }
    ctx->pc = 0x237994u;
label_237994:
    // 0x237994: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x237994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237998: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x237998u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x23799c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23799Cu;
    {
        const bool branch_taken_0x23799c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2379A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23799Cu;
        // 0x2379a0: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23799c) {
            ctx->pc = 0x2379B0u;
            goto label_2379b0;
        }
    }
    ctx->pc = 0x2379A4u;
    // 0x2379a4: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x2379a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2379a8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2379A8u;
    {
        const bool branch_taken_0x2379a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2379ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2379A8u;
        // 0x2379ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2379a8) {
            ctx->pc = 0x237A44u;
            goto label_237a44;
        }
    }
    ctx->pc = 0x2379B0u;
label_2379b0:
    // 0x2379b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2379b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2379b4: 0x14820028  bne         $a0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2379B4u;
    {
        const bool branch_taken_0x2379b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2379B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2379B4u;
        // 0x2379b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2379b4) {
            ctx->pc = 0x237A58u;
            goto label_237a58;
        }
    }
    ctx->pc = 0x2379BCu;
    // 0x2379bc: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x2379bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x2379c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2379c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2379c4: 0x8e660028  lw          $a2, 0x28($s3)
    ctx->pc = 0x2379c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x2379c8: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x2379C8u;
    SET_GPR_U32(ctx, 31, 0x2379D0u);
    ctx->pc = 0x2379CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2379C8u;
    // 0x2379cc: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x2379C8u, 0x2379D0u)) {
        return;
    }
    ctx->pc = 0x2379D0u;
label_2379d0:
    // 0x2379d0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2379D0u;
    {
        const bool branch_taken_0x2379d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2379D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2379D0u;
        // 0x2379d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2379d0) {
            ctx->pc = 0x237A58u;
            goto label_237a58;
        }
    }
    ctx->pc = 0x2379D8u;
    // 0x2379d8: 0x92820021  lbu         $v0, 0x21($s4)
    ctx->pc = 0x2379d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 33)));
    // 0x2379dc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2379dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2379e0: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2379E0u;
    {
        const bool branch_taken_0x2379e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2379e0) {
            ctx->pc = 0x2379E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2379E0u;
            // 0x2379e4: 0x8e66002c  lw          $a2, 0x2C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237A34u;
            goto label_237a34;
        }
    }
    ctx->pc = 0x2379E8u;
    // 0x2379e8: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x2379e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x2379ec: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x2379ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2379f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2379f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2379f4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2379f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2379f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2379f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2379fc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2379fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x237a00: 0x5085000c  beql        $a0, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x237A00u;
    {
        const bool branch_taken_0x237a00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x237a00) {
            ctx->pc = 0x237A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237A00u;
            // 0x237a04: 0x8e66002c  lw          $a2, 0x2C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237A34u;
            goto label_237a34;
        }
    }
    ctx->pc = 0x237A08u;
    // 0x237a08: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x237a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x237a0c: 0x2443ffb0  addiu       $v1, $v0, -0x50
    ctx->pc = 0x237a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
    // 0x237a10: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x237A10u;
    {
        const bool branch_taken_0x237a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x237a10) {
            ctx->pc = 0x237A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237A10u;
            // 0x237a14: 0x8e66002c  lw          $a2, 0x2C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237A34u;
            goto label_237a34;
        }
    }
    ctx->pc = 0x237A18u;
label_237a18:
    // 0x237a18: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x237a18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x237a1c: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x237a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x237a20: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x237a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x237a24: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x237a24u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x237a28: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x237A28u;
    {
        const bool branch_taken_0x237a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x237A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A28u;
        // 0x237a2c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a28) {
            ctx->pc = 0x237A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237a18;
        }
    }
    ctx->pc = 0x237A30u;
    // 0x237a30: 0x8e66002c  lw          $a2, 0x2C($s3)
    ctx->pc = 0x237a30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_237a34:
    // 0x237a34: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x237A34u;
    {
        const bool branch_taken_0x237a34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x237A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A34u;
        // 0x237a38: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a34) {
            ctx->pc = 0x237A54u;
            goto label_237a54;
        }
    }
    ctx->pc = 0x237A3Cu;
    // 0x237a3c: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x237a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x237a40: 0x24a5ffb0  addiu       $a1, $a1, -0x50
    ctx->pc = 0x237a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967216));
label_237a44:
    // 0x237a44: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x237A44u;
    SET_GPR_U32(ctx, 31, 0x237A4Cu);
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x237A44u, 0x237A4Cu)) {
        return;
    }
    ctx->pc = 0x237A4Cu;
label_237a4c:
    // 0x237a4c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x237A4Cu;
    {
        const bool branch_taken_0x237a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A4Cu;
        // 0x237a50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a4c) {
            ctx->pc = 0x237A58u;
            goto label_237a58;
        }
    }
    ctx->pc = 0x237A54u;
label_237a54:
    // 0x237a54: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x237a54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_237a58:
    // 0x237a58: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x237a58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x237a5c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x237a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x237a60: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x237a60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x237a64: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x237a64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x237a68: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x237a68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x237a6c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x237a6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x237a70: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x237a70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x237a74: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x237a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x237a78: 0x3e00008  jr          $ra
    ctx->pc = 0x237A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A78u;
        // 0x237a7c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237A80u;
}
