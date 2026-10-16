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

// Function: sub_001DB638
// Address: 0x1db638 - 0x1db878
void sub_001DB638_0x1db638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB638_0x1db638");
#endif

    switch (ctx->pc) {
        case 0x1db638u: goto label_1db638;
        case 0x1db63cu: goto label_1db63c;
        case 0x1db640u: goto label_1db640;
        case 0x1db644u: goto label_1db644;
        case 0x1db648u: goto label_1db648;
        case 0x1db64cu: goto label_1db64c;
        case 0x1db650u: goto label_1db650;
        case 0x1db654u: goto label_1db654;
        case 0x1db658u: goto label_1db658;
        case 0x1db65cu: goto label_1db65c;
        case 0x1db660u: goto label_1db660;
        case 0x1db664u: goto label_1db664;
        case 0x1db668u: goto label_1db668;
        case 0x1db66cu: goto label_1db66c;
        case 0x1db670u: goto label_1db670;
        case 0x1db674u: goto label_1db674;
        case 0x1db678u: goto label_1db678;
        case 0x1db67cu: goto label_1db67c;
        case 0x1db680u: goto label_1db680;
        case 0x1db684u: goto label_1db684;
        case 0x1db688u: goto label_1db688;
        case 0x1db68cu: goto label_1db68c;
        case 0x1db690u: goto label_1db690;
        case 0x1db694u: goto label_1db694;
        case 0x1db698u: goto label_1db698;
        case 0x1db69cu: goto label_1db69c;
        case 0x1db6a0u: goto label_1db6a0;
        case 0x1db6a4u: goto label_1db6a4;
        case 0x1db6a8u: goto label_1db6a8;
        case 0x1db6acu: goto label_1db6ac;
        case 0x1db6b0u: goto label_1db6b0;
        case 0x1db6b4u: goto label_1db6b4;
        case 0x1db6b8u: goto label_1db6b8;
        case 0x1db6bcu: goto label_1db6bc;
        case 0x1db6c0u: goto label_1db6c0;
        case 0x1db6c4u: goto label_1db6c4;
        case 0x1db6c8u: goto label_1db6c8;
        case 0x1db6ccu: goto label_1db6cc;
        case 0x1db6d0u: goto label_1db6d0;
        case 0x1db6d4u: goto label_1db6d4;
        case 0x1db6d8u: goto label_1db6d8;
        case 0x1db6dcu: goto label_1db6dc;
        case 0x1db6e0u: goto label_1db6e0;
        case 0x1db6e4u: goto label_1db6e4;
        case 0x1db6e8u: goto label_1db6e8;
        case 0x1db6ecu: goto label_1db6ec;
        case 0x1db6f0u: goto label_1db6f0;
        case 0x1db6f4u: goto label_1db6f4;
        case 0x1db6f8u: goto label_1db6f8;
        case 0x1db6fcu: goto label_1db6fc;
        case 0x1db700u: goto label_1db700;
        case 0x1db704u: goto label_1db704;
        case 0x1db708u: goto label_1db708;
        case 0x1db70cu: goto label_1db70c;
        case 0x1db710u: goto label_1db710;
        case 0x1db714u: goto label_1db714;
        case 0x1db718u: goto label_1db718;
        case 0x1db71cu: goto label_1db71c;
        case 0x1db720u: goto label_1db720;
        case 0x1db724u: goto label_1db724;
        case 0x1db728u: goto label_1db728;
        case 0x1db72cu: goto label_1db72c;
        case 0x1db730u: goto label_1db730;
        case 0x1db734u: goto label_1db734;
        case 0x1db738u: goto label_1db738;
        case 0x1db73cu: goto label_1db73c;
        case 0x1db740u: goto label_1db740;
        case 0x1db744u: goto label_1db744;
        case 0x1db748u: goto label_1db748;
        case 0x1db74cu: goto label_1db74c;
        case 0x1db750u: goto label_1db750;
        case 0x1db754u: goto label_1db754;
        case 0x1db758u: goto label_1db758;
        case 0x1db75cu: goto label_1db75c;
        case 0x1db760u: goto label_1db760;
        case 0x1db764u: goto label_1db764;
        case 0x1db768u: goto label_1db768;
        case 0x1db76cu: goto label_1db76c;
        case 0x1db770u: goto label_1db770;
        case 0x1db774u: goto label_1db774;
        case 0x1db778u: goto label_1db778;
        case 0x1db77cu: goto label_1db77c;
        case 0x1db780u: goto label_1db780;
        case 0x1db784u: goto label_1db784;
        case 0x1db788u: goto label_1db788;
        case 0x1db78cu: goto label_1db78c;
        case 0x1db790u: goto label_1db790;
        case 0x1db794u: goto label_1db794;
        case 0x1db798u: goto label_1db798;
        case 0x1db79cu: goto label_1db79c;
        case 0x1db7a0u: goto label_1db7a0;
        case 0x1db7a4u: goto label_1db7a4;
        case 0x1db7a8u: goto label_1db7a8;
        case 0x1db7acu: goto label_1db7ac;
        case 0x1db7b0u: goto label_1db7b0;
        case 0x1db7b4u: goto label_1db7b4;
        case 0x1db7b8u: goto label_1db7b8;
        case 0x1db7bcu: goto label_1db7bc;
        case 0x1db7c0u: goto label_1db7c0;
        case 0x1db7c4u: goto label_1db7c4;
        case 0x1db7c8u: goto label_1db7c8;
        case 0x1db7ccu: goto label_1db7cc;
        case 0x1db7d0u: goto label_1db7d0;
        case 0x1db7d4u: goto label_1db7d4;
        case 0x1db7d8u: goto label_1db7d8;
        case 0x1db7dcu: goto label_1db7dc;
        case 0x1db7e0u: goto label_1db7e0;
        case 0x1db7e4u: goto label_1db7e4;
        case 0x1db7e8u: goto label_1db7e8;
        case 0x1db7ecu: goto label_1db7ec;
        case 0x1db7f0u: goto label_1db7f0;
        case 0x1db7f4u: goto label_1db7f4;
        case 0x1db7f8u: goto label_1db7f8;
        case 0x1db7fcu: goto label_1db7fc;
        case 0x1db800u: goto label_1db800;
        case 0x1db804u: goto label_1db804;
        case 0x1db808u: goto label_1db808;
        case 0x1db80cu: goto label_1db80c;
        case 0x1db810u: goto label_1db810;
        case 0x1db814u: goto label_1db814;
        case 0x1db818u: goto label_1db818;
        case 0x1db81cu: goto label_1db81c;
        case 0x1db820u: goto label_1db820;
        case 0x1db824u: goto label_1db824;
        case 0x1db828u: goto label_1db828;
        case 0x1db82cu: goto label_1db82c;
        case 0x1db830u: goto label_1db830;
        case 0x1db834u: goto label_1db834;
        case 0x1db838u: goto label_1db838;
        case 0x1db83cu: goto label_1db83c;
        case 0x1db840u: goto label_1db840;
        case 0x1db844u: goto label_1db844;
        case 0x1db848u: goto label_1db848;
        case 0x1db84cu: goto label_1db84c;
        case 0x1db850u: goto label_1db850;
        case 0x1db854u: goto label_1db854;
        case 0x1db858u: goto label_1db858;
        case 0x1db85cu: goto label_1db85c;
        case 0x1db860u: goto label_1db860;
        case 0x1db864u: goto label_1db864;
        case 0x1db868u: goto label_1db868;
        case 0x1db86cu: goto label_1db86c;
        case 0x1db870u: goto label_1db870;
        case 0x1db874u: goto label_1db874;
        default: break;
    }

    ctx->pc = 0x1db638u;

label_1db638:
    // 0x1db638: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1db638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1db63c:
    // 0x1db63c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1db63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1db640:
    // 0x1db640: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1db640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_1db644:
    // 0x1db644: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1db644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_1db648:
    // 0x1db648: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1db648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_1db64c:
    // 0x1db64c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1db64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_1db650:
    // 0x1db650: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1db650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1db654:
    // 0x1db654: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1db654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_1db658:
    // 0x1db658: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1db658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_1db65c:
    // 0x1db65c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1db65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_1db660:
    // 0x1db660: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1db664:
    // 0x1db664: 0xc07730e  jal         func_1DCC38
label_1db668:
    if (ctx->pc == 0x1DB668u) {
        ctx->pc = 0x1DB668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB664u;
        // 0x1db668: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB66Cu;
        goto label_1db66c;
    }
    ctx->pc = 0x1DB664u;
    SET_GPR_U32(ctx, 31, 0x1DB66Cu);
    ctx->pc = 0x1DB668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB664u;
    // 0x1db668: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DCC38u, 0x1DB664u, 0x1DB66Cu)) {
        return;
    }
    ctx->pc = 0x1DB66Cu;
label_1db66c:
    // 0x1db66c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1db66cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db670:
    // 0x1db670: 0x1260006f  beqz        $s3, . + 4 + (0x6F << 2)
label_1db674:
    if (ctx->pc == 0x1DB674u) {
        ctx->pc = 0x1DB674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB670u;
        // 0x1db674: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB678u;
        goto label_1db678;
    }
    ctx->pc = 0x1DB670u;
    {
        const bool branch_taken_0x1db670 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB670u;
        // 0x1db674: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db670) {
            ctx->pc = 0x1DB830u;
            goto label_1db830;
        }
    }
    ctx->pc = 0x1DB678u;
label_1db678:
    // 0x1db678: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1db678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1db67c:
    // 0x1db67c: 0x18400025  blez        $v0, . + 4 + (0x25 << 2)
label_1db680:
    if (ctx->pc == 0x1DB680u) {
        ctx->pc = 0x1DB680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB67Cu;
        // 0x1db680: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB684u;
        goto label_1db684;
    }
    ctx->pc = 0x1DB67Cu;
    {
        const bool branch_taken_0x1db67c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1DB680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB67Cu;
        // 0x1db680: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db67c) {
            ctx->pc = 0x1DB714u;
            goto label_1db714;
        }
    }
    ctx->pc = 0x1DB684u;
label_1db684:
    // 0x1db684: 0x26760018  addiu       $s6, $s3, 0x18
    ctx->pc = 0x1db684u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_1db688:
    // 0x1db688: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1db688u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db68c:
    // 0x1db68c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1db68cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db690:
    // 0x1db690: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x1db690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_1db694:
    // 0x1db694: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1db698:
    if (ctx->pc == 0x1DB698u) {
        ctx->pc = 0x1DB698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB694u;
        // 0x1db698: 0x8e630014  lw          $v1, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB69Cu;
        goto label_1db69c;
    }
    ctx->pc = 0x1DB694u;
    {
        const bool branch_taken_0x1db694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db694) {
            ctx->pc = 0x1DB698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB694u;
            // 0x1db698: 0x8e630014  lw          $v1, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB6BCu;
            goto label_1db6bc;
        }
    }
    ctx->pc = 0x1DB69Cu;
label_1db69c:
    // 0x1db69c: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x1db69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_1db6a0:
    // 0x1db6a0: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x1db6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_1db6a4:
    // 0x1db6a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1db6a8:
    // 0x1db6a8: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1db6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_1db6ac:
    // 0x1db6ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1db6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1db6b0:
    // 0x1db6b0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1db6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1db6b4:
    // 0x1db6b4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1db6b8:
    if (ctx->pc == 0x1DB6B8u) {
        ctx->pc = 0x1DB6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6B4u;
        // 0x1db6b8: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB6BCu;
        goto label_1db6bc;
    }
    ctx->pc = 0x1DB6B4u;
    {
        const bool branch_taken_0x1db6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6B4u;
        // 0x1db6b8: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db6b4) {
            ctx->pc = 0x1DB6C8u;
            goto label_1db6c8;
        }
    }
    ctx->pc = 0x1DB6BCu;
label_1db6bc:
    // 0x1db6bc: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x1db6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_1db6c0:
    // 0x1db6c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1db6c4:
    // 0x1db6c4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1db6c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1db6c8:
    // 0x1db6c8: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_1db6cc:
    if (ctx->pc == 0x1DB6CCu) {
        ctx->pc = 0x1DB6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6C8u;
        // 0x1db6cc: 0x2625004c  addiu       $a1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB6D0u;
        goto label_1db6d0;
    }
    ctx->pc = 0x1DB6C8u;
    {
        const bool branch_taken_0x1db6c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6C8u;
        // 0x1db6cc: 0x2625004c  addiu       $a1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db6c8) {
            ctx->pc = 0x1DB700u;
            goto label_1db700;
        }
    }
    ctx->pc = 0x1DB6D0u;
label_1db6d0:
    // 0x1db6d0: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x1db6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_1db6d4:
    // 0x1db6d4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1db6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1db6d8:
    // 0x1db6d8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_1db6dc:
    if (ctx->pc == 0x1DB6DCu) {
        ctx->pc = 0x1DB6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6D8u;
        // 0x1db6dc: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB6E0u;
        goto label_1db6e0;
    }
    ctx->pc = 0x1DB6D8u;
    {
        const bool branch_taken_0x1db6d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6D8u;
        // 0x1db6dc: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db6d8) {
            ctx->pc = 0x1DB700u;
            goto label_1db700;
        }
    }
    ctx->pc = 0x1DB6E0u;
label_1db6e0:
    // 0x1db6e0: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x1db6e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1db6e4:
    // 0x1db6e4: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x1db6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_1db6e8:
    // 0x1db6e8: 0x60f809  jalr        $v1
label_1db6ec:
    if (ctx->pc == 0x1DB6ECu) {
        ctx->pc = 0x1DB6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6E8u;
        // 0x1db6ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB6F0u;
        goto label_1db6f0;
    }
    ctx->pc = 0x1DB6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DB6F0u);
        ctx->pc = 0x1DB6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6E8u;
        // 0x1db6ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB6E8u, 0x1DB6F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB6F0u;
label_1db6f0:
    // 0x1db6f0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1db6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1db6f4:
    // 0x1db6f4: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x1db6f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_1db6f8:
    // 0x1db6f8: 0x3d0b80b  movn        $s7, $fp, $s0
    ctx->pc = 0x1db6f8u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_U64(ctx, 23, GPR_U64(ctx, 30));
label_1db6fc:
    // 0x1db6fc: 0x0  nop
    ctx->pc = 0x1db6fcu;
    // NOP
label_1db700:
    // 0x1db700: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1db700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1db704:
    // 0x1db704: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1db704u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1db708:
    // 0x1db708: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1db708u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1db70c:
    // 0x1db70c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_1db710:
    if (ctx->pc == 0x1DB710u) {
        ctx->pc = 0x1DB710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB70Cu;
        // 0x1db710: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB714u;
        goto label_1db714;
    }
    ctx->pc = 0x1DB70Cu;
    {
        const bool branch_taken_0x1db70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB70Cu;
        // 0x1db710: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db70c) {
            ctx->pc = 0x1DB690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db690;
        }
    }
    ctx->pc = 0x1DB714u;
label_1db714:
    // 0x1db714: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1db714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1db718:
    // 0x1db718: 0x18400044  blez        $v0, . + 4 + (0x44 << 2)
label_1db71c:
    if (ctx->pc == 0x1DB71Cu) {
        ctx->pc = 0x1DB71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB718u;
        // 0x1db71c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB720u;
        goto label_1db720;
    }
    ctx->pc = 0x1DB718u;
    {
        const bool branch_taken_0x1db718 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1DB71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB718u;
        // 0x1db71c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db718) {
            ctx->pc = 0x1DB82Cu;
            goto label_1db82c;
        }
    }
    ctx->pc = 0x1DB720u;
label_1db720:
    // 0x1db720: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1db720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db724:
    // 0x1db724: 0x0  nop
    ctx->pc = 0x1db724u;
    // NOP
label_1db728:
    // 0x1db728: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x1db728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_1db72c:
    // 0x1db72c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1db730:
    if (ctx->pc == 0x1DB730u) {
        ctx->pc = 0x1DB730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB72Cu;
        // 0x1db730: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB734u;
        goto label_1db734;
    }
    ctx->pc = 0x1DB72Cu;
    {
        const bool branch_taken_0x1db72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB72Cu;
        // 0x1db730: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db72c) {
            ctx->pc = 0x1DB758u;
            goto label_1db758;
        }
    }
    ctx->pc = 0x1DB734u;
label_1db734:
    // 0x1db734: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x1db734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_1db738:
    // 0x1db738: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x1db738u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_1db73c:
    // 0x1db73c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1db73cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1db740:
    // 0x1db740: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1db744:
    // 0x1db744: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1db744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1db748:
    // 0x1db748: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1db748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1db74c:
    // 0x1db74c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1db74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1db750:
    // 0x1db750: 0x10000005  b           . + 4 + (0x5 << 2)
label_1db754:
    if (ctx->pc == 0x1DB754u) {
        ctx->pc = 0x1DB754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB750u;
        // 0x1db754: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB758u;
        goto label_1db758;
    }
    ctx->pc = 0x1DB750u;
    {
        const bool branch_taken_0x1db750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB750u;
        // 0x1db754: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db750) {
            ctx->pc = 0x1DB768u;
            goto label_1db768;
        }
    }
    ctx->pc = 0x1DB758u;
label_1db758:
    // 0x1db758: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1db758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1db75c:
    // 0x1db75c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1db75cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db760:
    // 0x1db760: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1db764:
    // 0x1db764: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1db764u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1db768:
    // 0x1db768: 0x1220002b  beqz        $s1, . + 4 + (0x2B << 2)
label_1db76c:
    if (ctx->pc == 0x1DB76Cu) {
        ctx->pc = 0x1DB76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB768u;
        // 0x1db76c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB770u;
        goto label_1db770;
    }
    ctx->pc = 0x1DB768u;
    {
        const bool branch_taken_0x1db768 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB768u;
        // 0x1db76c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db768) {
            ctx->pc = 0x1DB818u;
            goto label_1db818;
        }
    }
    ctx->pc = 0x1DB770u;
label_1db770:
    // 0x1db770: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x1db770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1db774:
    // 0x1db774: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1db778:
    if (ctx->pc == 0x1DB778u) {
        ctx->pc = 0x1DB778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB774u;
        // 0x1db778: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB77Cu;
        goto label_1db77c;
    }
    ctx->pc = 0x1DB774u;
    {
        const bool branch_taken_0x1db774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DB778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB774u;
        // 0x1db778: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db774) {
            ctx->pc = 0x1DB78Cu;
            goto label_1db78c;
        }
    }
    ctx->pc = 0x1DB77Cu;
label_1db77c:
    // 0x1db77c: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
label_1db780:
    if (ctx->pc == 0x1DB780u) {
        ctx->pc = 0x1DB780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB77Cu;
        // 0x1db780: 0x8e620024  lw          $v0, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB784u;
        goto label_1db784;
    }
    ctx->pc = 0x1DB77Cu;
    {
        const bool branch_taken_0x1db77c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1db77c) {
            ctx->pc = 0x1DB780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB77Cu;
            // 0x1db780: 0x8e620024  lw          $v0, 0x24($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB7C0u;
            goto label_1db7c0;
        }
    }
    ctx->pc = 0x1DB784u;
label_1db784:
    // 0x1db784: 0x10000025  b           . + 4 + (0x25 << 2)
label_1db788:
    if (ctx->pc == 0x1DB788u) {
        ctx->pc = 0x1DB788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB784u;
        // 0x1db788: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB78Cu;
        goto label_1db78c;
    }
    ctx->pc = 0x1DB784u;
    {
        const bool branch_taken_0x1db784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB784u;
        // 0x1db788: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db784) {
            ctx->pc = 0x1DB81Cu;
            goto label_1db81c;
        }
    }
    ctx->pc = 0x1DB78Cu;
label_1db78c:
    // 0x1db78c: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x1db78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1db790:
    // 0x1db790: 0x2625004c  addiu       $a1, $s1, 0x4C
    ctx->pc = 0x1db790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
label_1db794:
    // 0x1db794: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1db794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1db798:
    // 0x1db798: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
label_1db79c:
    if (ctx->pc == 0x1DB79Cu) {
        ctx->pc = 0x1DB79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB798u;
        // 0x1db79c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB7A0u;
        goto label_1db7a0;
    }
    ctx->pc = 0x1DB798u;
    {
        const bool branch_taken_0x1db798 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB798u;
        // 0x1db79c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db798) {
            ctx->pc = 0x1DB818u;
            goto label_1db818;
        }
    }
    ctx->pc = 0x1DB7A0u;
label_1db7a0:
    // 0x1db7a0: 0x5080001e  beql        $a0, $zero, . + 4 + (0x1E << 2)
label_1db7a4:
    if (ctx->pc == 0x1DB7A4u) {
        ctx->pc = 0x1DB7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB7A0u;
        // 0x1db7a4: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB7A8u;
        goto label_1db7a8;
    }
    ctx->pc = 0x1DB7A0u;
    {
        const bool branch_taken_0x1db7a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db7a0) {
            ctx->pc = 0x1DB7A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB7A0u;
            // 0x1db7a4: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB81Cu;
            goto label_1db81c;
        }
    }
    ctx->pc = 0x1DB7A8u;
label_1db7a8:
    // 0x1db7a8: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x1db7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_1db7ac:
    // 0x1db7ac: 0x40f809  jalr        $v0
label_1db7b0:
    if (ctx->pc == 0x1DB7B0u) {
        ctx->pc = 0x1DB7B4u;
        goto label_1db7b4;
    }
    ctx->pc = 0x1DB7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DB7B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB7ACu, 0x1DB7B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB7B4u;
label_1db7b4:
    // 0x1db7b4: 0x10000019  b           . + 4 + (0x19 << 2)
label_1db7b8:
    if (ctx->pc == 0x1DB7B8u) {
        ctx->pc = 0x1DB7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB7B4u;
        // 0x1db7b8: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB7BCu;
        goto label_1db7bc;
    }
    ctx->pc = 0x1DB7B4u;
    {
        const bool branch_taken_0x1db7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB7B4u;
        // 0x1db7b8: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db7b4) {
            ctx->pc = 0x1DB81Cu;
            goto label_1db81c;
        }
    }
    ctx->pc = 0x1DB7BCu;
label_1db7bc:
    // 0x1db7bc: 0x0  nop
    ctx->pc = 0x1db7bcu;
    // NOP
label_1db7c0:
    // 0x1db7c0: 0x2625004c  addiu       $a1, $s1, 0x4C
    ctx->pc = 0x1db7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
label_1db7c4:
    // 0x1db7c4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1db7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1db7c8:
    // 0x1db7c8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1db7cc:
    if (ctx->pc == 0x1DB7CCu) {
        ctx->pc = 0x1DB7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB7C8u;
        // 0x1db7cc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB7D0u;
        goto label_1db7d0;
    }
    ctx->pc = 0x1DB7C8u;
    {
        const bool branch_taken_0x1db7c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB7C8u;
        // 0x1db7cc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db7c8) {
            ctx->pc = 0x1DB7E8u;
            goto label_1db7e8;
        }
    }
    ctx->pc = 0x1DB7D0u;
label_1db7d0:
    // 0x1db7d0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1db7d4:
    if (ctx->pc == 0x1DB7D4u) {
        ctx->pc = 0x1DB7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB7D0u;
        // 0x1db7d4: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB7D8u;
        goto label_1db7d8;
    }
    ctx->pc = 0x1DB7D0u;
    {
        const bool branch_taken_0x1db7d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db7d0) {
            ctx->pc = 0x1DB7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB7D0u;
            // 0x1db7d4: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB7ECu;
            goto label_1db7ec;
        }
    }
    ctx->pc = 0x1DB7D8u;
label_1db7d8:
    // 0x1db7d8: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x1db7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_1db7dc:
    // 0x1db7dc: 0x40f809  jalr        $v0
label_1db7e0:
    if (ctx->pc == 0x1DB7E0u) {
        ctx->pc = 0x1DB7E4u;
        goto label_1db7e4;
    }
    ctx->pc = 0x1DB7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DB7E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB7DCu, 0x1DB7E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB7E4u;
label_1db7e4:
    // 0x1db7e4: 0x0  nop
    ctx->pc = 0x1db7e4u;
    // NOP
label_1db7e8:
    // 0x1db7e8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1db7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1db7ec:
    // 0x1db7ec: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x1db7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_1db7f0:
    // 0x1db7f0: 0x2442004c  addiu       $v0, $v0, 0x4C
    ctx->pc = 0x1db7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
label_1db7f4:
    // 0x1db7f4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1db7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1db7f8:
    // 0x1db7f8: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x1db7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1db7fc:
    // 0x1db7fc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1db800:
    if (ctx->pc == 0x1DB800u) {
        ctx->pc = 0x1DB800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB7FCu;
        // 0x1db800: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB804u;
        goto label_1db804;
    }
    ctx->pc = 0x1DB7FCu;
    {
        const bool branch_taken_0x1db7fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB7FCu;
        // 0x1db800: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db7fc) {
            ctx->pc = 0x1DB818u;
            goto label_1db818;
        }
    }
    ctx->pc = 0x1DB804u;
label_1db804:
    // 0x1db804: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_1db808:
    if (ctx->pc == 0x1DB808u) {
        ctx->pc = 0x1DB808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB804u;
        // 0x1db808: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB80Cu;
        goto label_1db80c;
    }
    ctx->pc = 0x1DB804u;
    {
        const bool branch_taken_0x1db804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db804) {
            ctx->pc = 0x1DB808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB804u;
            // 0x1db808: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB81Cu;
            goto label_1db81c;
        }
    }
    ctx->pc = 0x1DB80Cu;
label_1db80c:
    // 0x1db80c: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x1db80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_1db810:
    // 0x1db810: 0x40f809  jalr        $v0
label_1db814:
    if (ctx->pc == 0x1DB814u) {
        ctx->pc = 0x1DB818u;
        goto label_1db818;
    }
    ctx->pc = 0x1DB810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DB818u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB810u, 0x1DB818u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DB818u;
label_1db818:
    // 0x1db818: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1db818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1db81c:
    // 0x1db81c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1db81cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1db820:
    // 0x1db820: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1db820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1db824:
    // 0x1db824: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
label_1db828:
    if (ctx->pc == 0x1DB828u) {
        ctx->pc = 0x1DB828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB824u;
        // 0x1db828: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB82Cu;
        goto label_1db82c;
    }
    ctx->pc = 0x1DB824u;
    {
        const bool branch_taken_0x1db824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB824u;
        // 0x1db828: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db824) {
            ctx->pc = 0x1DB728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db728;
        }
    }
    ctx->pc = 0x1DB82Cu;
label_1db82c:
    // 0x1db82c: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x1db82cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1db830:
    // 0x1db830: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1db830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1db834:
    // 0x1db834: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1db834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1db838:
    // 0x1db838: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1db838u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1db83c:
    // 0x1db83c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1db83cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1db840:
    // 0x1db840: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1db840u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1db844:
    // 0x1db844: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1db844u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1db848:
    // 0x1db848: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1db848u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1db84c:
    // 0x1db84c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1db84cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1db850:
    // 0x1db850: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1db850u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1db854:
    // 0x1db854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1db858:
    // 0x1db858: 0x3e00008  jr          $ra
label_1db85c:
    if (ctx->pc == 0x1DB85Cu) {
        ctx->pc = 0x1DB85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB858u;
        // 0x1db85c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB860u;
        goto label_1db860;
    }
    ctx->pc = 0x1DB858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB858u;
        // 0x1db85c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB860u;
label_1db860:
    // 0x1db860: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1db860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1db864:
    // 0x1db864: 0x0  nop
    ctx->pc = 0x1db864u;
    // NOP
label_1db868:
    // 0x1db868: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1db868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1db86c:
    // 0x1db86c: 0x0  nop
    ctx->pc = 0x1db86cu;
    // NOP
label_1db870:
    // 0x1db870: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1db870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1db874:
    // 0x1db874: 0x0  nop
    ctx->pc = 0x1db874u;
    // NOP
    ctx->pc = 0x1db878u;
}
