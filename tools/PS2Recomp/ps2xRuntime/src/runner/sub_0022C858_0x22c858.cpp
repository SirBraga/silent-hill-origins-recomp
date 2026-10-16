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

// Function: sub_0022C858
// Address: 0x22c858 - 0x22c990
void sub_0022C858_0x22c858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C858_0x22c858");
#endif

    switch (ctx->pc) {
        case 0x22c8a4u: goto label_22c8a4;
        case 0x22c8b0u: goto label_22c8b0;
        case 0x22c928u: goto label_22c928;
        case 0x22c93cu: goto label_22c93c;
        case 0x22c960u: goto label_22c960;
        default: break;
    }

    ctx->pc = 0x22c858u;

label_22c858:
    // 0x22c858: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x22c858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x22c85c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x22c85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x22c860: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x22c860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x22c864: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22c864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c868: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22c868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x22c86c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22c86cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c870: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x22c870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x22c874: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x22c874u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c878: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x22c878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x22c87c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x22c87cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c880: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x22c880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x22c884: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x22c884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x22c888: 0x12600035  beqz        $s3, . + 4 + (0x35 << 2)
    ctx->pc = 0x22C888u;
    {
        const bool branch_taken_0x22c888 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C888u;
        // 0x22c88c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c888) {
            ctx->pc = 0x22C960u;
            goto label_22c960;
        }
    }
    ctx->pc = 0x22C890u;
    // 0x22c890: 0x1a800030  blez        $s4, . + 4 + (0x30 << 2)
    ctx->pc = 0x22C890u;
    {
        const bool branch_taken_0x22c890 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x22C894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C890u;
        // 0x22c894: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c890) {
            ctx->pc = 0x22C954u;
            goto label_22c954;
        }
    }
    ctx->pc = 0x22C898u;
    // 0x22c898: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x22c898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c89c: 0xc08adae  jal         func_22B6B8
    ctx->pc = 0x22C89Cu;
    SET_GPR_U32(ctx, 31, 0x22C8A4u);
    ctx->pc = 0x22C8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C89Cu;
    // 0x22c8a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B6B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B6B8u, 0x22C89Cu, 0x22C8A4u)) {
        return;
    }
    ctx->pc = 0x22C8A4u;
label_22c8a4:
    // 0x22c8a4: 0x2696ffff  addiu       $s6, $s4, -0x1
    ctx->pc = 0x22c8a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x22c8a8: 0x26b2001c  addiu       $s2, $s5, 0x1C
    ctx->pc = 0x22c8a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
    // 0x22c8ac: 0x0  nop
    ctx->pc = 0x22c8acu;
    // NOP
label_22c8b0:
    // 0x22c8b0: 0x8f8283f8  lw          $v0, -0x7C08($gp)
    ctx->pc = 0x22c8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935544)));
    // 0x22c8b4: 0x1120c3  sra         $a0, $s1, 3
    ctx->pc = 0x22c8b4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 3));
    // 0x22c8b8: 0x112883  sra         $a1, $s1, 2
    ctx->pc = 0x22c8b8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 17), 2));
    // 0x22c8bc: 0x113043  sra         $a2, $s1, 1
    ctx->pc = 0x22c8bcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 17), 1));
    // 0x22c8c0: 0x2442fff9  addiu       $v0, $v0, -0x7
    ctx->pc = 0x22c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967289));
    // 0x22c8c4: 0x92070000  lbu         $a3, 0x0($s0)
    ctx->pc = 0x22c8c4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22c8c8: 0x92090001  lbu         $t1, 0x1($s0)
    ctx->pc = 0x22c8c8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x22c8cc: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x22c8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x22c8d0: 0x920a0002  lbu         $t2, 0x2($s0)
    ctx->pc = 0x22c8d0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x22c8d4: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x22c8d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x22c8d8: 0x92080003  lbu         $t0, 0x3($s0)
    ctx->pc = 0x22c8d8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x22c8dc: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x22c8dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x22c8e0: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x22c8e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x22c8e4: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x22c8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x22c8e8: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x22c8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x22c8ec: 0x452804  sllv        $a1, $a1, $v0
    ctx->pc = 0x22c8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x22c8f0: 0x463004  sllv        $a2, $a2, $v0
    ctx->pc = 0x22c8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x22c8f4: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x22c8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x22c8f8: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x22c8f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x22c8fc: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x22c8fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x22c900: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x22c900u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x22c904: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x22c904u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x22c908: 0xa3a70000  sb          $a3, 0x0($sp)
    ctx->pc = 0x22c908u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x22c90c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x22c90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c910: 0xa3a90001  sb          $t1, 0x1($sp)
    ctx->pc = 0x22c910u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 9));
    // 0x22c914: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x22c914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c918: 0xa3aa0002  sb          $t2, 0x2($sp)
    ctx->pc = 0x22c918u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 10));
    // 0x22c91c: 0xa3a80003  sb          $t0, 0x3($sp)
    ctx->pc = 0x22c91cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x22c920: 0xc08b216  jal         func_22C858
    ctx->pc = 0x22C920u;
    SET_GPR_U32(ctx, 31, 0x22C928u);
    ctx->pc = 0x22C924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C920u;
    // 0x22c924: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C858u;
    goto label_22c858;
    ctx->pc = 0x22C928u;
label_22c928:
    // 0x22c928: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22C928u;
    {
        const bool branch_taken_0x22c928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C928u;
        // 0x22c92c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c928) {
            ctx->pc = 0x22C93Cu;
            goto label_22c93c;
        }
    }
    ctx->pc = 0x22C930u;
    // 0x22c930: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22c930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c934: 0xc08ae6e  jal         func_22B9B8
    ctx->pc = 0x22C934u;
    SET_GPR_U32(ctx, 31, 0x22C93Cu);
    ctx->pc = 0x22C938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C934u;
    // 0x22c938: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B9B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B9B8u, 0x22C934u, 0x22C93Cu)) {
        return;
    }
    ctx->pc = 0x22C93Cu;
label_22c93c:
    // 0x22c93c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22c93cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x22c940: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x22c940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x22c944: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x22C944u;
    {
        const bool branch_taken_0x22c944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C944u;
        // 0x22c948: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c944) {
            ctx->pc = 0x22C8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c8b0;
        }
    }
    ctx->pc = 0x22C94Cu;
    // 0x22c94c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22C94Cu;
    {
        const bool branch_taken_0x22c94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C94Cu;
        // 0x22c950: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c94c) {
            ctx->pc = 0x22C964u;
            goto label_22c964;
        }
    }
    ctx->pc = 0x22C954u;
label_22c954:
    // 0x22c954: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22c954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c958: 0xc08ae1a  jal         func_22B868
    ctx->pc = 0x22C958u;
    SET_GPR_U32(ctx, 31, 0x22C960u);
    ctx->pc = 0x22C95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C958u;
    // 0x22c95c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B868u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B868u, 0x22C958u, 0x22C960u)) {
        return;
    }
    ctx->pc = 0x22C960u;
label_22c960:
    // 0x22c960: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x22c960u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_22c964:
    // 0x22c964: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x22c964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22c968: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x22c968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22c96c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x22c96cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22c970: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x22c970u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22c974: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22c974u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22c978: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x22c978u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c97c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x22c97cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c980: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22c980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c984: 0x3e00008  jr          $ra
    ctx->pc = 0x22C984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C984u;
        // 0x22c988: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C98Cu;
    // 0x22c98c: 0x0  nop
    ctx->pc = 0x22c98cu;
    // NOP
    ctx->pc = 0x22c990u;
}
