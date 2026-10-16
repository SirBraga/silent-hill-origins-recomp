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

// Function: sub_002DE468
// Address: 0x2de468 - 0x2de7f0
void sub_002DE468_0x2de468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE468_0x2de468");
#endif

    switch (ctx->pc) {
        case 0x2de468u: goto label_2de468;
        case 0x2de46cu: goto label_2de46c;
        case 0x2de470u: goto label_2de470;
        case 0x2de474u: goto label_2de474;
        case 0x2de478u: goto label_2de478;
        case 0x2de47cu: goto label_2de47c;
        case 0x2de480u: goto label_2de480;
        case 0x2de484u: goto label_2de484;
        case 0x2de488u: goto label_2de488;
        case 0x2de48cu: goto label_2de48c;
        case 0x2de490u: goto label_2de490;
        case 0x2de494u: goto label_2de494;
        case 0x2de498u: goto label_2de498;
        case 0x2de49cu: goto label_2de49c;
        case 0x2de4a0u: goto label_2de4a0;
        case 0x2de4a4u: goto label_2de4a4;
        case 0x2de4a8u: goto label_2de4a8;
        case 0x2de4acu: goto label_2de4ac;
        case 0x2de4b0u: goto label_2de4b0;
        case 0x2de4b4u: goto label_2de4b4;
        case 0x2de4b8u: goto label_2de4b8;
        case 0x2de4bcu: goto label_2de4bc;
        case 0x2de4c0u: goto label_2de4c0;
        case 0x2de4c4u: goto label_2de4c4;
        case 0x2de4c8u: goto label_2de4c8;
        case 0x2de4ccu: goto label_2de4cc;
        case 0x2de4d0u: goto label_2de4d0;
        case 0x2de4d4u: goto label_2de4d4;
        case 0x2de4d8u: goto label_2de4d8;
        case 0x2de4dcu: goto label_2de4dc;
        case 0x2de4e0u: goto label_2de4e0;
        case 0x2de4e4u: goto label_2de4e4;
        case 0x2de4e8u: goto label_2de4e8;
        case 0x2de4ecu: goto label_2de4ec;
        case 0x2de4f0u: goto label_2de4f0;
        case 0x2de4f4u: goto label_2de4f4;
        case 0x2de4f8u: goto label_2de4f8;
        case 0x2de4fcu: goto label_2de4fc;
        case 0x2de500u: goto label_2de500;
        case 0x2de504u: goto label_2de504;
        case 0x2de508u: goto label_2de508;
        case 0x2de50cu: goto label_2de50c;
        case 0x2de510u: goto label_2de510;
        case 0x2de514u: goto label_2de514;
        case 0x2de518u: goto label_2de518;
        case 0x2de51cu: goto label_2de51c;
        case 0x2de520u: goto label_2de520;
        case 0x2de524u: goto label_2de524;
        case 0x2de528u: goto label_2de528;
        case 0x2de52cu: goto label_2de52c;
        case 0x2de530u: goto label_2de530;
        case 0x2de534u: goto label_2de534;
        case 0x2de538u: goto label_2de538;
        case 0x2de53cu: goto label_2de53c;
        case 0x2de540u: goto label_2de540;
        case 0x2de544u: goto label_2de544;
        case 0x2de548u: goto label_2de548;
        case 0x2de54cu: goto label_2de54c;
        case 0x2de550u: goto label_2de550;
        case 0x2de554u: goto label_2de554;
        case 0x2de558u: goto label_2de558;
        case 0x2de55cu: goto label_2de55c;
        case 0x2de560u: goto label_2de560;
        case 0x2de564u: goto label_2de564;
        case 0x2de568u: goto label_2de568;
        case 0x2de56cu: goto label_2de56c;
        case 0x2de570u: goto label_2de570;
        case 0x2de574u: goto label_2de574;
        case 0x2de578u: goto label_2de578;
        case 0x2de57cu: goto label_2de57c;
        case 0x2de580u: goto label_2de580;
        case 0x2de584u: goto label_2de584;
        case 0x2de588u: goto label_2de588;
        case 0x2de58cu: goto label_2de58c;
        case 0x2de590u: goto label_2de590;
        case 0x2de594u: goto label_2de594;
        case 0x2de598u: goto label_2de598;
        case 0x2de59cu: goto label_2de59c;
        case 0x2de5a0u: goto label_2de5a0;
        case 0x2de5a4u: goto label_2de5a4;
        case 0x2de5a8u: goto label_2de5a8;
        case 0x2de5acu: goto label_2de5ac;
        case 0x2de5b0u: goto label_2de5b0;
        case 0x2de5b4u: goto label_2de5b4;
        case 0x2de5b8u: goto label_2de5b8;
        case 0x2de5bcu: goto label_2de5bc;
        case 0x2de5c0u: goto label_2de5c0;
        case 0x2de5c4u: goto label_2de5c4;
        case 0x2de5c8u: goto label_2de5c8;
        case 0x2de5ccu: goto label_2de5cc;
        case 0x2de5d0u: goto label_2de5d0;
        case 0x2de5d4u: goto label_2de5d4;
        case 0x2de5d8u: goto label_2de5d8;
        case 0x2de5dcu: goto label_2de5dc;
        case 0x2de5e0u: goto label_2de5e0;
        case 0x2de5e4u: goto label_2de5e4;
        case 0x2de5e8u: goto label_2de5e8;
        case 0x2de5ecu: goto label_2de5ec;
        case 0x2de5f0u: goto label_2de5f0;
        case 0x2de5f4u: goto label_2de5f4;
        case 0x2de5f8u: goto label_2de5f8;
        case 0x2de5fcu: goto label_2de5fc;
        case 0x2de600u: goto label_2de600;
        case 0x2de604u: goto label_2de604;
        case 0x2de608u: goto label_2de608;
        case 0x2de60cu: goto label_2de60c;
        case 0x2de610u: goto label_2de610;
        case 0x2de614u: goto label_2de614;
        case 0x2de618u: goto label_2de618;
        case 0x2de61cu: goto label_2de61c;
        case 0x2de620u: goto label_2de620;
        case 0x2de624u: goto label_2de624;
        case 0x2de628u: goto label_2de628;
        case 0x2de62cu: goto label_2de62c;
        case 0x2de630u: goto label_2de630;
        case 0x2de634u: goto label_2de634;
        case 0x2de638u: goto label_2de638;
        case 0x2de63cu: goto label_2de63c;
        case 0x2de640u: goto label_2de640;
        case 0x2de644u: goto label_2de644;
        case 0x2de648u: goto label_2de648;
        case 0x2de64cu: goto label_2de64c;
        case 0x2de650u: goto label_2de650;
        case 0x2de654u: goto label_2de654;
        case 0x2de658u: goto label_2de658;
        case 0x2de65cu: goto label_2de65c;
        case 0x2de660u: goto label_2de660;
        case 0x2de664u: goto label_2de664;
        case 0x2de668u: goto label_2de668;
        case 0x2de66cu: goto label_2de66c;
        case 0x2de670u: goto label_2de670;
        case 0x2de674u: goto label_2de674;
        case 0x2de678u: goto label_2de678;
        case 0x2de67cu: goto label_2de67c;
        case 0x2de680u: goto label_2de680;
        case 0x2de684u: goto label_2de684;
        case 0x2de688u: goto label_2de688;
        case 0x2de68cu: goto label_2de68c;
        case 0x2de690u: goto label_2de690;
        case 0x2de694u: goto label_2de694;
        case 0x2de698u: goto label_2de698;
        case 0x2de69cu: goto label_2de69c;
        case 0x2de6a0u: goto label_2de6a0;
        case 0x2de6a4u: goto label_2de6a4;
        case 0x2de6a8u: goto label_2de6a8;
        case 0x2de6acu: goto label_2de6ac;
        case 0x2de6b0u: goto label_2de6b0;
        case 0x2de6b4u: goto label_2de6b4;
        case 0x2de6b8u: goto label_2de6b8;
        case 0x2de6bcu: goto label_2de6bc;
        case 0x2de6c0u: goto label_2de6c0;
        case 0x2de6c4u: goto label_2de6c4;
        case 0x2de6c8u: goto label_2de6c8;
        case 0x2de6ccu: goto label_2de6cc;
        case 0x2de6d0u: goto label_2de6d0;
        case 0x2de6d4u: goto label_2de6d4;
        case 0x2de6d8u: goto label_2de6d8;
        case 0x2de6dcu: goto label_2de6dc;
        case 0x2de6e0u: goto label_2de6e0;
        case 0x2de6e4u: goto label_2de6e4;
        case 0x2de6e8u: goto label_2de6e8;
        case 0x2de6ecu: goto label_2de6ec;
        case 0x2de6f0u: goto label_2de6f0;
        case 0x2de6f4u: goto label_2de6f4;
        case 0x2de6f8u: goto label_2de6f8;
        case 0x2de6fcu: goto label_2de6fc;
        case 0x2de700u: goto label_2de700;
        case 0x2de704u: goto label_2de704;
        case 0x2de708u: goto label_2de708;
        case 0x2de70cu: goto label_2de70c;
        case 0x2de710u: goto label_2de710;
        case 0x2de714u: goto label_2de714;
        case 0x2de718u: goto label_2de718;
        case 0x2de71cu: goto label_2de71c;
        case 0x2de720u: goto label_2de720;
        case 0x2de724u: goto label_2de724;
        case 0x2de728u: goto label_2de728;
        case 0x2de72cu: goto label_2de72c;
        case 0x2de730u: goto label_2de730;
        case 0x2de734u: goto label_2de734;
        case 0x2de738u: goto label_2de738;
        case 0x2de73cu: goto label_2de73c;
        case 0x2de740u: goto label_2de740;
        case 0x2de744u: goto label_2de744;
        case 0x2de748u: goto label_2de748;
        case 0x2de74cu: goto label_2de74c;
        case 0x2de750u: goto label_2de750;
        case 0x2de754u: goto label_2de754;
        case 0x2de758u: goto label_2de758;
        case 0x2de75cu: goto label_2de75c;
        case 0x2de760u: goto label_2de760;
        case 0x2de764u: goto label_2de764;
        case 0x2de768u: goto label_2de768;
        case 0x2de76cu: goto label_2de76c;
        case 0x2de770u: goto label_2de770;
        case 0x2de774u: goto label_2de774;
        case 0x2de778u: goto label_2de778;
        case 0x2de77cu: goto label_2de77c;
        case 0x2de780u: goto label_2de780;
        case 0x2de784u: goto label_2de784;
        case 0x2de788u: goto label_2de788;
        case 0x2de78cu: goto label_2de78c;
        case 0x2de790u: goto label_2de790;
        case 0x2de794u: goto label_2de794;
        case 0x2de798u: goto label_2de798;
        case 0x2de79cu: goto label_2de79c;
        case 0x2de7a0u: goto label_2de7a0;
        case 0x2de7a4u: goto label_2de7a4;
        case 0x2de7a8u: goto label_2de7a8;
        case 0x2de7acu: goto label_2de7ac;
        case 0x2de7b0u: goto label_2de7b0;
        case 0x2de7b4u: goto label_2de7b4;
        case 0x2de7b8u: goto label_2de7b8;
        case 0x2de7bcu: goto label_2de7bc;
        case 0x2de7c0u: goto label_2de7c0;
        case 0x2de7c4u: goto label_2de7c4;
        case 0x2de7c8u: goto label_2de7c8;
        case 0x2de7ccu: goto label_2de7cc;
        case 0x2de7d0u: goto label_2de7d0;
        case 0x2de7d4u: goto label_2de7d4;
        case 0x2de7d8u: goto label_2de7d8;
        case 0x2de7dcu: goto label_2de7dc;
        case 0x2de7e0u: goto label_2de7e0;
        case 0x2de7e4u: goto label_2de7e4;
        case 0x2de7e8u: goto label_2de7e8;
        case 0x2de7ecu: goto label_2de7ec;
        default: break;
    }

    ctx->pc = 0x2de468u;

label_2de468:
    // 0x2de468: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2de468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2de46c:
    // 0x2de46c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2de46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_2de470:
    // 0x2de470: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2de470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2de474:
    // 0x2de474: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x2de474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2de478:
    // 0x2de478: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2de478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_2de47c:
    // 0x2de47c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2de47cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2de480:
    // 0x2de480: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2de480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_2de484:
    // 0x2de484: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2de484u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2de488:
    // 0x2de488: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2de488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2de48c:
    // 0x2de48c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2de48cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2de490:
    // 0x2de490: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2de490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_2de494:
    // 0x2de494: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2de494u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2de498:
    // 0x2de498: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2de498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2de49c:
    // 0x2de49c: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_2de4a0:
    if (ctx->pc == 0x2DE4A0u) {
        ctx->pc = 0x2DE4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE49Cu;
        // 0x2de4a0: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE4A4u;
        goto label_2de4a4;
    }
    ctx->pc = 0x2DE49Cu;
    {
        const bool branch_taken_0x2de49c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE49Cu;
        // 0x2de4a0: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de49c) {
            ctx->pc = 0x2DE4D4u;
            goto label_2de4d4;
        }
    }
    ctx->pc = 0x2DE4A4u;
label_2de4a4:
    // 0x2de4a4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2de4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2de4a8:
    // 0x2de4a8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2de4ac:
    if (ctx->pc == 0x2DE4ACu) {
        ctx->pc = 0x2DE4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4A8u;
        // 0x2de4ac: 0x8e630028  lw          $v1, 0x28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE4B0u;
        goto label_2de4b0;
    }
    ctx->pc = 0x2DE4A8u;
    {
        const bool branch_taken_0x2de4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de4a8) {
            ctx->pc = 0x2DE4ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE4A8u;
            // 0x2de4ac: 0x8e630028  lw          $v1, 0x28($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE4D8u;
            goto label_2de4d8;
        }
    }
    ctx->pc = 0x2DE4B0u;
label_2de4b0:
    // 0x2de4b0: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x2de4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_2de4b4:
    // 0x2de4b4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_2de4b8:
    if (ctx->pc == 0x2DE4B8u) {
        ctx->pc = 0x2DE4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4B4u;
        // 0x2de4b8: 0x8e630028  lw          $v1, 0x28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE4BCu;
        goto label_2de4bc;
    }
    ctx->pc = 0x2DE4B4u;
    {
        const bool branch_taken_0x2de4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de4b4) {
            ctx->pc = 0x2DE4B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE4B4u;
            // 0x2de4b8: 0x8e630028  lw          $v1, 0x28($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE4D8u;
            goto label_2de4d8;
        }
    }
    ctx->pc = 0x2DE4BCu;
label_2de4bc:
    // 0x2de4bc: 0xc0b7850  jal         func_2DE140
label_2de4c0:
    if (ctx->pc == 0x2DE4C0u) {
        ctx->pc = 0x2DE4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4BCu;
        // 0x2de4c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE4C4u;
        goto label_2de4c4;
    }
    ctx->pc = 0x2DE4BCu;
    SET_GPR_U32(ctx, 31, 0x2DE4C4u);
    ctx->pc = 0x2DE4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE4BCu;
    // 0x2de4c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DE140u, 0x2DE4BCu, 0x2DE4C4u)) {
        return;
    }
    ctx->pc = 0x2DE4C4u;
label_2de4c4:
    // 0x2de4c4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_2de4c8:
    if (ctx->pc == 0x2DE4C8u) {
        ctx->pc = 0x2DE4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4C4u;
        // 0x2de4c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE4CCu;
        goto label_2de4cc;
    }
    ctx->pc = 0x2DE4C4u;
    {
        const bool branch_taken_0x2de4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4C4u;
        // 0x2de4c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de4c4) {
            ctx->pc = 0x2DE528u;
            goto label_2de528;
        }
    }
    ctx->pc = 0x2DE4CCu;
label_2de4cc:
    // 0x2de4cc: 0x100000bd  b           . + 4 + (0xBD << 2)
label_2de4d0:
    if (ctx->pc == 0x2DE4D0u) {
        ctx->pc = 0x2DE4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4CCu;
        // 0x2de4d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE4D4u;
        goto label_2de4d4;
    }
    ctx->pc = 0x2DE4CCu;
    {
        const bool branch_taken_0x2de4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4CCu;
        // 0x2de4d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de4cc) {
            ctx->pc = 0x2DE7C4u;
            goto label_2de7c4;
        }
    }
    ctx->pc = 0x2DE4D4u;
label_2de4d4:
    // 0x2de4d4: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x2de4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_2de4d8:
    // 0x2de4d8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2de4dc:
    if (ctx->pc == 0x2DE4DCu) {
        ctx->pc = 0x2DE4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4D8u;
        // 0x2de4dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE4E0u;
        goto label_2de4e0;
    }
    ctx->pc = 0x2DE4D8u;
    {
        const bool branch_taken_0x2de4d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4D8u;
        // 0x2de4dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de4d8) {
            ctx->pc = 0x2DE4F0u;
            goto label_2de4f0;
        }
    }
    ctx->pc = 0x2DE4E0u;
label_2de4e0:
    // 0x2de4e0: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x2de4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_2de4e4:
    // 0x2de4e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2de4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2de4e8:
    // 0x2de4e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2de4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2de4ec:
    // 0x2de4ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2de4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2de4f0:
    // 0x2de4f0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_2de4f4:
    if (ctx->pc == 0x2DE4F4u) {
        ctx->pc = 0x2DE4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4F0u;
        // 0x2de4f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE4F8u;
        goto label_2de4f8;
    }
    ctx->pc = 0x2DE4F0u;
    {
        const bool branch_taken_0x2de4f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4F0u;
        // 0x2de4f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de4f0) {
            ctx->pc = 0x2DE500u;
            goto label_2de500;
        }
    }
    ctx->pc = 0x2DE4F8u;
label_2de4f8:
    // 0x2de4f8: 0x1000000a  b           . + 4 + (0xA << 2)
label_2de4fc:
    if (ctx->pc == 0x2DE4FCu) {
        ctx->pc = 0x2DE4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4F8u;
        // 0x2de4fc: 0x251880a  movz        $s1, $s2, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE500u;
        goto label_2de500;
    }
    ctx->pc = 0x2DE4F8u;
    {
        const bool branch_taken_0x2de4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4F8u;
        // 0x2de4fc: 0x251880a  movz        $s1, $s2, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de4f8) {
            ctx->pc = 0x2DE524u;
            goto label_2de524;
        }
    }
    ctx->pc = 0x2DE500u;
label_2de500:
    // 0x2de500: 0xc0b7720  jal         func_2DDC80
label_2de504:
    if (ctx->pc == 0x2DE504u) {
        ctx->pc = 0x2DE504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE500u;
        // 0x2de504: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE508u;
        goto label_2de508;
    }
    ctx->pc = 0x2DE500u;
    SET_GPR_U32(ctx, 31, 0x2DE508u);
    ctx->pc = 0x2DE504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE500u;
    // 0x2de504: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDC80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDC80u, 0x2DE500u, 0x2DE508u)) {
        return;
    }
    ctx->pc = 0x2DE508u;
label_2de508:
    // 0x2de508: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2de508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2de50c:
    // 0x2de50c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x2de50cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2de510:
    // 0x2de510: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2de510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2de514:
    // 0x2de514: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x2de514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2de518:
    // 0x2de518: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2de518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2de51c:
    // 0x2de51c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2de51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_2de520:
    // 0x2de520: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x2de520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
label_2de524:
    // 0x2de524: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2de524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2de528:
    // 0x2de528: 0xc0b76b0  jal         func_2DDAC0
label_2de52c:
    if (ctx->pc == 0x2DE52Cu) {
        ctx->pc = 0x2DE52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE528u;
        // 0x2de52c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE530u;
        goto label_2de530;
    }
    ctx->pc = 0x2DE528u;
    SET_GPR_U32(ctx, 31, 0x2DE530u);
    ctx->pc = 0x2DE52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE528u;
    // 0x2de52c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDAC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDAC0u, 0x2DE528u, 0x2DE530u)) {
        return;
    }
    ctx->pc = 0x2DE530u;
label_2de530:
    // 0x2de530: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2de534:
    if (ctx->pc == 0x2DE534u) {
        ctx->pc = 0x2DE534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE530u;
        // 0x2de534: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE538u;
        goto label_2de538;
    }
    ctx->pc = 0x2DE530u;
    {
        const bool branch_taken_0x2de530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE530u;
        // 0x2de534: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de530) {
            ctx->pc = 0x2DE548u;
            goto label_2de548;
        }
    }
    ctx->pc = 0x2DE538u;
label_2de538:
    // 0x2de538: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2de538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2de53c:
    // 0x2de53c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2de53cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2de540:
    // 0x2de540: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2de540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2de544:
    // 0x2de544: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x2de544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_2de548:
    // 0x2de548: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2de548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2de54c:
    // 0x2de54c: 0xc0b9f74  jal         func_2E7DD0
label_2de550:
    if (ctx->pc == 0x2DE550u) {
        ctx->pc = 0x2DE550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE54Cu;
        // 0x2de550: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE554u;
        goto label_2de554;
    }
    ctx->pc = 0x2DE54Cu;
    SET_GPR_U32(ctx, 31, 0x2DE554u);
    ctx->pc = 0x2DE550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE54Cu;
    // 0x2de550: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7DD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E7DD0u, 0x2DE54Cu, 0x2DE554u)) {
        return;
    }
    ctx->pc = 0x2DE554u;
label_2de554:
    // 0x2de554: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_2de558:
    if (ctx->pc == 0x2DE558u) {
        ctx->pc = 0x2DE558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE554u;
        // 0x2de558: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE55Cu;
        goto label_2de55c;
    }
    ctx->pc = 0x2DE554u;
    {
        const bool branch_taken_0x2de554 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE554u;
        // 0x2de558: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de554) {
            ctx->pc = 0x2DE568u;
            goto label_2de568;
        }
    }
    ctx->pc = 0x2DE55Cu;
label_2de55c:
    // 0x2de55c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2de55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2de560:
    // 0x2de560: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2de564:
    if (ctx->pc == 0x2DE564u) {
        ctx->pc = 0x2DE564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE560u;
        // 0x2de564: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE568u;
        goto label_2de568;
    }
    ctx->pc = 0x2DE560u;
    {
        const bool branch_taken_0x2de560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE560u;
        // 0x2de564: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de560) {
            ctx->pc = 0x2DE5DCu;
            goto label_2de5dc;
        }
    }
    ctx->pc = 0x2DE568u;
label_2de568:
    // 0x2de568: 0x8e640034  lw          $a0, 0x34($s3)
    ctx->pc = 0x2de568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_2de56c:
    // 0x2de56c: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
label_2de570:
    if (ctx->pc == 0x2DE570u) {
        ctx->pc = 0x2DE570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE56Cu;
        // 0x2de570: 0x8e62003c  lw          $v0, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE574u;
        goto label_2de574;
    }
    ctx->pc = 0x2DE56Cu;
    {
        const bool branch_taken_0x2de56c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de56c) {
            ctx->pc = 0x2DE570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE56Cu;
            // 0x2de570: 0x8e62003c  lw          $v0, 0x3C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE584u;
            goto label_2de584;
        }
    }
    ctx->pc = 0x2DE574u;
label_2de574:
    // 0x2de574: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2de574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_2de578:
    // 0x2de578: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2de578u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2de57c:
    // 0x2de57c: 0x1000000f  b           . + 4 + (0xF << 2)
label_2de580:
    if (ctx->pc == 0x2DE580u) {
        ctx->pc = 0x2DE580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE57Cu;
        // 0x2de580: 0x24848068  addiu       $a0, $a0, -0x7F98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE584u;
        goto label_2de584;
    }
    ctx->pc = 0x2DE57Cu;
    {
        const bool branch_taken_0x2de57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE57Cu;
        // 0x2de580: 0x24848068  addiu       $a0, $a0, -0x7F98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de57c) {
            ctx->pc = 0x2DE5BCu;
            goto label_2de5bc;
        }
    }
    ctx->pc = 0x2DE584u;
label_2de584:
    // 0x2de584: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_2de588:
    if (ctx->pc == 0x2DE588u) {
        ctx->pc = 0x2DE588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE584u;
        // 0x2de588: 0x8e64003c  lw          $a0, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE58Cu;
        goto label_2de58c;
    }
    ctx->pc = 0x2DE584u;
    {
        const bool branch_taken_0x2de584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de584) {
            ctx->pc = 0x2DE588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE584u;
            // 0x2de588: 0x8e64003c  lw          $a0, 0x3C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE5B8u;
            goto label_2de5b8;
        }
    }
    ctx->pc = 0x2DE58Cu;
label_2de58c:
    // 0x2de58c: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x2de58cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
label_2de590:
    // 0x2de590: 0x2484005c  addiu       $a0, $a0, 0x5C
    ctx->pc = 0x2de590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
label_2de594:
    // 0x2de594: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2de594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2de598:
    // 0x2de598: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2de598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de59c:
    // 0x2de59c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2de59cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de5a0:
    // 0x2de5a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2de5a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2de5a4:
    // 0x2de5a4: 0xc0b8270  jal         func_2E09C0
label_2de5a8:
    if (ctx->pc == 0x2DE5A8u) {
        ctx->pc = 0x2DE5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE5A4u;
        // 0x2de5a8: 0x35290806  ori         $t1, $t1, 0x806 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2054);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE5ACu;
        goto label_2de5ac;
    }
    ctx->pc = 0x2DE5A4u;
    SET_GPR_U32(ctx, 31, 0x2DE5ACu);
    ctx->pc = 0x2DE5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE5A4u;
    // 0x2de5a8: 0x35290806  ori         $t1, $t1, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E09C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E09C0u, 0x2DE5A4u, 0x2DE5ACu)) {
        return;
    }
    ctx->pc = 0x2DE5ACu;
label_2de5ac:
    // 0x2de5ac: 0x1040ffc7  beqz        $v0, . + 4 + (-0x39 << 2)
label_2de5b0:
    if (ctx->pc == 0x2DE5B0u) {
        ctx->pc = 0x2DE5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE5ACu;
        // 0x2de5b0: 0xae62003c  sw          $v0, 0x3C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE5B4u;
        goto label_2de5b4;
    }
    ctx->pc = 0x2DE5ACu;
    {
        const bool branch_taken_0x2de5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE5ACu;
        // 0x2de5b0: 0xae62003c  sw          $v0, 0x3C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de5ac) {
            ctx->pc = 0x2DE4CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de4cc;
        }
    }
    ctx->pc = 0x2DE5B4u;
label_2de5b4:
    // 0x2de5b4: 0x8e64003c  lw          $a0, 0x3C($s3)
    ctx->pc = 0x2de5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_2de5b8:
    // 0x2de5b8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2de5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2de5bc:
    // 0x2de5bc: 0xc0b8180  jal         func_2E0600
label_2de5c0:
    if (ctx->pc == 0x2DE5C0u) {
        ctx->pc = 0x2DE5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE5BCu;
        // 0x2de5c0: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE5C4u;
        goto label_2de5c4;
    }
    ctx->pc = 0x2DE5BCu;
    SET_GPR_U32(ctx, 31, 0x2DE5C4u);
    ctx->pc = 0x2DE5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE5BCu;
    // 0x2de5c0: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0600u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0600u, 0x2DE5BCu, 0x2DE5C4u)) {
        return;
    }
    ctx->pc = 0x2DE5C4u;
label_2de5c4:
    // 0x2de5c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2de5c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de5c8:
    // 0x2de5c8: 0x1060007e  beqz        $v1, . + 4 + (0x7E << 2)
label_2de5cc:
    if (ctx->pc == 0x2DE5CCu) {
        ctx->pc = 0x2DE5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE5C8u;
        // 0x2de5cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE5D0u;
        goto label_2de5d0;
    }
    ctx->pc = 0x2DE5C8u;
    {
        const bool branch_taken_0x2de5c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE5C8u;
        // 0x2de5cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de5c8) {
            ctx->pc = 0x2DE7C4u;
            goto label_2de7c4;
        }
    }
    ctx->pc = 0x2DE5D0u;
label_2de5d0:
    // 0x2de5d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2de5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de5d4:
    // 0x2de5d4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2de5d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2de5d8:
    // 0x2de5d8: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x2de5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_2de5dc:
    // 0x2de5dc: 0xc0b7db2  jal         func_2DF6C8
label_2de5e0:
    if (ctx->pc == 0x2DE5E0u) {
        ctx->pc = 0x2DE5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE5DCu;
        // 0x2de5e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE5E4u;
        goto label_2de5e4;
    }
    ctx->pc = 0x2DE5DCu;
    SET_GPR_U32(ctx, 31, 0x2DE5E4u);
    ctx->pc = 0x2DE5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE5DCu;
    // 0x2de5e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF6C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF6C8u, 0x2DE5DCu, 0x2DE5E4u)) {
        return;
    }
    ctx->pc = 0x2DE5E4u;
label_2de5e4:
    // 0x2de5e4: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x2de5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
label_2de5e8:
    // 0x2de5e8: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2de5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
label_2de5ec:
    // 0x2de5ec: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x2de5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_2de5f0:
    // 0x2de5f0: 0xae150058  sw          $s5, 0x58($s0)
    ctx->pc = 0x2de5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 21));
label_2de5f4:
    // 0x2de5f4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2de5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_2de5f8:
    // 0x2de5f8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2de5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_2de5fc:
    // 0x2de5fc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2de5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_2de600:
    // 0x2de600: 0xa200001c  sb          $zero, 0x1C($s0)
    ctx->pc = 0x2de600u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 0));
label_2de604:
    // 0x2de604: 0xa200001d  sb          $zero, 0x1D($s0)
    ctx->pc = 0x2de604u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 29), (uint8_t)GPR_U32(ctx, 0));
label_2de608:
    // 0x2de608: 0xa2000028  sb          $zero, 0x28($s0)
    ctx->pc = 0x2de608u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 0));
label_2de60c:
    // 0x2de60c: 0xa2000029  sb          $zero, 0x29($s0)
    ctx->pc = 0x2de60cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 0));
label_2de610:
    // 0x2de610: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2de610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_2de614:
    // 0x2de614: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2de614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_2de618:
    // 0x2de618: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x2de618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2de61c:
    // 0x2de61c: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x2de61cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2de620:
    // 0x2de620: 0x6a43000f  ldl         $v1, 0xF($s2)
    ctx->pc = 0x2de620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2de624:
    // 0x2de624: 0x6e430008  ldr         $v1, 0x8($s2)
    ctx->pc = 0x2de624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2de628:
    // 0x2de628: 0x6a440017  ldl         $a0, 0x17($s2)
    ctx->pc = 0x2de628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2de62c:
    // 0x2de62c: 0x6e440010  ldr         $a0, 0x10($s2)
    ctx->pc = 0x2de62cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2de630:
    // 0x2de630: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x2de630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_2de634:
    // 0x2de634: 0xb2020017  sdl         $v0, 0x17($s0)
    ctx->pc = 0x2de634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2de638:
    // 0x2de638: 0xb6020010  sdr         $v0, 0x10($s0)
    ctx->pc = 0x2de638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2de63c:
    // 0x2de63c: 0xb203001f  sdl         $v1, 0x1F($s0)
    ctx->pc = 0x2de63cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2de640:
    // 0x2de640: 0xb6030018  sdr         $v1, 0x18($s0)
    ctx->pc = 0x2de640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2de644:
    // 0x2de644: 0xb2040027  sdl         $a0, 0x27($s0)
    ctx->pc = 0x2de644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2de648:
    // 0x2de648: 0xb6040020  sdr         $a0, 0x20($s0)
    ctx->pc = 0x2de648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2de64c:
    // 0x2de64c: 0xae050028  sw          $a1, 0x28($s0)
    ctx->pc = 0x2de64cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 5));
label_2de650:
    // 0x2de650: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2de650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2de654:
    // 0x2de654: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_2de658:
    if (ctx->pc == 0x2DE658u) {
        ctx->pc = 0x2DE658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE654u;
        // 0x2de658: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE65Cu;
        goto label_2de65c;
    }
    ctx->pc = 0x2DE654u;
    {
        const bool branch_taken_0x2de654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de654) {
            ctx->pc = 0x2DE658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE654u;
            // 0x2de658: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE690u;
            goto label_2de690;
        }
    }
    ctx->pc = 0x2DE65Cu;
label_2de65c:
    // 0x2de65c: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x2de65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2de660:
    // 0x2de660: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_2de664:
    if (ctx->pc == 0x2DE664u) {
        ctx->pc = 0x2DE664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE660u;
        // 0x2de664: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE668u;
        goto label_2de668;
    }
    ctx->pc = 0x2DE660u;
    {
        const bool branch_taken_0x2de660 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de660) {
            ctx->pc = 0x2DE664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE660u;
            // 0x2de664: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE690u;
            goto label_2de690;
        }
    }
    ctx->pc = 0x2DE668u;
label_2de668:
    // 0x2de668: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2de668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2de66c:
    // 0x2de66c: 0xc0b7076  jal         func_2DC1D8
label_2de670:
    if (ctx->pc == 0x2DE670u) {
        ctx->pc = 0x2DE670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE66Cu;
        // 0x2de670: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE674u;
        goto label_2de674;
    }
    ctx->pc = 0x2DE66Cu;
    SET_GPR_U32(ctx, 31, 0x2DE674u);
    ctx->pc = 0x2DE670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE66Cu;
    // 0x2de670: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC1D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC1D8u, 0x2DE66Cu, 0x2DE674u)) {
        return;
    }
    ctx->pc = 0x2DE674u;
label_2de674:
    // 0x2de674: 0x1040ff95  beqz        $v0, . + 4 + (-0x6B << 2)
label_2de678:
    if (ctx->pc == 0x2DE678u) {
        ctx->pc = 0x2DE678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE674u;
        // 0x2de678: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE67Cu;
        goto label_2de67c;
    }
    ctx->pc = 0x2DE674u;
    {
        const bool branch_taken_0x2de674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE674u;
        // 0x2de678: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de674) {
            ctx->pc = 0x2DE4CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de4cc;
        }
    }
    ctx->pc = 0x2DE67Cu;
label_2de67c:
    // 0x2de67c: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x2de67cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2de680:
    // 0x2de680: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2de680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de684:
    // 0x2de684: 0xc075fdc  jal         func_1D7F70
label_2de688:
    if (ctx->pc == 0x2DE688u) {
        ctx->pc = 0x2DE688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE684u;
        // 0x2de688: 0x8e450010  lw          $a1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE68Cu;
        goto label_2de68c;
    }
    ctx->pc = 0x2DE684u;
    SET_GPR_U32(ctx, 31, 0x2DE68Cu);
    ctx->pc = 0x2DE688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE684u;
    // 0x2de688: 0x8e450010  lw          $a1, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2DE684u, 0x2DE68Cu)) {
        return;
    }
    ctx->pc = 0x2DE68Cu;
label_2de68c:
    // 0x2de68c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x2de68cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_2de690:
    // 0x2de690: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2de690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_2de694:
    // 0x2de694: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x2de694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_2de698:
    // 0x2de698: 0xa2000038  sb          $zero, 0x38($s0)
    ctx->pc = 0x2de698u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 0));
label_2de69c:
    // 0x2de69c: 0xa2000039  sb          $zero, 0x39($s0)
    ctx->pc = 0x2de69cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 57), (uint8_t)GPR_U32(ctx, 0));
label_2de6a0:
    // 0x2de6a0: 0xa2000044  sb          $zero, 0x44($s0)
    ctx->pc = 0x2de6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 0));
label_2de6a4:
    // 0x2de6a4: 0xa2000045  sb          $zero, 0x45($s0)
    ctx->pc = 0x2de6a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 0));
label_2de6a8:
    // 0x2de6a8: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x2de6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_2de6ac:
    // 0x2de6ac: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
label_2de6b0:
    if (ctx->pc == 0x2DE6B0u) {
        ctx->pc = 0x2DE6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE6ACu;
        // 0x2de6b0: 0xae000040  sw          $zero, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE6B4u;
        goto label_2de6b4;
    }
    ctx->pc = 0x2DE6ACu;
    {
        const bool branch_taken_0x2de6ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE6ACu;
        // 0x2de6b0: 0xae000040  sw          $zero, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de6ac) {
            ctx->pc = 0x2DE728u;
            goto label_2de728;
        }
    }
    ctx->pc = 0x2DE6B4u;
label_2de6b4:
    // 0x2de6b4: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x2de6b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2de6b8:
    // 0x2de6b8: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x2de6b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2de6bc:
    // 0x2de6bc: 0x6a23000f  ldl         $v1, 0xF($s1)
    ctx->pc = 0x2de6bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2de6c0:
    // 0x2de6c0: 0x6e230008  ldr         $v1, 0x8($s1)
    ctx->pc = 0x2de6c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2de6c4:
    // 0x2de6c4: 0x6a240017  ldl         $a0, 0x17($s1)
    ctx->pc = 0x2de6c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2de6c8:
    // 0x2de6c8: 0x6e240010  ldr         $a0, 0x10($s1)
    ctx->pc = 0x2de6c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2de6cc:
    // 0x2de6cc: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x2de6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2de6d0:
    // 0x2de6d0: 0xb2020033  sdl         $v0, 0x33($s0)
    ctx->pc = 0x2de6d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2de6d4:
    // 0x2de6d4: 0xb602002c  sdr         $v0, 0x2C($s0)
    ctx->pc = 0x2de6d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2de6d8:
    // 0x2de6d8: 0xb203003b  sdl         $v1, 0x3B($s0)
    ctx->pc = 0x2de6d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2de6dc:
    // 0x2de6dc: 0xb6030034  sdr         $v1, 0x34($s0)
    ctx->pc = 0x2de6dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2de6e0:
    // 0x2de6e0: 0xb2040043  sdl         $a0, 0x43($s0)
    ctx->pc = 0x2de6e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2de6e4:
    // 0x2de6e4: 0xb604003c  sdr         $a0, 0x3C($s0)
    ctx->pc = 0x2de6e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2de6e8:
    // 0x2de6e8: 0xae050044  sw          $a1, 0x44($s0)
    ctx->pc = 0x2de6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 5));
label_2de6ec:
    // 0x2de6ec: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2de6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2de6f0:
    // 0x2de6f0: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_2de6f4:
    if (ctx->pc == 0x2DE6F4u) {
        ctx->pc = 0x2DE6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE6F0u;
        // 0x2de6f4: 0x92030039  lbu         $v1, 0x39($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE6F8u;
        goto label_2de6f8;
    }
    ctx->pc = 0x2DE6F0u;
    {
        const bool branch_taken_0x2de6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de6f0) {
            ctx->pc = 0x2DE6F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE6F0u;
            // 0x2de6f4: 0x92030039  lbu         $v1, 0x39($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE72Cu;
            goto label_2de72c;
        }
    }
    ctx->pc = 0x2DE6F8u;
label_2de6f8:
    // 0x2de6f8: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2de6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2de6fc:
    // 0x2de6fc: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_2de700:
    if (ctx->pc == 0x2DE700u) {
        ctx->pc = 0x2DE700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE6FCu;
        // 0x2de700: 0x92030039  lbu         $v1, 0x39($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE704u;
        goto label_2de704;
    }
    ctx->pc = 0x2DE6FCu;
    {
        const bool branch_taken_0x2de6fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de6fc) {
            ctx->pc = 0x2DE700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE6FCu;
            // 0x2de700: 0x92030039  lbu         $v1, 0x39($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE72Cu;
            goto label_2de72c;
        }
    }
    ctx->pc = 0x2DE704u;
label_2de704:
    // 0x2de704: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2de704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2de708:
    // 0x2de708: 0xc0b7076  jal         func_2DC1D8
label_2de70c:
    if (ctx->pc == 0x2DE70Cu) {
        ctx->pc = 0x2DE70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE708u;
        // 0x2de70c: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE710u;
        goto label_2de710;
    }
    ctx->pc = 0x2DE708u;
    SET_GPR_U32(ctx, 31, 0x2DE710u);
    ctx->pc = 0x2DE70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE708u;
    // 0x2de70c: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC1D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC1D8u, 0x2DE708u, 0x2DE710u)) {
        return;
    }
    ctx->pc = 0x2DE710u;
label_2de710:
    // 0x2de710: 0x1040ff6e  beqz        $v0, . + 4 + (-0x92 << 2)
label_2de714:
    if (ctx->pc == 0x2DE714u) {
        ctx->pc = 0x2DE714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE710u;
        // 0x2de714: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE718u;
        goto label_2de718;
    }
    ctx->pc = 0x2DE710u;
    {
        const bool branch_taken_0x2de710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE710u;
        // 0x2de714: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de710) {
            ctx->pc = 0x2DE4CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de4cc;
        }
    }
    ctx->pc = 0x2DE718u;
label_2de718:
    // 0x2de718: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x2de718u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2de71c:
    // 0x2de71c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2de71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de720:
    // 0x2de720: 0xc075fdc  jal         func_1D7F70
label_2de724:
    if (ctx->pc == 0x2DE724u) {
        ctx->pc = 0x2DE724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE720u;
        // 0x2de724: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE728u;
        goto label_2de728;
    }
    ctx->pc = 0x2DE720u;
    SET_GPR_U32(ctx, 31, 0x2DE728u);
    ctx->pc = 0x2DE724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE720u;
    // 0x2de724: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2DE720u, 0x2DE728u)) {
        return;
    }
    ctx->pc = 0x2DE728u;
label_2de728:
    // 0x2de728: 0x92030039  lbu         $v1, 0x39($s0)
    ctx->pc = 0x2de728u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
label_2de72c:
    // 0x2de72c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2de72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de730:
    // 0x2de730: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_2de734:
    if (ctx->pc == 0x2DE734u) {
        ctx->pc = 0x2DE734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE730u;
        // 0x2de734: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE738u;
        goto label_2de738;
    }
    ctx->pc = 0x2DE730u;
    {
        const bool branch_taken_0x2de730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2de730) {
            ctx->pc = 0x2DE734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE730u;
            // 0x2de734: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE75Cu;
            goto label_2de75c;
        }
    }
    ctx->pc = 0x2DE738u;
label_2de738:
    // 0x2de738: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x2de738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_2de73c:
    // 0x2de73c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2de740:
    if (ctx->pc == 0x2DE740u) {
        ctx->pc = 0x2DE740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE73Cu;
        // 0x2de740: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE744u;
        goto label_2de744;
    }
    ctx->pc = 0x2DE73Cu;
    {
        const bool branch_taken_0x2de73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE73Cu;
        // 0x2de740: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de73c) {
            ctx->pc = 0x2DE750u;
            goto label_2de750;
        }
    }
    ctx->pc = 0x2DE744u;
label_2de744:
    // 0x2de744: 0x32820002  andi        $v0, $s4, 0x2
    ctx->pc = 0x2de744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
label_2de748:
    // 0x2de748: 0x10000002  b           . + 4 + (0x2 << 2)
label_2de74c:
    if (ctx->pc == 0x2DE74Cu) {
        ctx->pc = 0x2DE74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE748u;
        // 0x2de74c: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE750u;
        goto label_2de750;
    }
    ctx->pc = 0x2DE748u;
    {
        const bool branch_taken_0x2de748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE748u;
        // 0x2de74c: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de748) {
            ctx->pc = 0x2DE754u;
            goto label_2de754;
        }
    }
    ctx->pc = 0x2DE750u;
label_2de750:
    // 0x2de750: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x2de750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_2de754:
    // 0x2de754: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2de754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_2de758:
    // 0x2de758: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2de758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2de75c:
    // 0x2de75c: 0x32830008  andi        $v1, $s4, 0x8
    ctx->pc = 0x2de75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
label_2de760:
    // 0x2de760: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2de760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2de764:
    // 0x2de764: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2de764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2de768:
    // 0x2de768: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2de768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_2de76c:
    // 0x2de76c: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x2de76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_2de770:
    // 0x2de770: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_2de774:
    if (ctx->pc == 0x2DE774u) {
        ctx->pc = 0x2DE774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE770u;
        // 0x2de774: 0x2602005c  addiu       $v0, $s0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE778u;
        goto label_2de778;
    }
    ctx->pc = 0x2DE770u;
    {
        const bool branch_taken_0x2de770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE770u;
        // 0x2de774: 0x2602005c  addiu       $v0, $s0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de770) {
            ctx->pc = 0x2DE77Cu;
            goto label_2de77c;
        }
    }
    ctx->pc = 0x2DE778u;
label_2de778:
    // 0x2de778: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x2de778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_2de77c:
    // 0x2de77c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2de77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2de780:
    // 0x2de780: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2de780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2de784:
    // 0x2de784: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2de788:
    if (ctx->pc == 0x2DE788u) {
        ctx->pc = 0x2DE788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE784u;
        // 0x2de788: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE78Cu;
        goto label_2de78c;
    }
    ctx->pc = 0x2DE784u;
    {
        const bool branch_taken_0x2de784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE784u;
        // 0x2de788: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de784) {
            ctx->pc = 0x2DE7ACu;
            goto label_2de7ac;
        }
    }
    ctx->pc = 0x2DE78Cu;
label_2de78c:
    // 0x2de78c: 0x40f809  jalr        $v0
label_2de790:
    if (ctx->pc == 0x2DE790u) {
        ctx->pc = 0x2DE790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE78Cu;
        // 0x2de790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE794u;
        goto label_2de794;
    }
    ctx->pc = 0x2DE78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DE794u);
        ctx->pc = 0x2DE790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE78Cu;
        // 0x2de790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE78Cu, 0x2DE794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DE794u;
label_2de794:
    // 0x2de794: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2de798:
    if (ctx->pc == 0x2DE798u) {
        ctx->pc = 0x2DE79Cu;
        goto label_2de79c;
    }
    ctx->pc = 0x2DE794u;
    {
        const bool branch_taken_0x2de794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de794) {
            ctx->pc = 0x2DE7ACu;
            goto label_2de7ac;
        }
    }
    ctx->pc = 0x2DE79Cu;
label_2de79c:
    // 0x2de79c: 0xc0b7cae  jal         func_2DF2B8
label_2de7a0:
    if (ctx->pc == 0x2DE7A0u) {
        ctx->pc = 0x2DE7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE79Cu;
        // 0x2de7a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE7A4u;
        goto label_2de7a4;
    }
    ctx->pc = 0x2DE79Cu;
    SET_GPR_U32(ctx, 31, 0x2DE7A4u);
    ctx->pc = 0x2DE7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE79Cu;
    // 0x2de7a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF2B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF2B8u, 0x2DE79Cu, 0x2DE7A4u)) {
        return;
    }
    ctx->pc = 0x2DE7A4u;
label_2de7a4:
    // 0x2de7a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2de7a8:
    if (ctx->pc == 0x2DE7A8u) {
        ctx->pc = 0x2DE7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE7A4u;
        // 0x2de7a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE7ACu;
        goto label_2de7ac;
    }
    ctx->pc = 0x2DE7A4u;
    {
        const bool branch_taken_0x2de7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE7A4u;
        // 0x2de7a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de7a4) {
            ctx->pc = 0x2DE7C4u;
            goto label_2de7c4;
        }
    }
    ctx->pc = 0x2DE7ACu;
label_2de7ac:
    // 0x2de7ac: 0xc0b74bc  jal         func_2DD2F0
label_2de7b0:
    if (ctx->pc == 0x2DE7B0u) {
        ctx->pc = 0x2DE7B4u;
        goto label_2de7b4;
    }
    ctx->pc = 0x2DE7ACu;
    SET_GPR_U32(ctx, 31, 0x2DE7B4u);
    ctx->pc = 0x2DD2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DD2F0u, 0x2DE7ACu, 0x2DE7B4u)) {
        return;
    }
    ctx->pc = 0x2DE7B4u;
label_2de7b4:
    // 0x2de7b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2de7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de7b8:
    // 0x2de7b8: 0xc0b74a0  jal         func_2DD280
label_2de7bc:
    if (ctx->pc == 0x2DE7BCu) {
        ctx->pc = 0x2DE7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE7B8u;
        // 0x2de7bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE7C0u;
        goto label_2de7c0;
    }
    ctx->pc = 0x2DE7B8u;
    SET_GPR_U32(ctx, 31, 0x2DE7C0u);
    ctx->pc = 0x2DE7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE7B8u;
    // 0x2de7bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DD280u, 0x2DE7B8u, 0x2DE7C0u)) {
        return;
    }
    ctx->pc = 0x2DE7C0u;
label_2de7c0:
    // 0x2de7c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2de7c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2de7c4:
    // 0x2de7c4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2de7c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2de7c8:
    // 0x2de7c8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2de7c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2de7cc:
    // 0x2de7cc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2de7ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2de7d0:
    // 0x2de7d0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2de7d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2de7d4:
    // 0x2de7d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2de7d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2de7d8:
    // 0x2de7d8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2de7d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2de7dc:
    // 0x2de7dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2de7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2de7e0:
    // 0x2de7e0: 0x3e00008  jr          $ra
label_2de7e4:
    if (ctx->pc == 0x2DE7E4u) {
        ctx->pc = 0x2DE7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE7E0u;
        // 0x2de7e4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE7E8u;
        goto label_2de7e8;
    }
    ctx->pc = 0x2DE7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE7E0u;
        // 0x2de7e4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE7E8u;
label_2de7e8:
    // 0x2de7e8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2de7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2de7ec:
    // 0x2de7ec: 0x0  nop
    ctx->pc = 0x2de7ecu;
    // NOP
    ctx->pc = 0x2de7f0u;
}
