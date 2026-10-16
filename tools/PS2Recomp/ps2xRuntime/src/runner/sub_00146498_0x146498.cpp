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

// Function: sub_00146498
// Address: 0x146498 - 0x146678
void sub_00146498_0x146498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146498_0x146498");
#endif

    switch (ctx->pc) {
        case 0x1464dcu: goto label_1464dc;
        case 0x146508u: goto label_146508;
        case 0x146518u: goto label_146518;
        case 0x146534u: goto label_146534;
        case 0x146550u: goto label_146550;
        case 0x146560u: goto label_146560;
        case 0x14656cu: goto label_14656c;
        case 0x14657cu: goto label_14657c;
        case 0x146580u: goto label_146580;
        case 0x14658cu: goto label_14658c;
        case 0x14659cu: goto label_14659c;
        case 0x1465b8u: goto label_1465b8;
        case 0x1465c4u: goto label_1465c4;
        case 0x1465d0u: goto label_1465d0;
        case 0x1465e8u: goto label_1465e8;
        case 0x1465f0u: goto label_1465f0;
        case 0x146608u: goto label_146608;
        case 0x146610u: goto label_146610;
        case 0x14661cu: goto label_14661c;
        case 0x146628u: goto label_146628;
        case 0x146634u: goto label_146634;
        case 0x146644u: goto label_146644;
        case 0x14664cu: goto label_14664c;
        default: break;
    }

    ctx->pc = 0x146498u;

    // 0x146498: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x146498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14649c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x14649cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1464a0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1464a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1464a4: 0x8c6284c8  lw          $v0, -0x7B38($v1)
    ctx->pc = 0x1464a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3384C8u));
    // 0x1464a8: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x1464a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1464ac: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1464acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1464b0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1464b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1464b4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1464b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1464b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1464b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1464bc: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1464bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1464c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1464C0u;
    {
        const bool branch_taken_0x1464c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1464C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1464C0u;
        // 0x1464c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1464c0) {
            ctx->pc = 0x1464D0u;
            goto label_1464d0;
        }
    }
    ctx->pc = 0x1464C8u;
    // 0x1464c8: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1464C8u;
    {
        const bool branch_taken_0x1464c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1464CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1464C8u;
        // 0x1464cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1464c8) {
            ctx->pc = 0x146650u;
            goto label_146650;
        }
    }
    ctx->pc = 0x1464D0u;
label_1464d0:
    // 0x1464d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1464d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1464d4: 0xc079cfa  jal         func_1E73E8
    ctx->pc = 0x1464D4u;
    SET_GPR_U32(ctx, 31, 0x1464DCu);
    ctx->pc = 0x1464D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1464D4u;
    // 0x1464d8: 0x3c10006b  lui         $s0, 0x6B (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73E8u, 0x1464D4u, 0x1464DCu)) {
        return;
    }
    ctx->pc = 0x1464DCu;
label_1464dc:
    // 0x1464dc: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x1464dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1464e0: 0x9e0234c8  lwu         $v0, 0x34C8($s0)
    ctx->pc = 0x1464e0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 13512)));
    // 0x1464e4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1464e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1464e8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1464e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1464ec: 0x34a5ff00  ori         $a1, $a1, 0xFF00
    ctx->pc = 0x1464ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65280);
    // 0x1464f0: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x1464f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x1464f4: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x1464f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1464f8: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x1464f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x1464fc: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x1464fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x146500: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x146500u;
    SET_GPR_U32(ctx, 31, 0x146508u);
    ctx->pc = 0x146504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146500u;
    // 0x146504: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x146500u, 0x146508u)) {
        return;
    }
    ctx->pc = 0x146508u;
label_146508:
    // 0x146508: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x146508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14650c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x14650cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x146510: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x146510u;
    SET_GPR_U32(ctx, 31, 0x146518u);
    ctx->pc = 0x146514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146510u;
    // 0x146514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x146510u, 0x146518u)) {
        return;
    }
    ctx->pc = 0x146518u;
label_146518:
    // 0x146518: 0x3c121c00  lui         $s2, 0x1C00
    ctx->pc = 0x146518u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)7168 << 16));
    // 0x14651c: 0x3405e000  ori         $a1, $zero, 0xE000
    ctx->pc = 0x14651cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x146520: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x146520u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
    // 0x146524: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x146524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x146528: 0x52ab8  dsll        $a1, $a1, 10
    ctx->pc = 0x146528u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 10);
    // 0x14652c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x14652Cu;
    SET_GPR_U32(ctx, 31, 0x146534u);
    ctx->pc = 0x146530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14652Cu;
    // 0x146530: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x14652Cu, 0x146534u)) {
        return;
    }
    ctx->pc = 0x146534u;
label_146534:
    // 0x146534: 0xde0234c0  ld          $v0, 0x34C0($s0)
    ctx->pc = 0x146534u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 13504)));
    // 0x146538: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x146538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x14653c: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x14653cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x146540: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x146540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x146544: 0x24100200  addiu       $s0, $zero, 0x200
    ctx->pc = 0x146544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x146548: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x146548u;
    SET_GPR_U32(ctx, 31, 0x146550u);
    ctx->pc = 0x14654Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146548u;
    // 0x14654c: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x146548u, 0x146550u)) {
        return;
    }
    ctx->pc = 0x146550u;
label_146550:
    // 0x146550: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x146550u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x146554: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x146554u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x146558: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x146558u;
    SET_GPR_U32(ctx, 31, 0x146560u);
    ctx->pc = 0x14655Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146558u;
    // 0x14655c: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x146558u, 0x146560u)) {
        return;
    }
    ctx->pc = 0x146560u;
label_146560:
    // 0x146560: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x146560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146564: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x146564u;
    SET_GPR_U32(ctx, 31, 0x14656Cu);
    ctx->pc = 0x146568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146564u;
    // 0x146568: 0x24050146  addiu       $a1, $zero, 0x146 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 326));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x146564u, 0x14656Cu)) {
        return;
    }
    ctx->pc = 0x14656Cu;
label_14656c:
    // 0x14656c: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x14656cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x146570: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x146570u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x146574: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x146574u;
    SET_GPR_U32(ctx, 31, 0x14657Cu);
    ctx->pc = 0x146578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146574u;
    // 0x146578: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x146574u, 0x14657Cu)) {
        return;
    }
    ctx->pc = 0x14657Cu;
label_14657c:
    // 0x14657c: 0x112a40  sll         $a1, $s1, 9
    ctx->pc = 0x14657cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
label_146580:
    // 0x146580: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x146580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x146584: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x146584u;
    SET_GPR_U32(ctx, 31, 0x14658Cu);
    ctx->pc = 0x146588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146584u;
    // 0x146588: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x146584u, 0x14658Cu)) {
        return;
    }
    ctx->pc = 0x14658Cu;
label_14658c:
    // 0x14658c: 0x2122825  or          $a1, $s0, $s2
    ctx->pc = 0x14658cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 18));
    // 0x146590: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x146590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x146594: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x146594u;
    SET_GPR_U32(ctx, 31, 0x14659Cu);
    ctx->pc = 0x146598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146594u;
    // 0x146598: 0x26100200  addiu       $s0, $s0, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x146594u, 0x14659Cu)) {
        return;
    }
    ctx->pc = 0x14659Cu;
label_14659c:
    // 0x14659c: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x14659cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1465a0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1465A0u;
    {
        const bool branch_taken_0x1465a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1465a0) {
            ctx->pc = 0x1465A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1465A0u;
            // 0x1465a4: 0x112a40  sll         $a1, $s1, 9 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146580;
        }
    }
    ctx->pc = 0x1465A8u;
    // 0x1465a8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1465a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1465ac: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1465acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1465b0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1465B0u;
    SET_GPR_U32(ctx, 31, 0x1465B8u);
    ctx->pc = 0x1465B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1465B0u;
    // 0x1465b4: 0xdc4534d8  ld          $a1, 0x34D8($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1465B0u, 0x1465B8u)) {
        return;
    }
    ctx->pc = 0x1465B8u;
label_1465b8:
    // 0x1465b8: 0xde6534c0  ld          $a1, 0x34C0($s3)
    ctx->pc = 0x1465b8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 13504)));
    // 0x1465bc: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1465BCu;
    SET_GPR_U32(ctx, 31, 0x1465C4u);
    ctx->pc = 0x1465C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1465BCu;
    // 0x1465c0: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1465BCu, 0x1465C4u)) {
        return;
    }
    ctx->pc = 0x1465C4u;
label_1465c4:
    // 0x1465c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1465c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1465c8: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1465C8u;
    SET_GPR_U32(ctx, 31, 0x1465D0u);
    ctx->pc = 0x1465CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1465C8u;
    // 0x1465cc: 0x2404004a  addiu       $a0, $zero, 0x4A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1465C8u, 0x1465D0u)) {
        return;
    }
    ctx->pc = 0x1465D0u;
label_1465d0:
    // 0x1465d0: 0xde6234c0  ld          $v0, 0x34C0($s3)
    ctx->pc = 0x1465d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 13504)));
    // 0x1465d4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1465d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1465d8: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x1465d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x1465dc: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x1465dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1465e0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1465E0u;
    SET_GPR_U32(ctx, 31, 0x1465E8u);
    ctx->pc = 0x1465E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1465E0u;
    // 0x1465e4: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1465E0u, 0x1465E8u)) {
        return;
    }
    ctx->pc = 0x1465E8u;
label_1465e8:
    // 0x1465e8: 0xc079ca0  jal         func_1E7280
    ctx->pc = 0x1465E8u;
    SET_GPR_U32(ctx, 31, 0x1465F0u);
    ctx->pc = 0x1465ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1465E8u;
    // 0x1465ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7280u, 0x1465E8u, 0x1465F0u)) {
        return;
    }
    ctx->pc = 0x1465F0u;
label_1465f0:
    // 0x1465f0: 0x8e8284c8  lw          $v0, -0x7B38($s4)
    ctx->pc = 0x1465f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294935752)));
    // 0x1465f4: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x1465f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x1465f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1465f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1465fc: 0x24a56c68  addiu       $a1, $a1, 0x6C68
    ctx->pc = 0x1465fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27752));
    // 0x146600: 0xc09545a  jal         func_255168
    ctx->pc = 0x146600u;
    SET_GPR_U32(ctx, 31, 0x146608u);
    ctx->pc = 0x146604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146600u;
    // 0x146604: 0x8c44004c  lw          $a0, 0x4C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x146600u, 0x146608u)) {
        return;
    }
    ctx->pc = 0x146608u;
label_146608:
    // 0x146608: 0xc079cfa  jal         func_1E73E8
    ctx->pc = 0x146608u;
    SET_GPR_U32(ctx, 31, 0x146610u);
    ctx->pc = 0x14660Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146608u;
    // 0x14660c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73E8u, 0x146608u, 0x146610u)) {
        return;
    }
    ctx->pc = 0x146610u;
label_146610:
    // 0x146610: 0x2404004a  addiu       $a0, $zero, 0x4A
    ctx->pc = 0x146610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x146614: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x146614u;
    SET_GPR_U32(ctx, 31, 0x14661Cu);
    ctx->pc = 0x146618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146614u;
    // 0x146618: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x146614u, 0x14661Cu)) {
        return;
    }
    ctx->pc = 0x14661Cu;
label_14661c:
    // 0x14661c: 0x9ea534c8  lwu         $a1, 0x34C8($s5)
    ctx->pc = 0x14661cu;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 13512)));
    // 0x146620: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x146620u;
    SET_GPR_U32(ctx, 31, 0x146628u);
    ctx->pc = 0x146624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146620u;
    // 0x146624: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x146620u, 0x146628u)) {
        return;
    }
    ctx->pc = 0x146628u;
label_146628:
    // 0x146628: 0xde6534c0  ld          $a1, 0x34C0($s3)
    ctx->pc = 0x146628u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 13504)));
    // 0x14662c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x14662Cu;
    SET_GPR_U32(ctx, 31, 0x146634u);
    ctx->pc = 0x146630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14662Cu;
    // 0x146630: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x14662Cu, 0x146634u)) {
        return;
    }
    ctx->pc = 0x146634u;
label_146634:
    // 0x146634: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x146634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x146638: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x146638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x14663c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x14663Cu;
    SET_GPR_U32(ctx, 31, 0x146644u);
    ctx->pc = 0x146640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14663Cu;
    // 0x146640: 0xdc453500  ld          $a1, 0x3500($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13568)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x14663Cu, 0x146644u)) {
        return;
    }
    ctx->pc = 0x146644u;
label_146644:
    // 0x146644: 0xc079ca0  jal         func_1E7280
    ctx->pc = 0x146644u;
    SET_GPR_U32(ctx, 31, 0x14664Cu);
    ctx->pc = 0x146648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146644u;
    // 0x146648: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7280u, 0x146644u, 0x14664Cu)) {
        return;
    }
    ctx->pc = 0x14664Cu;
label_14664c:
    // 0x14664c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x14664cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_146650:
    // 0x146650: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x146650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x146654: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x146654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x146658: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x146658u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14665c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14665cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x146660: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x146660u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x146664: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x146664u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146668: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x146668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14666c: 0x3e00008  jr          $ra
    ctx->pc = 0x14666Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14666Cu;
        // 0x146670: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14666Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146674u;
    // 0x146674: 0x0  nop
    ctx->pc = 0x146674u;
    // NOP
    ctx->pc = 0x146678u;
}
