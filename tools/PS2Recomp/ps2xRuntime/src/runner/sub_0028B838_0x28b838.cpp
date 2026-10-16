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

// Function: sub_0028B838
// Address: 0x28b838 - 0x28bae0
void sub_0028B838_0x28b838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B838_0x28b838");
#endif

    switch (ctx->pc) {
        case 0x28b86cu: goto label_28b86c;
        case 0x28b898u: goto label_28b898;
        case 0x28b8acu: goto label_28b8ac;
        case 0x28b8c0u: goto label_28b8c0;
        case 0x28b8dcu: goto label_28b8dc;
        case 0x28b8f4u: goto label_28b8f4;
        case 0x28b900u: goto label_28b900;
        case 0x28b910u: goto label_28b910;
        case 0x28b948u: goto label_28b948;
        case 0x28b958u: goto label_28b958;
        case 0x28b964u: goto label_28b964;
        case 0x28b978u: goto label_28b978;
        case 0x28b988u: goto label_28b988;
        case 0x28b994u: goto label_28b994;
        case 0x28b9a8u: goto label_28b9a8;
        case 0x28b9b8u: goto label_28b9b8;
        case 0x28b9c4u: goto label_28b9c4;
        case 0x28b9e0u: goto label_28b9e0;
        case 0x28b9e8u: goto label_28b9e8;
        case 0x28b9f8u: goto label_28b9f8;
        case 0x28ba04u: goto label_28ba04;
        case 0x28ba18u: goto label_28ba18;
        case 0x28ba28u: goto label_28ba28;
        case 0x28ba34u: goto label_28ba34;
        case 0x28ba48u: goto label_28ba48;
        case 0x28ba58u: goto label_28ba58;
        case 0x28ba64u: goto label_28ba64;
        case 0x28ba78u: goto label_28ba78;
        case 0x28ba88u: goto label_28ba88;
        case 0x28ba94u: goto label_28ba94;
        default: break;
    }

    ctx->pc = 0x28b838u;

    // 0x28b838: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28b838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28b83c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28b83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28b840: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x28b840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x28b844: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28b844u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b848: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x28b848u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b84c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x28b84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x28b850: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x28b850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x28b854: 0x26840100  addiu       $a0, $s4, 0x100
    ctx->pc = 0x28b854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
    // 0x28b858: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x28b858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x28b85c: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x28b85cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b860: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x28b860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x28b864: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x28b864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28b868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28b86c:
    // 0x28b86c: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x28b86cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28b870: 0x78460010  lq          $a2, 0x10($v0)
    ctx->pc = 0x28b870u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x28b874: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x28b874u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x28b878: 0x7c660010  sq          $a2, 0x10($v1)
    ctx->pc = 0x28b878u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 6));
    // 0x28b87c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x28b87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x28b880: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28B880u;
    {
        const bool branch_taken_0x28b880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x28B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B880u;
        // 0x28b884: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b880) {
            ctx->pc = 0x28B86Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b86c;
        }
    }
    ctx->pc = 0x28B888u;
    // 0x28b888: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x28b888u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28b88c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28b88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b890: 0xc0a2da8  jal         func_28B6A0
    ctx->pc = 0x28B890u;
    SET_GPR_U32(ctx, 31, 0x28B898u);
    ctx->pc = 0x28B894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B890u;
    // 0x28b894: 0x7c650000  sq          $a1, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B6A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28B6A0u, 0x28B890u, 0x28B898u)) {
        return;
    }
    ctx->pc = 0x28B898u;
label_28b898:
    // 0x28b898: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x28b898u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x28b89c: 0x24040110  addiu       $a0, $zero, 0x110
    ctx->pc = 0x28b89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x28b8a0: 0x34a50190  ori         $a1, $a1, 0x190
    ctx->pc = 0x28b8a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
    // 0x28b8a4: 0xc092858  jal         func_24A160
    ctx->pc = 0x28B8A4u;
    SET_GPR_U32(ctx, 31, 0x28B8ACu);
    ctx->pc = 0x28B8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B8A4u;
    // 0x28b8a8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A160u, 0x28B8A4u, 0x28B8ACu)) {
        return;
    }
    ctx->pc = 0x28B8ACu;
label_28b8ac:
    // 0x28b8ac: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x28b8acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x28b8b0: 0xae6200b0  sw          $v0, 0xB0($s3)
    ctx->pc = 0x28b8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 2));
    // 0x28b8b4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x28b8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x28b8b8: 0xc092858  jal         func_24A160
    ctx->pc = 0x28B8B8u;
    SET_GPR_U32(ctx, 31, 0x28B8C0u);
    ctx->pc = 0x28B8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B8B8u;
    // 0x28b8bc: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A160u, 0x28B8B8u, 0x28B8C0u)) {
        return;
    }
    ctx->pc = 0x28B8C0u;
label_28b8c0:
    // 0x28b8c0: 0x12a0007b  beqz        $s5, . + 4 + (0x7B << 2)
    ctx->pc = 0x28B8C0u;
    {
        const bool branch_taken_0x28b8c0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B8C0u;
        // 0x28b8c4: 0xae6200b8  sw          $v0, 0xB8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b8c0) {
            ctx->pc = 0x28BAB0u;
            goto label_28bab0;
        }
    }
    ctx->pc = 0x28B8C8u;
    // 0x28b8c8: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x28b8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x28b8cc: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x28b8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x28b8d0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x28b8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b8d4: 0xc0928de  jal         func_24A378
    ctx->pc = 0x28B8D4u;
    SET_GPR_U32(ctx, 31, 0x28B8DCu);
    ctx->pc = 0x28B8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B8D4u;
    // 0x28b8d8: 0x34c60190  ori         $a2, $a2, 0x190 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)400);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A378u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A378u, 0x28B8D4u, 0x28B8DCu)) {
        return;
    }
    ctx->pc = 0x28B8DCu;
label_28b8dc:
    // 0x28b8dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28b8dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b8e0: 0x8e6400b8  lw          $a0, 0xB8($s3)
    ctx->pc = 0x28b8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
    // 0x28b8e4: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x28b8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x28b8e8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x28b8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b8ec: 0xc0928de  jal         func_24A378
    ctx->pc = 0x28B8ECu;
    SET_GPR_U32(ctx, 31, 0x28B8F4u);
    ctx->pc = 0x28B8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B8ECu;
    // 0x28b8f0: 0x34c60190  ori         $a2, $a2, 0x190 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)400);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A378u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A378u, 0x28B8ECu, 0x28B8F4u)) {
        return;
    }
    ctx->pc = 0x28B8F4u;
label_28b8f4:
    // 0x28b8f4: 0x8e8400b8  lw          $a0, 0xB8($s4)
    ctx->pc = 0x28b8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
    // 0x28b8f8: 0xc09292a  jal         func_24A4A8
    ctx->pc = 0x28B8F8u;
    SET_GPR_U32(ctx, 31, 0x28B900u);
    ctx->pc = 0x28B8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B8F8u;
    // 0x28b8fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x28B8F8u, 0x28B900u)) {
        return;
    }
    ctx->pc = 0x28B900u;
label_28b900:
    // 0x28b900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b904: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28b904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b908: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x28B908u;
    SET_GPR_U32(ctx, 31, 0x28B910u);
    ctx->pc = 0x28B90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B908u;
    // 0x28b90c: 0x1530c0  sll         $a2, $s5, 3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x28B908u, 0x28B910u)) {
        return;
    }
    ctx->pc = 0x28B910u;
label_28b910:
    // 0x28b910: 0x12a00068  beqz        $s5, . + 4 + (0x68 << 2)
    ctx->pc = 0x28B910u;
    {
        const bool branch_taken_0x28b910 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B910u;
        // 0x28b914: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b910) {
            ctx->pc = 0x28BAB4u;
            goto label_28bab4;
        }
    }
    ctx->pc = 0x28B918u;
    // 0x28b918: 0x1aa00020  blez        $s5, . + 4 + (0x20 << 2)
    ctx->pc = 0x28B918u;
    {
        const bool branch_taken_0x28b918 = (GPR_S64(ctx, 21) <= 0);
        ctx->pc = 0x28B91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B918u;
        // 0x28b91c: 0x32a30003  andi        $v1, $s5, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b918) {
            ctx->pc = 0x28B99Cu;
            goto label_28b99c;
        }
    }
    ctx->pc = 0x28B920u;
    // 0x28b920: 0x5060002f  beql        $v1, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x28B920u;
    {
        const bool branch_taken_0x28b920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b920) {
            ctx->pc = 0x28B924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B920u;
            // 0x28b924: 0x8e6400b0  lw          $a0, 0xB0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B9E0u;
            goto label_28b9e0;
        }
    }
    ctx->pc = 0x28B928u;
    // 0x28b928: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x28b928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28b92c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x28B92Cu;
    {
        const bool branch_taken_0x28b92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B92Cu;
        // 0x28b930: 0x8e6400b0  lw          $a0, 0xB0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b92c) {
            ctx->pc = 0x28B9A0u;
            goto label_28b9a0;
        }
    }
    ctx->pc = 0x28B934u;
    // 0x28b934: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x28b934u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x28b938: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28B938u;
    {
        const bool branch_taken_0x28b938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b938) {
            ctx->pc = 0x28B970u;
            goto label_28b970;
        }
    }
    ctx->pc = 0x28B940u;
    // 0x28b940: 0xc09296e  jal         func_24A5B8
    ctx->pc = 0x28B940u;
    SET_GPR_U32(ctx, 31, 0x28B948u);
    ctx->pc = 0x28B944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B940u;
    // 0x28b944: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5B8u, 0x28B940u, 0x28B948u)) {
        return;
    }
    ctx->pc = 0x28B948u;
label_28b948:
    // 0x28b948: 0x8e8400b0  lw          $a0, 0xB0($s4)
    ctx->pc = 0x28b948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x28b94c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28b94cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b950: 0xc09296e  jal         func_24A5B8
    ctx->pc = 0x28B950u;
    SET_GPR_U32(ctx, 31, 0x28B958u);
    ctx->pc = 0x28B954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B950u;
    // 0x28b954: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5B8u, 0x28B950u, 0x28B958u)) {
        return;
    }
    ctx->pc = 0x28B958u;
label_28b958:
    // 0x28b958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b95c: 0xc0a24a6  jal         func_289298
    ctx->pc = 0x28B95Cu;
    SET_GPR_U32(ctx, 31, 0x28B964u);
    ctx->pc = 0x28B960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B95Cu;
    // 0x28b960: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289298u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289298u, 0x28B95Cu, 0x28B964u)) {
        return;
    }
    ctx->pc = 0x28B964u;
label_28b964:
    // 0x28b964: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x28B964u;
    {
        const bool branch_taken_0x28b964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B964u;
        // 0x28b968: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b964) {
            ctx->pc = 0x28BA9Cu;
            goto label_28ba9c;
        }
    }
    ctx->pc = 0x28B96Cu;
    // 0x28b96c: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x28b96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_28b970:
    // 0x28b970: 0xc09296e  jal         func_24A5B8
    ctx->pc = 0x28B970u;
    SET_GPR_U32(ctx, 31, 0x28B978u);
    ctx->pc = 0x28B974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B970u;
    // 0x28b974: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5B8u, 0x28B970u, 0x28B978u)) {
        return;
    }
    ctx->pc = 0x28B978u;
label_28b978:
    // 0x28b978: 0x8e8400b0  lw          $a0, 0xB0($s4)
    ctx->pc = 0x28b978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x28b97c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28b97cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b980: 0xc09296e  jal         func_24A5B8
    ctx->pc = 0x28B980u;
    SET_GPR_U32(ctx, 31, 0x28B988u);
    ctx->pc = 0x28B984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B980u;
    // 0x28b984: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5B8u, 0x28B980u, 0x28B988u)) {
        return;
    }
    ctx->pc = 0x28B988u;
label_28b988:
    // 0x28b988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b98c: 0xc0a24a6  jal         func_289298
    ctx->pc = 0x28B98Cu;
    SET_GPR_U32(ctx, 31, 0x28B994u);
    ctx->pc = 0x28B990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B98Cu;
    // 0x28b990: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289298u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289298u, 0x28B98Cu, 0x28B994u)) {
        return;
    }
    ctx->pc = 0x28B994u;
label_28b994:
    // 0x28b994: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x28B994u;
    {
        const bool branch_taken_0x28b994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B994u;
        // 0x28b998: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b994) {
            ctx->pc = 0x28BA9Cu;
            goto label_28ba9c;
        }
    }
    ctx->pc = 0x28B99Cu;
label_28b99c:
    // 0x28b99c: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x28b99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_28b9a0:
    // 0x28b9a0: 0xc09296e  jal         func_24A5B8
    ctx->pc = 0x28B9A0u;
    SET_GPR_U32(ctx, 31, 0x28B9A8u);
    ctx->pc = 0x28B9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B9A0u;
    // 0x28b9a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5B8u, 0x28B9A0u, 0x28B9A8u)) {
        return;
    }
    ctx->pc = 0x28B9A8u;
label_28b9a8:
    // 0x28b9a8: 0x8e8400b0  lw          $a0, 0xB0($s4)
    ctx->pc = 0x28b9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x28b9ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28b9acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b9b0: 0xc09296e  jal         func_24A5B8
    ctx->pc = 0x28B9B0u;
    SET_GPR_U32(ctx, 31, 0x28B9B8u);
    ctx->pc = 0x28B9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B9B0u;
    // 0x28b9b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5B8u, 0x28B9B0u, 0x28B9B8u)) {
        return;
    }
    ctx->pc = 0x28B9B8u;
label_28b9b8:
    // 0x28b9b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b9bc: 0xc0a24a6  jal         func_289298
    ctx->pc = 0x28B9BCu;
    SET_GPR_U32(ctx, 31, 0x28B9C4u);
    ctx->pc = 0x28B9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B9BCu;
    // 0x28b9c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289298u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289298u, 0x28B9BCu, 0x28B9C4u)) {
        return;
    }
    ctx->pc = 0x28B9C4u;
label_28b9c4:
    // 0x28b9c4: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x28B9C4u;
    {
        const bool branch_taken_0x28b9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B9C4u;
        // 0x28b9c8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b9c4) {
            ctx->pc = 0x28BA9Cu;
            goto label_28ba9c;
        }
    }
    ctx->pc = 0x28B9CCu;
    // 0x28b9cc: 0x255102b  sltu        $v0, $s2, $s5
    ctx->pc = 0x28b9ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x28b9d0: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x28B9D0u;
    {
        const bool branch_taken_0x28b9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B9D0u;
        // 0x28b9d4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b9d0) {
            ctx->pc = 0x28BAB4u;
            goto label_28bab4;
        }
    }
    ctx->pc = 0x28B9D8u;
    // 0x28b9d8: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x28b9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x28b9dc: 0x0  nop
    ctx->pc = 0x28b9dcu;
    // NOP
label_28b9e0:
    // 0x28b9e0: 0xc09296e  jal         func_24A5B8
    ctx->pc = 0x28B9E0u;
    SET_GPR_U32(ctx, 31, 0x28B9E8u);
    ctx->pc = 0x28B9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B9E0u;
    // 0x28b9e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5B8u, 0x28B9E0u, 0x28B9E8u)) {
        return;
    }
    ctx->pc = 0x28B9E8u;
label_28b9e8:
    // 0x28b9e8: 0x8e8400b0  lw          $a0, 0xB0($s4)
    ctx->pc = 0x28b9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x28b9ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28b9ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b9f0: 0xc09296e  jal         func_24A5B8
    ctx->pc = 0x28B9F0u;
    SET_GPR_U32(ctx, 31, 0x28B9F8u);
    ctx->pc = 0x28B9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B9F0u;
    // 0x28b9f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5B8u, 0x28B9F0u, 0x28B9F8u)) {
        return;
    }
    ctx->pc = 0x28B9F8u;
label_28b9f8:
    // 0x28b9f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b9fc: 0xc0a24a6  jal         func_289298
    ctx->pc = 0x28B9FCu;
    SET_GPR_U32(ctx, 31, 0x28BA04u);
    ctx->pc = 0x28BA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B9FCu;
    // 0x28ba00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289298u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289298u, 0x28B9FCu, 0x28BA04u)) {
        return;
    }
    ctx->pc = 0x28BA04u;
label_28ba04:
    // 0x28ba04: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x28BA04u;
    {
        const bool branch_taken_0x28ba04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA04u;
        // 0x28ba08: 0x26510001  addiu       $s1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba04) {
            ctx->pc = 0x28BA9Cu;
            goto label_28ba9c;
        }
    }
    ctx->pc = 0x28BA0Cu;
    // 0x28ba0c: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x28ba0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x28ba10: 0xc09296e  jal         func_24A5B8
    ctx->pc = 0x28BA10u;
    SET_GPR_U32(ctx, 31, 0x28BA18u);
    ctx->pc = 0x28BA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BA10u;
    // 0x28ba14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5B8u, 0x28BA10u, 0x28BA18u)) {
        return;
    }
    ctx->pc = 0x28BA18u;
label_28ba18:
    // 0x28ba18: 0x8e8400b0  lw          $a0, 0xB0($s4)
    ctx->pc = 0x28ba18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x28ba1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28ba1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ba20: 0xc09296e  jal         func_24A5B8
    ctx->pc = 0x28BA20u;
    SET_GPR_U32(ctx, 31, 0x28BA28u);
    ctx->pc = 0x28BA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BA20u;
    // 0x28ba24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5B8u, 0x28BA20u, 0x28BA28u)) {
        return;
    }
    ctx->pc = 0x28BA28u;
label_28ba28:
    // 0x28ba28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ba28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ba2c: 0xc0a24a6  jal         func_289298
    ctx->pc = 0x28BA2Cu;
    SET_GPR_U32(ctx, 31, 0x28BA34u);
    ctx->pc = 0x28BA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BA2Cu;
    // 0x28ba30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289298u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289298u, 0x28BA2Cu, 0x28BA34u)) {
        return;
    }
    ctx->pc = 0x28BA34u;
label_28ba34:
    // 0x28ba34: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x28BA34u;
    {
        const bool branch_taken_0x28ba34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA34u;
        // 0x28ba38: 0x26510002  addiu       $s1, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba34) {
            ctx->pc = 0x28BA9Cu;
            goto label_28ba9c;
        }
    }
    ctx->pc = 0x28BA3Cu;
    // 0x28ba3c: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x28ba3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x28ba40: 0xc09296e  jal         func_24A5B8
    ctx->pc = 0x28BA40u;
    SET_GPR_U32(ctx, 31, 0x28BA48u);
    ctx->pc = 0x28BA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BA40u;
    // 0x28ba44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5B8u, 0x28BA40u, 0x28BA48u)) {
        return;
    }
    ctx->pc = 0x28BA48u;
label_28ba48:
    // 0x28ba48: 0x8e8400b0  lw          $a0, 0xB0($s4)
    ctx->pc = 0x28ba48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x28ba4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28ba4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ba50: 0xc09296e  jal         func_24A5B8
    ctx->pc = 0x28BA50u;
    SET_GPR_U32(ctx, 31, 0x28BA58u);
    ctx->pc = 0x28BA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BA50u;
    // 0x28ba54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5B8u, 0x28BA50u, 0x28BA58u)) {
        return;
    }
    ctx->pc = 0x28BA58u;
label_28ba58:
    // 0x28ba58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ba58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ba5c: 0xc0a24a6  jal         func_289298
    ctx->pc = 0x28BA5Cu;
    SET_GPR_U32(ctx, 31, 0x28BA64u);
    ctx->pc = 0x28BA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BA5Cu;
    // 0x28ba60: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289298u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289298u, 0x28BA5Cu, 0x28BA64u)) {
        return;
    }
    ctx->pc = 0x28BA64u;
label_28ba64:
    // 0x28ba64: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28BA64u;
    {
        const bool branch_taken_0x28ba64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA64u;
        // 0x28ba68: 0x26510003  addiu       $s1, $s2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba64) {
            ctx->pc = 0x28BA9Cu;
            goto label_28ba9c;
        }
    }
    ctx->pc = 0x28BA6Cu;
    // 0x28ba6c: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x28ba6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x28ba70: 0xc09296e  jal         func_24A5B8
    ctx->pc = 0x28BA70u;
    SET_GPR_U32(ctx, 31, 0x28BA78u);
    ctx->pc = 0x28BA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BA70u;
    // 0x28ba74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5B8u, 0x28BA70u, 0x28BA78u)) {
        return;
    }
    ctx->pc = 0x28BA78u;
label_28ba78:
    // 0x28ba78: 0x8e8400b0  lw          $a0, 0xB0($s4)
    ctx->pc = 0x28ba78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x28ba7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28ba7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ba80: 0xc09296e  jal         func_24A5B8
    ctx->pc = 0x28BA80u;
    SET_GPR_U32(ctx, 31, 0x28BA88u);
    ctx->pc = 0x28BA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BA80u;
    // 0x28ba84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5B8u, 0x28BA80u, 0x28BA88u)) {
        return;
    }
    ctx->pc = 0x28BA88u;
label_28ba88:
    // 0x28ba88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ba88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ba8c: 0xc0a24a6  jal         func_289298
    ctx->pc = 0x28BA8Cu;
    SET_GPR_U32(ctx, 31, 0x28BA94u);
    ctx->pc = 0x28BA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BA8Cu;
    // 0x28ba90: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289298u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289298u, 0x28BA8Cu, 0x28BA94u)) {
        return;
    }
    ctx->pc = 0x28BA94u;
label_28ba94:
    // 0x28ba94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28BA94u;
    {
        const bool branch_taken_0x28ba94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA94u;
        // 0x28ba98: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba94) {
            ctx->pc = 0x28BAA4u;
            goto label_28baa4;
        }
    }
    ctx->pc = 0x28BA9Cu;
label_28ba9c:
    // 0x28ba9c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28BA9Cu;
    {
        const bool branch_taken_0x28ba9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA9Cu;
        // 0x28baa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba9c) {
            ctx->pc = 0x28BAB4u;
            goto label_28bab4;
        }
    }
    ctx->pc = 0x28BAA4u;
label_28baa4:
    // 0x28baa4: 0x255102b  sltu        $v0, $s2, $s5
    ctx->pc = 0x28baa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x28baa8: 0x5440ffcd  bnel        $v0, $zero, . + 4 + (-0x33 << 2)
    ctx->pc = 0x28BAA8u;
    {
        const bool branch_taken_0x28baa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28baa8) {
            ctx->pc = 0x28BAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BAA8u;
            // 0x28baac: 0x8e6400b0  lw          $a0, 0xB0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B9E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b9e0;
        }
    }
    ctx->pc = 0x28BAB0u;
label_28bab0:
    // 0x28bab0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x28bab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28bab4:
    // 0x28bab4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x28bab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28bab8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x28bab8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28babc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x28babcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28bac0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28bac0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28bac4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x28bac4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28bac8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x28bac8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28bacc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28baccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28bad0: 0x3e00008  jr          $ra
    ctx->pc = 0x28BAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BAD0u;
        // 0x28bad4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28BAD8u;
    // 0x28bad8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x28bad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28badc: 0x0  nop
    ctx->pc = 0x28badcu;
    // NOP
    ctx->pc = 0x28bae0u;
}
