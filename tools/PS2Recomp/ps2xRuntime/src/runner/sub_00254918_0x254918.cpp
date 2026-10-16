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

// Function: sub_00254918
// Address: 0x254918 - 0x254b80
void sub_00254918_0x254918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254918_0x254918");
#endif

    switch (ctx->pc) {
        case 0x254958u: goto label_254958;
        case 0x2549a4u: goto label_2549a4;
        case 0x2549c8u: goto label_2549c8;
        case 0x2549fcu: goto label_2549fc;
        case 0x254a24u: goto label_254a24;
        case 0x254a40u: goto label_254a40;
        case 0x254a50u: goto label_254a50;
        case 0x254a80u: goto label_254a80;
        case 0x254a94u: goto label_254a94;
        case 0x254ab0u: goto label_254ab0;
        case 0x254accu: goto label_254acc;
        case 0x254ad4u: goto label_254ad4;
        case 0x254afcu: goto label_254afc;
        case 0x254b2cu: goto label_254b2c;
        case 0x254b4cu: goto label_254b4c;
        case 0x254b58u: goto label_254b58;
        default: break;
    }

    ctx->pc = 0x254918u;

    // 0x254918: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x254918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x25491c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x25491cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x254920: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x254920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x254924: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x254924u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254928: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x254928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x25492c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x25492cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254930: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x254930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x254934: 0x27b40024  addiu       $s4, $sp, 0x24
    ctx->pc = 0x254934u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x254938: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x254938u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25493c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x25493cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x254940: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x254940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x254944: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x254944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x254948: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x254948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25494c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x25494cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x254950: 0xc09270a  jal         func_249C28
    ctx->pc = 0x254950u;
    SET_GPR_U32(ctx, 31, 0x254958u);
    ctx->pc = 0x254954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254950u;
    // 0x254954: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x254950u, 0x254958u)) {
        return;
    }
    ctx->pc = 0x254958u;
label_254958:
    // 0x254958: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x254958u;
    {
        const bool branch_taken_0x254958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254958u;
        // 0x25495c: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254958) {
            ctx->pc = 0x254978u;
            goto label_254978;
        }
    }
    ctx->pc = 0x254960u;
    // 0x254960: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x254960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x254964: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x254964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x254968: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x254968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x25496c: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x25496Cu;
    {
        const bool branch_taken_0x25496c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25496Cu;
        // 0x254970: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25496c) {
            ctx->pc = 0x254B44u;
            goto label_254b44;
        }
    }
    ctx->pc = 0x254974u;
    // 0x254974: 0x0  nop
    ctx->pc = 0x254974u;
    // NOP
label_254978:
    // 0x254978: 0x3c10fffc  lui         $s0, 0xFFFC
    ctx->pc = 0x254978u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65532 << 16));
    // 0x25497c: 0x3610b000  ori         $s0, $s0, 0xB000
    ctx->pc = 0x25497cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)45056);
    // 0x254980: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x254980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x254984: 0x2c422003  sltiu       $v0, $v0, 0x2003
    ctx->pc = 0x254984u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x254988: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x254988u;
    {
        const bool branch_taken_0x254988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254988u;
        // 0x25498c: 0x700014a9  por         $v0, $zero, $zero (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254988) {
            ctx->pc = 0x254B34u;
            goto label_254b34;
        }
    }
    ctx->pc = 0x254990u;
    // 0x254990: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x254990u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254994: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x254994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x254998: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x254998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25499c: 0xc093546  jal         func_24D518
    ctx->pc = 0x25499Cu;
    SET_GPR_U32(ctx, 31, 0x2549A4u);
    ctx->pc = 0x2549A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25499Cu;
    // 0x2549a0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x25499Cu, 0x2549A4u)) {
        return;
    }
    ctx->pc = 0x2549A4u;
label_2549a4:
    // 0x2549a4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2549a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2549a8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2549A8u;
    {
        const bool branch_taken_0x2549a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2549ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2549A8u;
        // 0x2549ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2549a8) {
            ctx->pc = 0x2549C0u;
            goto label_2549c0;
        }
    }
    ctx->pc = 0x2549B0u;
    // 0x2549b0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2549b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2549b4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2549b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2549b8: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2549B8u;
    {
        const bool branch_taken_0x2549b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2549BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2549B8u;
        // 0x2549bc: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2549b8) {
            ctx->pc = 0x254B44u;
            goto label_254b44;
        }
    }
    ctx->pc = 0x2549C0u;
label_2549c0:
    // 0x2549c0: 0xc0954b8  jal         func_2552E0
    ctx->pc = 0x2549C0u;
    SET_GPR_U32(ctx, 31, 0x2549C8u);
    ctx->pc = 0x2552E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2552E0u, 0x2549C0u, 0x2549C8u)) {
        return;
    }
    ctx->pc = 0x2549C8u;
label_2549c8:
    // 0x2549c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2549c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2549cc: 0x12200062  beqz        $s1, . + 4 + (0x62 << 2)
    ctx->pc = 0x2549CCu;
    {
        const bool branch_taken_0x2549cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2549D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2549CCu;
        // 0x2549d0: 0x93a20018  lbu         $v0, 0x18($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2549cc) {
            ctx->pc = 0x254B58u;
            goto label_254b58;
        }
    }
    ctx->pc = 0x2549D4u;
    // 0x2549d4: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x2549d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2549d8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2549d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2549dc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2549DCu;
    {
        const bool branch_taken_0x2549dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2549E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2549DCu;
        // 0x2549e0: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2549dc) {
            ctx->pc = 0x2549FCu;
            goto label_2549fc;
        }
    }
    ctx->pc = 0x2549E4u;
    // 0x2549e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2549e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2549e8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2549e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2549ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2549ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2549f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2549f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2549f4: 0xc0957f0  jal         func_255FC0
    ctx->pc = 0x2549F4u;
    SET_GPR_U32(ctx, 31, 0x2549FCu);
    ctx->pc = 0x2549F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2549F4u;
    // 0x2549f8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255FC0u, 0x2549F4u, 0x2549FCu)) {
        return;
    }
    ctx->pc = 0x2549FCu;
label_2549fc:
    // 0x2549fc: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2549fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x254a00: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x254A00u;
    {
        const bool branch_taken_0x254a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A00u;
        // 0x254a04: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a00) {
            ctx->pc = 0x254A2Cu;
            goto label_254a2c;
        }
    }
    ctx->pc = 0x254A08u;
    // 0x254a08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x254a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254a0c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x254a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x254a10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x254a10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254a14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x254a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x254a18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x254a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254a1c: 0xc095502  jal         func_255408
    ctx->pc = 0x254A1Cu;
    SET_GPR_U32(ctx, 31, 0x254A24u);
    ctx->pc = 0x254A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254A1Cu;
    // 0x254a20: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255408u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255408u, 0x254A1Cu, 0x254A24u)) {
        return;
    }
    ctx->pc = 0x254A24u;
label_254a24:
    // 0x254a24: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x254A24u;
    {
        const bool branch_taken_0x254a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A24u;
        // 0x254a28: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a24) {
            ctx->pc = 0x254AD8u;
            goto label_254ad8;
        }
    }
    ctx->pc = 0x254A2Cu;
label_254a2c:
    // 0x254a2c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x254a2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254a30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x254a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254a34: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x254a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x254a38: 0xc09270a  jal         func_249C28
    ctx->pc = 0x254A38u;
    SET_GPR_U32(ctx, 31, 0x254A40u);
    ctx->pc = 0x254A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254A38u;
    // 0x254a3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x254A38u, 0x254A40u)) {
        return;
    }
    ctx->pc = 0x254A40u;
label_254a40:
    // 0x254a40: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x254A40u;
    {
        const bool branch_taken_0x254a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A40u;
        // 0x254a44: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a40) {
            ctx->pc = 0x254A68u;
            goto label_254a68;
        }
    }
    ctx->pc = 0x254A48u;
    // 0x254a48: 0xc095534  jal         func_2554D0
    ctx->pc = 0x254A48u;
    SET_GPR_U32(ctx, 31, 0x254A50u);
    ctx->pc = 0x254A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254A48u;
    // 0x254a4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2554D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2554D0u, 0x254A48u, 0x254A50u)) {
        return;
    }
    ctx->pc = 0x254A50u;
label_254a50:
    // 0x254a50: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x254a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x254a54: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x254a54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x254a58: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x254a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x254a5c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x254A5Cu;
    {
        const bool branch_taken_0x254a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A5Cu;
        // 0x254a60: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a5c) {
            ctx->pc = 0x254B44u;
            goto label_254b44;
        }
    }
    ctx->pc = 0x254A64u;
    // 0x254a64: 0x0  nop
    ctx->pc = 0x254a64u;
    // NOP
label_254a68:
    // 0x254a68: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x254a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x254a6c: 0x2c422003  sltiu       $v0, $v0, 0x2003
    ctx->pc = 0x254a6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x254a70: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x254A70u;
    {
        const bool branch_taken_0x254a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254a70) {
            ctx->pc = 0x254AA8u;
            goto label_254aa8;
        }
    }
    ctx->pc = 0x254A78u;
    // 0x254a78: 0xc095b4e  jal         func_256D38
    ctx->pc = 0x254A78u;
    SET_GPR_U32(ctx, 31, 0x254A80u);
    ctx->pc = 0x254A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254A78u;
    // 0x254a7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256D38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256D38u, 0x254A78u, 0x254A80u)) {
        return;
    }
    ctx->pc = 0x254A80u;
label_254a80:
    // 0x254a80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x254a80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254a84: 0x5600000e  bnel        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x254A84u;
    {
        const bool branch_taken_0x254a84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x254a84) {
            ctx->pc = 0x254A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254A84u;
            // 0x254a88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254AC0u;
            goto label_254ac0;
        }
    }
    ctx->pc = 0x254A8Cu;
    // 0x254a8c: 0xc095534  jal         func_2554D0
    ctx->pc = 0x254A8Cu;
    SET_GPR_U32(ctx, 31, 0x254A94u);
    ctx->pc = 0x254A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254A8Cu;
    // 0x254a90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2554D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2554D0u, 0x254A8Cu, 0x254A94u)) {
        return;
    }
    ctx->pc = 0x254A94u;
label_254a94:
    // 0x254a94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x254a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x254a98: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x254a98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x254a9c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x254a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x254aa0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x254AA0u;
    {
        const bool branch_taken_0x254aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254AA0u;
        // 0x254aa4: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254aa0) {
            ctx->pc = 0x254B44u;
            goto label_254b44;
        }
    }
    ctx->pc = 0x254AA8u;
label_254aa8:
    // 0x254aa8: 0xc095534  jal         func_2554D0
    ctx->pc = 0x254AA8u;
    SET_GPR_U32(ctx, 31, 0x254AB0u);
    ctx->pc = 0x254AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254AA8u;
    // 0x254aac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2554D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2554D0u, 0x254AA8u, 0x254AB0u)) {
        return;
    }
    ctx->pc = 0x254AB0u;
label_254ab0:
    // 0x254ab0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x254ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x254ab4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x254ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x254ab8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x254AB8u;
    {
        const bool branch_taken_0x254ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254AB8u;
        // 0x254abc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254ab8) {
            ctx->pc = 0x254B40u;
            goto label_254b40;
        }
    }
    ctx->pc = 0x254AC0u;
label_254ac0:
    // 0x254ac0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x254ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254ac4: 0xc095502  jal         func_255408
    ctx->pc = 0x254AC4u;
    SET_GPR_U32(ctx, 31, 0x254ACCu);
    ctx->pc = 0x254AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254AC4u;
    // 0x254ac8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255408u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255408u, 0x254AC4u, 0x254ACCu)) {
        return;
    }
    ctx->pc = 0x254ACCu;
label_254acc:
    // 0x254acc: 0xc095b08  jal         func_256C20
    ctx->pc = 0x254ACCu;
    SET_GPR_U32(ctx, 31, 0x254AD4u);
    ctx->pc = 0x254AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254ACCu;
    // 0x254ad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256C20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256C20u, 0x254ACCu, 0x254AD4u)) {
        return;
    }
    ctx->pc = 0x254AD4u;
label_254ad4:
    // 0x254ad4: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x254ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_254ad8:
    // 0x254ad8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x254ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254adc: 0x245011e0  addiu       $s0, $v0, 0x11E0
    ctx->pc = 0x254adcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4576));
    // 0x254ae0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x254ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x254ae4: 0xac203fb0  sw          $zero, 0x3FB0($at)
    ctx->pc = 0x254ae4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B3FB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3FB0u, _value); } while (0);
    // 0x254ae8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x254ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x254aec: 0xac203fb4  sw          $zero, 0x3FB4($at)
    ctx->pc = 0x254aecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B3FB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3FB4u, _value); } while (0);
    // 0x254af0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254af4: 0xc093708  jal         func_24DC20
    ctx->pc = 0x254AF4u;
    SET_GPR_U32(ctx, 31, 0x254AFCu);
    ctx->pc = 0x254AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254AF4u;
    // 0x254af8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DC20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DC20u, 0x254AF4u, 0x254AFCu)) {
        return;
    }
    ctx->pc = 0x254AFCu;
label_254afc:
    // 0x254afc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x254AFCu;
    {
        const bool branch_taken_0x254afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254AFCu;
        // 0x254b00: 0x8f858f40  lw          $a1, -0x70C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254afc) {
            ctx->pc = 0x254B18u;
            goto label_254b18;
        }
    }
    ctx->pc = 0x254B04u;
    // 0x254b04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x254b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x254b08: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x254b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x254b0c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x254b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x254b10: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x254B10u;
    {
        const bool branch_taken_0x254b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B10u;
        // 0x254b14: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254b10) {
            ctx->pc = 0x254B44u;
            goto label_254b44;
        }
    }
    ctx->pc = 0x254B18u;
label_254b18:
    // 0x254b18: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x254B18u;
    {
        const bool branch_taken_0x254b18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x254B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B18u;
        // 0x254b1c: 0x8f878f44  lw          $a3, -0x70BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254b18) {
            ctx->pc = 0x254B2Cu;
            goto label_254b2c;
        }
    }
    ctx->pc = 0x254B20u;
    // 0x254b20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254b24: 0xc09376c  jal         func_24DDB0
    ctx->pc = 0x254B24u;
    SET_GPR_U32(ctx, 31, 0x254B2Cu);
    ctx->pc = 0x254B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254B24u;
    // 0x254b28: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DDB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DDB0u, 0x254B24u, 0x254B2Cu)) {
        return;
    }
    ctx->pc = 0x254B2Cu;
label_254b2c:
    // 0x254b2c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x254B2Cu;
    {
        const bool branch_taken_0x254b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B2Cu;
        // 0x254b30: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254b2c) {
            ctx->pc = 0x254B5Cu;
            goto label_254b5c;
        }
    }
    ctx->pc = 0x254B34u;
label_254b34:
    // 0x254b34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x254b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x254b38: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x254b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x254b3c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x254b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_254b40:
    // 0x254b40: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x254b40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
label_254b44:
    // 0x254b44: 0xc092848  jal         func_24A120
    ctx->pc = 0x254B44u;
    SET_GPR_U32(ctx, 31, 0x254B4Cu);
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x254B44u, 0x254B4Cu)) {
        return;
    }
    ctx->pc = 0x254B4Cu;
label_254b4c:
    // 0x254b4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x254b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254b50: 0xc09281a  jal         func_24A068
    ctx->pc = 0x254B50u;
    SET_GPR_U32(ctx, 31, 0x254B58u);
    ctx->pc = 0x254B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254B50u;
    // 0x254b54: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x254B50u, 0x254B58u)) {
        return;
    }
    ctx->pc = 0x254B58u;
label_254b58:
    // 0x254b58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x254b58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_254b5c:
    // 0x254b5c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x254b5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x254b60: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x254b60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x254b64: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x254b64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x254b68: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x254b68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x254b6c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x254b6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x254b70: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x254b70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x254b74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x254b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254b78: 0x3e00008  jr          $ra
    ctx->pc = 0x254B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B78u;
        // 0x254b7c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254B80u;
}
