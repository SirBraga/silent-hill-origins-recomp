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

// Function: sub_00313628
// Address: 0x313628 - 0x313a38
void sub_00313628_0x313628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313628_0x313628");
#endif

    switch (ctx->pc) {
        case 0x313628u: goto label_313628;
        case 0x31362cu: goto label_31362c;
        case 0x313630u: goto label_313630;
        case 0x313634u: goto label_313634;
        case 0x313638u: goto label_313638;
        case 0x31363cu: goto label_31363c;
        case 0x313640u: goto label_313640;
        case 0x313644u: goto label_313644;
        case 0x313648u: goto label_313648;
        case 0x31364cu: goto label_31364c;
        case 0x313650u: goto label_313650;
        case 0x313654u: goto label_313654;
        case 0x313658u: goto label_313658;
        case 0x31365cu: goto label_31365c;
        case 0x313660u: goto label_313660;
        case 0x313664u: goto label_313664;
        case 0x313668u: goto label_313668;
        case 0x31366cu: goto label_31366c;
        case 0x313670u: goto label_313670;
        case 0x313674u: goto label_313674;
        case 0x313678u: goto label_313678;
        case 0x31367cu: goto label_31367c;
        case 0x313680u: goto label_313680;
        case 0x313684u: goto label_313684;
        case 0x313688u: goto label_313688;
        case 0x31368cu: goto label_31368c;
        case 0x313690u: goto label_313690;
        case 0x313694u: goto label_313694;
        case 0x313698u: goto label_313698;
        case 0x31369cu: goto label_31369c;
        case 0x3136a0u: goto label_3136a0;
        case 0x3136a4u: goto label_3136a4;
        case 0x3136a8u: goto label_3136a8;
        case 0x3136acu: goto label_3136ac;
        case 0x3136b0u: goto label_3136b0;
        case 0x3136b4u: goto label_3136b4;
        case 0x3136b8u: goto label_3136b8;
        case 0x3136bcu: goto label_3136bc;
        case 0x3136c0u: goto label_3136c0;
        case 0x3136c4u: goto label_3136c4;
        case 0x3136c8u: goto label_3136c8;
        case 0x3136ccu: goto label_3136cc;
        case 0x3136d0u: goto label_3136d0;
        case 0x3136d4u: goto label_3136d4;
        case 0x3136d8u: goto label_3136d8;
        case 0x3136dcu: goto label_3136dc;
        case 0x3136e0u: goto label_3136e0;
        case 0x3136e4u: goto label_3136e4;
        case 0x3136e8u: goto label_3136e8;
        case 0x3136ecu: goto label_3136ec;
        case 0x3136f0u: goto label_3136f0;
        case 0x3136f4u: goto label_3136f4;
        case 0x3136f8u: goto label_3136f8;
        case 0x3136fcu: goto label_3136fc;
        case 0x313700u: goto label_313700;
        case 0x313704u: goto label_313704;
        case 0x313708u: goto label_313708;
        case 0x31370cu: goto label_31370c;
        case 0x313710u: goto label_313710;
        case 0x313714u: goto label_313714;
        case 0x313718u: goto label_313718;
        case 0x31371cu: goto label_31371c;
        case 0x313720u: goto label_313720;
        case 0x313724u: goto label_313724;
        case 0x313728u: goto label_313728;
        case 0x31372cu: goto label_31372c;
        case 0x313730u: goto label_313730;
        case 0x313734u: goto label_313734;
        case 0x313738u: goto label_313738;
        case 0x31373cu: goto label_31373c;
        case 0x313740u: goto label_313740;
        case 0x313744u: goto label_313744;
        case 0x313748u: goto label_313748;
        case 0x31374cu: goto label_31374c;
        case 0x313750u: goto label_313750;
        case 0x313754u: goto label_313754;
        case 0x313758u: goto label_313758;
        case 0x31375cu: goto label_31375c;
        case 0x313760u: goto label_313760;
        case 0x313764u: goto label_313764;
        case 0x313768u: goto label_313768;
        case 0x31376cu: goto label_31376c;
        case 0x313770u: goto label_313770;
        case 0x313774u: goto label_313774;
        case 0x313778u: goto label_313778;
        case 0x31377cu: goto label_31377c;
        case 0x313780u: goto label_313780;
        case 0x313784u: goto label_313784;
        case 0x313788u: goto label_313788;
        case 0x31378cu: goto label_31378c;
        case 0x313790u: goto label_313790;
        case 0x313794u: goto label_313794;
        case 0x313798u: goto label_313798;
        case 0x31379cu: goto label_31379c;
        case 0x3137a0u: goto label_3137a0;
        case 0x3137a4u: goto label_3137a4;
        case 0x3137a8u: goto label_3137a8;
        case 0x3137acu: goto label_3137ac;
        case 0x3137b0u: goto label_3137b0;
        case 0x3137b4u: goto label_3137b4;
        case 0x3137b8u: goto label_3137b8;
        case 0x3137bcu: goto label_3137bc;
        case 0x3137c0u: goto label_3137c0;
        case 0x3137c4u: goto label_3137c4;
        case 0x3137c8u: goto label_3137c8;
        case 0x3137ccu: goto label_3137cc;
        case 0x3137d0u: goto label_3137d0;
        case 0x3137d4u: goto label_3137d4;
        case 0x3137d8u: goto label_3137d8;
        case 0x3137dcu: goto label_3137dc;
        case 0x3137e0u: goto label_3137e0;
        case 0x3137e4u: goto label_3137e4;
        case 0x3137e8u: goto label_3137e8;
        case 0x3137ecu: goto label_3137ec;
        case 0x3137f0u: goto label_3137f0;
        case 0x3137f4u: goto label_3137f4;
        case 0x3137f8u: goto label_3137f8;
        case 0x3137fcu: goto label_3137fc;
        case 0x313800u: goto label_313800;
        case 0x313804u: goto label_313804;
        case 0x313808u: goto label_313808;
        case 0x31380cu: goto label_31380c;
        case 0x313810u: goto label_313810;
        case 0x313814u: goto label_313814;
        case 0x313818u: goto label_313818;
        case 0x31381cu: goto label_31381c;
        case 0x313820u: goto label_313820;
        case 0x313824u: goto label_313824;
        case 0x313828u: goto label_313828;
        case 0x31382cu: goto label_31382c;
        case 0x313830u: goto label_313830;
        case 0x313834u: goto label_313834;
        case 0x313838u: goto label_313838;
        case 0x31383cu: goto label_31383c;
        case 0x313840u: goto label_313840;
        case 0x313844u: goto label_313844;
        case 0x313848u: goto label_313848;
        case 0x31384cu: goto label_31384c;
        case 0x313850u: goto label_313850;
        case 0x313854u: goto label_313854;
        case 0x313858u: goto label_313858;
        case 0x31385cu: goto label_31385c;
        case 0x313860u: goto label_313860;
        case 0x313864u: goto label_313864;
        case 0x313868u: goto label_313868;
        case 0x31386cu: goto label_31386c;
        case 0x313870u: goto label_313870;
        case 0x313874u: goto label_313874;
        case 0x313878u: goto label_313878;
        case 0x31387cu: goto label_31387c;
        case 0x313880u: goto label_313880;
        case 0x313884u: goto label_313884;
        case 0x313888u: goto label_313888;
        case 0x31388cu: goto label_31388c;
        case 0x313890u: goto label_313890;
        case 0x313894u: goto label_313894;
        case 0x313898u: goto label_313898;
        case 0x31389cu: goto label_31389c;
        case 0x3138a0u: goto label_3138a0;
        case 0x3138a4u: goto label_3138a4;
        case 0x3138a8u: goto label_3138a8;
        case 0x3138acu: goto label_3138ac;
        case 0x3138b0u: goto label_3138b0;
        case 0x3138b4u: goto label_3138b4;
        case 0x3138b8u: goto label_3138b8;
        case 0x3138bcu: goto label_3138bc;
        case 0x3138c0u: goto label_3138c0;
        case 0x3138c4u: goto label_3138c4;
        case 0x3138c8u: goto label_3138c8;
        case 0x3138ccu: goto label_3138cc;
        case 0x3138d0u: goto label_3138d0;
        case 0x3138d4u: goto label_3138d4;
        case 0x3138d8u: goto label_3138d8;
        case 0x3138dcu: goto label_3138dc;
        case 0x3138e0u: goto label_3138e0;
        case 0x3138e4u: goto label_3138e4;
        case 0x3138e8u: goto label_3138e8;
        case 0x3138ecu: goto label_3138ec;
        case 0x3138f0u: goto label_3138f0;
        case 0x3138f4u: goto label_3138f4;
        case 0x3138f8u: goto label_3138f8;
        case 0x3138fcu: goto label_3138fc;
        case 0x313900u: goto label_313900;
        case 0x313904u: goto label_313904;
        case 0x313908u: goto label_313908;
        case 0x31390cu: goto label_31390c;
        case 0x313910u: goto label_313910;
        case 0x313914u: goto label_313914;
        case 0x313918u: goto label_313918;
        case 0x31391cu: goto label_31391c;
        case 0x313920u: goto label_313920;
        case 0x313924u: goto label_313924;
        case 0x313928u: goto label_313928;
        case 0x31392cu: goto label_31392c;
        case 0x313930u: goto label_313930;
        case 0x313934u: goto label_313934;
        case 0x313938u: goto label_313938;
        case 0x31393cu: goto label_31393c;
        case 0x313940u: goto label_313940;
        case 0x313944u: goto label_313944;
        case 0x313948u: goto label_313948;
        case 0x31394cu: goto label_31394c;
        case 0x313950u: goto label_313950;
        case 0x313954u: goto label_313954;
        case 0x313958u: goto label_313958;
        case 0x31395cu: goto label_31395c;
        case 0x313960u: goto label_313960;
        case 0x313964u: goto label_313964;
        case 0x313968u: goto label_313968;
        case 0x31396cu: goto label_31396c;
        case 0x313970u: goto label_313970;
        case 0x313974u: goto label_313974;
        case 0x313978u: goto label_313978;
        case 0x31397cu: goto label_31397c;
        case 0x313980u: goto label_313980;
        case 0x313984u: goto label_313984;
        case 0x313988u: goto label_313988;
        case 0x31398cu: goto label_31398c;
        case 0x313990u: goto label_313990;
        case 0x313994u: goto label_313994;
        case 0x313998u: goto label_313998;
        case 0x31399cu: goto label_31399c;
        case 0x3139a0u: goto label_3139a0;
        case 0x3139a4u: goto label_3139a4;
        case 0x3139a8u: goto label_3139a8;
        case 0x3139acu: goto label_3139ac;
        case 0x3139b0u: goto label_3139b0;
        case 0x3139b4u: goto label_3139b4;
        case 0x3139b8u: goto label_3139b8;
        case 0x3139bcu: goto label_3139bc;
        case 0x3139c0u: goto label_3139c0;
        case 0x3139c4u: goto label_3139c4;
        case 0x3139c8u: goto label_3139c8;
        case 0x3139ccu: goto label_3139cc;
        case 0x3139d0u: goto label_3139d0;
        case 0x3139d4u: goto label_3139d4;
        case 0x3139d8u: goto label_3139d8;
        case 0x3139dcu: goto label_3139dc;
        case 0x3139e0u: goto label_3139e0;
        case 0x3139e4u: goto label_3139e4;
        case 0x3139e8u: goto label_3139e8;
        case 0x3139ecu: goto label_3139ec;
        case 0x3139f0u: goto label_3139f0;
        case 0x3139f4u: goto label_3139f4;
        case 0x3139f8u: goto label_3139f8;
        case 0x3139fcu: goto label_3139fc;
        case 0x313a00u: goto label_313a00;
        case 0x313a04u: goto label_313a04;
        case 0x313a08u: goto label_313a08;
        case 0x313a0cu: goto label_313a0c;
        case 0x313a10u: goto label_313a10;
        case 0x313a14u: goto label_313a14;
        case 0x313a18u: goto label_313a18;
        case 0x313a1cu: goto label_313a1c;
        case 0x313a20u: goto label_313a20;
        case 0x313a24u: goto label_313a24;
        case 0x313a28u: goto label_313a28;
        case 0x313a2cu: goto label_313a2c;
        case 0x313a30u: goto label_313a30;
        case 0x313a34u: goto label_313a34;
        default: break;
    }

    ctx->pc = 0x313628u;

label_313628:
    // 0x313628: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x313628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_31362c:
    // 0x31362c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x31362cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_313630:
    // 0x313630: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x313630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_313634:
    // 0x313634: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x313634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_313638:
    // 0x313638: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x313638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_31363c:
    // 0x31363c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x31363cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_313640:
    // 0x313640: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x313640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_313644:
    // 0x313644: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x313644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_313648:
    // 0x313648: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x313648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_31364c:
    // 0x31364c: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x31364cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_313650:
    // 0x313650: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x313650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_313654:
    // 0x313654: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x313654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_313658:
    // 0x313658: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x313658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_31365c:
    // 0x31365c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_313660:
    if (ctx->pc == 0x313660u) {
        ctx->pc = 0x313660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31365Cu;
        // 0x313660: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313664u;
        goto label_313664;
    }
    ctx->pc = 0x31365Cu;
    {
        const bool branch_taken_0x31365c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31365Cu;
        // 0x313660: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31365c) {
            ctx->pc = 0x313670u;
            goto label_313670;
        }
    }
    ctx->pc = 0x313664u;
label_313664:
    // 0x313664: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x313664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_313668:
    // 0x313668: 0x8c436ccc  lw          $v1, 0x6CCC($v0)
    ctx->pc = 0x313668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27852)));
label_31366c:
    // 0x31366c: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x31366cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_313670:
    // 0x313670: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x313670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_313674:
    // 0x313674: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x313674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_313678:
    // 0x313678: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_31367c:
    if (ctx->pc == 0x31367Cu) {
        ctx->pc = 0x31367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313678u;
        // 0x31367c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313680u;
        goto label_313680;
    }
    ctx->pc = 0x313678u;
    {
        const bool branch_taken_0x313678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313678) {
            ctx->pc = 0x31367Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313678u;
            // 0x31367c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31368Cu;
            goto label_31368c;
        }
    }
    ctx->pc = 0x313680u;
label_313680:
    // 0x313680: 0xc0c4cfe  jal         func_3133F8
label_313684:
    if (ctx->pc == 0x313684u) {
        ctx->pc = 0x313688u;
        goto label_313688;
    }
    ctx->pc = 0x313680u;
    SET_GPR_U32(ctx, 31, 0x313688u);
    ctx->pc = 0x3133F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3133F8u, 0x313680u, 0x313688u)) {
        return;
    }
    ctx->pc = 0x313688u;
label_313688:
    // 0x313688: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x313688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_31368c:
    // 0x31368c: 0x24030108  addiu       $v1, $zero, 0x108
    ctx->pc = 0x31368cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
label_313690:
    // 0x313690: 0x30420108  andi        $v0, $v0, 0x108
    ctx->pc = 0x313690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)264);
label_313694:
    // 0x313694: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_313698:
    if (ctx->pc == 0x313698u) {
        ctx->pc = 0x313698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313694u;
        // 0x313698: 0x8e110054  lw          $s1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31369Cu;
        goto label_31369c;
    }
    ctx->pc = 0x313694u;
    {
        const bool branch_taken_0x313694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x313698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313694u;
        // 0x313698: 0x8e110054  lw          $s1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313694) {
            ctx->pc = 0x3136A4u;
            goto label_3136a4;
        }
    }
    ctx->pc = 0x31369Cu;
label_31369c:
    // 0x31369c: 0xc0c4c8a  jal         func_313228
label_3136a0:
    if (ctx->pc == 0x3136A0u) {
        ctx->pc = 0x3136A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31369Cu;
        // 0x3136a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3136A4u;
        goto label_3136a4;
    }
    ctx->pc = 0x31369Cu;
    SET_GPR_U32(ctx, 31, 0x3136A4u);
    ctx->pc = 0x3136A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31369Cu;
    // 0x3136a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313228u, 0x31369Cu, 0x3136A4u)) {
        return;
    }
    ctx->pc = 0x3136A4u;
label_3136a4:
    // 0x3136a4: 0x8e150028  lw          $s5, 0x28($s0)
    ctx->pc = 0x3136a4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3136a8:
    // 0x3136a8: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
label_3136ac:
    if (ctx->pc == 0x3136ACu) {
        ctx->pc = 0x3136ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136A8u;
        // 0x3136ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3136B0u;
        goto label_3136b0;
    }
    ctx->pc = 0x3136A8u;
    {
        const bool branch_taken_0x3136a8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x3136ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136A8u;
        // 0x3136ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3136a8) {
            ctx->pc = 0x3136B8u;
            goto label_3136b8;
        }
    }
    ctx->pc = 0x3136B0u;
label_3136b0:
    // 0x3136b0: 0x10000036  b           . + 4 + (0x36 << 2)
label_3136b4:
    if (ctx->pc == 0x3136B4u) {
        ctx->pc = 0x3136B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136B0u;
        // 0x3136b4: 0x2403001d  addiu       $v1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3136B8u;
        goto label_3136b8;
    }
    ctx->pc = 0x3136B0u;
    {
        const bool branch_taken_0x3136b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3136B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136B0u;
        // 0x3136b4: 0x2403001d  addiu       $v1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3136b0) {
            ctx->pc = 0x31378Cu;
            goto label_31378c;
        }
    }
    ctx->pc = 0x3136B8u;
label_3136b8:
    // 0x3136b8: 0x1282000b  beq         $s4, $v0, . + 4 + (0xB << 2)
label_3136bc:
    if (ctx->pc == 0x3136BCu) {
        ctx->pc = 0x3136BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136B8u;
        // 0x3136bc: 0x2a820002  slti        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3136C0u;
        goto label_3136c0;
    }
    ctx->pc = 0x3136B8u;
    {
        const bool branch_taken_0x3136b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x3136BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136B8u;
        // 0x3136bc: 0x2a820002  slti        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3136b8) {
            ctx->pc = 0x3136E8u;
            goto label_3136e8;
        }
    }
    ctx->pc = 0x3136C0u;
label_3136c0:
    // 0x3136c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3136c4:
    if (ctx->pc == 0x3136C4u) {
        ctx->pc = 0x3136C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136C0u;
        // 0x3136c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3136C8u;
        goto label_3136c8;
    }
    ctx->pc = 0x3136C0u;
    {
        const bool branch_taken_0x3136c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3136C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136C0u;
        // 0x3136c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3136c0) {
            ctx->pc = 0x3136D8u;
            goto label_3136d8;
        }
    }
    ctx->pc = 0x3136C8u;
label_3136c8:
    // 0x3136c8: 0x1280002d  beqz        $s4, . + 4 + (0x2D << 2)
label_3136cc:
    if (ctx->pc == 0x3136CCu) {
        ctx->pc = 0x3136CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136C8u;
        // 0x3136cc: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3136D0u;
        goto label_3136d0;
    }
    ctx->pc = 0x3136C8u;
    {
        const bool branch_taken_0x3136c8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3136CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136C8u;
        // 0x3136cc: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3136c8) {
            ctx->pc = 0x313780u;
            goto label_313780;
        }
    }
    ctx->pc = 0x3136D0u;
label_3136d0:
    // 0x3136d0: 0x1000002f  b           . + 4 + (0x2F << 2)
label_3136d4:
    if (ctx->pc == 0x3136D4u) {
        ctx->pc = 0x3136D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136D0u;
        // 0x3136d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3136D8u;
        goto label_3136d8;
    }
    ctx->pc = 0x3136D0u;
    {
        const bool branch_taken_0x3136d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3136D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136D0u;
        // 0x3136d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3136d0) {
            ctx->pc = 0x313790u;
            goto label_313790;
        }
    }
    ctx->pc = 0x3136D8u;
label_3136d8:
    // 0x3136d8: 0x12820029  beq         $s4, $v0, . + 4 + (0x29 << 2)
label_3136dc:
    if (ctx->pc == 0x3136DCu) {
        ctx->pc = 0x3136DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136D8u;
        // 0x3136dc: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3136E0u;
        goto label_3136e0;
    }
    ctx->pc = 0x3136D8u;
    {
        const bool branch_taken_0x3136d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x3136DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136D8u;
        // 0x3136dc: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3136d8) {
            ctx->pc = 0x313780u;
            goto label_313780;
        }
    }
    ctx->pc = 0x3136E0u;
label_3136e0:
    // 0x3136e0: 0x1000002b  b           . + 4 + (0x2B << 2)
label_3136e4:
    if (ctx->pc == 0x3136E4u) {
        ctx->pc = 0x3136E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136E0u;
        // 0x3136e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3136E8u;
        goto label_3136e8;
    }
    ctx->pc = 0x3136E0u;
    {
        const bool branch_taken_0x3136e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3136E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136E0u;
        // 0x3136e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3136e0) {
            ctx->pc = 0x313790u;
            goto label_313790;
        }
    }
    ctx->pc = 0x3136E8u;
label_3136e8:
    // 0x3136e8: 0xc0c4c8a  jal         func_313228
label_3136ec:
    if (ctx->pc == 0x3136ECu) {
        ctx->pc = 0x3136ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136E8u;
        // 0x3136ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3136F0u;
        goto label_3136f0;
    }
    ctx->pc = 0x3136E8u;
    SET_GPR_U32(ctx, 31, 0x3136F0u);
    ctx->pc = 0x3136ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3136E8u;
    // 0x3136ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313228u, 0x3136E8u, 0x3136F0u)) {
        return;
    }
    ctx->pc = 0x3136F0u;
label_3136f0:
    // 0x3136f0: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x3136f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3136f4:
    // 0x3136f4: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x3136f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_3136f8:
    // 0x3136f8: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_3136fc:
    if (ctx->pc == 0x3136FCu) {
        ctx->pc = 0x3136FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136F8u;
        // 0x3136fc: 0x8e120050  lw          $s2, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313700u;
        goto label_313700;
    }
    ctx->pc = 0x3136F8u;
    {
        const bool branch_taken_0x3136f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3136f8) {
            ctx->pc = 0x3136FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3136F8u;
            // 0x3136fc: 0x8e120050  lw          $s2, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313728u;
            goto label_313728;
        }
    }
    ctx->pc = 0x313700u;
label_313700:
    // 0x313700: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x313700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_313704:
    // 0x313704: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x313704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313708:
    // 0x313708: 0x2a0f809  jalr        $s5
label_31370c:
    if (ctx->pc == 0x31370Cu) {
        ctx->pc = 0x31370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313708u;
        // 0x31370c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313710u;
        goto label_313710;
    }
    ctx->pc = 0x313708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x313710u);
        ctx->pc = 0x31370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313708u;
        // 0x31370c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313708u, 0x313710u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x313710u;
label_313710:
    // 0x313710: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x313710u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_313714:
    // 0x313714: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x313714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_313718:
    // 0x313718: 0x56420004  bnel        $s2, $v0, . + 4 + (0x4 << 2)
label_31371c:
    if (ctx->pc == 0x31371Cu) {
        ctx->pc = 0x31371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313718u;
        // 0x31371c: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313720u;
        goto label_313720;
    }
    ctx->pc = 0x313718u;
    {
        const bool branch_taken_0x313718 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x313718) {
            ctx->pc = 0x31371Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313718u;
            // 0x31371c: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31372Cu;
            goto label_31372c;
        }
    }
    ctx->pc = 0x313720u;
label_313720:
    // 0x313720: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_313724:
    if (ctx->pc == 0x313724u) {
        ctx->pc = 0x313724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313720u;
        // 0x313724: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313728u;
        goto label_313728;
    }
    ctx->pc = 0x313720u;
    {
        const bool branch_taken_0x313720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313720u;
        // 0x313724: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313720) {
            ctx->pc = 0x313A08u;
            goto label_313a08;
        }
    }
    ctx->pc = 0x313728u;
label_313728:
    // 0x313728: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x313728u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_31372c:
    // 0x31372c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x31372cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_313730:
    // 0x313730: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_313734:
    if (ctx->pc == 0x313734u) {
        ctx->pc = 0x313734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313730u;
        // 0x313734: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x313738u;
        goto label_313738;
    }
    ctx->pc = 0x313730u;
    {
        const bool branch_taken_0x313730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313730u;
        // 0x313734: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x313730) {
            ctx->pc = 0x313758u;
            goto label_313758;
        }
    }
    ctx->pc = 0x313738u;
label_313738:
    // 0x313738: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x313738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31373c:
    // 0x31373c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x31373cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_313740:
    // 0x313740: 0x242902f  dsubu       $s2, $s2, $v0
    ctx->pc = 0x313740u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
label_313744:
    // 0x313744: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_313748:
    if (ctx->pc == 0x313748u) {
        ctx->pc = 0x313748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313744u;
        // 0x313748: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31374Cu;
        goto label_31374c;
    }
    ctx->pc = 0x313744u;
    {
        const bool branch_taken_0x313744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x313748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313744u;
        // 0x313748: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313744) {
            ctx->pc = 0x313770u;
            goto label_313770;
        }
    }
    ctx->pc = 0x31374Cu;
label_31374c:
    // 0x31374c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x31374cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_313750:
    // 0x313750: 0x10000007  b           . + 4 + (0x7 << 2)
label_313754:
    if (ctx->pc == 0x313754u) {
        ctx->pc = 0x313754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313750u;
        // 0x313754: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313758u;
        goto label_313758;
    }
    ctx->pc = 0x313750u;
    {
        const bool branch_taken_0x313750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313750u;
        // 0x313754: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313750) {
            ctx->pc = 0x313770u;
            goto label_313770;
        }
    }
    ctx->pc = 0x313758u;
label_313758:
    // 0x313758: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_31375c:
    if (ctx->pc == 0x31375Cu) {
        ctx->pc = 0x31375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313758u;
        // 0x31375c: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313760u;
        goto label_313760;
    }
    ctx->pc = 0x313758u;
    {
        const bool branch_taken_0x313758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313758u;
        // 0x31375c: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313758) {
            ctx->pc = 0x313770u;
            goto label_313770;
        }
    }
    ctx->pc = 0x313760u;
label_313760:
    // 0x313760: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x313760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_313764:
    // 0x313764: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_313768:
    if (ctx->pc == 0x313768u) {
        ctx->pc = 0x313768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313764u;
        // 0x313768: 0x461023  subu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31376Cu;
        goto label_31376c;
    }
    ctx->pc = 0x313764u;
    {
        const bool branch_taken_0x313764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313764u;
        // 0x313768: 0x461023  subu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313764) {
            ctx->pc = 0x313770u;
            goto label_313770;
        }
    }
    ctx->pc = 0x31376Cu;
label_31376c:
    // 0x31376c: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x31376cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
label_313770:
    // 0x313770: 0x2d2b02d  daddu       $s6, $s6, $s2
    ctx->pc = 0x313770u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 18));
label_313774:
    // 0x313774: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x313774u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313778:
    // 0x313778: 0x10000007  b           . + 4 + (0x7 << 2)
label_31377c:
    if (ctx->pc == 0x31377Cu) {
        ctx->pc = 0x31377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313778u;
        // 0x31377c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313780u;
        goto label_313780;
    }
    ctx->pc = 0x313778u;
    {
        const bool branch_taken_0x313778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313778u;
        // 0x31377c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313778) {
            ctx->pc = 0x313798u;
            goto label_313798;
        }
    }
    ctx->pc = 0x313780u;
label_313780:
    // 0x313780: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x313780u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313784:
    // 0x313784: 0x10000004  b           . + 4 + (0x4 << 2)
label_313788:
    if (ctx->pc == 0x313788u) {
        ctx->pc = 0x313788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313784u;
        // 0x313788: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31378Cu;
        goto label_31378c;
    }
    ctx->pc = 0x313784u;
    {
        const bool branch_taken_0x313784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313784u;
        // 0x313788: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313784) {
            ctx->pc = 0x313798u;
            goto label_313798;
        }
    }
    ctx->pc = 0x31378Cu;
label_31378c:
    // 0x31378c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31378cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_313790:
    // 0x313790: 0x1000009d  b           . + 4 + (0x9D << 2)
label_313794:
    if (ctx->pc == 0x313794u) {
        ctx->pc = 0x313794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313790u;
        // 0x313794: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313798u;
        goto label_313798;
    }
    ctx->pc = 0x313790u;
    {
        const bool branch_taken_0x313790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313790u;
        // 0x313794: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313790) {
            ctx->pc = 0x313A08u;
            goto label_313a08;
        }
    }
    ctx->pc = 0x313798u;
label_313798:
    // 0x313798: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
label_31379c:
    if (ctx->pc == 0x31379Cu) {
        ctx->pc = 0x31379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313798u;
        // 0x31379c: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3137A0u;
        goto label_3137a0;
    }
    ctx->pc = 0x313798u;
    {
        const bool branch_taken_0x313798 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x313798) {
            ctx->pc = 0x31379Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313798u;
            // 0x31379c: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3137ACu;
            goto label_3137ac;
        }
    }
    ctx->pc = 0x3137A0u;
label_3137a0:
    // 0x3137a0: 0xc0c4ed6  jal         func_313B58
label_3137a4:
    if (ctx->pc == 0x3137A4u) {
        ctx->pc = 0x3137A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3137A0u;
        // 0x3137a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3137A8u;
        goto label_3137a8;
    }
    ctx->pc = 0x3137A0u;
    SET_GPR_U32(ctx, 31, 0x3137A8u);
    ctx->pc = 0x3137A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3137A0u;
    // 0x3137a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313B58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313B58u, 0x3137A0u, 0x3137A8u)) {
        return;
    }
    ctx->pc = 0x3137A8u;
label_3137a8:
    // 0x3137a8: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x3137a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3137ac:
    // 0x3137ac: 0x3062081a  andi        $v0, $v1, 0x81A
    ctx->pc = 0x3137acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2074);
label_3137b0:
    // 0x3137b0: 0x14400084  bnez        $v0, . + 4 + (0x84 << 2)
label_3137b4:
    if (ctx->pc == 0x3137B4u) {
        ctx->pc = 0x3137B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3137B0u;
        // 0x3137b4: 0x30620400  andi        $v0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3137B8u;
        goto label_3137b8;
    }
    ctx->pc = 0x3137B0u;
    {
        const bool branch_taken_0x3137b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3137B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3137B0u;
        // 0x3137b4: 0x30620400  andi        $v0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3137b0) {
            ctx->pc = 0x3139C4u;
            goto label_3139c4;
        }
    }
    ctx->pc = 0x3137B8u;
label_3137b8:
    // 0x3137b8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_3137bc:
    if (ctx->pc == 0x3137BCu) {
        ctx->pc = 0x3137BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3137B8u;
        // 0x3137bc: 0x3c020031  lui         $v0, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3137C0u;
        goto label_3137c0;
    }
    ctx->pc = 0x3137B8u;
    {
        const bool branch_taken_0x3137b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3137BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3137B8u;
        // 0x3137bc: 0x3c020031  lui         $v0, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3137b8) {
            ctx->pc = 0x31381Cu;
            goto label_31381c;
        }
    }
    ctx->pc = 0x3137C0u;
label_3137c0:
    // 0x3137c0: 0x24424118  addiu       $v0, $v0, 0x4118
    ctx->pc = 0x3137c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16664));
label_3137c4:
    // 0x3137c4: 0x56a2000e  bnel        $s5, $v0, . + 4 + (0xE << 2)
label_3137c8:
    if (ctx->pc == 0x3137C8u) {
        ctx->pc = 0x3137C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3137C4u;
        // 0x3137c8: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3137CCu;
        goto label_3137cc;
    }
    ctx->pc = 0x3137C4u;
    {
        const bool branch_taken_0x3137c4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x3137c4) {
            ctx->pc = 0x3137C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3137C4u;
            // 0x3137c8: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313800u;
            goto label_313800;
        }
    }
    ctx->pc = 0x3137CCu;
label_3137cc:
    // 0x3137cc: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x3137ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_3137d0:
    // 0x3137d0: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_3137d4:
    if (ctx->pc == 0x3137D4u) {
        ctx->pc = 0x3137D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3137D0u;
        // 0x3137d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3137D8u;
        goto label_3137d8;
    }
    ctx->pc = 0x3137D0u;
    {
        const bool branch_taken_0x3137d0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x3137D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3137D0u;
        // 0x3137d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3137d0) {
            ctx->pc = 0x3137FCu;
            goto label_3137fc;
        }
    }
    ctx->pc = 0x3137D8u;
label_3137d8:
    // 0x3137d8: 0xc0c7d6e  jal         func_31F5B8
label_3137dc:
    if (ctx->pc == 0x3137DCu) {
        ctx->pc = 0x3137DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3137D8u;
        // 0x3137dc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3137E0u;
        goto label_3137e0;
    }
    ctx->pc = 0x3137D8u;
    SET_GPR_U32(ctx, 31, 0x3137E0u);
    ctx->pc = 0x3137DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3137D8u;
    // 0x3137dc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F5B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31F5B8u, 0x3137D8u, 0x3137E0u)) {
        return;
    }
    ctx->pc = 0x3137E0u;
label_3137e0:
    // 0x3137e0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_3137e4:
    if (ctx->pc == 0x3137E4u) {
        ctx->pc = 0x3137E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3137E0u;
        // 0x3137e4: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3137E8u;
        goto label_3137e8;
    }
    ctx->pc = 0x3137E0u;
    {
        const bool branch_taken_0x3137e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3137e0) {
            ctx->pc = 0x3137E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3137E0u;
            // 0x3137e4: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313800u;
            goto label_313800;
        }
    }
    ctx->pc = 0x3137E8u;
label_3137e8:
    // 0x3137e8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3137e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3137ec:
    // 0x3137ec: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x3137ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_3137f0:
    // 0x3137f0: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x3137f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
label_3137f4:
    // 0x3137f4: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
label_3137f8:
    if (ctx->pc == 0x3137F8u) {
        ctx->pc = 0x3137F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3137F4u;
        // 0x3137f8: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3137FCu;
        goto label_3137fc;
    }
    ctx->pc = 0x3137F4u;
    {
        const bool branch_taken_0x3137f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3137f4) {
            ctx->pc = 0x3137F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3137F4u;
            // 0x3137f8: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31380Cu;
            goto label_31380c;
        }
    }
    ctx->pc = 0x3137FCu;
label_3137fc:
    // 0x3137fc: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3137fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_313800:
    // 0x313800: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x313800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_313804:
    // 0x313804: 0x1000006f  b           . + 4 + (0x6F << 2)
label_313808:
    if (ctx->pc == 0x313808u) {
        ctx->pc = 0x313808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313804u;
        // 0x313808: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31380Cu;
        goto label_31380c;
    }
    ctx->pc = 0x313804u;
    {
        const bool branch_taken_0x313804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313804u;
        // 0x313808: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313804) {
            ctx->pc = 0x3139C4u;
            goto label_3139c4;
        }
    }
    ctx->pc = 0x31380Cu;
label_31380c:
    // 0x31380c: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x31380cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_313810:
    // 0x313810: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x313810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
label_313814:
    // 0x313814: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x313814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
label_313818:
    // 0x313818: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x313818u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_31381c:
    // 0x31381c: 0x56800003  bnel        $s4, $zero, . + 4 + (0x3 << 2)
label_313820:
    if (ctx->pc == 0x313820u) {
        ctx->pc = 0x313820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31381Cu;
        // 0x313820: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313824u;
        goto label_313824;
    }
    ctx->pc = 0x31381Cu;
    {
        const bool branch_taken_0x31381c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x31381c) {
            ctx->pc = 0x313820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31381Cu;
            // 0x313820: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31382Cu;
            goto label_31382c;
        }
    }
    ctx->pc = 0x313824u;
label_313824:
    // 0x313824: 0x10000007  b           . + 4 + (0x7 << 2)
label_313828:
    if (ctx->pc == 0x313828u) {
        ctx->pc = 0x313828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313824u;
        // 0x313828: 0x2c0982d  daddu       $s3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31382Cu;
        goto label_31382c;
    }
    ctx->pc = 0x313824u;
    {
        const bool branch_taken_0x313824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313824u;
        // 0x313828: 0x2c0982d  daddu       $s3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313824) {
            ctx->pc = 0x313844u;
            goto label_313844;
        }
    }
    ctx->pc = 0x31382Cu;
label_31382c:
    // 0x31382c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31382cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_313830:
    // 0x313830: 0xc0c7d6e  jal         func_31F5B8
label_313834:
    if (ctx->pc == 0x313834u) {
        ctx->pc = 0x313834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313830u;
        // 0x313834: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313838u;
        goto label_313838;
    }
    ctx->pc = 0x313830u;
    SET_GPR_U32(ctx, 31, 0x313838u);
    ctx->pc = 0x313834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313830u;
    // 0x313834: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F5B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31F5B8u, 0x313830u, 0x313838u)) {
        return;
    }
    ctx->pc = 0x313838u;
label_313838:
    // 0x313838: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
label_31383c:
    if (ctx->pc == 0x31383Cu) {
        ctx->pc = 0x31383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313838u;
        // 0x31383c: 0xdfa20010  ld          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313840u;
        goto label_313840;
    }
    ctx->pc = 0x313838u;
    {
        const bool branch_taken_0x313838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313838u;
        // 0x31383c: 0xdfa20010  ld          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313838) {
            ctx->pc = 0x3139C4u;
            goto label_3139c4;
        }
    }
    ctx->pc = 0x313840u;
label_313840:
    // 0x313840: 0x56982d  daddu       $s3, $v0, $s6
    ctx->pc = 0x313840u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 22));
label_313844:
    // 0x313844: 0x56e00015  bnel        $s7, $zero, . + 4 + (0x15 << 2)
label_313848:
    if (ctx->pc == 0x313848u) {
        ctx->pc = 0x313848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313844u;
        // 0x313848: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31384Cu;
        goto label_31384c;
    }
    ctx->pc = 0x313844u;
    {
        const bool branch_taken_0x313844 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x313844) {
            ctx->pc = 0x313848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313844u;
            // 0x313848: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31389Cu;
            goto label_31389c;
        }
    }
    ctx->pc = 0x31384Cu;
label_31384c:
    // 0x31384c: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x31384cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_313850:
    // 0x313850: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x313850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_313854:
    // 0x313854: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_313858:
    if (ctx->pc == 0x313858u) {
        ctx->pc = 0x313858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313854u;
        // 0x313858: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31385Cu;
        goto label_31385c;
    }
    ctx->pc = 0x313854u;
    {
        const bool branch_taken_0x313854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x313854) {
            ctx->pc = 0x313858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313854u;
            // 0x313858: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313864u;
            goto label_313864;
        }
    }
    ctx->pc = 0x31385Cu;
label_31385c:
    // 0x31385c: 0x10000008  b           . + 4 + (0x8 << 2)
label_313860:
    if (ctx->pc == 0x313860u) {
        ctx->pc = 0x313860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31385Cu;
        // 0x313860: 0x8e120050  lw          $s2, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313864u;
        goto label_313864;
    }
    ctx->pc = 0x31385Cu;
    {
        const bool branch_taken_0x31385c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31385Cu;
        // 0x313860: 0x8e120050  lw          $s2, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31385c) {
            ctx->pc = 0x313880u;
            goto label_313880;
        }
    }
    ctx->pc = 0x313864u;
label_313864:
    // 0x313864: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x313864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313868:
    // 0x313868: 0x2a0f809  jalr        $s5
label_31386c:
    if (ctx->pc == 0x31386Cu) {
        ctx->pc = 0x31386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313868u;
        // 0x31386c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313870u;
        goto label_313870;
    }
    ctx->pc = 0x313868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x313870u);
        ctx->pc = 0x31386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313868u;
        // 0x31386c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313868u, 0x313870u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x313870u;
label_313870:
    // 0x313870: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x313870u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_313874:
    // 0x313874: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x313874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_313878:
    // 0x313878: 0x12420052  beq         $s2, $v0, . + 4 + (0x52 << 2)
label_31387c:
    if (ctx->pc == 0x31387Cu) {
        ctx->pc = 0x313880u;
        goto label_313880;
    }
    ctx->pc = 0x313878u;
    {
        const bool branch_taken_0x313878 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x313878) {
            ctx->pc = 0x3139C4u;
            goto label_3139c4;
        }
    }
    ctx->pc = 0x313880u;
label_313880:
    // 0x313880: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x313880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_313884:
    // 0x313884: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x313884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_313888:
    // 0x313888: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_31388c:
    if (ctx->pc == 0x31388Cu) {
        ctx->pc = 0x31388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313888u;
        // 0x31388c: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313890u;
        goto label_313890;
    }
    ctx->pc = 0x313888u;
    {
        const bool branch_taken_0x313888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313888u;
        // 0x31388c: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313888) {
            ctx->pc = 0x3138D0u;
            goto label_3138d0;
        }
    }
    ctx->pc = 0x313890u;
label_313890:
    // 0x313890: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x313890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_313894:
    // 0x313894: 0x242902f  dsubu       $s2, $s2, $v0
    ctx->pc = 0x313894u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
label_313898:
    // 0x313898: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x313898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_31389c:
    // 0x31389c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_3138a0:
    if (ctx->pc == 0x3138A0u) {
        ctx->pc = 0x3138A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31389Cu;
        // 0x3138a0: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3138A4u;
        goto label_3138a4;
    }
    ctx->pc = 0x31389Cu;
    {
        const bool branch_taken_0x31389c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31389c) {
            ctx->pc = 0x3138A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31389Cu;
            // 0x3138a0: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3138D4u;
            goto label_3138d4;
        }
    }
    ctx->pc = 0x3138A4u;
label_3138a4:
    // 0x3138a4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3138a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3138a8:
    // 0x3138a8: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x3138a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_3138ac:
    // 0x3138ac: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3138acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3138b0:
    // 0x3138b0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3138b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3138b4:
    // 0x3138b4: 0x628823  subu        $s1, $v1, $v0
    ctx->pc = 0x3138b4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3138b8:
    // 0x3138b8: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x3138b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_3138bc:
    // 0x3138bc: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x3138bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_3138c0:
    // 0x3138c0: 0x245902d  daddu       $s2, $s2, $a1
    ctx->pc = 0x3138c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 5));
label_3138c4:
    // 0x3138c4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3138c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_3138c8:
    // 0x3138c8: 0x10000009  b           . + 4 + (0x9 << 2)
label_3138cc:
    if (ctx->pc == 0x3138CCu) {
        ctx->pc = 0x3138CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3138C8u;
        // 0x3138cc: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3138D0u;
        goto label_3138d0;
    }
    ctx->pc = 0x3138C8u;
    {
        const bool branch_taken_0x3138c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3138CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3138C8u;
        // 0x3138cc: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3138c8) {
            ctx->pc = 0x3138F0u;
            goto label_3138f0;
        }
    }
    ctx->pc = 0x3138D0u;
label_3138d0:
    // 0x3138d0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3138d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3138d4:
    // 0x3138d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3138d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3138d8:
    // 0x3138d8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3138d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3138dc:
    // 0x3138dc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3138dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3138e0:
    // 0x3138e0: 0x838823  subu        $s1, $a0, $v1
    ctx->pc = 0x3138e0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3138e4:
    // 0x3138e4: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x3138e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_3138e8:
    // 0x3138e8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3138e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_3138ec:
    // 0x3138ec: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x3138ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_3138f0:
    // 0x3138f0: 0x242902f  dsubu       $s2, $s2, $v0
    ctx->pc = 0x3138f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
label_3138f4:
    // 0x3138f4: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x3138f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3138f8:
    // 0x3138f8: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x3138f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_3138fc:
    // 0x3138fc: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_313900:
    if (ctx->pc == 0x313900u) {
        ctx->pc = 0x313900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3138FCu;
        // 0x313900: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313904u;
        goto label_313904;
    }
    ctx->pc = 0x3138FCu;
    {
        const bool branch_taken_0x3138fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3138fc) {
            ctx->pc = 0x313900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3138FCu;
            // 0x313900: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31394Cu;
            goto label_31394c;
        }
    }
    ctx->pc = 0x313904u;
label_313904:
    // 0x313904: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x313904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_313908:
    // 0x313908: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_31390c:
    if (ctx->pc == 0x31390Cu) {
        ctx->pc = 0x31390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313908u;
        // 0x31390c: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313910u;
        goto label_313910;
    }
    ctx->pc = 0x313908u;
    {
        const bool branch_taken_0x313908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313908) {
            ctx->pc = 0x31390Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313908u;
            // 0x31390c: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31394Cu;
            goto label_31394c;
        }
    }
    ctx->pc = 0x313910u;
label_313910:
    // 0x313910: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x313910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_313914:
    // 0x313914: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x313914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_313918:
    // 0x313918: 0x242102d  daddu       $v0, $s2, $v0
    ctx->pc = 0x313918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
label_31391c:
    // 0x31391c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x31391cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_313920:
    // 0x313920: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_313924:
    if (ctx->pc == 0x313924u) {
        ctx->pc = 0x313924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313920u;
        // 0x313924: 0x272102f  dsubu       $v0, $s3, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) - GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313928u;
        goto label_313928;
    }
    ctx->pc = 0x313920u;
    {
        const bool branch_taken_0x313920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313920u;
        // 0x313924: 0x272102f  dsubu       $v0, $s3, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) - GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313920) {
            ctx->pc = 0x313948u;
            goto label_313948;
        }
    }
    ctx->pc = 0x313928u;
label_313928:
    // 0x313928: 0x3063ffdf  andi        $v1, $v1, 0xFFDF
    ctx->pc = 0x313928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65503);
label_31392c:
    // 0x31392c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31392cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_313930:
    // 0x313930: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x313930u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_313934:
    // 0x313934: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x313934u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
label_313938:
    // 0x313938: 0x2222023  subu        $a0, $s1, $v0
    ctx->pc = 0x313938u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_31393c:
    // 0x31393c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x31393cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_313940:
    // 0x313940: 0x1000001d  b           . + 4 + (0x1D << 2)
label_313944:
    if (ctx->pc == 0x313944u) {
        ctx->pc = 0x313944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313940u;
        // 0x313944: 0xae040004  sw          $a0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313948u;
        goto label_313948;
    }
    ctx->pc = 0x313940u;
    {
        const bool branch_taken_0x313940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313940u;
        // 0x313944: 0xae040004  sw          $a0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313940) {
            ctx->pc = 0x3139B8u;
            goto label_3139b8;
        }
    }
    ctx->pc = 0x313948u;
label_313948:
    // 0x313948: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x313948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_31394c:
    // 0x31394c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31394cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313950:
    // 0x313950: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x313950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_313954:
    // 0x313954: 0x21023  negu        $v0, $v0
    ctx->pc = 0x313954u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_313958:
    // 0x313958: 0x539024  and         $s2, $v0, $s3
    ctx->pc = 0x313958u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_31395c:
    // 0x31395c: 0x2a0f809  jalr        $s5
label_313960:
    if (ctx->pc == 0x313960u) {
        ctx->pc = 0x313960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31395Cu;
        // 0x313960: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313964u;
        goto label_313964;
    }
    ctx->pc = 0x31395Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x313964u);
        ctx->pc = 0x313960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31395Cu;
        // 0x313960: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31395Cu, 0x313964u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x313964u;
label_313964:
    // 0x313964: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x313964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_313968:
    // 0x313968: 0x10430016  beq         $v0, $v1, . + 4 + (0x16 << 2)
label_31396c:
    if (ctx->pc == 0x31396Cu) {
        ctx->pc = 0x31396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313968u;
        // 0x31396c: 0x272102f  dsubu       $v0, $s3, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) - GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313970u;
        goto label_313970;
    }
    ctx->pc = 0x313968u;
    {
        const bool branch_taken_0x313968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x31396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313968u;
        // 0x31396c: 0x272102f  dsubu       $v0, $s3, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) - GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313968) {
            ctx->pc = 0x3139C4u;
            goto label_3139c4;
        }
    }
    ctx->pc = 0x313970u;
label_313970:
    // 0x313970: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x313970u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_313974:
    // 0x313974: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x313974u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
label_313978:
    // 0x313978: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x313978u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_31397c:
    // 0x31397c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x31397cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_313980:
    // 0x313980: 0x3063ffdf  andi        $v1, $v1, 0xFFDF
    ctx->pc = 0x313980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65503);
label_313984:
    // 0x313984: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_313988:
    if (ctx->pc == 0x313988u) {
        ctx->pc = 0x313988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313984u;
        // 0x313988: 0xa603000c  sh          $v1, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31398Cu;
        goto label_31398c;
    }
    ctx->pc = 0x313984u;
    {
        const bool branch_taken_0x313984 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x313988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313984u;
        // 0x313988: 0xa603000c  sh          $v1, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313984) {
            ctx->pc = 0x3139BCu;
            goto label_3139bc;
        }
    }
    ctx->pc = 0x31398Cu;
label_31398c:
    // 0x31398c: 0xc0c4f2e  jal         func_313CB8
label_313990:
    if (ctx->pc == 0x313990u) {
        ctx->pc = 0x313990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31398Cu;
        // 0x313990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313994u;
        goto label_313994;
    }
    ctx->pc = 0x31398Cu;
    SET_GPR_U32(ctx, 31, 0x313994u);
    ctx->pc = 0x313990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31398Cu;
    // 0x313990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313CB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313CB8u, 0x31398Cu, 0x313994u)) {
        return;
    }
    ctx->pc = 0x313994u;
label_313994:
    // 0x313994: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_313998:
    if (ctx->pc == 0x313998u) {
        ctx->pc = 0x31399Cu;
        goto label_31399c;
    }
    ctx->pc = 0x313994u;
    {
        const bool branch_taken_0x313994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313994) {
            ctx->pc = 0x3139C4u;
            goto label_3139c4;
        }
    }
    ctx->pc = 0x31399Cu;
label_31399c:
    // 0x31399c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x31399cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3139a0:
    // 0x3139a0: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x3139a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3139a4:
    // 0x3139a4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3139a8:
    if (ctx->pc == 0x3139A8u) {
        ctx->pc = 0x3139A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3139A4u;
        // 0x3139a8: 0x711823  subu        $v1, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3139ACu;
        goto label_3139ac;
    }
    ctx->pc = 0x3139A4u;
    {
        const bool branch_taken_0x3139a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3139A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3139A4u;
        // 0x3139a8: 0x711823  subu        $v1, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3139a4) {
            ctx->pc = 0x3139C4u;
            goto label_3139c4;
        }
    }
    ctx->pc = 0x3139ACu;
label_3139ac:
    // 0x3139ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3139acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3139b0:
    // 0x3139b0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3139b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_3139b4:
    // 0x3139b4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3139b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3139b8:
    // 0x3139b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3139b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3139bc:
    // 0x3139bc: 0x10000012  b           . + 4 + (0x12 << 2)
label_3139c0:
    if (ctx->pc == 0x3139C0u) {
        ctx->pc = 0x3139C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3139BCu;
        // 0x3139c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3139C4u;
        goto label_3139c4;
    }
    ctx->pc = 0x3139BCu;
    {
        const bool branch_taken_0x3139bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3139C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3139BCu;
        // 0x3139c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3139bc) {
            ctx->pc = 0x313A08u;
            goto label_313a08;
        }
    }
    ctx->pc = 0x3139C4u;
label_3139c4:
    // 0x3139c4: 0xc0c4c8a  jal         func_313228
label_3139c8:
    if (ctx->pc == 0x3139C8u) {
        ctx->pc = 0x3139C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3139C4u;
        // 0x3139c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3139CCu;
        goto label_3139cc;
    }
    ctx->pc = 0x3139C4u;
    SET_GPR_U32(ctx, 31, 0x3139CCu);
    ctx->pc = 0x3139C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3139C4u;
    // 0x3139c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313228u, 0x3139C4u, 0x3139CCu)) {
        return;
    }
    ctx->pc = 0x3139CCu;
label_3139cc:
    // 0x3139cc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_3139d0:
    if (ctx->pc == 0x3139D0u) {
        ctx->pc = 0x3139D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3139CCu;
        // 0x3139d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3139D4u;
        goto label_3139d4;
    }
    ctx->pc = 0x3139CCu;
    {
        const bool branch_taken_0x3139cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3139D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3139CCu;
        // 0x3139d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3139cc) {
            ctx->pc = 0x313A08u;
            goto label_313a08;
        }
    }
    ctx->pc = 0x3139D4u;
label_3139d4:
    // 0x3139d4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x3139d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3139d8:
    // 0x3139d8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3139d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3139dc:
    // 0x3139dc: 0x2a0f809  jalr        $s5
label_3139e0:
    if (ctx->pc == 0x3139E0u) {
        ctx->pc = 0x3139E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3139DCu;
        // 0x3139e0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3139E4u;
        goto label_3139e4;
    }
    ctx->pc = 0x3139DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x3139E4u);
        ctx->pc = 0x3139E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3139DCu;
        // 0x3139e0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3139DCu, 0x3139E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3139E4u;
label_3139e4:
    // 0x3139e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3139e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3139e8:
    // 0x3139e8: 0x1043ff4d  beq         $v0, $v1, . + 4 + (-0xB3 << 2)
label_3139ec:
    if (ctx->pc == 0x3139ECu) {
        ctx->pc = 0x3139ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3139E8u;
        // 0x3139ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3139F0u;
        goto label_3139f0;
    }
    ctx->pc = 0x3139E8u;
    {
        const bool branch_taken_0x3139e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3139ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3139E8u;
        // 0x3139ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3139e8) {
            ctx->pc = 0x313720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313720;
        }
    }
    ctx->pc = 0x3139F0u;
label_3139f0:
    // 0x3139f0: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x3139f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3139f4:
    // 0x3139f4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3139f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3139f8:
    // 0x3139f8: 0x3063ffdf  andi        $v1, $v1, 0xFFDF
    ctx->pc = 0x3139f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65503);
label_3139fc:
    // 0x3139fc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3139fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_313a00:
    // 0x313a00: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x313a00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
label_313a04:
    // 0x313a04: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x313a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_313a08:
    // 0x313a08: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x313a08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_313a0c:
    // 0x313a0c: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x313a0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_313a10:
    // 0x313a10: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x313a10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_313a14:
    // 0x313a14: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x313a14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_313a18:
    // 0x313a18: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x313a18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_313a1c:
    // 0x313a1c: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x313a1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_313a20:
    // 0x313a20: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x313a20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_313a24:
    // 0x313a24: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x313a24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_313a28:
    // 0x313a28: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x313a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_313a2c:
    // 0x313a2c: 0x3e00008  jr          $ra
label_313a30:
    if (ctx->pc == 0x313A30u) {
        ctx->pc = 0x313A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313A2Cu;
        // 0x313a30: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313A34u;
        goto label_313a34;
    }
    ctx->pc = 0x313A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313A2Cu;
        // 0x313a30: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313A34u;
label_313a34:
    // 0x313a34: 0x0  nop
    ctx->pc = 0x313a34u;
    // NOP
    ctx->pc = 0x313a38u;
}
