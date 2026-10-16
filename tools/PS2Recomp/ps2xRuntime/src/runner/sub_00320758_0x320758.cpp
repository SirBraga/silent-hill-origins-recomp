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

// Function: sub_00320758
// Address: 0x320758 - 0x3208e8
void sub_00320758_0x320758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320758_0x320758");
#endif

    switch (ctx->pc) {
        case 0x320788u: goto label_320788;
        case 0x32079cu: goto label_32079c;
        case 0x3207d4u: goto label_3207d4;
        case 0x320808u: goto label_320808;
        case 0x320860u: goto label_320860;
        case 0x3208a8u: goto label_3208a8;
        default: break;
    }

    ctx->pc = 0x320758u;

    // 0x320758: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x320758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32075c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x32075cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x320760: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x320760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x320764: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x320764u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320768: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x320768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x32076c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x32076cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320770: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x320770u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320774: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x320774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x320778: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32077c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32077cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320780: 0xc0c81bc  jal         func_3206F0
    ctx->pc = 0x320780u;
    SET_GPR_U32(ctx, 31, 0x320788u);
    ctx->pc = 0x320784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320780u;
    // 0x320784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3206F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3206F0u, 0x320780u, 0x320788u)) {
        return;
    }
    ctx->pc = 0x320788u;
label_320788:
    // 0x320788: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x320788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32078c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32078Cu;
    {
        const bool branch_taken_0x32078c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x320790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32078Cu;
        // 0x320790: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32078c) {
            ctx->pc = 0x3207B0u;
            goto label_3207b0;
        }
    }
    ctx->pc = 0x320794u;
    // 0x320794: 0xc0c7f7c  jal         func_31FDF0
    ctx->pc = 0x320794u;
    SET_GPR_U32(ctx, 31, 0x32079Cu);
    ctx->pc = 0x320798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320794u;
    // 0x320798: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FDF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FDF0u, 0x320794u, 0x32079Cu)) {
        return;
    }
    ctx->pc = 0x32079Cu;
label_32079c:
    // 0x32079c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x32079cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3207a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3207a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3207a4: 0xad600014  sw          $zero, 0x14($t3)
    ctx->pc = 0x3207a4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 0));
    // 0x3207a8: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x3207A8u;
    {
        const bool branch_taken_0x3207a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3207ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3207A8u;
        // 0x3207ac: 0xad620010  sw          $v0, 0x10($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3207a8) {
            ctx->pc = 0x3208C4u;
            goto label_3208c4;
        }
    }
    ctx->pc = 0x3207B0u;
label_3207b0:
    // 0x3207b0: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3207B0u;
    {
        const bool branch_taken_0x3207b0 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x3207B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3207B0u;
        // 0x3207b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3207b0) {
            ctx->pc = 0x3207C8u;
            goto label_3207c8;
        }
    }
    ctx->pc = 0x3207B8u;
    // 0x3207b8: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x3207b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3207bc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3207bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3207c0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x3207c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3207c4: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x3207c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3207c8:
    // 0x3207c8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3207c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3207cc: 0xc0c7f7c  jal         func_31FDF0
    ctx->pc = 0x3207CCu;
    SET_GPR_U32(ctx, 31, 0x3207D4u);
    ctx->pc = 0x3207D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3207CCu;
    // 0x3207d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FDF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FDF0u, 0x3207CCu, 0x3207D4u)) {
        return;
    }
    ctx->pc = 0x3207D4u;
label_3207d4:
    // 0x3207d4: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x3207d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3207d8: 0x26280014  addiu       $t0, $s1, 0x14
    ctx->pc = 0x3207d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x3207dc: 0xad70000c  sw          $s0, 0xC($t3)
    ctx->pc = 0x3207dcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 16));
    // 0x3207e0: 0x26490014  addiu       $t1, $s2, 0x14
    ctx->pc = 0x3207e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x3207e4: 0x25670014  addiu       $a3, $t3, 0x14
    ctx->pc = 0x3207e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 20));
    // 0x3207e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3207e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3207ec: 0x8e2c0010  lw          $t4, 0x10($s1)
    ctx->pc = 0x3207ecu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3207f0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3207f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3207f4: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x3207f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x3207f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3207f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3207fc: 0x1036821  addu        $t5, $t0, $v1
    ctx->pc = 0x3207fcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x320800: 0x1223021  addu        $a2, $t1, $v0
    ctx->pc = 0x320800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x320804: 0x0  nop
    ctx->pc = 0x320804u;
    // NOP
label_320808:
    // 0x320808: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x320808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x32080c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x32080cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x320810: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x320810u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x320814: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x320814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x320818: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x320818u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x32081c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x32081cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x320820: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x320820u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x320824: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x320824u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320828: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x320828u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x32082c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x32082cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x320830: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x320830u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x320834: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x320834u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x320838: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x320838u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x32083c: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x32083cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x320840: 0x126102b  sltu        $v0, $t1, $a2
    ctx->pc = 0x320840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x320844: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x320844u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x320848: 0x55403  sra         $t2, $a1, 16
    ctx->pc = 0x320848u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
    // 0x32084c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x32084Cu;
    {
        const bool branch_taken_0x32084c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32084Cu;
        // 0x320850: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32084c) {
            ctx->pc = 0x320808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320808;
        }
    }
    ctx->pc = 0x320854u;
    // 0x320854: 0x10d102b  sltu        $v0, $t0, $t5
    ctx->pc = 0x320854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x320858: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x320858u;
    {
        const bool branch_taken_0x320858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320858) {
            ctx->pc = 0x32085Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320858u;
            // 0x32085c: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320898u;
            goto label_320898;
        }
    }
    ctx->pc = 0x320860u;
label_320860:
    // 0x320860: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x320860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x320864: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x320864u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x320868: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x320868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32086c: 0x10d202b  sltu        $a0, $t0, $t5
    ctx->pc = 0x32086cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x320870: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x320870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x320874: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x320874u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x320878: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x320878u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x32087c: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x32087cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x320880: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x320880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x320884: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x320884u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x320888: 0x55403  sra         $t2, $a1, 16
    ctx->pc = 0x320888u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
    // 0x32088c: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x32088Cu;
    {
        const bool branch_taken_0x32088c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x320890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32088Cu;
        // 0x320890: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32088c) {
            ctx->pc = 0x320860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320860;
        }
    }
    ctx->pc = 0x320894u;
    // 0x320894: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x320894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_320898:
    // 0x320898: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x320898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x32089c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x32089Cu;
    {
        const bool branch_taken_0x32089c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32089c) {
            ctx->pc = 0x3208A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32089Cu;
            // 0x3208a0: 0xad6c0010  sw          $t4, 0x10($t3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3208C4u;
            goto label_3208c4;
        }
    }
    ctx->pc = 0x3208A4u;
    // 0x3208a4: 0x0  nop
    ctx->pc = 0x3208a4u;
    // NOP
label_3208a8:
    // 0x3208a8: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x3208a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x3208ac: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3208acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3208b0: 0x0  nop
    ctx->pc = 0x3208b0u;
    // NOP
    // 0x3208b4: 0x0  nop
    ctx->pc = 0x3208b4u;
    // NOP
    // 0x3208b8: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3208B8u;
    {
        const bool branch_taken_0x3208b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3208BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3208B8u;
        // 0x3208bc: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3208b8) {
            ctx->pc = 0x3208A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3208a8;
        }
    }
    ctx->pc = 0x3208C0u;
    // 0x3208c0: 0xad6c0010  sw          $t4, 0x10($t3)
    ctx->pc = 0x3208c0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
label_3208c4:
    // 0x3208c4: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x3208c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3208c8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3208c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3208cc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3208ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3208d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3208d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3208d4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3208d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3208d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3208d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3208dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3208DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3208E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3208DCu;
        // 0x3208e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3208DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3208E4u;
    // 0x3208e4: 0x0  nop
    ctx->pc = 0x3208e4u;
    // NOP
    ctx->pc = 0x3208e8u;
}
