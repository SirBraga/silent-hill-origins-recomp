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

// Function: sub_00208380
// Address: 0x208380 - 0x2087c8
void sub_00208380_0x208380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208380_0x208380");
#endif

    switch (ctx->pc) {
        case 0x208380u: goto label_208380;
        case 0x208384u: goto label_208384;
        case 0x208388u: goto label_208388;
        case 0x20838cu: goto label_20838c;
        case 0x208390u: goto label_208390;
        case 0x208394u: goto label_208394;
        case 0x208398u: goto label_208398;
        case 0x20839cu: goto label_20839c;
        case 0x2083a0u: goto label_2083a0;
        case 0x2083a4u: goto label_2083a4;
        case 0x2083a8u: goto label_2083a8;
        case 0x2083acu: goto label_2083ac;
        case 0x2083b0u: goto label_2083b0;
        case 0x2083b4u: goto label_2083b4;
        case 0x2083b8u: goto label_2083b8;
        case 0x2083bcu: goto label_2083bc;
        case 0x2083c0u: goto label_2083c0;
        case 0x2083c4u: goto label_2083c4;
        case 0x2083c8u: goto label_2083c8;
        case 0x2083ccu: goto label_2083cc;
        case 0x2083d0u: goto label_2083d0;
        case 0x2083d4u: goto label_2083d4;
        case 0x2083d8u: goto label_2083d8;
        case 0x2083dcu: goto label_2083dc;
        case 0x2083e0u: goto label_2083e0;
        case 0x2083e4u: goto label_2083e4;
        case 0x2083e8u: goto label_2083e8;
        case 0x2083ecu: goto label_2083ec;
        case 0x2083f0u: goto label_2083f0;
        case 0x2083f4u: goto label_2083f4;
        case 0x2083f8u: goto label_2083f8;
        case 0x2083fcu: goto label_2083fc;
        case 0x208400u: goto label_208400;
        case 0x208404u: goto label_208404;
        case 0x208408u: goto label_208408;
        case 0x20840cu: goto label_20840c;
        case 0x208410u: goto label_208410;
        case 0x208414u: goto label_208414;
        case 0x208418u: goto label_208418;
        case 0x20841cu: goto label_20841c;
        case 0x208420u: goto label_208420;
        case 0x208424u: goto label_208424;
        case 0x208428u: goto label_208428;
        case 0x20842cu: goto label_20842c;
        case 0x208430u: goto label_208430;
        case 0x208434u: goto label_208434;
        case 0x208438u: goto label_208438;
        case 0x20843cu: goto label_20843c;
        case 0x208440u: goto label_208440;
        case 0x208444u: goto label_208444;
        case 0x208448u: goto label_208448;
        case 0x20844cu: goto label_20844c;
        case 0x208450u: goto label_208450;
        case 0x208454u: goto label_208454;
        case 0x208458u: goto label_208458;
        case 0x20845cu: goto label_20845c;
        case 0x208460u: goto label_208460;
        case 0x208464u: goto label_208464;
        case 0x208468u: goto label_208468;
        case 0x20846cu: goto label_20846c;
        case 0x208470u: goto label_208470;
        case 0x208474u: goto label_208474;
        case 0x208478u: goto label_208478;
        case 0x20847cu: goto label_20847c;
        case 0x208480u: goto label_208480;
        case 0x208484u: goto label_208484;
        case 0x208488u: goto label_208488;
        case 0x20848cu: goto label_20848c;
        case 0x208490u: goto label_208490;
        case 0x208494u: goto label_208494;
        case 0x208498u: goto label_208498;
        case 0x20849cu: goto label_20849c;
        case 0x2084a0u: goto label_2084a0;
        case 0x2084a4u: goto label_2084a4;
        case 0x2084a8u: goto label_2084a8;
        case 0x2084acu: goto label_2084ac;
        case 0x2084b0u: goto label_2084b0;
        case 0x2084b4u: goto label_2084b4;
        case 0x2084b8u: goto label_2084b8;
        case 0x2084bcu: goto label_2084bc;
        case 0x2084c0u: goto label_2084c0;
        case 0x2084c4u: goto label_2084c4;
        case 0x2084c8u: goto label_2084c8;
        case 0x2084ccu: goto label_2084cc;
        case 0x2084d0u: goto label_2084d0;
        case 0x2084d4u: goto label_2084d4;
        case 0x2084d8u: goto label_2084d8;
        case 0x2084dcu: goto label_2084dc;
        case 0x2084e0u: goto label_2084e0;
        case 0x2084e4u: goto label_2084e4;
        case 0x2084e8u: goto label_2084e8;
        case 0x2084ecu: goto label_2084ec;
        case 0x2084f0u: goto label_2084f0;
        case 0x2084f4u: goto label_2084f4;
        case 0x2084f8u: goto label_2084f8;
        case 0x2084fcu: goto label_2084fc;
        case 0x208500u: goto label_208500;
        case 0x208504u: goto label_208504;
        case 0x208508u: goto label_208508;
        case 0x20850cu: goto label_20850c;
        case 0x208510u: goto label_208510;
        case 0x208514u: goto label_208514;
        case 0x208518u: goto label_208518;
        case 0x20851cu: goto label_20851c;
        case 0x208520u: goto label_208520;
        case 0x208524u: goto label_208524;
        case 0x208528u: goto label_208528;
        case 0x20852cu: goto label_20852c;
        case 0x208530u: goto label_208530;
        case 0x208534u: goto label_208534;
        case 0x208538u: goto label_208538;
        case 0x20853cu: goto label_20853c;
        case 0x208540u: goto label_208540;
        case 0x208544u: goto label_208544;
        case 0x208548u: goto label_208548;
        case 0x20854cu: goto label_20854c;
        case 0x208550u: goto label_208550;
        case 0x208554u: goto label_208554;
        case 0x208558u: goto label_208558;
        case 0x20855cu: goto label_20855c;
        case 0x208560u: goto label_208560;
        case 0x208564u: goto label_208564;
        case 0x208568u: goto label_208568;
        case 0x20856cu: goto label_20856c;
        case 0x208570u: goto label_208570;
        case 0x208574u: goto label_208574;
        case 0x208578u: goto label_208578;
        case 0x20857cu: goto label_20857c;
        case 0x208580u: goto label_208580;
        case 0x208584u: goto label_208584;
        case 0x208588u: goto label_208588;
        case 0x20858cu: goto label_20858c;
        case 0x208590u: goto label_208590;
        case 0x208594u: goto label_208594;
        case 0x208598u: goto label_208598;
        case 0x20859cu: goto label_20859c;
        case 0x2085a0u: goto label_2085a0;
        case 0x2085a4u: goto label_2085a4;
        case 0x2085a8u: goto label_2085a8;
        case 0x2085acu: goto label_2085ac;
        case 0x2085b0u: goto label_2085b0;
        case 0x2085b4u: goto label_2085b4;
        case 0x2085b8u: goto label_2085b8;
        case 0x2085bcu: goto label_2085bc;
        case 0x2085c0u: goto label_2085c0;
        case 0x2085c4u: goto label_2085c4;
        case 0x2085c8u: goto label_2085c8;
        case 0x2085ccu: goto label_2085cc;
        case 0x2085d0u: goto label_2085d0;
        case 0x2085d4u: goto label_2085d4;
        case 0x2085d8u: goto label_2085d8;
        case 0x2085dcu: goto label_2085dc;
        case 0x2085e0u: goto label_2085e0;
        case 0x2085e4u: goto label_2085e4;
        case 0x2085e8u: goto label_2085e8;
        case 0x2085ecu: goto label_2085ec;
        case 0x2085f0u: goto label_2085f0;
        case 0x2085f4u: goto label_2085f4;
        case 0x2085f8u: goto label_2085f8;
        case 0x2085fcu: goto label_2085fc;
        case 0x208600u: goto label_208600;
        case 0x208604u: goto label_208604;
        case 0x208608u: goto label_208608;
        case 0x20860cu: goto label_20860c;
        case 0x208610u: goto label_208610;
        case 0x208614u: goto label_208614;
        case 0x208618u: goto label_208618;
        case 0x20861cu: goto label_20861c;
        case 0x208620u: goto label_208620;
        case 0x208624u: goto label_208624;
        case 0x208628u: goto label_208628;
        case 0x20862cu: goto label_20862c;
        case 0x208630u: goto label_208630;
        case 0x208634u: goto label_208634;
        case 0x208638u: goto label_208638;
        case 0x20863cu: goto label_20863c;
        case 0x208640u: goto label_208640;
        case 0x208644u: goto label_208644;
        case 0x208648u: goto label_208648;
        case 0x20864cu: goto label_20864c;
        case 0x208650u: goto label_208650;
        case 0x208654u: goto label_208654;
        case 0x208658u: goto label_208658;
        case 0x20865cu: goto label_20865c;
        case 0x208660u: goto label_208660;
        case 0x208664u: goto label_208664;
        case 0x208668u: goto label_208668;
        case 0x20866cu: goto label_20866c;
        case 0x208670u: goto label_208670;
        case 0x208674u: goto label_208674;
        case 0x208678u: goto label_208678;
        case 0x20867cu: goto label_20867c;
        case 0x208680u: goto label_208680;
        case 0x208684u: goto label_208684;
        case 0x208688u: goto label_208688;
        case 0x20868cu: goto label_20868c;
        case 0x208690u: goto label_208690;
        case 0x208694u: goto label_208694;
        case 0x208698u: goto label_208698;
        case 0x20869cu: goto label_20869c;
        case 0x2086a0u: goto label_2086a0;
        case 0x2086a4u: goto label_2086a4;
        case 0x2086a8u: goto label_2086a8;
        case 0x2086acu: goto label_2086ac;
        case 0x2086b0u: goto label_2086b0;
        case 0x2086b4u: goto label_2086b4;
        case 0x2086b8u: goto label_2086b8;
        case 0x2086bcu: goto label_2086bc;
        case 0x2086c0u: goto label_2086c0;
        case 0x2086c4u: goto label_2086c4;
        case 0x2086c8u: goto label_2086c8;
        case 0x2086ccu: goto label_2086cc;
        case 0x2086d0u: goto label_2086d0;
        case 0x2086d4u: goto label_2086d4;
        case 0x2086d8u: goto label_2086d8;
        case 0x2086dcu: goto label_2086dc;
        case 0x2086e0u: goto label_2086e0;
        case 0x2086e4u: goto label_2086e4;
        case 0x2086e8u: goto label_2086e8;
        case 0x2086ecu: goto label_2086ec;
        case 0x2086f0u: goto label_2086f0;
        case 0x2086f4u: goto label_2086f4;
        case 0x2086f8u: goto label_2086f8;
        case 0x2086fcu: goto label_2086fc;
        case 0x208700u: goto label_208700;
        case 0x208704u: goto label_208704;
        case 0x208708u: goto label_208708;
        case 0x20870cu: goto label_20870c;
        case 0x208710u: goto label_208710;
        case 0x208714u: goto label_208714;
        case 0x208718u: goto label_208718;
        case 0x20871cu: goto label_20871c;
        case 0x208720u: goto label_208720;
        case 0x208724u: goto label_208724;
        case 0x208728u: goto label_208728;
        case 0x20872cu: goto label_20872c;
        case 0x208730u: goto label_208730;
        case 0x208734u: goto label_208734;
        case 0x208738u: goto label_208738;
        case 0x20873cu: goto label_20873c;
        case 0x208740u: goto label_208740;
        case 0x208744u: goto label_208744;
        case 0x208748u: goto label_208748;
        case 0x20874cu: goto label_20874c;
        case 0x208750u: goto label_208750;
        case 0x208754u: goto label_208754;
        case 0x208758u: goto label_208758;
        case 0x20875cu: goto label_20875c;
        case 0x208760u: goto label_208760;
        case 0x208764u: goto label_208764;
        case 0x208768u: goto label_208768;
        case 0x20876cu: goto label_20876c;
        case 0x208770u: goto label_208770;
        case 0x208774u: goto label_208774;
        case 0x208778u: goto label_208778;
        case 0x20877cu: goto label_20877c;
        case 0x208780u: goto label_208780;
        case 0x208784u: goto label_208784;
        case 0x208788u: goto label_208788;
        case 0x20878cu: goto label_20878c;
        case 0x208790u: goto label_208790;
        case 0x208794u: goto label_208794;
        case 0x208798u: goto label_208798;
        case 0x20879cu: goto label_20879c;
        case 0x2087a0u: goto label_2087a0;
        case 0x2087a4u: goto label_2087a4;
        case 0x2087a8u: goto label_2087a8;
        case 0x2087acu: goto label_2087ac;
        case 0x2087b0u: goto label_2087b0;
        case 0x2087b4u: goto label_2087b4;
        case 0x2087b8u: goto label_2087b8;
        case 0x2087bcu: goto label_2087bc;
        case 0x2087c0u: goto label_2087c0;
        case 0x2087c4u: goto label_2087c4;
        default: break;
    }

    ctx->pc = 0x208380u;

label_208380:
    // 0x208380: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x208380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_208384:
    // 0x208384: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x208384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_208388:
    // 0x208388: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x208388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_20838c:
    // 0x20838c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20838cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_208390:
    // 0x208390: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x208390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_208394:
    // 0x208394: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x208394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_208398:
    // 0x208398: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x208398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_20839c:
    // 0x20839c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20839cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2083a0:
    // 0x2083a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2083a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2083a4:
    // 0x2083a4: 0x8e530018  lw          $s3, 0x18($s2)
    ctx->pc = 0x2083a4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_2083a8:
    // 0x2083a8: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x2083a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2083ac:
    // 0x2083ac: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x2083acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2083b0:
    // 0x2083b0: 0xae4500dc  sw          $a1, 0xDC($s2)
    ctx->pc = 0x2083b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 5));
label_2083b4:
    // 0x2083b4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_2083b8:
    if (ctx->pc == 0x2083B8u) {
        ctx->pc = 0x2083B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083B4u;
        // 0x2083b8: 0xae4600e0  sw          $a2, 0xE0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2083BCu;
        goto label_2083bc;
    }
    ctx->pc = 0x2083B4u;
    {
        const bool branch_taken_0x2083b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2083B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083B4u;
        // 0x2083b8: 0xae4600e0  sw          $a2, 0xE0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083b4) {
            ctx->pc = 0x2083D8u;
            goto label_2083d8;
        }
    }
    ctx->pc = 0x2083BCu;
label_2083bc:
    // 0x2083bc: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2083bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2083c0:
    // 0x2083c0: 0x40f809  jalr        $v0
label_2083c4:
    if (ctx->pc == 0x2083C4u) {
        ctx->pc = 0x2083C8u;
        goto label_2083c8;
    }
    ctx->pc = 0x2083C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2083C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2083C0u, 0x2083C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2083C8u;
label_2083c8:
    // 0x2083c8: 0x104000f5  beqz        $v0, . + 4 + (0xF5 << 2)
label_2083cc:
    if (ctx->pc == 0x2083CCu) {
        ctx->pc = 0x2083CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083C8u;
        // 0x2083cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2083D0u;
        goto label_2083d0;
    }
    ctx->pc = 0x2083C8u;
    {
        const bool branch_taken_0x2083c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2083CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083C8u;
        // 0x2083cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083c8) {
            ctx->pc = 0x2087A0u;
            goto label_2087a0;
        }
    }
    ctx->pc = 0x2083D0u;
label_2083d0:
    // 0x2083d0: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x2083d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2083d4:
    // 0x2083d4: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x2083d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2083d8:
    // 0x2083d8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2083d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2083dc:
    // 0x2083dc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2083dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2083e0:
    // 0x2083e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2083e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2083e4:
    // 0x2083e4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_2083e8:
    if (ctx->pc == 0x2083E8u) {
        ctx->pc = 0x2083E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083E4u;
        // 0x2083e8: 0x2a200  sll         $s4, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2083ECu;
        goto label_2083ec;
    }
    ctx->pc = 0x2083E4u;
    {
        const bool branch_taken_0x2083e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2083E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083E4u;
        // 0x2083e8: 0x2a200  sll         $s4, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083e4) {
            ctx->pc = 0x208408u;
            goto label_208408;
        }
    }
    ctx->pc = 0x2083ECu;
label_2083ec:
    // 0x2083ec: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2083ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2083f0:
    // 0x2083f0: 0x40f809  jalr        $v0
label_2083f4:
    if (ctx->pc == 0x2083F4u) {
        ctx->pc = 0x2083F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083F0u;
        // 0x2083f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2083F8u;
        goto label_2083f8;
    }
    ctx->pc = 0x2083F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2083F8u);
        ctx->pc = 0x2083F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083F0u;
        // 0x2083f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2083F0u, 0x2083F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2083F8u;
label_2083f8:
    // 0x2083f8: 0x104000e9  beqz        $v0, . + 4 + (0xE9 << 2)
label_2083fc:
    if (ctx->pc == 0x2083FCu) {
        ctx->pc = 0x2083FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083F8u;
        // 0x2083fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208400u;
        goto label_208400;
    }
    ctx->pc = 0x2083F8u;
    {
        const bool branch_taken_0x2083f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2083FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083F8u;
        // 0x2083fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083f8) {
            ctx->pc = 0x2087A0u;
            goto label_2087a0;
        }
    }
    ctx->pc = 0x208400u;
label_208400:
    // 0x208400: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x208400u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_208404:
    // 0x208404: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x208404u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_208408:
    // 0x208408: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x208408u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_20840c:
    // 0x20840c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x20840cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_208410:
    // 0x208410: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x208410u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_208414:
    // 0x208414: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_208418:
    if (ctx->pc == 0x208418u) {
        ctx->pc = 0x208418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208414u;
        // 0x208418: 0x282a02d  daddu       $s4, $s4, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20841Cu;
        goto label_20841c;
    }
    ctx->pc = 0x208414u;
    {
        const bool branch_taken_0x208414 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x208418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208414u;
        // 0x208418: 0x282a02d  daddu       $s4, $s4, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208414) {
            ctx->pc = 0x208438u;
            goto label_208438;
        }
    }
    ctx->pc = 0x20841Cu;
label_20841c:
    // 0x20841c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x20841cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_208420:
    // 0x208420: 0x40f809  jalr        $v0
label_208424:
    if (ctx->pc == 0x208424u) {
        ctx->pc = 0x208424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208420u;
        // 0x208424: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208428u;
        goto label_208428;
    }
    ctx->pc = 0x208420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208428u);
        ctx->pc = 0x208424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208420u;
        // 0x208424: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208420u, 0x208428u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208428u;
label_208428:
    // 0x208428: 0x104000dd  beqz        $v0, . + 4 + (0xDD << 2)
label_20842c:
    if (ctx->pc == 0x20842Cu) {
        ctx->pc = 0x20842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208428u;
        // 0x20842c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208430u;
        goto label_208430;
    }
    ctx->pc = 0x208428u;
    {
        const bool branch_taken_0x208428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208428u;
        // 0x20842c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208428) {
            ctx->pc = 0x2087A0u;
            goto label_2087a0;
        }
    }
    ctx->pc = 0x208430u;
label_208430:
    // 0x208430: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x208430u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_208434:
    // 0x208434: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x208434u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_208438:
    // 0x208438: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x208438u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_20843c:
    // 0x20843c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x20843cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_208440:
    // 0x208440: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x208440u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_208444:
    // 0x208444: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_208448:
    if (ctx->pc == 0x208448u) {
        ctx->pc = 0x208448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208444u;
        // 0x208448: 0xae4200d4  sw          $v0, 0xD4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20844Cu;
        goto label_20844c;
    }
    ctx->pc = 0x208444u;
    {
        const bool branch_taken_0x208444 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x208448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208444u;
        // 0x208448: 0xae4200d4  sw          $v0, 0xD4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208444) {
            ctx->pc = 0x208468u;
            goto label_208468;
        }
    }
    ctx->pc = 0x20844Cu;
label_20844c:
    // 0x20844c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x20844cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_208450:
    // 0x208450: 0x40f809  jalr        $v0
label_208454:
    if (ctx->pc == 0x208454u) {
        ctx->pc = 0x208454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208450u;
        // 0x208454: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208458u;
        goto label_208458;
    }
    ctx->pc = 0x208450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208458u);
        ctx->pc = 0x208454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208450u;
        // 0x208454: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208450u, 0x208458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208458u;
label_208458:
    // 0x208458: 0x104000d1  beqz        $v0, . + 4 + (0xD1 << 2)
label_20845c:
    if (ctx->pc == 0x20845Cu) {
        ctx->pc = 0x20845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208458u;
        // 0x20845c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208460u;
        goto label_208460;
    }
    ctx->pc = 0x208458u;
    {
        const bool branch_taken_0x208458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208458u;
        // 0x20845c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208458) {
            ctx->pc = 0x2087A0u;
            goto label_2087a0;
        }
    }
    ctx->pc = 0x208460u;
label_208460:
    // 0x208460: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x208460u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_208464:
    // 0x208464: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x208464u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_208468:
    // 0x208468: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x208468u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_20846c:
    // 0x20846c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x20846cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_208470:
    // 0x208470: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x208470u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_208474:
    // 0x208474: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x208474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_208478:
    // 0x208478: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_20847c:
    if (ctx->pc == 0x20847Cu) {
        ctx->pc = 0x20847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208478u;
        // 0x20847c: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208480u;
        goto label_208480;
    }
    ctx->pc = 0x208478u;
    {
        const bool branch_taken_0x208478 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x20847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208478u;
        // 0x20847c: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208478) {
            ctx->pc = 0x20849Cu;
            goto label_20849c;
        }
    }
    ctx->pc = 0x208480u;
label_208480:
    // 0x208480: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x208480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_208484:
    // 0x208484: 0x40f809  jalr        $v0
label_208488:
    if (ctx->pc == 0x208488u) {
        ctx->pc = 0x208488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208484u;
        // 0x208488: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20848Cu;
        goto label_20848c;
    }
    ctx->pc = 0x208484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20848Cu);
        ctx->pc = 0x208488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208484u;
        // 0x208488: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208484u, 0x20848Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20848Cu;
label_20848c:
    // 0x20848c: 0x104000c4  beqz        $v0, . + 4 + (0xC4 << 2)
label_208490:
    if (ctx->pc == 0x208490u) {
        ctx->pc = 0x208490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20848Cu;
        // 0x208490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208494u;
        goto label_208494;
    }
    ctx->pc = 0x20848Cu;
    {
        const bool branch_taken_0x20848c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20848Cu;
        // 0x208490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20848c) {
            ctx->pc = 0x2087A0u;
            goto label_2087a0;
        }
    }
    ctx->pc = 0x208494u;
label_208494:
    // 0x208494: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x208494u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_208498:
    // 0x208498: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x208498u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_20849c:
    // 0x20849c: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x20849cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2084a0:
    // 0x2084a0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2084a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2084a4:
    // 0x2084a4: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2084a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2084a8:
    // 0x2084a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2084a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2084ac:
    // 0x2084ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2084acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2084b0:
    // 0x2084b0: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_2084b4:
    if (ctx->pc == 0x2084B4u) {
        ctx->pc = 0x2084B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084B0u;
        // 0x2084b4: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2084B8u;
        goto label_2084b8;
    }
    ctx->pc = 0x2084B0u;
    {
        const bool branch_taken_0x2084b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2084B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084B0u;
        // 0x2084b4: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2084b0) {
            ctx->pc = 0x2084D8u;
            goto label_2084d8;
        }
    }
    ctx->pc = 0x2084B8u;
label_2084b8:
    // 0x2084b8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2084b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2084bc:
    // 0x2084bc: 0x40f809  jalr        $v0
label_2084c0:
    if (ctx->pc == 0x2084C0u) {
        ctx->pc = 0x2084C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084BCu;
        // 0x2084c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2084C4u;
        goto label_2084c4;
    }
    ctx->pc = 0x2084BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2084C4u);
        ctx->pc = 0x2084C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084BCu;
        // 0x2084c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2084BCu, 0x2084C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2084C4u;
label_2084c4:
    // 0x2084c4: 0x104000b6  beqz        $v0, . + 4 + (0xB6 << 2)
label_2084c8:
    if (ctx->pc == 0x2084C8u) {
        ctx->pc = 0x2084C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084C4u;
        // 0x2084c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2084CCu;
        goto label_2084cc;
    }
    ctx->pc = 0x2084C4u;
    {
        const bool branch_taken_0x2084c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2084C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084C4u;
        // 0x2084c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2084c4) {
            ctx->pc = 0x2087A0u;
            goto label_2087a0;
        }
    }
    ctx->pc = 0x2084CCu;
label_2084cc:
    // 0x2084cc: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x2084ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2084d0:
    // 0x2084d0: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x2084d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2084d4:
    // 0x2084d4: 0x0  nop
    ctx->pc = 0x2084d4u;
    // NOP
label_2084d8:
    // 0x2084d8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2084d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2084dc:
    // 0x2084dc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2084dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2084e0:
    // 0x2084e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2084e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2084e4:
    // 0x2084e4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2084e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_2084e8:
    // 0x2084e8: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_2084ec:
    if (ctx->pc == 0x2084ECu) {
        ctx->pc = 0x2084ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084E8u;
        // 0x2084ec: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2084F0u;
        goto label_2084f0;
    }
    ctx->pc = 0x2084E8u;
    {
        const bool branch_taken_0x2084e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2084ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084E8u;
        // 0x2084ec: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2084e8) {
            ctx->pc = 0x20850Cu;
            goto label_20850c;
        }
    }
    ctx->pc = 0x2084F0u;
label_2084f0:
    // 0x2084f0: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2084f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2084f4:
    // 0x2084f4: 0x40f809  jalr        $v0
label_2084f8:
    if (ctx->pc == 0x2084F8u) {
        ctx->pc = 0x2084F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084F4u;
        // 0x2084f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2084FCu;
        goto label_2084fc;
    }
    ctx->pc = 0x2084F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2084FCu);
        ctx->pc = 0x2084F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084F4u;
        // 0x2084f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2084F4u, 0x2084FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2084FCu;
label_2084fc:
    // 0x2084fc: 0x104000a8  beqz        $v0, . + 4 + (0xA8 << 2)
label_208500:
    if (ctx->pc == 0x208500u) {
        ctx->pc = 0x208500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084FCu;
        // 0x208500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208504u;
        goto label_208504;
    }
    ctx->pc = 0x2084FCu;
    {
        const bool branch_taken_0x2084fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084FCu;
        // 0x208500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2084fc) {
            ctx->pc = 0x2087A0u;
            goto label_2087a0;
        }
    }
    ctx->pc = 0x208504u;
label_208504:
    // 0x208504: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x208504u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_208508:
    // 0x208508: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x208508u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_20850c:
    // 0x20850c: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x20850cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_208510:
    // 0x208510: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x208510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_208514:
    // 0x208514: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x208514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_208518:
    // 0x208518: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x208518u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_20851c:
    // 0x20851c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20851cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208520:
    // 0x208520: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_208524:
    if (ctx->pc == 0x208524u) {
        ctx->pc = 0x208524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208520u;
        // 0x208524: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208528u;
        goto label_208528;
    }
    ctx->pc = 0x208520u;
    {
        const bool branch_taken_0x208520 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x208524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208520u;
        // 0x208524: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208520) {
            ctx->pc = 0x208548u;
            goto label_208548;
        }
    }
    ctx->pc = 0x208528u;
label_208528:
    // 0x208528: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x208528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_20852c:
    // 0x20852c: 0x40f809  jalr        $v0
label_208530:
    if (ctx->pc == 0x208530u) {
        ctx->pc = 0x208530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20852Cu;
        // 0x208530: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208534u;
        goto label_208534;
    }
    ctx->pc = 0x20852Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208534u);
        ctx->pc = 0x208530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20852Cu;
        // 0x208530: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20852Cu, 0x208534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208534u;
label_208534:
    // 0x208534: 0x1040009a  beqz        $v0, . + 4 + (0x9A << 2)
label_208538:
    if (ctx->pc == 0x208538u) {
        ctx->pc = 0x208538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208534u;
        // 0x208538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20853Cu;
        goto label_20853c;
    }
    ctx->pc = 0x208534u;
    {
        const bool branch_taken_0x208534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208534u;
        // 0x208538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208534) {
            ctx->pc = 0x2087A0u;
            goto label_2087a0;
        }
    }
    ctx->pc = 0x20853Cu;
label_20853c:
    // 0x20853c: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x20853cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_208540:
    // 0x208540: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x208540u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_208544:
    // 0x208544: 0x0  nop
    ctx->pc = 0x208544u;
    // NOP
label_208548:
    // 0x208548: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x208548u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_20854c:
    // 0x20854c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x20854cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_208550:
    // 0x208550: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x208550u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_208554:
    // 0x208554: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x208554u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
label_208558:
    // 0x208558: 0x6694fff8  daddiu      $s4, $s4, -0x8
    ctx->pc = 0x208558u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)4294967288);
label_20855c:
    // 0x20855c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x20855cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_208560:
    // 0x208560: 0x24080064  addiu       $t0, $zero, 0x64
    ctx->pc = 0x208560u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_208564:
    // 0x208564: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x208564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208568:
    // 0x208568: 0x8e4301a0  lw          $v1, 0x1A0($s2)
    ctx->pc = 0x208568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
label_20856c:
    // 0x20856c: 0x24e60018  addiu       $a2, $a3, 0x18
    ctx->pc = 0x20856cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
label_208570:
    // 0x208570: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x208570u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
label_208574:
    // 0x208574: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x208574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_208578:
    // 0x208578: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x208578u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_20857c:
    // 0x20857c: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x20857cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_208580:
    // 0x208580: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x208580u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_208584:
    // 0x208584: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x208584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_208588:
    // 0x208588: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x208588u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_20858c:
    // 0x20858c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x20858cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_208590:
    // 0x208590: 0xac680014  sw          $t0, 0x14($v1)
    ctx->pc = 0x208590u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 8));
label_208594:
    // 0x208594: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x208594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_208598:
    // 0x208598: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x208598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_20859c:
    // 0x20859c: 0x60f809  jalr        $v1
label_2085a0:
    if (ctx->pc == 0x2085A0u) {
        ctx->pc = 0x2085A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20859Cu;
        // 0x2085a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2085A4u;
        goto label_2085a4;
    }
    ctx->pc = 0x20859Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2085A4u);
        ctx->pc = 0x2085A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20859Cu;
        // 0x2085a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20859Cu, 0x2085A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2085A4u;
label_2085a4:
    // 0x2085a4: 0x8e4201b8  lw          $v0, 0x1B8($s2)
    ctx->pc = 0x2085a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
label_2085a8:
    // 0x2085a8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2085a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2085ac:
    // 0x2085ac: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2085b0:
    if (ctx->pc == 0x2085B0u) {
        ctx->pc = 0x2085B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2085ACu;
        // 0x2085b0: 0x2403003a  addiu       $v1, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2085B4u;
        goto label_2085b4;
    }
    ctx->pc = 0x2085ACu;
    {
        const bool branch_taken_0x2085ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2085B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2085ACu;
        // 0x2085b0: 0x2403003a  addiu       $v1, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2085ac) {
            ctx->pc = 0x2085D0u;
            goto label_2085d0;
        }
    }
    ctx->pc = 0x2085B4u;
label_2085b4:
    // 0x2085b4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2085b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2085b8:
    // 0x2085b8: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x2085b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_2085bc:
    // 0x2085bc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2085bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2085c0:
    // 0x2085c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2085c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2085c4:
    // 0x2085c4: 0x60f809  jalr        $v1
label_2085c8:
    if (ctx->pc == 0x2085C8u) {
        ctx->pc = 0x2085C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2085C4u;
        // 0x2085c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2085CCu;
        goto label_2085cc;
    }
    ctx->pc = 0x2085C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2085CCu);
        ctx->pc = 0x2085C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2085C4u;
        // 0x2085c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2085C4u, 0x2085CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2085CCu;
label_2085cc:
    // 0x2085cc: 0x0  nop
    ctx->pc = 0x2085ccu;
    // NOP
label_2085d0:
    // 0x2085d0: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2085d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2085d4:
    // 0x2085d4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_2085d8:
    if (ctx->pc == 0x2085D8u) {
        ctx->pc = 0x2085D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2085D4u;
        // 0x2085d8: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2085DCu;
        goto label_2085dc;
    }
    ctx->pc = 0x2085D4u;
    {
        const bool branch_taken_0x2085d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2085d4) {
            ctx->pc = 0x2085D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2085D4u;
            // 0x2085d8: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2085F8u;
            goto label_2085f8;
        }
    }
    ctx->pc = 0x2085DCu;
label_2085dc:
    // 0x2085dc: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x2085dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2085e0:
    // 0x2085e0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2085e4:
    if (ctx->pc == 0x2085E4u) {
        ctx->pc = 0x2085E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2085E0u;
        // 0x2085e4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2085E8u;
        goto label_2085e8;
    }
    ctx->pc = 0x2085E0u;
    {
        const bool branch_taken_0x2085e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2085e0) {
            ctx->pc = 0x2085E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2085E0u;
            // 0x2085e4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2085F8u;
            goto label_2085f8;
        }
    }
    ctx->pc = 0x2085E8u;
label_2085e8:
    // 0x2085e8: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x2085e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2085ec:
    // 0x2085ec: 0x5c400009  bgtzl       $v0, . + 4 + (0x9 << 2)
label_2085f0:
    if (ctx->pc == 0x2085F0u) {
        ctx->pc = 0x2085F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2085ECu;
        // 0x2085f0: 0x8e430024  lw          $v1, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2085F4u;
        goto label_2085f4;
    }
    ctx->pc = 0x2085ECu;
    {
        const bool branch_taken_0x2085ec = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x2085ec) {
            ctx->pc = 0x2085F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2085ECu;
            // 0x2085f0: 0x8e430024  lw          $v1, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208614u;
            goto label_208614;
        }
    }
    ctx->pc = 0x2085F4u;
label_2085f4:
    // 0x2085f4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2085f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2085f8:
    // 0x2085f8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2085f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2085fc:
    // 0x2085fc: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x2085fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_208600:
    // 0x208600: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x208600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_208604:
    // 0x208604: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x208604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_208608:
    // 0x208608: 0x60f809  jalr        $v1
label_20860c:
    if (ctx->pc == 0x20860Cu) {
        ctx->pc = 0x20860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208608u;
        // 0x20860c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208610u;
        goto label_208610;
    }
    ctx->pc = 0x208608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x208610u);
        ctx->pc = 0x20860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208608u;
        // 0x20860c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208608u, 0x208610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208610u;
label_208610:
    // 0x208610: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x208610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_208614:
    // 0x208614: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x208614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_208618:
    // 0x208618: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x208618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20861c:
    // 0x20861c: 0x12820007  beq         $s4, $v0, . + 4 + (0x7 << 2)
label_208620:
    if (ctx->pc == 0x208620u) {
        ctx->pc = 0x208620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20861Cu;
        // 0x208620: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208624u;
        goto label_208624;
    }
    ctx->pc = 0x20861Cu;
    {
        const bool branch_taken_0x20861c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x208620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20861Cu;
        // 0x208620: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20861c) {
            ctx->pc = 0x20863Cu;
            goto label_20863c;
        }
    }
    ctx->pc = 0x208624u;
label_208624:
    // 0x208624: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x208624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_208628:
    // 0x208628: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x208628u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20862c:
    // 0x20862c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x20862cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_208630:
    // 0x208630: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x208630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_208634:
    // 0x208634: 0x60f809  jalr        $v1
label_208638:
    if (ctx->pc == 0x208638u) {
        ctx->pc = 0x208638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208634u;
        // 0x208638: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20863Cu;
        goto label_20863c;
    }
    ctx->pc = 0x208634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20863Cu);
        ctx->pc = 0x208638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208634u;
        // 0x208638: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208634u, 0x20863Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20863Cu;
label_20863c:
    // 0x20863c: 0x8e4200d8  lw          $v0, 0xD8($s2)
    ctx->pc = 0x20863cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_208640:
    // 0x208640: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_208644:
    if (ctx->pc == 0x208644u) {
        ctx->pc = 0x208644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208640u;
        // 0x208644: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208648u;
        goto label_208648;
    }
    ctx->pc = 0x208640u;
    {
        const bool branch_taken_0x208640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208640u;
        // 0x208644: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208640) {
            ctx->pc = 0x208670u;
            goto label_208670;
        }
    }
    ctx->pc = 0x208648u;
label_208648:
    // 0x208648: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x208648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_20864c:
    // 0x20864c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x20864cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_208650:
    // 0x208650: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x208650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_208654:
    // 0x208654: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x208654u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_208658:
    // 0x208658: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x208658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20865c:
    // 0x20865c: 0x3012  mflo        $a2
    ctx->pc = 0x20865cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_208660:
    // 0x208660: 0x40f809  jalr        $v0
label_208664:
    if (ctx->pc == 0x208664u) {
        ctx->pc = 0x208664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208660u;
        // 0x208664: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208668u;
        goto label_208668;
    }
    ctx->pc = 0x208660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208668u);
        ctx->pc = 0x208664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208660u;
        // 0x208664: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208660u, 0x208668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208668u;
label_208668:
    // 0x208668: 0xae4200d8  sw          $v0, 0xD8($s2)
    ctx->pc = 0x208668u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 2));
label_20866c:
    // 0x20866c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x20866cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_208670:
    // 0x208670: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x208670u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208674:
    // 0x208674: 0x18400044  blez        $v0, . + 4 + (0x44 << 2)
label_208678:
    if (ctx->pc == 0x208678u) {
        ctx->pc = 0x208678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208674u;
        // 0x208678: 0x8e5400d8  lw          $s4, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20867Cu;
        goto label_20867c;
    }
    ctx->pc = 0x208674u;
    {
        const bool branch_taken_0x208674 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x208678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208674u;
        // 0x208678: 0x8e5400d8  lw          $s4, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208674) {
            ctx->pc = 0x208788u;
            goto label_208788;
        }
    }
    ctx->pc = 0x20867Cu;
label_20867c:
    // 0x20867c: 0x0  nop
    ctx->pc = 0x20867cu;
    // NOP
label_208680:
    // 0x208680: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_208684:
    if (ctx->pc == 0x208684u) {
        ctx->pc = 0x208684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208680u;
        // 0x208684: 0xae950004  sw          $s5, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208688u;
        goto label_208688;
    }
    ctx->pc = 0x208680u;
    {
        const bool branch_taken_0x208680 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x208684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208680u;
        // 0x208684: 0xae950004  sw          $s5, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208680) {
            ctx->pc = 0x2086A8u;
            goto label_2086a8;
        }
    }
    ctx->pc = 0x208688u;
label_208688:
    // 0x208688: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x208688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_20868c:
    // 0x20868c: 0x40f809  jalr        $v0
label_208690:
    if (ctx->pc == 0x208690u) {
        ctx->pc = 0x208690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20868Cu;
        // 0x208690: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208694u;
        goto label_208694;
    }
    ctx->pc = 0x20868Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208694u);
        ctx->pc = 0x208690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20868Cu;
        // 0x208690: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20868Cu, 0x208694u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208694u;
label_208694:
    // 0x208694: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_208698:
    if (ctx->pc == 0x208698u) {
        ctx->pc = 0x208698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208694u;
        // 0x208698: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20869Cu;
        goto label_20869c;
    }
    ctx->pc = 0x208694u;
    {
        const bool branch_taken_0x208694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208694u;
        // 0x208698: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208694) {
            ctx->pc = 0x2087A0u;
            goto label_2087a0;
        }
    }
    ctx->pc = 0x20869Cu;
label_20869c:
    // 0x20869c: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x20869cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2086a0:
    // 0x2086a0: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x2086a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2086a4:
    // 0x2086a4: 0x0  nop
    ctx->pc = 0x2086a4u;
    // NOP
label_2086a8:
    // 0x2086a8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2086a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2086ac:
    // 0x2086ac: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2086acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2086b0:
    // 0x2086b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2086b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2086b4:
    // 0x2086b4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_2086b8:
    if (ctx->pc == 0x2086B8u) {
        ctx->pc = 0x2086B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086B4u;
        // 0x2086b8: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2086BCu;
        goto label_2086bc;
    }
    ctx->pc = 0x2086B4u;
    {
        const bool branch_taken_0x2086b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2086B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086B4u;
        // 0x2086b8: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2086b4) {
            ctx->pc = 0x2086D8u;
            goto label_2086d8;
        }
    }
    ctx->pc = 0x2086BCu;
label_2086bc:
    // 0x2086bc: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2086bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2086c0:
    // 0x2086c0: 0x40f809  jalr        $v0
label_2086c4:
    if (ctx->pc == 0x2086C4u) {
        ctx->pc = 0x2086C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086C0u;
        // 0x2086c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2086C8u;
        goto label_2086c8;
    }
    ctx->pc = 0x2086C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2086C8u);
        ctx->pc = 0x2086C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086C0u;
        // 0x2086c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2086C0u, 0x2086C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2086C8u;
label_2086c8:
    // 0x2086c8: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_2086cc:
    if (ctx->pc == 0x2086CCu) {
        ctx->pc = 0x2086CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086C8u;
        // 0x2086cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2086D0u;
        goto label_2086d0;
    }
    ctx->pc = 0x2086C8u;
    {
        const bool branch_taken_0x2086c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2086CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086C8u;
        // 0x2086cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2086c8) {
            ctx->pc = 0x2087A0u;
            goto label_2087a0;
        }
    }
    ctx->pc = 0x2086D0u;
label_2086d0:
    // 0x2086d0: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x2086d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2086d4:
    // 0x2086d4: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x2086d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2086d8:
    // 0x2086d8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2086d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2086dc:
    // 0x2086dc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2086dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2086e0:
    // 0x2086e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2086e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2086e4:
    // 0x2086e4: 0x21902  srl         $v1, $v0, 4
    ctx->pc = 0x2086e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_2086e8:
    // 0x2086e8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2086e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_2086ec:
    // 0x2086ec: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x2086ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_2086f0:
    // 0x2086f0: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_2086f4:
    if (ctx->pc == 0x2086F4u) {
        ctx->pc = 0x2086F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086F0u;
        // 0x2086f4: 0xae82000c  sw          $v0, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2086F8u;
        goto label_2086f8;
    }
    ctx->pc = 0x2086F0u;
    {
        const bool branch_taken_0x2086f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2086F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086F0u;
        // 0x2086f4: 0xae82000c  sw          $v0, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2086f0) {
            ctx->pc = 0x20871Cu;
            goto label_20871c;
        }
    }
    ctx->pc = 0x2086F8u;
label_2086f8:
    // 0x2086f8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2086f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2086fc:
    // 0x2086fc: 0x40f809  jalr        $v0
label_208700:
    if (ctx->pc == 0x208700u) {
        ctx->pc = 0x208700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086FCu;
        // 0x208700: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208704u;
        goto label_208704;
    }
    ctx->pc = 0x2086FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208704u);
        ctx->pc = 0x208700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086FCu;
        // 0x208700: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2086FCu, 0x208704u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208704u;
label_208704:
    // 0x208704: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_208708:
    if (ctx->pc == 0x208708u) {
        ctx->pc = 0x208708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208704u;
        // 0x208708: 0x8e710000  lw          $s1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20870Cu;
        goto label_20870c;
    }
    ctx->pc = 0x208704u;
    {
        const bool branch_taken_0x208704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208704) {
            ctx->pc = 0x208708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208704u;
            // 0x208708: 0x8e710000  lw          $s1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208718u;
            goto label_208718;
        }
    }
    ctx->pc = 0x20870Cu;
label_20870c:
    // 0x20870c: 0x10000024  b           . + 4 + (0x24 << 2)
label_208710:
    if (ctx->pc == 0x208710u) {
        ctx->pc = 0x208710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20870Cu;
        // 0x208710: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208714u;
        goto label_208714;
    }
    ctx->pc = 0x20870Cu;
    {
        const bool branch_taken_0x20870c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20870Cu;
        // 0x208710: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20870c) {
            ctx->pc = 0x2087A0u;
            goto label_2087a0;
        }
    }
    ctx->pc = 0x208714u;
label_208714:
    // 0x208714: 0x0  nop
    ctx->pc = 0x208714u;
    // NOP
label_208718:
    // 0x208718: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x208718u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_20871c:
    // 0x20871c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x20871cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_208720:
    // 0x208720: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x208720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_208724:
    // 0x208724: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x208724u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_208728:
    // 0x208728: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x208728u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
label_20872c:
    // 0x20872c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x20872cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_208730:
    // 0x208730: 0x24080065  addiu       $t0, $zero, 0x65
    ctx->pc = 0x208730u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_208734:
    // 0x208734: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x208734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208738:
    // 0x208738: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x208738u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_20873c:
    // 0x20873c: 0x24660018  addiu       $a2, $v1, 0x18
    ctx->pc = 0x20873cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_208740:
    // 0x208740: 0xac670018  sw          $a3, 0x18($v1)
    ctx->pc = 0x208740u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 7));
label_208744:
    // 0x208744: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x208744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_208748:
    // 0x208748: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x208748u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_20874c:
    // 0x20874c: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x20874cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_208750:
    // 0x208750: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x208750u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_208754:
    // 0x208754: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x208754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_208758:
    // 0x208758: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x208758u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_20875c:
    // 0x20875c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x20875cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_208760:
    // 0x208760: 0xac680014  sw          $t0, 0x14($v1)
    ctx->pc = 0x208760u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 8));
label_208764:
    // 0x208764: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x208764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_208768:
    // 0x208768: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x208768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_20876c:
    // 0x20876c: 0x60f809  jalr        $v1
label_208770:
    if (ctx->pc == 0x208770u) {
        ctx->pc = 0x208770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20876Cu;
        // 0x208770: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208774u;
        goto label_208774;
    }
    ctx->pc = 0x20876Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x208774u);
        ctx->pc = 0x208770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20876Cu;
        // 0x208770: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20876Cu, 0x208774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208774u;
label_208774:
    // 0x208774: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x208774u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_208778:
    // 0x208778: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x208778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_20877c:
    // 0x20877c: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x20877cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_208780:
    // 0x208780: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
label_208784:
    if (ctx->pc == 0x208784u) {
        ctx->pc = 0x208784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208780u;
        // 0x208784: 0x26940054  addiu       $s4, $s4, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208788u;
        goto label_208788;
    }
    ctx->pc = 0x208780u;
    {
        const bool branch_taken_0x208780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208780u;
        // 0x208784: 0x26940054  addiu       $s4, $s4, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208780) {
            ctx->pc = 0x208680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208680;
        }
    }
    ctx->pc = 0x208788u;
label_208788:
    // 0x208788: 0x8e4401b8  lw          $a0, 0x1B8($s2)
    ctx->pc = 0x208788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
label_20878c:
    // 0x20878c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20878cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208790:
    // 0x208790: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x208790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208794:
    // 0x208794: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x208794u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_208798:
    // 0x208798: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x208798u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_20879c:
    // 0x20879c: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x20879cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
label_2087a0:
    // 0x2087a0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2087a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2087a4:
    // 0x2087a4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2087a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2087a8:
    // 0x2087a8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2087a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2087ac:
    // 0x2087ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2087acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2087b0:
    // 0x2087b0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2087b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2087b4:
    // 0x2087b4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2087b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2087b8:
    // 0x2087b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2087b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2087bc:
    // 0x2087bc: 0x3e00008  jr          $ra
label_2087c0:
    if (ctx->pc == 0x2087C0u) {
        ctx->pc = 0x2087C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2087BCu;
        // 0x2087c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2087C4u;
        goto label_2087c4;
    }
    ctx->pc = 0x2087BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2087C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2087BCu;
        // 0x2087c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2087BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2087C4u;
label_2087c4:
    // 0x2087c4: 0x0  nop
    ctx->pc = 0x2087c4u;
    // NOP
    ctx->pc = 0x2087c8u;
}
