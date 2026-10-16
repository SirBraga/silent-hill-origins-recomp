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

// Function: sub_002FF508
// Address: 0x2ff508 - 0x2ff930
void sub_002FF508_0x2ff508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF508_0x2ff508");
#endif

    switch (ctx->pc) {
        case 0x2ff558u: goto label_2ff558;
        case 0x2ff57cu: goto label_2ff57c;
        case 0x2ff5f4u: goto label_2ff5f4;
        case 0x2ff68cu: goto label_2ff68c;
        case 0x2ff6b0u: goto label_2ff6b0;
        case 0x2ff71cu: goto label_2ff71c;
        case 0x2ff740u: goto label_2ff740;
        case 0x2ff7b4u: goto label_2ff7b4;
        case 0x2ff878u: goto label_2ff878;
        case 0x2ff89cu: goto label_2ff89c;
        default: break;
    }

    ctx->pc = 0x2ff508u;

    // 0x2ff508: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2ff508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2ff50c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ff50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ff510: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ff510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff514: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2ff514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2ff518: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2ff518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2ff51c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2ff51cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff520: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2ff520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2ff524: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x2ff524u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff528: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2ff528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2ff52c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x2ff52cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff530: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2ff530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2ff534: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x2ff534u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff538: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2ff538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2ff53c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2ff53cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff540: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ff540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ff544: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ff544u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff548: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2ff548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2ff54c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2ff54cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff550: 0xc0c01a6  jal         func_300698
    ctx->pc = 0x2FF550u;
    SET_GPR_U32(ctx, 31, 0x2FF558u);
    ctx->pc = 0x2FF554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF550u;
    // 0x2ff554: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300698u, 0x2FF550u, 0x2FF558u)) {
        return;
    }
    ctx->pc = 0x2FF558u;
label_2ff558:
    // 0x2ff558: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2ff558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2ff55c: 0x3c033800  lui         $v1, 0x3800
    ctx->pc = 0x2ff55cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14336 << 16));
    // 0x2ff560: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2ff560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2ff564: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x2ff564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x2ff568: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2ff568u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x2ff56c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ff56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff570: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x2ff570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x2ff574: 0xc0c00c2  jal         func_300308
    ctx->pc = 0x2FF574u;
    SET_GPR_U32(ctx, 31, 0x2FF57Cu);
    ctx->pc = 0x2FF578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF574u;
    // 0x2ff578: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300308u, 0x2FF574u, 0x2FF57Cu)) {
        return;
    }
    ctx->pc = 0x2FF57Cu;
label_2ff57c:
    // 0x2ff57c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ff57cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff580: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2ff580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2ff584: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2ff584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2ff588: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x2ff588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x2ff58c: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x2ff58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x2ff590: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2ff590u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x2ff594: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x2ff594u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x2ff598: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2ff598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2ff59c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ff59cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ff5a0: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FF5A0u;
    {
        const bool branch_taken_0x2ff5a0 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2FF5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF5A0u;
        // 0x2ff5a4: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff5a0) {
            ctx->pc = 0x2FF5B8u;
            goto label_2ff5b8;
        }
    }
    ctx->pc = 0x2FF5A8u;
    // 0x2ff5a8: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x2ff5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x2ff5ac: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2ff5acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2ff5b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FF5B0u;
    {
        const bool branch_taken_0x2ff5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF5B0u;
        // 0x2ff5b4: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff5b0) {
            ctx->pc = 0x2FF5BCu;
            goto label_2ff5bc;
        }
    }
    ctx->pc = 0x2FF5B8u;
label_2ff5b8:
    // 0x2ff5b8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2ff5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2ff5bc:
    // 0x2ff5bc: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x2ff5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x2ff5c0: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x2ff5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2ff5c4: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2ff5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2ff5c8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ff5c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ff5cc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2ff5ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ff5d0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2ff5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2ff5d4: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x2ff5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x2ff5d8: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FF5D8u;
    {
        const bool branch_taken_0x2ff5d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF5D8u;
        // 0x2ff5dc: 0x38403  sra         $s0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff5d8) {
            ctx->pc = 0x2FF5FCu;
            goto label_2ff5fc;
        }
    }
    ctx->pc = 0x2FF5E0u;
    // 0x2ff5e0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FF5E0u;
    {
        const bool branch_taken_0x2ff5e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF5E0u;
        // 0x2ff5e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff5e0) {
            ctx->pc = 0x2FF600u;
            goto label_2ff600;
        }
    }
    ctx->pc = 0x2FF5E8u;
    // 0x2ff5e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ff5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff5ec: 0xc0c0122  jal         func_300488
    ctx->pc = 0x2FF5ECu;
    SET_GPR_U32(ctx, 31, 0x2FF5F4u);
    ctx->pc = 0x2FF5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF5ECu;
    // 0x2ff5f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x2FF5ECu, 0x2FF5F4u)) {
        return;
    }
    ctx->pc = 0x2FF5F4u;
label_2ff5f4:
    // 0x2ff5f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FF5F4u;
    {
        const bool branch_taken_0x2ff5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF5F4u;
        // 0x2ff5f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff5f4) {
            ctx->pc = 0x2FF600u;
            goto label_2ff600;
        }
    }
    ctx->pc = 0x2FF5FCu;
label_2ff5fc:
    // 0x2ff5fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ff5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff600:
    // 0x2ff600: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2ff600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ff604: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2ff604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ff608: 0x2423004  sllv        $a2, $v0, $s2
    ctx->pc = 0x2ff608u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x2ff60c: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x2ff60cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2ff610: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2FF610u;
    {
        const bool branch_taken_0x2ff610 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x2FF614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF610u;
        // 0x2ff614: 0x75200b  movn        $a0, $v1, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff610) {
            ctx->pc = 0x2FF644u;
            goto label_2ff644;
        }
    }
    ctx->pc = 0x2FF618u;
    // 0x2ff618: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x2ff618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2ff61c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ff61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ff620: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x2ff620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x2ff624: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ff624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ff628: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2ff628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ff62c: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x2ff62cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2ff630: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FF630u;
    {
        const bool branch_taken_0x2ff630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF630u;
        // 0x2ff634: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff630) {
            ctx->pc = 0x2FF678u;
            goto label_2ff678;
        }
    }
    ctx->pc = 0x2FF638u;
    // 0x2ff638: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x2ff638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2ff63c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2FF63Cu;
    {
        const bool branch_taken_0x2ff63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF63Cu;
        // 0x2ff640: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff63c) {
            ctx->pc = 0x2FF674u;
            goto label_2ff674;
        }
    }
    ctx->pc = 0x2FF644u;
label_2ff644:
    // 0x2ff644: 0x601000c  bgez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2FF644u;
    {
        const bool branch_taken_0x2ff644 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x2FF648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF644u;
        // 0x2ff648: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff644) {
            ctx->pc = 0x2FF678u;
            goto label_2ff678;
        }
    }
    ctx->pc = 0x2FF64Cu;
    // 0x2ff64c: 0x101027  nor         $v0, $zero, $s0
    ctx->pc = 0x2ff64cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x2ff650: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2ff650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2ff654: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x2ff654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x2ff658: 0x61823  negu        $v1, $a2
    ctx->pc = 0x2ff658u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x2ff65c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ff65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ff660: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2ff660u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ff664: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x2ff664u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ff668: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FF668u;
    {
        const bool branch_taken_0x2ff668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF668u;
        // 0x2ff66c: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff668) {
            ctx->pc = 0x2FF674u;
            goto label_2ff674;
        }
    }
    ctx->pc = 0x2FF670u;
    // 0x2ff670: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2ff670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2ff674:
    // 0x2ff674: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2ff674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2ff678:
    // 0x2ff678: 0x95100a  movz        $v0, $a0, $s5
    ctx->pc = 0x2ff678u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x2ff67c: 0x12e00025  beqz        $s7, . + 4 + (0x25 << 2)
    ctx->pc = 0x2FF67Cu;
    {
        const bool branch_taken_0x2ff67c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF67Cu;
        // 0x2ff680: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff67c) {
            ctx->pc = 0x2FF714u;
            goto label_2ff714;
        }
    }
    ctx->pc = 0x2FF684u;
    // 0x2ff684: 0xc0c01a6  jal         func_300698
    ctx->pc = 0x2FF684u;
    SET_GPR_U32(ctx, 31, 0x2FF68Cu);
    ctx->pc = 0x2FF688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF684u;
    // 0x2ff688: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300698u, 0x2FF684u, 0x2FF68Cu)) {
        return;
    }
    ctx->pc = 0x2FF68Cu;
label_2ff68c:
    // 0x2ff68c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2ff68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2ff690: 0x3c033c00  lui         $v1, 0x3C00
    ctx->pc = 0x2ff690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15360 << 16));
    // 0x2ff694: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2ff694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2ff698: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x2ff698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x2ff69c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2ff69cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x2ff6a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ff6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff6a4: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x2ff6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x2ff6a8: 0xc0c00c2  jal         func_300308
    ctx->pc = 0x2FF6A8u;
    SET_GPR_U32(ctx, 31, 0x2FF6B0u);
    ctx->pc = 0x2FF6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF6A8u;
    // 0x2ff6ac: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300308u, 0x2FF6A8u, 0x2FF6B0u)) {
        return;
    }
    ctx->pc = 0x2FF6B0u;
label_2ff6b0:
    // 0x2ff6b0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ff6b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff6b4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2ff6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2ff6b8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2ff6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2ff6bc: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x2ff6bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x2ff6c0: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x2ff6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x2ff6c4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2ff6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x2ff6c8: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x2ff6c8u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x2ff6cc: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2ff6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2ff6d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ff6d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ff6d4: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FF6D4u;
    {
        const bool branch_taken_0x2ff6d4 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2FF6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF6D4u;
        // 0x2ff6d8: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff6d4) {
            ctx->pc = 0x2FF6ECu;
            goto label_2ff6ec;
        }
    }
    ctx->pc = 0x2FF6DCu;
    // 0x2ff6dc: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x2ff6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x2ff6e0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2ff6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2ff6e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FF6E4u;
    {
        const bool branch_taken_0x2ff6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF6E4u;
        // 0x2ff6e8: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff6e4) {
            ctx->pc = 0x2FF6F0u;
            goto label_2ff6f0;
        }
    }
    ctx->pc = 0x2FF6ECu;
label_2ff6ec:
    // 0x2ff6ec: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2ff6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2ff6f0:
    // 0x2ff6f0: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x2ff6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x2ff6f4: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x2ff6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2ff6f8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2ff6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2ff6fc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ff6fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ff700: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2ff700u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ff704: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2ff704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2ff708: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x2ff708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x2ff70c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x2ff70cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2ff710: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x2ff710u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_2ff714:
    // 0x2ff714: 0xc0c01a6  jal         func_300698
    ctx->pc = 0x2FF714u;
    SET_GPR_U32(ctx, 31, 0x2FF71Cu);
    ctx->pc = 0x2FF718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF714u;
    // 0x2ff718: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300698u, 0x2FF714u, 0x2FF71Cu)) {
        return;
    }
    ctx->pc = 0x2FF71Cu;
label_2ff71c:
    // 0x2ff71c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2ff71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2ff720: 0x3c033800  lui         $v1, 0x3800
    ctx->pc = 0x2ff720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14336 << 16));
    // 0x2ff724: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2ff724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2ff728: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x2ff728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x2ff72c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2ff72cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x2ff730: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ff730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff734: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x2ff734u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x2ff738: 0xc0c00c2  jal         func_300308
    ctx->pc = 0x2FF738u;
    SET_GPR_U32(ctx, 31, 0x2FF740u);
    ctx->pc = 0x2FF73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF738u;
    // 0x2ff73c: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300308u, 0x2FF738u, 0x2FF740u)) {
        return;
    }
    ctx->pc = 0x2FF740u;
label_2ff740:
    // 0x2ff740: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ff740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff744: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2ff744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2ff748: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2ff748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2ff74c: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x2ff74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x2ff750: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x2ff750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x2ff754: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2ff754u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x2ff758: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x2ff758u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x2ff75c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2ff75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2ff760: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ff760u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ff764: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FF764u;
    {
        const bool branch_taken_0x2ff764 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2FF768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF764u;
        // 0x2ff768: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff764) {
            ctx->pc = 0x2FF77Cu;
            goto label_2ff77c;
        }
    }
    ctx->pc = 0x2FF76Cu;
    // 0x2ff76c: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x2ff76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x2ff770: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2ff770u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2ff774: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FF774u;
    {
        const bool branch_taken_0x2ff774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF774u;
        // 0x2ff778: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff774) {
            ctx->pc = 0x2FF780u;
            goto label_2ff780;
        }
    }
    ctx->pc = 0x2FF77Cu;
label_2ff77c:
    // 0x2ff77c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2ff77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2ff780:
    // 0x2ff780: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x2ff780u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x2ff784: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x2ff784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2ff788: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2ff788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2ff78c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ff78cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ff790: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2ff790u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ff794: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2ff794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2ff798: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x2ff798u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x2ff79c: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FF79Cu;
    {
        const bool branch_taken_0x2ff79c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF79Cu;
        // 0x2ff7a0: 0x38403  sra         $s0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff79c) {
            ctx->pc = 0x2FF7BCu;
            goto label_2ff7bc;
        }
    }
    ctx->pc = 0x2FF7A4u;
    // 0x2ff7a4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FF7A4u;
    {
        const bool branch_taken_0x2ff7a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7A4u;
        // 0x2ff7a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff7a4) {
            ctx->pc = 0x2FF7BCu;
            goto label_2ff7bc;
        }
    }
    ctx->pc = 0x2FF7ACu;
    // 0x2ff7ac: 0xc0c0122  jal         func_300488
    ctx->pc = 0x2FF7ACu;
    SET_GPR_U32(ctx, 31, 0x2FF7B4u);
    ctx->pc = 0x2FF7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF7ACu;
    // 0x2ff7b0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x2FF7ACu, 0x2FF7B4u)) {
        return;
    }
    ctx->pc = 0x2FF7B4u;
label_2ff7b4:
    // 0x2ff7b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FF7B4u;
    {
        const bool branch_taken_0x2ff7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7B4u;
        // 0x2ff7b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff7b4) {
            ctx->pc = 0x2FF7C0u;
            goto label_2ff7c0;
        }
    }
    ctx->pc = 0x2FF7BCu;
label_2ff7bc:
    // 0x2ff7bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ff7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff7c0:
    // 0x2ff7c0: 0x52c00005  beql        $s6, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FF7C0u;
    {
        const bool branch_taken_0x2ff7c0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff7c0) {
            ctx->pc = 0x2FF7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF7C0u;
            // 0x2ff7c4: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF7D8u;
            goto label_2ff7d8;
        }
    }
    ctx->pc = 0x2FF7C8u;
    // 0x2ff7c8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2ff7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2ff7cc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2ff7ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2ff7d0: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x2ff7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x2ff7d4: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2ff7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2ff7d8:
    // 0x2ff7d8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2ff7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ff7dc: 0x2823004  sllv        $a2, $v0, $s4
    ctx->pc = 0x2ff7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x2ff7e0: 0x26670004  addiu       $a3, $s3, 0x4
    ctx->pc = 0x2ff7e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2ff7e4: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x2ff7e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2ff7e8: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2FF7E8u;
    {
        const bool branch_taken_0x2ff7e8 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x2FF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7E8u;
        // 0x2ff7ec: 0x55200b  movn        $a0, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff7e8) {
            ctx->pc = 0x2FF81Cu;
            goto label_2ff81c;
        }
    }
    ctx->pc = 0x2FF7F0u;
    // 0x2ff7f0: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x2ff7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2ff7f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ff7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ff7f8: 0x2821004  sllv        $v0, $v0, $s4
    ctx->pc = 0x2ff7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x2ff7fc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ff7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ff800: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2ff800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ff804: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x2ff804u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2ff808: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FF808u;
    {
        const bool branch_taken_0x2ff808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF808u;
        // 0x2ff80c: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff808) {
            ctx->pc = 0x2FF850u;
            goto label_2ff850;
        }
    }
    ctx->pc = 0x2FF810u;
    // 0x2ff810: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x2ff810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2ff814: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2FF814u;
    {
        const bool branch_taken_0x2ff814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF814u;
        // 0x2ff818: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff814) {
            ctx->pc = 0x2FF84Cu;
            goto label_2ff84c;
        }
    }
    ctx->pc = 0x2FF81Cu;
label_2ff81c:
    // 0x2ff81c: 0x601000c  bgez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2FF81Cu;
    {
        const bool branch_taken_0x2ff81c = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x2FF820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF81Cu;
        // 0x2ff820: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff81c) {
            ctx->pc = 0x2FF850u;
            goto label_2ff850;
        }
    }
    ctx->pc = 0x2FF824u;
    // 0x2ff824: 0x101027  nor         $v0, $zero, $s0
    ctx->pc = 0x2ff824u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x2ff828: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2ff828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2ff82c: 0x2821004  sllv        $v0, $v0, $s4
    ctx->pc = 0x2ff82cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x2ff830: 0x61823  negu        $v1, $a2
    ctx->pc = 0x2ff830u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x2ff834: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ff834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ff838: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2ff838u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ff83c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x2ff83cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ff840: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FF840u;
    {
        const bool branch_taken_0x2ff840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF840u;
        // 0x2ff844: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff840) {
            ctx->pc = 0x2FF84Cu;
            goto label_2ff84c;
        }
    }
    ctx->pc = 0x2FF848u;
    // 0x2ff848: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2ff848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2ff84c:
    // 0x2ff84c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2ff84cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2ff850:
    // 0x2ff850: 0x95100a  movz        $v0, $a0, $s5
    ctx->pc = 0x2ff850u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x2ff854: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FF854u;
    {
        const bool branch_taken_0x2ff854 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF854u;
        // 0x2ff858: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff854) {
            ctx->pc = 0x2FF868u;
            goto label_2ff868;
        }
    }
    ctx->pc = 0x2FF85Cu;
    // 0x2ff85c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2ff85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2ff860: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ff860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ff864: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x2ff864u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_2ff868:
    // 0x2ff868: 0x12e00026  beqz        $s7, . + 4 + (0x26 << 2)
    ctx->pc = 0x2FF868u;
    {
        const bool branch_taken_0x2ff868 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF868u;
        // 0x2ff86c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff868) {
            ctx->pc = 0x2FF904u;
            goto label_2ff904;
        }
    }
    ctx->pc = 0x2FF870u;
    // 0x2ff870: 0xc0c01a6  jal         func_300698
    ctx->pc = 0x2FF870u;
    SET_GPR_U32(ctx, 31, 0x2FF878u);
    ctx->pc = 0x2FF874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF870u;
    // 0x2ff874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300698u, 0x2FF870u, 0x2FF878u)) {
        return;
    }
    ctx->pc = 0x2FF878u;
label_2ff878:
    // 0x2ff878: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2ff878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2ff87c: 0x3c033c00  lui         $v1, 0x3C00
    ctx->pc = 0x2ff87cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15360 << 16));
    // 0x2ff880: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2ff880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2ff884: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x2ff884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x2ff888: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2ff888u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x2ff88c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ff88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff890: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x2ff890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x2ff894: 0xc0c00c2  jal         func_300308
    ctx->pc = 0x2FF894u;
    SET_GPR_U32(ctx, 31, 0x2FF89Cu);
    ctx->pc = 0x2FF898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF894u;
    // 0x2ff898: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300308u, 0x2FF894u, 0x2FF89Cu)) {
        return;
    }
    ctx->pc = 0x2FF89Cu;
label_2ff89c:
    // 0x2ff89c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ff89cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff8a0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2ff8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2ff8a4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2ff8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2ff8a8: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x2ff8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x2ff8ac: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x2ff8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x2ff8b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2ff8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x2ff8b4: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x2ff8b4u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x2ff8b8: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2ff8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2ff8bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ff8bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ff8c0: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FF8C0u;
    {
        const bool branch_taken_0x2ff8c0 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2FF8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF8C0u;
        // 0x2ff8c4: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff8c0) {
            ctx->pc = 0x2FF8D8u;
            goto label_2ff8d8;
        }
    }
    ctx->pc = 0x2FF8C8u;
    // 0x2ff8c8: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x2ff8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x2ff8cc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2ff8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2ff8d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FF8D0u;
    {
        const bool branch_taken_0x2ff8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF8D0u;
        // 0x2ff8d4: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff8d0) {
            ctx->pc = 0x2FF8DCu;
            goto label_2ff8dc;
        }
    }
    ctx->pc = 0x2FF8D8u;
label_2ff8d8:
    // 0x2ff8d8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2ff8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2ff8dc:
    // 0x2ff8dc: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x2ff8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x2ff8e0: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x2ff8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2ff8e4: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2ff8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2ff8e8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ff8e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ff8ec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2ff8ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ff8f0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2ff8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2ff8f4: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x2ff8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x2ff8f8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x2ff8f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2ff8fc: 0xafc30004  sw          $v1, 0x4($fp)
    ctx->pc = 0x2ff8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
    // 0x2ff900: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2ff900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2ff904:
    // 0x2ff904: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2ff904u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ff908: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2ff908u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ff90c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2ff90cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ff910: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2ff910u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ff914: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2ff914u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ff918: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2ff918u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ff91c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ff91cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ff920: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ff920u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ff924: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ff924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ff928: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF928u;
        // 0x2ff92c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF930u;
}
