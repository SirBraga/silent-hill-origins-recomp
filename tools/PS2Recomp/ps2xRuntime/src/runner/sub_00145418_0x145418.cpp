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

// Function: sub_00145418
// Address: 0x145418 - 0x1459d0
void sub_00145418_0x145418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145418_0x145418");
#endif

    switch (ctx->pc) {
        case 0x145418u: goto label_145418;
        case 0x14541cu: goto label_14541c;
        case 0x145420u: goto label_145420;
        case 0x145424u: goto label_145424;
        case 0x145428u: goto label_145428;
        case 0x14542cu: goto label_14542c;
        case 0x145430u: goto label_145430;
        case 0x145434u: goto label_145434;
        case 0x145438u: goto label_145438;
        case 0x14543cu: goto label_14543c;
        case 0x145440u: goto label_145440;
        case 0x145444u: goto label_145444;
        case 0x145448u: goto label_145448;
        case 0x14544cu: goto label_14544c;
        case 0x145450u: goto label_145450;
        case 0x145454u: goto label_145454;
        case 0x145458u: goto label_145458;
        case 0x14545cu: goto label_14545c;
        case 0x145460u: goto label_145460;
        case 0x145464u: goto label_145464;
        case 0x145468u: goto label_145468;
        case 0x14546cu: goto label_14546c;
        case 0x145470u: goto label_145470;
        case 0x145474u: goto label_145474;
        case 0x145478u: goto label_145478;
        case 0x14547cu: goto label_14547c;
        case 0x145480u: goto label_145480;
        case 0x145484u: goto label_145484;
        case 0x145488u: goto label_145488;
        case 0x14548cu: goto label_14548c;
        case 0x145490u: goto label_145490;
        case 0x145494u: goto label_145494;
        case 0x145498u: goto label_145498;
        case 0x14549cu: goto label_14549c;
        case 0x1454a0u: goto label_1454a0;
        case 0x1454a4u: goto label_1454a4;
        case 0x1454a8u: goto label_1454a8;
        case 0x1454acu: goto label_1454ac;
        case 0x1454b0u: goto label_1454b0;
        case 0x1454b4u: goto label_1454b4;
        case 0x1454b8u: goto label_1454b8;
        case 0x1454bcu: goto label_1454bc;
        case 0x1454c0u: goto label_1454c0;
        case 0x1454c4u: goto label_1454c4;
        case 0x1454c8u: goto label_1454c8;
        case 0x1454ccu: goto label_1454cc;
        case 0x1454d0u: goto label_1454d0;
        case 0x1454d4u: goto label_1454d4;
        case 0x1454d8u: goto label_1454d8;
        case 0x1454dcu: goto label_1454dc;
        case 0x1454e0u: goto label_1454e0;
        case 0x1454e4u: goto label_1454e4;
        case 0x1454e8u: goto label_1454e8;
        case 0x1454ecu: goto label_1454ec;
        case 0x1454f0u: goto label_1454f0;
        case 0x1454f4u: goto label_1454f4;
        case 0x1454f8u: goto label_1454f8;
        case 0x1454fcu: goto label_1454fc;
        case 0x145500u: goto label_145500;
        case 0x145504u: goto label_145504;
        case 0x145508u: goto label_145508;
        case 0x14550cu: goto label_14550c;
        case 0x145510u: goto label_145510;
        case 0x145514u: goto label_145514;
        case 0x145518u: goto label_145518;
        case 0x14551cu: goto label_14551c;
        case 0x145520u: goto label_145520;
        case 0x145524u: goto label_145524;
        case 0x145528u: goto label_145528;
        case 0x14552cu: goto label_14552c;
        case 0x145530u: goto label_145530;
        case 0x145534u: goto label_145534;
        case 0x145538u: goto label_145538;
        case 0x14553cu: goto label_14553c;
        case 0x145540u: goto label_145540;
        case 0x145544u: goto label_145544;
        case 0x145548u: goto label_145548;
        case 0x14554cu: goto label_14554c;
        case 0x145550u: goto label_145550;
        case 0x145554u: goto label_145554;
        case 0x145558u: goto label_145558;
        case 0x14555cu: goto label_14555c;
        case 0x145560u: goto label_145560;
        case 0x145564u: goto label_145564;
        case 0x145568u: goto label_145568;
        case 0x14556cu: goto label_14556c;
        case 0x145570u: goto label_145570;
        case 0x145574u: goto label_145574;
        case 0x145578u: goto label_145578;
        case 0x14557cu: goto label_14557c;
        case 0x145580u: goto label_145580;
        case 0x145584u: goto label_145584;
        case 0x145588u: goto label_145588;
        case 0x14558cu: goto label_14558c;
        case 0x145590u: goto label_145590;
        case 0x145594u: goto label_145594;
        case 0x145598u: goto label_145598;
        case 0x14559cu: goto label_14559c;
        case 0x1455a0u: goto label_1455a0;
        case 0x1455a4u: goto label_1455a4;
        case 0x1455a8u: goto label_1455a8;
        case 0x1455acu: goto label_1455ac;
        case 0x1455b0u: goto label_1455b0;
        case 0x1455b4u: goto label_1455b4;
        case 0x1455b8u: goto label_1455b8;
        case 0x1455bcu: goto label_1455bc;
        case 0x1455c0u: goto label_1455c0;
        case 0x1455c4u: goto label_1455c4;
        case 0x1455c8u: goto label_1455c8;
        case 0x1455ccu: goto label_1455cc;
        case 0x1455d0u: goto label_1455d0;
        case 0x1455d4u: goto label_1455d4;
        case 0x1455d8u: goto label_1455d8;
        case 0x1455dcu: goto label_1455dc;
        case 0x1455e0u: goto label_1455e0;
        case 0x1455e4u: goto label_1455e4;
        case 0x1455e8u: goto label_1455e8;
        case 0x1455ecu: goto label_1455ec;
        case 0x1455f0u: goto label_1455f0;
        case 0x1455f4u: goto label_1455f4;
        case 0x1455f8u: goto label_1455f8;
        case 0x1455fcu: goto label_1455fc;
        case 0x145600u: goto label_145600;
        case 0x145604u: goto label_145604;
        case 0x145608u: goto label_145608;
        case 0x14560cu: goto label_14560c;
        case 0x145610u: goto label_145610;
        case 0x145614u: goto label_145614;
        case 0x145618u: goto label_145618;
        case 0x14561cu: goto label_14561c;
        case 0x145620u: goto label_145620;
        case 0x145624u: goto label_145624;
        case 0x145628u: goto label_145628;
        case 0x14562cu: goto label_14562c;
        case 0x145630u: goto label_145630;
        case 0x145634u: goto label_145634;
        case 0x145638u: goto label_145638;
        case 0x14563cu: goto label_14563c;
        case 0x145640u: goto label_145640;
        case 0x145644u: goto label_145644;
        case 0x145648u: goto label_145648;
        case 0x14564cu: goto label_14564c;
        case 0x145650u: goto label_145650;
        case 0x145654u: goto label_145654;
        case 0x145658u: goto label_145658;
        case 0x14565cu: goto label_14565c;
        case 0x145660u: goto label_145660;
        case 0x145664u: goto label_145664;
        case 0x145668u: goto label_145668;
        case 0x14566cu: goto label_14566c;
        case 0x145670u: goto label_145670;
        case 0x145674u: goto label_145674;
        case 0x145678u: goto label_145678;
        case 0x14567cu: goto label_14567c;
        case 0x145680u: goto label_145680;
        case 0x145684u: goto label_145684;
        case 0x145688u: goto label_145688;
        case 0x14568cu: goto label_14568c;
        case 0x145690u: goto label_145690;
        case 0x145694u: goto label_145694;
        case 0x145698u: goto label_145698;
        case 0x14569cu: goto label_14569c;
        case 0x1456a0u: goto label_1456a0;
        case 0x1456a4u: goto label_1456a4;
        case 0x1456a8u: goto label_1456a8;
        case 0x1456acu: goto label_1456ac;
        case 0x1456b0u: goto label_1456b0;
        case 0x1456b4u: goto label_1456b4;
        case 0x1456b8u: goto label_1456b8;
        case 0x1456bcu: goto label_1456bc;
        case 0x1456c0u: goto label_1456c0;
        case 0x1456c4u: goto label_1456c4;
        case 0x1456c8u: goto label_1456c8;
        case 0x1456ccu: goto label_1456cc;
        case 0x1456d0u: goto label_1456d0;
        case 0x1456d4u: goto label_1456d4;
        case 0x1456d8u: goto label_1456d8;
        case 0x1456dcu: goto label_1456dc;
        case 0x1456e0u: goto label_1456e0;
        case 0x1456e4u: goto label_1456e4;
        case 0x1456e8u: goto label_1456e8;
        case 0x1456ecu: goto label_1456ec;
        case 0x1456f0u: goto label_1456f0;
        case 0x1456f4u: goto label_1456f4;
        case 0x1456f8u: goto label_1456f8;
        case 0x1456fcu: goto label_1456fc;
        case 0x145700u: goto label_145700;
        case 0x145704u: goto label_145704;
        case 0x145708u: goto label_145708;
        case 0x14570cu: goto label_14570c;
        case 0x145710u: goto label_145710;
        case 0x145714u: goto label_145714;
        case 0x145718u: goto label_145718;
        case 0x14571cu: goto label_14571c;
        case 0x145720u: goto label_145720;
        case 0x145724u: goto label_145724;
        case 0x145728u: goto label_145728;
        case 0x14572cu: goto label_14572c;
        case 0x145730u: goto label_145730;
        case 0x145734u: goto label_145734;
        case 0x145738u: goto label_145738;
        case 0x14573cu: goto label_14573c;
        case 0x145740u: goto label_145740;
        case 0x145744u: goto label_145744;
        case 0x145748u: goto label_145748;
        case 0x14574cu: goto label_14574c;
        case 0x145750u: goto label_145750;
        case 0x145754u: goto label_145754;
        case 0x145758u: goto label_145758;
        case 0x14575cu: goto label_14575c;
        case 0x145760u: goto label_145760;
        case 0x145764u: goto label_145764;
        case 0x145768u: goto label_145768;
        case 0x14576cu: goto label_14576c;
        case 0x145770u: goto label_145770;
        case 0x145774u: goto label_145774;
        case 0x145778u: goto label_145778;
        case 0x14577cu: goto label_14577c;
        case 0x145780u: goto label_145780;
        case 0x145784u: goto label_145784;
        case 0x145788u: goto label_145788;
        case 0x14578cu: goto label_14578c;
        case 0x145790u: goto label_145790;
        case 0x145794u: goto label_145794;
        case 0x145798u: goto label_145798;
        case 0x14579cu: goto label_14579c;
        case 0x1457a0u: goto label_1457a0;
        case 0x1457a4u: goto label_1457a4;
        case 0x1457a8u: goto label_1457a8;
        case 0x1457acu: goto label_1457ac;
        case 0x1457b0u: goto label_1457b0;
        case 0x1457b4u: goto label_1457b4;
        case 0x1457b8u: goto label_1457b8;
        case 0x1457bcu: goto label_1457bc;
        case 0x1457c0u: goto label_1457c0;
        case 0x1457c4u: goto label_1457c4;
        case 0x1457c8u: goto label_1457c8;
        case 0x1457ccu: goto label_1457cc;
        case 0x1457d0u: goto label_1457d0;
        case 0x1457d4u: goto label_1457d4;
        case 0x1457d8u: goto label_1457d8;
        case 0x1457dcu: goto label_1457dc;
        case 0x1457e0u: goto label_1457e0;
        case 0x1457e4u: goto label_1457e4;
        case 0x1457e8u: goto label_1457e8;
        case 0x1457ecu: goto label_1457ec;
        case 0x1457f0u: goto label_1457f0;
        case 0x1457f4u: goto label_1457f4;
        case 0x1457f8u: goto label_1457f8;
        case 0x1457fcu: goto label_1457fc;
        case 0x145800u: goto label_145800;
        case 0x145804u: goto label_145804;
        case 0x145808u: goto label_145808;
        case 0x14580cu: goto label_14580c;
        case 0x145810u: goto label_145810;
        case 0x145814u: goto label_145814;
        case 0x145818u: goto label_145818;
        case 0x14581cu: goto label_14581c;
        case 0x145820u: goto label_145820;
        case 0x145824u: goto label_145824;
        case 0x145828u: goto label_145828;
        case 0x14582cu: goto label_14582c;
        case 0x145830u: goto label_145830;
        case 0x145834u: goto label_145834;
        case 0x145838u: goto label_145838;
        case 0x14583cu: goto label_14583c;
        case 0x145840u: goto label_145840;
        case 0x145844u: goto label_145844;
        case 0x145848u: goto label_145848;
        case 0x14584cu: goto label_14584c;
        case 0x145850u: goto label_145850;
        case 0x145854u: goto label_145854;
        case 0x145858u: goto label_145858;
        case 0x14585cu: goto label_14585c;
        case 0x145860u: goto label_145860;
        case 0x145864u: goto label_145864;
        case 0x145868u: goto label_145868;
        case 0x14586cu: goto label_14586c;
        case 0x145870u: goto label_145870;
        case 0x145874u: goto label_145874;
        case 0x145878u: goto label_145878;
        case 0x14587cu: goto label_14587c;
        case 0x145880u: goto label_145880;
        case 0x145884u: goto label_145884;
        case 0x145888u: goto label_145888;
        case 0x14588cu: goto label_14588c;
        case 0x145890u: goto label_145890;
        case 0x145894u: goto label_145894;
        case 0x145898u: goto label_145898;
        case 0x14589cu: goto label_14589c;
        case 0x1458a0u: goto label_1458a0;
        case 0x1458a4u: goto label_1458a4;
        case 0x1458a8u: goto label_1458a8;
        case 0x1458acu: goto label_1458ac;
        case 0x1458b0u: goto label_1458b0;
        case 0x1458b4u: goto label_1458b4;
        case 0x1458b8u: goto label_1458b8;
        case 0x1458bcu: goto label_1458bc;
        case 0x1458c0u: goto label_1458c0;
        case 0x1458c4u: goto label_1458c4;
        case 0x1458c8u: goto label_1458c8;
        case 0x1458ccu: goto label_1458cc;
        case 0x1458d0u: goto label_1458d0;
        case 0x1458d4u: goto label_1458d4;
        case 0x1458d8u: goto label_1458d8;
        case 0x1458dcu: goto label_1458dc;
        case 0x1458e0u: goto label_1458e0;
        case 0x1458e4u: goto label_1458e4;
        case 0x1458e8u: goto label_1458e8;
        case 0x1458ecu: goto label_1458ec;
        case 0x1458f0u: goto label_1458f0;
        case 0x1458f4u: goto label_1458f4;
        case 0x1458f8u: goto label_1458f8;
        case 0x1458fcu: goto label_1458fc;
        case 0x145900u: goto label_145900;
        case 0x145904u: goto label_145904;
        case 0x145908u: goto label_145908;
        case 0x14590cu: goto label_14590c;
        case 0x145910u: goto label_145910;
        case 0x145914u: goto label_145914;
        case 0x145918u: goto label_145918;
        case 0x14591cu: goto label_14591c;
        case 0x145920u: goto label_145920;
        case 0x145924u: goto label_145924;
        case 0x145928u: goto label_145928;
        case 0x14592cu: goto label_14592c;
        case 0x145930u: goto label_145930;
        case 0x145934u: goto label_145934;
        case 0x145938u: goto label_145938;
        case 0x14593cu: goto label_14593c;
        case 0x145940u: goto label_145940;
        case 0x145944u: goto label_145944;
        case 0x145948u: goto label_145948;
        case 0x14594cu: goto label_14594c;
        case 0x145950u: goto label_145950;
        case 0x145954u: goto label_145954;
        case 0x145958u: goto label_145958;
        case 0x14595cu: goto label_14595c;
        case 0x145960u: goto label_145960;
        case 0x145964u: goto label_145964;
        case 0x145968u: goto label_145968;
        case 0x14596cu: goto label_14596c;
        case 0x145970u: goto label_145970;
        case 0x145974u: goto label_145974;
        case 0x145978u: goto label_145978;
        case 0x14597cu: goto label_14597c;
        case 0x145980u: goto label_145980;
        case 0x145984u: goto label_145984;
        case 0x145988u: goto label_145988;
        case 0x14598cu: goto label_14598c;
        case 0x145990u: goto label_145990;
        case 0x145994u: goto label_145994;
        case 0x145998u: goto label_145998;
        case 0x14599cu: goto label_14599c;
        case 0x1459a0u: goto label_1459a0;
        case 0x1459a4u: goto label_1459a4;
        case 0x1459a8u: goto label_1459a8;
        case 0x1459acu: goto label_1459ac;
        case 0x1459b0u: goto label_1459b0;
        case 0x1459b4u: goto label_1459b4;
        case 0x1459b8u: goto label_1459b8;
        case 0x1459bcu: goto label_1459bc;
        case 0x1459c0u: goto label_1459c0;
        case 0x1459c4u: goto label_1459c4;
        case 0x1459c8u: goto label_1459c8;
        case 0x1459ccu: goto label_1459cc;
        default: break;
    }

    ctx->pc = 0x145418u;

label_145418:
    // 0x145418: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x145418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_14541c:
    // 0x14541c: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x14541cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
label_145420:
    // 0x145420: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x145420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
label_145424:
    // 0x145424: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x145424u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_145428:
    // 0x145428: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x145428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
label_14542c:
    // 0x14542c: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x14542cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
label_145430:
    // 0x145430: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x145430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
label_145434:
    // 0x145434: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x145434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
label_145438:
    // 0x145438: 0x7fb60110  sq          $s6, 0x110($sp)
    ctx->pc = 0x145438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 22));
label_14543c:
    // 0x14543c: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x14543cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_145440:
    // 0x145440: 0xe7b50188  swc1        $f21, 0x188($sp)
    ctx->pc = 0x145440u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_145444:
    // 0x145444: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x145444u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_145448:
    // 0x145448: 0xae80018c  sw          $zero, 0x18C($s4)
    ctx->pc = 0x145448u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 396), GPR_U32(ctx, 0));
label_14544c:
    // 0x14544c: 0x8e820100  lw          $v0, 0x100($s4)
    ctx->pc = 0x14544cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
label_145450:
    // 0x145450: 0x10400153  beqz        $v0, . + 4 + (0x153 << 2)
label_145454:
    if (ctx->pc == 0x145454u) {
        ctx->pc = 0x145454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145450u;
        // 0x145454: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145458u;
        goto label_145458;
    }
    ctx->pc = 0x145450u;
    {
        const bool branch_taken_0x145450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145450u;
        // 0x145454: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145450) {
            ctx->pc = 0x1459A0u;
            goto label_1459a0;
        }
    }
    ctx->pc = 0x145458u;
label_145458:
    // 0x145458: 0x8e8201c0  lw          $v0, 0x1C0($s4)
    ctx->pc = 0x145458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 448)));
label_14545c:
    // 0x14545c: 0x10400150  beqz        $v0, . + 4 + (0x150 << 2)
label_145460:
    if (ctx->pc == 0x145460u) {
        ctx->pc = 0x145460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14545Cu;
        // 0x145460: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145464u;
        goto label_145464;
    }
    ctx->pc = 0x14545Cu;
    {
        const bool branch_taken_0x14545c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14545Cu;
        // 0x145460: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14545c) {
            ctx->pc = 0x1459A0u;
            goto label_1459a0;
        }
    }
    ctx->pc = 0x145464u;
label_145464:
    // 0x145464: 0x8c430fc8  lw          $v1, 0xFC8($v0)
    ctx->pc = 0x145464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4040)));
label_145468:
    // 0x145468: 0x8c720004  lw          $s2, 0x4($v1)
    ctx->pc = 0x145468u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_14546c:
    // 0x14546c: 0x24730020  addiu       $s3, $v1, 0x20
    ctx->pc = 0x14546cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_145470:
    // 0x145470: 0x26510010  addiu       $s1, $s2, 0x10
    ctx->pc = 0x145470u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_145474:
    // 0x145474: 0x8e820128  lw          $v0, 0x128($s4)
    ctx->pc = 0x145474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 296)));
label_145478:
    // 0x145478: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x145478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14547c:
    // 0x14547c: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x14547cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_145480:
    // 0x145480: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x145480u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_145484:
    // 0x145484: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x145484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_145488:
    // 0x145488: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x145488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14548c:
    // 0x14548c: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x14548cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_145490:
    // 0x145490: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x145490u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_145494:
    // 0x145494: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x145494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_145498:
    // 0x145498: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x145498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14549c:
    // 0x14549c: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x14549cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1454a0:
    // 0x1454a0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1454a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1454a4:
    // 0x1454a4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1454a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1454a8:
    // 0x1454a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1454a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1454ac:
    // 0x1454ac: 0xc093a88  jal         func_24EA20
label_1454b0:
    if (ctx->pc == 0x1454B0u) {
        ctx->pc = 0x1454B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1454ACu;
        // 0x1454b0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1454B4u;
        goto label_1454b4;
    }
    ctx->pc = 0x1454ACu;
    SET_GPR_U32(ctx, 31, 0x1454B4u);
    ctx->pc = 0x1454B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1454ACu;
    // 0x1454b0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x1454ACu, 0x1454B4u)) {
        return;
    }
    ctx->pc = 0x1454B4u;
label_1454b4:
    // 0x1454b4: 0x8e860128  lw          $a2, 0x128($s4)
    ctx->pc = 0x1454b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 296)));
label_1454b8:
    // 0x1454b8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1454b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1454bc:
    // 0x1454bc: 0xc4c30020  lwc1        $f3, 0x20($a2)
    ctx->pc = 0x1454bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1454c0:
    // 0x1454c0: 0xc4c40024  lwc1        $f4, 0x24($a2)
    ctx->pc = 0x1454c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1454c4:
    // 0x1454c4: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1454c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1454c8:
    // 0x1454c8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1454c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1454cc:
    // 0x1454cc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1454ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1454d0:
    // 0x1454d0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1454d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_1454d4:
    // 0x1454d4: 0xc4c30028  lwc1        $f3, 0x28($a2)
    ctx->pc = 0x1454d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1454d8:
    // 0x1454d8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1454d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1454dc:
    // 0x1454dc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1454dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1454e0:
    // 0x1454e0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1454e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1454e4:
    // 0x1454e4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1454e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1454e8:
    // 0x1454e8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1454e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1454ec:
    // 0x1454ec: 0x46000d40  add.s       $f21, $f1, $f0
    ctx->pc = 0x1454ecu;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1454f0:
    // 0x1454f0: 0x4604a836  c.le.s      $f21, $f4
    ctx->pc = 0x1454f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1454f4:
    // 0x1454f4: 0x0  nop
    ctx->pc = 0x1454f4u;
    // NOP
label_1454f8:
    // 0x1454f8: 0x45010129  bc1t        . + 4 + (0x129 << 2)
label_1454fc:
    if (ctx->pc == 0x1454FCu) {
        ctx->pc = 0x1454FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1454F8u;
        // 0x1454fc: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145500u;
        goto label_145500;
    }
    ctx->pc = 0x1454F8u;
    {
        const bool branch_taken_0x1454f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1454FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1454F8u;
        // 0x1454fc: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1454f8) {
            ctx->pc = 0x1459A0u;
            goto label_1459a0;
        }
    }
    ctx->pc = 0x145500u;
label_145500:
    // 0x145500: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x145500u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_145504:
    // 0x145504: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x145504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_145508:
    // 0x145508: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x145508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_14550c:
    // 0x14550c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14550cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_145510:
    // 0x145510: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x145510u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_145514:
    // 0x145514: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x145514u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_145518:
    // 0x145518: 0xc093aea  jal         func_24EBA8
label_14551c:
    if (ctx->pc == 0x14551Cu) {
        ctx->pc = 0x14551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145518u;
        // 0x14551c: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x145520u;
        goto label_145520;
    }
    ctx->pc = 0x145518u;
    SET_GPR_U32(ctx, 31, 0x145520u);
    ctx->pc = 0x14551Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145518u;
    // 0x14551c: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x145518u, 0x145520u)) {
        return;
    }
    ctx->pc = 0x145520u;
label_145520:
    // 0x145520: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x145520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_145524:
    // 0x145524: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x145524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_145528:
    // 0x145528: 0xc093aea  jal         func_24EBA8
label_14552c:
    if (ctx->pc == 0x14552Cu) {
        ctx->pc = 0x14552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145528u;
        // 0x14552c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145530u;
        goto label_145530;
    }
    ctx->pc = 0x145528u;
    SET_GPR_U32(ctx, 31, 0x145530u);
    ctx->pc = 0x14552Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145528u;
    // 0x14552c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x145528u, 0x145530u)) {
        return;
    }
    ctx->pc = 0x145530u;
label_145530:
    // 0x145530: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x145530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_145534:
    // 0x145534: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x145534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_145538:
    // 0x145538: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x145538u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_14553c:
    // 0x14553c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14553cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_145540:
    // 0x145540: 0x0  nop
    ctx->pc = 0x145540u;
    // NOP
label_145544:
    // 0x145544: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x145544u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_145548:
    // 0x145548: 0x0  nop
    ctx->pc = 0x145548u;
    // NOP
label_14554c:
    // 0x14554c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_145550:
    if (ctx->pc == 0x145550u) {
        ctx->pc = 0x145550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14554Cu;
        // 0x145550: 0xc7a30030  lwc1        $f3, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x145554u;
        goto label_145554;
    }
    ctx->pc = 0x14554Cu;
    {
        const bool branch_taken_0x14554c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x145550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14554Cu;
        // 0x145550: 0xc7a30030  lwc1        $f3, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14554c) {
            ctx->pc = 0x145560u;
            goto label_145560;
        }
    }
    ctx->pc = 0x145554u;
label_145554:
    // 0x145554: 0x10000111  b           . + 4 + (0x111 << 2)
label_145558:
    if (ctx->pc == 0x145558u) {
        ctx->pc = 0x145558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145554u;
        // 0x145558: 0xe694018c  swc1        $f20, 0x18C($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 396), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14555Cu;
        goto label_14555c;
    }
    ctx->pc = 0x145554u;
    {
        const bool branch_taken_0x145554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145554u;
        // 0x145558: 0xe694018c  swc1        $f20, 0x18C($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 396), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x145554) {
            ctx->pc = 0x14599Cu;
            goto label_14599c;
        }
    }
    ctx->pc = 0x14555Cu;
label_14555c:
    // 0x14555c: 0x0  nop
    ctx->pc = 0x14555cu;
    // NOP
label_145560:
    // 0x145560: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x145560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_145564:
    // 0x145564: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x145564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_145568:
    // 0x145568: 0x0  nop
    ctx->pc = 0x145568u;
    // NOP
label_14556c:
    // 0x14556c: 0x0  nop
    ctx->pc = 0x14556cu;
    // NOP
label_145570:
    // 0x145570: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x145570u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_145574:
    // 0x145574: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x145574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_145578:
    // 0x145578: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x145578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
label_14557c:
    // 0x14557c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14557cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_145580:
    // 0x145580: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x145580u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_145584:
    // 0x145584: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x145584u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_145588:
    // 0x145588: 0x3c014360  lui         $at, 0x4360
    ctx->pc = 0x145588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17248 << 16));
label_14558c:
    // 0x14558c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14558cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_145590:
    // 0x145590: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x145590u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_145594:
    // 0x145594: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x145594u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_145598:
    // 0x145598: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x145598u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_14559c:
    // 0x14559c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x14559cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1455a0:
    // 0x1455a0: 0x46141834  c.lt.s      $f3, $f20
    ctx->pc = 0x1455a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1455a4:
    // 0x1455a4: 0xe6830194  swc1        $f3, 0x194($s4)
    ctx->pc = 0x1455a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 404), bits); }
label_1455a8:
    // 0x1455a8: 0x450100fc  bc1t        . + 4 + (0xFC << 2)
label_1455ac:
    if (ctx->pc == 0x1455ACu) {
        ctx->pc = 0x1455ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1455A8u;
        // 0x1455ac: 0xe6820198  swc1        $f2, 0x198($s4) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 408), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1455B0u;
        goto label_1455b0;
    }
    ctx->pc = 0x1455A8u;
    {
        const bool branch_taken_0x1455a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1455ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1455A8u;
        // 0x1455ac: 0xe6820198  swc1        $f2, 0x198($s4) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 408), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1455a8) {
            ctx->pc = 0x14599Cu;
            goto label_14599c;
        }
    }
    ctx->pc = 0x1455B0u;
label_1455b0:
    // 0x1455b0: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x1455b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1455b4:
    // 0x1455b4: 0x0  nop
    ctx->pc = 0x1455b4u;
    // NOP
label_1455b8:
    // 0x1455b8: 0x450100f9  bc1t        . + 4 + (0xF9 << 2)
label_1455bc:
    if (ctx->pc == 0x1455BCu) {
        ctx->pc = 0x1455BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1455B8u;
        // 0x1455bc: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1455C0u;
        goto label_1455c0;
    }
    ctx->pc = 0x1455B8u;
    {
        const bool branch_taken_0x1455b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1455BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1455B8u;
        // 0x1455bc: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1455b8) {
            ctx->pc = 0x1459A0u;
            goto label_1459a0;
        }
    }
    ctx->pc = 0x1455C0u;
label_1455c0:
    // 0x1455c0: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x1455c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
label_1455c4:
    // 0x1455c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1455c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1455c8:
    // 0x1455c8: 0x0  nop
    ctx->pc = 0x1455c8u;
    // NOP
label_1455cc:
    // 0x1455cc: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1455ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1455d0:
    // 0x1455d0: 0x0  nop
    ctx->pc = 0x1455d0u;
    // NOP
label_1455d4:
    // 0x1455d4: 0x450300f3  bc1tl       . + 4 + (0xF3 << 2)
label_1455d8:
    if (ctx->pc == 0x1455D8u) {
        ctx->pc = 0x1455D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1455D4u;
        // 0x1455d8: 0x7bb10160  lq          $s1, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1455DCu;
        goto label_1455dc;
    }
    ctx->pc = 0x1455D4u;
    {
        const bool branch_taken_0x1455d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1455d4) {
            ctx->pc = 0x1455D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1455D4u;
            // 0x1455d8: 0x7bb10160  lq          $s1, 0x160($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1459A4u;
            goto label_1459a4;
        }
    }
    ctx->pc = 0x1455DCu;
label_1455dc:
    // 0x1455dc: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x1455dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
label_1455e0:
    // 0x1455e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1455e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1455e4:
    // 0x1455e4: 0x0  nop
    ctx->pc = 0x1455e4u;
    // NOP
label_1455e8:
    // 0x1455e8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1455e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1455ec:
    // 0x1455ec: 0x0  nop
    ctx->pc = 0x1455ecu;
    // NOP
label_1455f0:
    // 0x1455f0: 0x450300ec  bc1tl       . + 4 + (0xEC << 2)
label_1455f4:
    if (ctx->pc == 0x1455F4u) {
        ctx->pc = 0x1455F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1455F0u;
        // 0x1455f4: 0x7bb10160  lq          $s1, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1455F8u;
        goto label_1455f8;
    }
    ctx->pc = 0x1455F0u;
    {
        const bool branch_taken_0x1455f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1455f0) {
            ctx->pc = 0x1455F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1455F0u;
            // 0x1455f4: 0x7bb10160  lq          $s1, 0x160($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1459A4u;
            goto label_1459a4;
        }
    }
    ctx->pc = 0x1455F8u;
label_1455f8:
    // 0x1455f8: 0xe695018c  swc1        $f21, 0x18C($s4)
    ctx->pc = 0x1455f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 396), bits); }
label_1455fc:
    // 0x1455fc: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1455fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_145600:
    // 0x145600: 0x24550fd8  addiu       $s5, $v0, 0xFD8
    ctx->pc = 0x145600u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4056));
label_145604:
    // 0x145604: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x145604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_145608:
    // 0x145608: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x145608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_14560c:
    // 0x14560c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x14560cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_145610:
    // 0x145610: 0x40f809  jalr        $v0
label_145614:
    if (ctx->pc == 0x145614u) {
        ctx->pc = 0x145614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145610u;
        // 0x145614: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145618u;
        goto label_145618;
    }
    ctx->pc = 0x145610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145618u);
        ctx->pc = 0x145614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145610u;
        // 0x145614: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145610u, 0x145618u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145618u;
label_145618:
    // 0x145618: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x145618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_14561c:
    // 0x14561c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x14561cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_145620:
    // 0x145620: 0x40f809  jalr        $v0
label_145624:
    if (ctx->pc == 0x145624u) {
        ctx->pc = 0x145624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145620u;
        // 0x145624: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145628u;
        goto label_145628;
    }
    ctx->pc = 0x145620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145628u);
        ctx->pc = 0x145624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145620u;
        // 0x145624: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145620u, 0x145628u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145628u;
label_145628:
    // 0x145628: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x145628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_14562c:
    // 0x14562c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x14562cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_145630:
    // 0x145630: 0x40f809  jalr        $v0
label_145634:
    if (ctx->pc == 0x145634u) {
        ctx->pc = 0x145634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145630u;
        // 0x145634: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145638u;
        goto label_145638;
    }
    ctx->pc = 0x145630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145638u);
        ctx->pc = 0x145634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145630u;
        // 0x145634: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145630u, 0x145638u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145638u;
label_145638:
    // 0x145638: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x145638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_14563c:
    // 0x14563c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x14563cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_145640:
    // 0x145640: 0x40f809  jalr        $v0
label_145644:
    if (ctx->pc == 0x145644u) {
        ctx->pc = 0x145644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145640u;
        // 0x145644: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145648u;
        goto label_145648;
    }
    ctx->pc = 0x145640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145648u);
        ctx->pc = 0x145644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145640u;
        // 0x145644: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145640u, 0x145648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145648u;
label_145648:
    // 0x145648: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x145648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_14564c:
    // 0x14564c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x14564cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_145650:
    // 0x145650: 0x40f809  jalr        $v0
label_145654:
    if (ctx->pc == 0x145654u) {
        ctx->pc = 0x145654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145650u;
        // 0x145654: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145658u;
        goto label_145658;
    }
    ctx->pc = 0x145650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145658u);
        ctx->pc = 0x145654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145650u;
        // 0x145654: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145650u, 0x145658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145658u;
label_145658:
    // 0x145658: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x145658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_14565c:
    // 0x14565c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x14565cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_145660:
    // 0x145660: 0x40f809  jalr        $v0
label_145664:
    if (ctx->pc == 0x145664u) {
        ctx->pc = 0x145664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145660u;
        // 0x145664: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145668u;
        goto label_145668;
    }
    ctx->pc = 0x145660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145668u);
        ctx->pc = 0x145664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145660u;
        // 0x145664: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145660u, 0x145668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145668u;
label_145668:
    // 0x145668: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x145668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_14566c:
    // 0x14566c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x14566cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_145670:
    // 0x145670: 0x40f809  jalr        $v0
label_145674:
    if (ctx->pc == 0x145674u) {
        ctx->pc = 0x145674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145670u;
        // 0x145674: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145678u;
        goto label_145678;
    }
    ctx->pc = 0x145670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145678u);
        ctx->pc = 0x145674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145670u;
        // 0x145674: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145670u, 0x145678u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145678u;
label_145678:
    // 0x145678: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x145678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_14567c:
    // 0x14567c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14567cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_145680:
    // 0x145680: 0x40f809  jalr        $v0
label_145684:
    if (ctx->pc == 0x145684u) {
        ctx->pc = 0x145684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145680u;
        // 0x145684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145688u;
        goto label_145688;
    }
    ctx->pc = 0x145680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145688u);
        ctx->pc = 0x145684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145680u;
        // 0x145684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145680u, 0x145688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145688u;
label_145688:
    // 0x145688: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x145688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_14568c:
    // 0x14568c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x14568cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_145690:
    // 0x145690: 0x40f809  jalr        $v0
label_145694:
    if (ctx->pc == 0x145694u) {
        ctx->pc = 0x145694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145690u;
        // 0x145694: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145698u;
        goto label_145698;
    }
    ctx->pc = 0x145690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145698u);
        ctx->pc = 0x145694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145690u;
        // 0x145694: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145690u, 0x145698u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145698u;
label_145698:
    // 0x145698: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x145698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14569c:
    // 0x14569c: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x14569cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_1456a0:
    // 0x1456a0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1456a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1456a4:
    // 0x1456a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1456a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1456a8:
    // 0x1456a8: 0x8e820128  lw          $v0, 0x128($s4)
    ctx->pc = 0x1456a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 296)));
label_1456ac:
    // 0x1456ac: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1456acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1456b0:
    // 0x1456b0: 0x68430037  ldl         $v1, 0x37($v0)
    ctx->pc = 0x1456b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1456b4:
    // 0x1456b4: 0x6c430030  ldr         $v1, 0x30($v0)
    ctx->pc = 0x1456b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1456b8:
    // 0x1456b8: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x1456b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1456bc:
    // 0x1456bc: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x1456bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1456c0:
    // 0x1456c0: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x1456c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1456c4:
    // 0x1456c4: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1456c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_1456c8:
    // 0x1456c8: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x1456c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1456cc:
    // 0x1456cc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1456ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1456d0:
    // 0x1456d0: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1456d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1456d4:
    // 0x1456d4: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1456d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1456d8:
    // 0x1456d8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1456d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1456dc:
    // 0x1456dc: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x1456dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1456e0:
    // 0x1456e0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1456e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1456e4:
    // 0x1456e4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1456e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1456e8:
    // 0x1456e8: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1456e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1456ec:
    // 0x1456ec: 0xc6250010  lwc1        $f5, 0x10($s1)
    ctx->pc = 0x1456ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1456f0:
    // 0x1456f0: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x1456f0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_1456f4:
    // 0x1456f4: 0xe7a500e0  swc1        $f5, 0xE0($sp)
    ctx->pc = 0x1456f4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1456f8:
    // 0x1456f8: 0xc6240014  lwc1        $f4, 0x14($s1)
    ctx->pc = 0x1456f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1456fc:
    // 0x1456fc: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x1456fcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_145700:
    // 0x145700: 0xe7a400e4  swc1        $f4, 0xE4($sp)
    ctx->pc = 0x145700u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_145704:
    // 0x145704: 0xc6230018  lwc1        $f3, 0x18($s1)
    ctx->pc = 0x145704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_145708:
    // 0x145708: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x145708u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_14570c:
    // 0x14570c: 0xe7a300e8  swc1        $f3, 0xE8($sp)
    ctx->pc = 0x14570cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_145710:
    // 0x145710: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x145710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_145714:
    // 0x145714: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x145714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_145718:
    // 0x145718: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x145718u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_14571c:
    // 0x14571c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x14571cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_145720:
    // 0x145720: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x145720u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_145724:
    // 0x145724: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x145724u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_145728:
    // 0x145728: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x145728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_14572c:
    // 0x14572c: 0xe7a200f4  swc1        $f2, 0xF4($sp)
    ctx->pc = 0x14572cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_145730:
    // 0x145730: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x145730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_145734:
    // 0x145734: 0x6ba200f7  ldl         $v0, 0xF7($sp)
    ctx->pc = 0x145734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_145738:
    // 0x145738: 0x6fa200f0  ldr         $v0, 0xF0($sp)
    ctx->pc = 0x145738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_14573c:
    // 0x14573c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x14573cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_145740:
    // 0x145740: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x145740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_145744:
    // 0x145744: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x145744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_145748:
    // 0x145748: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x145748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
label_14574c:
    // 0x14574c: 0x27b3004c  addiu       $s3, $sp, 0x4C
    ctx->pc = 0x14574cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_145750:
    // 0x145750: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x145750u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
label_145754:
    // 0x145754: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x145754u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
label_145758:
    // 0x145758: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x145758u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_14575c:
    // 0x14575c: 0xa2600003  sb          $zero, 0x3($s3)
    ctx->pc = 0x14575cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 0));
label_145760:
    // 0x145760: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x145760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_145764:
    // 0x145764: 0xc7a300d0  lwc1        $f3, 0xD0($sp)
    ctx->pc = 0x145764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_145768:
    // 0x145768: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x145768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14576c:
    // 0x14576c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x14576cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_145770:
    // 0x145770: 0xc7a400d4  lwc1        $f4, 0xD4($sp)
    ctx->pc = 0x145770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_145774:
    // 0x145774: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x145774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_145778:
    // 0x145778: 0xc7a300d8  lwc1        $f3, 0xD8($sp)
    ctx->pc = 0x145778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14577c:
    // 0x14577c: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x14577cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_145780:
    // 0x145780: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x145780u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_145784:
    // 0x145784: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x145784u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_145788:
    // 0x145788: 0xe7a200f4  swc1        $f2, 0xF4($sp)
    ctx->pc = 0x145788u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_14578c:
    // 0x14578c: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x14578cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_145790:
    // 0x145790: 0x6ba600f7  ldl         $a2, 0xF7($sp)
    ctx->pc = 0x145790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_145794:
    // 0x145794: 0x6fa600f0  ldr         $a2, 0xF0($sp)
    ctx->pc = 0x145794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_145798:
    // 0x145798: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x145798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_14579c:
    // 0x14579c: 0xb3a6006b  sdl         $a2, 0x6B($sp)
    ctx->pc = 0x14579cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1457a0:
    // 0x1457a0: 0xb7a60064  sdr         $a2, 0x64($sp)
    ctx->pc = 0x1457a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1457a4:
    // 0x1457a4: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x1457a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_1457a8:
    // 0x1457a8: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x1457a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1457ac:
    // 0x1457ac: 0xa3a00070  sb          $zero, 0x70($sp)
    ctx->pc = 0x1457acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 0));
label_1457b0:
    // 0x1457b0: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x1457b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
label_1457b4:
    // 0x1457b4: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x1457b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
label_1457b8:
    // 0x1457b8: 0xa2400003  sb          $zero, 0x3($s2)
    ctx->pc = 0x1457b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
label_1457bc:
    // 0x1457bc: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1457bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1457c0:
    // 0x1457c0: 0xc7a300e0  lwc1        $f3, 0xE0($sp)
    ctx->pc = 0x1457c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1457c4:
    // 0x1457c4: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1457c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1457c8:
    // 0x1457c8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1457c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_1457cc:
    // 0x1457cc: 0xc7a400e4  lwc1        $f4, 0xE4($sp)
    ctx->pc = 0x1457ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1457d0:
    // 0x1457d0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1457d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1457d4:
    // 0x1457d4: 0xc7a300e8  lwc1        $f3, 0xE8($sp)
    ctx->pc = 0x1457d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1457d8:
    // 0x1457d8: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1457d8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_1457dc:
    // 0x1457dc: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x1457dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1457e0:
    // 0x1457e0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1457e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1457e4:
    // 0x1457e4: 0xe7a200f4  swc1        $f2, 0xF4($sp)
    ctx->pc = 0x1457e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1457e8:
    // 0x1457e8: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1457e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1457ec:
    // 0x1457ec: 0x6ba500f7  ldl         $a1, 0xF7($sp)
    ctx->pc = 0x1457ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1457f0:
    // 0x1457f0: 0x6fa500f0  ldr         $a1, 0xF0($sp)
    ctx->pc = 0x1457f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1457f4:
    // 0x1457f4: 0x8fa600f8  lw          $a2, 0xF8($sp)
    ctx->pc = 0x1457f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_1457f8:
    // 0x1457f8: 0xb3a5008f  sdl         $a1, 0x8F($sp)
    ctx->pc = 0x1457f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1457fc:
    // 0x1457fc: 0xb7a50088  sdr         $a1, 0x88($sp)
    ctx->pc = 0x1457fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_145800:
    // 0x145800: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x145800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
label_145804:
    // 0x145804: 0x27b10094  addiu       $s1, $sp, 0x94
    ctx->pc = 0x145804u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_145808:
    // 0x145808: 0xa3a00094  sb          $zero, 0x94($sp)
    ctx->pc = 0x145808u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 148), (uint8_t)GPR_U32(ctx, 0));
label_14580c:
    // 0x14580c: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x14580cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
label_145810:
    // 0x145810: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x145810u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
label_145814:
    // 0x145814: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x145814u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
label_145818:
    // 0x145818: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x145818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14581c:
    // 0x14581c: 0xc7a300d0  lwc1        $f3, 0xD0($sp)
    ctx->pc = 0x14581cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_145820:
    // 0x145820: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x145820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_145824:
    // 0x145824: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x145824u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_145828:
    // 0x145828: 0xc7a400d4  lwc1        $f4, 0xD4($sp)
    ctx->pc = 0x145828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_14582c:
    // 0x14582c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x14582cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_145830:
    // 0x145830: 0xc7a300d8  lwc1        $f3, 0xD8($sp)
    ctx->pc = 0x145830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_145834:
    // 0x145834: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x145834u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_145838:
    // 0x145838: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x145838u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_14583c:
    // 0x14583c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x14583cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_145840:
    // 0x145840: 0xe7a200f4  swc1        $f2, 0xF4($sp)
    ctx->pc = 0x145840u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_145844:
    // 0x145844: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x145844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_145848:
    // 0x145848: 0x6ba400f7  ldl         $a0, 0xF7($sp)
    ctx->pc = 0x145848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_14584c:
    // 0x14584c: 0x6fa400f0  ldr         $a0, 0xF0($sp)
    ctx->pc = 0x14584cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_145850:
    // 0x145850: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x145850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_145854:
    // 0x145854: 0xb3a400b3  sdl         $a0, 0xB3($sp)
    ctx->pc = 0x145854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 179); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_145858:
    // 0x145858: 0xb7a400ac  sdr         $a0, 0xAC($sp)
    ctx->pc = 0x145858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 172); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_14585c:
    // 0x14585c: 0xafa500b4  sw          $a1, 0xB4($sp)
    ctx->pc = 0x14585cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 5));
label_145860:
    // 0x145860: 0x27b000b8  addiu       $s0, $sp, 0xB8
    ctx->pc = 0x145860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_145864:
    // 0x145864: 0xa3a000b8  sb          $zero, 0xB8($sp)
    ctx->pc = 0x145864u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 184), (uint8_t)GPR_U32(ctx, 0));
label_145868:
    // 0x145868: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x145868u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_14586c:
    // 0x14586c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x14586cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_145870:
    // 0x145870: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x145870u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_145874:
    // 0x145874: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x145874u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_145878:
    // 0x145878: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x145878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_14587c:
    // 0x14587c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x14587cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_145880:
    // 0x145880: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x145880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_145884:
    // 0x145884: 0xc091fea  jal         func_247FA8
label_145888:
    if (ctx->pc == 0x145888u) {
        ctx->pc = 0x145888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145884u;
        // 0x145888: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14588Cu;
        goto label_14588c;
    }
    ctx->pc = 0x145884u;
    SET_GPR_U32(ctx, 31, 0x14588Cu);
    ctx->pc = 0x145888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145884u;
    // 0x145888: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247FA8u, 0x145884u, 0x14588Cu)) {
        return;
    }
    ctx->pc = 0x14588Cu;
label_14588c:
    // 0x14588c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_145890:
    if (ctx->pc == 0x145890u) {
        ctx->pc = 0x145890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14588Cu;
        // 0x145890: 0xa3a0004c  sb          $zero, 0x4C($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145894u;
        goto label_145894;
    }
    ctx->pc = 0x14588Cu;
    {
        const bool branch_taken_0x14588c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14588c) {
            ctx->pc = 0x145890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14588Cu;
            // 0x145890: 0xa3a0004c  sb          $zero, 0x4C($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1458A8u;
            goto label_1458a8;
        }
    }
    ctx->pc = 0x145894u;
label_145894:
    // 0x145894: 0xc092094  jal         func_248250
label_145898:
    if (ctx->pc == 0x145898u) {
        ctx->pc = 0x145898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145894u;
        // 0x145898: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14589Cu;
        goto label_14589c;
    }
    ctx->pc = 0x145894u;
    SET_GPR_U32(ctx, 31, 0x14589Cu);
    ctx->pc = 0x145898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145894u;
    // 0x145898: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248250u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248250u, 0x145894u, 0x14589Cu)) {
        return;
    }
    ctx->pc = 0x14589Cu;
label_14589c:
    // 0x14589c: 0xc092016  jal         func_248058
label_1458a0:
    if (ctx->pc == 0x1458A0u) {
        ctx->pc = 0x1458A4u;
        goto label_1458a4;
    }
    ctx->pc = 0x14589Cu;
    SET_GPR_U32(ctx, 31, 0x1458A4u);
    ctx->pc = 0x248058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248058u, 0x14589Cu, 0x1458A4u)) {
        return;
    }
    ctx->pc = 0x1458A4u;
label_1458a4:
    // 0x1458a4: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x1458a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
label_1458a8:
    // 0x1458a8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1458a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1458ac:
    // 0x1458ac: 0xa2620003  sb          $v0, 0x3($s3)
    ctx->pc = 0x1458acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 2));
label_1458b0:
    // 0x1458b0: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x1458b0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
label_1458b4:
    // 0x1458b4: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x1458b4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_1458b8:
    // 0x1458b8: 0xa3a00070  sb          $zero, 0x70($sp)
    ctx->pc = 0x1458b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 0));
label_1458bc:
    // 0x1458bc: 0xa2420003  sb          $v0, 0x3($s2)
    ctx->pc = 0x1458bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 2));
label_1458c0:
    // 0x1458c0: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x1458c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
label_1458c4:
    // 0x1458c4: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x1458c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
label_1458c8:
    // 0x1458c8: 0xa3a00094  sb          $zero, 0x94($sp)
    ctx->pc = 0x1458c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 148), (uint8_t)GPR_U32(ctx, 0));
label_1458cc:
    // 0x1458cc: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x1458ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
label_1458d0:
    // 0x1458d0: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x1458d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
label_1458d4:
    // 0x1458d4: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x1458d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
label_1458d8:
    // 0x1458d8: 0xa3a000b8  sb          $zero, 0xB8($sp)
    ctx->pc = 0x1458d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 184), (uint8_t)GPR_U32(ctx, 0));
label_1458dc:
    // 0x1458dc: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x1458dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
label_1458e0:
    // 0x1458e0: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1458e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_1458e4:
    // 0x1458e4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1458e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_1458e8:
    // 0x1458e8: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x1458e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_1458ec:
    // 0x1458ec: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1458ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1458f0:
    // 0x1458f0: 0x40f809  jalr        $v0
label_1458f4:
    if (ctx->pc == 0x1458F4u) {
        ctx->pc = 0x1458F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1458F0u;
        // 0x1458f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1458F8u;
        goto label_1458f8;
    }
    ctx->pc = 0x1458F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1458F8u);
        ctx->pc = 0x1458F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1458F0u;
        // 0x1458f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1458F0u, 0x1458F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1458F8u;
label_1458f8:
    // 0x1458f8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1458f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1458fc:
    // 0x1458fc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1458fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_145900:
    // 0x145900: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x145900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_145904:
    // 0x145904: 0xc091fea  jal         func_247FA8
label_145908:
    if (ctx->pc == 0x145908u) {
        ctx->pc = 0x145908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145904u;
        // 0x145908: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14590Cu;
        goto label_14590c;
    }
    ctx->pc = 0x145904u;
    SET_GPR_U32(ctx, 31, 0x14590Cu);
    ctx->pc = 0x145908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145904u;
    // 0x145908: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247FA8u, 0x145904u, 0x14590Cu)) {
        return;
    }
    ctx->pc = 0x14590Cu;
label_14590c:
    // 0x14590c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_145910:
    if (ctx->pc == 0x145910u) {
        ctx->pc = 0x145910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14590Cu;
        // 0x145910: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145914u;
        goto label_145914;
    }
    ctx->pc = 0x14590Cu;
    {
        const bool branch_taken_0x14590c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14590Cu;
        // 0x145910: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14590c) {
            ctx->pc = 0x145928u;
            goto label_145928;
        }
    }
    ctx->pc = 0x145914u;
label_145914:
    // 0x145914: 0xc092094  jal         func_248250
label_145918:
    if (ctx->pc == 0x145918u) {
        ctx->pc = 0x145918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145914u;
        // 0x145918: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14591Cu;
        goto label_14591c;
    }
    ctx->pc = 0x145914u;
    SET_GPR_U32(ctx, 31, 0x14591Cu);
    ctx->pc = 0x145918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145914u;
    // 0x145918: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248250u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248250u, 0x145914u, 0x14591Cu)) {
        return;
    }
    ctx->pc = 0x14591Cu;
label_14591c:
    // 0x14591c: 0xc092016  jal         func_248058
label_145920:
    if (ctx->pc == 0x145920u) {
        ctx->pc = 0x145924u;
        goto label_145924;
    }
    ctx->pc = 0x14591Cu;
    SET_GPR_U32(ctx, 31, 0x145924u);
    ctx->pc = 0x248058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248058u, 0x14591Cu, 0x145924u)) {
        return;
    }
    ctx->pc = 0x145924u;
label_145924:
    // 0x145924: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x145924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_145928:
    // 0x145928: 0xc68d0198  lwc1        $f13, 0x198($s4)
    ctx->pc = 0x145928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_14592c:
    // 0x14592c: 0xc68c0194  lwc1        $f12, 0x194($s4)
    ctx->pc = 0x14592cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_145930:
    // 0x145930: 0x8c44e780  lw          $a0, -0x1880($v0)
    ctx->pc = 0x145930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961024)));
label_145934:
    // 0x145934: 0xc079eaa  jal         func_1E7AA8
label_145938:
    if (ctx->pc == 0x145938u) {
        ctx->pc = 0x145938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145934u;
        // 0x145938: 0x8e85010c  lw          $a1, 0x10C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14593Cu;
        goto label_14593c;
    }
    ctx->pc = 0x145934u;
    SET_GPR_U32(ctx, 31, 0x14593Cu);
    ctx->pc = 0x145938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145934u;
    // 0x145938: 0x8e85010c  lw          $a1, 0x10C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7AA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7AA8u, 0x145934u, 0x14593Cu)) {
        return;
    }
    ctx->pc = 0x14593Cu;
label_14593c:
    // 0x14593c: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x14593cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_145940:
    // 0x145940: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x145940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_145944:
    // 0x145944: 0x40f809  jalr        $v0
label_145948:
    if (ctx->pc == 0x145948u) {
        ctx->pc = 0x145948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145944u;
        // 0x145948: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14594Cu;
        goto label_14594c;
    }
    ctx->pc = 0x145944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14594Cu);
        ctx->pc = 0x145948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145944u;
        // 0x145948: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145944u, 0x14594Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14594Cu;
label_14594c:
    // 0x14594c: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x14594cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_145950:
    // 0x145950: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x145950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_145954:
    // 0x145954: 0x40f809  jalr        $v0
label_145958:
    if (ctx->pc == 0x145958u) {
        ctx->pc = 0x145958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145954u;
        // 0x145958: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14595Cu;
        goto label_14595c;
    }
    ctx->pc = 0x145954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14595Cu);
        ctx->pc = 0x145958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145954u;
        // 0x145958: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145954u, 0x14595Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14595Cu;
label_14595c:
    // 0x14595c: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x14595cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_145960:
    // 0x145960: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x145960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_145964:
    // 0x145964: 0x40f809  jalr        $v0
label_145968:
    if (ctx->pc == 0x145968u) {
        ctx->pc = 0x145968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145964u;
        // 0x145968: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14596Cu;
        goto label_14596c;
    }
    ctx->pc = 0x145964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14596Cu);
        ctx->pc = 0x145968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145964u;
        // 0x145968: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145964u, 0x14596Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14596Cu;
label_14596c:
    // 0x14596c: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x14596cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_145970:
    // 0x145970: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x145970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_145974:
    // 0x145974: 0x40f809  jalr        $v0
label_145978:
    if (ctx->pc == 0x145978u) {
        ctx->pc = 0x145978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145974u;
        // 0x145978: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14597Cu;
        goto label_14597c;
    }
    ctx->pc = 0x145974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14597Cu);
        ctx->pc = 0x145978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145974u;
        // 0x145978: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145974u, 0x14597Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14597Cu;
label_14597c:
    // 0x14597c: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x14597cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_145980:
    // 0x145980: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x145980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_145984:
    // 0x145984: 0x40f809  jalr        $v0
label_145988:
    if (ctx->pc == 0x145988u) {
        ctx->pc = 0x145988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145984u;
        // 0x145988: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14598Cu;
        goto label_14598c;
    }
    ctx->pc = 0x145984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14598Cu);
        ctx->pc = 0x145988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145984u;
        // 0x145988: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145984u, 0x14598Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14598Cu;
label_14598c:
    // 0x14598c: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x14598cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_145990:
    // 0x145990: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x145990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_145994:
    // 0x145994: 0x40f809  jalr        $v0
label_145998:
    if (ctx->pc == 0x145998u) {
        ctx->pc = 0x145998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145994u;
        // 0x145998: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14599Cu;
        goto label_14599c;
    }
    ctx->pc = 0x145994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14599Cu);
        ctx->pc = 0x145998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145994u;
        // 0x145998: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145994u, 0x14599Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14599Cu;
label_14599c:
    // 0x14599c: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x14599cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_1459a0:
    // 0x1459a0: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x1459a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_1459a4:
    // 0x1459a4: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x1459a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1459a8:
    // 0x1459a8: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x1459a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1459ac:
    // 0x1459ac: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x1459acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1459b0:
    // 0x1459b0: 0x7bb50120  lq          $s5, 0x120($sp)
    ctx->pc = 0x1459b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1459b4:
    // 0x1459b4: 0x7bb60110  lq          $s6, 0x110($sp)
    ctx->pc = 0x1459b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1459b8:
    // 0x1459b8: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x1459b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_1459bc:
    // 0x1459bc: 0xc7b50188  lwc1        $f21, 0x188($sp)
    ctx->pc = 0x1459bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1459c0:
    // 0x1459c0: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x1459c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1459c4:
    // 0x1459c4: 0x3e00008  jr          $ra
label_1459c8:
    if (ctx->pc == 0x1459C8u) {
        ctx->pc = 0x1459C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1459C4u;
        // 0x1459c8: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1459CCu;
        goto label_1459cc;
    }
    ctx->pc = 0x1459C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1459C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1459C4u;
        // 0x1459c8: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1459C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1459CCu;
label_1459cc:
    // 0x1459cc: 0x0  nop
    ctx->pc = 0x1459ccu;
    // NOP
    ctx->pc = 0x1459d0u;
}
