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

// Function: sub_001074A0
// Address: 0x1074a0 - 0x1077c8
void sub_001074A0_0x1074a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001074A0_0x1074a0");
#endif

    switch (ctx->pc) {
        case 0x1074a0u: goto label_1074a0;
        case 0x1074a4u: goto label_1074a4;
        case 0x1074a8u: goto label_1074a8;
        case 0x1074acu: goto label_1074ac;
        case 0x1074b0u: goto label_1074b0;
        case 0x1074b4u: goto label_1074b4;
        case 0x1074b8u: goto label_1074b8;
        case 0x1074bcu: goto label_1074bc;
        case 0x1074c0u: goto label_1074c0;
        case 0x1074c4u: goto label_1074c4;
        case 0x1074c8u: goto label_1074c8;
        case 0x1074ccu: goto label_1074cc;
        case 0x1074d0u: goto label_1074d0;
        case 0x1074d4u: goto label_1074d4;
        case 0x1074d8u: goto label_1074d8;
        case 0x1074dcu: goto label_1074dc;
        case 0x1074e0u: goto label_1074e0;
        case 0x1074e4u: goto label_1074e4;
        case 0x1074e8u: goto label_1074e8;
        case 0x1074ecu: goto label_1074ec;
        case 0x1074f0u: goto label_1074f0;
        case 0x1074f4u: goto label_1074f4;
        case 0x1074f8u: goto label_1074f8;
        case 0x1074fcu: goto label_1074fc;
        case 0x107500u: goto label_107500;
        case 0x107504u: goto label_107504;
        case 0x107508u: goto label_107508;
        case 0x10750cu: goto label_10750c;
        case 0x107510u: goto label_107510;
        case 0x107514u: goto label_107514;
        case 0x107518u: goto label_107518;
        case 0x10751cu: goto label_10751c;
        case 0x107520u: goto label_107520;
        case 0x107524u: goto label_107524;
        case 0x107528u: goto label_107528;
        case 0x10752cu: goto label_10752c;
        case 0x107530u: goto label_107530;
        case 0x107534u: goto label_107534;
        case 0x107538u: goto label_107538;
        case 0x10753cu: goto label_10753c;
        case 0x107540u: goto label_107540;
        case 0x107544u: goto label_107544;
        case 0x107548u: goto label_107548;
        case 0x10754cu: goto label_10754c;
        case 0x107550u: goto label_107550;
        case 0x107554u: goto label_107554;
        case 0x107558u: goto label_107558;
        case 0x10755cu: goto label_10755c;
        case 0x107560u: goto label_107560;
        case 0x107564u: goto label_107564;
        case 0x107568u: goto label_107568;
        case 0x10756cu: goto label_10756c;
        case 0x107570u: goto label_107570;
        case 0x107574u: goto label_107574;
        case 0x107578u: goto label_107578;
        case 0x10757cu: goto label_10757c;
        case 0x107580u: goto label_107580;
        case 0x107584u: goto label_107584;
        case 0x107588u: goto label_107588;
        case 0x10758cu: goto label_10758c;
        case 0x107590u: goto label_107590;
        case 0x107594u: goto label_107594;
        case 0x107598u: goto label_107598;
        case 0x10759cu: goto label_10759c;
        case 0x1075a0u: goto label_1075a0;
        case 0x1075a4u: goto label_1075a4;
        case 0x1075a8u: goto label_1075a8;
        case 0x1075acu: goto label_1075ac;
        case 0x1075b0u: goto label_1075b0;
        case 0x1075b4u: goto label_1075b4;
        case 0x1075b8u: goto label_1075b8;
        case 0x1075bcu: goto label_1075bc;
        case 0x1075c0u: goto label_1075c0;
        case 0x1075c4u: goto label_1075c4;
        case 0x1075c8u: goto label_1075c8;
        case 0x1075ccu: goto label_1075cc;
        case 0x1075d0u: goto label_1075d0;
        case 0x1075d4u: goto label_1075d4;
        case 0x1075d8u: goto label_1075d8;
        case 0x1075dcu: goto label_1075dc;
        case 0x1075e0u: goto label_1075e0;
        case 0x1075e4u: goto label_1075e4;
        case 0x1075e8u: goto label_1075e8;
        case 0x1075ecu: goto label_1075ec;
        case 0x1075f0u: goto label_1075f0;
        case 0x1075f4u: goto label_1075f4;
        case 0x1075f8u: goto label_1075f8;
        case 0x1075fcu: goto label_1075fc;
        case 0x107600u: goto label_107600;
        case 0x107604u: goto label_107604;
        case 0x107608u: goto label_107608;
        case 0x10760cu: goto label_10760c;
        case 0x107610u: goto label_107610;
        case 0x107614u: goto label_107614;
        case 0x107618u: goto label_107618;
        case 0x10761cu: goto label_10761c;
        case 0x107620u: goto label_107620;
        case 0x107624u: goto label_107624;
        case 0x107628u: goto label_107628;
        case 0x10762cu: goto label_10762c;
        case 0x107630u: goto label_107630;
        case 0x107634u: goto label_107634;
        case 0x107638u: goto label_107638;
        case 0x10763cu: goto label_10763c;
        case 0x107640u: goto label_107640;
        case 0x107644u: goto label_107644;
        case 0x107648u: goto label_107648;
        case 0x10764cu: goto label_10764c;
        case 0x107650u: goto label_107650;
        case 0x107654u: goto label_107654;
        case 0x107658u: goto label_107658;
        case 0x10765cu: goto label_10765c;
        case 0x107660u: goto label_107660;
        case 0x107664u: goto label_107664;
        case 0x107668u: goto label_107668;
        case 0x10766cu: goto label_10766c;
        case 0x107670u: goto label_107670;
        case 0x107674u: goto label_107674;
        case 0x107678u: goto label_107678;
        case 0x10767cu: goto label_10767c;
        case 0x107680u: goto label_107680;
        case 0x107684u: goto label_107684;
        case 0x107688u: goto label_107688;
        case 0x10768cu: goto label_10768c;
        case 0x107690u: goto label_107690;
        case 0x107694u: goto label_107694;
        case 0x107698u: goto label_107698;
        case 0x10769cu: goto label_10769c;
        case 0x1076a0u: goto label_1076a0;
        case 0x1076a4u: goto label_1076a4;
        case 0x1076a8u: goto label_1076a8;
        case 0x1076acu: goto label_1076ac;
        case 0x1076b0u: goto label_1076b0;
        case 0x1076b4u: goto label_1076b4;
        case 0x1076b8u: goto label_1076b8;
        case 0x1076bcu: goto label_1076bc;
        case 0x1076c0u: goto label_1076c0;
        case 0x1076c4u: goto label_1076c4;
        case 0x1076c8u: goto label_1076c8;
        case 0x1076ccu: goto label_1076cc;
        case 0x1076d0u: goto label_1076d0;
        case 0x1076d4u: goto label_1076d4;
        case 0x1076d8u: goto label_1076d8;
        case 0x1076dcu: goto label_1076dc;
        case 0x1076e0u: goto label_1076e0;
        case 0x1076e4u: goto label_1076e4;
        case 0x1076e8u: goto label_1076e8;
        case 0x1076ecu: goto label_1076ec;
        case 0x1076f0u: goto label_1076f0;
        case 0x1076f4u: goto label_1076f4;
        case 0x1076f8u: goto label_1076f8;
        case 0x1076fcu: goto label_1076fc;
        case 0x107700u: goto label_107700;
        case 0x107704u: goto label_107704;
        case 0x107708u: goto label_107708;
        case 0x10770cu: goto label_10770c;
        case 0x107710u: goto label_107710;
        case 0x107714u: goto label_107714;
        case 0x107718u: goto label_107718;
        case 0x10771cu: goto label_10771c;
        case 0x107720u: goto label_107720;
        case 0x107724u: goto label_107724;
        case 0x107728u: goto label_107728;
        case 0x10772cu: goto label_10772c;
        case 0x107730u: goto label_107730;
        case 0x107734u: goto label_107734;
        case 0x107738u: goto label_107738;
        case 0x10773cu: goto label_10773c;
        case 0x107740u: goto label_107740;
        case 0x107744u: goto label_107744;
        case 0x107748u: goto label_107748;
        case 0x10774cu: goto label_10774c;
        case 0x107750u: goto label_107750;
        case 0x107754u: goto label_107754;
        case 0x107758u: goto label_107758;
        case 0x10775cu: goto label_10775c;
        case 0x107760u: goto label_107760;
        case 0x107764u: goto label_107764;
        case 0x107768u: goto label_107768;
        case 0x10776cu: goto label_10776c;
        case 0x107770u: goto label_107770;
        case 0x107774u: goto label_107774;
        case 0x107778u: goto label_107778;
        case 0x10777cu: goto label_10777c;
        case 0x107780u: goto label_107780;
        case 0x107784u: goto label_107784;
        case 0x107788u: goto label_107788;
        case 0x10778cu: goto label_10778c;
        case 0x107790u: goto label_107790;
        case 0x107794u: goto label_107794;
        case 0x107798u: goto label_107798;
        case 0x10779cu: goto label_10779c;
        case 0x1077a0u: goto label_1077a0;
        case 0x1077a4u: goto label_1077a4;
        case 0x1077a8u: goto label_1077a8;
        case 0x1077acu: goto label_1077ac;
        case 0x1077b0u: goto label_1077b0;
        case 0x1077b4u: goto label_1077b4;
        case 0x1077b8u: goto label_1077b8;
        case 0x1077bcu: goto label_1077bc;
        case 0x1077c0u: goto label_1077c0;
        case 0x1077c4u: goto label_1077c4;
        default: break;
    }

    ctx->pc = 0x1074a0u;

label_1074a0:
    // 0x1074a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1074a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1074a4:
    // 0x1074a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1074a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1074a8:
    // 0x1074a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1074a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1074ac:
    // 0x1074ac: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1074acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1074b0:
    // 0x1074b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1074b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1074b4:
    // 0x1074b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1074b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1074b8:
    // 0x1074b8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1074b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1074bc:
    // 0x1074bc: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
label_1074c0:
    if (ctx->pc == 0x1074C0u) {
        ctx->pc = 0x1074C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074BCu;
        // 0x1074c0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1074C4u;
        goto label_1074c4;
    }
    ctx->pc = 0x1074BCu;
    {
        const bool branch_taken_0x1074bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1074C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074BCu;
        // 0x1074c0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1074bc) {
            ctx->pc = 0x107588u;
            goto label_107588;
        }
    }
    ctx->pc = 0x1074C4u;
label_1074c4:
    // 0x1074c4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1074c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1074c8:
    // 0x1074c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1074cc:
    if (ctx->pc == 0x1074CCu) {
        ctx->pc = 0x1074CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074C8u;
        // 0x1074cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1074D0u;
        goto label_1074d0;
    }
    ctx->pc = 0x1074C8u;
    {
        const bool branch_taken_0x1074c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1074CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074C8u;
        // 0x1074cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1074c8) {
            ctx->pc = 0x1074E0u;
            goto label_1074e0;
        }
    }
    ctx->pc = 0x1074D0u;
label_1074d0:
    // 0x1074d0: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_1074d4:
    if (ctx->pc == 0x1074D4u) {
        ctx->pc = 0x1074D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074D0u;
        // 0x1074d4: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1074D8u;
        goto label_1074d8;
    }
    ctx->pc = 0x1074D0u;
    {
        const bool branch_taken_0x1074d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1074d0) {
            ctx->pc = 0x1074D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1074D0u;
            // 0x1074d4: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1074F8u;
            goto label_1074f8;
        }
    }
    ctx->pc = 0x1074D8u;
label_1074d8:
    // 0x1074d8: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_1074dc:
    if (ctx->pc == 0x1074DCu) {
        ctx->pc = 0x1074DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074D8u;
        // 0x1074dc: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1074E0u;
        goto label_1074e0;
    }
    ctx->pc = 0x1074D8u;
    {
        const bool branch_taken_0x1074d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1074DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074D8u;
        // 0x1074dc: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1074d8) {
            ctx->pc = 0x1077A0u;
            goto label_1077a0;
        }
    }
    ctx->pc = 0x1074E0u;
label_1074e0:
    // 0x1074e0: 0x10620057  beq         $v1, $v0, . + 4 + (0x57 << 2)
label_1074e4:
    if (ctx->pc == 0x1074E4u) {
        ctx->pc = 0x1074E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074E0u;
        // 0x1074e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1074E8u;
        goto label_1074e8;
    }
    ctx->pc = 0x1074E0u;
    {
        const bool branch_taken_0x1074e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1074E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074E0u;
        // 0x1074e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1074e0) {
            ctx->pc = 0x107640u;
            goto label_107640;
        }
    }
    ctx->pc = 0x1074E8u;
label_1074e8:
    // 0x1074e8: 0x5062007f  beql        $v1, $v0, . + 4 + (0x7F << 2)
label_1074ec:
    if (ctx->pc == 0x1074ECu) {
        ctx->pc = 0x1074ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074E8u;
        // 0x1074ec: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1074F0u;
        goto label_1074f0;
    }
    ctx->pc = 0x1074E8u;
    {
        const bool branch_taken_0x1074e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1074e8) {
            ctx->pc = 0x1074ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1074E8u;
            // 0x1074ec: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1076E8u;
            goto label_1076e8;
        }
    }
    ctx->pc = 0x1074F0u;
label_1074f0:
    // 0x1074f0: 0x100000ab  b           . + 4 + (0xAB << 2)
label_1074f4:
    if (ctx->pc == 0x1074F4u) {
        ctx->pc = 0x1074F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074F0u;
        // 0x1074f4: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1074F8u;
        goto label_1074f8;
    }
    ctx->pc = 0x1074F0u;
    {
        const bool branch_taken_0x1074f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1074F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074F0u;
        // 0x1074f4: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1074f0) {
            ctx->pc = 0x1077A0u;
            goto label_1077a0;
        }
    }
    ctx->pc = 0x1074F8u;
label_1074f8:
    // 0x1074f8: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
label_1074fc:
    if (ctx->pc == 0x1074FCu) {
        ctx->pc = 0x1074FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074F8u;
        // 0x1074fc: 0xe6140028  swc1        $f20, 0x28($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x107500u;
        goto label_107500;
    }
    ctx->pc = 0x1074F8u;
    {
        const bool branch_taken_0x1074f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1074FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074F8u;
        // 0x1074fc: 0xe6140028  swc1        $f20, 0x28($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1074f8) {
            ctx->pc = 0x107634u;
            goto label_107634;
        }
    }
    ctx->pc = 0x107500u;
label_107500:
    // 0x107500: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x107500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_107504:
    // 0x107504: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_107508:
    if (ctx->pc == 0x107508u) {
        ctx->pc = 0x10750Cu;
        goto label_10750c;
    }
    ctx->pc = 0x107504u;
    {
        const bool branch_taken_0x107504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107504) {
            ctx->pc = 0x107520u;
            goto label_107520;
        }
    }
    ctx->pc = 0x10750Cu;
label_10750c:
    // 0x10750c: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x10750cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_107510:
    // 0x107510: 0xc09d926  jal         func_276498
label_107514:
    if (ctx->pc == 0x107514u) {
        ctx->pc = 0x107514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107510u;
        // 0x107514: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107518u;
        goto label_107518;
    }
    ctx->pc = 0x107510u;
    SET_GPR_U32(ctx, 31, 0x107518u);
    ctx->pc = 0x107514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107510u;
    // 0x107514: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x107510u, 0x107518u)) {
        return;
    }
    ctx->pc = 0x107518u;
label_107518:
    // 0x107518: 0xc0942f2  jal         func_250BC8
label_10751c:
    if (ctx->pc == 0x10751Cu) {
        ctx->pc = 0x10751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107518u;
        // 0x10751c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107520u;
        goto label_107520;
    }
    ctx->pc = 0x107518u;
    SET_GPR_U32(ctx, 31, 0x107520u);
    ctx->pc = 0x10751Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107518u;
    // 0x10751c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250BC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x250BC8u, 0x107518u, 0x107520u)) {
        return;
    }
    ctx->pc = 0x107520u;
label_107520:
    // 0x107520: 0xc07600c  jal         func_1D8030
label_107524:
    if (ctx->pc == 0x107524u) {
        ctx->pc = 0x107528u;
        goto label_107528;
    }
    ctx->pc = 0x107520u;
    SET_GPR_U32(ctx, 31, 0x107528u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x107520u, 0x107528u)) {
        return;
    }
    ctx->pc = 0x107528u;
label_107528:
    // 0x107528: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x107528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_10752c:
    // 0x10752c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x10752cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_107530:
    // 0x107530: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x107530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_107534:
    // 0x107534: 0xc077b78  jal         func_1DEDE0
label_107538:
    if (ctx->pc == 0x107538u) {
        ctx->pc = 0x107538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107534u;
        // 0x107538: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10753Cu;
        goto label_10753c;
    }
    ctx->pc = 0x107534u;
    SET_GPR_U32(ctx, 31, 0x10753Cu);
    ctx->pc = 0x107538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107534u;
    // 0x107538: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEDE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DEDE0u, 0x107534u, 0x10753Cu)) {
        return;
    }
    ctx->pc = 0x10753Cu;
label_10753c:
    // 0x10753c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x10753cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_107540:
    // 0x107540: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_107544:
    if (ctx->pc == 0x107544u) {
        ctx->pc = 0x107544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107540u;
        // 0x107544: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107548u;
        goto label_107548;
    }
    ctx->pc = 0x107540u;
    {
        const bool branch_taken_0x107540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107540) {
            ctx->pc = 0x107544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107540u;
            // 0x107544: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107558u;
            goto label_107558;
        }
    }
    ctx->pc = 0x107548u;
label_107548:
    // 0x107548: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x107548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_10754c:
    // 0x10754c: 0xc076e48  jal         func_1DB920
label_107550:
    if (ctx->pc == 0x107550u) {
        ctx->pc = 0x107550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10754Cu;
        // 0x107550: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107554u;
        goto label_107554;
    }
    ctx->pc = 0x10754Cu;
    SET_GPR_U32(ctx, 31, 0x107554u);
    ctx->pc = 0x107550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10754Cu;
    // 0x107550: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB920u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DB920u, 0x10754Cu, 0x107554u)) {
        return;
    }
    ctx->pc = 0x107554u;
label_107554:
    // 0x107554: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x107554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_107558:
    // 0x107558: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_10755c:
    if (ctx->pc == 0x10755Cu) {
        ctx->pc = 0x10755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107558u;
        // 0x10755c: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107560u;
        goto label_107560;
    }
    ctx->pc = 0x107558u;
    {
        const bool branch_taken_0x107558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107558) {
            ctx->pc = 0x10755Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107558u;
            // 0x10755c: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107570u;
            goto label_107570;
        }
    }
    ctx->pc = 0x107560u;
label_107560:
    // 0x107560: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x107560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_107564:
    // 0x107564: 0xc076e86  jal         func_1DBA18
label_107568:
    if (ctx->pc == 0x107568u) {
        ctx->pc = 0x107568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107564u;
        // 0x107568: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10756Cu;
        goto label_10756c;
    }
    ctx->pc = 0x107564u;
    SET_GPR_U32(ctx, 31, 0x10756Cu);
    ctx->pc = 0x107568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107564u;
    // 0x107568: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBA18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DBA18u, 0x107564u, 0x10756Cu)) {
        return;
    }
    ctx->pc = 0x10756Cu;
label_10756c:
    // 0x10756c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x10756cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_107570:
    // 0x107570: 0x10800031  beqz        $a0, . + 4 + (0x31 << 2)
label_107574:
    if (ctx->pc == 0x107574u) {
        ctx->pc = 0x107574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107570u;
        // 0x107574: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107578u;
        goto label_107578;
    }
    ctx->pc = 0x107570u;
    {
        const bool branch_taken_0x107570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107570u;
        // 0x107574: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107570) {
            ctx->pc = 0x107638u;
            goto label_107638;
        }
    }
    ctx->pc = 0x107578u;
label_107578:
    // 0x107578: 0xc07b656  jal         func_1ED958
label_10757c:
    if (ctx->pc == 0x10757Cu) {
        ctx->pc = 0x10757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107578u;
        // 0x10757c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107580u;
        goto label_107580;
    }
    ctx->pc = 0x107578u;
    SET_GPR_U32(ctx, 31, 0x107580u);
    ctx->pc = 0x10757Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107578u;
    // 0x10757c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ED958u, 0x107578u, 0x107580u)) {
        return;
    }
    ctx->pc = 0x107580u;
label_107580:
    // 0x107580: 0x1000002d  b           . + 4 + (0x2D << 2)
label_107584:
    if (ctx->pc == 0x107584u) {
        ctx->pc = 0x107584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107580u;
        // 0x107584: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107588u;
        goto label_107588;
    }
    ctx->pc = 0x107580u;
    {
        const bool branch_taken_0x107580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107580u;
        // 0x107584: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107580) {
            ctx->pc = 0x107638u;
            goto label_107638;
        }
    }
    ctx->pc = 0x107588u;
label_107588:
    // 0x107588: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x107588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_10758c:
    // 0x10758c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_107590:
    if (ctx->pc == 0x107590u) {
        ctx->pc = 0x107590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10758Cu;
        // 0x107590: 0xe6140028  swc1        $f20, 0x28($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x107594u;
        goto label_107594;
    }
    ctx->pc = 0x10758Cu;
    {
        const bool branch_taken_0x10758c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10758Cu;
        // 0x107590: 0xe6140028  swc1        $f20, 0x28($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10758c) {
            ctx->pc = 0x107634u;
            goto label_107634;
        }
    }
    ctx->pc = 0x107594u;
label_107594:
    // 0x107594: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x107594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_107598:
    // 0x107598: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_10759c:
    if (ctx->pc == 0x10759Cu) {
        ctx->pc = 0x1075A0u;
        goto label_1075a0;
    }
    ctx->pc = 0x107598u;
    {
        const bool branch_taken_0x107598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107598) {
            ctx->pc = 0x1075B4u;
            goto label_1075b4;
        }
    }
    ctx->pc = 0x1075A0u;
label_1075a0:
    // 0x1075a0: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x1075a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_1075a4:
    // 0x1075a4: 0xc09d926  jal         func_276498
label_1075a8:
    if (ctx->pc == 0x1075A8u) {
        ctx->pc = 0x1075A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1075A4u;
        // 0x1075a8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1075ACu;
        goto label_1075ac;
    }
    ctx->pc = 0x1075A4u;
    SET_GPR_U32(ctx, 31, 0x1075ACu);
    ctx->pc = 0x1075A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1075A4u;
    // 0x1075a8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x1075A4u, 0x1075ACu)) {
        return;
    }
    ctx->pc = 0x1075ACu;
label_1075ac:
    // 0x1075ac: 0xc0942f2  jal         func_250BC8
label_1075b0:
    if (ctx->pc == 0x1075B0u) {
        ctx->pc = 0x1075B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1075ACu;
        // 0x1075b0: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1075B4u;
        goto label_1075b4;
    }
    ctx->pc = 0x1075ACu;
    SET_GPR_U32(ctx, 31, 0x1075B4u);
    ctx->pc = 0x1075B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1075ACu;
    // 0x1075b0: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250BC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x250BC8u, 0x1075ACu, 0x1075B4u)) {
        return;
    }
    ctx->pc = 0x1075B4u;
label_1075b4:
    // 0x1075b4: 0xc07600c  jal         func_1D8030
label_1075b8:
    if (ctx->pc == 0x1075B8u) {
        ctx->pc = 0x1075BCu;
        goto label_1075bc;
    }
    ctx->pc = 0x1075B4u;
    SET_GPR_U32(ctx, 31, 0x1075BCu);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x1075B4u, 0x1075BCu)) {
        return;
    }
    ctx->pc = 0x1075BCu;
label_1075bc:
    // 0x1075bc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1075bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1075c0:
    // 0x1075c0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1075c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1075c4:
    // 0x1075c4: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1075c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1075c8:
    // 0x1075c8: 0xc077b78  jal         func_1DEDE0
label_1075cc:
    if (ctx->pc == 0x1075CCu) {
        ctx->pc = 0x1075CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1075C8u;
        // 0x1075cc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1075D0u;
        goto label_1075d0;
    }
    ctx->pc = 0x1075C8u;
    SET_GPR_U32(ctx, 31, 0x1075D0u);
    ctx->pc = 0x1075CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1075C8u;
    // 0x1075cc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEDE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DEDE0u, 0x1075C8u, 0x1075D0u)) {
        return;
    }
    ctx->pc = 0x1075D0u;
label_1075d0:
    // 0x1075d0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1075d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1075d4:
    // 0x1075d4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1075d8:
    if (ctx->pc == 0x1075D8u) {
        ctx->pc = 0x1075D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1075D4u;
        // 0x1075d8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1075DCu;
        goto label_1075dc;
    }
    ctx->pc = 0x1075D4u;
    {
        const bool branch_taken_0x1075d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1075d4) {
            ctx->pc = 0x1075D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1075D4u;
            // 0x1075d8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1075ECu;
            goto label_1075ec;
        }
    }
    ctx->pc = 0x1075DCu;
label_1075dc:
    // 0x1075dc: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1075dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1075e0:
    // 0x1075e0: 0xc076e48  jal         func_1DB920
label_1075e4:
    if (ctx->pc == 0x1075E4u) {
        ctx->pc = 0x1075E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1075E0u;
        // 0x1075e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1075E8u;
        goto label_1075e8;
    }
    ctx->pc = 0x1075E0u;
    SET_GPR_U32(ctx, 31, 0x1075E8u);
    ctx->pc = 0x1075E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1075E0u;
    // 0x1075e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB920u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DB920u, 0x1075E0u, 0x1075E8u)) {
        return;
    }
    ctx->pc = 0x1075E8u;
label_1075e8:
    // 0x1075e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1075e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1075ec:
    // 0x1075ec: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1075f0:
    if (ctx->pc == 0x1075F0u) {
        ctx->pc = 0x1075F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1075ECu;
        // 0x1075f0: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1075F4u;
        goto label_1075f4;
    }
    ctx->pc = 0x1075ECu;
    {
        const bool branch_taken_0x1075ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1075ec) {
            ctx->pc = 0x1075F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1075ECu;
            // 0x1075f0: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107604u;
            goto label_107604;
        }
    }
    ctx->pc = 0x1075F4u;
label_1075f4:
    // 0x1075f4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1075f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1075f8:
    // 0x1075f8: 0xc076e86  jal         func_1DBA18
label_1075fc:
    if (ctx->pc == 0x1075FCu) {
        ctx->pc = 0x1075FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1075F8u;
        // 0x1075fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107600u;
        goto label_107600;
    }
    ctx->pc = 0x1075F8u;
    SET_GPR_U32(ctx, 31, 0x107600u);
    ctx->pc = 0x1075FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1075F8u;
    // 0x1075fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBA18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DBA18u, 0x1075F8u, 0x107600u)) {
        return;
    }
    ctx->pc = 0x107600u;
label_107600:
    // 0x107600: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x107600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_107604:
    // 0x107604: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_107608:
    if (ctx->pc == 0x107608u) {
        ctx->pc = 0x107608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107604u;
        // 0x107608: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10760Cu;
        goto label_10760c;
    }
    ctx->pc = 0x107604u;
    {
        const bool branch_taken_0x107604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x107604) {
            ctx->pc = 0x107608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107604u;
            // 0x107608: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107618u;
            goto label_107618;
        }
    }
    ctx->pc = 0x10760Cu;
label_10760c:
    // 0x10760c: 0xc07b656  jal         func_1ED958
label_107610:
    if (ctx->pc == 0x107610u) {
        ctx->pc = 0x107610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10760Cu;
        // 0x107610: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107614u;
        goto label_107614;
    }
    ctx->pc = 0x10760Cu;
    SET_GPR_U32(ctx, 31, 0x107614u);
    ctx->pc = 0x107610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10760Cu;
    // 0x107610: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ED958u, 0x10760Cu, 0x107614u)) {
        return;
    }
    ctx->pc = 0x107614u;
label_107614:
    // 0x107614: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x107614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_107618:
    // 0x107618: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_10761c:
    if (ctx->pc == 0x10761Cu) {
        ctx->pc = 0x10761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107618u;
        // 0x10761c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107620u;
        goto label_107620;
    }
    ctx->pc = 0x107618u;
    {
        const bool branch_taken_0x107618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107618u;
        // 0x10761c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107618) {
            ctx->pc = 0x107638u;
            goto label_107638;
        }
    }
    ctx->pc = 0x107620u;
label_107620:
    // 0x107620: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x107620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_107624:
    // 0x107624: 0x5080005d  beql        $a0, $zero, . + 4 + (0x5D << 2)
label_107628:
    if (ctx->pc == 0x107628u) {
        ctx->pc = 0x107628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107624u;
        // 0x107628: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10762Cu;
        goto label_10762c;
    }
    ctx->pc = 0x107624u;
    {
        const bool branch_taken_0x107624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x107624) {
            ctx->pc = 0x107628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107624u;
            // 0x107628: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10779Cu;
            goto label_10779c;
        }
    }
    ctx->pc = 0x10762Cu;
label_10762c:
    // 0x10762c: 0xc07b58a  jal         func_1ED628
label_107630:
    if (ctx->pc == 0x107630u) {
        ctx->pc = 0x107634u;
        goto label_107634;
    }
    ctx->pc = 0x10762Cu;
    SET_GPR_U32(ctx, 31, 0x107634u);
    ctx->pc = 0x1ED628u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ED628u, 0x10762Cu, 0x107634u)) {
        return;
    }
    ctx->pc = 0x107634u;
label_107634:
    // 0x107634: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x107634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_107638:
    // 0x107638: 0x10000058  b           . + 4 + (0x58 << 2)
label_10763c:
    if (ctx->pc == 0x10763Cu) {
        ctx->pc = 0x10763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107638u;
        // 0x10763c: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107640u;
        goto label_107640;
    }
    ctx->pc = 0x107638u;
    {
        const bool branch_taken_0x107638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107638u;
        // 0x10763c: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107638) {
            ctx->pc = 0x10779Cu;
            goto label_10779c;
        }
    }
    ctx->pc = 0x107640u;
label_107640:
    // 0x107640: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x107640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_107644:
    // 0x107644: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_107648:
    if (ctx->pc == 0x107648u) {
        ctx->pc = 0x107648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107644u;
        // 0x107648: 0xe6140028  swc1        $f20, 0x28($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10764Cu;
        goto label_10764c;
    }
    ctx->pc = 0x107644u;
    {
        const bool branch_taken_0x107644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107644u;
        // 0x107648: 0xe6140028  swc1        $f20, 0x28($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x107644) {
            ctx->pc = 0x1076CCu;
            goto label_1076cc;
        }
    }
    ctx->pc = 0x10764Cu;
label_10764c:
    // 0x10764c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x10764cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_107650:
    // 0x107650: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_107654:
    if (ctx->pc == 0x107654u) {
        ctx->pc = 0x107658u;
        goto label_107658;
    }
    ctx->pc = 0x107650u;
    {
        const bool branch_taken_0x107650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107650) {
            ctx->pc = 0x10766Cu;
            goto label_10766c;
        }
    }
    ctx->pc = 0x107658u;
label_107658:
    // 0x107658: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x107658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_10765c:
    // 0x10765c: 0xc09d926  jal         func_276498
label_107660:
    if (ctx->pc == 0x107660u) {
        ctx->pc = 0x107660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10765Cu;
        // 0x107660: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107664u;
        goto label_107664;
    }
    ctx->pc = 0x10765Cu;
    SET_GPR_U32(ctx, 31, 0x107664u);
    ctx->pc = 0x107660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10765Cu;
    // 0x107660: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x10765Cu, 0x107664u)) {
        return;
    }
    ctx->pc = 0x107664u;
label_107664:
    // 0x107664: 0xc0942f2  jal         func_250BC8
label_107668:
    if (ctx->pc == 0x107668u) {
        ctx->pc = 0x107668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107664u;
        // 0x107668: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10766Cu;
        goto label_10766c;
    }
    ctx->pc = 0x107664u;
    SET_GPR_U32(ctx, 31, 0x10766Cu);
    ctx->pc = 0x107668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107664u;
    // 0x107668: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250BC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x250BC8u, 0x107664u, 0x10766Cu)) {
        return;
    }
    ctx->pc = 0x10766Cu;
label_10766c:
    // 0x10766c: 0xc07600c  jal         func_1D8030
label_107670:
    if (ctx->pc == 0x107670u) {
        ctx->pc = 0x107674u;
        goto label_107674;
    }
    ctx->pc = 0x10766Cu;
    SET_GPR_U32(ctx, 31, 0x107674u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x10766Cu, 0x107674u)) {
        return;
    }
    ctx->pc = 0x107674u;
label_107674:
    // 0x107674: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x107674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_107678:
    // 0x107678: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x107678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_10767c:
    // 0x10767c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x10767cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_107680:
    // 0x107680: 0xc077b78  jal         func_1DEDE0
label_107684:
    if (ctx->pc == 0x107684u) {
        ctx->pc = 0x107684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107680u;
        // 0x107684: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107688u;
        goto label_107688;
    }
    ctx->pc = 0x107680u;
    SET_GPR_U32(ctx, 31, 0x107688u);
    ctx->pc = 0x107684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107680u;
    // 0x107684: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEDE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DEDE0u, 0x107680u, 0x107688u)) {
        return;
    }
    ctx->pc = 0x107688u;
label_107688:
    // 0x107688: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x107688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10768c:
    // 0x10768c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_107690:
    if (ctx->pc == 0x107690u) {
        ctx->pc = 0x107690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10768Cu;
        // 0x107690: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107694u;
        goto label_107694;
    }
    ctx->pc = 0x10768Cu;
    {
        const bool branch_taken_0x10768c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10768c) {
            ctx->pc = 0x107690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10768Cu;
            // 0x107690: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1076A4u;
            goto label_1076a4;
        }
    }
    ctx->pc = 0x107694u;
label_107694:
    // 0x107694: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x107694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_107698:
    // 0x107698: 0xc076e48  jal         func_1DB920
label_10769c:
    if (ctx->pc == 0x10769Cu) {
        ctx->pc = 0x10769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107698u;
        // 0x10769c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1076A0u;
        goto label_1076a0;
    }
    ctx->pc = 0x107698u;
    SET_GPR_U32(ctx, 31, 0x1076A0u);
    ctx->pc = 0x10769Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107698u;
    // 0x10769c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB920u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DB920u, 0x107698u, 0x1076A0u)) {
        return;
    }
    ctx->pc = 0x1076A0u;
label_1076a0:
    // 0x1076a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1076a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1076a4:
    // 0x1076a4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1076a8:
    if (ctx->pc == 0x1076A8u) {
        ctx->pc = 0x1076A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1076A4u;
        // 0x1076a8: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1076ACu;
        goto label_1076ac;
    }
    ctx->pc = 0x1076A4u;
    {
        const bool branch_taken_0x1076a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1076a4) {
            ctx->pc = 0x1076A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1076A4u;
            // 0x1076a8: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1076BCu;
            goto label_1076bc;
        }
    }
    ctx->pc = 0x1076ACu;
label_1076ac:
    // 0x1076ac: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1076acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1076b0:
    // 0x1076b0: 0xc076e86  jal         func_1DBA18
label_1076b4:
    if (ctx->pc == 0x1076B4u) {
        ctx->pc = 0x1076B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1076B0u;
        // 0x1076b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1076B8u;
        goto label_1076b8;
    }
    ctx->pc = 0x1076B0u;
    SET_GPR_U32(ctx, 31, 0x1076B8u);
    ctx->pc = 0x1076B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1076B0u;
    // 0x1076b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBA18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DBA18u, 0x1076B0u, 0x1076B8u)) {
        return;
    }
    ctx->pc = 0x1076B8u;
label_1076b8:
    // 0x1076b8: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1076b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1076bc:
    // 0x1076bc: 0x50800037  beql        $a0, $zero, . + 4 + (0x37 << 2)
label_1076c0:
    if (ctx->pc == 0x1076C0u) {
        ctx->pc = 0x1076C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1076BCu;
        // 0x1076c0: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1076C4u;
        goto label_1076c4;
    }
    ctx->pc = 0x1076BCu;
    {
        const bool branch_taken_0x1076bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1076bc) {
            ctx->pc = 0x1076C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1076BCu;
            // 0x1076c0: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10779Cu;
            goto label_10779c;
        }
    }
    ctx->pc = 0x1076C4u;
label_1076c4:
    // 0x1076c4: 0xc07b656  jal         func_1ED958
label_1076c8:
    if (ctx->pc == 0x1076C8u) {
        ctx->pc = 0x1076C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1076C4u;
        // 0x1076c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1076CCu;
        goto label_1076cc;
    }
    ctx->pc = 0x1076C4u;
    SET_GPR_U32(ctx, 31, 0x1076CCu);
    ctx->pc = 0x1076C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1076C4u;
    // 0x1076c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ED958u, 0x1076C4u, 0x1076CCu)) {
        return;
    }
    ctx->pc = 0x1076CCu;
label_1076cc:
    // 0x1076cc: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1076ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1076d0:
    // 0x1076d0: 0x50800032  beql        $a0, $zero, . + 4 + (0x32 << 2)
label_1076d4:
    if (ctx->pc == 0x1076D4u) {
        ctx->pc = 0x1076D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1076D0u;
        // 0x1076d4: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1076D8u;
        goto label_1076d8;
    }
    ctx->pc = 0x1076D0u;
    {
        const bool branch_taken_0x1076d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1076d0) {
            ctx->pc = 0x1076D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1076D0u;
            // 0x1076d4: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10779Cu;
            goto label_10779c;
        }
    }
    ctx->pc = 0x1076D8u;
label_1076d8:
    // 0x1076d8: 0xc07b570  jal         func_1ED5C0
label_1076dc:
    if (ctx->pc == 0x1076DCu) {
        ctx->pc = 0x1076E0u;
        goto label_1076e0;
    }
    ctx->pc = 0x1076D8u;
    SET_GPR_U32(ctx, 31, 0x1076E0u);
    ctx->pc = 0x1ED5C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ED5C0u, 0x1076D8u, 0x1076E0u)) {
        return;
    }
    ctx->pc = 0x1076E0u;
label_1076e0:
    // 0x1076e0: 0x1000002e  b           . + 4 + (0x2E << 2)
label_1076e4:
    if (ctx->pc == 0x1076E4u) {
        ctx->pc = 0x1076E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1076E0u;
        // 0x1076e4: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1076E8u;
        goto label_1076e8;
    }
    ctx->pc = 0x1076E0u;
    {
        const bool branch_taken_0x1076e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1076E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1076E0u;
        // 0x1076e4: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1076e0) {
            ctx->pc = 0x10779Cu;
            goto label_10779c;
        }
    }
    ctx->pc = 0x1076E8u;
label_1076e8:
    // 0x1076e8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_1076ec:
    if (ctx->pc == 0x1076ECu) {
        ctx->pc = 0x1076ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1076E8u;
        // 0x1076ec: 0xe6140028  swc1        $f20, 0x28($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1076F0u;
        goto label_1076f0;
    }
    ctx->pc = 0x1076E8u;
    {
        const bool branch_taken_0x1076e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1076ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1076E8u;
        // 0x1076ec: 0xe6140028  swc1        $f20, 0x28($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1076e8) {
            ctx->pc = 0x107770u;
            goto label_107770;
        }
    }
    ctx->pc = 0x1076F0u;
label_1076f0:
    // 0x1076f0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1076f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1076f4:
    // 0x1076f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1076f8:
    if (ctx->pc == 0x1076F8u) {
        ctx->pc = 0x1076FCu;
        goto label_1076fc;
    }
    ctx->pc = 0x1076F4u;
    {
        const bool branch_taken_0x1076f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1076f4) {
            ctx->pc = 0x107710u;
            goto label_107710;
        }
    }
    ctx->pc = 0x1076FCu;
label_1076fc:
    // 0x1076fc: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x1076fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_107700:
    // 0x107700: 0xc09d926  jal         func_276498
label_107704:
    if (ctx->pc == 0x107704u) {
        ctx->pc = 0x107704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107700u;
        // 0x107704: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107708u;
        goto label_107708;
    }
    ctx->pc = 0x107700u;
    SET_GPR_U32(ctx, 31, 0x107708u);
    ctx->pc = 0x107704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107700u;
    // 0x107704: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x107700u, 0x107708u)) {
        return;
    }
    ctx->pc = 0x107708u;
label_107708:
    // 0x107708: 0xc0942f2  jal         func_250BC8
label_10770c:
    if (ctx->pc == 0x10770Cu) {
        ctx->pc = 0x10770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107708u;
        // 0x10770c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107710u;
        goto label_107710;
    }
    ctx->pc = 0x107708u;
    SET_GPR_U32(ctx, 31, 0x107710u);
    ctx->pc = 0x10770Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107708u;
    // 0x10770c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250BC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x250BC8u, 0x107708u, 0x107710u)) {
        return;
    }
    ctx->pc = 0x107710u;
label_107710:
    // 0x107710: 0xc07600c  jal         func_1D8030
label_107714:
    if (ctx->pc == 0x107714u) {
        ctx->pc = 0x107718u;
        goto label_107718;
    }
    ctx->pc = 0x107710u;
    SET_GPR_U32(ctx, 31, 0x107718u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x107710u, 0x107718u)) {
        return;
    }
    ctx->pc = 0x107718u;
label_107718:
    // 0x107718: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x107718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_10771c:
    // 0x10771c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x10771cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_107720:
    // 0x107720: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x107720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_107724:
    // 0x107724: 0xc077b78  jal         func_1DEDE0
label_107728:
    if (ctx->pc == 0x107728u) {
        ctx->pc = 0x107728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107724u;
        // 0x107728: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10772Cu;
        goto label_10772c;
    }
    ctx->pc = 0x107724u;
    SET_GPR_U32(ctx, 31, 0x10772Cu);
    ctx->pc = 0x107728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107724u;
    // 0x107728: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEDE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DEDE0u, 0x107724u, 0x10772Cu)) {
        return;
    }
    ctx->pc = 0x10772Cu;
label_10772c:
    // 0x10772c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x10772cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_107730:
    // 0x107730: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_107734:
    if (ctx->pc == 0x107734u) {
        ctx->pc = 0x107734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107730u;
        // 0x107734: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107738u;
        goto label_107738;
    }
    ctx->pc = 0x107730u;
    {
        const bool branch_taken_0x107730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107730) {
            ctx->pc = 0x107734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107730u;
            // 0x107734: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107748u;
            goto label_107748;
        }
    }
    ctx->pc = 0x107738u;
label_107738:
    // 0x107738: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x107738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_10773c:
    // 0x10773c: 0xc076e48  jal         func_1DB920
label_107740:
    if (ctx->pc == 0x107740u) {
        ctx->pc = 0x107740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10773Cu;
        // 0x107740: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107744u;
        goto label_107744;
    }
    ctx->pc = 0x10773Cu;
    SET_GPR_U32(ctx, 31, 0x107744u);
    ctx->pc = 0x107740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10773Cu;
    // 0x107740: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB920u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DB920u, 0x10773Cu, 0x107744u)) {
        return;
    }
    ctx->pc = 0x107744u;
label_107744:
    // 0x107744: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x107744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_107748:
    // 0x107748: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_10774c:
    if (ctx->pc == 0x10774Cu) {
        ctx->pc = 0x10774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107748u;
        // 0x10774c: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107750u;
        goto label_107750;
    }
    ctx->pc = 0x107748u;
    {
        const bool branch_taken_0x107748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107748) {
            ctx->pc = 0x10774Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107748u;
            // 0x10774c: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107760u;
            goto label_107760;
        }
    }
    ctx->pc = 0x107750u;
label_107750:
    // 0x107750: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x107750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_107754:
    // 0x107754: 0xc076e86  jal         func_1DBA18
label_107758:
    if (ctx->pc == 0x107758u) {
        ctx->pc = 0x107758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107754u;
        // 0x107758: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10775Cu;
        goto label_10775c;
    }
    ctx->pc = 0x107754u;
    SET_GPR_U32(ctx, 31, 0x10775Cu);
    ctx->pc = 0x107758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107754u;
    // 0x107758: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBA18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DBA18u, 0x107754u, 0x10775Cu)) {
        return;
    }
    ctx->pc = 0x10775Cu;
label_10775c:
    // 0x10775c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x10775cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_107760:
    // 0x107760: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_107764:
    if (ctx->pc == 0x107764u) {
        ctx->pc = 0x107764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107760u;
        // 0x107764: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107768u;
        goto label_107768;
    }
    ctx->pc = 0x107760u;
    {
        const bool branch_taken_0x107760 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x107760) {
            ctx->pc = 0x107764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107760u;
            // 0x107764: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107788u;
            goto label_107788;
        }
    }
    ctx->pc = 0x107768u;
label_107768:
    // 0x107768: 0xc07b656  jal         func_1ED958
label_10776c:
    if (ctx->pc == 0x10776Cu) {
        ctx->pc = 0x10776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107768u;
        // 0x10776c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x107770u;
        goto label_107770;
    }
    ctx->pc = 0x107768u;
    SET_GPR_U32(ctx, 31, 0x107770u);
    ctx->pc = 0x10776Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107768u;
    // 0x10776c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ED958u, 0x107768u, 0x107770u)) {
        return;
    }
    ctx->pc = 0x107770u;
label_107770:
    // 0x107770: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x107770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_107774:
    // 0x107774: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_107778:
    if (ctx->pc == 0x107778u) {
        ctx->pc = 0x107778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107774u;
        // 0x107778: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10777Cu;
        goto label_10777c;
    }
    ctx->pc = 0x107774u;
    {
        const bool branch_taken_0x107774 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x107774) {
            ctx->pc = 0x107778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107774u;
            // 0x107778: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107788u;
            goto label_107788;
        }
    }
    ctx->pc = 0x10777Cu;
label_10777c:
    // 0x10777c: 0xc07b570  jal         func_1ED5C0
label_107780:
    if (ctx->pc == 0x107780u) {
        ctx->pc = 0x107784u;
        goto label_107784;
    }
    ctx->pc = 0x10777Cu;
    SET_GPR_U32(ctx, 31, 0x107784u);
    ctx->pc = 0x1ED5C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ED5C0u, 0x10777Cu, 0x107784u)) {
        return;
    }
    ctx->pc = 0x107784u;
label_107784:
    // 0x107784: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x107784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_107788:
    // 0x107788: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_10778c:
    if (ctx->pc == 0x10778Cu) {
        ctx->pc = 0x10778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107788u;
        // 0x10778c: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107790u;
        goto label_107790;
    }
    ctx->pc = 0x107788u;
    {
        const bool branch_taken_0x107788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x107788) {
            ctx->pc = 0x10778Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107788u;
            // 0x10778c: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10779Cu;
            goto label_10779c;
        }
    }
    ctx->pc = 0x107790u;
label_107790:
    // 0x107790: 0xc077968  jal         func_1DE5A0
label_107794:
    if (ctx->pc == 0x107794u) {
        ctx->pc = 0x107798u;
        goto label_107798;
    }
    ctx->pc = 0x107790u;
    SET_GPR_U32(ctx, 31, 0x107798u);
    ctx->pc = 0x1DE5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DE5A0u, 0x107790u, 0x107798u)) {
        return;
    }
    ctx->pc = 0x107798u;
label_107798:
    // 0x107798: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x107798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_10779c:
    // 0x10779c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x10779cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1077a0:
    // 0x1077a0: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1077a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_1077a4:
    // 0x1077a4: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1077a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1077a8:
    // 0x1077a8: 0x60f809  jalr        $v1
label_1077ac:
    if (ctx->pc == 0x1077ACu) {
        ctx->pc = 0x1077ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077A8u;
        // 0x1077ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1077B0u;
        goto label_1077b0;
    }
    ctx->pc = 0x1077A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1077B0u);
        ctx->pc = 0x1077ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077A8u;
        // 0x1077ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1077A8u, 0x1077B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1077B0u;
label_1077b0:
    // 0x1077b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1077b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1077b4:
    // 0x1077b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1077b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1077b8:
    // 0x1077b8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1077b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1077bc:
    // 0x1077bc: 0x3e00008  jr          $ra
label_1077c0:
    if (ctx->pc == 0x1077C0u) {
        ctx->pc = 0x1077C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077BCu;
        // 0x1077c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1077C4u;
        goto label_1077c4;
    }
    ctx->pc = 0x1077BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1077C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077BCu;
        // 0x1077c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1077BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1077C4u;
label_1077c4:
    // 0x1077c4: 0x0  nop
    ctx->pc = 0x1077c4u;
    // NOP
    ctx->pc = 0x1077c8u;
}
