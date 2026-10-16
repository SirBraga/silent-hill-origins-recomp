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

// Function: sub_001E7458
// Address: 0x1e7458 - 0x1e7700
void sub_001E7458_0x1e7458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7458_0x1e7458");
#endif

    switch (ctx->pc) {
        case 0x1e749cu: goto label_1e749c;
        case 0x1e74a8u: goto label_1e74a8;
        case 0x1e74c4u: goto label_1e74c4;
        case 0x1e74dcu: goto label_1e74dc;
        case 0x1e74ecu: goto label_1e74ec;
        case 0x1e7530u: goto label_1e7530;
        case 0x1e753cu: goto label_1e753c;
        case 0x1e7578u: goto label_1e7578;
        case 0x1e7584u: goto label_1e7584;
        case 0x1e7598u: goto label_1e7598;
        case 0x1e75acu: goto label_1e75ac;
        case 0x1e75bcu: goto label_1e75bc;
        case 0x1e75c8u: goto label_1e75c8;
        case 0x1e75dcu: goto label_1e75dc;
        case 0x1e7610u: goto label_1e7610;
        case 0x1e7620u: goto label_1e7620;
        case 0x1e7630u: goto label_1e7630;
        case 0x1e7650u: goto label_1e7650;
        case 0x1e766cu: goto label_1e766c;
        case 0x1e769cu: goto label_1e769c;
        case 0x1e76acu: goto label_1e76ac;
        case 0x1e76bcu: goto label_1e76bc;
        case 0x1e76c8u: goto label_1e76c8;
        case 0x1e76d0u: goto label_1e76d0;
        default: break;
    }

    ctx->pc = 0x1e7458u;

    // 0x1e7458: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e7458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1e745c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1e745cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1e7460: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1e7460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1e7464: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e7464u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7468: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1e7468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1e746c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e746cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7470: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1e7470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1e7474: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e7474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7478: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1e7478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1e747c: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x1e747cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x1e7480: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e7480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1e7484: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1e7484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1e7488: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1e7488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1e748c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1e748cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1e7490: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7494: 0xc079cfa  jal         func_1E73E8
    ctx->pc = 0x1E7494u;
    SET_GPR_U32(ctx, 31, 0x1E749Cu);
    ctx->pc = 0x1E7498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7494u;
    // 0x1e7498: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73E8u, 0x1E7494u, 0x1E749Cu)) {
        return;
    }
    ctx->pc = 0x1E749Cu;
label_1e749c:
    // 0x1e749c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e749cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e74a0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E74A0u;
    SET_GPR_U32(ctx, 31, 0x1E74A8u);
    ctx->pc = 0x1E74A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E74A0u;
    // 0x1e74a4: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E74A0u, 0x1E74A8u)) {
        return;
    }
    ctx->pc = 0x1E74A8u;
label_1e74a8:
    // 0x1e74a8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e74a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e74ac: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e74acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e74b0: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1e74b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e74b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1e74b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1e74b8: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x1e74b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1e74bc: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E74BCu;
    SET_GPR_U32(ctx, 31, 0x1E74C4u);
    ctx->pc = 0x1E74C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E74BCu;
    // 0x1e74c0: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E74BCu, 0x1E74C4u)) {
        return;
    }
    ctx->pc = 0x1E74C4u;
label_1e74c4:
    // 0x1e74c4: 0xde0234c0  ld          $v0, 0x34C0($s0)
    ctx->pc = 0x1e74c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 13504)));
    // 0x1e74c8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1e74c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e74cc: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x1e74ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x1e74d0: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x1e74d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1e74d4: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E74D4u;
    SET_GPR_U32(ctx, 31, 0x1E74DCu);
    ctx->pc = 0x1E74D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E74D4u;
    // 0x1e74d8: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E74D4u, 0x1E74DCu)) {
        return;
    }
    ctx->pc = 0x1E74DCu;
label_1e74dc:
    // 0x1e74dc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x1e74dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x1e74e0: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x1e74e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x1e74e4: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E74E4u;
    SET_GPR_U32(ctx, 31, 0x1E74ECu);
    ctx->pc = 0x1E74E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E74E4u;
    // 0x1e74e8: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E74E4u, 0x1E74ECu)) {
        return;
    }
    ctx->pc = 0x1E74ECu;
label_1e74ec:
    // 0x1e74ec: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1e74ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e74f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e74f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e74f4: 0xdc4534c8  ld          $a1, 0x34C8($v0)
    ctx->pc = 0x1e74f4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6B34C8u));
    // 0x1e74f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e74f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e74fc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1e74fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1e7500: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x1e7500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x1e7504: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1e7504u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x1e7508: 0x30a501ff  andi        $a1, $a1, 0x1FF
    ctx->pc = 0x1e7508u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)511);
    // 0x1e750c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1e750cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x1e7510: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x1e7510u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x1e7514: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x1e7514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x1e7518: 0x3403cc80  ori         $v1, $zero, 0xCC80
    ctx->pc = 0x1e7518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52352);
    // 0x1e751c: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x1e751cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x1e7520: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1e7520u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1e7524: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1e7524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e7528: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7528u;
    SET_GPR_U32(ctx, 31, 0x1E7530u);
    ctx->pc = 0x1E752Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7528u;
    // 0x1e752c: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7528u, 0x1E7530u)) {
        return;
    }
    ctx->pc = 0x1E7530u;
label_1e7530:
    // 0x1e7530: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1e7530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1e7534: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7534u;
    SET_GPR_U32(ctx, 31, 0x1E753Cu);
    ctx->pc = 0x1E7538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7534u;
    // 0x1e7538: 0x24050201  addiu       $a1, $zero, 0x201 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7534u, 0x1E753Cu)) {
        return;
    }
    ctx->pc = 0x1E753Cu;
label_1e753c:
    // 0x1e753c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e753cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7540: 0x12220012  beq         $s1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E7540u;
    {
        const bool branch_taken_0x1e7540 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E7544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7540u;
        // 0x1e7544: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7540) {
            ctx->pc = 0x1E758Cu;
            goto label_1e758c;
        }
    }
    ctx->pc = 0x1E7548u;
    // 0x1e7548: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7548u;
    {
        const bool branch_taken_0x1e7548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7548u;
        // 0x1e754c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7548) {
            ctx->pc = 0x1E7560u;
            goto label_1e7560;
        }
    }
    ctx->pc = 0x1E7550u;
    // 0x1e7550: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7550u;
    {
        const bool branch_taken_0x1e7550 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7550u;
        // 0x1e7554: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7550) {
            ctx->pc = 0x1E7570u;
            goto label_1e7570;
        }
    }
    ctx->pc = 0x1E7558u;
    // 0x1e7558: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1E7558u;
    {
        const bool branch_taken_0x1e7558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7558) {
            ctx->pc = 0x1E75C8u;
            goto label_1e75c8;
        }
    }
    ctx->pc = 0x1E7560u;
label_1e7560:
    // 0x1e7560: 0x12220014  beq         $s1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E7560u;
    {
        const bool branch_taken_0x1e7560 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E7564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7560u;
        // 0x1e7564: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7560) {
            ctx->pc = 0x1E75B4u;
            goto label_1e75b4;
        }
    }
    ctx->pc = 0x1E7568u;
    // 0x1e7568: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1E7568u;
    {
        const bool branch_taken_0x1e7568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7568) {
            ctx->pc = 0x1E75C8u;
            goto label_1e75c8;
        }
    }
    ctx->pc = 0x1E7570u;
label_1e7570:
    // 0x1e7570: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7570u;
    SET_GPR_U32(ctx, 31, 0x1E7578u);
    ctx->pc = 0x1E7574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7570u;
    // 0x1e7574: 0x24050156  addiu       $a1, $zero, 0x156 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7570u, 0x1E7578u)) {
        return;
    }
    ctx->pc = 0x1E7578u;
label_1e7578:
    // 0x1e7578: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1e7578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e757c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E757Cu;
    SET_GPR_U32(ctx, 31, 0x1E7584u);
    ctx->pc = 0x1E7580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E757Cu;
    // 0x1e7580: 0x24050089  addiu       $a1, $zero, 0x89 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E757Cu, 0x1E7584u)) {
        return;
    }
    ctx->pc = 0x1E7584u;
label_1e7584:
    // 0x1e7584: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E7584u;
    {
        const bool branch_taken_0x1e7584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7584) {
            ctx->pc = 0x1E75C8u;
            goto label_1e75c8;
        }
    }
    ctx->pc = 0x1E758Cu;
label_1e758c:
    // 0x1e758c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e758cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7590: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7590u;
    SET_GPR_U32(ctx, 31, 0x1E7598u);
    ctx->pc = 0x1E7594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7590u;
    // 0x1e7594: 0x24050156  addiu       $a1, $zero, 0x156 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7590u, 0x1E7598u)) {
        return;
    }
    ctx->pc = 0x1E7598u;
label_1e7598:
    // 0x1e7598: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1e7598u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e759c: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x1e759cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x1e75a0: 0x34a500a9  ori         $a1, $a1, 0xA9
    ctx->pc = 0x1e75a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)169);
    // 0x1e75a4: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E75A4u;
    SET_GPR_U32(ctx, 31, 0x1E75ACu);
    ctx->pc = 0x1E75A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E75A4u;
    // 0x1e75a8: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E75A4u, 0x1E75ACu)) {
        return;
    }
    ctx->pc = 0x1E75ACu;
label_1e75ac:
    // 0x1e75ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E75ACu;
    {
        const bool branch_taken_0x1e75ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e75ac) {
            ctx->pc = 0x1E75C8u;
            goto label_1e75c8;
        }
    }
    ctx->pc = 0x1E75B4u;
label_1e75b4:
    // 0x1e75b4: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E75B4u;
    SET_GPR_U32(ctx, 31, 0x1E75BCu);
    ctx->pc = 0x1E75B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E75B4u;
    // 0x1e75b8: 0x24050146  addiu       $a1, $zero, 0x146 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 326));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E75B4u, 0x1E75BCu)) {
        return;
    }
    ctx->pc = 0x1E75BCu;
label_1e75bc:
    // 0x1e75bc: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1e75bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e75c0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E75C0u;
    SET_GPR_U32(ctx, 31, 0x1E75C8u);
    ctx->pc = 0x1E75C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E75C0u;
    // 0x1e75c4: 0x24050098  addiu       $a1, $zero, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E75C0u, 0x1E75C8u)) {
        return;
    }
    ctx->pc = 0x1E75C8u;
label_1e75c8:
    // 0x1e75c8: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x1e75c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x1e75cc: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e75ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e75d0: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x1e75d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x1e75d4: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E75D4u;
    SET_GPR_U32(ctx, 31, 0x1E75DCu);
    ctx->pc = 0x1E75D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E75D4u;
    // 0x1e75d8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E75D4u, 0x1E75DCu)) {
        return;
    }
    ctx->pc = 0x1E75DCu;
label_1e75dc:
    // 0x1e75dc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1e75dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e75e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e75e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e75e4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1e75e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1e75e8: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x1e75e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x1e75ec: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1e75ecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x1e75f0: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e75f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1e75f4: 0x18400025  blez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1E75F4u;
    {
        const bool branch_taken_0x1e75f4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1E75F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E75F4u;
        // 0x1e75f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e75f4) {
            ctx->pc = 0x1E768Cu;
            goto label_1e768c;
        }
    }
    ctx->pc = 0x1E75FCu;
    // 0x1e75fc: 0x3c170008  lui         $s7, 0x8
    ctx->pc = 0x1e75fcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)8 << 16));
    // 0x1e7600: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x1e7600u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e7604: 0x24150208  addiu       $s5, $zero, 0x208
    ctx->pc = 0x1e7604u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x1e7608: 0x24140200  addiu       $s4, $zero, 0x200
    ctx->pc = 0x1e7608u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1e760c: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x1e760cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e7610:
    // 0x1e7610: 0x2772825  or          $a1, $s3, $s7
    ctx->pc = 0x1e7610u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 23));
    // 0x1e7614: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e7614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e7618: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7618u;
    SET_GPR_U32(ctx, 31, 0x1E7620u);
    ctx->pc = 0x1E761Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7618u;
    // 0x1e761c: 0x118240  sll         $s0, $s1, 9 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7618u, 0x1E7620u)) {
        return;
    }
    ctx->pc = 0x1E7620u;
label_1e7620:
    // 0x1e7620: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e7620u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e7624: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e7624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7628: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7628u;
    SET_GPR_U32(ctx, 31, 0x1E7630u);
    ctx->pc = 0x1E762Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7628u;
    // 0x1e762c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7628u, 0x1E7630u)) {
        return;
    }
    ctx->pc = 0x1E7630u;
label_1e7630:
    // 0x1e7630: 0x26730200  addiu       $s3, $s3, 0x200
    ctx->pc = 0x1e7630u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
    // 0x1e7634: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1e7634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e7638: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e7638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e763c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1e763cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1e7640: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1e7640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1e7644: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e7644u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e7648: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7648u;
    SET_GPR_U32(ctx, 31, 0x1E7650u);
    ctx->pc = 0x1E764Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7648u;
    // 0x1e764c: 0x2a52825  or          $a1, $s5, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7648u, 0x1E7650u)) {
        return;
    }
    ctx->pc = 0x1E7650u;
label_1e7650:
    // 0x1e7650: 0x26b50200  addiu       $s5, $s5, 0x200
    ctx->pc = 0x1e7650u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 512));
    // 0x1e7654: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1e7654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e7658: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e7658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e765c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1e765cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1e7660: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e7660u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e7664: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7664u;
    SET_GPR_U32(ctx, 31, 0x1E766Cu);
    ctx->pc = 0x1E7668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7664u;
    // 0x1e7668: 0x2852825  or          $a1, $s4, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7664u, 0x1E766Cu)) {
        return;
    }
    ctx->pc = 0x1E766Cu;
label_1e766c:
    // 0x1e766c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e766cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e7670: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1e7670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1e7674: 0x2c3202a  slt         $a0, $s6, $v1
    ctx->pc = 0x1e7674u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e7678: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1e7678u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x1e767c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e767cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1e7680: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1e7680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e7684: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1E7684u;
    {
        const bool branch_taken_0x1e7684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7684u;
        // 0x1e7688: 0x26940200  addiu       $s4, $s4, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7684) {
            ctx->pc = 0x1E7610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7610;
        }
    }
    ctx->pc = 0x1E768Cu;
label_1e768c:
    // 0x1e768c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e768cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e7690: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1e7690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1e7694: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E7694u;
    SET_GPR_U32(ctx, 31, 0x1E769Cu);
    ctx->pc = 0x1E7698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7694u;
    // 0x1e7698: 0xdc4534d8  ld          $a1, 0x34D8($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E7694u, 0x1E769Cu)) {
        return;
    }
    ctx->pc = 0x1E769Cu;
label_1e769c:
    // 0x1e769c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e769cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e76a0: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1e76a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e76a4: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E76A4u;
    SET_GPR_U32(ctx, 31, 0x1E76ACu);
    ctx->pc = 0x1E76A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E76A4u;
    // 0x1e76a8: 0xdc453500  ld          $a1, 0x3500($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13568)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E76A4u, 0x1E76ACu)) {
        return;
    }
    ctx->pc = 0x1E76ACu;
label_1e76ac:
    // 0x1e76ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e76acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e76b0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e76b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e76b4: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E76B4u;
    SET_GPR_U32(ctx, 31, 0x1E76BCu);
    ctx->pc = 0x1E76B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E76B4u;
    // 0x1e76b8: 0xdc4534e0  ld          $a1, 0x34E0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E76B4u, 0x1E76BCu)) {
        return;
    }
    ctx->pc = 0x1E76BCu;
label_1e76bc:
    // 0x1e76bc: 0xdfc534c0  ld          $a1, 0x34C0($fp)
    ctx->pc = 0x1e76bcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 30), 13504)));
    // 0x1e76c0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E76C0u;
    SET_GPR_U32(ctx, 31, 0x1E76C8u);
    ctx->pc = 0x1E76C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E76C0u;
    // 0x1e76c4: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E76C0u, 0x1E76C8u)) {
        return;
    }
    ctx->pc = 0x1E76C8u;
label_1e76c8:
    // 0x1e76c8: 0xc079ca0  jal         func_1E7280
    ctx->pc = 0x1E76C8u;
    SET_GPR_U32(ctx, 31, 0x1E76D0u);
    ctx->pc = 0x1E76CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E76C8u;
    // 0x1e76cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7280u, 0x1E76C8u, 0x1E76D0u)) {
        return;
    }
    ctx->pc = 0x1E76D0u;
label_1e76d0:
    // 0x1e76d0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1e76d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e76d4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1e76d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e76d8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1e76d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e76dc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1e76dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e76e0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e76e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e76e4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1e76e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e76e8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1e76e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e76ec: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1e76ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e76f0: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1e76f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e76f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e76f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e76f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E76F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E76FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E76F8u;
        // 0x1e76fc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E76F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7700u;
}
