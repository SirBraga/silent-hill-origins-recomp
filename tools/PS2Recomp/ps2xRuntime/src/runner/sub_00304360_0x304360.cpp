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

// Function: sub_00304360
// Address: 0x304360 - 0x304878
void sub_00304360_0x304360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304360_0x304360");
#endif

    switch (ctx->pc) {
        case 0x304360u: goto label_304360;
        case 0x304364u: goto label_304364;
        case 0x304368u: goto label_304368;
        case 0x30436cu: goto label_30436c;
        case 0x304370u: goto label_304370;
        case 0x304374u: goto label_304374;
        case 0x304378u: goto label_304378;
        case 0x30437cu: goto label_30437c;
        case 0x304380u: goto label_304380;
        case 0x304384u: goto label_304384;
        case 0x304388u: goto label_304388;
        case 0x30438cu: goto label_30438c;
        case 0x304390u: goto label_304390;
        case 0x304394u: goto label_304394;
        case 0x304398u: goto label_304398;
        case 0x30439cu: goto label_30439c;
        case 0x3043a0u: goto label_3043a0;
        case 0x3043a4u: goto label_3043a4;
        case 0x3043a8u: goto label_3043a8;
        case 0x3043acu: goto label_3043ac;
        case 0x3043b0u: goto label_3043b0;
        case 0x3043b4u: goto label_3043b4;
        case 0x3043b8u: goto label_3043b8;
        case 0x3043bcu: goto label_3043bc;
        case 0x3043c0u: goto label_3043c0;
        case 0x3043c4u: goto label_3043c4;
        case 0x3043c8u: goto label_3043c8;
        case 0x3043ccu: goto label_3043cc;
        case 0x3043d0u: goto label_3043d0;
        case 0x3043d4u: goto label_3043d4;
        case 0x3043d8u: goto label_3043d8;
        case 0x3043dcu: goto label_3043dc;
        case 0x3043e0u: goto label_3043e0;
        case 0x3043e4u: goto label_3043e4;
        case 0x3043e8u: goto label_3043e8;
        case 0x3043ecu: goto label_3043ec;
        case 0x3043f0u: goto label_3043f0;
        case 0x3043f4u: goto label_3043f4;
        case 0x3043f8u: goto label_3043f8;
        case 0x3043fcu: goto label_3043fc;
        case 0x304400u: goto label_304400;
        case 0x304404u: goto label_304404;
        case 0x304408u: goto label_304408;
        case 0x30440cu: goto label_30440c;
        case 0x304410u: goto label_304410;
        case 0x304414u: goto label_304414;
        case 0x304418u: goto label_304418;
        case 0x30441cu: goto label_30441c;
        case 0x304420u: goto label_304420;
        case 0x304424u: goto label_304424;
        case 0x304428u: goto label_304428;
        case 0x30442cu: goto label_30442c;
        case 0x304430u: goto label_304430;
        case 0x304434u: goto label_304434;
        case 0x304438u: goto label_304438;
        case 0x30443cu: goto label_30443c;
        case 0x304440u: goto label_304440;
        case 0x304444u: goto label_304444;
        case 0x304448u: goto label_304448;
        case 0x30444cu: goto label_30444c;
        case 0x304450u: goto label_304450;
        case 0x304454u: goto label_304454;
        case 0x304458u: goto label_304458;
        case 0x30445cu: goto label_30445c;
        case 0x304460u: goto label_304460;
        case 0x304464u: goto label_304464;
        case 0x304468u: goto label_304468;
        case 0x30446cu: goto label_30446c;
        case 0x304470u: goto label_304470;
        case 0x304474u: goto label_304474;
        case 0x304478u: goto label_304478;
        case 0x30447cu: goto label_30447c;
        case 0x304480u: goto label_304480;
        case 0x304484u: goto label_304484;
        case 0x304488u: goto label_304488;
        case 0x30448cu: goto label_30448c;
        case 0x304490u: goto label_304490;
        case 0x304494u: goto label_304494;
        case 0x304498u: goto label_304498;
        case 0x30449cu: goto label_30449c;
        case 0x3044a0u: goto label_3044a0;
        case 0x3044a4u: goto label_3044a4;
        case 0x3044a8u: goto label_3044a8;
        case 0x3044acu: goto label_3044ac;
        case 0x3044b0u: goto label_3044b0;
        case 0x3044b4u: goto label_3044b4;
        case 0x3044b8u: goto label_3044b8;
        case 0x3044bcu: goto label_3044bc;
        case 0x3044c0u: goto label_3044c0;
        case 0x3044c4u: goto label_3044c4;
        case 0x3044c8u: goto label_3044c8;
        case 0x3044ccu: goto label_3044cc;
        case 0x3044d0u: goto label_3044d0;
        case 0x3044d4u: goto label_3044d4;
        case 0x3044d8u: goto label_3044d8;
        case 0x3044dcu: goto label_3044dc;
        case 0x3044e0u: goto label_3044e0;
        case 0x3044e4u: goto label_3044e4;
        case 0x3044e8u: goto label_3044e8;
        case 0x3044ecu: goto label_3044ec;
        case 0x3044f0u: goto label_3044f0;
        case 0x3044f4u: goto label_3044f4;
        case 0x3044f8u: goto label_3044f8;
        case 0x3044fcu: goto label_3044fc;
        case 0x304500u: goto label_304500;
        case 0x304504u: goto label_304504;
        case 0x304508u: goto label_304508;
        case 0x30450cu: goto label_30450c;
        case 0x304510u: goto label_304510;
        case 0x304514u: goto label_304514;
        case 0x304518u: goto label_304518;
        case 0x30451cu: goto label_30451c;
        case 0x304520u: goto label_304520;
        case 0x304524u: goto label_304524;
        case 0x304528u: goto label_304528;
        case 0x30452cu: goto label_30452c;
        case 0x304530u: goto label_304530;
        case 0x304534u: goto label_304534;
        case 0x304538u: goto label_304538;
        case 0x30453cu: goto label_30453c;
        case 0x304540u: goto label_304540;
        case 0x304544u: goto label_304544;
        case 0x304548u: goto label_304548;
        case 0x30454cu: goto label_30454c;
        case 0x304550u: goto label_304550;
        case 0x304554u: goto label_304554;
        case 0x304558u: goto label_304558;
        case 0x30455cu: goto label_30455c;
        case 0x304560u: goto label_304560;
        case 0x304564u: goto label_304564;
        case 0x304568u: goto label_304568;
        case 0x30456cu: goto label_30456c;
        case 0x304570u: goto label_304570;
        case 0x304574u: goto label_304574;
        case 0x304578u: goto label_304578;
        case 0x30457cu: goto label_30457c;
        case 0x304580u: goto label_304580;
        case 0x304584u: goto label_304584;
        case 0x304588u: goto label_304588;
        case 0x30458cu: goto label_30458c;
        case 0x304590u: goto label_304590;
        case 0x304594u: goto label_304594;
        case 0x304598u: goto label_304598;
        case 0x30459cu: goto label_30459c;
        case 0x3045a0u: goto label_3045a0;
        case 0x3045a4u: goto label_3045a4;
        case 0x3045a8u: goto label_3045a8;
        case 0x3045acu: goto label_3045ac;
        case 0x3045b0u: goto label_3045b0;
        case 0x3045b4u: goto label_3045b4;
        case 0x3045b8u: goto label_3045b8;
        case 0x3045bcu: goto label_3045bc;
        case 0x3045c0u: goto label_3045c0;
        case 0x3045c4u: goto label_3045c4;
        case 0x3045c8u: goto label_3045c8;
        case 0x3045ccu: goto label_3045cc;
        case 0x3045d0u: goto label_3045d0;
        case 0x3045d4u: goto label_3045d4;
        case 0x3045d8u: goto label_3045d8;
        case 0x3045dcu: goto label_3045dc;
        case 0x3045e0u: goto label_3045e0;
        case 0x3045e4u: goto label_3045e4;
        case 0x3045e8u: goto label_3045e8;
        case 0x3045ecu: goto label_3045ec;
        case 0x3045f0u: goto label_3045f0;
        case 0x3045f4u: goto label_3045f4;
        case 0x3045f8u: goto label_3045f8;
        case 0x3045fcu: goto label_3045fc;
        case 0x304600u: goto label_304600;
        case 0x304604u: goto label_304604;
        case 0x304608u: goto label_304608;
        case 0x30460cu: goto label_30460c;
        case 0x304610u: goto label_304610;
        case 0x304614u: goto label_304614;
        case 0x304618u: goto label_304618;
        case 0x30461cu: goto label_30461c;
        case 0x304620u: goto label_304620;
        case 0x304624u: goto label_304624;
        case 0x304628u: goto label_304628;
        case 0x30462cu: goto label_30462c;
        case 0x304630u: goto label_304630;
        case 0x304634u: goto label_304634;
        case 0x304638u: goto label_304638;
        case 0x30463cu: goto label_30463c;
        case 0x304640u: goto label_304640;
        case 0x304644u: goto label_304644;
        case 0x304648u: goto label_304648;
        case 0x30464cu: goto label_30464c;
        case 0x304650u: goto label_304650;
        case 0x304654u: goto label_304654;
        case 0x304658u: goto label_304658;
        case 0x30465cu: goto label_30465c;
        case 0x304660u: goto label_304660;
        case 0x304664u: goto label_304664;
        case 0x304668u: goto label_304668;
        case 0x30466cu: goto label_30466c;
        case 0x304670u: goto label_304670;
        case 0x304674u: goto label_304674;
        case 0x304678u: goto label_304678;
        case 0x30467cu: goto label_30467c;
        case 0x304680u: goto label_304680;
        case 0x304684u: goto label_304684;
        case 0x304688u: goto label_304688;
        case 0x30468cu: goto label_30468c;
        case 0x304690u: goto label_304690;
        case 0x304694u: goto label_304694;
        case 0x304698u: goto label_304698;
        case 0x30469cu: goto label_30469c;
        case 0x3046a0u: goto label_3046a0;
        case 0x3046a4u: goto label_3046a4;
        case 0x3046a8u: goto label_3046a8;
        case 0x3046acu: goto label_3046ac;
        case 0x3046b0u: goto label_3046b0;
        case 0x3046b4u: goto label_3046b4;
        case 0x3046b8u: goto label_3046b8;
        case 0x3046bcu: goto label_3046bc;
        case 0x3046c0u: goto label_3046c0;
        case 0x3046c4u: goto label_3046c4;
        case 0x3046c8u: goto label_3046c8;
        case 0x3046ccu: goto label_3046cc;
        case 0x3046d0u: goto label_3046d0;
        case 0x3046d4u: goto label_3046d4;
        case 0x3046d8u: goto label_3046d8;
        case 0x3046dcu: goto label_3046dc;
        case 0x3046e0u: goto label_3046e0;
        case 0x3046e4u: goto label_3046e4;
        case 0x3046e8u: goto label_3046e8;
        case 0x3046ecu: goto label_3046ec;
        case 0x3046f0u: goto label_3046f0;
        case 0x3046f4u: goto label_3046f4;
        case 0x3046f8u: goto label_3046f8;
        case 0x3046fcu: goto label_3046fc;
        case 0x304700u: goto label_304700;
        case 0x304704u: goto label_304704;
        case 0x304708u: goto label_304708;
        case 0x30470cu: goto label_30470c;
        case 0x304710u: goto label_304710;
        case 0x304714u: goto label_304714;
        case 0x304718u: goto label_304718;
        case 0x30471cu: goto label_30471c;
        case 0x304720u: goto label_304720;
        case 0x304724u: goto label_304724;
        case 0x304728u: goto label_304728;
        case 0x30472cu: goto label_30472c;
        case 0x304730u: goto label_304730;
        case 0x304734u: goto label_304734;
        case 0x304738u: goto label_304738;
        case 0x30473cu: goto label_30473c;
        case 0x304740u: goto label_304740;
        case 0x304744u: goto label_304744;
        case 0x304748u: goto label_304748;
        case 0x30474cu: goto label_30474c;
        case 0x304750u: goto label_304750;
        case 0x304754u: goto label_304754;
        case 0x304758u: goto label_304758;
        case 0x30475cu: goto label_30475c;
        case 0x304760u: goto label_304760;
        case 0x304764u: goto label_304764;
        case 0x304768u: goto label_304768;
        case 0x30476cu: goto label_30476c;
        case 0x304770u: goto label_304770;
        case 0x304774u: goto label_304774;
        case 0x304778u: goto label_304778;
        case 0x30477cu: goto label_30477c;
        case 0x304780u: goto label_304780;
        case 0x304784u: goto label_304784;
        case 0x304788u: goto label_304788;
        case 0x30478cu: goto label_30478c;
        case 0x304790u: goto label_304790;
        case 0x304794u: goto label_304794;
        case 0x304798u: goto label_304798;
        case 0x30479cu: goto label_30479c;
        case 0x3047a0u: goto label_3047a0;
        case 0x3047a4u: goto label_3047a4;
        case 0x3047a8u: goto label_3047a8;
        case 0x3047acu: goto label_3047ac;
        case 0x3047b0u: goto label_3047b0;
        case 0x3047b4u: goto label_3047b4;
        case 0x3047b8u: goto label_3047b8;
        case 0x3047bcu: goto label_3047bc;
        case 0x3047c0u: goto label_3047c0;
        case 0x3047c4u: goto label_3047c4;
        case 0x3047c8u: goto label_3047c8;
        case 0x3047ccu: goto label_3047cc;
        case 0x3047d0u: goto label_3047d0;
        case 0x3047d4u: goto label_3047d4;
        case 0x3047d8u: goto label_3047d8;
        case 0x3047dcu: goto label_3047dc;
        case 0x3047e0u: goto label_3047e0;
        case 0x3047e4u: goto label_3047e4;
        case 0x3047e8u: goto label_3047e8;
        case 0x3047ecu: goto label_3047ec;
        case 0x3047f0u: goto label_3047f0;
        case 0x3047f4u: goto label_3047f4;
        case 0x3047f8u: goto label_3047f8;
        case 0x3047fcu: goto label_3047fc;
        case 0x304800u: goto label_304800;
        case 0x304804u: goto label_304804;
        case 0x304808u: goto label_304808;
        case 0x30480cu: goto label_30480c;
        case 0x304810u: goto label_304810;
        case 0x304814u: goto label_304814;
        case 0x304818u: goto label_304818;
        case 0x30481cu: goto label_30481c;
        case 0x304820u: goto label_304820;
        case 0x304824u: goto label_304824;
        case 0x304828u: goto label_304828;
        case 0x30482cu: goto label_30482c;
        case 0x304830u: goto label_304830;
        case 0x304834u: goto label_304834;
        case 0x304838u: goto label_304838;
        case 0x30483cu: goto label_30483c;
        case 0x304840u: goto label_304840;
        case 0x304844u: goto label_304844;
        case 0x304848u: goto label_304848;
        case 0x30484cu: goto label_30484c;
        case 0x304850u: goto label_304850;
        case 0x304854u: goto label_304854;
        case 0x304858u: goto label_304858;
        case 0x30485cu: goto label_30485c;
        case 0x304860u: goto label_304860;
        case 0x304864u: goto label_304864;
        case 0x304868u: goto label_304868;
        case 0x30486cu: goto label_30486c;
        case 0x304870u: goto label_304870;
        case 0x304874u: goto label_304874;
        default: break;
    }

    ctx->pc = 0x304360u;

label_304360:
    // 0x304360: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x304360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_304364:
    // 0x304364: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x304364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_304368:
    // 0x304368: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x304368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_30436c:
    // 0x30436c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30436cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_304370:
    // 0x304370: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x304370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_304374:
    // 0x304374: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x304374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_304378:
    // 0x304378: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x304378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_30437c:
    // 0x30437c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x30437cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_304380:
    // 0x304380: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x304380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_304384:
    // 0x304384: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x304384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_304388:
    // 0x304388: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x304388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_30438c:
    // 0x30438c: 0x12600117  beqz        $s3, . + 4 + (0x117 << 2)
label_304390:
    if (ctx->pc == 0x304390u) {
        ctx->pc = 0x304390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30438Cu;
        // 0x304390: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304394u;
        goto label_304394;
    }
    ctx->pc = 0x30438Cu;
    {
        const bool branch_taken_0x30438c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x304390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30438Cu;
        // 0x304390: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30438c) {
            ctx->pc = 0x3047ECu;
            goto label_3047ec;
        }
    }
    ctx->pc = 0x304394u;
label_304394:
    // 0x304394: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x304394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_304398:
    // 0x304398: 0x1040011f  beqz        $v0, . + 4 + (0x11F << 2)
label_30439c:
    if (ctx->pc == 0x30439Cu) {
        ctx->pc = 0x30439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304398u;
        // 0x30439c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3043A0u;
        goto label_3043a0;
    }
    ctx->pc = 0x304398u;
    {
        const bool branch_taken_0x304398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304398u;
        // 0x30439c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304398) {
            ctx->pc = 0x304818u;
            goto label_304818;
        }
    }
    ctx->pc = 0x3043A0u;
label_3043a0:
    // 0x3043a0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3043a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3043a4:
    // 0x3043a4: 0x1040010e  beqz        $v0, . + 4 + (0x10E << 2)
label_3043a8:
    if (ctx->pc == 0x3043A8u) {
        ctx->pc = 0x3043A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043A4u;
        // 0x3043a8: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3043ACu;
        goto label_3043ac;
    }
    ctx->pc = 0x3043A4u;
    {
        const bool branch_taken_0x3043a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3043A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043A4u;
        // 0x3043a8: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3043a4) {
            ctx->pc = 0x3047E0u;
            goto label_3047e0;
        }
    }
    ctx->pc = 0x3043ACu;
label_3043ac:
    // 0x3043ac: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x3043acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_3043b0:
    // 0x3043b0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3043b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3043b4:
    // 0x3043b4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x3043b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3043b8:
    // 0x3043b8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3043bc:
    if (ctx->pc == 0x3043BCu) {
        ctx->pc = 0x3043BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043B8u;
        // 0x3043bc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3043C0u;
        goto label_3043c0;
    }
    ctx->pc = 0x3043B8u;
    {
        const bool branch_taken_0x3043b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3043BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043B8u;
        // 0x3043bc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3043b8) {
            ctx->pc = 0x3043DCu;
            goto label_3043dc;
        }
    }
    ctx->pc = 0x3043C0u;
label_3043c0:
    // 0x3043c0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x3043c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_3043c4:
    // 0x3043c4: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x3043c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3043c8:
    // 0x3043c8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3043c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3043cc:
    // 0x3043cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3043ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3043d0:
    // 0x3043d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3043d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3043d4:
    // 0x3043d4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_3043d8:
    if (ctx->pc == 0x3043D8u) {
        ctx->pc = 0x3043D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043D4u;
        // 0x3043d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3043DCu;
        goto label_3043dc;
    }
    ctx->pc = 0x3043D4u;
    {
        const bool branch_taken_0x3043d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3043D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043D4u;
        // 0x3043d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3043d4) {
            ctx->pc = 0x304400u;
            goto label_304400;
        }
    }
    ctx->pc = 0x3043DCu;
label_3043dc:
    // 0x3043dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3043dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3043e0:
    // 0x3043e0: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x3043e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_3043e4:
    // 0x3043e4: 0xc092848  jal         func_24A120
label_3043e8:
    if (ctx->pc == 0x3043E8u) {
        ctx->pc = 0x3043E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043E4u;
        // 0x3043e8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3043ECu;
        goto label_3043ec;
    }
    ctx->pc = 0x3043E4u;
    SET_GPR_U32(ctx, 31, 0x3043ECu);
    ctx->pc = 0x3043E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3043E4u;
    // 0x3043e8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x3043E4u, 0x3043ECu)) {
        return;
    }
    ctx->pc = 0x3043ECu;
label_3043ec:
    // 0x3043ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3043ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3043f0:
    // 0x3043f0: 0xc09281a  jal         func_24A068
label_3043f4:
    if (ctx->pc == 0x3043F4u) {
        ctx->pc = 0x3043F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043F0u;
        // 0x3043f4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3043F8u;
        goto label_3043f8;
    }
    ctx->pc = 0x3043F0u;
    SET_GPR_U32(ctx, 31, 0x3043F8u);
    ctx->pc = 0x3043F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3043F0u;
    // 0x3043f4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x3043F0u, 0x3043F8u)) {
        return;
    }
    ctx->pc = 0x3043F8u;
label_3043f8:
    // 0x3043f8: 0x10000113  b           . + 4 + (0x113 << 2)
label_3043fc:
    if (ctx->pc == 0x3043FCu) {
        ctx->pc = 0x3043FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043F8u;
        // 0x3043fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304400u;
        goto label_304400;
    }
    ctx->pc = 0x3043F8u;
    {
        const bool branch_taken_0x3043f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3043FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043F8u;
        // 0x3043fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3043f8) {
            ctx->pc = 0x304848u;
            goto label_304848;
        }
    }
    ctx->pc = 0x304400u;
label_304400:
    // 0x304400: 0xc0c0d1c  jal         func_303470
label_304404:
    if (ctx->pc == 0x304404u) {
        ctx->pc = 0x304404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304400u;
        // 0x304404: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304408u;
        goto label_304408;
    }
    ctx->pc = 0x304400u;
    SET_GPR_U32(ctx, 31, 0x304408u);
    ctx->pc = 0x304404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304400u;
    // 0x304404: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x303470u, 0x304400u, 0x304408u)) {
        return;
    }
    ctx->pc = 0x304408u;
label_304408:
    // 0x304408: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x304408u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30440c:
    // 0x30440c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x30440cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_304410:
    // 0x304410: 0x8c634190  lw          $v1, 0x4190($v1)
    ctx->pc = 0x304410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16784)));
label_304414:
    // 0x304414: 0x26100fc8  addiu       $s0, $s0, 0xFC8
    ctx->pc = 0x304414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
label_304418:
    // 0x304418: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x304418u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_30441c:
    // 0x30441c: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x30441cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_304420:
    // 0x304420: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x304420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_304424:
    // 0x304424: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x304424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_304428:
    // 0x304428: 0x8c700038  lw          $s0, 0x38($v1)
    ctx->pc = 0x304428u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_30442c:
    // 0x30442c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30442cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_304430:
    // 0x304430: 0x2129018  mult        $s2, $s0, $s2
    ctx->pc = 0x304430u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_304434:
    // 0x304434: 0xc0c0e6a  jal         func_3039A8
label_304438:
    if (ctx->pc == 0x304438u) {
        ctx->pc = 0x304438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304434u;
        // 0x304438: 0x2058018  mult        $s0, $s0, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x30443Cu;
        goto label_30443c;
    }
    ctx->pc = 0x304434u;
    SET_GPR_U32(ctx, 31, 0x30443Cu);
    ctx->pc = 0x304438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304434u;
    // 0x304438: 0x2058018  mult        $s0, $s0, $a1 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3039A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3039A8u, 0x304434u, 0x30443Cu)) {
        return;
    }
    ctx->pc = 0x30443Cu;
label_30443c:
    // 0x30443c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x30443cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_304440:
    // 0x304440: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x304440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_304444:
    // 0x304444: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x304444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_304448:
    // 0x304448: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x304448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_30444c:
    // 0x30444c: 0x718818  mult        $s1, $v1, $s1
    ctx->pc = 0x30444cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_304450:
    // 0x304450: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x304450u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_304454:
    // 0x304454: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x304454u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_304458:
    // 0x304458: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x304458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30445c:
    // 0x30445c: 0x2263018  mult        $a2, $s1, $a2
    ctx->pc = 0x30445cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_304460:
    // 0x304460: 0x118900  sll         $s1, $s1, 4
    ctx->pc = 0x304460u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_304464:
    // 0x304464: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x304464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_304468:
    // 0x304468: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x304468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_30446c:
    // 0x30446c: 0xc0c0e7a  jal         func_3039E8
label_304470:
    if (ctx->pc == 0x304470u) {
        ctx->pc = 0x304470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30446Cu;
        // 0x304470: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304474u;
        goto label_304474;
    }
    ctx->pc = 0x30446Cu;
    SET_GPR_U32(ctx, 31, 0x304474u);
    ctx->pc = 0x304470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30446Cu;
    // 0x304470: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3039E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3039E8u, 0x30446Cu, 0x304474u)) {
        return;
    }
    ctx->pc = 0x304474u;
label_304474:
    // 0x304474: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x304474u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_304478:
    // 0x304478: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x304478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_30447c:
    // 0x30447c: 0x212182b  sltu        $v1, $s0, $s2
    ctx->pc = 0x30447cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_304480:
    // 0x304480: 0x243800b  movn        $s0, $s2, $v1
    ctx->pc = 0x304480u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18));
label_304484:
    // 0x304484: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x304484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_304488:
    // 0x304488: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_30448c:
    if (ctx->pc == 0x30448Cu) {
        ctx->pc = 0x30448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304488u;
        // 0x30448c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304490u;
        goto label_304490;
    }
    ctx->pc = 0x304488u;
    {
        const bool branch_taken_0x304488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304488u;
        // 0x30448c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304488) {
            ctx->pc = 0x3044A0u;
            goto label_3044a0;
        }
    }
    ctx->pc = 0x304490u;
label_304490:
    // 0x304490: 0xc0c0d48  jal         func_303520
label_304494:
    if (ctx->pc == 0x304494u) {
        ctx->pc = 0x304494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304490u;
        // 0x304494: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304498u;
        goto label_304498;
    }
    ctx->pc = 0x304490u;
    SET_GPR_U32(ctx, 31, 0x304498u);
    ctx->pc = 0x304494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304490u;
    // 0x304494: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303520u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x303520u, 0x304490u, 0x304498u)) {
        return;
    }
    ctx->pc = 0x304498u;
label_304498:
    // 0x304498: 0x504000eb  beql        $v0, $zero, . + 4 + (0xEB << 2)
label_30449c:
    if (ctx->pc == 0x30449Cu) {
        ctx->pc = 0x30449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304498u;
        // 0x30449c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3044A0u;
        goto label_3044a0;
    }
    ctx->pc = 0x304498u;
    {
        const bool branch_taken_0x304498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304498) {
            ctx->pc = 0x30449Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304498u;
            // 0x30449c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304848u;
            goto label_304848;
        }
    }
    ctx->pc = 0x3044A0u;
label_3044a0:
    // 0x3044a0: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x3044a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_3044a4:
    // 0x3044a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3044a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3044a8:
    // 0x3044a8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x3044a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_3044ac:
    // 0x3044ac: 0xac203d54  sw          $zero, 0x3D54($at)
    ctx->pc = 0x3044acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15700), GPR_U32(ctx, 0));
label_3044b0:
    // 0x3044b0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3044b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3044b4:
    // 0x3044b4: 0xc0c1048  jal         func_304120
label_3044b8:
    if (ctx->pc == 0x3044B8u) {
        ctx->pc = 0x3044B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3044B4u;
        // 0x3044b8: 0xaf828ce0  sw          $v0, -0x7320($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937824), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3044BCu;
        goto label_3044bc;
    }
    ctx->pc = 0x3044B4u;
    SET_GPR_U32(ctx, 31, 0x3044BCu);
    ctx->pc = 0x3044B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3044B4u;
    // 0x3044b8: 0xaf828ce0  sw          $v0, -0x7320($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937824), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304120u, 0x3044B4u, 0x3044BCu)) {
        return;
    }
    ctx->pc = 0x3044BCu;
label_3044bc:
    // 0x3044bc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3044bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3044c0:
    // 0x3044c0: 0x126000e1  beqz        $s3, . + 4 + (0xE1 << 2)
label_3044c4:
    if (ctx->pc == 0x3044C4u) {
        ctx->pc = 0x3044C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3044C0u;
        // 0x3044c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3044C8u;
        goto label_3044c8;
    }
    ctx->pc = 0x3044C0u;
    {
        const bool branch_taken_0x3044c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3044C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3044C0u;
        // 0x3044c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3044c0) {
            ctx->pc = 0x304848u;
            goto label_304848;
        }
    }
    ctx->pc = 0x3044C8u;
label_3044c8:
    // 0x3044c8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3044c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3044cc:
    // 0x3044cc: 0x8c424190  lw          $v0, 0x4190($v0)
    ctx->pc = 0x3044ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16784)));
label_3044d0:
    // 0x3044d0: 0x26840fc8  addiu       $a0, $s4, 0xFC8
    ctx->pc = 0x3044d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4040));
label_3044d4:
    // 0x3044d4: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x3044d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3044d8:
    // 0x3044d8: 0x24080028  addiu       $t0, $zero, 0x28
    ctx->pc = 0x3044d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_3044dc:
    // 0x3044dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3044dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3044e0:
    // 0x3044e0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3044e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3044e4:
    // 0x3044e4: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x3044e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_3044e8:
    // 0x3044e8: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x3044e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3044ec:
    // 0x3044ec: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x3044ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3044f0:
    // 0x3044f0: 0x24b1ffff  addiu       $s1, $a1, -0x1
    ctx->pc = 0x3044f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_3044f4:
    // 0x3044f4: 0x883018  mult        $a2, $a0, $t0
    ctx->pc = 0x3044f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_3044f8:
    // 0x3044f8: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x3044f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_3044fc:
    // 0x3044fc: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x3044fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_304500:
    // 0x304500: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x304500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_304504:
    // 0x304504: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x304504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_304508:
    // 0x304508: 0x24a5fff4  addiu       $a1, $a1, -0xC
    ctx->pc = 0x304508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967284));
label_30450c:
    // 0x30450c: 0xe6a821  addu        $s5, $a3, $a2
    ctx->pc = 0x30450cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_304510:
    // 0x304510: 0x2a4a021  addu        $s4, $s5, $a0
    ctx->pc = 0x304510u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_304514:
    // 0x304514: 0x6200010  bltz        $s1, . + 4 + (0x10 << 2)
label_304518:
    if (ctx->pc == 0x304518u) {
        ctx->pc = 0x304518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304514u;
        // 0x304518: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30451Cu;
        goto label_30451c;
    }
    ctx->pc = 0x304514u;
    {
        const bool branch_taken_0x304514 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x304518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304514u;
        // 0x304518: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304514) {
            ctx->pc = 0x304558u;
            goto label_304558;
        }
    }
    ctx->pc = 0x30451Cu;
label_30451c:
    // 0x30451c: 0x2281818  mult        $v1, $s1, $t0
    ctx->pc = 0x30451cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_304520:
    // 0x304520: 0x6a820007  ldl         $v0, 0x7($s4)
    ctx->pc = 0x304520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_304524:
    // 0x304524: 0x6e820000  ldr         $v0, 0x0($s4)
    ctx->pc = 0x304524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_304528:
    // 0x304528: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x304528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_30452c:
    // 0x30452c: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x30452cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_304530:
    // 0x304530: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x304530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_304534:
    // 0x304534: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x304534u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_304538:
    // 0x304538: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x304538u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_30453c:
    // 0x30453c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x30453cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_304540:
    // 0x304540: 0x2694fff4  addiu       $s4, $s4, -0xC
    ctx->pc = 0x304540u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967284));
label_304544:
    // 0x304544: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x304544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_304548:
    // 0x304548: 0xac45001c  sw          $a1, 0x1C($v0)
    ctx->pc = 0x304548u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
label_30454c:
    // 0x30454c: 0x2463ffd8  addiu       $v1, $v1, -0x28
    ctx->pc = 0x30454cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
label_304550:
    // 0x304550: 0x621fff3  bgez        $s1, . + 4 + (-0xD << 2)
label_304554:
    if (ctx->pc == 0x304554u) {
        ctx->pc = 0x304554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304550u;
        // 0x304554: 0x24a5fff4  addiu       $a1, $a1, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304558u;
        goto label_304558;
    }
    ctx->pc = 0x304550u;
    {
        const bool branch_taken_0x304550 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x304554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304550u;
        // 0x304554: 0x24a5fff4  addiu       $a1, $a1, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304550) {
            ctx->pc = 0x304520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304520;
        }
    }
    ctx->pc = 0x304558u;
label_304558:
    // 0x304558: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x304558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_30455c:
    // 0x30455c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x30455cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_304560:
    // 0x304560: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x304560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_304564:
    // 0x304564: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x304564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304568:
    // 0x304568: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x304568u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_30456c:
    // 0x30456c: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
label_304570:
    if (ctx->pc == 0x304570u) {
        ctx->pc = 0x304570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30456Cu;
        // 0x304570: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304574u;
        goto label_304574;
    }
    ctx->pc = 0x30456Cu;
    {
        const bool branch_taken_0x30456c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x304570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30456Cu;
        // 0x304570: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30456c) {
            ctx->pc = 0x3045DCu;
            goto label_3045dc;
        }
    }
    ctx->pc = 0x304574u;
label_304574:
    // 0x304574: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x304574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304578:
    // 0x304578: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x304578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_30457c:
    // 0x30457c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x30457cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_304580:
    // 0x304580: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x304580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_304584:
    // 0x304584: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_304588:
    if (ctx->pc == 0x304588u) {
        ctx->pc = 0x304588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304584u;
        // 0x304588: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30458Cu;
        goto label_30458c;
    }
    ctx->pc = 0x304584u;
    {
        const bool branch_taken_0x304584 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x304588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304584u;
        // 0x304588: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304584) {
            ctx->pc = 0x304594u;
            goto label_304594;
        }
    }
    ctx->pc = 0x30458Cu;
label_30458c:
    // 0x30458c: 0x10000007  b           . + 4 + (0x7 << 2)
label_304590:
    if (ctx->pc == 0x304590u) {
        ctx->pc = 0x304590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30458Cu;
        // 0x304590: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304594u;
        goto label_304594;
    }
    ctx->pc = 0x30458Cu;
    {
        const bool branch_taken_0x30458c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30458Cu;
        // 0x304590: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30458c) {
            ctx->pc = 0x3045ACu;
            goto label_3045ac;
        }
    }
    ctx->pc = 0x304594u;
label_304594:
    // 0x304594: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x304594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_304598:
    // 0x304598: 0xc075fdc  jal         func_1D7F70
label_30459c:
    if (ctx->pc == 0x30459Cu) {
        ctx->pc = 0x30459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304598u;
        // 0x30459c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3045A0u;
        goto label_3045a0;
    }
    ctx->pc = 0x304598u;
    SET_GPR_U32(ctx, 31, 0x3045A0u);
    ctx->pc = 0x30459Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304598u;
    // 0x30459c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x304598u, 0x3045A0u)) {
        return;
    }
    ctx->pc = 0x3045A0u;
label_3045a0:
    // 0x3045a0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x3045a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3045a4:
    // 0x3045a4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x3045a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_3045a8:
    // 0x3045a8: 0xac720008  sw          $s2, 0x8($v1)
    ctx->pc = 0x3045a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 18));
label_3045ac:
    // 0x3045ac: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3045acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3045b0:
    // 0x3045b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3045b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3045b4:
    // 0x3045b4: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3045b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3045b8:
    // 0x3045b8: 0x26b50080  addiu       $s5, $s5, 0x80
    ctx->pc = 0x3045b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
label_3045bc:
    // 0x3045bc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3045bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3045c0:
    // 0x3045c0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3045c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3045c4:
    // 0x3045c4: 0x224202b  sltu        $a0, $s1, $a0
    ctx->pc = 0x3045c4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3045c8:
    // 0x3045c8: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x3045c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_3045cc:
    // 0x3045cc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3045ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3045d0:
    // 0x3045d0: 0x3c3f021  addu        $fp, $fp, $v1
    ctx->pc = 0x3045d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_3045d4:
    // 0x3045d4: 0x1480ffe8  bnez        $a0, . + 4 + (-0x18 << 2)
label_3045d8:
    if (ctx->pc == 0x3045D8u) {
        ctx->pc = 0x3045D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3045D4u;
        // 0x3045d8: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3045DCu;
        goto label_3045dc;
    }
    ctx->pc = 0x3045D4u;
    {
        const bool branch_taken_0x3045d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3045D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3045D4u;
        // 0x3045d8: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3045d4) {
            ctx->pc = 0x304578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304578;
        }
    }
    ctx->pc = 0x3045DCu;
label_3045dc:
    // 0x3045dc: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x3045dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_3045e0:
    // 0x3045e0: 0xaf948ce0  sw          $s4, -0x7320($gp)
    ctx->pc = 0x3045e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937824), GPR_U32(ctx, 20));
label_3045e4:
    // 0x3045e4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x3045e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_3045e8:
    // 0x3045e8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x3045e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_3045ec:
    // 0x3045ec: 0xac223d54  sw          $v0, 0x3D54($at)
    ctx->pc = 0x3045ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15700), GPR_U32(ctx, 2));
label_3045f0:
    // 0x3045f0: 0xc0c185e  jal         func_306178
label_3045f4:
    if (ctx->pc == 0x3045F4u) {
        ctx->pc = 0x3045F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3045F0u;
        // 0x3045f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3045F8u;
        goto label_3045f8;
    }
    ctx->pc = 0x3045F0u;
    SET_GPR_U32(ctx, 31, 0x3045F8u);
    ctx->pc = 0x3045F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3045F0u;
    // 0x3045f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306178u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x306178u, 0x3045F0u, 0x3045F8u)) {
        return;
    }
    ctx->pc = 0x3045F8u;
label_3045f8:
    // 0x3045f8: 0x14400093  bnez        $v0, . + 4 + (0x93 << 2)
label_3045fc:
    if (ctx->pc == 0x3045FCu) {
        ctx->pc = 0x3045FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3045F8u;
        // 0x3045fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304600u;
        goto label_304600;
    }
    ctx->pc = 0x3045F8u;
    {
        const bool branch_taken_0x3045f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3045FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3045F8u;
        // 0x3045fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3045f8) {
            ctx->pc = 0x304848u;
            goto label_304848;
        }
    }
    ctx->pc = 0x304600u;
label_304600:
    // 0x304600: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x304600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_304604:
    // 0x304604: 0x8c423d54  lw          $v0, 0x3D54($v0)
    ctx->pc = 0x304604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15700)));
label_304608:
    // 0x304608: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x304608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30460c:
    // 0x30460c: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x30460cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_304610:
    // 0x304610: 0xc0c0d48  jal         func_303520
label_304614:
    if (ctx->pc == 0x304614u) {
        ctx->pc = 0x304614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304610u;
        // 0x304614: 0x452823  subu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304618u;
        goto label_304618;
    }
    ctx->pc = 0x304610u;
    SET_GPR_U32(ctx, 31, 0x304618u);
    ctx->pc = 0x304614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304610u;
    // 0x304614: 0x452823  subu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303520u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x303520u, 0x304610u, 0x304618u)) {
        return;
    }
    ctx->pc = 0x304618u;
label_304618:
    // 0x304618: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
label_30461c:
    if (ctx->pc == 0x30461Cu) {
        ctx->pc = 0x30461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304618u;
        // 0x30461c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304620u;
        goto label_304620;
    }
    ctx->pc = 0x304618u;
    {
        const bool branch_taken_0x304618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304618u;
        // 0x30461c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304618) {
            ctx->pc = 0x30483Cu;
            goto label_30483c;
        }
    }
    ctx->pc = 0x304620u;
label_304620:
    // 0x304620: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x304620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_304624:
    // 0x304624: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_304628:
    if (ctx->pc == 0x304628u) {
        ctx->pc = 0x304628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304624u;
        // 0x304628: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30462Cu;
        goto label_30462c;
    }
    ctx->pc = 0x304624u;
    {
        const bool branch_taken_0x304624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304624u;
        // 0x304628: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304624) {
            ctx->pc = 0x304654u;
            goto label_304654;
        }
    }
    ctx->pc = 0x30462Cu;
label_30462c:
    // 0x30462c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x30462cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304630:
    // 0x304630: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x304630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_304634:
    // 0x304634: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x304634u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_304638:
    // 0x304638: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x304638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30463c:
    // 0x30463c: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x30463cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_304640:
    // 0x304640: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x304640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_304644:
    // 0x304644: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x304644u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_304648:
    // 0x304648: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_30464c:
    if (ctx->pc == 0x30464Cu) {
        ctx->pc = 0x30464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304648u;
        // 0x30464c: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304650u;
        goto label_304650;
    }
    ctx->pc = 0x304648u;
    {
        const bool branch_taken_0x304648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304648u;
        // 0x30464c: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304648) {
            ctx->pc = 0x304630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304630;
        }
    }
    ctx->pc = 0x304650u;
label_304650:
    // 0x304650: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x304650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_304654:
    // 0x304654: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x304654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_304658:
    // 0x304658: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x304658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_30465c:
    // 0x30465c: 0x10000015  b           . + 4 + (0x15 << 2)
label_304660:
    if (ctx->pc == 0x304660u) {
        ctx->pc = 0x304660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30465Cu;
        // 0x304660: 0x223a018  mult        $s4, $s1, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x304664u;
        goto label_304664;
    }
    ctx->pc = 0x30465Cu;
    {
        const bool branch_taken_0x30465c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30465Cu;
        // 0x304660: 0x223a018  mult        $s4, $s1, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30465c) {
            ctx->pc = 0x3046B4u;
            goto label_3046b4;
        }
    }
    ctx->pc = 0x304664u;
label_304664:
    // 0x304664: 0x0  nop
    ctx->pc = 0x304664u;
    // NOP
label_304668:
    // 0x304668: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x304668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_30466c:
    // 0x30466c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_304670:
    if (ctx->pc == 0x304670u) {
        ctx->pc = 0x304670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30466Cu;
        // 0x304670: 0x2694ffd8  addiu       $s4, $s4, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304674u;
        goto label_304674;
    }
    ctx->pc = 0x30466Cu;
    {
        const bool branch_taken_0x30466c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30466c) {
            ctx->pc = 0x304670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30466Cu;
            // 0x304670: 0x2694ffd8  addiu       $s4, $s4, -0x28 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3046B0u;
            goto label_3046b0;
        }
    }
    ctx->pc = 0x304674u;
label_304674:
    // 0x304674: 0x40f809  jalr        $v0
label_304678:
    if (ctx->pc == 0x304678u) {
        ctx->pc = 0x304678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304674u;
        // 0x304678: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30467Cu;
        goto label_30467c;
    }
    ctx->pc = 0x304674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30467Cu);
        ctx->pc = 0x304678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304674u;
        // 0x304678: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304674u, 0x30467Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30467Cu;
label_30467c:
    // 0x30467c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_304680:
    if (ctx->pc == 0x304680u) {
        ctx->pc = 0x304680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30467Cu;
        // 0x304680: 0x2694ffd8  addiu       $s4, $s4, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304684u;
        goto label_304684;
    }
    ctx->pc = 0x30467Cu;
    {
        const bool branch_taken_0x30467c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30467c) {
            ctx->pc = 0x304680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30467Cu;
            // 0x304680: 0x2694ffd8  addiu       $s4, $s4, -0x28 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3046B0u;
            goto label_3046b0;
        }
    }
    ctx->pc = 0x304684u;
label_304684:
    // 0x304684: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x304684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_304688:
    // 0x304688: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x304688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_30468c:
    // 0x30468c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_304690:
    if (ctx->pc == 0x304690u) {
        ctx->pc = 0x304690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30468Cu;
        // 0x304690: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304694u;
        goto label_304694;
    }
    ctx->pc = 0x30468Cu;
    {
        const bool branch_taken_0x30468c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30468Cu;
        // 0x304690: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30468c) {
            ctx->pc = 0x3046F8u;
            goto label_3046f8;
        }
    }
    ctx->pc = 0x304694u;
label_304694:
    // 0x304694: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x304694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_304698:
    // 0x304698: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_30469c:
    if (ctx->pc == 0x30469Cu) {
        ctx->pc = 0x30469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304698u;
        // 0x30469c: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3046A0u;
        goto label_3046a0;
    }
    ctx->pc = 0x304698u;
    {
        const bool branch_taken_0x304698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304698) {
            ctx->pc = 0x30469Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304698u;
            // 0x30469c: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3046FCu;
            goto label_3046fc;
        }
    }
    ctx->pc = 0x3046A0u;
label_3046a0:
    // 0x3046a0: 0x40f809  jalr        $v0
label_3046a4:
    if (ctx->pc == 0x3046A4u) {
        ctx->pc = 0x3046A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046A0u;
        // 0x3046a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3046A8u;
        goto label_3046a8;
    }
    ctx->pc = 0x3046A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3046A8u);
        ctx->pc = 0x3046A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046A0u;
        // 0x3046a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3046A0u, 0x3046A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3046A8u;
label_3046a8:
    // 0x3046a8: 0x10000014  b           . + 4 + (0x14 << 2)
label_3046ac:
    if (ctx->pc == 0x3046ACu) {
        ctx->pc = 0x3046ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046A8u;
        // 0x3046ac: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3046B0u;
        goto label_3046b0;
    }
    ctx->pc = 0x3046A8u;
    {
        const bool branch_taken_0x3046a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3046ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046A8u;
        // 0x3046ac: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3046a8) {
            ctx->pc = 0x3046FCu;
            goto label_3046fc;
        }
    }
    ctx->pc = 0x3046B0u;
label_3046b0:
    // 0x3046b0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3046b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3046b4:
    // 0x3046b4: 0x6200014  bltz        $s1, . + 4 + (0x14 << 2)
label_3046b8:
    if (ctx->pc == 0x3046B8u) {
        ctx->pc = 0x3046BCu;
        goto label_3046bc;
    }
    ctx->pc = 0x3046B4u;
    {
        const bool branch_taken_0x3046b4 = (GPR_S64(ctx, 17) < 0);
        if (branch_taken_0x3046b4) {
            ctx->pc = 0x304708u;
            goto label_304708;
        }
    }
    ctx->pc = 0x3046BCu;
label_3046bc:
    // 0x3046bc: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3046bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3046c0:
    // 0x3046c0: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x3046c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3046c4:
    // 0x3046c4: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x3046c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3046c8:
    // 0x3046c8: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x3046c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_3046cc:
    // 0x3046cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3046ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3046d0:
    // 0x3046d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3046d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3046d4:
    // 0x3046d4: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
label_3046d8:
    if (ctx->pc == 0x3046D8u) {
        ctx->pc = 0x3046D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046D4u;
        // 0x3046d8: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3046DCu;
        goto label_3046dc;
    }
    ctx->pc = 0x3046D4u;
    {
        const bool branch_taken_0x3046d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3046D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046D4u;
        // 0x3046d8: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3046d4) {
            ctx->pc = 0x304668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304668;
        }
    }
    ctx->pc = 0x3046DCu;
label_3046dc:
    // 0x3046dc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3046dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3046e0:
    // 0x3046e0: 0x5040ffe2  beql        $v0, $zero, . + 4 + (-0x1E << 2)
label_3046e4:
    if (ctx->pc == 0x3046E4u) {
        ctx->pc = 0x3046E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046E0u;
        // 0x3046e4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3046E8u;
        goto label_3046e8;
    }
    ctx->pc = 0x3046E0u;
    {
        const bool branch_taken_0x3046e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3046e0) {
            ctx->pc = 0x3046E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3046E0u;
            // 0x3046e4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30466Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30466c;
        }
    }
    ctx->pc = 0x3046E8u;
label_3046e8:
    // 0x3046e8: 0x40f809  jalr        $v0
label_3046ec:
    if (ctx->pc == 0x3046ECu) {
        ctx->pc = 0x3046ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046E8u;
        // 0x3046ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3046F0u;
        goto label_3046f0;
    }
    ctx->pc = 0x3046E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3046F0u);
        ctx->pc = 0x3046ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046E8u;
        // 0x3046ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3046E8u, 0x3046F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3046F0u;
label_3046f0:
    // 0x3046f0: 0x5440ffde  bnel        $v0, $zero, . + 4 + (-0x22 << 2)
label_3046f4:
    if (ctx->pc == 0x3046F4u) {
        ctx->pc = 0x3046F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046F0u;
        // 0x3046f4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3046F8u;
        goto label_3046f8;
    }
    ctx->pc = 0x3046F0u;
    {
        const bool branch_taken_0x3046f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3046f0) {
            ctx->pc = 0x3046F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3046F0u;
            // 0x3046f4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30466Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30466c;
        }
    }
    ctx->pc = 0x3046F8u;
label_3046f8:
    // 0x3046f8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x3046f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3046fc:
    // 0x3046fc: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x3046fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_304700:
    // 0x304700: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x304700u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304704:
    // 0x304704: 0x62b823  subu        $s7, $v1, $v0
    ctx->pc = 0x304704u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_304708:
    // 0x304708: 0x16c00017  bnez        $s6, . + 4 + (0x17 << 2)
label_30470c:
    if (ctx->pc == 0x30470Cu) {
        ctx->pc = 0x30470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304708u;
        // 0x30470c: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304710u;
        goto label_304710;
    }
    ctx->pc = 0x304708u;
    {
        const bool branch_taken_0x304708 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x30470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304708u;
        // 0x30470c: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304708) {
            ctx->pc = 0x304768u;
            goto label_304768;
        }
    }
    ctx->pc = 0x304710u;
label_304710:
    // 0x304710: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x304710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_304714:
    // 0x304714: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x304714u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_304718:
    // 0x304718: 0x10000002  b           . + 4 + (0x2 << 2)
label_30471c:
    if (ctx->pc == 0x30471Cu) {
        ctx->pc = 0x30471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304718u;
        // 0x30471c: 0x2238018  mult        $s0, $s1, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x304720u;
        goto label_304720;
    }
    ctx->pc = 0x304718u;
    {
        const bool branch_taken_0x304718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304718u;
        // 0x30471c: 0x2238018  mult        $s0, $s1, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x304718) {
            ctx->pc = 0x304724u;
            goto label_304724;
        }
    }
    ctx->pc = 0x304720u;
label_304720:
    // 0x304720: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x304720u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_304724:
    // 0x304724: 0x620000d  bltz        $s1, . + 4 + (0xD << 2)
label_304728:
    if (ctx->pc == 0x304728u) {
        ctx->pc = 0x30472Cu;
        goto label_30472c;
    }
    ctx->pc = 0x304724u;
    {
        const bool branch_taken_0x304724 = (GPR_S64(ctx, 17) < 0);
        if (branch_taken_0x304724) {
            ctx->pc = 0x30475Cu;
            goto label_30475c;
        }
    }
    ctx->pc = 0x30472Cu;
label_30472c:
    // 0x30472c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x30472cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_304730:
    // 0x304730: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x304730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_304734:
    // 0x304734: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x304734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_304738:
    // 0x304738: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x304738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_30473c:
    // 0x30473c: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
label_304740:
    if (ctx->pc == 0x304740u) {
        ctx->pc = 0x304740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30473Cu;
        // 0x304740: 0x2610ffd8  addiu       $s0, $s0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304744u;
        goto label_304744;
    }
    ctx->pc = 0x30473Cu;
    {
        const bool branch_taken_0x30473c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30473c) {
            ctx->pc = 0x304740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30473Cu;
            // 0x304740: 0x2610ffd8  addiu       $s0, $s0, -0x28 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304720;
        }
    }
    ctx->pc = 0x304744u;
label_304744:
    // 0x304744: 0x40f809  jalr        $v0
label_304748:
    if (ctx->pc == 0x304748u) {
        ctx->pc = 0x304748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304744u;
        // 0x304748: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30474Cu;
        goto label_30474c;
    }
    ctx->pc = 0x304744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30474Cu);
        ctx->pc = 0x304748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304744u;
        // 0x304748: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304744u, 0x30474Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30474Cu;
label_30474c:
    // 0x30474c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
label_304750:
    if (ctx->pc == 0x304750u) {
        ctx->pc = 0x304750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30474Cu;
        // 0x304750: 0x2610ffd8  addiu       $s0, $s0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304754u;
        goto label_304754;
    }
    ctx->pc = 0x30474Cu;
    {
        const bool branch_taken_0x30474c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30474c) {
            ctx->pc = 0x304750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30474Cu;
            // 0x304750: 0x2610ffd8  addiu       $s0, $s0, -0x28 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304720;
        }
    }
    ctx->pc = 0x304754u;
label_304754:
    // 0x304754: 0x8e770004  lw          $s7, 0x4($s3)
    ctx->pc = 0x304754u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_304758:
    // 0x304758: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x304758u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30475c:
    // 0x30475c: 0x12c00021  beqz        $s6, . + 4 + (0x21 << 2)
label_304760:
    if (ctx->pc == 0x304760u) {
        ctx->pc = 0x304760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30475Cu;
        // 0x304760: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304764u;
        goto label_304764;
    }
    ctx->pc = 0x30475Cu;
    {
        const bool branch_taken_0x30475c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x304760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30475Cu;
        // 0x304760: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30475c) {
            ctx->pc = 0x3047E4u;
            goto label_3047e4;
        }
    }
    ctx->pc = 0x304764u;
label_304764:
    // 0x304764: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x304764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_304768:
    // 0x304768: 0x578823  subu        $s1, $v0, $s7
    ctx->pc = 0x304768u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_30476c:
    // 0x30476c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x30476cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_304770:
    // 0x304770: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_304774:
    if (ctx->pc == 0x304774u) {
        ctx->pc = 0x304774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304770u;
        // 0x304774: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304778u;
        goto label_304778;
    }
    ctx->pc = 0x304770u;
    {
        const bool branch_taken_0x304770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304770u;
        // 0x304774: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304770) {
            ctx->pc = 0x304838u;
            goto label_304838;
        }
    }
    ctx->pc = 0x304778u;
label_304778:
    // 0x304778: 0x2229018  mult        $s2, $s1, $v0
    ctx->pc = 0x304778u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_30477c:
    // 0x30477c: 0x0  nop
    ctx->pc = 0x30477cu;
    // NOP
label_304780:
    // 0x304780: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x304780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_304784:
    // 0x304784: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x304784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_304788:
    // 0x304788: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x304788u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_30478c:
    // 0x30478c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x30478cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_304790:
    // 0x304790: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_304794:
    if (ctx->pc == 0x304794u) {
        ctx->pc = 0x304794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304790u;
        // 0x304794: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304798u;
        goto label_304798;
    }
    ctx->pc = 0x304790u;
    {
        const bool branch_taken_0x304790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304790) {
            ctx->pc = 0x304794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304790u;
            // 0x304794: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3047A4u;
            goto label_3047a4;
        }
    }
    ctx->pc = 0x304798u;
label_304798:
    // 0x304798: 0x40f809  jalr        $v0
label_30479c:
    if (ctx->pc == 0x30479Cu) {
        ctx->pc = 0x3047A0u;
        goto label_3047a0;
    }
    ctx->pc = 0x304798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3047A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304798u, 0x3047A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3047A0u;
label_3047a0:
    // 0x3047a0: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x3047a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_3047a4:
    // 0x3047a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3047a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3047a8:
    // 0x3047a8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3047ac:
    if (ctx->pc == 0x3047ACu) {
        ctx->pc = 0x3047ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047A8u;
        // 0x3047ac: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3047B0u;
        goto label_3047b0;
    }
    ctx->pc = 0x3047A8u;
    {
        const bool branch_taken_0x3047a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3047ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047A8u;
        // 0x3047ac: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3047a8) {
            ctx->pc = 0x3047C4u;
            goto label_3047c4;
        }
    }
    ctx->pc = 0x3047B0u;
label_3047b0:
    // 0x3047b0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3047b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3047b4:
    // 0x3047b4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3047b8:
    if (ctx->pc == 0x3047B8u) {
        ctx->pc = 0x3047B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047B4u;
        // 0x3047b8: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3047BCu;
        goto label_3047bc;
    }
    ctx->pc = 0x3047B4u;
    {
        const bool branch_taken_0x3047b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3047b4) {
            ctx->pc = 0x3047B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3047B4u;
            // 0x3047b8: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3047C8u;
            goto label_3047c8;
        }
    }
    ctx->pc = 0x3047BCu;
label_3047bc:
    // 0x3047bc: 0x40f809  jalr        $v0
label_3047c0:
    if (ctx->pc == 0x3047C0u) {
        ctx->pc = 0x3047C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047BCu;
        // 0x3047c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3047C4u;
        goto label_3047c4;
    }
    ctx->pc = 0x3047BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3047C4u);
        ctx->pc = 0x3047C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047BCu;
        // 0x3047c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3047BCu, 0x3047C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3047C4u;
label_3047c4:
    // 0x3047c4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3047c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3047c8:
    // 0x3047c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3047c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3047cc:
    // 0x3047cc: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3047ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3047d0:
    // 0x3047d0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_3047d4:
    if (ctx->pc == 0x3047D4u) {
        ctx->pc = 0x3047D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047D0u;
        // 0x3047d4: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3047D8u;
        goto label_3047d8;
    }
    ctx->pc = 0x3047D0u;
    {
        const bool branch_taken_0x3047d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3047D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047D0u;
        // 0x3047d4: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3047d0) {
            ctx->pc = 0x304780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304780;
        }
    }
    ctx->pc = 0x3047D8u;
label_3047d8:
    // 0x3047d8: 0x10000018  b           . + 4 + (0x18 << 2)
label_3047dc:
    if (ctx->pc == 0x3047DCu) {
        ctx->pc = 0x3047DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047D8u;
        // 0x3047dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3047E0u;
        goto label_3047e0;
    }
    ctx->pc = 0x3047D8u;
    {
        const bool branch_taken_0x3047d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3047DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047D8u;
        // 0x3047dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3047d8) {
            ctx->pc = 0x30483Cu;
            goto label_30483c;
        }
    }
    ctx->pc = 0x3047E0u;
label_3047e0:
    // 0x3047e0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3047e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3047e4:
    // 0x3047e4: 0x10000018  b           . + 4 + (0x18 << 2)
label_3047e8:
    if (ctx->pc == 0x3047E8u) {
        ctx->pc = 0x3047E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047E4u;
        // 0x3047e8: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3047ECu;
        goto label_3047ec;
    }
    ctx->pc = 0x3047E4u;
    {
        const bool branch_taken_0x3047e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3047E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047E4u;
        // 0x3047e8: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3047e4) {
            ctx->pc = 0x304848u;
            goto label_304848;
        }
    }
    ctx->pc = 0x3047ECu;
label_3047ec:
    // 0x3047ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3047ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3047f0:
    // 0x3047f0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3047f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3047f4:
    // 0x3047f4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3047f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3047f8:
    // 0x3047f8: 0xc092848  jal         func_24A120
label_3047fc:
    if (ctx->pc == 0x3047FCu) {
        ctx->pc = 0x3047FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047F8u;
        // 0x3047fc: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        ctx->pc = 0x304800u;
        goto label_304800;
    }
    ctx->pc = 0x3047F8u;
    SET_GPR_U32(ctx, 31, 0x304800u);
    ctx->pc = 0x3047FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3047F8u;
    // 0x3047fc: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x3047F8u, 0x304800u)) {
        return;
    }
    ctx->pc = 0x304800u;
label_304800:
    // 0x304800: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x304800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_304804:
    // 0x304804: 0xc09281a  jal         func_24A068
label_304808:
    if (ctx->pc == 0x304808u) {
        ctx->pc = 0x304808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304804u;
        // 0x304808: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30480Cu;
        goto label_30480c;
    }
    ctx->pc = 0x304804u;
    SET_GPR_U32(ctx, 31, 0x30480Cu);
    ctx->pc = 0x304808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304804u;
    // 0x304808: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x304804u, 0x30480Cu)) {
        return;
    }
    ctx->pc = 0x30480Cu;
label_30480c:
    // 0x30480c: 0x1000000e  b           . + 4 + (0xE << 2)
label_304810:
    if (ctx->pc == 0x304810u) {
        ctx->pc = 0x304810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30480Cu;
        // 0x304810: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304814u;
        goto label_304814;
    }
    ctx->pc = 0x30480Cu;
    {
        const bool branch_taken_0x30480c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30480Cu;
        // 0x304810: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30480c) {
            ctx->pc = 0x304848u;
            goto label_304848;
        }
    }
    ctx->pc = 0x304814u;
label_304814:
    // 0x304814: 0x0  nop
    ctx->pc = 0x304814u;
    // NOP
label_304818:
    // 0x304818: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x304818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_30481c:
    // 0x30481c: 0xc092848  jal         func_24A120
label_304820:
    if (ctx->pc == 0x304820u) {
        ctx->pc = 0x304820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30481Cu;
        // 0x304820: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304824u;
        goto label_304824;
    }
    ctx->pc = 0x30481Cu;
    SET_GPR_U32(ctx, 31, 0x304824u);
    ctx->pc = 0x304820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30481Cu;
    // 0x304820: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x30481Cu, 0x304824u)) {
        return;
    }
    ctx->pc = 0x304824u;
label_304824:
    // 0x304824: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x304824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_304828:
    // 0x304828: 0xc09281a  jal         func_24A068
label_30482c:
    if (ctx->pc == 0x30482Cu) {
        ctx->pc = 0x30482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304828u;
        // 0x30482c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304830u;
        goto label_304830;
    }
    ctx->pc = 0x304828u;
    SET_GPR_U32(ctx, 31, 0x304830u);
    ctx->pc = 0x30482Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304828u;
    // 0x30482c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x304828u, 0x304830u)) {
        return;
    }
    ctx->pc = 0x304830u;
label_304830:
    // 0x304830: 0x10000005  b           . + 4 + (0x5 << 2)
label_304834:
    if (ctx->pc == 0x304834u) {
        ctx->pc = 0x304834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304830u;
        // 0x304834: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304838u;
        goto label_304838;
    }
    ctx->pc = 0x304830u;
    {
        const bool branch_taken_0x304830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304830u;
        // 0x304834: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304830) {
            ctx->pc = 0x304848u;
            goto label_304848;
        }
    }
    ctx->pc = 0x304838u;
label_304838:
    // 0x304838: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x304838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30483c:
    // 0x30483c: 0xc0c0da6  jal         func_303698
label_304840:
    if (ctx->pc == 0x304840u) {
        ctx->pc = 0x304840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30483Cu;
        // 0x304840: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304844u;
        goto label_304844;
    }
    ctx->pc = 0x30483Cu;
    SET_GPR_U32(ctx, 31, 0x304844u);
    ctx->pc = 0x304840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30483Cu;
    // 0x304840: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x303698u, 0x30483Cu, 0x304844u)) {
        return;
    }
    ctx->pc = 0x304844u;
label_304844:
    // 0x304844: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x304844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304848:
    // 0x304848: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x304848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_30484c:
    // 0x30484c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x30484cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_304850:
    // 0x304850: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x304850u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_304854:
    // 0x304854: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x304854u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_304858:
    // 0x304858: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x304858u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_30485c:
    // 0x30485c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x30485cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_304860:
    // 0x304860: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x304860u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_304864:
    // 0x304864: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x304864u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_304868:
    // 0x304868: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x304868u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30486c:
    // 0x30486c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30486cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_304870:
    // 0x304870: 0x3e00008  jr          $ra
label_304874:
    if (ctx->pc == 0x304874u) {
        ctx->pc = 0x304874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304870u;
        // 0x304874: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304878u;
        goto label_fallthrough_0x304870;
    }
    ctx->pc = 0x304870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304870u;
        // 0x304874: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x304870:
    ctx->pc = 0x304878u;
}
