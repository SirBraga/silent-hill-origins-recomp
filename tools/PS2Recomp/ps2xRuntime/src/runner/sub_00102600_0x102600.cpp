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

// Function: sub_00102600
// Address: 0x102600 - 0x102890
void sub_00102600_0x102600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102600_0x102600");
#endif

    switch (ctx->pc) {
        case 0x102600u: goto label_102600;
        case 0x102604u: goto label_102604;
        case 0x102608u: goto label_102608;
        case 0x10260cu: goto label_10260c;
        case 0x102610u: goto label_102610;
        case 0x102614u: goto label_102614;
        case 0x102618u: goto label_102618;
        case 0x10261cu: goto label_10261c;
        case 0x102620u: goto label_102620;
        case 0x102624u: goto label_102624;
        case 0x102628u: goto label_102628;
        case 0x10262cu: goto label_10262c;
        case 0x102630u: goto label_102630;
        case 0x102634u: goto label_102634;
        case 0x102638u: goto label_102638;
        case 0x10263cu: goto label_10263c;
        case 0x102640u: goto label_102640;
        case 0x102644u: goto label_102644;
        case 0x102648u: goto label_102648;
        case 0x10264cu: goto label_10264c;
        case 0x102650u: goto label_102650;
        case 0x102654u: goto label_102654;
        case 0x102658u: goto label_102658;
        case 0x10265cu: goto label_10265c;
        case 0x102660u: goto label_102660;
        case 0x102664u: goto label_102664;
        case 0x102668u: goto label_102668;
        case 0x10266cu: goto label_10266c;
        case 0x102670u: goto label_102670;
        case 0x102674u: goto label_102674;
        case 0x102678u: goto label_102678;
        case 0x10267cu: goto label_10267c;
        case 0x102680u: goto label_102680;
        case 0x102684u: goto label_102684;
        case 0x102688u: goto label_102688;
        case 0x10268cu: goto label_10268c;
        case 0x102690u: goto label_102690;
        case 0x102694u: goto label_102694;
        case 0x102698u: goto label_102698;
        case 0x10269cu: goto label_10269c;
        case 0x1026a0u: goto label_1026a0;
        case 0x1026a4u: goto label_1026a4;
        case 0x1026a8u: goto label_1026a8;
        case 0x1026acu: goto label_1026ac;
        case 0x1026b0u: goto label_1026b0;
        case 0x1026b4u: goto label_1026b4;
        case 0x1026b8u: goto label_1026b8;
        case 0x1026bcu: goto label_1026bc;
        case 0x1026c0u: goto label_1026c0;
        case 0x1026c4u: goto label_1026c4;
        case 0x1026c8u: goto label_1026c8;
        case 0x1026ccu: goto label_1026cc;
        case 0x1026d0u: goto label_1026d0;
        case 0x1026d4u: goto label_1026d4;
        case 0x1026d8u: goto label_1026d8;
        case 0x1026dcu: goto label_1026dc;
        case 0x1026e0u: goto label_1026e0;
        case 0x1026e4u: goto label_1026e4;
        case 0x1026e8u: goto label_1026e8;
        case 0x1026ecu: goto label_1026ec;
        case 0x1026f0u: goto label_1026f0;
        case 0x1026f4u: goto label_1026f4;
        case 0x1026f8u: goto label_1026f8;
        case 0x1026fcu: goto label_1026fc;
        case 0x102700u: goto label_102700;
        case 0x102704u: goto label_102704;
        case 0x102708u: goto label_102708;
        case 0x10270cu: goto label_10270c;
        case 0x102710u: goto label_102710;
        case 0x102714u: goto label_102714;
        case 0x102718u: goto label_102718;
        case 0x10271cu: goto label_10271c;
        case 0x102720u: goto label_102720;
        case 0x102724u: goto label_102724;
        case 0x102728u: goto label_102728;
        case 0x10272cu: goto label_10272c;
        case 0x102730u: goto label_102730;
        case 0x102734u: goto label_102734;
        case 0x102738u: goto label_102738;
        case 0x10273cu: goto label_10273c;
        case 0x102740u: goto label_102740;
        case 0x102744u: goto label_102744;
        case 0x102748u: goto label_102748;
        case 0x10274cu: goto label_10274c;
        case 0x102750u: goto label_102750;
        case 0x102754u: goto label_102754;
        case 0x102758u: goto label_102758;
        case 0x10275cu: goto label_10275c;
        case 0x102760u: goto label_102760;
        case 0x102764u: goto label_102764;
        case 0x102768u: goto label_102768;
        case 0x10276cu: goto label_10276c;
        case 0x102770u: goto label_102770;
        case 0x102774u: goto label_102774;
        case 0x102778u: goto label_102778;
        case 0x10277cu: goto label_10277c;
        case 0x102780u: goto label_102780;
        case 0x102784u: goto label_102784;
        case 0x102788u: goto label_102788;
        case 0x10278cu: goto label_10278c;
        case 0x102790u: goto label_102790;
        case 0x102794u: goto label_102794;
        case 0x102798u: goto label_102798;
        case 0x10279cu: goto label_10279c;
        case 0x1027a0u: goto label_1027a0;
        case 0x1027a4u: goto label_1027a4;
        case 0x1027a8u: goto label_1027a8;
        case 0x1027acu: goto label_1027ac;
        case 0x1027b0u: goto label_1027b0;
        case 0x1027b4u: goto label_1027b4;
        case 0x1027b8u: goto label_1027b8;
        case 0x1027bcu: goto label_1027bc;
        case 0x1027c0u: goto label_1027c0;
        case 0x1027c4u: goto label_1027c4;
        case 0x1027c8u: goto label_1027c8;
        case 0x1027ccu: goto label_1027cc;
        case 0x1027d0u: goto label_1027d0;
        case 0x1027d4u: goto label_1027d4;
        case 0x1027d8u: goto label_1027d8;
        case 0x1027dcu: goto label_1027dc;
        case 0x1027e0u: goto label_1027e0;
        case 0x1027e4u: goto label_1027e4;
        case 0x1027e8u: goto label_1027e8;
        case 0x1027ecu: goto label_1027ec;
        case 0x1027f0u: goto label_1027f0;
        case 0x1027f4u: goto label_1027f4;
        case 0x1027f8u: goto label_1027f8;
        case 0x1027fcu: goto label_1027fc;
        case 0x102800u: goto label_102800;
        case 0x102804u: goto label_102804;
        case 0x102808u: goto label_102808;
        case 0x10280cu: goto label_10280c;
        case 0x102810u: goto label_102810;
        case 0x102814u: goto label_102814;
        case 0x102818u: goto label_102818;
        case 0x10281cu: goto label_10281c;
        case 0x102820u: goto label_102820;
        case 0x102824u: goto label_102824;
        case 0x102828u: goto label_102828;
        case 0x10282cu: goto label_10282c;
        case 0x102830u: goto label_102830;
        case 0x102834u: goto label_102834;
        case 0x102838u: goto label_102838;
        case 0x10283cu: goto label_10283c;
        case 0x102840u: goto label_102840;
        case 0x102844u: goto label_102844;
        case 0x102848u: goto label_102848;
        case 0x10284cu: goto label_10284c;
        case 0x102850u: goto label_102850;
        case 0x102854u: goto label_102854;
        case 0x102858u: goto label_102858;
        case 0x10285cu: goto label_10285c;
        case 0x102860u: goto label_102860;
        case 0x102864u: goto label_102864;
        case 0x102868u: goto label_102868;
        case 0x10286cu: goto label_10286c;
        case 0x102870u: goto label_102870;
        case 0x102874u: goto label_102874;
        case 0x102878u: goto label_102878;
        case 0x10287cu: goto label_10287c;
        case 0x102880u: goto label_102880;
        case 0x102884u: goto label_102884;
        case 0x102888u: goto label_102888;
        case 0x10288cu: goto label_10288c;
        default: break;
    }

    ctx->pc = 0x102600u;

label_102600:
    // 0x102600: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x102600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_102604:
    // 0x102604: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x102604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_102608:
    // 0x102608: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x102608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_10260c:
    // 0x10260c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x10260cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_102610:
    // 0x102610: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x102610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_102614:
    // 0x102614: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x102614u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_102618:
    // 0x102618: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x102618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_10261c:
    // 0x10261c: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x10261cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_102620:
    // 0x102620: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x102620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_102624:
    // 0x102624: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x102624u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102628:
    // 0x102628: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x102628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_10262c:
    // 0x10262c: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x10262cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_102630:
    // 0x102630: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x102630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_102634:
    // 0x102634: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x102634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_102638:
    // 0x102638: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x102638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_10263c:
    // 0x10263c: 0xc0c49b7  jal         func_3126DC
label_102640:
    if (ctx->pc == 0x102640u) {
        ctx->pc = 0x102640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10263Cu;
        // 0x102640: 0x8e840664  lw          $a0, 0x664($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102644u;
        goto label_102644;
    }
    ctx->pc = 0x10263Cu;
    SET_GPR_U32(ctx, 31, 0x102644u);
    ctx->pc = 0x102640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10263Cu;
    // 0x102640: 0x8e840664  lw          $a0, 0x664($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3126DCu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3126DCu, 0x10263Cu, 0x102644u)) {
        return;
    }
    ctx->pc = 0x102644u;
label_102644:
    // 0x102644: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x102644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_102648:
    // 0x102648: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_10264c:
    if (ctx->pc == 0x10264Cu) {
        ctx->pc = 0x102650u;
        goto label_102650;
    }
    ctx->pc = 0x102648u;
    {
        const bool branch_taken_0x102648 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x102648) {
            ctx->pc = 0x102664u;
            goto label_102664;
        }
    }
    ctx->pc = 0x102650u;
label_102650:
    // 0x102650: 0x8e820664  lw          $v0, 0x664($s4)
    ctx->pc = 0x102650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
label_102654:
    // 0x102654: 0x10000006  b           . + 4 + (0x6 << 2)
label_102658:
    if (ctx->pc == 0x102658u) {
        ctx->pc = 0x102658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102654u;
        // 0x102658: 0xc2b023  subu        $s6, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10265Cu;
        goto label_10265c;
    }
    ctx->pc = 0x102654u;
    {
        const bool branch_taken_0x102654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102654u;
        // 0x102658: 0xc2b023  subu        $s6, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102654) {
            ctx->pc = 0x102670u;
            goto label_102670;
        }
    }
    ctx->pc = 0x10265Cu;
label_10265c:
    // 0x10265c: 0x10000021  b           . + 4 + (0x21 << 2)
label_102660:
    if (ctx->pc == 0x102660u) {
        ctx->pc = 0x102660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10265Cu;
        // 0x102660: 0x8e830660  lw          $v1, 0x660($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1632)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102664u;
        goto label_102664;
    }
    ctx->pc = 0x10265Cu;
    {
        const bool branch_taken_0x10265c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10265Cu;
        // 0x102660: 0x8e830660  lw          $v1, 0x660($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1632)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10265c) {
            ctx->pc = 0x1026E4u;
            goto label_1026e4;
        }
    }
    ctx->pc = 0x102664u;
label_102664:
    // 0x102664: 0xc0c4ab8  jal         func_312AE0
label_102668:
    if (ctx->pc == 0x102668u) {
        ctx->pc = 0x102668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102664u;
        // 0x102668: 0x8e840664  lw          $a0, 0x664($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10266Cu;
        goto label_10266c;
    }
    ctx->pc = 0x102664u;
    SET_GPR_U32(ctx, 31, 0x10266Cu);
    ctx->pc = 0x102668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102664u;
    // 0x102668: 0x8e840664  lw          $a0, 0x664($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x102664u, 0x10266Cu)) {
        return;
    }
    ctx->pc = 0x10266Cu;
label_10266c:
    // 0x10266c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x10266cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_102670:
    // 0x102670: 0x8e820660  lw          $v0, 0x660($s4)
    ctx->pc = 0x102670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1632)));
label_102674:
    // 0x102674: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x102674u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102678:
    // 0x102678: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_10267c:
    if (ctx->pc == 0x10267Cu) {
        ctx->pc = 0x10267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102678u;
        // 0x10267c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102680u;
        goto label_102680;
    }
    ctx->pc = 0x102678u;
    {
        const bool branch_taken_0x102678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102678u;
        // 0x10267c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102678) {
            ctx->pc = 0x1026E4u;
            goto label_1026e4;
        }
    }
    ctx->pc = 0x102680u;
label_102680:
    // 0x102680: 0x26920040  addiu       $s2, $s4, 0x40
    ctx->pc = 0x102680u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
label_102684:
    // 0x102684: 0x3c170034  lui         $s7, 0x34
    ctx->pc = 0x102684u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)52 << 16));
label_102688:
    // 0x102688: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x102688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10268c:
    // 0x10268c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x10268cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_102690:
    // 0x102690: 0x8ee48668  lw          $a0, -0x7998($s7)
    ctx->pc = 0x102690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294936168)));
label_102694:
    // 0x102694: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x102694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102698:
    // 0x102698: 0xc0595d2  jal         func_165748
label_10269c:
    if (ctx->pc == 0x10269Cu) {
        ctx->pc = 0x10269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102698u;
        // 0x10269c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1026A0u;
        goto label_1026a0;
    }
    ctx->pc = 0x102698u;
    SET_GPR_U32(ctx, 31, 0x1026A0u);
    ctx->pc = 0x10269Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102698u;
    // 0x10269c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165748u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165748u, 0x102698u, 0x1026A0u)) {
        return;
    }
    ctx->pc = 0x1026A0u;
label_1026a0:
    // 0x1026a0: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x1026a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_1026a4:
    // 0x1026a4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_1026a8:
    if (ctx->pc == 0x1026A8u) {
        ctx->pc = 0x1026A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026A4u;
        // 0x1026a8: 0x8e820660  lw          $v0, 0x660($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1632)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1026ACu;
        goto label_1026ac;
    }
    ctx->pc = 0x1026A4u;
    {
        const bool branch_taken_0x1026a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1026a4) {
            ctx->pc = 0x1026A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1026A4u;
            // 0x1026a8: 0x8e820660  lw          $v0, 0x660($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1632)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1026C8u;
            goto label_1026c8;
        }
    }
    ctx->pc = 0x1026ACu;
label_1026ac:
    // 0x1026ac: 0x8e840664  lw          $a0, 0x664($s4)
    ctx->pc = 0x1026acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
label_1026b0:
    // 0x1026b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1026b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1026b4:
    // 0x1026b4: 0xc0c4b78  jal         func_312DE0
label_1026b8:
    if (ctx->pc == 0x1026B8u) {
        ctx->pc = 0x1026B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026B4u;
        // 0x1026b8: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1026BCu;
        goto label_1026bc;
    }
    ctx->pc = 0x1026B4u;
    SET_GPR_U32(ctx, 31, 0x1026BCu);
    ctx->pc = 0x1026B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1026B4u;
    // 0x1026b8: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312DE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312DE0u, 0x1026B4u, 0x1026BCu)) {
        return;
    }
    ctx->pc = 0x1026BCu;
label_1026bc:
    // 0x1026bc: 0x5040ffe7  beql        $v0, $zero, . + 4 + (-0x19 << 2)
label_1026c0:
    if (ctx->pc == 0x1026C0u) {
        ctx->pc = 0x1026C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026BCu;
        // 0x1026c0: 0x8e5e0000  lw          $fp, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1026C4u;
        goto label_1026c4;
    }
    ctx->pc = 0x1026BCu;
    {
        const bool branch_taken_0x1026bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1026bc) {
            ctx->pc = 0x1026C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1026BCu;
            // 0x1026c0: 0x8e5e0000  lw          $fp, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10265Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10265c;
        }
    }
    ctx->pc = 0x1026C4u;
label_1026c4:
    // 0x1026c4: 0x8e820660  lw          $v0, 0x660($s4)
    ctx->pc = 0x1026c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1632)));
label_1026c8:
    // 0x1026c8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1026c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1026cc:
    // 0x1026cc: 0x26310044  addiu       $s1, $s1, 0x44
    ctx->pc = 0x1026ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
label_1026d0:
    // 0x1026d0: 0x26100044  addiu       $s0, $s0, 0x44
    ctx->pc = 0x1026d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
label_1026d4:
    // 0x1026d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1026d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1026d8:
    // 0x1026d8: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x1026d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1026dc:
    // 0x1026dc: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_1026e0:
    if (ctx->pc == 0x1026E0u) {
        ctx->pc = 0x1026E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026DCu;
        // 0x1026e0: 0x26520044  addiu       $s2, $s2, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1026E4u;
        goto label_1026e4;
    }
    ctx->pc = 0x1026DCu;
    {
        const bool branch_taken_0x1026dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1026E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026DCu;
        // 0x1026e0: 0x26520044  addiu       $s2, $s2, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1026dc) {
            ctx->pc = 0x102690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102690;
        }
    }
    ctx->pc = 0x1026E4u;
label_1026e4:
    // 0x1026e4: 0x1060005d  beqz        $v1, . + 4 + (0x5D << 2)
label_1026e8:
    if (ctx->pc == 0x1026E8u) {
        ctx->pc = 0x1026E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026E4u;
        // 0x1026e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1026ECu;
        goto label_1026ec;
    }
    ctx->pc = 0x1026E4u;
    {
        const bool branch_taken_0x1026e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1026E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026E4u;
        // 0x1026e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1026e4) {
            ctx->pc = 0x10285Cu;
            goto label_10285c;
        }
    }
    ctx->pc = 0x1026ECu;
label_1026ec:
    // 0x1026ec: 0x26620004  addiu       $v0, $s3, 0x4
    ctx->pc = 0x1026ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1026f0:
    // 0x1026f0: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x1026f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1026f4:
    // 0x1026f4: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x1026f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_1026f8:
    // 0x1026f8: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x1026f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_1026fc:
    // 0x1026fc: 0x0  nop
    ctx->pc = 0x1026fcu;
    // NOP
label_102700:
    // 0x102700: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x102700u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_102704:
    // 0x102704: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x102704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_102708:
    // 0x102708: 0x8c510040  lw          $s1, 0x40($v0)
    ctx->pc = 0x102708u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_10270c:
    // 0x10270c: 0x123e004e  beq         $s1, $fp, . + 4 + (0x4E << 2)
label_102710:
    if (ctx->pc == 0x102710u) {
        ctx->pc = 0x102710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10270Cu;
        // 0x102710: 0x26570001  addiu       $s7, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102714u;
        goto label_102714;
    }
    ctx->pc = 0x10270Cu;
    {
        const bool branch_taken_0x10270c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 30));
        ctx->pc = 0x102710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10270Cu;
        // 0x102710: 0x26570001  addiu       $s7, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10270c) {
            ctx->pc = 0x102848u;
            goto label_102848;
        }
    }
    ctx->pc = 0x102714u;
label_102714:
    // 0x102714: 0x5220004d  beql        $s1, $zero, . + 4 + (0x4D << 2)
label_102718:
    if (ctx->pc == 0x102718u) {
        ctx->pc = 0x102718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102714u;
        // 0x102718: 0x8e820660  lw          $v0, 0x660($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1632)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10271Cu;
        goto label_10271c;
    }
    ctx->pc = 0x102714u;
    {
        const bool branch_taken_0x102714 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x102714) {
            ctx->pc = 0x102718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102714u;
            // 0x102718: 0x8e820660  lw          $v0, 0x660($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1632)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10284Cu;
            goto label_10284c;
        }
    }
    ctx->pc = 0x10271Cu;
label_10271c:
    // 0x10271c: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
label_102720:
    if (ctx->pc == 0x102720u) {
        ctx->pc = 0x102720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10271Cu;
        // 0x102720: 0x3c150034  lui         $s5, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102724u;
        goto label_102724;
    }
    ctx->pc = 0x10271Cu;
    {
        const bool branch_taken_0x10271c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x102720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10271Cu;
        // 0x102720: 0x3c150034  lui         $s5, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10271c) {
            ctx->pc = 0x102734u;
            goto label_102734;
        }
    }
    ctx->pc = 0x102724u;
label_102724:
    // 0x102724: 0x8ea48668  lw          $a0, -0x7998($s5)
    ctx->pc = 0x102724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936168)));
label_102728:
    // 0x102728: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x102728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10272c:
    // 0x10272c: 0xc0595f8  jal         func_1657E0
label_102730:
    if (ctx->pc == 0x102730u) {
        ctx->pc = 0x102730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10272Cu;
        // 0x102730: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102734u;
        goto label_102734;
    }
    ctx->pc = 0x10272Cu;
    SET_GPR_U32(ctx, 31, 0x102734u);
    ctx->pc = 0x102730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10272Cu;
    // 0x102730: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1657E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1657E0u, 0x10272Cu, 0x102734u)) {
        return;
    }
    ctx->pc = 0x102734u;
label_102734:
    // 0x102734: 0x8ea48668  lw          $a0, -0x7998($s5)
    ctx->pc = 0x102734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936168)));
label_102738:
    // 0x102738: 0xc0595d8  jal         func_165760
label_10273c:
    if (ctx->pc == 0x10273Cu) {
        ctx->pc = 0x10273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102738u;
        // 0x10273c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102740u;
        goto label_102740;
    }
    ctx->pc = 0x102738u;
    SET_GPR_U32(ctx, 31, 0x102740u);
    ctx->pc = 0x10273Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102738u;
    // 0x10273c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165760u, 0x102738u, 0x102740u)) {
        return;
    }
    ctx->pc = 0x102740u;
label_102740:
    // 0x102740: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_102744:
    if (ctx->pc == 0x102744u) {
        ctx->pc = 0x102744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102740u;
        // 0x102744: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102748u;
        goto label_102748;
    }
    ctx->pc = 0x102740u;
    {
        const bool branch_taken_0x102740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102740u;
        // 0x102744: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102740) {
            ctx->pc = 0x1027E8u;
            goto label_1027e8;
        }
    }
    ctx->pc = 0x102748u;
label_102748:
    // 0x102748: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x102748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_10274c:
    // 0x10274c: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x10274cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_102750:
    // 0x102750: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x102750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_102754:
    // 0x102754: 0x60f809  jalr        $v1
label_102758:
    if (ctx->pc == 0x102758u) {
        ctx->pc = 0x102758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102754u;
        // 0x102758: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10275Cu;
        goto label_10275c;
    }
    ctx->pc = 0x102754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10275Cu);
        ctx->pc = 0x102758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102754u;
        // 0x102758: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102754u, 0x10275Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10275Cu;
label_10275c:
    // 0x10275c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x10275cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_102760:
    // 0x102760: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x102760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_102764:
    // 0x102764: 0x24423150  addiu       $v0, $v0, 0x3150
    ctx->pc = 0x102764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12624));
label_102768:
    // 0x102768: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x102768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10276c:
    // 0x10276c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x10276cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_102770:
    // 0x102770: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x102770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_102774:
    // 0x102774: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x102774u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_102778:
    // 0x102778: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x102778u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10277c:
    // 0x10277c: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x10277cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_102780:
    // 0x102780: 0xc0596ae  jal         func_165AB8
label_102784:
    if (ctx->pc == 0x102784u) {
        ctx->pc = 0x102784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102780u;
        // 0x102784: 0x8ea48668  lw          $a0, -0x7998($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102788u;
        goto label_102788;
    }
    ctx->pc = 0x102780u;
    SET_GPR_U32(ctx, 31, 0x102788u);
    ctx->pc = 0x102784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102780u;
    // 0x102784: 0x8ea48668  lw          $a0, -0x7998($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165AB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165AB8u, 0x102780u, 0x102788u)) {
        return;
    }
    ctx->pc = 0x102788u;
label_102788:
    // 0x102788: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x102788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10278c:
    // 0x10278c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x10278cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_102790:
    // 0x102790: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_102794:
    if (ctx->pc == 0x102794u) {
        ctx->pc = 0x102794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102790u;
        // 0x102794: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102798u;
        goto label_102798;
    }
    ctx->pc = 0x102790u;
    {
        const bool branch_taken_0x102790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102790u;
        // 0x102794: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102790) {
            ctx->pc = 0x1027D0u;
            goto label_1027d0;
        }
    }
    ctx->pc = 0x102798u;
label_102798:
    // 0x102798: 0x26670274  addiu       $a3, $s3, 0x274
    ctx->pc = 0x102798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 628));
label_10279c:
    // 0x10279c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10279cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1027a0:
    // 0x1027a0: 0x8e63028c  lw          $v1, 0x28C($s3)
    ctx->pc = 0x1027a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 652)));
label_1027a4:
    // 0x1027a4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1027a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1027a8:
    // 0x1027a8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1027a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1027ac:
    // 0x1027ac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1027acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1027b0:
    // 0x1027b0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1027b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_1027b4:
    // 0x1027b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1027b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1027b8:
    // 0x1027b8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1027b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1027bc:
    // 0x1027bc: 0xae63028c  sw          $v1, 0x28C($s3)
    ctx->pc = 0x1027bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 652), GPR_U32(ctx, 3));
label_1027c0:
    // 0x1027c0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1027c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1027c4:
    // 0x1027c4: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1027c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1027c8:
    // 0x1027c8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1027cc:
    if (ctx->pc == 0x1027CCu) {
        ctx->pc = 0x1027CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027C8u;
        // 0x1027cc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1027D0u;
        goto label_1027d0;
    }
    ctx->pc = 0x1027C8u;
    {
        const bool branch_taken_0x1027c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1027CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027C8u;
        // 0x1027cc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1027c8) {
            ctx->pc = 0x1027A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1027a0;
        }
    }
    ctx->pc = 0x1027D0u;
label_1027d0:
    // 0x1027d0: 0x8ea48668  lw          $a0, -0x7998($s5)
    ctx->pc = 0x1027d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936168)));
label_1027d4:
    // 0x1027d4: 0xc0595ea  jal         func_1657A8
label_1027d8:
    if (ctx->pc == 0x1027D8u) {
        ctx->pc = 0x1027D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027D4u;
        // 0x1027d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1027DCu;
        goto label_1027dc;
    }
    ctx->pc = 0x1027D4u;
    SET_GPR_U32(ctx, 31, 0x1027DCu);
    ctx->pc = 0x1027D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1027D4u;
    // 0x1027d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1657A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1657A8u, 0x1027D4u, 0x1027DCu)) {
        return;
    }
    ctx->pc = 0x1027DCu;
label_1027dc:
    // 0x1027dc: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1027dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1027e0:
    // 0x1027e0: 0x5062001a  beql        $v1, $v0, . + 4 + (0x1A << 2)
label_1027e4:
    if (ctx->pc == 0x1027E4u) {
        ctx->pc = 0x1027E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027E0u;
        // 0x1027e4: 0x8e820660  lw          $v0, 0x660($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1632)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1027E8u;
        goto label_1027e8;
    }
    ctx->pc = 0x1027E0u;
    {
        const bool branch_taken_0x1027e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1027e0) {
            ctx->pc = 0x1027E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1027E0u;
            // 0x1027e4: 0x8e820660  lw          $v0, 0x660($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1632)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10284Cu;
            goto label_10284c;
        }
    }
    ctx->pc = 0x1027E8u;
label_1027e8:
    // 0x1027e8: 0x8ea48668  lw          $a0, -0x7998($s5)
    ctx->pc = 0x1027e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936168)));
label_1027ec:
    // 0x1027ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1027ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1027f0:
    // 0x1027f0: 0xc0595d2  jal         func_165748
label_1027f4:
    if (ctx->pc == 0x1027F4u) {
        ctx->pc = 0x1027F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027F0u;
        // 0x1027f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1027F8u;
        goto label_1027f8;
    }
    ctx->pc = 0x1027F0u;
    SET_GPR_U32(ctx, 31, 0x1027F8u);
    ctx->pc = 0x1027F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1027F0u;
    // 0x1027f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165748u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165748u, 0x1027F0u, 0x1027F8u)) {
        return;
    }
    ctx->pc = 0x1027F8u;
label_1027f8:
    // 0x1027f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1027f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1027fc:
    // 0x1027fc: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
label_102800:
    if (ctx->pc == 0x102800u) {
        ctx->pc = 0x102800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027FCu;
        // 0x102800: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102804u;
        goto label_102804;
    }
    ctx->pc = 0x1027FCu;
    {
        const bool branch_taken_0x1027fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x102800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027FCu;
        // 0x102800: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1027fc) {
            ctx->pc = 0x102848u;
            goto label_102848;
        }
    }
    ctx->pc = 0x102804u;
label_102804:
    // 0x102804: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x102804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
label_102808:
    // 0x102808: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x102808u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_10280c:
    // 0x10280c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10280cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_102810:
    // 0x102810: 0x24659590  addiu       $a1, $v1, -0x6A70
    ctx->pc = 0x102810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940048));
label_102814:
    // 0x102814: 0xc0c4fc4  jal         func_313F10
label_102818:
    if (ctx->pc == 0x102818u) {
        ctx->pc = 0x102818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102814u;
        // 0x102818: 0x543021  addu        $a2, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10281Cu;
        goto label_10281c;
    }
    ctx->pc = 0x102814u;
    SET_GPR_U32(ctx, 31, 0x10281Cu);
    ctx->pc = 0x102818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102814u;
    // 0x102818: 0x543021  addu        $a2, $v0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x102814u, 0x10281Cu)) {
        return;
    }
    ctx->pc = 0x10281Cu;
label_10281c:
    // 0x10281c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10281cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_102820:
    // 0x102820: 0xc0406e8  jal         func_101BA0
label_102824:
    if (ctx->pc == 0x102824u) {
        ctx->pc = 0x102824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102820u;
        // 0x102824: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102828u;
        goto label_102828;
    }
    ctx->pc = 0x102820u;
    SET_GPR_U32(ctx, 31, 0x102828u);
    ctx->pc = 0x102824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102820u;
    // 0x102824: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101BA0u, 0x102820u, 0x102828u)) {
        return;
    }
    ctx->pc = 0x102828u;
label_102828:
    // 0x102828: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x102828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10282c:
    // 0x10282c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x10282cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_102830:
    // 0x102830: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x102830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_102834:
    // 0x102834: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
label_102838:
    if (ctx->pc == 0x102838u) {
        ctx->pc = 0x102838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102834u;
        // 0x102838: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10283Cu;
        goto label_10283c;
    }
    ctx->pc = 0x102834u;
    {
        const bool branch_taken_0x102834 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x102838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102834u;
        // 0x102838: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102834) {
            ctx->pc = 0x102848u;
            goto label_102848;
        }
    }
    ctx->pc = 0x10283Cu;
label_10283c:
    // 0x10283c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10283cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_102840:
    // 0x102840: 0xc040ce0  jal         func_103380
label_102844:
    if (ctx->pc == 0x102844u) {
        ctx->pc = 0x102844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102840u;
        // 0x102844: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102848u;
        goto label_102848;
    }
    ctx->pc = 0x102840u;
    SET_GPR_U32(ctx, 31, 0x102848u);
    ctx->pc = 0x102844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102840u;
    // 0x102844: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x103380u, 0x102840u, 0x102848u)) {
        return;
    }
    ctx->pc = 0x102848u;
label_102848:
    // 0x102848: 0x8e820660  lw          $v0, 0x660($s4)
    ctx->pc = 0x102848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1632)));
label_10284c:
    // 0x10284c: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x10284cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_102850:
    // 0x102850: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x102850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_102854:
    // 0x102854: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
label_102858:
    if (ctx->pc == 0x102858u) {
        ctx->pc = 0x102858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102854u;
        // 0x102858: 0x24030044  addiu       $v1, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10285Cu;
        goto label_10285c;
    }
    ctx->pc = 0x102854u;
    {
        const bool branch_taken_0x102854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102854u;
        // 0x102858: 0x24030044  addiu       $v1, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102854) {
            ctx->pc = 0x102700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102700;
        }
    }
    ctx->pc = 0x10285Cu;
label_10285c:
    // 0x10285c: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x10285cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_102860:
    // 0x102860: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x102860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_102864:
    // 0x102864: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x102864u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_102868:
    // 0x102868: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x102868u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_10286c:
    // 0x10286c: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x10286cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_102870:
    // 0x102870: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x102870u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_102874:
    // 0x102874: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x102874u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_102878:
    // 0x102878: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x102878u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_10287c:
    // 0x10287c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x10287cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_102880:
    // 0x102880: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x102880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_102884:
    // 0x102884: 0x3e00008  jr          $ra
label_102888:
    if (ctx->pc == 0x102888u) {
        ctx->pc = 0x102888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102884u;
        // 0x102888: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10288Cu;
        goto label_10288c;
    }
    ctx->pc = 0x102884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102884u;
        // 0x102888: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10288Cu;
label_10288c:
    // 0x10288c: 0x0  nop
    ctx->pc = 0x10288cu;
    // NOP
    ctx->pc = 0x102890u;
}
