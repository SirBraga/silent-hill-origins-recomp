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

// Function: sub_002094E0
// Address: 0x2094e0 - 0x2097f8
void sub_002094E0_0x2094e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002094E0_0x2094e0");
#endif

    switch (ctx->pc) {
        case 0x2094e0u: goto label_2094e0;
        case 0x2094e4u: goto label_2094e4;
        case 0x2094e8u: goto label_2094e8;
        case 0x2094ecu: goto label_2094ec;
        case 0x2094f0u: goto label_2094f0;
        case 0x2094f4u: goto label_2094f4;
        case 0x2094f8u: goto label_2094f8;
        case 0x2094fcu: goto label_2094fc;
        case 0x209500u: goto label_209500;
        case 0x209504u: goto label_209504;
        case 0x209508u: goto label_209508;
        case 0x20950cu: goto label_20950c;
        case 0x209510u: goto label_209510;
        case 0x209514u: goto label_209514;
        case 0x209518u: goto label_209518;
        case 0x20951cu: goto label_20951c;
        case 0x209520u: goto label_209520;
        case 0x209524u: goto label_209524;
        case 0x209528u: goto label_209528;
        case 0x20952cu: goto label_20952c;
        case 0x209530u: goto label_209530;
        case 0x209534u: goto label_209534;
        case 0x209538u: goto label_209538;
        case 0x20953cu: goto label_20953c;
        case 0x209540u: goto label_209540;
        case 0x209544u: goto label_209544;
        case 0x209548u: goto label_209548;
        case 0x20954cu: goto label_20954c;
        case 0x209550u: goto label_209550;
        case 0x209554u: goto label_209554;
        case 0x209558u: goto label_209558;
        case 0x20955cu: goto label_20955c;
        case 0x209560u: goto label_209560;
        case 0x209564u: goto label_209564;
        case 0x209568u: goto label_209568;
        case 0x20956cu: goto label_20956c;
        case 0x209570u: goto label_209570;
        case 0x209574u: goto label_209574;
        case 0x209578u: goto label_209578;
        case 0x20957cu: goto label_20957c;
        case 0x209580u: goto label_209580;
        case 0x209584u: goto label_209584;
        case 0x209588u: goto label_209588;
        case 0x20958cu: goto label_20958c;
        case 0x209590u: goto label_209590;
        case 0x209594u: goto label_209594;
        case 0x209598u: goto label_209598;
        case 0x20959cu: goto label_20959c;
        case 0x2095a0u: goto label_2095a0;
        case 0x2095a4u: goto label_2095a4;
        case 0x2095a8u: goto label_2095a8;
        case 0x2095acu: goto label_2095ac;
        case 0x2095b0u: goto label_2095b0;
        case 0x2095b4u: goto label_2095b4;
        case 0x2095b8u: goto label_2095b8;
        case 0x2095bcu: goto label_2095bc;
        case 0x2095c0u: goto label_2095c0;
        case 0x2095c4u: goto label_2095c4;
        case 0x2095c8u: goto label_2095c8;
        case 0x2095ccu: goto label_2095cc;
        case 0x2095d0u: goto label_2095d0;
        case 0x2095d4u: goto label_2095d4;
        case 0x2095d8u: goto label_2095d8;
        case 0x2095dcu: goto label_2095dc;
        case 0x2095e0u: goto label_2095e0;
        case 0x2095e4u: goto label_2095e4;
        case 0x2095e8u: goto label_2095e8;
        case 0x2095ecu: goto label_2095ec;
        case 0x2095f0u: goto label_2095f0;
        case 0x2095f4u: goto label_2095f4;
        case 0x2095f8u: goto label_2095f8;
        case 0x2095fcu: goto label_2095fc;
        case 0x209600u: goto label_209600;
        case 0x209604u: goto label_209604;
        case 0x209608u: goto label_209608;
        case 0x20960cu: goto label_20960c;
        case 0x209610u: goto label_209610;
        case 0x209614u: goto label_209614;
        case 0x209618u: goto label_209618;
        case 0x20961cu: goto label_20961c;
        case 0x209620u: goto label_209620;
        case 0x209624u: goto label_209624;
        case 0x209628u: goto label_209628;
        case 0x20962cu: goto label_20962c;
        case 0x209630u: goto label_209630;
        case 0x209634u: goto label_209634;
        case 0x209638u: goto label_209638;
        case 0x20963cu: goto label_20963c;
        case 0x209640u: goto label_209640;
        case 0x209644u: goto label_209644;
        case 0x209648u: goto label_209648;
        case 0x20964cu: goto label_20964c;
        case 0x209650u: goto label_209650;
        case 0x209654u: goto label_209654;
        case 0x209658u: goto label_209658;
        case 0x20965cu: goto label_20965c;
        case 0x209660u: goto label_209660;
        case 0x209664u: goto label_209664;
        case 0x209668u: goto label_209668;
        case 0x20966cu: goto label_20966c;
        case 0x209670u: goto label_209670;
        case 0x209674u: goto label_209674;
        case 0x209678u: goto label_209678;
        case 0x20967cu: goto label_20967c;
        case 0x209680u: goto label_209680;
        case 0x209684u: goto label_209684;
        case 0x209688u: goto label_209688;
        case 0x20968cu: goto label_20968c;
        case 0x209690u: goto label_209690;
        case 0x209694u: goto label_209694;
        case 0x209698u: goto label_209698;
        case 0x20969cu: goto label_20969c;
        case 0x2096a0u: goto label_2096a0;
        case 0x2096a4u: goto label_2096a4;
        case 0x2096a8u: goto label_2096a8;
        case 0x2096acu: goto label_2096ac;
        case 0x2096b0u: goto label_2096b0;
        case 0x2096b4u: goto label_2096b4;
        case 0x2096b8u: goto label_2096b8;
        case 0x2096bcu: goto label_2096bc;
        case 0x2096c0u: goto label_2096c0;
        case 0x2096c4u: goto label_2096c4;
        case 0x2096c8u: goto label_2096c8;
        case 0x2096ccu: goto label_2096cc;
        case 0x2096d0u: goto label_2096d0;
        case 0x2096d4u: goto label_2096d4;
        case 0x2096d8u: goto label_2096d8;
        case 0x2096dcu: goto label_2096dc;
        case 0x2096e0u: goto label_2096e0;
        case 0x2096e4u: goto label_2096e4;
        case 0x2096e8u: goto label_2096e8;
        case 0x2096ecu: goto label_2096ec;
        case 0x2096f0u: goto label_2096f0;
        case 0x2096f4u: goto label_2096f4;
        case 0x2096f8u: goto label_2096f8;
        case 0x2096fcu: goto label_2096fc;
        case 0x209700u: goto label_209700;
        case 0x209704u: goto label_209704;
        case 0x209708u: goto label_209708;
        case 0x20970cu: goto label_20970c;
        case 0x209710u: goto label_209710;
        case 0x209714u: goto label_209714;
        case 0x209718u: goto label_209718;
        case 0x20971cu: goto label_20971c;
        case 0x209720u: goto label_209720;
        case 0x209724u: goto label_209724;
        case 0x209728u: goto label_209728;
        case 0x20972cu: goto label_20972c;
        case 0x209730u: goto label_209730;
        case 0x209734u: goto label_209734;
        case 0x209738u: goto label_209738;
        case 0x20973cu: goto label_20973c;
        case 0x209740u: goto label_209740;
        case 0x209744u: goto label_209744;
        case 0x209748u: goto label_209748;
        case 0x20974cu: goto label_20974c;
        case 0x209750u: goto label_209750;
        case 0x209754u: goto label_209754;
        case 0x209758u: goto label_209758;
        case 0x20975cu: goto label_20975c;
        case 0x209760u: goto label_209760;
        case 0x209764u: goto label_209764;
        case 0x209768u: goto label_209768;
        case 0x20976cu: goto label_20976c;
        case 0x209770u: goto label_209770;
        case 0x209774u: goto label_209774;
        case 0x209778u: goto label_209778;
        case 0x20977cu: goto label_20977c;
        case 0x209780u: goto label_209780;
        case 0x209784u: goto label_209784;
        case 0x209788u: goto label_209788;
        case 0x20978cu: goto label_20978c;
        case 0x209790u: goto label_209790;
        case 0x209794u: goto label_209794;
        case 0x209798u: goto label_209798;
        case 0x20979cu: goto label_20979c;
        case 0x2097a0u: goto label_2097a0;
        case 0x2097a4u: goto label_2097a4;
        case 0x2097a8u: goto label_2097a8;
        case 0x2097acu: goto label_2097ac;
        case 0x2097b0u: goto label_2097b0;
        case 0x2097b4u: goto label_2097b4;
        case 0x2097b8u: goto label_2097b8;
        case 0x2097bcu: goto label_2097bc;
        case 0x2097c0u: goto label_2097c0;
        case 0x2097c4u: goto label_2097c4;
        case 0x2097c8u: goto label_2097c8;
        case 0x2097ccu: goto label_2097cc;
        case 0x2097d0u: goto label_2097d0;
        case 0x2097d4u: goto label_2097d4;
        case 0x2097d8u: goto label_2097d8;
        case 0x2097dcu: goto label_2097dc;
        case 0x2097e0u: goto label_2097e0;
        case 0x2097e4u: goto label_2097e4;
        case 0x2097e8u: goto label_2097e8;
        case 0x2097ecu: goto label_2097ec;
        case 0x2097f0u: goto label_2097f0;
        case 0x2097f4u: goto label_2097f4;
        default: break;
    }

    ctx->pc = 0x2094e0u;

label_2094e0:
    // 0x2094e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2094e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2094e4:
    // 0x2094e4: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2094e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_2094e8:
    // 0x2094e8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2094e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2094ec:
    // 0x2094ec: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2094ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2094f0:
    // 0x2094f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2094f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2094f4:
    // 0x2094f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2094f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2094f8:
    // 0x2094f8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2094f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2094fc:
    // 0x2094fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2094fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_209500:
    // 0x209500: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_209504:
    // 0x209504: 0x2cc3000e  sltiu       $v1, $a2, 0xE
    ctx->pc = 0x209504u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_209508:
    // 0x209508: 0x14600065  bnez        $v1, . + 4 + (0x65 << 2)
label_20950c:
    if (ctx->pc == 0x20950Cu) {
        ctx->pc = 0x20950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209508u;
        // 0x20950c: 0x47902d  daddu       $s2, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209510u;
        goto label_209510;
    }
    ctx->pc = 0x209508u;
    {
        const bool branch_taken_0x209508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209508u;
        // 0x20950c: 0x47902d  daddu       $s2, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209508) {
            ctx->pc = 0x2096A0u;
            goto label_2096a0;
        }
    }
    ctx->pc = 0x209510u;
label_209510:
    // 0x209510: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x209510u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_209514:
    // 0x209514: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x209514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_209518:
    // 0x209518: 0x14620062  bne         $v1, $v0, . + 4 + (0x62 << 2)
label_20951c:
    if (ctx->pc == 0x20951Cu) {
        ctx->pc = 0x20951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209518u;
        // 0x20951c: 0x2cc20006  sltiu       $v0, $a2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x209520u;
        goto label_209520;
    }
    ctx->pc = 0x209518u;
    {
        const bool branch_taken_0x209518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209518u;
        // 0x20951c: 0x2cc20006  sltiu       $v0, $a2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209518) {
            ctx->pc = 0x2096A4u;
            goto label_2096a4;
        }
    }
    ctx->pc = 0x209520u;
label_209520:
    // 0x209520: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x209520u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_209524:
    // 0x209524: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x209524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_209528:
    // 0x209528: 0x1482005e  bne         $a0, $v0, . + 4 + (0x5E << 2)
label_20952c:
    if (ctx->pc == 0x20952Cu) {
        ctx->pc = 0x20952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209528u;
        // 0x20952c: 0x2cc20006  sltiu       $v0, $a2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x209530u;
        goto label_209530;
    }
    ctx->pc = 0x209528u;
    {
        const bool branch_taken_0x209528 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209528u;
        // 0x20952c: 0x2cc20006  sltiu       $v0, $a2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209528) {
            ctx->pc = 0x2096A4u;
            goto label_2096a4;
        }
    }
    ctx->pc = 0x209530u;
label_209530:
    // 0x209530: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x209530u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_209534:
    // 0x209534: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x209534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_209538:
    // 0x209538: 0x1462005a  bne         $v1, $v0, . + 4 + (0x5A << 2)
label_20953c:
    if (ctx->pc == 0x20953Cu) {
        ctx->pc = 0x20953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209538u;
        // 0x20953c: 0x2cc20006  sltiu       $v0, $a2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x209540u;
        goto label_209540;
    }
    ctx->pc = 0x209538u;
    {
        const bool branch_taken_0x209538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209538u;
        // 0x20953c: 0x2cc20006  sltiu       $v0, $a2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209538) {
            ctx->pc = 0x2096A4u;
            goto label_2096a4;
        }
    }
    ctx->pc = 0x209540u;
label_209540:
    // 0x209540: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x209540u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_209544:
    // 0x209544: 0x14440057  bne         $v0, $a0, . + 4 + (0x57 << 2)
label_209548:
    if (ctx->pc == 0x209548u) {
        ctx->pc = 0x209548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209544u;
        // 0x209548: 0x2cc20006  sltiu       $v0, $a2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20954Cu;
        goto label_20954c;
    }
    ctx->pc = 0x209544u;
    {
        const bool branch_taken_0x209544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x209548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209544u;
        // 0x209548: 0x2cc20006  sltiu       $v0, $a2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209544) {
            ctx->pc = 0x2096A4u;
            goto label_2096a4;
        }
    }
    ctx->pc = 0x20954Cu;
label_20954c:
    // 0x20954c: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x20954cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_209550:
    // 0x209550: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
label_209554:
    if (ctx->pc == 0x209554u) {
        ctx->pc = 0x209554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209550u;
        // 0x209554: 0x2cc20006  sltiu       $v0, $a2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x209558u;
        goto label_209558;
    }
    ctx->pc = 0x209550u;
    {
        const bool branch_taken_0x209550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209550u;
        // 0x209554: 0x2cc20006  sltiu       $v0, $a2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209550) {
            ctx->pc = 0x2096A4u;
            goto label_2096a4;
        }
    }
    ctx->pc = 0x209558u;
label_209558:
    // 0x209558: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x209558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20955c:
    // 0x20955c: 0xae050118  sw          $a1, 0x118($s0)
    ctx->pc = 0x20955cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 5));
label_209560:
    // 0x209560: 0x92240005  lbu         $a0, 0x5($s1)
    ctx->pc = 0x209560u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_209564:
    // 0x209564: 0xa204011c  sb          $a0, 0x11C($s0)
    ctx->pc = 0x209564u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 4));
label_209568:
    // 0x209568: 0x92220006  lbu         $v0, 0x6($s1)
    ctx->pc = 0x209568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
label_20956c:
    // 0x20956c: 0xa202011d  sb          $v0, 0x11D($s0)
    ctx->pc = 0x20956cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 285), (uint8_t)GPR_U32(ctx, 2));
label_209570:
    // 0x209570: 0x92230007  lbu         $v1, 0x7($s1)
    ctx->pc = 0x209570u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_209574:
    // 0x209574: 0xa203011e  sb          $v1, 0x11E($s0)
    ctx->pc = 0x209574u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 286), (uint8_t)GPR_U32(ctx, 3));
label_209578:
    // 0x209578: 0x92220008  lbu         $v0, 0x8($s1)
    ctx->pc = 0x209578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_20957c:
    // 0x20957c: 0x92230009  lbu         $v1, 0x9($s1)
    ctx->pc = 0x20957cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
label_209580:
    // 0x209580: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x209580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_209584:
    // 0x209584: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x209584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_209588:
    // 0x209588: 0xa6030120  sh          $v1, 0x120($s0)
    ctx->pc = 0x209588u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 3));
label_20958c:
    // 0x20958c: 0x9222000a  lbu         $v0, 0xA($s1)
    ctx->pc = 0x20958cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
label_209590:
    // 0x209590: 0x9223000b  lbu         $v1, 0xB($s1)
    ctx->pc = 0x209590u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
label_209594:
    // 0x209594: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x209594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_209598:
    // 0x209598: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x209598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20959c:
    // 0x20959c: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
label_2095a0:
    if (ctx->pc == 0x2095A0u) {
        ctx->pc = 0x2095A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20959Cu;
        // 0x2095a0: 0xa6030122  sh          $v1, 0x122($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 290), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2095A4u;
        goto label_2095a4;
    }
    ctx->pc = 0x20959Cu;
    {
        const bool branch_taken_0x20959c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x2095A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20959Cu;
        // 0x2095a0: 0xa6030122  sh          $v1, 0x122($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 290), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20959c) {
            ctx->pc = 0x2095DCu;
            goto label_2095dc;
        }
    }
    ctx->pc = 0x2095A4u;
label_2095a4:
    // 0x2095a4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2095a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2095a8:
    // 0x2095a8: 0x24020077  addiu       $v0, $zero, 0x77
    ctx->pc = 0x2095a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_2095ac:
    // 0x2095ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2095acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2095b0:
    // 0x2095b0: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x2095b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_2095b4:
    // 0x2095b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2095b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2095b8:
    // 0x2095b8: 0x9202011c  lbu         $v0, 0x11C($s0)
    ctx->pc = 0x2095b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 284)));
label_2095bc:
    // 0x2095bc: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x2095bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_2095c0:
    // 0x2095c0: 0x9202011d  lbu         $v0, 0x11D($s0)
    ctx->pc = 0x2095c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 285)));
label_2095c4:
    // 0x2095c4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2095c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2095c8:
    // 0x2095c8: 0xacc2001c  sw          $v0, 0x1C($a2)
    ctx->pc = 0x2095c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
label_2095cc:
    // 0x2095cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2095ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2095d0:
    // 0x2095d0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2095d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2095d4:
    // 0x2095d4: 0x40f809  jalr        $v0
label_2095d8:
    if (ctx->pc == 0x2095D8u) {
        ctx->pc = 0x2095D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095D4u;
        // 0x2095d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2095DCu;
        goto label_2095dc;
    }
    ctx->pc = 0x2095D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2095DCu);
        ctx->pc = 0x2095D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095D4u;
        // 0x2095d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2095D4u, 0x2095DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2095DCu;
label_2095dc:
    // 0x2095dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2095dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2095e0:
    // 0x2095e0: 0x24080057  addiu       $t0, $zero, 0x57
    ctx->pc = 0x2095e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
label_2095e4:
    // 0x2095e4: 0x9207011c  lbu         $a3, 0x11C($s0)
    ctx->pc = 0x2095e4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 284)));
label_2095e8:
    // 0x2095e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2095e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2095ec:
    // 0x2095ec: 0x24660018  addiu       $a2, $v1, 0x18
    ctx->pc = 0x2095ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_2095f0:
    // 0x2095f0: 0xac670018  sw          $a3, 0x18($v1)
    ctx->pc = 0x2095f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 7));
label_2095f4:
    // 0x2095f4: 0x9202011d  lbu         $v0, 0x11D($s0)
    ctx->pc = 0x2095f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 285)));
label_2095f8:
    // 0x2095f8: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x2095f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_2095fc:
    // 0x2095fc: 0x96030120  lhu         $v1, 0x120($s0)
    ctx->pc = 0x2095fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 288)));
label_209600:
    // 0x209600: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x209600u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_209604:
    // 0x209604: 0x96020122  lhu         $v0, 0x122($s0)
    ctx->pc = 0x209604u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 290)));
label_209608:
    // 0x209608: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x209608u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_20960c:
    // 0x20960c: 0x9203011e  lbu         $v1, 0x11E($s0)
    ctx->pc = 0x20960cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 286)));
label_209610:
    // 0x209610: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x209610u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
label_209614:
    // 0x209614: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x209614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_209618:
    // 0x209618: 0xac480014  sw          $t0, 0x14($v0)
    ctx->pc = 0x209618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 8));
label_20961c:
    // 0x20961c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20961cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_209620:
    // 0x209620: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x209620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_209624:
    // 0x209624: 0x40f809  jalr        $v0
label_209628:
    if (ctx->pc == 0x209628u) {
        ctx->pc = 0x209628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209624u;
        // 0x209628: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20962Cu;
        goto label_20962c;
    }
    ctx->pc = 0x209624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20962Cu);
        ctx->pc = 0x209628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209624u;
        // 0x209628: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209624u, 0x20962Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20962Cu;
label_20962c:
    // 0x20962c: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x20962cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_209630:
    // 0x209630: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x209630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
label_209634:
    // 0x209634: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x209634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_209638:
    // 0x209638: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_20963c:
    if (ctx->pc == 0x20963Cu) {
        ctx->pc = 0x20963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209638u;
        // 0x20963c: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209640u;
        goto label_209640;
    }
    ctx->pc = 0x209638u;
    {
        const bool branch_taken_0x209638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209638u;
        // 0x20963c: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209638) {
            ctx->pc = 0x209678u;
            goto label_209678;
        }
    }
    ctx->pc = 0x209640u;
label_209640:
    // 0x209640: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x209640u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_209644:
    // 0x209644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209648:
    // 0x209648: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x209648u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_20964c:
    // 0x20964c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20964cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_209650:
    // 0x209650: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x209650u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_209654:
    // 0x209654: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x209654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_209658:
    // 0x209658: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x209658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
label_20965c:
    // 0x20965c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x20965cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_209660:
    // 0x209660: 0xacc2001c  sw          $v0, 0x1C($a2)
    ctx->pc = 0x209660u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
label_209664:
    // 0x209664: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x209664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_209668:
    // 0x209668: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x209668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_20966c:
    // 0x20966c: 0x40f809  jalr        $v0
label_209670:
    if (ctx->pc == 0x209670u) {
        ctx->pc = 0x209670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20966Cu;
        // 0x209670: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209674u;
        goto label_209674;
    }
    ctx->pc = 0x20966Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209674u);
        ctx->pc = 0x209670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20966Cu;
        // 0x209670: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20966Cu, 0x209674u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209674u;
label_209674:
    // 0x209674: 0x0  nop
    ctx->pc = 0x209674u;
    // NOP
label_209678:
    // 0x209678: 0x9225000d  lbu         $a1, 0xD($s1)
    ctx->pc = 0x209678u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
label_20967c:
    // 0x20967c: 0x6652fff2  daddiu      $s2, $s2, -0xE
    ctx->pc = 0x20967cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)4294967282);
label_209680:
    // 0x209680: 0xc07e4e4  jal         func_1F9390
label_209684:
    if (ctx->pc == 0x209684u) {
        ctx->pc = 0x209684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209680u;
        // 0x209684: 0x9224000c  lbu         $a0, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209688u;
        goto label_209688;
    }
    ctx->pc = 0x209680u;
    SET_GPR_U32(ctx, 31, 0x209688u);
    ctx->pc = 0x209684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209680u;
    // 0x209684: 0x9224000c  lbu         $a0, 0xC($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x209680u, 0x209688u)) {
        return;
    }
    ctx->pc = 0x209688u;
label_209688:
    // 0x209688: 0x21878  dsll        $v1, $v0, 1
    ctx->pc = 0x209688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 1);
label_20968c:
    // 0x20968c: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x20968cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_209690:
    // 0x209690: 0x12430053  beq         $s2, $v1, . + 4 + (0x53 << 2)
label_209694:
    if (ctx->pc == 0x209694u) {
        ctx->pc = 0x209694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209690u;
        // 0x209694: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209698u;
        goto label_209698;
    }
    ctx->pc = 0x209690u;
    {
        const bool branch_taken_0x209690 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x209694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209690u;
        // 0x209694: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209690) {
            ctx->pc = 0x2097E0u;
            goto label_2097e0;
        }
    }
    ctx->pc = 0x209698u;
label_209698:
    // 0x209698: 0x1000002b  b           . + 4 + (0x2B << 2)
label_20969c:
    if (ctx->pc == 0x20969Cu) {
        ctx->pc = 0x20969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209698u;
        // 0x20969c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2096A0u;
        goto label_2096a0;
    }
    ctx->pc = 0x209698u;
    {
        const bool branch_taken_0x209698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209698u;
        // 0x20969c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209698) {
            ctx->pc = 0x209748u;
            goto label_209748;
        }
    }
    ctx->pc = 0x2096A0u;
label_2096a0:
    // 0x2096a0: 0x2cc20006  sltiu       $v0, $a2, 0x6
    ctx->pc = 0x2096a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2096a4:
    // 0x2096a4: 0x54400043  bnel        $v0, $zero, . + 4 + (0x43 << 2)
label_2096a8:
    if (ctx->pc == 0x2096A8u) {
        ctx->pc = 0x2096A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2096A4u;
        // 0x2096a8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2096ACu;
        goto label_2096ac;
    }
    ctx->pc = 0x2096A4u;
    {
        const bool branch_taken_0x2096a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2096a4) {
            ctx->pc = 0x2096A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2096A4u;
            // 0x2096a8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2097B4u;
            goto label_2097b4;
        }
    }
    ctx->pc = 0x2096ACu;
label_2096ac:
    // 0x2096ac: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x2096acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2096b0:
    // 0x2096b0: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x2096b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_2096b4:
    // 0x2096b4: 0x5462003f  bnel        $v1, $v0, . + 4 + (0x3F << 2)
label_2096b8:
    if (ctx->pc == 0x2096B8u) {
        ctx->pc = 0x2096B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2096B4u;
        // 0x2096b8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2096BCu;
        goto label_2096bc;
    }
    ctx->pc = 0x2096B4u;
    {
        const bool branch_taken_0x2096b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2096b4) {
            ctx->pc = 0x2096B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2096B4u;
            // 0x2096b8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2097B4u;
            goto label_2097b4;
        }
    }
    ctx->pc = 0x2096BCu;
label_2096bc:
    // 0x2096bc: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x2096bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_2096c0:
    // 0x2096c0: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x2096c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_2096c4:
    // 0x2096c4: 0x5462003b  bnel        $v1, $v0, . + 4 + (0x3B << 2)
label_2096c8:
    if (ctx->pc == 0x2096C8u) {
        ctx->pc = 0x2096C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2096C4u;
        // 0x2096c8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2096CCu;
        goto label_2096cc;
    }
    ctx->pc = 0x2096C4u;
    {
        const bool branch_taken_0x2096c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2096c4) {
            ctx->pc = 0x2096C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2096C4u;
            // 0x2096c8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2097B4u;
            goto label_2097b4;
        }
    }
    ctx->pc = 0x2096CCu;
label_2096cc:
    // 0x2096cc: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x2096ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_2096d0:
    // 0x2096d0: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x2096d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_2096d4:
    // 0x2096d4: 0x54620037  bnel        $v1, $v0, . + 4 + (0x37 << 2)
label_2096d8:
    if (ctx->pc == 0x2096D8u) {
        ctx->pc = 0x2096D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2096D4u;
        // 0x2096d8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2096DCu;
        goto label_2096dc;
    }
    ctx->pc = 0x2096D4u;
    {
        const bool branch_taken_0x2096d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2096d4) {
            ctx->pc = 0x2096D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2096D4u;
            // 0x2096d8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2097B4u;
            goto label_2097b4;
        }
    }
    ctx->pc = 0x2096DCu;
label_2096dc:
    // 0x2096dc: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x2096dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_2096e0:
    // 0x2096e0: 0x54430034  bnel        $v0, $v1, . + 4 + (0x34 << 2)
label_2096e4:
    if (ctx->pc == 0x2096E4u) {
        ctx->pc = 0x2096E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2096E0u;
        // 0x2096e4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2096E8u;
        goto label_2096e8;
    }
    ctx->pc = 0x2096E0u;
    {
        const bool branch_taken_0x2096e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2096e0) {
            ctx->pc = 0x2096E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2096E0u;
            // 0x2096e4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2097B4u;
            goto label_2097b4;
        }
    }
    ctx->pc = 0x2096E8u;
label_2096e8:
    // 0x2096e8: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x2096e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_2096ec:
    // 0x2096ec: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
label_2096f0:
    if (ctx->pc == 0x2096F0u) {
        ctx->pc = 0x2096F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2096ECu;
        // 0x2096f0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2096F4u;
        goto label_2096f4;
    }
    ctx->pc = 0x2096ECu;
    {
        const bool branch_taken_0x2096ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2096ec) {
            ctx->pc = 0x2096F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2096ECu;
            // 0x2096f0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2097B4u;
            goto label_2097b4;
        }
    }
    ctx->pc = 0x2096F4u;
label_2096f4:
    // 0x2096f4: 0x92230005  lbu         $v1, 0x5($s1)
    ctx->pc = 0x2096f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_2096f8:
    // 0x2096f8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2096f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2096fc:
    // 0x2096fc: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_209700:
    if (ctx->pc == 0x209700u) {
        ctx->pc = 0x209700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2096FCu;
        // 0x209700: 0x28620012  slti        $v0, $v1, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)18) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x209704u;
        goto label_209704;
    }
    ctx->pc = 0x2096FCu;
    {
        const bool branch_taken_0x2096fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x209700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2096FCu;
        // 0x209700: 0x28620012  slti        $v0, $v1, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)18) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2096fc) {
            ctx->pc = 0x209738u;
            goto label_209738;
        }
    }
    ctx->pc = 0x209704u;
label_209704:
    // 0x209704: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_209708:
    if (ctx->pc == 0x209708u) {
        ctx->pc = 0x209708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209704u;
        // 0x209708: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20970Cu;
        goto label_20970c;
    }
    ctx->pc = 0x209704u;
    {
        const bool branch_taken_0x209704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209704u;
        // 0x209708: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209704) {
            ctx->pc = 0x20971Cu;
            goto label_20971c;
        }
    }
    ctx->pc = 0x20970Cu;
label_20970c:
    // 0x20970c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_209710:
    if (ctx->pc == 0x209710u) {
        ctx->pc = 0x209710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20970Cu;
        // 0x209710: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209714u;
        goto label_209714;
    }
    ctx->pc = 0x20970Cu;
    {
        const bool branch_taken_0x20970c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x209710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20970Cu;
        // 0x209710: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20970c) {
            ctx->pc = 0x209730u;
            goto label_209730;
        }
    }
    ctx->pc = 0x209714u;
label_209714:
    // 0x209714: 0x10000018  b           . + 4 + (0x18 << 2)
label_209718:
    if (ctx->pc == 0x209718u) {
        ctx->pc = 0x209718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209714u;
        // 0x209718: 0x24020059  addiu       $v0, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20971Cu;
        goto label_20971c;
    }
    ctx->pc = 0x209714u;
    {
        const bool branch_taken_0x209714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209714u;
        // 0x209718: 0x24020059  addiu       $v0, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209714) {
            ctx->pc = 0x209778u;
            goto label_209778;
        }
    }
    ctx->pc = 0x20971Cu;
label_20971c:
    // 0x20971c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x20971cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_209720:
    // 0x209720: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_209724:
    if (ctx->pc == 0x209724u) {
        ctx->pc = 0x209724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209720u;
        // 0x209724: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209728u;
        goto label_209728;
    }
    ctx->pc = 0x209720u;
    {
        const bool branch_taken_0x209720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x209724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209720u;
        // 0x209724: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209720) {
            ctx->pc = 0x209744u;
            goto label_209744;
        }
    }
    ctx->pc = 0x209728u;
label_209728:
    // 0x209728: 0x10000013  b           . + 4 + (0x13 << 2)
label_20972c:
    if (ctx->pc == 0x20972Cu) {
        ctx->pc = 0x20972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209728u;
        // 0x20972c: 0x24020059  addiu       $v0, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209730u;
        goto label_209730;
    }
    ctx->pc = 0x209728u;
    {
        const bool branch_taken_0x209728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209728u;
        // 0x20972c: 0x24020059  addiu       $v0, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209728) {
            ctx->pc = 0x209778u;
            goto label_209778;
        }
    }
    ctx->pc = 0x209730u;
label_209730:
    // 0x209730: 0x10000005  b           . + 4 + (0x5 << 2)
label_209734:
    if (ctx->pc == 0x209734u) {
        ctx->pc = 0x209734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209730u;
        // 0x209734: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209738u;
        goto label_209738;
    }
    ctx->pc = 0x209730u;
    {
        const bool branch_taken_0x209730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209730u;
        // 0x209734: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209730) {
            ctx->pc = 0x209748u;
            goto label_209748;
        }
    }
    ctx->pc = 0x209738u;
label_209738:
    // 0x209738: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x209738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20973c:
    // 0x20973c: 0x10000002  b           . + 4 + (0x2 << 2)
label_209740:
    if (ctx->pc == 0x209740u) {
        ctx->pc = 0x209740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20973Cu;
        // 0x209740: 0x2402006d  addiu       $v0, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209744u;
        goto label_209744;
    }
    ctx->pc = 0x20973Cu;
    {
        const bool branch_taken_0x20973c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20973Cu;
        // 0x209740: 0x2402006d  addiu       $v0, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20973c) {
            ctx->pc = 0x209748u;
            goto label_209748;
        }
    }
    ctx->pc = 0x209744u;
label_209744:
    // 0x209744: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x209744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_209748:
    // 0x209748: 0x12303c  dsll32      $a2, $s2, 0
    ctx->pc = 0x209748u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 0));
label_20974c:
    // 0x20974c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x20974cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_209750:
    // 0x209750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209754:
    // 0x209754: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x209754u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_209758:
    // 0x209758: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x209758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20975c:
    // 0x20975c: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x20975cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
label_209760:
    // 0x209760: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x209760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_209764:
    // 0x209764: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x209764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_209768:
    // 0x209768: 0x40f809  jalr        $v0
label_20976c:
    if (ctx->pc == 0x20976Cu) {
        ctx->pc = 0x20976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209768u;
        // 0x20976c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209770u;
        goto label_209770;
    }
    ctx->pc = 0x209768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209770u);
        ctx->pc = 0x20976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209768u;
        // 0x20976c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209768u, 0x209770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209770u;
label_209770:
    // 0x209770: 0x1000001c  b           . + 4 + (0x1C << 2)
label_209774:
    if (ctx->pc == 0x209774u) {
        ctx->pc = 0x209774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209770u;
        // 0x209774: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209778u;
        goto label_209778;
    }
    ctx->pc = 0x209770u;
    {
        const bool branch_taken_0x209770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209770u;
        // 0x209774: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209770) {
            ctx->pc = 0x2097E4u;
            goto label_2097e4;
        }
    }
    ctx->pc = 0x209778u;
label_209778:
    // 0x209778: 0x12383c  dsll32      $a3, $s2, 0
    ctx->pc = 0x209778u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) << (32 + 0));
label_20977c:
    // 0x20977c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x20977cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_209780:
    // 0x209780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209784:
    // 0x209784: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x209784u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_209788:
    // 0x209788: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x209788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20978c:
    // 0x20978c: 0x92260005  lbu         $a2, 0x5($s1)
    ctx->pc = 0x20978cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_209790:
    // 0x209790: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x209790u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
label_209794:
    // 0x209794: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x209794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_209798:
    // 0x209798: 0xac67001c  sw          $a3, 0x1C($v1)
    ctx->pc = 0x209798u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 7));
label_20979c:
    // 0x20979c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20979cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2097a0:
    // 0x2097a0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2097a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2097a4:
    // 0x2097a4: 0x60f809  jalr        $v1
label_2097a8:
    if (ctx->pc == 0x2097A8u) {
        ctx->pc = 0x2097A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097A4u;
        // 0x2097a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2097ACu;
        goto label_2097ac;
    }
    ctx->pc = 0x2097A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2097ACu);
        ctx->pc = 0x2097A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097A4u;
        // 0x2097a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2097A4u, 0x2097ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2097ACu;
label_2097ac:
    // 0x2097ac: 0x1000000d  b           . + 4 + (0xD << 2)
label_2097b0:
    if (ctx->pc == 0x2097B0u) {
        ctx->pc = 0x2097B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097ACu;
        // 0x2097b0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2097B4u;
        goto label_2097b4;
    }
    ctx->pc = 0x2097ACu;
    {
        const bool branch_taken_0x2097ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2097B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097ACu;
        // 0x2097b0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2097ac) {
            ctx->pc = 0x2097E4u;
            goto label_2097e4;
        }
    }
    ctx->pc = 0x2097B4u;
label_2097b4:
    // 0x2097b4: 0x2402004d  addiu       $v0, $zero, 0x4D
    ctx->pc = 0x2097b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_2097b8:
    // 0x2097b8: 0x12303c  dsll32      $a2, $s2, 0
    ctx->pc = 0x2097b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 0));
label_2097bc:
    // 0x2097bc: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2097bcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_2097c0:
    // 0x2097c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2097c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2097c4:
    // 0x2097c4: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x2097c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_2097c8:
    // 0x2097c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2097c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2097cc:
    // 0x2097cc: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x2097ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
label_2097d0:
    // 0x2097d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2097d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2097d4:
    // 0x2097d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2097d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2097d8:
    // 0x2097d8: 0x40f809  jalr        $v0
label_2097dc:
    if (ctx->pc == 0x2097DCu) {
        ctx->pc = 0x2097DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097D8u;
        // 0x2097dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2097E0u;
        goto label_2097e0;
    }
    ctx->pc = 0x2097D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2097E0u);
        ctx->pc = 0x2097DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097D8u;
        // 0x2097dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2097D8u, 0x2097E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2097E0u;
label_2097e0:
    // 0x2097e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2097e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2097e4:
    // 0x2097e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2097e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2097e8:
    // 0x2097e8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2097e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2097ec:
    // 0x2097ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2097ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2097f0:
    // 0x2097f0: 0x3e00008  jr          $ra
label_2097f4:
    if (ctx->pc == 0x2097F4u) {
        ctx->pc = 0x2097F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097F0u;
        // 0x2097f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2097F8u;
        goto label_fallthrough_0x2097f0;
    }
    ctx->pc = 0x2097F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2097F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097F0u;
        // 0x2097f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2097F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2097f0:
    ctx->pc = 0x2097F8u;
}
