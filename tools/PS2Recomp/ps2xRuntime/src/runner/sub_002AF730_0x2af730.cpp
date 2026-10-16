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

// Function: sub_002AF730
// Address: 0x2af730 - 0x2af880
void sub_002AF730_0x2af730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF730_0x2af730");
#endif

    switch (ctx->pc) {
        case 0x2af7bcu: goto label_2af7bc;
        case 0x2af7d0u: goto label_2af7d0;
        case 0x2af7e4u: goto label_2af7e4;
        case 0x2af858u: goto label_2af858;
        default: break;
    }

    ctx->pc = 0x2af730u;

    // 0x2af730: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2af730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2af734: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2af734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2af738: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2af738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2af73c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2af73cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af740: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2af740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2af744: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2af744u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af748: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2af748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2af74c: 0x8e110024  lw          $s1, 0x24($s0)
    ctx->pc = 0x2af74cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2af750: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x2af750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x2af754: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x2af754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x2af758: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2af758u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2af75c: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2AF75Cu;
    {
        const bool branch_taken_0x2af75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF75Cu;
        // 0x2af760: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af75c) {
            ctx->pc = 0x2AF860u;
            goto label_2af860;
        }
    }
    ctx->pc = 0x2AF764u;
    // 0x2af764: 0x96020020  lhu         $v0, 0x20($s0)
    ctx->pc = 0x2af764u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2af768: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x2af768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x2af76c: 0x22142  srl         $a0, $v0, 5
    ctx->pc = 0x2af76cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2af770: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2af770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2af774: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2af774u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2af778: 0x452804  sllv        $a1, $a1, $v0
    ctx->pc = 0x2af778u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x2af77c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2af77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2af780: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2af780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af784: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2af784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2af788: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2AF788u;
    {
        const bool branch_taken_0x2af788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF788u;
        // 0x2af78c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af788) {
            ctx->pc = 0x2AF864u;
            goto label_2af864;
        }
    }
    ctx->pc = 0x2AF790u;
    // 0x2af790: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AF790u;
    {
        const bool branch_taken_0x2af790 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af790) {
            ctx->pc = 0x2AF794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF790u;
            // 0x2af794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF7B4u;
            goto label_2af7b4;
        }
    }
    ctx->pc = 0x2AF798u;
    // 0x2af798: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x2af798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2af79c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2af79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2af7a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2af7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2af7a4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2af7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2af7a8: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2AF7A8u;
    {
        const bool branch_taken_0x2af7a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af7a8) {
            ctx->pc = 0x2AF7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF7A8u;
            // 0x2af7ac: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF7D8u;
            goto label_2af7d8;
        }
    }
    ctx->pc = 0x2AF7B0u;
    // 0x2af7b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2af7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2af7b4:
    // 0x2af7b4: 0xc0ab4d4  jal         func_2AD350
    ctx->pc = 0x2AF7B4u;
    SET_GPR_U32(ctx, 31, 0x2AF7BCu);
    ctx->pc = 0x2AF7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF7B4u;
    // 0x2af7b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD350u, 0x2AF7B4u, 0x2AF7BCu)) {
        return;
    }
    ctx->pc = 0x2AF7BCu;
label_2af7bc:
    // 0x2af7bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AF7BCu;
    {
        const bool branch_taken_0x2af7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF7BCu;
        // 0x2af7c0: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af7bc) {
            ctx->pc = 0x2AF7D8u;
            goto label_2af7d8;
        }
    }
    ctx->pc = 0x2AF7C4u;
    // 0x2af7c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2af7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af7c8: 0xc0ab42e  jal         func_2AD0B8
    ctx->pc = 0x2AF7C8u;
    SET_GPR_U32(ctx, 31, 0x2AF7D0u);
    ctx->pc = 0x2AF7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF7C8u;
    // 0x2af7cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD0B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD0B8u, 0x2AF7C8u, 0x2AF7D0u)) {
        return;
    }
    ctx->pc = 0x2AF7D0u;
label_2af7d0:
    // 0x2af7d0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2AF7D0u;
    {
        const bool branch_taken_0x2af7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF7D0u;
        // 0x2af7d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af7d0) {
            ctx->pc = 0x2AF864u;
            goto label_2af864;
        }
    }
    ctx->pc = 0x2AF7D8u;
label_2af7d8:
    // 0x2af7d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2af7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af7dc: 0xc0ab42e  jal         func_2AD0B8
    ctx->pc = 0x2AF7DCu;
    SET_GPR_U32(ctx, 31, 0x2AF7E4u);
    ctx->pc = 0x2AF7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF7DCu;
    // 0x2af7e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD0B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD0B8u, 0x2AF7DCu, 0x2AF7E4u)) {
        return;
    }
    ctx->pc = 0x2AF7E4u;
label_2af7e4:
    // 0x2af7e4: 0x8e460078  lw          $a2, 0x78($s2)
    ctx->pc = 0x2af7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x2af7e8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2af7e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af7ec: 0x8e430074  lw          $v1, 0x74($s2)
    ctx->pc = 0x2af7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x2af7f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2af7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af7f4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2af7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2af7f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2af7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af7fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2af7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af800: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2af800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2af804: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2af804u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2af808: 0xae460078  sw          $a2, 0x78($s2)
    ctx->pc = 0x2af808u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 6));
    // 0x2af80c: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x2af80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x2af810: 0x8e260078  lw          $a2, 0x78($s1)
    ctx->pc = 0x2af810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2af814: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2af814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2af818: 0x96070020  lhu         $a3, 0x20($s0)
    ctx->pc = 0x2af818u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2af81c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2af81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2af820: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2af820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2af824: 0xa4470000  sh          $a3, 0x0($v0)
    ctx->pc = 0x2af824u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x2af828: 0xae23007c  sw          $v1, 0x7C($s1)
    ctx->pc = 0x2af828u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
    // 0x2af82c: 0x8e260074  lw          $a2, 0x74($s1)
    ctx->pc = 0x2af82cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x2af830: 0x96020020  lhu         $v0, 0x20($s0)
    ctx->pc = 0x2af830u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2af834: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x2af834u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2af838: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2af838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2af83c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2af83cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2af840: 0x484004  sllv        $t0, $t0, $v0
    ctx->pc = 0x2af840u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x2af844: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2af844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2af848: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2af848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af84c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x2af84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x2af850: 0xc0abe20  jal         func_2AF880
    ctx->pc = 0x2AF850u;
    SET_GPR_U32(ctx, 31, 0x2AF858u);
    ctx->pc = 0x2AF854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF850u;
    // 0x2af854: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AF880u, 0x2AF850u, 0x2AF858u)) {
        return;
    }
    ctx->pc = 0x2AF858u;
label_2af858:
    // 0x2af858: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AF858u;
    {
        const bool branch_taken_0x2af858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF858u;
        // 0x2af85c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af858) {
            ctx->pc = 0x2AF864u;
            goto label_2af864;
        }
    }
    ctx->pc = 0x2AF860u;
label_2af860:
    // 0x2af860: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2af860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2af864:
    // 0x2af864: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2af864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2af868: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2af868u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2af86c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2af86cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2af870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2af870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af874: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF874u;
        // 0x2af878: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF87Cu;
    // 0x2af87c: 0x0  nop
    ctx->pc = 0x2af87cu;
    // NOP
    ctx->pc = 0x2af880u;
}
