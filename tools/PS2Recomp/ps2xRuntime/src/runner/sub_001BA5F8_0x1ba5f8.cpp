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

// Function: sub_001BA5F8
// Address: 0x1ba5f8 - 0x1ba830
void sub_001BA5F8_0x1ba5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA5F8_0x1ba5f8");
#endif

    switch (ctx->pc) {
        case 0x1ba5f8u: goto label_1ba5f8;
        case 0x1ba5fcu: goto label_1ba5fc;
        case 0x1ba600u: goto label_1ba600;
        case 0x1ba604u: goto label_1ba604;
        case 0x1ba608u: goto label_1ba608;
        case 0x1ba60cu: goto label_1ba60c;
        case 0x1ba610u: goto label_1ba610;
        case 0x1ba614u: goto label_1ba614;
        case 0x1ba618u: goto label_1ba618;
        case 0x1ba61cu: goto label_1ba61c;
        case 0x1ba620u: goto label_1ba620;
        case 0x1ba624u: goto label_1ba624;
        case 0x1ba628u: goto label_1ba628;
        case 0x1ba62cu: goto label_1ba62c;
        case 0x1ba630u: goto label_1ba630;
        case 0x1ba634u: goto label_1ba634;
        case 0x1ba638u: goto label_1ba638;
        case 0x1ba63cu: goto label_1ba63c;
        case 0x1ba640u: goto label_1ba640;
        case 0x1ba644u: goto label_1ba644;
        case 0x1ba648u: goto label_1ba648;
        case 0x1ba64cu: goto label_1ba64c;
        case 0x1ba650u: goto label_1ba650;
        case 0x1ba654u: goto label_1ba654;
        case 0x1ba658u: goto label_1ba658;
        case 0x1ba65cu: goto label_1ba65c;
        case 0x1ba660u: goto label_1ba660;
        case 0x1ba664u: goto label_1ba664;
        case 0x1ba668u: goto label_1ba668;
        case 0x1ba66cu: goto label_1ba66c;
        case 0x1ba670u: goto label_1ba670;
        case 0x1ba674u: goto label_1ba674;
        case 0x1ba678u: goto label_1ba678;
        case 0x1ba67cu: goto label_1ba67c;
        case 0x1ba680u: goto label_1ba680;
        case 0x1ba684u: goto label_1ba684;
        case 0x1ba688u: goto label_1ba688;
        case 0x1ba68cu: goto label_1ba68c;
        case 0x1ba690u: goto label_1ba690;
        case 0x1ba694u: goto label_1ba694;
        case 0x1ba698u: goto label_1ba698;
        case 0x1ba69cu: goto label_1ba69c;
        case 0x1ba6a0u: goto label_1ba6a0;
        case 0x1ba6a4u: goto label_1ba6a4;
        case 0x1ba6a8u: goto label_1ba6a8;
        case 0x1ba6acu: goto label_1ba6ac;
        case 0x1ba6b0u: goto label_1ba6b0;
        case 0x1ba6b4u: goto label_1ba6b4;
        case 0x1ba6b8u: goto label_1ba6b8;
        case 0x1ba6bcu: goto label_1ba6bc;
        case 0x1ba6c0u: goto label_1ba6c0;
        case 0x1ba6c4u: goto label_1ba6c4;
        case 0x1ba6c8u: goto label_1ba6c8;
        case 0x1ba6ccu: goto label_1ba6cc;
        case 0x1ba6d0u: goto label_1ba6d0;
        case 0x1ba6d4u: goto label_1ba6d4;
        case 0x1ba6d8u: goto label_1ba6d8;
        case 0x1ba6dcu: goto label_1ba6dc;
        case 0x1ba6e0u: goto label_1ba6e0;
        case 0x1ba6e4u: goto label_1ba6e4;
        case 0x1ba6e8u: goto label_1ba6e8;
        case 0x1ba6ecu: goto label_1ba6ec;
        case 0x1ba6f0u: goto label_1ba6f0;
        case 0x1ba6f4u: goto label_1ba6f4;
        case 0x1ba6f8u: goto label_1ba6f8;
        case 0x1ba6fcu: goto label_1ba6fc;
        case 0x1ba700u: goto label_1ba700;
        case 0x1ba704u: goto label_1ba704;
        case 0x1ba708u: goto label_1ba708;
        case 0x1ba70cu: goto label_1ba70c;
        case 0x1ba710u: goto label_1ba710;
        case 0x1ba714u: goto label_1ba714;
        case 0x1ba718u: goto label_1ba718;
        case 0x1ba71cu: goto label_1ba71c;
        case 0x1ba720u: goto label_1ba720;
        case 0x1ba724u: goto label_1ba724;
        case 0x1ba728u: goto label_1ba728;
        case 0x1ba72cu: goto label_1ba72c;
        case 0x1ba730u: goto label_1ba730;
        case 0x1ba734u: goto label_1ba734;
        case 0x1ba738u: goto label_1ba738;
        case 0x1ba73cu: goto label_1ba73c;
        case 0x1ba740u: goto label_1ba740;
        case 0x1ba744u: goto label_1ba744;
        case 0x1ba748u: goto label_1ba748;
        case 0x1ba74cu: goto label_1ba74c;
        case 0x1ba750u: goto label_1ba750;
        case 0x1ba754u: goto label_1ba754;
        case 0x1ba758u: goto label_1ba758;
        case 0x1ba75cu: goto label_1ba75c;
        case 0x1ba760u: goto label_1ba760;
        case 0x1ba764u: goto label_1ba764;
        case 0x1ba768u: goto label_1ba768;
        case 0x1ba76cu: goto label_1ba76c;
        case 0x1ba770u: goto label_1ba770;
        case 0x1ba774u: goto label_1ba774;
        case 0x1ba778u: goto label_1ba778;
        case 0x1ba77cu: goto label_1ba77c;
        case 0x1ba780u: goto label_1ba780;
        case 0x1ba784u: goto label_1ba784;
        case 0x1ba788u: goto label_1ba788;
        case 0x1ba78cu: goto label_1ba78c;
        case 0x1ba790u: goto label_1ba790;
        case 0x1ba794u: goto label_1ba794;
        case 0x1ba798u: goto label_1ba798;
        case 0x1ba79cu: goto label_1ba79c;
        case 0x1ba7a0u: goto label_1ba7a0;
        case 0x1ba7a4u: goto label_1ba7a4;
        case 0x1ba7a8u: goto label_1ba7a8;
        case 0x1ba7acu: goto label_1ba7ac;
        case 0x1ba7b0u: goto label_1ba7b0;
        case 0x1ba7b4u: goto label_1ba7b4;
        case 0x1ba7b8u: goto label_1ba7b8;
        case 0x1ba7bcu: goto label_1ba7bc;
        case 0x1ba7c0u: goto label_1ba7c0;
        case 0x1ba7c4u: goto label_1ba7c4;
        case 0x1ba7c8u: goto label_1ba7c8;
        case 0x1ba7ccu: goto label_1ba7cc;
        case 0x1ba7d0u: goto label_1ba7d0;
        case 0x1ba7d4u: goto label_1ba7d4;
        case 0x1ba7d8u: goto label_1ba7d8;
        case 0x1ba7dcu: goto label_1ba7dc;
        case 0x1ba7e0u: goto label_1ba7e0;
        case 0x1ba7e4u: goto label_1ba7e4;
        case 0x1ba7e8u: goto label_1ba7e8;
        case 0x1ba7ecu: goto label_1ba7ec;
        case 0x1ba7f0u: goto label_1ba7f0;
        case 0x1ba7f4u: goto label_1ba7f4;
        case 0x1ba7f8u: goto label_1ba7f8;
        case 0x1ba7fcu: goto label_1ba7fc;
        case 0x1ba800u: goto label_1ba800;
        case 0x1ba804u: goto label_1ba804;
        case 0x1ba808u: goto label_1ba808;
        case 0x1ba80cu: goto label_1ba80c;
        case 0x1ba810u: goto label_1ba810;
        case 0x1ba814u: goto label_1ba814;
        case 0x1ba818u: goto label_1ba818;
        case 0x1ba81cu: goto label_1ba81c;
        case 0x1ba820u: goto label_1ba820;
        case 0x1ba824u: goto label_1ba824;
        case 0x1ba828u: goto label_1ba828;
        case 0x1ba82cu: goto label_1ba82c;
        default: break;
    }

    ctx->pc = 0x1ba5f8u;

label_1ba5f8:
    // 0x1ba5f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ba5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1ba5fc:
    // 0x1ba5fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ba5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ba600:
    // 0x1ba600: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ba600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1ba604:
    // 0x1ba604: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ba604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1ba608:
    // 0x1ba608: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1ba608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1ba60c:
    // 0x1ba60c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ba610:
    // 0x1ba610: 0xc06bbe0  jal         func_1AEF80
label_1ba614:
    if (ctx->pc == 0x1BA614u) {
        ctx->pc = 0x1BA614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA610u;
        // 0x1ba614: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA618u;
        goto label_1ba618;
    }
    ctx->pc = 0x1BA610u;
    SET_GPR_U32(ctx, 31, 0x1BA618u);
    ctx->pc = 0x1BA614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA610u;
    // 0x1ba614: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEF80u, 0x1BA610u, 0x1BA618u)) {
        return;
    }
    ctx->pc = 0x1BA618u;
label_1ba618:
    // 0x1ba618: 0x8e440044  lw          $a0, 0x44($s2)
    ctx->pc = 0x1ba618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_1ba61c:
    // 0x1ba61c: 0xc06c97c  jal         func_1B25F0
label_1ba620:
    if (ctx->pc == 0x1BA620u) {
        ctx->pc = 0x1BA620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA61Cu;
        // 0x1ba620: 0x8e450260  lw          $a1, 0x260($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA624u;
        goto label_1ba624;
    }
    ctx->pc = 0x1BA61Cu;
    SET_GPR_U32(ctx, 31, 0x1BA624u);
    ctx->pc = 0x1BA620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA61Cu;
    // 0x1ba620: 0x8e450260  lw          $a1, 0x260($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1BA61Cu, 0x1BA624u)) {
        return;
    }
    ctx->pc = 0x1BA624u;
label_1ba624:
    // 0x1ba624: 0x8e440044  lw          $a0, 0x44($s2)
    ctx->pc = 0x1ba624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_1ba628:
    // 0x1ba628: 0x8e450264  lw          $a1, 0x264($s2)
    ctx->pc = 0x1ba628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
label_1ba62c:
    // 0x1ba62c: 0xc06c97c  jal         func_1B25F0
label_1ba630:
    if (ctx->pc == 0x1BA630u) {
        ctx->pc = 0x1BA630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA62Cu;
        // 0x1ba630: 0xae42027c  sw          $v0, 0x27C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 636), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA634u;
        goto label_1ba634;
    }
    ctx->pc = 0x1BA62Cu;
    SET_GPR_U32(ctx, 31, 0x1BA634u);
    ctx->pc = 0x1BA630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA62Cu;
    // 0x1ba630: 0xae42027c  sw          $v0, 0x27C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 636), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1BA62Cu, 0x1BA634u)) {
        return;
    }
    ctx->pc = 0x1BA634u;
label_1ba634:
    // 0x1ba634: 0x8e440044  lw          $a0, 0x44($s2)
    ctx->pc = 0x1ba634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_1ba638:
    // 0x1ba638: 0x8e450268  lw          $a1, 0x268($s2)
    ctx->pc = 0x1ba638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
label_1ba63c:
    // 0x1ba63c: 0xc06c97c  jal         func_1B25F0
label_1ba640:
    if (ctx->pc == 0x1BA640u) {
        ctx->pc = 0x1BA640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA63Cu;
        // 0x1ba640: 0xae420280  sw          $v0, 0x280($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA644u;
        goto label_1ba644;
    }
    ctx->pc = 0x1BA63Cu;
    SET_GPR_U32(ctx, 31, 0x1BA644u);
    ctx->pc = 0x1BA640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA63Cu;
    // 0x1ba640: 0xae420280  sw          $v0, 0x280($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 640), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1BA63Cu, 0x1BA644u)) {
        return;
    }
    ctx->pc = 0x1BA644u;
label_1ba644:
    // 0x1ba644: 0x8e440044  lw          $a0, 0x44($s2)
    ctx->pc = 0x1ba644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_1ba648:
    // 0x1ba648: 0x8e45026c  lw          $a1, 0x26C($s2)
    ctx->pc = 0x1ba648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
label_1ba64c:
    // 0x1ba64c: 0xc06c97c  jal         func_1B25F0
label_1ba650:
    if (ctx->pc == 0x1BA650u) {
        ctx->pc = 0x1BA650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA64Cu;
        // 0x1ba650: 0xae420284  sw          $v0, 0x284($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 644), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA654u;
        goto label_1ba654;
    }
    ctx->pc = 0x1BA64Cu;
    SET_GPR_U32(ctx, 31, 0x1BA654u);
    ctx->pc = 0x1BA650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA64Cu;
    // 0x1ba650: 0xae420284  sw          $v0, 0x284($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 644), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1BA64Cu, 0x1BA654u)) {
        return;
    }
    ctx->pc = 0x1BA654u;
label_1ba654:
    // 0x1ba654: 0x8e440044  lw          $a0, 0x44($s2)
    ctx->pc = 0x1ba654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_1ba658:
    // 0x1ba658: 0x8e450270  lw          $a1, 0x270($s2)
    ctx->pc = 0x1ba658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 624)));
label_1ba65c:
    // 0x1ba65c: 0xc06c97c  jal         func_1B25F0
label_1ba660:
    if (ctx->pc == 0x1BA660u) {
        ctx->pc = 0x1BA660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA65Cu;
        // 0x1ba660: 0xae420288  sw          $v0, 0x288($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 648), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA664u;
        goto label_1ba664;
    }
    ctx->pc = 0x1BA65Cu;
    SET_GPR_U32(ctx, 31, 0x1BA664u);
    ctx->pc = 0x1BA660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA65Cu;
    // 0x1ba660: 0xae420288  sw          $v0, 0x288($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 648), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1BA65Cu, 0x1BA664u)) {
        return;
    }
    ctx->pc = 0x1BA664u;
label_1ba664:
    // 0x1ba664: 0x8e440044  lw          $a0, 0x44($s2)
    ctx->pc = 0x1ba664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_1ba668:
    // 0x1ba668: 0x8e450274  lw          $a1, 0x274($s2)
    ctx->pc = 0x1ba668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 628)));
label_1ba66c:
    // 0x1ba66c: 0xc06c97c  jal         func_1B25F0
label_1ba670:
    if (ctx->pc == 0x1BA670u) {
        ctx->pc = 0x1BA670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA66Cu;
        // 0x1ba670: 0xae42028c  sw          $v0, 0x28C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 652), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA674u;
        goto label_1ba674;
    }
    ctx->pc = 0x1BA66Cu;
    SET_GPR_U32(ctx, 31, 0x1BA674u);
    ctx->pc = 0x1BA670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA66Cu;
    // 0x1ba670: 0xae42028c  sw          $v0, 0x28C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 652), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1BA66Cu, 0x1BA674u)) {
        return;
    }
    ctx->pc = 0x1BA674u;
label_1ba674:
    // 0x1ba674: 0xae420290  sw          $v0, 0x290($s2)
    ctx->pc = 0x1ba674u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 656), GPR_U32(ctx, 2));
label_1ba678:
    // 0x1ba678: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x1ba678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1ba67c:
    // 0x1ba67c: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x1ba67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
label_1ba680:
    // 0x1ba680: 0x846400f8  lh          $a0, 0xF8($v1)
    ctx->pc = 0x1ba680u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 248)));
label_1ba684:
    // 0x1ba684: 0x8c6600fc  lw          $a2, 0xFC($v1)
    ctx->pc = 0x1ba684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_1ba688:
    // 0x1ba688: 0xc0f809  jalr        $a2
label_1ba68c:
    if (ctx->pc == 0x1BA68Cu) {
        ctx->pc = 0x1BA68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA688u;
        // 0x1ba68c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA690u;
        goto label_1ba690;
    }
    ctx->pc = 0x1BA688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1BA690u);
        ctx->pc = 0x1BA68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA688u;
        // 0x1ba68c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA688u, 0x1BA690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BA690u;
label_1ba690:
    // 0x1ba690: 0x8e440044  lw          $a0, 0x44($s2)
    ctx->pc = 0x1ba690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_1ba694:
    // 0x1ba694: 0xc06c97c  jal         func_1B25F0
label_1ba698:
    if (ctx->pc == 0x1BA698u) {
        ctx->pc = 0x1BA698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA694u;
        // 0x1ba698: 0x8e450278  lw          $a1, 0x278($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA69Cu;
        goto label_1ba69c;
    }
    ctx->pc = 0x1BA694u;
    SET_GPR_U32(ctx, 31, 0x1BA69Cu);
    ctx->pc = 0x1BA698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA694u;
    // 0x1ba698: 0x8e450278  lw          $a1, 0x278($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1BA694u, 0x1BA69Cu)) {
        return;
    }
    ctx->pc = 0x1BA69Cu;
label_1ba69c:
    // 0x1ba69c: 0xae420294  sw          $v0, 0x294($s2)
    ctx->pc = 0x1ba69cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 660), GPR_U32(ctx, 2));
label_1ba6a0:
    // 0x1ba6a0: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x1ba6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1ba6a4:
    // 0x1ba6a4: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x1ba6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
label_1ba6a8:
    // 0x1ba6a8: 0x846400f8  lh          $a0, 0xF8($v1)
    ctx->pc = 0x1ba6a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 248)));
label_1ba6ac:
    // 0x1ba6ac: 0x8c6600fc  lw          $a2, 0xFC($v1)
    ctx->pc = 0x1ba6acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_1ba6b0:
    // 0x1ba6b0: 0xc0f809  jalr        $a2
label_1ba6b4:
    if (ctx->pc == 0x1BA6B4u) {
        ctx->pc = 0x1BA6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA6B0u;
        // 0x1ba6b4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA6B8u;
        goto label_1ba6b8;
    }
    ctx->pc = 0x1BA6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1BA6B8u);
        ctx->pc = 0x1BA6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA6B0u;
        // 0x1ba6b4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA6B0u, 0x1BA6B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BA6B8u;
label_1ba6b8:
    // 0x1ba6b8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1ba6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1ba6bc:
    // 0x1ba6bc: 0xc06d134  jal         func_1B44D0
label_1ba6c0:
    if (ctx->pc == 0x1BA6C0u) {
        ctx->pc = 0x1BA6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA6BCu;
        // 0x1ba6c0: 0x8c449324  lw          $a0, -0x6CDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939428)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA6C4u;
        goto label_1ba6c4;
    }
    ctx->pc = 0x1BA6BCu;
    SET_GPR_U32(ctx, 31, 0x1BA6C4u);
    ctx->pc = 0x1BA6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA6BCu;
    // 0x1ba6c0: 0x8c449324  lw          $a0, -0x6CDC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939428)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1BA6BCu, 0x1BA6C4u)) {
        return;
    }
    ctx->pc = 0x1BA6C4u;
label_1ba6c4:
    // 0x1ba6c4: 0xae420330  sw          $v0, 0x330($s2)
    ctx->pc = 0x1ba6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 816), GPR_U32(ctx, 2));
label_1ba6c8:
    // 0x1ba6c8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1ba6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1ba6cc:
    // 0x1ba6cc: 0xc06d134  jal         func_1B44D0
label_1ba6d0:
    if (ctx->pc == 0x1BA6D0u) {
        ctx->pc = 0x1BA6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA6CCu;
        // 0x1ba6d0: 0x8c449328  lw          $a0, -0x6CD8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA6D4u;
        goto label_1ba6d4;
    }
    ctx->pc = 0x1BA6CCu;
    SET_GPR_U32(ctx, 31, 0x1BA6D4u);
    ctx->pc = 0x1BA6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA6CCu;
    // 0x1ba6d0: 0x8c449328  lw          $a0, -0x6CD8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1BA6CCu, 0x1BA6D4u)) {
        return;
    }
    ctx->pc = 0x1BA6D4u;
label_1ba6d4:
    // 0x1ba6d4: 0xae420334  sw          $v0, 0x334($s2)
    ctx->pc = 0x1ba6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 820), GPR_U32(ctx, 2));
label_1ba6d8:
    // 0x1ba6d8: 0x8e510288  lw          $s1, 0x288($s2)
    ctx->pc = 0x1ba6d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 648)));
label_1ba6dc:
    // 0x1ba6dc: 0x8e440044  lw          $a0, 0x44($s2)
    ctx->pc = 0x1ba6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_1ba6e0:
    // 0x1ba6e0: 0x8e300258  lw          $s0, 0x258($s1)
    ctx->pc = 0x1ba6e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_1ba6e4:
    // 0x1ba6e4: 0x860200d8  lh          $v0, 0xD8($s0)
    ctx->pc = 0x1ba6e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 216)));
label_1ba6e8:
    // 0x1ba6e8: 0x261000d8  addiu       $s0, $s0, 0xD8
    ctx->pc = 0x1ba6e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
label_1ba6ec:
    // 0x1ba6ec: 0xc06cae6  jal         func_1B2B98
label_1ba6f0:
    if (ctx->pc == 0x1BA6F0u) {
        ctx->pc = 0x1BA6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA6ECu;
        // 0x1ba6f0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA6F4u;
        goto label_1ba6f4;
    }
    ctx->pc = 0x1BA6ECu;
    SET_GPR_U32(ctx, 31, 0x1BA6F4u);
    ctx->pc = 0x1BA6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA6ECu;
    // 0x1ba6f0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2B98u, 0x1BA6ECu, 0x1BA6F4u)) {
        return;
    }
    ctx->pc = 0x1BA6F4u;
label_1ba6f4:
    // 0x1ba6f4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1ba6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ba6f8:
    // 0x1ba6f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ba6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ba6fc:
    // 0x1ba6fc: 0x60f809  jalr        $v1
label_1ba700:
    if (ctx->pc == 0x1BA700u) {
        ctx->pc = 0x1BA700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA6FCu;
        // 0x1ba700: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA704u;
        goto label_1ba704;
    }
    ctx->pc = 0x1BA6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BA704u);
        ctx->pc = 0x1BA700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA6FCu;
        // 0x1ba700: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA6FCu, 0x1BA704u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BA704u;
label_1ba704:
    // 0x1ba704: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1ba704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1ba708:
    // 0x1ba708: 0x8c43870c  lw          $v1, -0x78F4($v0)
    ctx->pc = 0x1ba708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
label_1ba70c:
    // 0x1ba70c: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x1ba70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1ba710:
    // 0x1ba710: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x1ba710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_1ba714:
    // 0x1ba714: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ba718:
    if (ctx->pc == 0x1BA718u) {
        ctx->pc = 0x1BA718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA714u;
        // 0x1ba718: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA71Cu;
        goto label_1ba71c;
    }
    ctx->pc = 0x1BA714u;
    {
        const bool branch_taken_0x1ba714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA714u;
        // 0x1ba718: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba714) {
            ctx->pc = 0x1BA728u;
            goto label_1ba728;
        }
    }
    ctx->pc = 0x1BA71Cu;
label_1ba71c:
    // 0x1ba71c: 0x8e430288  lw          $v1, 0x288($s2)
    ctx->pc = 0x1ba71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 648)));
label_1ba720:
    // 0x1ba720: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ba724:
    if (ctx->pc == 0x1BA724u) {
        ctx->pc = 0x1BA724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA720u;
        // 0x1ba724: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA728u;
        goto label_1ba728;
    }
    ctx->pc = 0x1BA720u;
    {
        const bool branch_taken_0x1ba720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA720u;
        // 0x1ba724: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba720) {
            ctx->pc = 0x1BA730u;
            goto label_1ba730;
        }
    }
    ctx->pc = 0x1BA728u;
label_1ba728:
    // 0x1ba728: 0x8e420288  lw          $v0, 0x288($s2)
    ctx->pc = 0x1ba728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 648)));
label_1ba72c:
    // 0x1ba72c: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1ba72cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_1ba730:
    // 0x1ba730: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ba730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ba734:
    // 0x1ba734: 0xc06bd58  jal         func_1AF560
label_1ba738:
    if (ctx->pc == 0x1BA738u) {
        ctx->pc = 0x1BA738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA734u;
        // 0x1ba738: 0x26500368  addiu       $s0, $s2, 0x368 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 872));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA73Cu;
        goto label_1ba73c;
    }
    ctx->pc = 0x1BA734u;
    SET_GPR_U32(ctx, 31, 0x1BA73Cu);
    ctx->pc = 0x1BA738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA734u;
    // 0x1ba738: 0x26500368  addiu       $s0, $s2, 0x368 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF560u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF560u, 0x1BA734u, 0x1BA73Cu)) {
        return;
    }
    ctx->pc = 0x1BA73Cu;
label_1ba73c:
    // 0x1ba73c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1ba73cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ba740:
    // 0x1ba740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ba740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ba744:
    // 0x1ba744: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba748:
    // 0x1ba748: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1ba748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1ba74c:
    // 0x1ba74c: 0xc0c493d  jal         func_3124F4
label_1ba750:
    if (ctx->pc == 0x1BA750u) {
        ctx->pc = 0x1BA750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA74Cu;
        // 0x1ba750: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA754u;
        goto label_1ba754;
    }
    ctx->pc = 0x1BA74Cu;
    SET_GPR_U32(ctx, 31, 0x1BA754u);
    ctx->pc = 0x1BA750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA74Cu;
    // 0x1ba750: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BA74Cu, 0x1BA754u)) {
        return;
    }
    ctx->pc = 0x1BA754u;
label_1ba754:
    // 0x1ba754: 0x265302a8  addiu       $s3, $s2, 0x2A8
    ctx->pc = 0x1ba754u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 680));
label_1ba758:
    // 0x1ba758: 0xc06c8c0  jal         func_1B2300
label_1ba75c:
    if (ctx->pc == 0x1BA75Cu) {
        ctx->pc = 0x1BA75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA758u;
        // 0x1ba75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA760u;
        goto label_1ba760;
    }
    ctx->pc = 0x1BA758u;
    SET_GPR_U32(ctx, 31, 0x1BA760u);
    ctx->pc = 0x1BA75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA758u;
    // 0x1ba75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2300u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2300u, 0x1BA758u, 0x1BA760u)) {
        return;
    }
    ctx->pc = 0x1BA760u;
label_1ba760:
    // 0x1ba760: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ba760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ba764:
    // 0x1ba764: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ba764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1ba768:
    // 0x1ba768: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x1ba768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_1ba76c:
    // 0x1ba76c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1ba770:
    if (ctx->pc == 0x1BA770u) {
        ctx->pc = 0x1BA770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA76Cu;
        // 0x1ba770: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA774u;
        goto label_1ba774;
    }
    ctx->pc = 0x1BA76Cu;
    {
        const bool branch_taken_0x1ba76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA76Cu;
        // 0x1ba770: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba76c) {
            ctx->pc = 0x1BA758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba758;
        }
    }
    ctx->pc = 0x1BA774u;
label_1ba774:
    // 0x1ba774: 0xc06fa4e  jal         func_1BE938
label_1ba778:
    if (ctx->pc == 0x1BA778u) {
        ctx->pc = 0x1BA778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA774u;
        // 0x1ba778: 0x8e44035c  lw          $a0, 0x35C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 860)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA77Cu;
        goto label_1ba77c;
    }
    ctx->pc = 0x1BA774u;
    SET_GPR_U32(ctx, 31, 0x1BA77Cu);
    ctx->pc = 0x1BA778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA774u;
    // 0x1ba778: 0x8e44035c  lw          $a0, 0x35C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 860)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE938u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BE938u, 0x1BA774u, 0x1BA77Cu)) {
        return;
    }
    ctx->pc = 0x1BA77Cu;
label_1ba77c:
    // 0x1ba77c: 0x8e420288  lw          $v0, 0x288($s2)
    ctx->pc = 0x1ba77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 648)));
label_1ba780:
    // 0x1ba780: 0x8e450338  lw          $a1, 0x338($s2)
    ctx->pc = 0x1ba780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
label_1ba784:
    // 0x1ba784: 0xc44f000c  lwc1        $f15, 0xC($v0)
    ctx->pc = 0x1ba784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1ba788:
    // 0x1ba788: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1ba788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ba78c:
    // 0x1ba78c: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x1ba78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1ba790:
    // 0x1ba790: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x1ba790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1ba794:
    // 0x1ba794: 0xc06fabe  jal         func_1BEAF8
label_1ba798:
    if (ctx->pc == 0x1BA798u) {
        ctx->pc = 0x1BA798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA794u;
        // 0x1ba798: 0x8e440364  lw          $a0, 0x364($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA79Cu;
        goto label_1ba79c;
    }
    ctx->pc = 0x1BA794u;
    SET_GPR_U32(ctx, 31, 0x1BA79Cu);
    ctx->pc = 0x1BA798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA794u;
    // 0x1ba798: 0x8e440364  lw          $a0, 0x364($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BEAF8u, 0x1BA794u, 0x1BA79Cu)) {
        return;
    }
    ctx->pc = 0x1BA79Cu;
label_1ba79c:
    // 0x1ba79c: 0xc06f80e  jal         func_1BE038
label_1ba7a0:
    if (ctx->pc == 0x1BA7A0u) {
        ctx->pc = 0x1BA7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA79Cu;
        // 0x1ba7a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA7A4u;
        goto label_1ba7a4;
    }
    ctx->pc = 0x1BA79Cu;
    SET_GPR_U32(ctx, 31, 0x1BA7A4u);
    ctx->pc = 0x1BA7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA79Cu;
    // 0x1ba7a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE038u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BE038u, 0x1BA79Cu, 0x1BA7A4u)) {
        return;
    }
    ctx->pc = 0x1BA7A4u;
label_1ba7a4:
    // 0x1ba7a4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1ba7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1ba7a8:
    // 0x1ba7a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba7ac:
    // 0x1ba7ac: 0xc07cd92  jal         func_1F3648
label_1ba7b0:
    if (ctx->pc == 0x1BA7B0u) {
        ctx->pc = 0x1BA7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA7ACu;
        // 0x1ba7b0: 0x8c44930c  lw          $a0, -0x6CF4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939404)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA7B4u;
        goto label_1ba7b4;
    }
    ctx->pc = 0x1BA7ACu;
    SET_GPR_U32(ctx, 31, 0x1BA7B4u);
    ctx->pc = 0x1BA7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA7ACu;
    // 0x1ba7b0: 0x8c44930c  lw          $a0, -0x6CF4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939404)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1BA7ACu, 0x1BA7B4u)) {
        return;
    }
    ctx->pc = 0x1BA7B4u;
label_1ba7b4:
    // 0x1ba7b4: 0xae4202d0  sw          $v0, 0x2D0($s2)
    ctx->pc = 0x1ba7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 720), GPR_U32(ctx, 2));
label_1ba7b8:
    // 0x1ba7b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba7b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba7bc:
    // 0x1ba7bc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1ba7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1ba7c0:
    // 0x1ba7c0: 0xc07cd92  jal         func_1F3648
label_1ba7c4:
    if (ctx->pc == 0x1BA7C4u) {
        ctx->pc = 0x1BA7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA7C0u;
        // 0x1ba7c4: 0x8c449310  lw          $a0, -0x6CF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939408)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA7C8u;
        goto label_1ba7c8;
    }
    ctx->pc = 0x1BA7C0u;
    SET_GPR_U32(ctx, 31, 0x1BA7C8u);
    ctx->pc = 0x1BA7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA7C0u;
    // 0x1ba7c4: 0x8c449310  lw          $a0, -0x6CF0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939408)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1BA7C0u, 0x1BA7C8u)) {
        return;
    }
    ctx->pc = 0x1BA7C8u;
label_1ba7c8:
    // 0x1ba7c8: 0xae4202d4  sw          $v0, 0x2D4($s2)
    ctx->pc = 0x1ba7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 724), GPR_U32(ctx, 2));
label_1ba7cc:
    // 0x1ba7cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba7d0:
    // 0x1ba7d0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1ba7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1ba7d4:
    // 0x1ba7d4: 0xc07cd92  jal         func_1F3648
label_1ba7d8:
    if (ctx->pc == 0x1BA7D8u) {
        ctx->pc = 0x1BA7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA7D4u;
        // 0x1ba7d8: 0x8c4492b8  lw          $a0, -0x6D48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA7DCu;
        goto label_1ba7dc;
    }
    ctx->pc = 0x1BA7D4u;
    SET_GPR_U32(ctx, 31, 0x1BA7DCu);
    ctx->pc = 0x1BA7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA7D4u;
    // 0x1ba7d8: 0x8c4492b8  lw          $a0, -0x6D48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939320)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1BA7D4u, 0x1BA7DCu)) {
        return;
    }
    ctx->pc = 0x1BA7DCu;
label_1ba7dc:
    // 0x1ba7dc: 0xae400328  sw          $zero, 0x328($s2)
    ctx->pc = 0x1ba7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 808), GPR_U32(ctx, 0));
label_1ba7e0:
    // 0x1ba7e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ba7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ba7e4:
    // 0x1ba7e4: 0xae4202d8  sw          $v0, 0x2D8($s2)
    ctx->pc = 0x1ba7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 728), GPR_U32(ctx, 2));
label_1ba7e8:
    // 0x1ba7e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba7e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba7ec:
    // 0x1ba7ec: 0xc0c493d  jal         func_3124F4
label_1ba7f0:
    if (ctx->pc == 0x1BA7F0u) {
        ctx->pc = 0x1BA7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA7ECu;
        // 0x1ba7f0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA7F4u;
        goto label_1ba7f4;
    }
    ctx->pc = 0x1BA7ECu;
    SET_GPR_U32(ctx, 31, 0x1BA7F4u);
    ctx->pc = 0x1BA7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA7ECu;
    // 0x1ba7f0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BA7ECu, 0x1BA7F4u)) {
        return;
    }
    ctx->pc = 0x1BA7F4u;
label_1ba7f4:
    // 0x1ba7f4: 0x8e46028c  lw          $a2, 0x28C($s2)
    ctx->pc = 0x1ba7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 652)));
label_1ba7f8:
    // 0x1ba7f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ba7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ba7fc:
    // 0x1ba7fc: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1ba7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1ba800:
    // 0x1ba800: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x1ba800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_1ba804:
    // 0x1ba804: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x1ba804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_1ba808:
    // 0x1ba808: 0x60f809  jalr        $v1
label_1ba80c:
    if (ctx->pc == 0x1BA80Cu) {
        ctx->pc = 0x1BA80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA808u;
        // 0x1ba80c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA810u;
        goto label_1ba810;
    }
    ctx->pc = 0x1BA808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BA810u);
        ctx->pc = 0x1BA80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA808u;
        // 0x1ba80c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA808u, 0x1BA810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BA810u;
label_1ba810:
    // 0x1ba810: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1ba810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ba814:
    // 0x1ba814: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ba814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ba818:
    // 0x1ba818: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ba818u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ba81c:
    // 0x1ba81c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1ba81cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ba820:
    // 0x1ba820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba824:
    // 0x1ba824: 0x3e00008  jr          $ra
label_1ba828:
    if (ctx->pc == 0x1BA828u) {
        ctx->pc = 0x1BA828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA824u;
        // 0x1ba828: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA82Cu;
        goto label_1ba82c;
    }
    ctx->pc = 0x1BA824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA824u;
        // 0x1ba828: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA82Cu;
label_1ba82c:
    // 0x1ba82c: 0x0  nop
    ctx->pc = 0x1ba82cu;
    // NOP
    ctx->pc = 0x1ba830u;
}
