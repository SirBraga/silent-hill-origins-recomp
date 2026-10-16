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

// Function: sub_00233228
// Address: 0x233228 - 0x234408
void sub_00233228_0x233228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233228_0x233228");
#endif

    switch (ctx->pc) {
        case 0x233228u: goto label_233228;
        case 0x23322cu: goto label_23322c;
        case 0x233230u: goto label_233230;
        case 0x233234u: goto label_233234;
        case 0x233238u: goto label_233238;
        case 0x23323cu: goto label_23323c;
        case 0x233240u: goto label_233240;
        case 0x233244u: goto label_233244;
        case 0x233248u: goto label_233248;
        case 0x23324cu: goto label_23324c;
        case 0x233250u: goto label_233250;
        case 0x233254u: goto label_233254;
        case 0x233258u: goto label_233258;
        case 0x23325cu: goto label_23325c;
        case 0x233260u: goto label_233260;
        case 0x233264u: goto label_233264;
        case 0x233268u: goto label_233268;
        case 0x23326cu: goto label_23326c;
        case 0x233270u: goto label_233270;
        case 0x233274u: goto label_233274;
        case 0x233278u: goto label_233278;
        case 0x23327cu: goto label_23327c;
        case 0x233280u: goto label_233280;
        case 0x233284u: goto label_233284;
        case 0x233288u: goto label_233288;
        case 0x23328cu: goto label_23328c;
        case 0x233290u: goto label_233290;
        case 0x233294u: goto label_233294;
        case 0x233298u: goto label_233298;
        case 0x23329cu: goto label_23329c;
        case 0x2332a0u: goto label_2332a0;
        case 0x2332a4u: goto label_2332a4;
        case 0x2332a8u: goto label_2332a8;
        case 0x2332acu: goto label_2332ac;
        case 0x2332b0u: goto label_2332b0;
        case 0x2332b4u: goto label_2332b4;
        case 0x2332b8u: goto label_2332b8;
        case 0x2332bcu: goto label_2332bc;
        case 0x2332c0u: goto label_2332c0;
        case 0x2332c4u: goto label_2332c4;
        case 0x2332c8u: goto label_2332c8;
        case 0x2332ccu: goto label_2332cc;
        case 0x2332d0u: goto label_2332d0;
        case 0x2332d4u: goto label_2332d4;
        case 0x2332d8u: goto label_2332d8;
        case 0x2332dcu: goto label_2332dc;
        case 0x2332e0u: goto label_2332e0;
        case 0x2332e4u: goto label_2332e4;
        case 0x2332e8u: goto label_2332e8;
        case 0x2332ecu: goto label_2332ec;
        case 0x2332f0u: goto label_2332f0;
        case 0x2332f4u: goto label_2332f4;
        case 0x2332f8u: goto label_2332f8;
        case 0x2332fcu: goto label_2332fc;
        case 0x233300u: goto label_233300;
        case 0x233304u: goto label_233304;
        case 0x233308u: goto label_233308;
        case 0x23330cu: goto label_23330c;
        case 0x233310u: goto label_233310;
        case 0x233314u: goto label_233314;
        case 0x233318u: goto label_233318;
        case 0x23331cu: goto label_23331c;
        case 0x233320u: goto label_233320;
        case 0x233324u: goto label_233324;
        case 0x233328u: goto label_233328;
        case 0x23332cu: goto label_23332c;
        case 0x233330u: goto label_233330;
        case 0x233334u: goto label_233334;
        case 0x233338u: goto label_233338;
        case 0x23333cu: goto label_23333c;
        case 0x233340u: goto label_233340;
        case 0x233344u: goto label_233344;
        case 0x233348u: goto label_233348;
        case 0x23334cu: goto label_23334c;
        case 0x233350u: goto label_233350;
        case 0x233354u: goto label_233354;
        case 0x233358u: goto label_233358;
        case 0x23335cu: goto label_23335c;
        case 0x233360u: goto label_233360;
        case 0x233364u: goto label_233364;
        case 0x233368u: goto label_233368;
        case 0x23336cu: goto label_23336c;
        case 0x233370u: goto label_233370;
        case 0x233374u: goto label_233374;
        case 0x233378u: goto label_233378;
        case 0x23337cu: goto label_23337c;
        case 0x233380u: goto label_233380;
        case 0x233384u: goto label_233384;
        case 0x233388u: goto label_233388;
        case 0x23338cu: goto label_23338c;
        case 0x233390u: goto label_233390;
        case 0x233394u: goto label_233394;
        case 0x233398u: goto label_233398;
        case 0x23339cu: goto label_23339c;
        case 0x2333a0u: goto label_2333a0;
        case 0x2333a4u: goto label_2333a4;
        case 0x2333a8u: goto label_2333a8;
        case 0x2333acu: goto label_2333ac;
        case 0x2333b0u: goto label_2333b0;
        case 0x2333b4u: goto label_2333b4;
        case 0x2333b8u: goto label_2333b8;
        case 0x2333bcu: goto label_2333bc;
        case 0x2333c0u: goto label_2333c0;
        case 0x2333c4u: goto label_2333c4;
        case 0x2333c8u: goto label_2333c8;
        case 0x2333ccu: goto label_2333cc;
        case 0x2333d0u: goto label_2333d0;
        case 0x2333d4u: goto label_2333d4;
        case 0x2333d8u: goto label_2333d8;
        case 0x2333dcu: goto label_2333dc;
        case 0x2333e0u: goto label_2333e0;
        case 0x2333e4u: goto label_2333e4;
        case 0x2333e8u: goto label_2333e8;
        case 0x2333ecu: goto label_2333ec;
        case 0x2333f0u: goto label_2333f0;
        case 0x2333f4u: goto label_2333f4;
        case 0x2333f8u: goto label_2333f8;
        case 0x2333fcu: goto label_2333fc;
        case 0x233400u: goto label_233400;
        case 0x233404u: goto label_233404;
        case 0x233408u: goto label_233408;
        case 0x23340cu: goto label_23340c;
        case 0x233410u: goto label_233410;
        case 0x233414u: goto label_233414;
        case 0x233418u: goto label_233418;
        case 0x23341cu: goto label_23341c;
        case 0x233420u: goto label_233420;
        case 0x233424u: goto label_233424;
        case 0x233428u: goto label_233428;
        case 0x23342cu: goto label_23342c;
        case 0x233430u: goto label_233430;
        case 0x233434u: goto label_233434;
        case 0x233438u: goto label_233438;
        case 0x23343cu: goto label_23343c;
        case 0x233440u: goto label_233440;
        case 0x233444u: goto label_233444;
        case 0x233448u: goto label_233448;
        case 0x23344cu: goto label_23344c;
        case 0x233450u: goto label_233450;
        case 0x233454u: goto label_233454;
        case 0x233458u: goto label_233458;
        case 0x23345cu: goto label_23345c;
        case 0x233460u: goto label_233460;
        case 0x233464u: goto label_233464;
        case 0x233468u: goto label_233468;
        case 0x23346cu: goto label_23346c;
        case 0x233470u: goto label_233470;
        case 0x233474u: goto label_233474;
        case 0x233478u: goto label_233478;
        case 0x23347cu: goto label_23347c;
        case 0x233480u: goto label_233480;
        case 0x233484u: goto label_233484;
        case 0x233488u: goto label_233488;
        case 0x23348cu: goto label_23348c;
        case 0x233490u: goto label_233490;
        case 0x233494u: goto label_233494;
        case 0x233498u: goto label_233498;
        case 0x23349cu: goto label_23349c;
        case 0x2334a0u: goto label_2334a0;
        case 0x2334a4u: goto label_2334a4;
        case 0x2334a8u: goto label_2334a8;
        case 0x2334acu: goto label_2334ac;
        case 0x2334b0u: goto label_2334b0;
        case 0x2334b4u: goto label_2334b4;
        case 0x2334b8u: goto label_2334b8;
        case 0x2334bcu: goto label_2334bc;
        case 0x2334c0u: goto label_2334c0;
        case 0x2334c4u: goto label_2334c4;
        case 0x2334c8u: goto label_2334c8;
        case 0x2334ccu: goto label_2334cc;
        case 0x2334d0u: goto label_2334d0;
        case 0x2334d4u: goto label_2334d4;
        case 0x2334d8u: goto label_2334d8;
        case 0x2334dcu: goto label_2334dc;
        case 0x2334e0u: goto label_2334e0;
        case 0x2334e4u: goto label_2334e4;
        case 0x2334e8u: goto label_2334e8;
        case 0x2334ecu: goto label_2334ec;
        case 0x2334f0u: goto label_2334f0;
        case 0x2334f4u: goto label_2334f4;
        case 0x2334f8u: goto label_2334f8;
        case 0x2334fcu: goto label_2334fc;
        case 0x233500u: goto label_233500;
        case 0x233504u: goto label_233504;
        case 0x233508u: goto label_233508;
        case 0x23350cu: goto label_23350c;
        case 0x233510u: goto label_233510;
        case 0x233514u: goto label_233514;
        case 0x233518u: goto label_233518;
        case 0x23351cu: goto label_23351c;
        case 0x233520u: goto label_233520;
        case 0x233524u: goto label_233524;
        case 0x233528u: goto label_233528;
        case 0x23352cu: goto label_23352c;
        case 0x233530u: goto label_233530;
        case 0x233534u: goto label_233534;
        case 0x233538u: goto label_233538;
        case 0x23353cu: goto label_23353c;
        case 0x233540u: goto label_233540;
        case 0x233544u: goto label_233544;
        case 0x233548u: goto label_233548;
        case 0x23354cu: goto label_23354c;
        case 0x233550u: goto label_233550;
        case 0x233554u: goto label_233554;
        case 0x233558u: goto label_233558;
        case 0x23355cu: goto label_23355c;
        case 0x233560u: goto label_233560;
        case 0x233564u: goto label_233564;
        case 0x233568u: goto label_233568;
        case 0x23356cu: goto label_23356c;
        case 0x233570u: goto label_233570;
        case 0x233574u: goto label_233574;
        case 0x233578u: goto label_233578;
        case 0x23357cu: goto label_23357c;
        case 0x233580u: goto label_233580;
        case 0x233584u: goto label_233584;
        case 0x233588u: goto label_233588;
        case 0x23358cu: goto label_23358c;
        case 0x233590u: goto label_233590;
        case 0x233594u: goto label_233594;
        case 0x233598u: goto label_233598;
        case 0x23359cu: goto label_23359c;
        case 0x2335a0u: goto label_2335a0;
        case 0x2335a4u: goto label_2335a4;
        case 0x2335a8u: goto label_2335a8;
        case 0x2335acu: goto label_2335ac;
        case 0x2335b0u: goto label_2335b0;
        case 0x2335b4u: goto label_2335b4;
        case 0x2335b8u: goto label_2335b8;
        case 0x2335bcu: goto label_2335bc;
        case 0x2335c0u: goto label_2335c0;
        case 0x2335c4u: goto label_2335c4;
        case 0x2335c8u: goto label_2335c8;
        case 0x2335ccu: goto label_2335cc;
        case 0x2335d0u: goto label_2335d0;
        case 0x2335d4u: goto label_2335d4;
        case 0x2335d8u: goto label_2335d8;
        case 0x2335dcu: goto label_2335dc;
        case 0x2335e0u: goto label_2335e0;
        case 0x2335e4u: goto label_2335e4;
        case 0x2335e8u: goto label_2335e8;
        case 0x2335ecu: goto label_2335ec;
        case 0x2335f0u: goto label_2335f0;
        case 0x2335f4u: goto label_2335f4;
        case 0x2335f8u: goto label_2335f8;
        case 0x2335fcu: goto label_2335fc;
        case 0x233600u: goto label_233600;
        case 0x233604u: goto label_233604;
        case 0x233608u: goto label_233608;
        case 0x23360cu: goto label_23360c;
        case 0x233610u: goto label_233610;
        case 0x233614u: goto label_233614;
        case 0x233618u: goto label_233618;
        case 0x23361cu: goto label_23361c;
        case 0x233620u: goto label_233620;
        case 0x233624u: goto label_233624;
        case 0x233628u: goto label_233628;
        case 0x23362cu: goto label_23362c;
        case 0x233630u: goto label_233630;
        case 0x233634u: goto label_233634;
        case 0x233638u: goto label_233638;
        case 0x23363cu: goto label_23363c;
        case 0x233640u: goto label_233640;
        case 0x233644u: goto label_233644;
        case 0x233648u: goto label_233648;
        case 0x23364cu: goto label_23364c;
        case 0x233650u: goto label_233650;
        case 0x233654u: goto label_233654;
        case 0x233658u: goto label_233658;
        case 0x23365cu: goto label_23365c;
        case 0x233660u: goto label_233660;
        case 0x233664u: goto label_233664;
        case 0x233668u: goto label_233668;
        case 0x23366cu: goto label_23366c;
        case 0x233670u: goto label_233670;
        case 0x233674u: goto label_233674;
        case 0x233678u: goto label_233678;
        case 0x23367cu: goto label_23367c;
        case 0x233680u: goto label_233680;
        case 0x233684u: goto label_233684;
        case 0x233688u: goto label_233688;
        case 0x23368cu: goto label_23368c;
        case 0x233690u: goto label_233690;
        case 0x233694u: goto label_233694;
        case 0x233698u: goto label_233698;
        case 0x23369cu: goto label_23369c;
        case 0x2336a0u: goto label_2336a0;
        case 0x2336a4u: goto label_2336a4;
        case 0x2336a8u: goto label_2336a8;
        case 0x2336acu: goto label_2336ac;
        case 0x2336b0u: goto label_2336b0;
        case 0x2336b4u: goto label_2336b4;
        case 0x2336b8u: goto label_2336b8;
        case 0x2336bcu: goto label_2336bc;
        case 0x2336c0u: goto label_2336c0;
        case 0x2336c4u: goto label_2336c4;
        case 0x2336c8u: goto label_2336c8;
        case 0x2336ccu: goto label_2336cc;
        case 0x2336d0u: goto label_2336d0;
        case 0x2336d4u: goto label_2336d4;
        case 0x2336d8u: goto label_2336d8;
        case 0x2336dcu: goto label_2336dc;
        case 0x2336e0u: goto label_2336e0;
        case 0x2336e4u: goto label_2336e4;
        case 0x2336e8u: goto label_2336e8;
        case 0x2336ecu: goto label_2336ec;
        case 0x2336f0u: goto label_2336f0;
        case 0x2336f4u: goto label_2336f4;
        case 0x2336f8u: goto label_2336f8;
        case 0x2336fcu: goto label_2336fc;
        case 0x233700u: goto label_233700;
        case 0x233704u: goto label_233704;
        case 0x233708u: goto label_233708;
        case 0x23370cu: goto label_23370c;
        case 0x233710u: goto label_233710;
        case 0x233714u: goto label_233714;
        case 0x233718u: goto label_233718;
        case 0x23371cu: goto label_23371c;
        case 0x233720u: goto label_233720;
        case 0x233724u: goto label_233724;
        case 0x233728u: goto label_233728;
        case 0x23372cu: goto label_23372c;
        case 0x233730u: goto label_233730;
        case 0x233734u: goto label_233734;
        case 0x233738u: goto label_233738;
        case 0x23373cu: goto label_23373c;
        case 0x233740u: goto label_233740;
        case 0x233744u: goto label_233744;
        case 0x233748u: goto label_233748;
        case 0x23374cu: goto label_23374c;
        case 0x233750u: goto label_233750;
        case 0x233754u: goto label_233754;
        case 0x233758u: goto label_233758;
        case 0x23375cu: goto label_23375c;
        case 0x233760u: goto label_233760;
        case 0x233764u: goto label_233764;
        case 0x233768u: goto label_233768;
        case 0x23376cu: goto label_23376c;
        case 0x233770u: goto label_233770;
        case 0x233774u: goto label_233774;
        case 0x233778u: goto label_233778;
        case 0x23377cu: goto label_23377c;
        case 0x233780u: goto label_233780;
        case 0x233784u: goto label_233784;
        case 0x233788u: goto label_233788;
        case 0x23378cu: goto label_23378c;
        case 0x233790u: goto label_233790;
        case 0x233794u: goto label_233794;
        case 0x233798u: goto label_233798;
        case 0x23379cu: goto label_23379c;
        case 0x2337a0u: goto label_2337a0;
        case 0x2337a4u: goto label_2337a4;
        case 0x2337a8u: goto label_2337a8;
        case 0x2337acu: goto label_2337ac;
        case 0x2337b0u: goto label_2337b0;
        case 0x2337b4u: goto label_2337b4;
        case 0x2337b8u: goto label_2337b8;
        case 0x2337bcu: goto label_2337bc;
        case 0x2337c0u: goto label_2337c0;
        case 0x2337c4u: goto label_2337c4;
        case 0x2337c8u: goto label_2337c8;
        case 0x2337ccu: goto label_2337cc;
        case 0x2337d0u: goto label_2337d0;
        case 0x2337d4u: goto label_2337d4;
        case 0x2337d8u: goto label_2337d8;
        case 0x2337dcu: goto label_2337dc;
        case 0x2337e0u: goto label_2337e0;
        case 0x2337e4u: goto label_2337e4;
        case 0x2337e8u: goto label_2337e8;
        case 0x2337ecu: goto label_2337ec;
        case 0x2337f0u: goto label_2337f0;
        case 0x2337f4u: goto label_2337f4;
        case 0x2337f8u: goto label_2337f8;
        case 0x2337fcu: goto label_2337fc;
        case 0x233800u: goto label_233800;
        case 0x233804u: goto label_233804;
        case 0x233808u: goto label_233808;
        case 0x23380cu: goto label_23380c;
        case 0x233810u: goto label_233810;
        case 0x233814u: goto label_233814;
        case 0x233818u: goto label_233818;
        case 0x23381cu: goto label_23381c;
        case 0x233820u: goto label_233820;
        case 0x233824u: goto label_233824;
        case 0x233828u: goto label_233828;
        case 0x23382cu: goto label_23382c;
        case 0x233830u: goto label_233830;
        case 0x233834u: goto label_233834;
        case 0x233838u: goto label_233838;
        case 0x23383cu: goto label_23383c;
        case 0x233840u: goto label_233840;
        case 0x233844u: goto label_233844;
        case 0x233848u: goto label_233848;
        case 0x23384cu: goto label_23384c;
        case 0x233850u: goto label_233850;
        case 0x233854u: goto label_233854;
        case 0x233858u: goto label_233858;
        case 0x23385cu: goto label_23385c;
        case 0x233860u: goto label_233860;
        case 0x233864u: goto label_233864;
        case 0x233868u: goto label_233868;
        case 0x23386cu: goto label_23386c;
        case 0x233870u: goto label_233870;
        case 0x233874u: goto label_233874;
        case 0x233878u: goto label_233878;
        case 0x23387cu: goto label_23387c;
        case 0x233880u: goto label_233880;
        case 0x233884u: goto label_233884;
        case 0x233888u: goto label_233888;
        case 0x23388cu: goto label_23388c;
        case 0x233890u: goto label_233890;
        case 0x233894u: goto label_233894;
        case 0x233898u: goto label_233898;
        case 0x23389cu: goto label_23389c;
        case 0x2338a0u: goto label_2338a0;
        case 0x2338a4u: goto label_2338a4;
        case 0x2338a8u: goto label_2338a8;
        case 0x2338acu: goto label_2338ac;
        case 0x2338b0u: goto label_2338b0;
        case 0x2338b4u: goto label_2338b4;
        case 0x2338b8u: goto label_2338b8;
        case 0x2338bcu: goto label_2338bc;
        case 0x2338c0u: goto label_2338c0;
        case 0x2338c4u: goto label_2338c4;
        case 0x2338c8u: goto label_2338c8;
        case 0x2338ccu: goto label_2338cc;
        case 0x2338d0u: goto label_2338d0;
        case 0x2338d4u: goto label_2338d4;
        case 0x2338d8u: goto label_2338d8;
        case 0x2338dcu: goto label_2338dc;
        case 0x2338e0u: goto label_2338e0;
        case 0x2338e4u: goto label_2338e4;
        case 0x2338e8u: goto label_2338e8;
        case 0x2338ecu: goto label_2338ec;
        case 0x2338f0u: goto label_2338f0;
        case 0x2338f4u: goto label_2338f4;
        case 0x2338f8u: goto label_2338f8;
        case 0x2338fcu: goto label_2338fc;
        case 0x233900u: goto label_233900;
        case 0x233904u: goto label_233904;
        case 0x233908u: goto label_233908;
        case 0x23390cu: goto label_23390c;
        case 0x233910u: goto label_233910;
        case 0x233914u: goto label_233914;
        case 0x233918u: goto label_233918;
        case 0x23391cu: goto label_23391c;
        case 0x233920u: goto label_233920;
        case 0x233924u: goto label_233924;
        case 0x233928u: goto label_233928;
        case 0x23392cu: goto label_23392c;
        case 0x233930u: goto label_233930;
        case 0x233934u: goto label_233934;
        case 0x233938u: goto label_233938;
        case 0x23393cu: goto label_23393c;
        case 0x233940u: goto label_233940;
        case 0x233944u: goto label_233944;
        case 0x233948u: goto label_233948;
        case 0x23394cu: goto label_23394c;
        case 0x233950u: goto label_233950;
        case 0x233954u: goto label_233954;
        case 0x233958u: goto label_233958;
        case 0x23395cu: goto label_23395c;
        case 0x233960u: goto label_233960;
        case 0x233964u: goto label_233964;
        case 0x233968u: goto label_233968;
        case 0x23396cu: goto label_23396c;
        case 0x233970u: goto label_233970;
        case 0x233974u: goto label_233974;
        case 0x233978u: goto label_233978;
        case 0x23397cu: goto label_23397c;
        case 0x233980u: goto label_233980;
        case 0x233984u: goto label_233984;
        case 0x233988u: goto label_233988;
        case 0x23398cu: goto label_23398c;
        case 0x233990u: goto label_233990;
        case 0x233994u: goto label_233994;
        case 0x233998u: goto label_233998;
        case 0x23399cu: goto label_23399c;
        case 0x2339a0u: goto label_2339a0;
        case 0x2339a4u: goto label_2339a4;
        case 0x2339a8u: goto label_2339a8;
        case 0x2339acu: goto label_2339ac;
        case 0x2339b0u: goto label_2339b0;
        case 0x2339b4u: goto label_2339b4;
        case 0x2339b8u: goto label_2339b8;
        case 0x2339bcu: goto label_2339bc;
        case 0x2339c0u: goto label_2339c0;
        case 0x2339c4u: goto label_2339c4;
        case 0x2339c8u: goto label_2339c8;
        case 0x2339ccu: goto label_2339cc;
        case 0x2339d0u: goto label_2339d0;
        case 0x2339d4u: goto label_2339d4;
        case 0x2339d8u: goto label_2339d8;
        case 0x2339dcu: goto label_2339dc;
        case 0x2339e0u: goto label_2339e0;
        case 0x2339e4u: goto label_2339e4;
        case 0x2339e8u: goto label_2339e8;
        case 0x2339ecu: goto label_2339ec;
        case 0x2339f0u: goto label_2339f0;
        case 0x2339f4u: goto label_2339f4;
        case 0x2339f8u: goto label_2339f8;
        case 0x2339fcu: goto label_2339fc;
        case 0x233a00u: goto label_233a00;
        case 0x233a04u: goto label_233a04;
        case 0x233a08u: goto label_233a08;
        case 0x233a0cu: goto label_233a0c;
        case 0x233a10u: goto label_233a10;
        case 0x233a14u: goto label_233a14;
        case 0x233a18u: goto label_233a18;
        case 0x233a1cu: goto label_233a1c;
        case 0x233a20u: goto label_233a20;
        case 0x233a24u: goto label_233a24;
        case 0x233a28u: goto label_233a28;
        case 0x233a2cu: goto label_233a2c;
        case 0x233a30u: goto label_233a30;
        case 0x233a34u: goto label_233a34;
        case 0x233a38u: goto label_233a38;
        case 0x233a3cu: goto label_233a3c;
        case 0x233a40u: goto label_233a40;
        case 0x233a44u: goto label_233a44;
        case 0x233a48u: goto label_233a48;
        case 0x233a4cu: goto label_233a4c;
        case 0x233a50u: goto label_233a50;
        case 0x233a54u: goto label_233a54;
        case 0x233a58u: goto label_233a58;
        case 0x233a5cu: goto label_233a5c;
        case 0x233a60u: goto label_233a60;
        case 0x233a64u: goto label_233a64;
        case 0x233a68u: goto label_233a68;
        case 0x233a6cu: goto label_233a6c;
        case 0x233a70u: goto label_233a70;
        case 0x233a74u: goto label_233a74;
        case 0x233a78u: goto label_233a78;
        case 0x233a7cu: goto label_233a7c;
        case 0x233a80u: goto label_233a80;
        case 0x233a84u: goto label_233a84;
        case 0x233a88u: goto label_233a88;
        case 0x233a8cu: goto label_233a8c;
        case 0x233a90u: goto label_233a90;
        case 0x233a94u: goto label_233a94;
        case 0x233a98u: goto label_233a98;
        case 0x233a9cu: goto label_233a9c;
        case 0x233aa0u: goto label_233aa0;
        case 0x233aa4u: goto label_233aa4;
        case 0x233aa8u: goto label_233aa8;
        case 0x233aacu: goto label_233aac;
        case 0x233ab0u: goto label_233ab0;
        case 0x233ab4u: goto label_233ab4;
        case 0x233ab8u: goto label_233ab8;
        case 0x233abcu: goto label_233abc;
        case 0x233ac0u: goto label_233ac0;
        case 0x233ac4u: goto label_233ac4;
        case 0x233ac8u: goto label_233ac8;
        case 0x233accu: goto label_233acc;
        case 0x233ad0u: goto label_233ad0;
        case 0x233ad4u: goto label_233ad4;
        case 0x233ad8u: goto label_233ad8;
        case 0x233adcu: goto label_233adc;
        case 0x233ae0u: goto label_233ae0;
        case 0x233ae4u: goto label_233ae4;
        case 0x233ae8u: goto label_233ae8;
        case 0x233aecu: goto label_233aec;
        case 0x233af0u: goto label_233af0;
        case 0x233af4u: goto label_233af4;
        case 0x233af8u: goto label_233af8;
        case 0x233afcu: goto label_233afc;
        case 0x233b00u: goto label_233b00;
        case 0x233b04u: goto label_233b04;
        case 0x233b08u: goto label_233b08;
        case 0x233b0cu: goto label_233b0c;
        case 0x233b10u: goto label_233b10;
        case 0x233b14u: goto label_233b14;
        case 0x233b18u: goto label_233b18;
        case 0x233b1cu: goto label_233b1c;
        case 0x233b20u: goto label_233b20;
        case 0x233b24u: goto label_233b24;
        case 0x233b28u: goto label_233b28;
        case 0x233b2cu: goto label_233b2c;
        case 0x233b30u: goto label_233b30;
        case 0x233b34u: goto label_233b34;
        case 0x233b38u: goto label_233b38;
        case 0x233b3cu: goto label_233b3c;
        case 0x233b40u: goto label_233b40;
        case 0x233b44u: goto label_233b44;
        case 0x233b48u: goto label_233b48;
        case 0x233b4cu: goto label_233b4c;
        case 0x233b50u: goto label_233b50;
        case 0x233b54u: goto label_233b54;
        case 0x233b58u: goto label_233b58;
        case 0x233b5cu: goto label_233b5c;
        case 0x233b60u: goto label_233b60;
        case 0x233b64u: goto label_233b64;
        case 0x233b68u: goto label_233b68;
        case 0x233b6cu: goto label_233b6c;
        case 0x233b70u: goto label_233b70;
        case 0x233b74u: goto label_233b74;
        case 0x233b78u: goto label_233b78;
        case 0x233b7cu: goto label_233b7c;
        case 0x233b80u: goto label_233b80;
        case 0x233b84u: goto label_233b84;
        case 0x233b88u: goto label_233b88;
        case 0x233b8cu: goto label_233b8c;
        case 0x233b90u: goto label_233b90;
        case 0x233b94u: goto label_233b94;
        case 0x233b98u: goto label_233b98;
        case 0x233b9cu: goto label_233b9c;
        case 0x233ba0u: goto label_233ba0;
        case 0x233ba4u: goto label_233ba4;
        case 0x233ba8u: goto label_233ba8;
        case 0x233bacu: goto label_233bac;
        case 0x233bb0u: goto label_233bb0;
        case 0x233bb4u: goto label_233bb4;
        case 0x233bb8u: goto label_233bb8;
        case 0x233bbcu: goto label_233bbc;
        case 0x233bc0u: goto label_233bc0;
        case 0x233bc4u: goto label_233bc4;
        case 0x233bc8u: goto label_233bc8;
        case 0x233bccu: goto label_233bcc;
        case 0x233bd0u: goto label_233bd0;
        case 0x233bd4u: goto label_233bd4;
        case 0x233bd8u: goto label_233bd8;
        case 0x233bdcu: goto label_233bdc;
        case 0x233be0u: goto label_233be0;
        case 0x233be4u: goto label_233be4;
        case 0x233be8u: goto label_233be8;
        case 0x233becu: goto label_233bec;
        case 0x233bf0u: goto label_233bf0;
        case 0x233bf4u: goto label_233bf4;
        case 0x233bf8u: goto label_233bf8;
        case 0x233bfcu: goto label_233bfc;
        case 0x233c00u: goto label_233c00;
        case 0x233c04u: goto label_233c04;
        case 0x233c08u: goto label_233c08;
        case 0x233c0cu: goto label_233c0c;
        case 0x233c10u: goto label_233c10;
        case 0x233c14u: goto label_233c14;
        case 0x233c18u: goto label_233c18;
        case 0x233c1cu: goto label_233c1c;
        case 0x233c20u: goto label_233c20;
        case 0x233c24u: goto label_233c24;
        case 0x233c28u: goto label_233c28;
        case 0x233c2cu: goto label_233c2c;
        case 0x233c30u: goto label_233c30;
        case 0x233c34u: goto label_233c34;
        case 0x233c38u: goto label_233c38;
        case 0x233c3cu: goto label_233c3c;
        case 0x233c40u: goto label_233c40;
        case 0x233c44u: goto label_233c44;
        case 0x233c48u: goto label_233c48;
        case 0x233c4cu: goto label_233c4c;
        case 0x233c50u: goto label_233c50;
        case 0x233c54u: goto label_233c54;
        case 0x233c58u: goto label_233c58;
        case 0x233c5cu: goto label_233c5c;
        case 0x233c60u: goto label_233c60;
        case 0x233c64u: goto label_233c64;
        case 0x233c68u: goto label_233c68;
        case 0x233c6cu: goto label_233c6c;
        case 0x233c70u: goto label_233c70;
        case 0x233c74u: goto label_233c74;
        case 0x233c78u: goto label_233c78;
        case 0x233c7cu: goto label_233c7c;
        case 0x233c80u: goto label_233c80;
        case 0x233c84u: goto label_233c84;
        case 0x233c88u: goto label_233c88;
        case 0x233c8cu: goto label_233c8c;
        case 0x233c90u: goto label_233c90;
        case 0x233c94u: goto label_233c94;
        case 0x233c98u: goto label_233c98;
        case 0x233c9cu: goto label_233c9c;
        case 0x233ca0u: goto label_233ca0;
        case 0x233ca4u: goto label_233ca4;
        case 0x233ca8u: goto label_233ca8;
        case 0x233cacu: goto label_233cac;
        case 0x233cb0u: goto label_233cb0;
        case 0x233cb4u: goto label_233cb4;
        case 0x233cb8u: goto label_233cb8;
        case 0x233cbcu: goto label_233cbc;
        case 0x233cc0u: goto label_233cc0;
        case 0x233cc4u: goto label_233cc4;
        case 0x233cc8u: goto label_233cc8;
        case 0x233cccu: goto label_233ccc;
        case 0x233cd0u: goto label_233cd0;
        case 0x233cd4u: goto label_233cd4;
        case 0x233cd8u: goto label_233cd8;
        case 0x233cdcu: goto label_233cdc;
        case 0x233ce0u: goto label_233ce0;
        case 0x233ce4u: goto label_233ce4;
        case 0x233ce8u: goto label_233ce8;
        case 0x233cecu: goto label_233cec;
        case 0x233cf0u: goto label_233cf0;
        case 0x233cf4u: goto label_233cf4;
        case 0x233cf8u: goto label_233cf8;
        case 0x233cfcu: goto label_233cfc;
        case 0x233d00u: goto label_233d00;
        case 0x233d04u: goto label_233d04;
        case 0x233d08u: goto label_233d08;
        case 0x233d0cu: goto label_233d0c;
        case 0x233d10u: goto label_233d10;
        case 0x233d14u: goto label_233d14;
        case 0x233d18u: goto label_233d18;
        case 0x233d1cu: goto label_233d1c;
        case 0x233d20u: goto label_233d20;
        case 0x233d24u: goto label_233d24;
        case 0x233d28u: goto label_233d28;
        case 0x233d2cu: goto label_233d2c;
        case 0x233d30u: goto label_233d30;
        case 0x233d34u: goto label_233d34;
        case 0x233d38u: goto label_233d38;
        case 0x233d3cu: goto label_233d3c;
        case 0x233d40u: goto label_233d40;
        case 0x233d44u: goto label_233d44;
        case 0x233d48u: goto label_233d48;
        case 0x233d4cu: goto label_233d4c;
        case 0x233d50u: goto label_233d50;
        case 0x233d54u: goto label_233d54;
        case 0x233d58u: goto label_233d58;
        case 0x233d5cu: goto label_233d5c;
        case 0x233d60u: goto label_233d60;
        case 0x233d64u: goto label_233d64;
        case 0x233d68u: goto label_233d68;
        case 0x233d6cu: goto label_233d6c;
        case 0x233d70u: goto label_233d70;
        case 0x233d74u: goto label_233d74;
        case 0x233d78u: goto label_233d78;
        case 0x233d7cu: goto label_233d7c;
        case 0x233d80u: goto label_233d80;
        case 0x233d84u: goto label_233d84;
        case 0x233d88u: goto label_233d88;
        case 0x233d8cu: goto label_233d8c;
        case 0x233d90u: goto label_233d90;
        case 0x233d94u: goto label_233d94;
        case 0x233d98u: goto label_233d98;
        case 0x233d9cu: goto label_233d9c;
        case 0x233da0u: goto label_233da0;
        case 0x233da4u: goto label_233da4;
        case 0x233da8u: goto label_233da8;
        case 0x233dacu: goto label_233dac;
        case 0x233db0u: goto label_233db0;
        case 0x233db4u: goto label_233db4;
        case 0x233db8u: goto label_233db8;
        case 0x233dbcu: goto label_233dbc;
        case 0x233dc0u: goto label_233dc0;
        case 0x233dc4u: goto label_233dc4;
        case 0x233dc8u: goto label_233dc8;
        case 0x233dccu: goto label_233dcc;
        case 0x233dd0u: goto label_233dd0;
        case 0x233dd4u: goto label_233dd4;
        case 0x233dd8u: goto label_233dd8;
        case 0x233ddcu: goto label_233ddc;
        case 0x233de0u: goto label_233de0;
        case 0x233de4u: goto label_233de4;
        case 0x233de8u: goto label_233de8;
        case 0x233decu: goto label_233dec;
        case 0x233df0u: goto label_233df0;
        case 0x233df4u: goto label_233df4;
        case 0x233df8u: goto label_233df8;
        case 0x233dfcu: goto label_233dfc;
        case 0x233e00u: goto label_233e00;
        case 0x233e04u: goto label_233e04;
        case 0x233e08u: goto label_233e08;
        case 0x233e0cu: goto label_233e0c;
        case 0x233e10u: goto label_233e10;
        case 0x233e14u: goto label_233e14;
        case 0x233e18u: goto label_233e18;
        case 0x233e1cu: goto label_233e1c;
        case 0x233e20u: goto label_233e20;
        case 0x233e24u: goto label_233e24;
        case 0x233e28u: goto label_233e28;
        case 0x233e2cu: goto label_233e2c;
        case 0x233e30u: goto label_233e30;
        case 0x233e34u: goto label_233e34;
        case 0x233e38u: goto label_233e38;
        case 0x233e3cu: goto label_233e3c;
        case 0x233e40u: goto label_233e40;
        case 0x233e44u: goto label_233e44;
        case 0x233e48u: goto label_233e48;
        case 0x233e4cu: goto label_233e4c;
        case 0x233e50u: goto label_233e50;
        case 0x233e54u: goto label_233e54;
        case 0x233e58u: goto label_233e58;
        case 0x233e5cu: goto label_233e5c;
        case 0x233e60u: goto label_233e60;
        case 0x233e64u: goto label_233e64;
        case 0x233e68u: goto label_233e68;
        case 0x233e6cu: goto label_233e6c;
        case 0x233e70u: goto label_233e70;
        case 0x233e74u: goto label_233e74;
        case 0x233e78u: goto label_233e78;
        case 0x233e7cu: goto label_233e7c;
        case 0x233e80u: goto label_233e80;
        case 0x233e84u: goto label_233e84;
        case 0x233e88u: goto label_233e88;
        case 0x233e8cu: goto label_233e8c;
        case 0x233e90u: goto label_233e90;
        case 0x233e94u: goto label_233e94;
        case 0x233e98u: goto label_233e98;
        case 0x233e9cu: goto label_233e9c;
        case 0x233ea0u: goto label_233ea0;
        case 0x233ea4u: goto label_233ea4;
        case 0x233ea8u: goto label_233ea8;
        case 0x233eacu: goto label_233eac;
        case 0x233eb0u: goto label_233eb0;
        case 0x233eb4u: goto label_233eb4;
        case 0x233eb8u: goto label_233eb8;
        case 0x233ebcu: goto label_233ebc;
        case 0x233ec0u: goto label_233ec0;
        case 0x233ec4u: goto label_233ec4;
        case 0x233ec8u: goto label_233ec8;
        case 0x233eccu: goto label_233ecc;
        case 0x233ed0u: goto label_233ed0;
        case 0x233ed4u: goto label_233ed4;
        case 0x233ed8u: goto label_233ed8;
        case 0x233edcu: goto label_233edc;
        case 0x233ee0u: goto label_233ee0;
        case 0x233ee4u: goto label_233ee4;
        case 0x233ee8u: goto label_233ee8;
        case 0x233eecu: goto label_233eec;
        case 0x233ef0u: goto label_233ef0;
        case 0x233ef4u: goto label_233ef4;
        case 0x233ef8u: goto label_233ef8;
        case 0x233efcu: goto label_233efc;
        case 0x233f00u: goto label_233f00;
        case 0x233f04u: goto label_233f04;
        case 0x233f08u: goto label_233f08;
        case 0x233f0cu: goto label_233f0c;
        case 0x233f10u: goto label_233f10;
        case 0x233f14u: goto label_233f14;
        case 0x233f18u: goto label_233f18;
        case 0x233f1cu: goto label_233f1c;
        case 0x233f20u: goto label_233f20;
        case 0x233f24u: goto label_233f24;
        case 0x233f28u: goto label_233f28;
        case 0x233f2cu: goto label_233f2c;
        case 0x233f30u: goto label_233f30;
        case 0x233f34u: goto label_233f34;
        case 0x233f38u: goto label_233f38;
        case 0x233f3cu: goto label_233f3c;
        case 0x233f40u: goto label_233f40;
        case 0x233f44u: goto label_233f44;
        case 0x233f48u: goto label_233f48;
        case 0x233f4cu: goto label_233f4c;
        case 0x233f50u: goto label_233f50;
        case 0x233f54u: goto label_233f54;
        case 0x233f58u: goto label_233f58;
        case 0x233f5cu: goto label_233f5c;
        case 0x233f60u: goto label_233f60;
        case 0x233f64u: goto label_233f64;
        case 0x233f68u: goto label_233f68;
        case 0x233f6cu: goto label_233f6c;
        case 0x233f70u: goto label_233f70;
        case 0x233f74u: goto label_233f74;
        case 0x233f78u: goto label_233f78;
        case 0x233f7cu: goto label_233f7c;
        case 0x233f80u: goto label_233f80;
        case 0x233f84u: goto label_233f84;
        case 0x233f88u: goto label_233f88;
        case 0x233f8cu: goto label_233f8c;
        case 0x233f90u: goto label_233f90;
        case 0x233f94u: goto label_233f94;
        case 0x233f98u: goto label_233f98;
        case 0x233f9cu: goto label_233f9c;
        case 0x233fa0u: goto label_233fa0;
        case 0x233fa4u: goto label_233fa4;
        case 0x233fa8u: goto label_233fa8;
        case 0x233facu: goto label_233fac;
        case 0x233fb0u: goto label_233fb0;
        case 0x233fb4u: goto label_233fb4;
        case 0x233fb8u: goto label_233fb8;
        case 0x233fbcu: goto label_233fbc;
        case 0x233fc0u: goto label_233fc0;
        case 0x233fc4u: goto label_233fc4;
        case 0x233fc8u: goto label_233fc8;
        case 0x233fccu: goto label_233fcc;
        case 0x233fd0u: goto label_233fd0;
        case 0x233fd4u: goto label_233fd4;
        case 0x233fd8u: goto label_233fd8;
        case 0x233fdcu: goto label_233fdc;
        case 0x233fe0u: goto label_233fe0;
        case 0x233fe4u: goto label_233fe4;
        case 0x233fe8u: goto label_233fe8;
        case 0x233fecu: goto label_233fec;
        case 0x233ff0u: goto label_233ff0;
        case 0x233ff4u: goto label_233ff4;
        case 0x233ff8u: goto label_233ff8;
        case 0x233ffcu: goto label_233ffc;
        case 0x234000u: goto label_234000;
        case 0x234004u: goto label_234004;
        case 0x234008u: goto label_234008;
        case 0x23400cu: goto label_23400c;
        case 0x234010u: goto label_234010;
        case 0x234014u: goto label_234014;
        case 0x234018u: goto label_234018;
        case 0x23401cu: goto label_23401c;
        case 0x234020u: goto label_234020;
        case 0x234024u: goto label_234024;
        case 0x234028u: goto label_234028;
        case 0x23402cu: goto label_23402c;
        case 0x234030u: goto label_234030;
        case 0x234034u: goto label_234034;
        case 0x234038u: goto label_234038;
        case 0x23403cu: goto label_23403c;
        case 0x234040u: goto label_234040;
        case 0x234044u: goto label_234044;
        case 0x234048u: goto label_234048;
        case 0x23404cu: goto label_23404c;
        case 0x234050u: goto label_234050;
        case 0x234054u: goto label_234054;
        case 0x234058u: goto label_234058;
        case 0x23405cu: goto label_23405c;
        case 0x234060u: goto label_234060;
        case 0x234064u: goto label_234064;
        case 0x234068u: goto label_234068;
        case 0x23406cu: goto label_23406c;
        case 0x234070u: goto label_234070;
        case 0x234074u: goto label_234074;
        case 0x234078u: goto label_234078;
        case 0x23407cu: goto label_23407c;
        case 0x234080u: goto label_234080;
        case 0x234084u: goto label_234084;
        case 0x234088u: goto label_234088;
        case 0x23408cu: goto label_23408c;
        case 0x234090u: goto label_234090;
        case 0x234094u: goto label_234094;
        case 0x234098u: goto label_234098;
        case 0x23409cu: goto label_23409c;
        case 0x2340a0u: goto label_2340a0;
        case 0x2340a4u: goto label_2340a4;
        case 0x2340a8u: goto label_2340a8;
        case 0x2340acu: goto label_2340ac;
        case 0x2340b0u: goto label_2340b0;
        case 0x2340b4u: goto label_2340b4;
        case 0x2340b8u: goto label_2340b8;
        case 0x2340bcu: goto label_2340bc;
        case 0x2340c0u: goto label_2340c0;
        case 0x2340c4u: goto label_2340c4;
        case 0x2340c8u: goto label_2340c8;
        case 0x2340ccu: goto label_2340cc;
        case 0x2340d0u: goto label_2340d0;
        case 0x2340d4u: goto label_2340d4;
        case 0x2340d8u: goto label_2340d8;
        case 0x2340dcu: goto label_2340dc;
        case 0x2340e0u: goto label_2340e0;
        case 0x2340e4u: goto label_2340e4;
        case 0x2340e8u: goto label_2340e8;
        case 0x2340ecu: goto label_2340ec;
        case 0x2340f0u: goto label_2340f0;
        case 0x2340f4u: goto label_2340f4;
        case 0x2340f8u: goto label_2340f8;
        case 0x2340fcu: goto label_2340fc;
        case 0x234100u: goto label_234100;
        case 0x234104u: goto label_234104;
        case 0x234108u: goto label_234108;
        case 0x23410cu: goto label_23410c;
        case 0x234110u: goto label_234110;
        case 0x234114u: goto label_234114;
        case 0x234118u: goto label_234118;
        case 0x23411cu: goto label_23411c;
        case 0x234120u: goto label_234120;
        case 0x234124u: goto label_234124;
        case 0x234128u: goto label_234128;
        case 0x23412cu: goto label_23412c;
        case 0x234130u: goto label_234130;
        case 0x234134u: goto label_234134;
        case 0x234138u: goto label_234138;
        case 0x23413cu: goto label_23413c;
        case 0x234140u: goto label_234140;
        case 0x234144u: goto label_234144;
        case 0x234148u: goto label_234148;
        case 0x23414cu: goto label_23414c;
        case 0x234150u: goto label_234150;
        case 0x234154u: goto label_234154;
        case 0x234158u: goto label_234158;
        case 0x23415cu: goto label_23415c;
        case 0x234160u: goto label_234160;
        case 0x234164u: goto label_234164;
        case 0x234168u: goto label_234168;
        case 0x23416cu: goto label_23416c;
        case 0x234170u: goto label_234170;
        case 0x234174u: goto label_234174;
        case 0x234178u: goto label_234178;
        case 0x23417cu: goto label_23417c;
        case 0x234180u: goto label_234180;
        case 0x234184u: goto label_234184;
        case 0x234188u: goto label_234188;
        case 0x23418cu: goto label_23418c;
        case 0x234190u: goto label_234190;
        case 0x234194u: goto label_234194;
        case 0x234198u: goto label_234198;
        case 0x23419cu: goto label_23419c;
        case 0x2341a0u: goto label_2341a0;
        case 0x2341a4u: goto label_2341a4;
        case 0x2341a8u: goto label_2341a8;
        case 0x2341acu: goto label_2341ac;
        case 0x2341b0u: goto label_2341b0;
        case 0x2341b4u: goto label_2341b4;
        case 0x2341b8u: goto label_2341b8;
        case 0x2341bcu: goto label_2341bc;
        case 0x2341c0u: goto label_2341c0;
        case 0x2341c4u: goto label_2341c4;
        case 0x2341c8u: goto label_2341c8;
        case 0x2341ccu: goto label_2341cc;
        case 0x2341d0u: goto label_2341d0;
        case 0x2341d4u: goto label_2341d4;
        case 0x2341d8u: goto label_2341d8;
        case 0x2341dcu: goto label_2341dc;
        case 0x2341e0u: goto label_2341e0;
        case 0x2341e4u: goto label_2341e4;
        case 0x2341e8u: goto label_2341e8;
        case 0x2341ecu: goto label_2341ec;
        case 0x2341f0u: goto label_2341f0;
        case 0x2341f4u: goto label_2341f4;
        case 0x2341f8u: goto label_2341f8;
        case 0x2341fcu: goto label_2341fc;
        case 0x234200u: goto label_234200;
        case 0x234204u: goto label_234204;
        case 0x234208u: goto label_234208;
        case 0x23420cu: goto label_23420c;
        case 0x234210u: goto label_234210;
        case 0x234214u: goto label_234214;
        case 0x234218u: goto label_234218;
        case 0x23421cu: goto label_23421c;
        case 0x234220u: goto label_234220;
        case 0x234224u: goto label_234224;
        case 0x234228u: goto label_234228;
        case 0x23422cu: goto label_23422c;
        case 0x234230u: goto label_234230;
        case 0x234234u: goto label_234234;
        case 0x234238u: goto label_234238;
        case 0x23423cu: goto label_23423c;
        case 0x234240u: goto label_234240;
        case 0x234244u: goto label_234244;
        case 0x234248u: goto label_234248;
        case 0x23424cu: goto label_23424c;
        case 0x234250u: goto label_234250;
        case 0x234254u: goto label_234254;
        case 0x234258u: goto label_234258;
        case 0x23425cu: goto label_23425c;
        case 0x234260u: goto label_234260;
        case 0x234264u: goto label_234264;
        case 0x234268u: goto label_234268;
        case 0x23426cu: goto label_23426c;
        case 0x234270u: goto label_234270;
        case 0x234274u: goto label_234274;
        case 0x234278u: goto label_234278;
        case 0x23427cu: goto label_23427c;
        case 0x234280u: goto label_234280;
        case 0x234284u: goto label_234284;
        case 0x234288u: goto label_234288;
        case 0x23428cu: goto label_23428c;
        case 0x234290u: goto label_234290;
        case 0x234294u: goto label_234294;
        case 0x234298u: goto label_234298;
        case 0x23429cu: goto label_23429c;
        case 0x2342a0u: goto label_2342a0;
        case 0x2342a4u: goto label_2342a4;
        case 0x2342a8u: goto label_2342a8;
        case 0x2342acu: goto label_2342ac;
        case 0x2342b0u: goto label_2342b0;
        case 0x2342b4u: goto label_2342b4;
        case 0x2342b8u: goto label_2342b8;
        case 0x2342bcu: goto label_2342bc;
        case 0x2342c0u: goto label_2342c0;
        case 0x2342c4u: goto label_2342c4;
        case 0x2342c8u: goto label_2342c8;
        case 0x2342ccu: goto label_2342cc;
        case 0x2342d0u: goto label_2342d0;
        case 0x2342d4u: goto label_2342d4;
        case 0x2342d8u: goto label_2342d8;
        case 0x2342dcu: goto label_2342dc;
        case 0x2342e0u: goto label_2342e0;
        case 0x2342e4u: goto label_2342e4;
        case 0x2342e8u: goto label_2342e8;
        case 0x2342ecu: goto label_2342ec;
        case 0x2342f0u: goto label_2342f0;
        case 0x2342f4u: goto label_2342f4;
        case 0x2342f8u: goto label_2342f8;
        case 0x2342fcu: goto label_2342fc;
        case 0x234300u: goto label_234300;
        case 0x234304u: goto label_234304;
        case 0x234308u: goto label_234308;
        case 0x23430cu: goto label_23430c;
        case 0x234310u: goto label_234310;
        case 0x234314u: goto label_234314;
        case 0x234318u: goto label_234318;
        case 0x23431cu: goto label_23431c;
        case 0x234320u: goto label_234320;
        case 0x234324u: goto label_234324;
        case 0x234328u: goto label_234328;
        case 0x23432cu: goto label_23432c;
        case 0x234330u: goto label_234330;
        case 0x234334u: goto label_234334;
        case 0x234338u: goto label_234338;
        case 0x23433cu: goto label_23433c;
        case 0x234340u: goto label_234340;
        case 0x234344u: goto label_234344;
        case 0x234348u: goto label_234348;
        case 0x23434cu: goto label_23434c;
        case 0x234350u: goto label_234350;
        case 0x234354u: goto label_234354;
        case 0x234358u: goto label_234358;
        case 0x23435cu: goto label_23435c;
        case 0x234360u: goto label_234360;
        case 0x234364u: goto label_234364;
        case 0x234368u: goto label_234368;
        case 0x23436cu: goto label_23436c;
        case 0x234370u: goto label_234370;
        case 0x234374u: goto label_234374;
        case 0x234378u: goto label_234378;
        case 0x23437cu: goto label_23437c;
        case 0x234380u: goto label_234380;
        case 0x234384u: goto label_234384;
        case 0x234388u: goto label_234388;
        case 0x23438cu: goto label_23438c;
        case 0x234390u: goto label_234390;
        case 0x234394u: goto label_234394;
        case 0x234398u: goto label_234398;
        case 0x23439cu: goto label_23439c;
        case 0x2343a0u: goto label_2343a0;
        case 0x2343a4u: goto label_2343a4;
        case 0x2343a8u: goto label_2343a8;
        case 0x2343acu: goto label_2343ac;
        case 0x2343b0u: goto label_2343b0;
        case 0x2343b4u: goto label_2343b4;
        case 0x2343b8u: goto label_2343b8;
        case 0x2343bcu: goto label_2343bc;
        case 0x2343c0u: goto label_2343c0;
        case 0x2343c4u: goto label_2343c4;
        case 0x2343c8u: goto label_2343c8;
        case 0x2343ccu: goto label_2343cc;
        case 0x2343d0u: goto label_2343d0;
        case 0x2343d4u: goto label_2343d4;
        case 0x2343d8u: goto label_2343d8;
        case 0x2343dcu: goto label_2343dc;
        case 0x2343e0u: goto label_2343e0;
        case 0x2343e4u: goto label_2343e4;
        case 0x2343e8u: goto label_2343e8;
        case 0x2343ecu: goto label_2343ec;
        case 0x2343f0u: goto label_2343f0;
        case 0x2343f4u: goto label_2343f4;
        case 0x2343f8u: goto label_2343f8;
        case 0x2343fcu: goto label_2343fc;
        case 0x234400u: goto label_234400;
        case 0x234404u: goto label_234404;
        default: break;
    }

    ctx->pc = 0x233228u;

label_233228:
    // 0x233228: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x233228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
label_23322c:
    // 0x23322c: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x23322cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
label_233230:
    // 0x233230: 0x7fb10220  sq          $s1, 0x220($sp)
    ctx->pc = 0x233230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 17));
label_233234:
    // 0x233234: 0x7fb20210  sq          $s2, 0x210($sp)
    ctx->pc = 0x233234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 18));
label_233238:
    // 0x233238: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x233238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23323c:
    // 0x23323c: 0x7fb00230  sq          $s0, 0x230($sp)
    ctx->pc = 0x23323cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 16));
label_233240:
    // 0x233240: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x233240u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_233244:
    // 0x233244: 0x7fb30200  sq          $s3, 0x200($sp)
    ctx->pc = 0x233244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 19));
label_233248:
    // 0x233248: 0x2cc2003b  sltiu       $v0, $a2, 0x3B
    ctx->pc = 0x233248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_23324c:
    // 0x23324c: 0x7fb401f0  sq          $s4, 0x1F0($sp)
    ctx->pc = 0x23324cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 20));
label_233250:
    // 0x233250: 0x7fb501e0  sq          $s5, 0x1E0($sp)
    ctx->pc = 0x233250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 21));
label_233254:
    // 0x233254: 0x7fb601d0  sq          $s6, 0x1D0($sp)
    ctx->pc = 0x233254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 22));
label_233258:
    // 0x233258: 0x7fb701c0  sq          $s7, 0x1C0($sp)
    ctx->pc = 0x233258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 23));
label_23325c:
    // 0x23325c: 0x7fbe01b0  sq          $fp, 0x1B0($sp)
    ctx->pc = 0x23325cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 30));
label_233260:
    // 0x233260: 0xffbf01a0  sd          $ra, 0x1A0($sp)
    ctx->pc = 0x233260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 31));
label_233264:
    // 0x233264: 0xafa700c4  sw          $a3, 0xC4($sp)
    ctx->pc = 0x233264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 7));
label_233268:
    // 0x233268: 0xafa800c8  sw          $t0, 0xC8($sp)
    ctx->pc = 0x233268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 8));
label_23326c:
    // 0x23326c: 0xafa900cc  sw          $t1, 0xCC($sp)
    ctx->pc = 0x23326cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 9));
label_233270:
    // 0x233270: 0xafaa00d0  sw          $t2, 0xD0($sp)
    ctx->pc = 0x233270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 10));
label_233274:
    // 0x233274: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_233278:
    if (ctx->pc == 0x233278u) {
        ctx->pc = 0x233278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233274u;
        // 0x233278: 0xafab00d4  sw          $t3, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23327Cu;
        goto label_23327c;
    }
    ctx->pc = 0x233274u;
    {
        const bool branch_taken_0x233274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233274u;
        // 0x233278: 0xafab00d4  sw          $t3, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233274) {
            ctx->pc = 0x233308u;
            goto label_233308;
        }
    }
    ctx->pc = 0x23327Cu;
label_23327c:
    // 0x23327c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23327cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_233280:
    // 0x233280: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x233280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_233284:
    // 0x233284: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x233284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
label_233288:
    // 0x233288: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x233288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23328c:
    // 0x23328c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23328cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_233290:
    // 0x233290: 0x800008  jr          $a0
label_233294:
    if (ctx->pc == 0x233294u) {
        ctx->pc = 0x233298u;
        goto label_233298;
    }
    ctx->pc = 0x233290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233298u: goto label_233298;
            case 0x2332B0u: goto label_2332b0;
            case 0x2332C8u: goto label_2332c8;
            case 0x2332DCu: goto label_2332dc;
            case 0x2332F4u: goto label_2332f4;
            case 0x233308u: goto label_233308;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233290u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x233298u;
label_233298:
    // 0x233298: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x233298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_23329c:
    // 0x23329c: 0x24170008  addiu       $s7, $zero, 0x8
    ctx->pc = 0x23329cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2332a0:
    // 0x2332a0: 0x240e0008  addiu       $t6, $zero, 0x8
    ctx->pc = 0x2332a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2332a4:
    // 0x2332a4: 0x240d0040  addiu       $t5, $zero, 0x40
    ctx->pc = 0x2332a4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2332a8:
    // 0x2332a8: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2332ac:
    if (ctx->pc == 0x2332ACu) {
        ctx->pc = 0x2332ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2332A8u;
        // 0x2332ac: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2332B0u;
        goto label_2332b0;
    }
    ctx->pc = 0x2332A8u;
    {
        const bool branch_taken_0x2332a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2332ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2332A8u;
        // 0x2332ac: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2332a8) {
            ctx->pc = 0x233318u;
            goto label_233318;
        }
    }
    ctx->pc = 0x2332B0u;
label_2332b0:
    // 0x2332b0: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x2332b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2332b4:
    // 0x2332b4: 0x24170010  addiu       $s7, $zero, 0x10
    ctx->pc = 0x2332b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2332b8:
    // 0x2332b8: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x2332b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2332bc:
    // 0x2332bc: 0x240d0080  addiu       $t5, $zero, 0x80
    ctx->pc = 0x2332bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2332c0:
    // 0x2332c0: 0x10000015  b           . + 4 + (0x15 << 2)
label_2332c4:
    if (ctx->pc == 0x2332C4u) {
        ctx->pc = 0x2332C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2332C0u;
        // 0x2332c4: 0xafa300d8  sw          $v1, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2332C8u;
        goto label_2332c8;
    }
    ctx->pc = 0x2332C0u;
    {
        const bool branch_taken_0x2332c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2332C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2332C0u;
        // 0x2332c4: 0xafa300d8  sw          $v1, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2332c0) {
            ctx->pc = 0x233318u;
            goto label_233318;
        }
    }
    ctx->pc = 0x2332C8u;
label_2332c8:
    // 0x2332c8: 0x240d0080  addiu       $t5, $zero, 0x80
    ctx->pc = 0x2332c8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2332cc:
    // 0x2332cc: 0x24170020  addiu       $s7, $zero, 0x20
    ctx->pc = 0x2332ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2332d0:
    // 0x2332d0: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x2332d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2332d4:
    // 0x2332d4: 0x10000010  b           . + 4 + (0x10 << 2)
label_2332d8:
    if (ctx->pc == 0x2332D8u) {
        ctx->pc = 0x2332D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2332D4u;
        // 0x2332d8: 0xafad00d8  sw          $t5, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2332DCu;
        goto label_2332dc;
    }
    ctx->pc = 0x2332D4u;
    {
        const bool branch_taken_0x2332d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2332D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2332D4u;
        // 0x2332d8: 0xafad00d8  sw          $t5, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2332d4) {
            ctx->pc = 0x233318u;
            goto label_233318;
        }
    }
    ctx->pc = 0x2332DCu;
label_2332dc:
    // 0x2332dc: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2332dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2332e0:
    // 0x2332e0: 0x24170008  addiu       $s7, $zero, 0x8
    ctx->pc = 0x2332e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2332e4:
    // 0x2332e4: 0x240e0008  addiu       $t6, $zero, 0x8
    ctx->pc = 0x2332e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2332e8:
    // 0x2332e8: 0x240d0040  addiu       $t5, $zero, 0x40
    ctx->pc = 0x2332e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2332ec:
    // 0x2332ec: 0x1000000a  b           . + 4 + (0xA << 2)
label_2332f0:
    if (ctx->pc == 0x2332F0u) {
        ctx->pc = 0x2332F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2332ECu;
        // 0x2332f0: 0xafa400d8  sw          $a0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2332F4u;
        goto label_2332f4;
    }
    ctx->pc = 0x2332ECu;
    {
        const bool branch_taken_0x2332ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2332F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2332ECu;
        // 0x2332f0: 0xafa400d8  sw          $a0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2332ec) {
            ctx->pc = 0x233318u;
            goto label_233318;
        }
    }
    ctx->pc = 0x2332F4u;
label_2332f4:
    // 0x2332f4: 0x240d0040  addiu       $t5, $zero, 0x40
    ctx->pc = 0x2332f4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2332f8:
    // 0x2332f8: 0x24170010  addiu       $s7, $zero, 0x10
    ctx->pc = 0x2332f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2332fc:
    // 0x2332fc: 0x240e0008  addiu       $t6, $zero, 0x8
    ctx->pc = 0x2332fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_233300:
    // 0x233300: 0x10000005  b           . + 4 + (0x5 << 2)
label_233304:
    if (ctx->pc == 0x233304u) {
        ctx->pc = 0x233304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233300u;
        // 0x233304: 0xafad00d8  sw          $t5, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233308u;
        goto label_233308;
    }
    ctx->pc = 0x233300u;
    {
        const bool branch_taken_0x233300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233300u;
        // 0x233304: 0xafad00d8  sw          $t5, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233300) {
            ctx->pc = 0x233318u;
            goto label_233318;
        }
    }
    ctx->pc = 0x233308u;
label_233308:
    // 0x233308: 0x240d0040  addiu       $t5, $zero, 0x40
    ctx->pc = 0x233308u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_23330c:
    // 0x23330c: 0x24170010  addiu       $s7, $zero, 0x10
    ctx->pc = 0x23330cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_233310:
    // 0x233310: 0xafad00d8  sw          $t5, 0xD8($sp)
    ctx->pc = 0x233310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 13));
label_233314:
    // 0x233314: 0x240e0008  addiu       $t6, $zero, 0x8
    ctx->pc = 0x233314u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_233318:
    // 0x233318: 0xafb100ec  sw          $s1, 0xEC($sp)
    ctx->pc = 0x233318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 17));
label_23331c:
    // 0x23331c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23331cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233320:
    // 0x233320: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x233320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_233324:
    // 0x233324: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x233324u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_233328:
    // 0x233328: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x233328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_23332c:
    // 0x23332c: 0x8fac00d8  lw          $t4, 0xD8($sp)
    ctx->pc = 0x23332cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_233330:
    // 0x233330: 0x242380b  movn        $a3, $s2, $v0
    ctx->pc = 0x233330u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18));
label_233334:
    // 0x233334: 0xafa500dc  sw          $a1, 0xDC($sp)
    ctx->pc = 0x233334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 5));
label_233338:
    // 0x233338: 0x2cc6003b  sltiu       $a2, $a2, 0x3B
    ctx->pc = 0x233338u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_23333c:
    // 0x23333c: 0xd5982  srl         $t3, $t5, 6
    ctx->pc = 0x23333cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 13), 6));
label_233340:
    // 0x233340: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x233340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_233344:
    // 0x233344: 0x17203c  dsll32      $a0, $s7, 0
    ctx->pc = 0x233344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) << (32 + 0));
label_233348:
    // 0x233348: 0xafa60140  sw          $a2, 0x140($sp)
    ctx->pc = 0x233348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 6));
label_23334c:
    // 0x23334c: 0x24d2821  addu        $a1, $s2, $t5
    ctx->pc = 0x23334cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
label_233350:
    // 0x233350: 0xafa700ec  sw          $a3, 0xEC($sp)
    ctx->pc = 0x233350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 7));
label_233354:
    // 0x233354: 0x28e20009  slti        $v0, $a3, 0x9
    ctx->pc = 0x233354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
label_233358:
    // 0x233358: 0xafab0130  sw          $t3, 0x130($sp)
    ctx->pc = 0x233358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 11));
label_23335c:
    // 0x23335c: 0x22c1821  addu        $v1, $s1, $t4
    ctx->pc = 0x23335cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 12)));
label_233360:
    // 0x233360: 0xafb00120  sw          $s0, 0x120($sp)
    ctx->pc = 0x233360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 16));
label_233364:
    // 0x233364: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_233368:
    if (ctx->pc == 0x233368u) {
        ctx->pc = 0x233368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233364u;
        // 0x233368: 0xffa40148  sd          $a0, 0x148($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23336Cu;
        goto label_23336c;
    }
    ctx->pc = 0x233364u;
    {
        const bool branch_taken_0x233364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233364u;
        // 0x233368: 0xffa40148  sd          $a0, 0x148($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233364) {
            ctx->pc = 0x2333B0u;
            goto label_2333b0;
        }
    }
    ctx->pc = 0x23336Cu;
label_23336c:
    // 0x23336c: 0x8f8484b0  lw          $a0, -0x7B50($gp)
    ctx->pc = 0x23336cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935728)));
label_233370:
    // 0x233370: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x233370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_233374:
    // 0x233374: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x233374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_233378:
    // 0x233378: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_23337c:
    if (ctx->pc == 0x23337Cu) {
        ctx->pc = 0x23337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233378u;
        // 0x23337c: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233380u;
        goto label_233380;
    }
    ctx->pc = 0x233378u;
    {
        const bool branch_taken_0x233378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233378u;
        // 0x23337c: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233378) {
            ctx->pc = 0x2333B4u;
            goto label_2333b4;
        }
    }
    ctx->pc = 0x233380u;
label_233380:
    // 0x233380: 0x8fa700ec  lw          $a3, 0xEC($sp)
    ctx->pc = 0x233380u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_233384:
    // 0x233384: 0x0  nop
    ctx->pc = 0x233384u;
    // NOP
label_233388:
    // 0x233388: 0x8fab00dc  lw          $t3, 0xDC($sp)
    ctx->pc = 0x233388u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_23338c:
    // 0x23338c: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x23338cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
label_233390:
    // 0x233390: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x233390u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_233394:
    // 0x233394: 0xafa700ec  sw          $a3, 0xEC($sp)
    ctx->pc = 0x233394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 7));
label_233398:
    // 0x233398: 0x28e20009  slti        $v0, $a3, 0x9
    ctx->pc = 0x233398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
label_23339c:
    // 0x23339c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2333a0:
    if (ctx->pc == 0x2333A0u) {
        ctx->pc = 0x2333A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23339Cu;
        // 0x2333a0: 0xafab00dc  sw          $t3, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2333A4u;
        goto label_2333a4;
    }
    ctx->pc = 0x23339Cu;
    {
        const bool branch_taken_0x23339c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2333A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23339Cu;
        // 0x2333a0: 0xafab00dc  sw          $t3, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23339c) {
            ctx->pc = 0x2333B0u;
            goto label_2333b0;
        }
    }
    ctx->pc = 0x2333A4u;
label_2333a4:
    // 0x2333a4: 0x164102a  slt         $v0, $t3, $a0
    ctx->pc = 0x2333a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2333a8:
    // 0x2333a8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_2333ac:
    if (ctx->pc == 0x2333ACu) {
        ctx->pc = 0x2333ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2333A8u;
        // 0x2333ac: 0x8fa700ec  lw          $a3, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2333B0u;
        goto label_2333b0;
    }
    ctx->pc = 0x2333A8u;
    {
        const bool branch_taken_0x2333a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2333ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2333A8u;
        // 0x2333ac: 0x8fa700ec  lw          $a3, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2333a8) {
            ctx->pc = 0x233388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233388;
        }
    }
    ctx->pc = 0x2333B0u;
label_2333b0:
    // 0x2333b0: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x2333b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_2333b4:
    // 0x2333b4: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x2333b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_2333b8:
    // 0x2333b8: 0x4d001b  divu        $zero, $v0, $t5
    ctx->pc = 0x2333b8u;
    { uint32_t divisor = GPR_U32(ctx, 13); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2333bc:
    // 0x2333bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2333bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2333c0:
    // 0x2333c0: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x2333c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_2333c4:
    // 0x2333c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2333c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2333c8:
    // 0x2333c8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2333c8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2333cc:
    // 0x2333cc: 0xfca00000  sd          $zero, 0x0($a1)
    ctx->pc = 0x2333ccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 0));
label_2333d0:
    // 0x2333d0: 0xafa600ec  sw          $a2, 0xEC($sp)
    ctx->pc = 0x2333d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 6));
label_2333d4:
    // 0x2333d4: 0x51a00001  beql        $t5, $zero, . + 4 + (0x1 << 2)
label_2333d8:
    if (ctx->pc == 0x2333D8u) {
        ctx->pc = 0x2333D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2333D4u;
        // 0x2333d8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2333DCu;
        goto label_2333dc;
    }
    ctx->pc = 0x2333D4u;
    {
        const bool branch_taken_0x2333d4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x2333d4) {
            ctx->pc = 0x2333D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2333D4u;
            // 0x2333d8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2333DCu;
            goto label_2333dc;
        }
    }
    ctx->pc = 0x2333DCu;
label_2333dc:
    // 0x2333dc: 0x8fb00130  lw          $s0, 0x130($sp)
    ctx->pc = 0x2333dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2333e0:
    // 0x2333e0: 0x8fa700dc  lw          $a3, 0xDC($sp)
    ctx->pc = 0x2333e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_2333e4:
    // 0x2333e4: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2333e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_2333e8:
    // 0x2333e8: 0x758c0  sll         $t3, $a3, 3
    ctx->pc = 0x2333e8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_2333ec:
    // 0x2333ec: 0x24ecffff  addiu       $t4, $a3, -0x1
    ctx->pc = 0x2333ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_2333f0:
    // 0x2333f0: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x2333f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_2333f4:
    // 0x2333f4: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x2333f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
label_2333f8:
    // 0x2333f8: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x2333f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
label_2333fc:
    // 0x2333fc: 0xafab0128  sw          $t3, 0x128($sp)
    ctx->pc = 0x2333fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 11));
label_233400:
    // 0x233400: 0xafac0124  sw          $t4, 0x124($sp)
    ctx->pc = 0x233400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 12));
label_233404:
    // 0x233404: 0x1012  mflo        $v0
    ctx->pc = 0x233404u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_233408:
    // 0x233408: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x233408u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_23340c:
    // 0x23340c: 0xc7202a  slt         $a0, $a2, $a3
    ctx->pc = 0x23340cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_233410:
    // 0x233410: 0x1812  mflo        $v1
    ctx->pc = 0x233410u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_233414:
    // 0x233414: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x233414u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_233418:
    // 0x233418: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x233418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23341c:
    // 0x23341c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x23341cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_233420:
    // 0x233420: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x233420u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_233424:
    // 0x233424: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x233424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_233428:
    // 0x233428: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x233428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_23342c:
    // 0x23342c: 0x10800185  beqz        $a0, . + 4 + (0x185 << 2)
label_233430:
    if (ctx->pc == 0x233430u) {
        ctx->pc = 0x233430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23342Cu;
        // 0x233430: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233434u;
        goto label_233434;
    }
    ctx->pc = 0x23342Cu;
    {
        const bool branch_taken_0x23342c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x233430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23342Cu;
        // 0x233430: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23342c) {
            ctx->pc = 0x233A44u;
            goto label_233a44;
        }
    }
    ctx->pc = 0x233434u;
label_233434:
    // 0x233434: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x233434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_233438:
    // 0x233438: 0x8fab00c4  lw          $t3, 0xC4($sp)
    ctx->pc = 0x233438u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_23343c:
    // 0x23343c: 0x240c0008  addiu       $t4, $zero, 0x8
    ctx->pc = 0x23343cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_233440:
    // 0x233440: 0x8fb00120  lw          $s0, 0x120($sp)
    ctx->pc = 0x233440u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_233444:
    // 0x233444: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x233444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_233448:
    // 0x233448: 0xafa700f0  sw          $a3, 0xF0($sp)
    ctx->pc = 0x233448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 7));
label_23344c:
    // 0x23344c: 0xafac0150  sw          $t4, 0x150($sp)
    ctx->pc = 0x23344cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 12));
label_233450:
    // 0x233450: 0x27b90080  addiu       $t9, $sp, 0x80
    ctx->pc = 0x233450u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_233454:
    // 0x233454: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x233454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
label_233458:
    // 0x233458: 0x27af00a0  addiu       $t7, $sp, 0xA0
    ctx->pc = 0x233458u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_23345c:
    // 0x23345c: 0x25730008  addiu       $s3, $t3, 0x8
    ctx->pc = 0x23345cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
label_233460:
    // 0x233460: 0x27b50004  addiu       $s5, $sp, 0x4
    ctx->pc = 0x233460u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_233464:
    // 0x233464: 0x24b40008  addiu       $s4, $a1, 0x8
    ctx->pc = 0x233464u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_233468:
    // 0x233468: 0x26160004  addiu       $s6, $s0, 0x4
    ctx->pc = 0x233468u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_23346c:
    // 0x23346c: 0x0  nop
    ctx->pc = 0x23346cu;
    // NOP
label_233470:
    // 0x233470: 0x24d102b  sltu        $v0, $s2, $t5
    ctx->pc = 0x233470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
label_233474:
    // 0x233474: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_233478:
    if (ctx->pc == 0x233478u) {
        ctx->pc = 0x233478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233474u;
        // 0x233478: 0x8fa500d8  lw          $a1, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23347Cu;
        goto label_23347c;
    }
    ctx->pc = 0x233474u;
    {
        const bool branch_taken_0x233474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233474u;
        // 0x233478: 0x8fa500d8  lw          $a1, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233474) {
            ctx->pc = 0x233528u;
            goto label_233528;
        }
    }
    ctx->pc = 0x23347Cu;
label_23347c:
    // 0x23347c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x23347cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_233480:
    // 0x233480: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x233480u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_233484:
    // 0x233484: 0x5440008a  bnel        $v0, $zero, . + 4 + (0x8A << 2)
label_233488:
    if (ctx->pc == 0x233488u) {
        ctx->pc = 0x233488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233484u;
        // 0x233488: 0x8ec3fffc  lw          $v1, -0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23348Cu;
        goto label_23348c;
    }
    ctx->pc = 0x233484u;
    {
        const bool branch_taken_0x233484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233484) {
            ctx->pc = 0x233488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233484u;
            // 0x233488: 0x8ec3fffc  lw          $v1, -0x4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2336B0u;
            goto label_2336b0;
        }
    }
    ctx->pc = 0x23348Cu;
label_23348c:
    // 0x23348c: 0x257001b  divu        $zero, $s2, $s7
    ctx->pc = 0x23348cu;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
label_233490:
    // 0x233490: 0x122042  srl         $a0, $s2, 1
    ctx->pc = 0x233490u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_233494:
    // 0x233494: 0x8d1021  addu        $v0, $a0, $t5
    ctx->pc = 0x233494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
label_233498:
    // 0x233498: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x233498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_23349c:
    // 0x23349c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23349cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2334a0:
    // 0x2334a0: 0x112842  srl         $a1, $s1, 1
    ctx->pc = 0x2334a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_2334a4:
    // 0x2334a4: 0xa64821  addu        $t1, $a1, $a2
    ctx->pc = 0x2334a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2334a8:
    // 0x2334a8: 0x52e00001  beql        $s7, $zero, . + 4 + (0x1 << 2)
label_2334ac:
    if (ctx->pc == 0x2334ACu) {
        ctx->pc = 0x2334ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2334A8u;
        // 0x2334ac: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2334B0u;
        goto label_2334b0;
    }
    ctx->pc = 0x2334A8u;
    {
        const bool branch_taken_0x2334a8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2334a8) {
            ctx->pc = 0x2334ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2334A8u;
            // 0x2334ac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2334B0u;
            goto label_2334b0;
        }
    }
    ctx->pc = 0x2334B0u;
label_2334b0:
    // 0x2334b0: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x2334b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_2334b4:
    // 0x2334b4: 0x8fac0154  lw          $t4, 0x154($sp)
    ctx->pc = 0x2334b4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_2334b8:
    // 0x2334b8: 0x8fa70120  lw          $a3, 0x120($sp)
    ctx->pc = 0x2334b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_2334bc:
    // 0x2334bc: 0xde68fff8  ld          $t0, -0x8($s3)
    ctx->pc = 0x2334bcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_2334c0:
    // 0x2334c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2334c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2334c4:
    // 0x2334c4: 0xec5821  addu        $t3, $a3, $t4
    ctx->pc = 0x2334c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_2334c8:
    // 0x2334c8: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x2334c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_2334cc:
    // 0x2334cc: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x2334ccu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2334d0:
    // 0x2334d0: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x2334d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
label_2334d4:
    // 0x2334d4: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x2334d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2334d8:
    // 0x2334d8: 0x1812  mflo        $v1
    ctx->pc = 0x2334d8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_2334dc:
    // 0x2334dc: 0x22e001b  divu        $zero, $s1, $t6
    ctx->pc = 0x2334dcu;
    { uint32_t divisor = GPR_U32(ctx, 14); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
label_2334e0:
    // 0x2334e0: 0x5012  mflo        $t2
    ctx->pc = 0x2334e0u;
    SET_GPR_U64(ctx, 10, ctx->lo);
label_2334e4:
    // 0x2334e4: 0x4d001b  divu        $zero, $v0, $t5
    ctx->pc = 0x2334e4u;
    { uint32_t divisor = GPR_U32(ctx, 13); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2334e8:
    // 0x2334e8: 0x1012  mflo        $v0
    ctx->pc = 0x2334e8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2334ec:
    // 0x2334ec: 0x126001b  divu        $zero, $t1, $a2
    ctx->pc = 0x2334ecu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
label_2334f0:
    // 0x2334f0: 0x4812  mflo        $t1
    ctx->pc = 0x2334f0u;
    SET_GPR_U64(ctx, 9, ctx->lo);
label_2334f4:
    // 0x2334f4: 0x6a1818  mult        $v1, $v1, $t2
    ctx->pc = 0x2334f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2334f8:
    // 0x2334f8: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2334f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2334fc:
    // 0x2334fc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2334fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_233500:
    // 0x233500: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x233500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_233504:
    // 0x233504: 0x103402d  daddu       $t0, $t0, $v1
    ctx->pc = 0x233504u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 3));
label_233508:
    // 0x233508: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x233508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23350c:
    // 0x23350c: 0xfe680000  sd          $t0, 0x0($s3)
    ctx->pc = 0x23350cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 8));
label_233510:
    // 0x233510: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x233510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_233514:
    // 0x233514: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x233514u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
label_233518:
    // 0x233518: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x233518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_23351c:
    // 0x23351c: 0xaea90000  sw          $t1, 0x0($s5)
    ctx->pc = 0x23351cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 9));
label_233520:
    // 0x233520: 0x10000136  b           . + 4 + (0x136 << 2)
label_233524:
    if (ctx->pc == 0x233524u) {
        ctx->pc = 0x233524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233520u;
        // 0x233524: 0xad620000  sw          $v0, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233528u;
        goto label_233528;
    }
    ctx->pc = 0x233520u;
    {
        const bool branch_taken_0x233520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233520u;
        // 0x233524: 0xad620000  sw          $v0, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233520) {
            ctx->pc = 0x2339FCu;
            goto label_2339fc;
        }
    }
    ctx->pc = 0x233528u;
label_233528:
    // 0x233528: 0x225102b  sltu        $v0, $s1, $a1
    ctx->pc = 0x233528u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_23352c:
    // 0x23352c: 0x144000a4  bnez        $v0, . + 4 + (0xA4 << 2)
label_233530:
    if (ctx->pc == 0x233530u) {
        ctx->pc = 0x233530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23352Cu;
        // 0x233530: 0x8ec2fffc  lw          $v0, -0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233534u;
        goto label_233534;
    }
    ctx->pc = 0x23352Cu;
    {
        const bool branch_taken_0x23352c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23352Cu;
        // 0x233530: 0x8ec2fffc  lw          $v0, -0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23352c) {
            ctx->pc = 0x2337C0u;
            goto label_2337c0;
        }
    }
    ctx->pc = 0x233534u;
label_233534:
    // 0x233534: 0x2f2182b  sltu        $v1, $s7, $s2
    ctx->pc = 0x233534u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_233538:
    // 0x233538: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x233538u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23353c:
    // 0x23353c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x23353cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_233540:
    // 0x233540: 0x2e3480a  movz        $t1, $s7, $v1
    ctx->pc = 0x233540u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 23));
label_233544:
    // 0x233544: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x233544u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_233548:
    // 0x233548: 0xde83fff8  ld          $v1, -0x8($s4)
    ctx->pc = 0x233548u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_23354c:
    // 0x23354c: 0x8ea2fffc  lw          $v0, -0x4($s5)
    ctx->pc = 0x23354cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967292)));
label_233550:
    // 0x233550: 0xc95021  addu        $t2, $a2, $t1
    ctx->pc = 0x233550u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_233554:
    // 0x233554: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x233554u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_233558:
    // 0x233558: 0x14d202b  sltu        $a0, $t2, $t5
    ctx->pc = 0x233558u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
label_23355c:
    // 0x23355c: 0x148000a7  bnez        $a0, . + 4 + (0xA7 << 2)
label_233560:
    if (ctx->pc == 0x233560u) {
        ctx->pc = 0x233560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23355Cu;
        // 0x233560: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233564u;
        goto label_233564;
    }
    ctx->pc = 0x23355Cu;
    {
        const bool branch_taken_0x23355c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x233560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23355Cu;
        // 0x233560: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23355c) {
            ctx->pc = 0x2337FCu;
            goto label_2337fc;
        }
    }
    ctx->pc = 0x233564u;
label_233564:
    // 0x233564: 0x13c0003c  beqz        $fp, . + 4 + (0x3C << 2)
label_233568:
    if (ctx->pc == 0x233568u) {
        ctx->pc = 0x233568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233564u;
        // 0x233568: 0x27caffff  addiu       $t2, $fp, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23356Cu;
        goto label_23356c;
    }
    ctx->pc = 0x233564u;
    {
        const bool branch_taken_0x233564 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x233568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233564u;
        // 0x233568: 0x27caffff  addiu       $t2, $fp, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233564) {
            ctx->pc = 0x233658u;
            goto label_233658;
        }
    }
    ctx->pc = 0x23356Cu;
label_23356c:
    // 0x23356c: 0x122042  srl         $a0, $s2, 1
    ctx->pc = 0x23356cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_233570:
    // 0x233570: 0xa3880  sll         $a3, $t2, 2
    ctx->pc = 0x233570u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_233574:
    // 0x233574: 0x8fac0150  lw          $t4, 0x150($sp)
    ctx->pc = 0x233574u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_233578:
    // 0x233578: 0x2e4102b  sltu        $v0, $s7, $a0
    ctx->pc = 0x233578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_23357c:
    // 0x23357c: 0x1e74821  addu        $t1, $t7, $a3
    ctx->pc = 0x23357cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 7)));
label_233580:
    // 0x233580: 0x8fb000c4  lw          $s0, 0xC4($sp)
    ctx->pc = 0x233580u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_233584:
    // 0x233584: 0x3274021  addu        $t0, $t9, $a3
    ctx->pc = 0x233584u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
label_233588:
    // 0x233588: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x233588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23358c:
    // 0x23358c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x23358cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_233590:
    // 0x233590: 0x2e2300a  movz        $a2, $s7, $v0
    ctx->pc = 0x233590u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23));
label_233594:
    // 0x233594: 0x9d250000  lwu         $a1, 0x0($t1)
    ctx->pc = 0x233594u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_233598:
    // 0x233598: 0x1901021  addu        $v0, $t4, $s0
    ctx->pc = 0x233598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 16)));
label_23359c:
    // 0x23359c: 0x8d2b0000  lw          $t3, 0x0($t1)
    ctx->pc = 0x23359cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_2335a0:
    // 0x2335a0: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x2335a0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
label_2335a4:
    // 0x2335a4: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x2335a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2335a8:
    // 0x2335a8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_2335ac:
    if (ctx->pc == 0x2335ACu) {
        ctx->pc = 0x2335ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2335A8u;
        // 0x2335ac: 0x80602d  daddu       $t4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2335B0u;
        goto label_2335b0;
    }
    ctx->pc = 0x2335A8u;
    {
        const bool branch_taken_0x2335a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2335ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2335A8u;
        // 0x2335ac: 0x80602d  daddu       $t4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2335a8) {
            ctx->pc = 0x2335E4u;
            goto label_2335e4;
        }
    }
    ctx->pc = 0x2335B0u;
label_2335b0:
    // 0x2335b0: 0x1971021  addu        $v0, $t4, $s7
    ctx->pc = 0x2335b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 23)));
label_2335b4:
    // 0x2335b4: 0x52e00001  beql        $s7, $zero, . + 4 + (0x1 << 2)
label_2335b8:
    if (ctx->pc == 0x2335B8u) {
        ctx->pc = 0x2335B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2335B4u;
        // 0x2335b8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2335BCu;
        goto label_2335bc;
    }
    ctx->pc = 0x2335B4u;
    {
        const bool branch_taken_0x2335b4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2335b4) {
            ctx->pc = 0x2335B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2335B4u;
            // 0x2335b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2335BCu;
            goto label_2335bc;
        }
    }
    ctx->pc = 0x2335BCu;
label_2335bc:
    // 0x2335bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2335bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2335c0:
    // 0x2335c0: 0x118042  srl         $s0, $s1, 1
    ctx->pc = 0x2335c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_2335c4:
    // 0x2335c4: 0x57001b  divu        $zero, $v0, $s7
    ctx->pc = 0x2335c4u;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2335c8:
    // 0x2335c8: 0x1012  mflo        $v0
    ctx->pc = 0x2335c8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2335cc:
    // 0x2335cc: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x2335ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_2335d0:
    // 0x2335d0: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x2335d0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_2335d4:
    // 0x2335d4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2335d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2335d8:
    // 0x2335d8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2335d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2335dc:
    // 0x2335dc: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2335e0:
    if (ctx->pc == 0x2335E0u) {
        ctx->pc = 0x2335E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2335DCu;
        // 0x2335e0: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2335E4u;
        goto label_2335e4;
    }
    ctx->pc = 0x2335DCu;
    {
        const bool branch_taken_0x2335dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2335E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2335DCu;
        // 0x2335e0: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2335dc) {
            ctx->pc = 0x23364Cu;
            goto label_23364c;
        }
    }
    ctx->pc = 0x2335E4u;
label_2335e4:
    // 0x2335e4: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x2335e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_2335e8:
    // 0x2335e8: 0x111042  srl         $v0, $s1, 1
    ctx->pc = 0x2335e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_2335ec:
    // 0x2335ec: 0x1c2202b  sltu        $a0, $t6, $v0
    ctx->pc = 0x2335ecu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2335f0:
    // 0x2335f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2335f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2335f4:
    // 0x2335f4: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x2335f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2335f8:
    // 0x2335f8: 0x1c4280a  movz        $a1, $t6, $a0
    ctx->pc = 0x2335f8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 14));
label_2335fc:
    // 0x2335fc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2335fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_233600:
    // 0x233600: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x233600u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_233604:
    // 0x233604: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_233608:
    if (ctx->pc == 0x233608u) {
        ctx->pc = 0x233608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233604u;
        // 0x233608: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23360Cu;
        goto label_23360c;
    }
    ctx->pc = 0x233604u;
    {
        const bool branch_taken_0x233604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x233608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233604u;
        // 0x233608: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233604) {
            ctx->pc = 0x233648u;
            goto label_233648;
        }
    }
    ctx->pc = 0x23360Cu;
label_23360c:
    // 0x23360c: 0x1b7001b  divu        $zero, $t5, $s7
    ctx->pc = 0x23360cu;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
label_233610:
    // 0x233610: 0x20e1821  addu        $v1, $s0, $t6
    ctx->pc = 0x233610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 14)));
label_233614:
    // 0x233614: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x233614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_233618:
    // 0x233618: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
label_23361c:
    if (ctx->pc == 0x23361Cu) {
        ctx->pc = 0x23361Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233618u;
        // 0x23361c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x233620u;
        goto label_233620;
    }
    ctx->pc = 0x233618u;
    {
        const bool branch_taken_0x233618 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x233618) {
            ctx->pc = 0x23361Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233618u;
            // 0x23361c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x233620u;
            goto label_233620;
        }
    }
    ctx->pc = 0x233620u;
label_233620:
    // 0x233620: 0x1012  mflo        $v0
    ctx->pc = 0x233620u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_233624:
    // 0x233624: 0x6e001b  divu        $zero, $v1, $t6
    ctx->pc = 0x233624u;
    { uint32_t divisor = GPR_U32(ctx, 14); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_233628:
    // 0x233628: 0x1812  mflo        $v1
    ctx->pc = 0x233628u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_23362c:
    // 0x23362c: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x23362cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_233630:
    // 0x233630: 0x8b1821  addu        $v1, $a0, $t3
    ctx->pc = 0x233630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_233634:
    // 0x233634: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x233634u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
label_233638:
    // 0x233638: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x233638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_23363c:
    // 0x23363c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x23363cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_233640:
    // 0x233640: 0x10000002  b           . + 4 + (0x2 << 2)
label_233644:
    if (ctx->pc == 0x233644u) {
        ctx->pc = 0x233644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233640u;
        // 0x233644: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233648u;
        goto label_233648;
    }
    ctx->pc = 0x233640u;
    {
        const bool branch_taken_0x233640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233640u;
        // 0x233644: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233640) {
            ctx->pc = 0x23364Cu;
            goto label_23364c;
        }
    }
    ctx->pc = 0x233648u;
label_233648:
    // 0x233648: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x233648u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_23364c:
    // 0x23364c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23364cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233650:
    // 0x233650: 0x100000ea  b           . + 4 + (0xEA << 2)
label_233654:
    if (ctx->pc == 0x233654u) {
        ctx->pc = 0x233654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233650u;
        // 0x233654: 0xafa500e8  sw          $a1, 0xE8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233658u;
        goto label_233658;
    }
    ctx->pc = 0x233650u;
    {
        const bool branch_taken_0x233650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233650u;
        // 0x233654: 0xafa500e8  sw          $a1, 0xE8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233650) {
            ctx->pc = 0x2339FCu;
            goto label_2339fc;
        }
    }
    ctx->pc = 0x233658u;
label_233658:
    // 0x233658: 0x1b7001b  divu        $zero, $t5, $s7
    ctx->pc = 0x233658u;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
label_23365c:
    // 0x23365c: 0x22e1821  addu        $v1, $s1, $t6
    ctx->pc = 0x23365cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 14)));
label_233660:
    // 0x233660: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x233660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_233664:
    // 0x233664: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
label_233668:
    if (ctx->pc == 0x233668u) {
        ctx->pc = 0x233668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233664u;
        // 0x233668: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23366Cu;
        goto label_23366c;
    }
    ctx->pc = 0x233664u;
    {
        const bool branch_taken_0x233664 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x233664) {
            ctx->pc = 0x233668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233664u;
            // 0x233668: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23366Cu;
            goto label_23366c;
        }
    }
    ctx->pc = 0x23366Cu;
label_23366c:
    // 0x23366c: 0x126042  srl         $t4, $s2, 1
    ctx->pc = 0x23366cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_233670:
    // 0x233670: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x233670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_233674:
    // 0x233674: 0x118042  srl         $s0, $s1, 1
    ctx->pc = 0x233674u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_233678:
    // 0x233678: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x233678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_23367c:
    // 0x23367c: 0x8fab00e4  lw          $t3, 0xE4($sp)
    ctx->pc = 0x23367cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_233680:
    // 0x233680: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x233680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_233684:
    // 0x233684: 0x1d1202b  sltu        $a0, $t6, $s1
    ctx->pc = 0x233684u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_233688:
    // 0x233688: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x233688u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23368c:
    // 0x23368c: 0xdcc5fff8  ld          $a1, -0x8($a2)
    ctx->pc = 0x23368cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_233690:
    // 0x233690: 0x1c4100a  movz        $v0, $t6, $a0
    ctx->pc = 0x233690u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14));
label_233694:
    // 0x233694: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x233694u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_233698:
    // 0x233698: 0xafab00e4  sw          $t3, 0xE4($sp)
    ctx->pc = 0x233698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 11));
label_23369c:
    // 0x23369c: 0x3812  mflo        $a3
    ctx->pc = 0x23369cu;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_2336a0:
    // 0x2336a0: 0x6e001b  divu        $zero, $v1, $t6
    ctx->pc = 0x2336a0u;
    { uint32_t divisor = GPR_U32(ctx, 14); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_2336a4:
    // 0x2336a4: 0x1812  mflo        $v1
    ctx->pc = 0x2336a4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_2336a8:
    // 0x2336a8: 0x10000040  b           . + 4 + (0x40 << 2)
label_2336ac:
    if (ctx->pc == 0x2336ACu) {
        ctx->pc = 0x2336ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2336A8u;
        // 0x2336ac: 0x671818  mult        $v1, $v1, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2336B0u;
        goto label_2336b0;
    }
    ctx->pc = 0x2336A8u;
    {
        const bool branch_taken_0x2336a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2336ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2336A8u;
        // 0x2336ac: 0x671818  mult        $v1, $v1, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2336a8) {
            ctx->pc = 0x2337ACu;
            goto label_2337ac;
        }
    }
    ctx->pc = 0x2336B0u;
label_2336b0:
    // 0x2336b0: 0x1d1202b  sltu        $a0, $t6, $s1
    ctx->pc = 0x2336b0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_2336b4:
    // 0x2336b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2336b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2336b8:
    // 0x2336b8: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x2336b8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_2336bc:
    // 0x2336bc: 0x1c4100a  movz        $v0, $t6, $a0
    ctx->pc = 0x2336bcu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14));
label_2336c0:
    // 0x2336c0: 0x8fac00e4  lw          $t4, 0xE4($sp)
    ctx->pc = 0x2336c0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_2336c4:
    // 0x2336c4: 0xde84fff8  ld          $a0, -0x8($s4)
    ctx->pc = 0x2336c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_2336c8:
    // 0x2336c8: 0x1822821  addu        $a1, $t4, $v0
    ctx->pc = 0x2336c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_2336cc:
    // 0x2336cc: 0x8fb000d8  lw          $s0, 0xD8($sp)
    ctx->pc = 0x2336ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_2336d0:
    // 0x2336d0: 0x8ea2fffc  lw          $v0, -0x4($s5)
    ctx->pc = 0x2336d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967292)));
label_2336d4:
    // 0x2336d4: 0xfe840000  sd          $a0, 0x0($s4)
    ctx->pc = 0x2336d4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 4));
label_2336d8:
    // 0x2336d8: 0xb0182b  sltu        $v1, $a1, $s0
    ctx->pc = 0x2336d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2336dc:
    // 0x2336dc: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_2336e0:
    if (ctx->pc == 0x2336E0u) {
        ctx->pc = 0x2336E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2336DCu;
        // 0x2336e0: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2336E4u;
        goto label_2336e4;
    }
    ctx->pc = 0x2336DCu;
    {
        const bool branch_taken_0x2336dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2336E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2336DCu;
        // 0x2336e0: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2336dc) {
            ctx->pc = 0x233764u;
            goto label_233764;
        }
    }
    ctx->pc = 0x2336E4u;
label_2336e4:
    // 0x2336e4: 0x1b7001b  divu        $zero, $t5, $s7
    ctx->pc = 0x2336e4u;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
label_2336e8:
    // 0x2336e8: 0x22e8021  addu        $s0, $s1, $t6
    ctx->pc = 0x2336e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 14)));
label_2336ec:
    // 0x2336ec: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2336ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2336f0:
    // 0x2336f0: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
label_2336f4:
    if (ctx->pc == 0x2336F4u) {
        ctx->pc = 0x2336F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2336F0u;
        // 0x2336f4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2336F8u;
        goto label_2336f8;
    }
    ctx->pc = 0x2336F0u;
    {
        const bool branch_taken_0x2336f0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x2336f0) {
            ctx->pc = 0x2336F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2336F0u;
            // 0x2336f4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2336F8u;
            goto label_2336f8;
        }
    }
    ctx->pc = 0x2336F8u;
label_2336f8:
    // 0x2336f8: 0xafa500e4  sw          $a1, 0xE4($sp)
    ctx->pc = 0x2336f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 5));
label_2336fc:
    // 0x2336fc: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x2336fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_233700:
    // 0x233700: 0x7fad0160  sq          $t5, 0x160($sp)
    ctx->pc = 0x233700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 13));
label_233704:
    // 0x233704: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x233704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_233708:
    // 0x233708: 0x7fae0170  sq          $t6, 0x170($sp)
    ctx->pc = 0x233708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 14));
label_23370c:
    // 0x23370c: 0x7faf0180  sq          $t7, 0x180($sp)
    ctx->pc = 0x23370cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 15));
label_233710:
    // 0x233710: 0x7fb90190  sq          $t9, 0x190($sp)
    ctx->pc = 0x233710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 25));
label_233714:
    // 0x233714: 0x1012  mflo        $v0
    ctx->pc = 0x233714u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_233718:
    // 0x233718: 0x20e001b  divu        $zero, $s0, $t6
    ctx->pc = 0x233718u;
    { uint32_t divisor = GPR_U32(ctx, 14); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
label_23371c:
    // 0x23371c: 0x8012  mflo        $s0
    ctx->pc = 0x23371cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
label_233720:
    // 0x233720: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x233720u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_233724:
    // 0x233724: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x233724u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
label_233728:
    // 0x233728: 0xc07db0a  jal         func_1F6C28
label_23372c:
    if (ctx->pc == 0x23372Cu) {
        ctx->pc = 0x23372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233728u;
        // 0x23372c: 0x10803e  dsrl32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233730u;
        goto label_233730;
    }
    ctx->pc = 0x233728u;
    SET_GPR_U32(ctx, 31, 0x233730u);
    ctx->pc = 0x23372Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233728u;
    // 0x23372c: 0x10803e  dsrl32      $s0, $s0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6C28u, 0x233728u, 0x233730u)) {
        return;
    }
    ctx->pc = 0x233730u;
label_233730:
    // 0x233730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233734:
    // 0x233734: 0xc07e4e4  jal         func_1F9390
label_233738:
    if (ctx->pc == 0x233738u) {
        ctx->pc = 0x233738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233734u;
        // 0x233738: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23373Cu;
        goto label_23373c;
    }
    ctx->pc = 0x233734u;
    SET_GPR_U32(ctx, 31, 0x23373Cu);
    ctx->pc = 0x233738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233734u;
    // 0x233738: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x233734u, 0x23373Cu)) {
        return;
    }
    ctx->pc = 0x23373Cu;
label_23373c:
    // 0x23373c: 0xde63fff8  ld          $v1, -0x8($s3)
    ctx->pc = 0x23373cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_233740:
    // 0x233740: 0x126042  srl         $t4, $s2, 1
    ctx->pc = 0x233740u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_233744:
    // 0x233744: 0x118042  srl         $s0, $s1, 1
    ctx->pc = 0x233744u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_233748:
    // 0x233748: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x233748u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_23374c:
    // 0x23374c: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x23374cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
label_233750:
    // 0x233750: 0x7bad0160  lq          $t5, 0x160($sp)
    ctx->pc = 0x233750u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_233754:
    // 0x233754: 0x7bae0170  lq          $t6, 0x170($sp)
    ctx->pc = 0x233754u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_233758:
    // 0x233758: 0x7baf0180  lq          $t7, 0x180($sp)
    ctx->pc = 0x233758u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_23375c:
    // 0x23375c: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_233760:
    if (ctx->pc == 0x233760u) {
        ctx->pc = 0x233760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23375Cu;
        // 0x233760: 0x7bb90190  lq          $t9, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233764u;
        goto label_233764;
    }
    ctx->pc = 0x23375Cu;
    {
        const bool branch_taken_0x23375c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23375Cu;
        // 0x233760: 0x7bb90190  lq          $t9, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23375c) {
            ctx->pc = 0x2339FCu;
            goto label_2339fc;
        }
    }
    ctx->pc = 0x233764u;
label_233764:
    // 0x233764: 0x2571821  addu        $v1, $s2, $s7
    ctx->pc = 0x233764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
label_233768:
    // 0x233768: 0x52e00001  beql        $s7, $zero, . + 4 + (0x1 << 2)
label_23376c:
    if (ctx->pc == 0x23376Cu) {
        ctx->pc = 0x23376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233768u;
        // 0x23376c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x233770u;
        goto label_233770;
    }
    ctx->pc = 0x233768u;
    {
        const bool branch_taken_0x233768 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x233768) {
            ctx->pc = 0x23376Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233768u;
            // 0x23376c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x233770u;
            goto label_233770;
        }
    }
    ctx->pc = 0x233770u;
label_233770:
    // 0x233770: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x233770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_233774:
    // 0x233774: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x233774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_233778:
    // 0x233778: 0x77001b  divu        $zero, $v1, $s7
    ctx->pc = 0x233778u;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_23377c:
    // 0x23377c: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x23377cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_233780:
    // 0x233780: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x233780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_233784:
    // 0x233784: 0x126042  srl         $t4, $s2, 1
    ctx->pc = 0x233784u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_233788:
    // 0x233788: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x233788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_23378c:
    // 0x23378c: 0x118042  srl         $s0, $s1, 1
    ctx->pc = 0x23378cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_233790:
    // 0x233790: 0x2f2202b  sltu        $a0, $s7, $s2
    ctx->pc = 0x233790u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_233794:
    // 0x233794: 0xdcc5fff8  ld          $a1, -0x8($a2)
    ctx->pc = 0x233794u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_233798:
    // 0x233798: 0x2e4100a  movz        $v0, $s7, $a0
    ctx->pc = 0x233798u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23));
label_23379c:
    // 0x23379c: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x23379cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2337a0:
    // 0x2337a0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2337a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2337a4:
    // 0x2337a4: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x2337a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
label_2337a8:
    // 0x2337a8: 0x1812  mflo        $v1
    ctx->pc = 0x2337a8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_2337ac:
    // 0x2337ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2337acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_2337b0:
    // 0x2337b0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2337b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2337b4:
    // 0x2337b4: 0xa3282d  daddu       $a1, $a1, $v1
    ctx->pc = 0x2337b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 3));
label_2337b8:
    // 0x2337b8: 0x10000090  b           . + 4 + (0x90 << 2)
label_2337bc:
    if (ctx->pc == 0x2337BCu) {
        ctx->pc = 0x2337BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2337B8u;
        // 0x2337bc: 0xfcc50000  sd          $a1, 0x0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2337C0u;
        goto label_2337c0;
    }
    ctx->pc = 0x2337B8u;
    {
        const bool branch_taken_0x2337b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2337BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2337B8u;
        // 0x2337bc: 0xfcc50000  sd          $a1, 0x0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2337b8) {
            ctx->pc = 0x2339FCu;
            goto label_2339fc;
        }
    }
    ctx->pc = 0x2337C0u;
label_2337c0:
    // 0x2337c0: 0x2f2182b  sltu        $v1, $s7, $s2
    ctx->pc = 0x2337c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2337c4:
    // 0x2337c4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2337c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2337c8:
    // 0x2337c8: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x2337c8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_2337cc:
    // 0x2337cc: 0x2e3480a  movz        $t1, $s7, $v1
    ctx->pc = 0x2337ccu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 23));
label_2337d0:
    // 0x2337d0: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x2337d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2337d4:
    // 0x2337d4: 0xde84fff8  ld          $a0, -0x8($s4)
    ctx->pc = 0x2337d4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_2337d8:
    // 0x2337d8: 0xa95021  addu        $t2, $a1, $t1
    ctx->pc = 0x2337d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_2337dc:
    // 0x2337dc: 0x8ea5fffc  lw          $a1, -0x4($s5)
    ctx->pc = 0x2337dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967292)));
label_2337e0:
    // 0x2337e0: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x2337e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
label_2337e4:
    // 0x2337e4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2337e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2337e8:
    // 0x2337e8: 0x419b8  dsll        $v1, $a0, 6
    ctx->pc = 0x2337e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 6);
label_2337ec:
    // 0x2337ec: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x2337ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
label_2337f0:
    // 0x2337f0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2337f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2337f4:
    // 0x2337f4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_2337f8:
    if (ctx->pc == 0x2337F8u) {
        ctx->pc = 0x2337F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2337F4u;
        // 0x2337f8: 0xfe840000  sd          $a0, 0x0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2337FCu;
        goto label_2337fc;
    }
    ctx->pc = 0x2337F4u;
    {
        const bool branch_taken_0x2337f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2337F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2337F4u;
        // 0x2337f8: 0xfe840000  sd          $a0, 0x0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2337f4) {
            ctx->pc = 0x233898u;
            goto label_233898;
        }
    }
    ctx->pc = 0x2337FCu;
label_2337fc:
    // 0x2337fc: 0x1b7001b  divu        $zero, $t5, $s7
    ctx->pc = 0x2337fcu;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
label_233800:
    // 0x233800: 0x22e2821  addu        $a1, $s1, $t6
    ctx->pc = 0x233800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 14)));
label_233804:
    // 0x233804: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x233804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_233808:
    // 0x233808: 0x2572021  addu        $a0, $s2, $s7
    ctx->pc = 0x233808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
label_23380c:
    // 0x23380c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x23380cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_233810:
    // 0x233810: 0x8fab00e0  lw          $t3, 0xE0($sp)
    ctx->pc = 0x233810u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_233814:
    // 0x233814: 0x1e3880  sll         $a3, $fp, 2
    ctx->pc = 0x233814u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_233818:
    // 0x233818: 0x1d1302b  sltu        $a2, $t6, $s1
    ctx->pc = 0x233818u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_23381c:
    // 0x23381c: 0x3a71821  addu        $v1, $sp, $a3
    ctx->pc = 0x23381cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 7)));
label_233820:
    // 0x233820: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x233820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_233824:
    // 0x233824: 0xac6b0040  sw          $t3, 0x40($v1)
    ctx->pc = 0x233824u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 11));
label_233828:
    // 0x233828: 0x1c6100a  movz        $v0, $t6, $a2
    ctx->pc = 0x233828u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14));
label_23382c:
    // 0x23382c: 0x3273021  addu        $a2, $t9, $a3
    ctx->pc = 0x23382cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
label_233830:
    // 0x233830: 0x118042  srl         $s0, $s1, 1
    ctx->pc = 0x233830u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_233834:
    // 0x233834: 0x8fac00f0  lw          $t4, 0xF0($sp)
    ctx->pc = 0x233834u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_233838:
    // 0x233838: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x233838u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_23383c:
    // 0x23383c: 0x1871821  addu        $v1, $t4, $a3
    ctx->pc = 0x23383cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
label_233840:
    // 0x233840: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x233840u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_233844:
    // 0x233844: 0x1e73821  addu        $a3, $t7, $a3
    ctx->pc = 0x233844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 7)));
label_233848:
    // 0x233848: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x233848u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
label_23384c:
    // 0x23384c: 0x126042  srl         $t4, $s2, 1
    ctx->pc = 0x23384cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_233850:
    // 0x233850: 0xafaa00e0  sw          $t2, 0xE0($sp)
    ctx->pc = 0x233850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 10));
label_233854:
    // 0x233854: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
label_233858:
    if (ctx->pc == 0x233858u) {
        ctx->pc = 0x233858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233854u;
        // 0x233858: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23385Cu;
        goto label_23385c;
    }
    ctx->pc = 0x233854u;
    {
        const bool branch_taken_0x233854 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x233854) {
            ctx->pc = 0x233858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233854u;
            // 0x233858: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23385Cu;
            goto label_23385c;
        }
    }
    ctx->pc = 0x23385Cu;
label_23385c:
    // 0x23385c: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x23385cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_233860:
    // 0x233860: 0x4012  mflo        $t0
    ctx->pc = 0x233860u;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_233864:
    // 0x233864: 0xae001b  divu        $zero, $a1, $t6
    ctx->pc = 0x233864u;
    { uint32_t divisor = GPR_U32(ctx, 14); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_233868:
    // 0x233868: 0x2812  mflo        $a1
    ctx->pc = 0x233868u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_23386c:
    // 0x23386c: 0x97001b  divu        $zero, $a0, $s7
    ctx->pc = 0x23386cu;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_233870:
    // 0x233870: 0x2012  mflo        $a0
    ctx->pc = 0x233870u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_233874:
    // 0x233874: 0xa82818  mult        $a1, $a1, $t0
    ctx->pc = 0x233874u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_233878:
    // 0x233878: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x233878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_23387c:
    // 0x23387c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x23387cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_233880:
    // 0x233880: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x233880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_233884:
    // 0x233884: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x233884u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_233888:
    // 0x233888: 0xde62fff8  ld          $v0, -0x8($s3)
    ctx->pc = 0x233888u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_23388c:
    // 0x23388c: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x23388cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
label_233890:
    // 0x233890: 0x1000005a  b           . + 4 + (0x5A << 2)
label_233894:
    if (ctx->pc == 0x233894u) {
        ctx->pc = 0x233894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233890u;
        // 0x233894: 0xfe620000  sd          $v0, 0x0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233898u;
        goto label_233898;
    }
    ctx->pc = 0x233890u;
    {
        const bool branch_taken_0x233890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233890u;
        // 0x233894: 0xfe620000  sd          $v0, 0x0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233890) {
            ctx->pc = 0x2339FCu;
            goto label_2339fc;
        }
    }
    ctx->pc = 0x233898u;
label_233898:
    // 0x233898: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x233898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_23389c:
    // 0x23389c: 0x1d1182b  sltu        $v1, $t6, $s1
    ctx->pc = 0x23389cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_2338a0:
    // 0x2338a0: 0xa22018  mult        $a0, $a1, $v0
    ctx->pc = 0x2338a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2338a4:
    // 0x2338a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2338a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2338a8:
    // 0x2338a8: 0x1c3100a  movz        $v0, $t6, $v1
    ctx->pc = 0x2338a8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14));
label_2338ac:
    // 0x2338ac: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x2338acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_2338b0:
    // 0x2338b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2338b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2338b4:
    // 0x2338b4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2338b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2338b8:
    // 0x2338b8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_2338bc:
    if (ctx->pc == 0x2338BCu) {
        ctx->pc = 0x2338BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338B8u;
        // 0x2338bc: 0x8fa400e8  lw          $a0, 0xE8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2338C0u;
        goto label_2338c0;
    }
    ctx->pc = 0x2338B8u;
    {
        const bool branch_taken_0x2338b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2338BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338B8u;
        // 0x2338bc: 0x8fa400e8  lw          $a0, 0xE8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2338b8) {
            ctx->pc = 0x233924u;
            goto label_233924;
        }
    }
    ctx->pc = 0x2338C0u;
label_2338c0:
    // 0x2338c0: 0x14800019  bnez        $a0, . + 4 + (0x19 << 2)
label_2338c4:
    if (ctx->pc == 0x2338C4u) {
        ctx->pc = 0x2338C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338C0u;
        // 0x2338c4: 0x27caffff  addiu       $t2, $fp, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2338C8u;
        goto label_2338c8;
    }
    ctx->pc = 0x2338C0u;
    {
        const bool branch_taken_0x2338c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2338C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338C0u;
        // 0x2338c4: 0x27caffff  addiu       $t2, $fp, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2338c0) {
            ctx->pc = 0x233928u;
            goto label_233928;
        }
    }
    ctx->pc = 0x2338C8u;
label_2338c8:
    // 0x2338c8: 0x1b7001b  divu        $zero, $t5, $s7
    ctx->pc = 0x2338c8u;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
label_2338cc:
    // 0x2338cc: 0x22e1821  addu        $v1, $s1, $t6
    ctx->pc = 0x2338ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 14)));
label_2338d0:
    // 0x2338d0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2338d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2338d4:
    // 0x2338d4: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
label_2338d8:
    if (ctx->pc == 0x2338D8u) {
        ctx->pc = 0x2338D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338D4u;
        // 0x2338d8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2338DCu;
        goto label_2338dc;
    }
    ctx->pc = 0x2338D4u;
    {
        const bool branch_taken_0x2338d4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x2338d4) {
            ctx->pc = 0x2338D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2338D4u;
            // 0x2338d8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2338DCu;
            goto label_2338dc;
        }
    }
    ctx->pc = 0x2338DCu;
label_2338dc:
    // 0x2338dc: 0x126042  srl         $t4, $s2, 1
    ctx->pc = 0x2338dcu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_2338e0:
    // 0x2338e0: 0x8fa600e4  lw          $a2, 0xE4($sp)
    ctx->pc = 0x2338e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_2338e4:
    // 0x2338e4: 0x118042  srl         $s0, $s1, 1
    ctx->pc = 0x2338e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_2338e8:
    // 0x2338e8: 0xde64fff8  ld          $a0, -0x8($s3)
    ctx->pc = 0x2338e8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_2338ec:
    // 0x2338ec: 0x8fa700ec  lw          $a3, 0xEC($sp)
    ctx->pc = 0x2338ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_2338f0:
    // 0x2338f0: 0xd11021  addu        $v0, $a2, $s1
    ctx->pc = 0x2338f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_2338f4:
    // 0x2338f4: 0x4e300b  movn        $a2, $v0, $t6
    ctx->pc = 0x2338f4u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_2338f8:
    // 0x2338f8: 0xafa600e4  sw          $a2, 0xE4($sp)
    ctx->pc = 0x2338f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 6));
label_2338fc:
    // 0x2338fc: 0xafa700e8  sw          $a3, 0xE8($sp)
    ctx->pc = 0x2338fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 7));
label_233900:
    // 0x233900: 0x2812  mflo        $a1
    ctx->pc = 0x233900u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_233904:
    // 0x233904: 0x6e001b  divu        $zero, $v1, $t6
    ctx->pc = 0x233904u;
    { uint32_t divisor = GPR_U32(ctx, 14); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_233908:
    // 0x233908: 0x1812  mflo        $v1
    ctx->pc = 0x233908u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_23390c:
    // 0x23390c: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x23390cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_233910:
    // 0x233910: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x233910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_233914:
    // 0x233914: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x233914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_233918:
    // 0x233918: 0x83202d  daddu       $a0, $a0, $v1
    ctx->pc = 0x233918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
label_23391c:
    // 0x23391c: 0x10000037  b           . + 4 + (0x37 << 2)
label_233920:
    if (ctx->pc == 0x233920u) {
        ctx->pc = 0x233920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23391Cu;
        // 0x233920: 0xfe640000  sd          $a0, 0x0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233924u;
        goto label_233924;
    }
    ctx->pc = 0x23391Cu;
    {
        const bool branch_taken_0x23391c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23391Cu;
        // 0x233920: 0xfe640000  sd          $a0, 0x0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23391c) {
            ctx->pc = 0x2339FCu;
            goto label_2339fc;
        }
    }
    ctx->pc = 0x233924u;
label_233924:
    // 0x233924: 0x27caffff  addiu       $t2, $fp, -0x1
    ctx->pc = 0x233924u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
label_233928:
    // 0x233928: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x233928u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_23392c:
    // 0x23392c: 0xa3880  sll         $a3, $t2, 2
    ctx->pc = 0x23392cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_233930:
    // 0x233930: 0x2e3282b  sltu        $a1, $s7, $v1
    ctx->pc = 0x233930u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_233934:
    // 0x233934: 0x1e74821  addu        $t1, $t7, $a3
    ctx->pc = 0x233934u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 7)));
label_233938:
    // 0x233938: 0x3274021  addu        $t0, $t9, $a3
    ctx->pc = 0x233938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
label_23393c:
    // 0x23393c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x23393cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_233940:
    // 0x233940: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x233940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_233944:
    // 0x233944: 0x9d240000  lwu         $a0, 0x0($t1)
    ctx->pc = 0x233944u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_233948:
    // 0x233948: 0x2e5300a  movz        $a2, $s7, $a1
    ctx->pc = 0x233948u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23));
label_23394c:
    // 0x23394c: 0x8d2b0000  lw          $t3, 0x0($t1)
    ctx->pc = 0x23394cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_233950:
    // 0x233950: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x233950u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_233954:
    // 0x233954: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x233954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_233958:
    // 0x233958: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_23395c:
    if (ctx->pc == 0x23395Cu) {
        ctx->pc = 0x23395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233958u;
        // 0x23395c: 0xfe640000  sd          $a0, 0x0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233960u;
        goto label_233960;
    }
    ctx->pc = 0x233958u;
    {
        const bool branch_taken_0x233958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233958u;
        // 0x23395c: 0xfe640000  sd          $a0, 0x0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233958) {
            ctx->pc = 0x233994u;
            goto label_233994;
        }
    }
    ctx->pc = 0x233960u;
label_233960:
    // 0x233960: 0x1971021  addu        $v0, $t4, $s7
    ctx->pc = 0x233960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 23)));
label_233964:
    // 0x233964: 0x52e00001  beql        $s7, $zero, . + 4 + (0x1 << 2)
label_233968:
    if (ctx->pc == 0x233968u) {
        ctx->pc = 0x233968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233964u;
        // 0x233968: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23396Cu;
        goto label_23396c;
    }
    ctx->pc = 0x233964u;
    {
        const bool branch_taken_0x233964 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x233964) {
            ctx->pc = 0x233968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233964u;
            // 0x233968: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23396Cu;
            goto label_23396c;
        }
    }
    ctx->pc = 0x23396Cu;
label_23396c:
    // 0x23396c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23396cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_233970:
    // 0x233970: 0x118042  srl         $s0, $s1, 1
    ctx->pc = 0x233970u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_233974:
    // 0x233974: 0x57001b  divu        $zero, $v0, $s7
    ctx->pc = 0x233974u;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_233978:
    // 0x233978: 0x1012  mflo        $v0
    ctx->pc = 0x233978u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_23397c:
    // 0x23397c: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x23397cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_233980:
    // 0x233980: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x233980u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_233984:
    // 0x233984: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x233984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_233988:
    // 0x233988: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x233988u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_23398c:
    // 0x23398c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_233990:
    if (ctx->pc == 0x233990u) {
        ctx->pc = 0x233990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23398Cu;
        // 0x233990: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233994u;
        goto label_233994;
    }
    ctx->pc = 0x23398Cu;
    {
        const bool branch_taken_0x23398c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23398Cu;
        // 0x233990: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23398c) {
            ctx->pc = 0x2339FCu;
            goto label_2339fc;
        }
    }
    ctx->pc = 0x233994u;
label_233994:
    // 0x233994: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x233994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_233998:
    // 0x233998: 0x111042  srl         $v0, $s1, 1
    ctx->pc = 0x233998u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_23399c:
    // 0x23399c: 0x1c2202b  sltu        $a0, $t6, $v0
    ctx->pc = 0x23399cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2339a0:
    // 0x2339a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2339a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2339a4:
    // 0x2339a4: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x2339a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2339a8:
    // 0x2339a8: 0x1c4280a  movz        $a1, $t6, $a0
    ctx->pc = 0x2339a8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 14));
label_2339ac:
    // 0x2339ac: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2339acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2339b0:
    // 0x2339b0: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x2339b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2339b4:
    // 0x2339b4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_2339b8:
    if (ctx->pc == 0x2339B8u) {
        ctx->pc = 0x2339B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2339B4u;
        // 0x2339b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2339BCu;
        goto label_2339bc;
    }
    ctx->pc = 0x2339B4u;
    {
        const bool branch_taken_0x2339b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2339B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2339B4u;
        // 0x2339b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2339b4) {
            ctx->pc = 0x2339F8u;
            goto label_2339f8;
        }
    }
    ctx->pc = 0x2339BCu;
label_2339bc:
    // 0x2339bc: 0x1b7001b  divu        $zero, $t5, $s7
    ctx->pc = 0x2339bcu;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
label_2339c0:
    // 0x2339c0: 0x20e1821  addu        $v1, $s0, $t6
    ctx->pc = 0x2339c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 14)));
label_2339c4:
    // 0x2339c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2339c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2339c8:
    // 0x2339c8: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
label_2339cc:
    if (ctx->pc == 0x2339CCu) {
        ctx->pc = 0x2339CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2339C8u;
        // 0x2339cc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2339D0u;
        goto label_2339d0;
    }
    ctx->pc = 0x2339C8u;
    {
        const bool branch_taken_0x2339c8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x2339c8) {
            ctx->pc = 0x2339CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2339C8u;
            // 0x2339cc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2339D0u;
            goto label_2339d0;
        }
    }
    ctx->pc = 0x2339D0u;
label_2339d0:
    // 0x2339d0: 0x1012  mflo        $v0
    ctx->pc = 0x2339d0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2339d4:
    // 0x2339d4: 0x6e001b  divu        $zero, $v1, $t6
    ctx->pc = 0x2339d4u;
    { uint32_t divisor = GPR_U32(ctx, 14); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_2339d8:
    // 0x2339d8: 0x1812  mflo        $v1
    ctx->pc = 0x2339d8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_2339dc:
    // 0x2339dc: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x2339dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2339e0:
    // 0x2339e0: 0x8b1821  addu        $v1, $a0, $t3
    ctx->pc = 0x2339e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_2339e4:
    // 0x2339e4: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x2339e4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
label_2339e8:
    // 0x2339e8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2339e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2339ec:
    // 0x2339ec: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2339ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2339f0:
    // 0x2339f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2339f4:
    if (ctx->pc == 0x2339F4u) {
        ctx->pc = 0x2339F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2339F0u;
        // 0x2339f4: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2339F8u;
        goto label_2339f8;
    }
    ctx->pc = 0x2339F0u;
    {
        const bool branch_taken_0x2339f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2339F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2339F0u;
        // 0x2339f4: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2339f0) {
            ctx->pc = 0x2339FCu;
            goto label_2339fc;
        }
    }
    ctx->pc = 0x2339F8u;
label_2339f8:
    // 0x2339f8: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x2339f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2339fc:
    // 0x2339fc: 0x8fa500ec  lw          $a1, 0xEC($sp)
    ctx->pc = 0x2339fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_233a00:
    // 0x233a00: 0x180902d  daddu       $s2, $t4, $zero
    ctx->pc = 0x233a00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_233a04:
    // 0x233a04: 0x8fa60150  lw          $a2, 0x150($sp)
    ctx->pc = 0x233a04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_233a08:
    // 0x233a08: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x233a08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233a0c:
    // 0x233a0c: 0x8fa70154  lw          $a3, 0x154($sp)
    ctx->pc = 0x233a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_233a10:
    // 0x233a10: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x233a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_233a14:
    // 0x233a14: 0x8fab00dc  lw          $t3, 0xDC($sp)
    ctx->pc = 0x233a14u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_233a18:
    // 0x233a18: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x233a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_233a1c:
    // 0x233a1c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x233a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_233a20:
    // 0x233a20: 0xafa500ec  sw          $a1, 0xEC($sp)
    ctx->pc = 0x233a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 5));
label_233a24:
    // 0x233a24: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x233a24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_233a28:
    // 0x233a28: 0xafa60150  sw          $a2, 0x150($sp)
    ctx->pc = 0x233a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 6));
label_233a2c:
    // 0x233a2c: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x233a2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_233a30:
    // 0x233a30: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x233a30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_233a34:
    // 0x233a34: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x233a34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_233a38:
    // 0x233a38: 0xab102a  slt         $v0, $a1, $t3
    ctx->pc = 0x233a38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_233a3c:
    // 0x233a3c: 0x1440fe8c  bnez        $v0, . + 4 + (-0x174 << 2)
label_233a40:
    if (ctx->pc == 0x233A40u) {
        ctx->pc = 0x233A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A3Cu;
        // 0x233a40: 0xafa70154  sw          $a3, 0x154($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233A44u;
        goto label_233a44;
    }
    ctx->pc = 0x233A3Cu;
    {
        const bool branch_taken_0x233a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A3Cu;
        // 0x233a40: 0xafa70154  sw          $a3, 0x154($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a3c) {
            ctx->pc = 0x233470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233470;
        }
    }
    ctx->pc = 0x233A44u;
label_233a44:
    // 0x233a44: 0x8fac0128  lw          $t4, 0x128($sp)
    ctx->pc = 0x233a44u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_233a48:
    // 0x233a48: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x233a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
label_233a4c:
    // 0x233a4c: 0x8fb000c8  lw          $s0, 0xC8($sp)
    ctx->pc = 0x233a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_233a50:
    // 0x233a50: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x233a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_233a54:
    // 0x233a54: 0x1901021  addu        $v0, $t4, $s0
    ctx->pc = 0x233a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 16)));
label_233a58:
    // 0x233a58: 0xdc44fff8  ld          $a0, -0x8($v0)
    ctx->pc = 0x233a58u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 4294967288)));
label_233a5c:
    // 0x233a5c: 0x421b8  dsll        $a0, $a0, 6
    ctx->pc = 0x233a5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
label_233a60:
    // 0x233a60: 0x14830023  bne         $a0, $v1, . + 4 + (0x23 << 2)
label_233a64:
    if (ctx->pc == 0x233A64u) {
        ctx->pc = 0x233A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A60u;
        // 0x233a64: 0x8fac00c0  lw          $t4, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233A68u;
        goto label_233a68;
    }
    ctx->pc = 0x233A60u;
    {
        const bool branch_taken_0x233a60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x233A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A60u;
        // 0x233a64: 0x8fac00c0  lw          $t4, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a60) {
            ctx->pc = 0x233AF0u;
            goto label_233af0;
        }
    }
    ctx->pc = 0x233A68u;
label_233a68:
    // 0x233a68: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x233a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_233a6c:
    // 0x233a6c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x233a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_233a70:
    // 0x233a70: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x233a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
label_233a74:
    // 0x233a74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x233a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_233a78:
    // 0x233a78: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x233a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_233a7c:
    // 0x233a7c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x233a7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_233a80:
    // 0x233a80: 0x1451001c  bne         $v0, $s1, . + 4 + (0x1C << 2)
label_233a84:
    if (ctx->pc == 0x233A84u) {
        ctx->pc = 0x233A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A80u;
        // 0x233a84: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233A88u;
        goto label_233a88;
    }
    ctx->pc = 0x233A80u;
    {
        const bool branch_taken_0x233a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x233A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A80u;
        // 0x233a84: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a80) {
            ctx->pc = 0x233AF4u;
            goto label_233af4;
        }
    }
    ctx->pc = 0x233A88u;
label_233a88:
    // 0x233a88: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x233a88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_233a8c:
    // 0x233a8c: 0x24c2ffed  addiu       $v0, $a2, -0x13
    ctx->pc = 0x233a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967277));
label_233a90:
    // 0x233a90: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x233a90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_233a94:
    // 0x233a94: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
label_233a98:
    if (ctx->pc == 0x233A98u) {
        ctx->pc = 0x233A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A94u;
        // 0x233a98: 0x8fa70120  lw          $a3, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233A9Cu;
        goto label_233a9c;
    }
    ctx->pc = 0x233A94u;
    {
        const bool branch_taken_0x233a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A94u;
        // 0x233a98: 0x8fa70120  lw          $a3, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a94) {
            ctx->pc = 0x233C0Cu;
            goto label_233c0c;
        }
    }
    ctx->pc = 0x233A9Cu;
label_233a9c:
    // 0x233a9c: 0xdfab0148  ld          $t3, 0x148($sp)
    ctx->pc = 0x233a9cu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 29), 328)));
label_233aa0:
    // 0x233aa0: 0xe58021  addu        $s0, $a3, $a1
    ctx->pc = 0x233aa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_233aa4:
    // 0x233aa4: 0x7fad0160  sq          $t5, 0x160($sp)
    ctx->pc = 0x233aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 13));
label_233aa8:
    // 0x233aa8: 0xb283e  dsrl32      $a1, $t3, 0
    ctx->pc = 0x233aa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) >> (32 + 0));
label_233aac:
    // 0x233aac: 0xc07db0a  jal         func_1F6C28
label_233ab0:
    if (ctx->pc == 0x233AB0u) {
        ctx->pc = 0x233AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AACu;
        // 0x233ab0: 0x7fae0170  sq          $t6, 0x170($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233AB4u;
        goto label_233ab4;
    }
    ctx->pc = 0x233AACu;
    SET_GPR_U32(ctx, 31, 0x233AB4u);
    ctx->pc = 0x233AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233AACu;
    // 0x233ab0: 0x7fae0170  sq          $t6, 0x170($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6C28u, 0x233AACu, 0x233AB4u)) {
        return;
    }
    ctx->pc = 0x233AB4u;
label_233ab4:
    // 0x233ab4: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x233ab4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
label_233ab8:
    // 0x233ab8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x233ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233abc:
    // 0x233abc: 0xc07e4e4  jal         func_1F9390
label_233ac0:
    if (ctx->pc == 0x233AC0u) {
        ctx->pc = 0x233AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233ABCu;
        // 0x233ac0: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233AC4u;
        goto label_233ac4;
    }
    ctx->pc = 0x233ABCu;
    SET_GPR_U32(ctx, 31, 0x233AC4u);
    ctx->pc = 0x233AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233ABCu;
    // 0x233ac0: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x233ABCu, 0x233AC4u)) {
        return;
    }
    ctx->pc = 0x233AC4u;
label_233ac4:
    // 0x233ac4: 0x7bae0170  lq          $t6, 0x170($sp)
    ctx->pc = 0x233ac4u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_233ac8:
    // 0x233ac8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x233ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233acc:
    // 0x233acc: 0xc07db0a  jal         func_1F6C28
label_233ad0:
    if (ctx->pc == 0x233AD0u) {
        ctx->pc = 0x233AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233ACCu;
        // 0x233ad0: 0x1c0282d  daddu       $a1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233AD4u;
        goto label_233ad4;
    }
    ctx->pc = 0x233ACCu;
    SET_GPR_U32(ctx, 31, 0x233AD4u);
    ctx->pc = 0x233AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233ACCu;
    // 0x233ad0: 0x1c0282d  daddu       $a1, $t6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6C28u, 0x233ACCu, 0x233AD4u)) {
        return;
    }
    ctx->pc = 0x233AD4u;
label_233ad4:
    // 0x233ad4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x233ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_233ad8:
    // 0x233ad8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x233ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_233adc:
    // 0x233adc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x233adcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_233ae0:
    // 0x233ae0: 0x7bad0160  lq          $t5, 0x160($sp)
    ctx->pc = 0x233ae0u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_233ae4:
    // 0x233ae4: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x233ae4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_233ae8:
    // 0x233ae8: 0x10000049  b           . + 4 + (0x49 << 2)
label_233aec:
    if (ctx->pc == 0x233AECu) {
        ctx->pc = 0x233AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AE8u;
        // 0x233aec: 0x7bae0170  lq          $t6, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233AF0u;
        goto label_233af0;
    }
    ctx->pc = 0x233AE8u;
    {
        const bool branch_taken_0x233ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AE8u;
        // 0x233aec: 0x7bae0170  lq          $t6, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ae8) {
            ctx->pc = 0x233C10u;
            goto label_233c10;
        }
    }
    ctx->pc = 0x233AF0u;
label_233af0:
    // 0x233af0: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x233af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_233af4:
    // 0x233af4: 0x15820028  bne         $t4, $v0, . + 4 + (0x28 << 2)
label_233af8:
    if (ctx->pc == 0x233AF8u) {
        ctx->pc = 0x233AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AF4u;
        // 0x233af8: 0x8fa300c0  lw          $v1, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233AFCu;
        goto label_233afc;
    }
    ctx->pc = 0x233AF4u;
    {
        const bool branch_taken_0x233af4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 2));
        ctx->pc = 0x233AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AF4u;
        // 0x233af8: 0x8fa300c0  lw          $v1, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233af4) {
            ctx->pc = 0x233B98u;
            goto label_233b98;
        }
    }
    ctx->pc = 0x233AFCu;
label_233afc:
    // 0x233afc: 0x8fb00128  lw          $s0, 0x128($sp)
    ctx->pc = 0x233afcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_233b00:
    // 0x233b00: 0x1a0982d  daddu       $s3, $t5, $zero
    ctx->pc = 0x233b00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_233b04:
    // 0x233b04: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x233b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_233b08:
    // 0x233b08: 0x8fa40124  lw          $a0, 0x124($sp)
    ctx->pc = 0x233b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_233b0c:
    // 0x233b0c: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x233b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_233b10:
    // 0x233b10: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x233b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_233b14:
    // 0x233b14: 0xdc51fff8  ld          $s1, -0x8($v0)
    ctx->pc = 0x233b14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 2), 4294967288)));
label_233b18:
    // 0x233b18: 0x49080  sll         $s2, $a0, 2
    ctx->pc = 0x233b18u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_233b1c:
    // 0x233b1c: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x233b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_233b20:
    // 0x233b20: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x233b20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_233b24:
    // 0x233b24: 0x1189b8  dsll        $s1, $s1, 6
    ctx->pc = 0x233b24u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 6);
label_233b28:
    // 0x233b28: 0x7fad0160  sq          $t5, 0x160($sp)
    ctx->pc = 0x233b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 13));
label_233b2c:
    // 0x233b2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x233b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_233b30:
    // 0x233b30: 0x7fae0170  sq          $t6, 0x170($sp)
    ctx->pc = 0x233b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 14));
label_233b34:
    // 0x233b34: 0xc07db0a  jal         func_1F6C28
label_233b38:
    if (ctx->pc == 0x233B38u) {
        ctx->pc = 0x233B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B34u;
        // 0x233b38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233B3Cu;
        goto label_233b3c;
    }
    ctx->pc = 0x233B34u;
    SET_GPR_U32(ctx, 31, 0x233B3Cu);
    ctx->pc = 0x233B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B34u;
    // 0x233b38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6C28u, 0x233B34u, 0x233B3Cu)) {
        return;
    }
    ctx->pc = 0x233B3Cu;
label_233b3c:
    // 0x233b3c: 0x3b21821  addu        $v1, $sp, $s2
    ctx->pc = 0x233b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 18)));
label_233b40:
    // 0x233b40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x233b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233b44:
    // 0x233b44: 0xc07e4e4  jal         func_1F9390
label_233b48:
    if (ctx->pc == 0x233B48u) {
        ctx->pc = 0x233B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B44u;
        // 0x233b48: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233B4Cu;
        goto label_233b4c;
    }
    ctx->pc = 0x233B44u;
    SET_GPR_U32(ctx, 31, 0x233B4Cu);
    ctx->pc = 0x233B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B44u;
    // 0x233b48: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x233B44u, 0x233B4Cu)) {
        return;
    }
    ctx->pc = 0x233B4Cu;
label_233b4c:
    // 0x233b4c: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x233b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
label_233b50:
    // 0x233b50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x233b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_233b54:
    // 0x233b54: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x233b54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_233b58:
    // 0x233b58: 0xc07db0a  jal         func_1F6C28
label_233b5c:
    if (ctx->pc == 0x233B5Cu) {
        ctx->pc = 0x233B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B58u;
        // 0x233b5c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233B60u;
        goto label_233b60;
    }
    ctx->pc = 0x233B58u;
    SET_GPR_U32(ctx, 31, 0x233B60u);
    ctx->pc = 0x233B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B58u;
    // 0x233b5c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6C28u, 0x233B58u, 0x233B60u)) {
        return;
    }
    ctx->pc = 0x233B60u;
label_233b60:
    // 0x233b60: 0x7bad0160  lq          $t5, 0x160($sp)
    ctx->pc = 0x233b60u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_233b64:
    // 0x233b64: 0x52e00001  beql        $s7, $zero, . + 4 + (0x1 << 2)
label_233b68:
    if (ctx->pc == 0x233B68u) {
        ctx->pc = 0x233B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B64u;
        // 0x233b68: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x233B6Cu;
        goto label_233b6c;
    }
    ctx->pc = 0x233B64u;
    {
        const bool branch_taken_0x233b64 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x233b64) {
            ctx->pc = 0x233B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233B64u;
            // 0x233b68: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x233B6Cu;
            goto label_233b6c;
        }
    }
    ctx->pc = 0x233B6Cu;
label_233b6c:
    // 0x233b6c: 0x1b7001b  divu        $zero, $t5, $s7
    ctx->pc = 0x233b6cu;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
label_233b70:
    // 0x233b70: 0x2812  mflo        $a1
    ctx->pc = 0x233b70u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_233b74:
    // 0x233b74: 0xc07e4e4  jal         func_1F9390
label_233b78:
    if (ctx->pc == 0x233B78u) {
        ctx->pc = 0x233B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B74u;
        // 0x233b78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233B7Cu;
        goto label_233b7c;
    }
    ctx->pc = 0x233B74u;
    SET_GPR_U32(ctx, 31, 0x233B7Cu);
    ctx->pc = 0x233B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B74u;
    // 0x233b78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x233B74u, 0x233B7Cu)) {
        return;
    }
    ctx->pc = 0x233B7Cu;
label_233b7c:
    // 0x233b7c: 0x202802f  dsubu       $s0, $s0, $v0
    ctx->pc = 0x233b7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
label_233b80:
    // 0x233b80: 0x7bad0160  lq          $t5, 0x160($sp)
    ctx->pc = 0x233b80u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_233b84:
    // 0x233b84: 0x6610fffe  daddiu      $s0, $s0, -0x2
    ctx->pc = 0x233b84u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4294967294);
label_233b88:
    // 0x233b88: 0x10b03c  dsll32      $s6, $s0, 0
    ctx->pc = 0x233b88u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 16) << (32 + 0));
label_233b8c:
    // 0x233b8c: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x233b8cu;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
label_233b90:
    // 0x233b90: 0x1000001f  b           . + 4 + (0x1F << 2)
label_233b94:
    if (ctx->pc == 0x233B94u) {
        ctx->pc = 0x233B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B90u;
        // 0x233b94: 0x7bae0170  lq          $t6, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233B98u;
        goto label_233b98;
    }
    ctx->pc = 0x233B90u;
    {
        const bool branch_taken_0x233b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B90u;
        // 0x233b94: 0x7bae0170  lq          $t6, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233b90) {
            ctx->pc = 0x233C10u;
            goto label_233c10;
        }
    }
    ctx->pc = 0x233B98u;
label_233b98:
    // 0x233b98: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x233b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_233b9c:
    // 0x233b9c: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
label_233ba0:
    if (ctx->pc == 0x233BA0u) {
        ctx->pc = 0x233BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B9Cu;
        // 0x233ba0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233BA4u;
        goto label_233ba4;
    }
    ctx->pc = 0x233B9Cu;
    {
        const bool branch_taken_0x233b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x233BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B9Cu;
        // 0x233ba0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233b9c) {
            ctx->pc = 0x233C10u;
            goto label_233c10;
        }
    }
    ctx->pc = 0x233BA4u;
label_233ba4:
    // 0x233ba4: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x233ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_233ba8:
    // 0x233ba8: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x233ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_233bac:
    // 0x233bac: 0x8fa60124  lw          $a2, 0x124($sp)
    ctx->pc = 0x233bacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_233bb0:
    // 0x233bb0: 0x8fa70120  lw          $a3, 0x120($sp)
    ctx->pc = 0x233bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_233bb4:
    // 0x233bb4: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x233bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_233bb8:
    // 0x233bb8: 0x68880  sll         $s1, $a2, 2
    ctx->pc = 0x233bb8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_233bbc:
    // 0x233bbc: 0xdc64fff8  ld          $a0, -0x8($v1)
    ctx->pc = 0x233bbcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_233bc0:
    // 0x233bc0: 0xf11021  addu        $v0, $a3, $s1
    ctx->pc = 0x233bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
label_233bc4:
    // 0x233bc4: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x233bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_233bc8:
    // 0x233bc8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x233bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_233bcc:
    // 0x233bcc: 0x421b8  dsll        $a0, $a0, 6
    ctx->pc = 0x233bccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
label_233bd0:
    // 0x233bd0: 0x7fad0160  sq          $t5, 0x160($sp)
    ctx->pc = 0x233bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 13));
label_233bd4:
    // 0x233bd4: 0xc07db0a  jal         func_1F6C28
label_233bd8:
    if (ctx->pc == 0x233BD8u) {
        ctx->pc = 0x233BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233BD4u;
        // 0x233bd8: 0x7fae0170  sq          $t6, 0x170($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233BDCu;
        goto label_233bdc;
    }
    ctx->pc = 0x233BD4u;
    SET_GPR_U32(ctx, 31, 0x233BDCu);
    ctx->pc = 0x233BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233BD4u;
    // 0x233bd8: 0x7fae0170  sq          $t6, 0x170($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6C28u, 0x233BD4u, 0x233BDCu)) {
        return;
    }
    ctx->pc = 0x233BDCu;
label_233bdc:
    // 0x233bdc: 0x3b11821  addu        $v1, $sp, $s1
    ctx->pc = 0x233bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
label_233be0:
    // 0x233be0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x233be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233be4:
    // 0x233be4: 0xc07e4e4  jal         func_1F9390
label_233be8:
    if (ctx->pc == 0x233BE8u) {
        ctx->pc = 0x233BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233BE4u;
        // 0x233be8: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233BECu;
        goto label_233bec;
    }
    ctx->pc = 0x233BE4u;
    SET_GPR_U32(ctx, 31, 0x233BECu);
    ctx->pc = 0x233BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233BE4u;
    // 0x233be8: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x233BE4u, 0x233BECu)) {
        return;
    }
    ctx->pc = 0x233BECu;
label_233bec:
    // 0x233bec: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x233becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
label_233bf0:
    // 0x233bf0: 0x7bad0160  lq          $t5, 0x160($sp)
    ctx->pc = 0x233bf0u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_233bf4:
    // 0x233bf4: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x233bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_233bf8:
    // 0x233bf8: 0x6610ffff  daddiu      $s0, $s0, -0x1
    ctx->pc = 0x233bf8u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4294967295);
label_233bfc:
    // 0x233bfc: 0x10b03c  dsll32      $s6, $s0, 0
    ctx->pc = 0x233bfcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 16) << (32 + 0));
label_233c00:
    // 0x233c00: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x233c00u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
label_233c04:
    // 0x233c04: 0x10000002  b           . + 4 + (0x2 << 2)
label_233c08:
    if (ctx->pc == 0x233C08u) {
        ctx->pc = 0x233C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C04u;
        // 0x233c08: 0x7bae0170  lq          $t6, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233C0Cu;
        goto label_233c0c;
    }
    ctx->pc = 0x233C04u;
    {
        const bool branch_taken_0x233c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C04u;
        // 0x233c08: 0x7bae0170  lq          $t6, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c04) {
            ctx->pc = 0x233C10u;
            goto label_233c10;
        }
    }
    ctx->pc = 0x233C0Cu;
label_233c0c:
    // 0x233c0c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x233c0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233c10:
    // 0x233c10: 0x8fab00c8  lw          $t3, 0xC8($sp)
    ctx->pc = 0x233c10u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_233c14:
    // 0x233c14: 0x8fac0020  lw          $t4, 0x20($sp)
    ctx->pc = 0x233c14u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_233c18:
    // 0x233c18: 0xdd620000  ld          $v0, 0x0($t3)
    ctx->pc = 0x233c18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 0)));
label_233c1c:
    // 0x233c1c: 0x8fb000dc  lw          $s0, 0xDC($sp)
    ctx->pc = 0x233c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_233c20:
    // 0x233c20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x233c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_233c24:
    // 0x233c24: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x233c24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_233c28:
    // 0x233c28: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x233c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_233c2c:
    // 0x233c2c: 0xafac0110  sw          $t4, 0x110($sp)
    ctx->pc = 0x233c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 12));
label_233c30:
    // 0x233c30: 0x1a000132  blez        $s0, . + 4 + (0x132 << 2)
label_233c34:
    if (ctx->pc == 0x233C34u) {
        ctx->pc = 0x233C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C30u;
        // 0x233c34: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233C38u;
        goto label_233c38;
    }
    ctx->pc = 0x233C30u;
    {
        const bool branch_taken_0x233c30 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x233C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C30u;
        // 0x233c34: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c30) {
            ctx->pc = 0x2340FCu;
            goto label_2340fc;
        }
    }
    ctx->pc = 0x233C38u;
label_233c38:
    // 0x233c38: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x233c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_233c3c:
    // 0x233c3c: 0x0  nop
    ctx->pc = 0x233c3cu;
    // NOP
label_233c40:
    // 0x233c40: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x233c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_233c44:
    // 0x233c44: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x233c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_233c48:
    // 0x233c48: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x233c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_233c4c:
    // 0x233c4c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x233c4cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233c50:
    // 0x233c50: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x233c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_233c54:
    // 0x233c54: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x233c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_233c58:
    // 0x233c58: 0xdc500000  ld          $s0, 0x0($v0)
    ctx->pc = 0x233c58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_233c5c:
    // 0x233c5c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x233c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_233c60:
    // 0x233c60: 0x1470001f  bne         $v1, $s0, . + 4 + (0x1F << 2)
label_233c64:
    if (ctx->pc == 0x233C64u) {
        ctx->pc = 0x233C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C60u;
        // 0x233c64: 0x8fa300ec  lw          $v1, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233C68u;
        goto label_233c68;
    }
    ctx->pc = 0x233C60u;
    {
        const bool branch_taken_0x233c60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x233C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C60u;
        // 0x233c64: 0x8fa300ec  lw          $v1, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c60) {
            ctx->pc = 0x233CE0u;
            goto label_233ce0;
        }
    }
    ctx->pc = 0x233C68u;
label_233c68:
    // 0x233c68: 0x8fa600c4  lw          $a2, 0xC4($sp)
    ctx->pc = 0x233c68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_233c6c:
    // 0x233c6c: 0x1c0a02d  daddu       $s4, $t6, $zero
    ctx->pc = 0x233c6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_233c70:
    // 0x233c70: 0x8fa70110  lw          $a3, 0x110($sp)
    ctx->pc = 0x233c70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_233c74:
    // 0x233c74: 0x3c61821  addu        $v1, $fp, $a2
    ctx->pc = 0x233c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
label_233c78:
    // 0x233c78: 0xdfab0148  ld          $t3, 0x148($sp)
    ctx->pc = 0x233c78u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 29), 328)));
label_233c7c:
    // 0x233c7c: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x233c7cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_233c80:
    // 0x233c80: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x233c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
label_233c84:
    // 0x233c84: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x233c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_233c88:
    // 0x233c88: 0xb983e  dsrl32      $s3, $t3, 0
    ctx->pc = 0x233c88u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 11) >> (32 + 0));
label_233c8c:
    // 0x233c8c: 0x82902f  dsubu       $s2, $a0, $v0
    ctx->pc = 0x233c8cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
label_233c90:
    // 0x233c90: 0x7fad0160  sq          $t5, 0x160($sp)
    ctx->pc = 0x233c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 13));
label_233c94:
    // 0x233c94: 0x7fae0170  sq          $t6, 0x170($sp)
    ctx->pc = 0x233c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 14));
label_233c98:
    // 0x233c98: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x233c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_233c9c:
    // 0x233c9c: 0xc07e4e4  jal         func_1F9390
label_233ca0:
    if (ctx->pc == 0x233CA0u) {
        ctx->pc = 0x233CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C9Cu;
        // 0x233ca0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233CA4u;
        goto label_233ca4;
    }
    ctx->pc = 0x233C9Cu;
    SET_GPR_U32(ctx, 31, 0x233CA4u);
    ctx->pc = 0x233CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233C9Cu;
    // 0x233ca0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x233C9Cu, 0x233CA4u)) {
        return;
    }
    ctx->pc = 0x233CA4u;
label_233ca4:
    // 0x233ca4: 0x8fac0100  lw          $t4, 0x100($sp)
    ctx->pc = 0x233ca4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_233ca8:
    // 0x233ca8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x233ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233cac:
    // 0x233cac: 0xc1980  sll         $v1, $t4, 6
    ctx->pc = 0x233cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 6));
label_233cb0:
    // 0x233cb0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x233cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_233cb4:
    // 0x233cb4: 0x3883e  dsrl32      $s1, $v1, 0
    ctx->pc = 0x233cb4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) >> (32 + 0));
label_233cb8:
    // 0x233cb8: 0xc07db0a  jal         func_1F6C28
label_233cbc:
    if (ctx->pc == 0x233CBCu) {
        ctx->pc = 0x233CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233CB8u;
        // 0x233cbc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233CC0u;
        goto label_233cc0;
    }
    ctx->pc = 0x233CB8u;
    SET_GPR_U32(ctx, 31, 0x233CC0u);
    ctx->pc = 0x233CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233CB8u;
    // 0x233cbc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6C28u, 0x233CB8u, 0x233CC0u)) {
        return;
    }
    ctx->pc = 0x233CC0u;
label_233cc0:
    // 0x233cc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x233cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233cc4:
    // 0x233cc4: 0xc07e4e4  jal         func_1F9390
label_233cc8:
    if (ctx->pc == 0x233CC8u) {
        ctx->pc = 0x233CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233CC4u;
        // 0x233cc8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233CCCu;
        goto label_233ccc;
    }
    ctx->pc = 0x233CC4u;
    SET_GPR_U32(ctx, 31, 0x233CCCu);
    ctx->pc = 0x233CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233CC4u;
    // 0x233cc8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x233CC4u, 0x233CCCu)) {
        return;
    }
    ctx->pc = 0x233CCCu;
label_233ccc:
    // 0x233ccc: 0x2c420800  sltiu       $v0, $v0, 0x800
    ctx->pc = 0x233cccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2048) ? 1 : 0);
label_233cd0:
    // 0x233cd0: 0x7bad0160  lq          $t5, 0x160($sp)
    ctx->pc = 0x233cd0u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_233cd4:
    // 0x233cd4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_233cd8:
    if (ctx->pc == 0x233CD8u) {
        ctx->pc = 0x233CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233CD4u;
        // 0x233cd8: 0x7bae0170  lq          $t6, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233CDCu;
        goto label_233cdc;
    }
    ctx->pc = 0x233CD4u;
    {
        const bool branch_taken_0x233cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233CD4u;
        // 0x233cd8: 0x7bae0170  lq          $t6, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233cd4) {
            ctx->pc = 0x233D10u;
            goto label_233d10;
        }
    }
    ctx->pc = 0x233CDCu;
label_233cdc:
    // 0x233cdc: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x233cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_233ce0:
    // 0x233ce0: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x233ce0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
label_233ce4:
    // 0x233ce4: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x233ce4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_233ce8:
    // 0x233ce8: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x233ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_233cec:
    // 0x233cec: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x233cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_233cf0:
    // 0x233cf0: 0xafb00100  sw          $s0, 0x100($sp)
    ctx->pc = 0x233cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 16));
label_233cf4:
    // 0x233cf4: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x233cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_233cf8:
    // 0x233cf8: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x233cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_233cfc:
    // 0x233cfc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x233cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_233d00:
    // 0x233d00: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x233d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_233d04:
    // 0x233d04: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x233d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
label_233d08:
    // 0x233d08: 0x1000001f  b           . + 4 + (0x1F << 2)
label_233d0c:
    if (ctx->pc == 0x233D0Cu) {
        ctx->pc = 0x233D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D08u;
        // 0x233d0c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233D10u;
        goto label_233d10;
    }
    ctx->pc = 0x233D08u;
    {
        const bool branch_taken_0x233d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D08u;
        // 0x233d0c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d08) {
            ctx->pc = 0x233D88u;
            goto label_233d88;
        }
    }
    ctx->pc = 0x233D10u;
label_233d10:
    // 0x233d10: 0x7fad0160  sq          $t5, 0x160($sp)
    ctx->pc = 0x233d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 13));
label_233d14:
    // 0x233d14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x233d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_233d18:
    // 0x233d18: 0x7fae0170  sq          $t6, 0x170($sp)
    ctx->pc = 0x233d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 14));
label_233d1c:
    // 0x233d1c: 0xc07e4e4  jal         func_1F9390
label_233d20:
    if (ctx->pc == 0x233D20u) {
        ctx->pc = 0x233D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D1Cu;
        // 0x233d20: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233D24u;
        goto label_233d24;
    }
    ctx->pc = 0x233D1Cu;
    SET_GPR_U32(ctx, 31, 0x233D24u);
    ctx->pc = 0x233D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D1Cu;
    // 0x233d20: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x233D1Cu, 0x233D24u)) {
        return;
    }
    ctx->pc = 0x233D24u;
label_233d24:
    // 0x233d24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x233d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233d28:
    // 0x233d28: 0xc0ca672  jal         func_3299C8
label_233d2c:
    if (ctx->pc == 0x233D2Cu) {
        ctx->pc = 0x233D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D28u;
        // 0x233d2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233D30u;
        goto label_233d30;
    }
    ctx->pc = 0x233D28u;
    SET_GPR_U32(ctx, 31, 0x233D30u);
    ctx->pc = 0x233D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D28u;
    // 0x233d2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3299C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3299C8u, 0x233D28u, 0x233D30u)) {
        return;
    }
    ctx->pc = 0x233D30u;
label_233d30:
    // 0x233d30: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x233d30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
label_233d34:
    // 0x233d34: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x233d34u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_233d38:
    // 0x233d38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x233d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_233d3c:
    // 0x233d3c: 0xc07e4e4  jal         func_1F9390
label_233d40:
    if (ctx->pc == 0x233D40u) {
        ctx->pc = 0x233D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D3Cu;
        // 0x233d40: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233D44u;
        goto label_233d44;
    }
    ctx->pc = 0x233D3Cu;
    SET_GPR_U32(ctx, 31, 0x233D44u);
    ctx->pc = 0x233D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D3Cu;
    // 0x233d40: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x233D3Cu, 0x233D44u)) {
        return;
    }
    ctx->pc = 0x233D44u;
label_233d44:
    // 0x233d44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x233d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233d48:
    // 0x233d48: 0xc07db0a  jal         func_1F6C28
label_233d4c:
    if (ctx->pc == 0x233D4Cu) {
        ctx->pc = 0x233D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D48u;
        // 0x233d4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233D50u;
        goto label_233d50;
    }
    ctx->pc = 0x233D48u;
    SET_GPR_U32(ctx, 31, 0x233D50u);
    ctx->pc = 0x233D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D48u;
    // 0x233d4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6C28u, 0x233D48u, 0x233D50u)) {
        return;
    }
    ctx->pc = 0x233D50u;
label_233d50:
    // 0x233d50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x233d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233d54:
    // 0x233d54: 0xc07e4e4  jal         func_1F9390
label_233d58:
    if (ctx->pc == 0x233D58u) {
        ctx->pc = 0x233D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D54u;
        // 0x233d58: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233D5Cu;
        goto label_233d5c;
    }
    ctx->pc = 0x233D54u;
    SET_GPR_U32(ctx, 31, 0x233D5Cu);
    ctx->pc = 0x233D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D54u;
    // 0x233d58: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x233D54u, 0x233D5Cu)) {
        return;
    }
    ctx->pc = 0x233D5Cu;
label_233d5c:
    // 0x233d5c: 0x8fa600ec  lw          $a2, 0xEC($sp)
    ctx->pc = 0x233d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_233d60:
    // 0x233d60: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x233d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_233d64:
    // 0x233d64: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x233d64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_233d68:
    // 0x233d68: 0x8fa700cc  lw          $a3, 0xCC($sp)
    ctx->pc = 0x233d68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_233d6c:
    // 0x233d6c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x233d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_233d70:
    // 0x233d70: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x233d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_233d74:
    // 0x233d74: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x233d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_233d78:
    // 0x233d78: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x233d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_233d7c:
    // 0x233d7c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x233d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_233d80:
    // 0x233d80: 0x7bae0170  lq          $t6, 0x170($sp)
    ctx->pc = 0x233d80u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_233d84:
    // 0x233d84: 0x7bad0160  lq          $t5, 0x160($sp)
    ctx->pc = 0x233d84u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_233d88:
    // 0x233d88: 0x8fab0100  lw          $t3, 0x100($sp)
    ctx->pc = 0x233d88u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_233d8c:
    // 0x233d8c: 0x51a00001  beql        $t5, $zero, . + 4 + (0x1 << 2)
label_233d90:
    if (ctx->pc == 0x233D90u) {
        ctx->pc = 0x233D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D8Cu;
        // 0x233d90: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x233D94u;
        goto label_233d94;
    }
    ctx->pc = 0x233D8Cu;
    {
        const bool branch_taken_0x233d8c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x233d8c) {
            ctx->pc = 0x233D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233D8Cu;
            // 0x233d90: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x233D94u;
            goto label_233d94;
        }
    }
    ctx->pc = 0x233D94u;
label_233d94:
    // 0x233d94: 0xb1980  sll         $v1, $t3, 6
    ctx->pc = 0x233d94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 6));
label_233d98:
    // 0x233d98: 0x6d001b  divu        $zero, $v1, $t5
    ctx->pc = 0x233d98u;
    { uint32_t divisor = GPR_U32(ctx, 13); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_233d9c:
    // 0x233d9c: 0x1012  mflo        $v0
    ctx->pc = 0x233d9cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_233da0:
    // 0x233da0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x233da0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_233da4:
    // 0x233da4: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
label_233da8:
    if (ctx->pc == 0x233DA8u) {
        ctx->pc = 0x233DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233DA4u;
        // 0x233da8: 0x8fa20140  lw          $v0, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233DACu;
        goto label_233dac;
    }
    ctx->pc = 0x233DA4u;
    {
        const bool branch_taken_0x233da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233DA4u;
        // 0x233da8: 0x8fa20140  lw          $v0, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233da4) {
            ctx->pc = 0x233E78u;
            goto label_233e78;
        }
    }
    ctx->pc = 0x233DACu;
label_233dac:
    // 0x233dac: 0x77001b  divu        $zero, $v1, $s7
    ctx->pc = 0x233dacu;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_233db0:
    // 0x233db0: 0xb8ac0  sll         $s1, $t3, 11
    ctx->pc = 0x233db0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 11), 11));
label_233db4:
    // 0x233db4: 0x51a00001  beql        $t5, $zero, . + 4 + (0x1 << 2)
label_233db8:
    if (ctx->pc == 0x233DB8u) {
        ctx->pc = 0x233DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233DB4u;
        // 0x233db8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x233DBCu;
        goto label_233dbc;
    }
    ctx->pc = 0x233DB4u;
    {
        const bool branch_taken_0x233db4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x233db4) {
            ctx->pc = 0x233DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233DB4u;
            // 0x233db8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x233DBCu;
            goto label_233dbc;
        }
    }
    ctx->pc = 0x233DBCu;
label_233dbc:
    // 0x233dbc: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x233dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_233dc0:
    // 0x233dc0: 0x3c2a821  addu        $s5, $fp, $v0
    ctx->pc = 0x233dc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_233dc4:
    // 0x233dc4: 0xdeb40000  ld          $s4, 0x0($s5)
    ctx->pc = 0x233dc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 21), 0)));
label_233dc8:
    // 0x233dc8: 0x9812  mflo        $s3
    ctx->pc = 0x233dc8u;
    SET_GPR_U64(ctx, 19, ctx->lo);
label_233dcc:
    // 0x233dcc: 0x1b7001b  divu        $zero, $t5, $s7
    ctx->pc = 0x233dccu;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
label_233dd0:
    // 0x233dd0: 0x9012  mflo        $s2
    ctx->pc = 0x233dd0u;
    SET_GPR_U64(ctx, 18, ctx->lo);
label_233dd4:
    // 0x233dd4: 0x22d001b  divu        $zero, $s1, $t5
    ctx->pc = 0x233dd4u;
    { uint32_t divisor = GPR_U32(ctx, 13); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
label_233dd8:
    // 0x233dd8: 0x2722023  subu        $a0, $s3, $s2
    ctx->pc = 0x233dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_233ddc:
    // 0x233ddc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x233ddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_233de0:
    // 0x233de0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x233de0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_233de4:
    // 0x233de4: 0x2842024  and         $a0, $s4, $a0
    ctx->pc = 0x233de4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & GPR_U64(ctx, 4));
label_233de8:
    // 0x233de8: 0x8812  mflo        $s1
    ctx->pc = 0x233de8u;
    SET_GPR_U64(ctx, 17, ctx->lo);
label_233dec:
    // 0x233dec: 0x77001b  divu        $zero, $v1, $s7
    ctx->pc = 0x233decu;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_233df0:
    // 0x233df0: 0x2328023  subu        $s0, $s1, $s2
    ctx->pc = 0x233df0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_233df4:
    // 0x233df4: 0x108027  nor         $s0, $zero, $s0
    ctx->pc = 0x233df4u;
    SET_GPR_U64(ctx, 16, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
label_233df8:
    // 0x233df8: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x233df8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
label_233dfc:
    // 0x233dfc: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x233dfcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
label_233e00:
    // 0x233e00: 0x2908024  and         $s0, $s4, $s0
    ctx->pc = 0x233e00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) & GPR_U64(ctx, 16));
label_233e04:
    // 0x233e04: 0x1012  mflo        $v0
    ctx->pc = 0x233e04u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_233e08:
    // 0x233e08: 0x233001b  divu        $zero, $s1, $s3
    ctx->pc = 0x233e08u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
label_233e0c:
    // 0x233e0c: 0x7fad0160  sq          $t5, 0x160($sp)
    ctx->pc = 0x233e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 13));
label_233e10:
    // 0x233e10: 0x7fae0170  sq          $t6, 0x170($sp)
    ctx->pc = 0x233e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 14));
label_233e14:
    // 0x233e14: 0x2812  mflo        $a1
    ctx->pc = 0x233e14u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_233e18:
    // 0x233e18: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x233e18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_233e1c:
    // 0x233e1c: 0xc07e4e4  jal         func_1F9390
label_233e20:
    if (ctx->pc == 0x233E20u) {
        ctx->pc = 0x233E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E1Cu;
        // 0x233e20: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E24u;
        goto label_233e24;
    }
    ctx->pc = 0x233E1Cu;
    SET_GPR_U32(ctx, 31, 0x233E24u);
    ctx->pc = 0x233E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233E1Cu;
    // 0x233e20: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x233E1Cu, 0x233E24u)) {
        return;
    }
    ctx->pc = 0x233E24u;
label_233e24:
    // 0x233e24: 0x272001b  divu        $zero, $s3, $s2
    ctx->pc = 0x233e24u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,19); } }
label_233e28:
    // 0x233e28: 0x7bad0160  lq          $t5, 0x160($sp)
    ctx->pc = 0x233e28u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_233e2c:
    // 0x233e2c: 0x2338823  subu        $s1, $s1, $s3
    ctx->pc = 0x233e2cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_233e30:
    // 0x233e30: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x233e30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_233e34:
    // 0x233e34: 0x51a00001  beql        $t5, $zero, . + 4 + (0x1 << 2)
label_233e38:
    if (ctx->pc == 0x233E38u) {
        ctx->pc = 0x233E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E34u;
        // 0x233e38: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E3Cu;
        goto label_233e3c;
    }
    ctx->pc = 0x233E34u;
    {
        const bool branch_taken_0x233e34 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x233e34) {
            ctx->pc = 0x233E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233E34u;
            // 0x233e38: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x233E3Cu;
            goto label_233e3c;
        }
    }
    ctx->pc = 0x233E3Cu;
label_233e3c:
    // 0x233e3c: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x233e3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
label_233e40:
    // 0x233e40: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x233e40u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
label_233e44:
    // 0x233e44: 0x2912024  and         $a0, $s4, $s1
    ctx->pc = 0x233e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & GPR_U64(ctx, 17));
label_233e48:
    // 0x233e48: 0x9012  mflo        $s2
    ctx->pc = 0x233e48u;
    SET_GPR_U64(ctx, 18, ctx->lo);
label_233e4c:
    // 0x233e4c: 0x1b7001b  divu        $zero, $t5, $s7
    ctx->pc = 0x233e4cu;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
label_233e50:
    // 0x233e50: 0x12903c  dsll32      $s2, $s2, 0
    ctx->pc = 0x233e50u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
label_233e54:
    // 0x233e54: 0x12283e  dsrl32      $a1, $s2, 0
    ctx->pc = 0x233e54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) >> (32 + 0));
label_233e58:
    // 0x233e58: 0x1812  mflo        $v1
    ctx->pc = 0x233e58u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_233e5c:
    // 0x233e5c: 0xc07db0a  jal         func_1F6C28
label_233e60:
    if (ctx->pc == 0x233E60u) {
        ctx->pc = 0x233E64u;
        goto label_233e64;
    }
    ctx->pc = 0x233E5Cu;
    SET_GPR_U32(ctx, 31, 0x233E64u);
    ctx->pc = 0x1F6C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6C28u, 0x233E5Cu, 0x233E64u)) {
        return;
    }
    ctx->pc = 0x233E64u;
label_233e64:
    // 0x233e64: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x233e64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_233e68:
    // 0x233e68: 0xfeb00000  sd          $s0, 0x0($s5)
    ctx->pc = 0x233e68u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 16));
label_233e6c:
    // 0x233e6c: 0x7bae0170  lq          $t6, 0x170($sp)
    ctx->pc = 0x233e6cu;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_233e70:
    // 0x233e70: 0x7bad0160  lq          $t5, 0x160($sp)
    ctx->pc = 0x233e70u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_233e74:
    // 0x233e74: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x233e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_233e78:
    // 0x233e78: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
label_233e7c:
    if (ctx->pc == 0x233E7Cu) {
        ctx->pc = 0x233E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E78u;
        // 0x233e7c: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E80u;
        goto label_233e80;
    }
    ctx->pc = 0x233E78u;
    {
        const bool branch_taken_0x233e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E78u;
        // 0x233e7c: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e78) {
            ctx->pc = 0x2340C0u;
            goto label_2340c0;
        }
    }
    ctx->pc = 0x233E80u;
label_233e80:
    // 0x233e80: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x233e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_233e84:
    // 0x233e84: 0x2442abd0  addiu       $v0, $v0, -0x5430
    ctx->pc = 0x233e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945744));
label_233e88:
    // 0x233e88: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x233e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_233e8c:
    // 0x233e8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x233e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_233e90:
    // 0x233e90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x233e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_233e94:
    // 0x233e94: 0x800008  jr          $a0
label_233e98:
    if (ctx->pc == 0x233E98u) {
        ctx->pc = 0x233E9Cu;
        goto label_233e9c;
    }
    ctx->pc = 0x233E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233E94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x233E9Cu;
label_233e9c:
    // 0x233e9c: 0x8fa600c4  lw          $a2, 0xC4($sp)
    ctx->pc = 0x233e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_233ea0:
    // 0x233ea0: 0x2402ffe1  addiu       $v0, $zero, -0x1F
    ctx->pc = 0x233ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
label_233ea4:
    // 0x233ea4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_233ea8:
    if (ctx->pc == 0x233EA8u) {
        ctx->pc = 0x233EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233EA4u;
        // 0x233ea8: 0x3c62821  addu        $a1, $fp, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233EACu;
        goto label_233eac;
    }
    ctx->pc = 0x233EA4u;
    {
        const bool branch_taken_0x233ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233EA4u;
        // 0x233ea8: 0x3c62821  addu        $a1, $fp, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ea4) {
            ctx->pc = 0x233F24u;
            goto label_233f24;
        }
    }
    ctx->pc = 0x233EACu;
label_233eac:
    // 0x233eac: 0x8fa700c4  lw          $a3, 0xC4($sp)
    ctx->pc = 0x233eacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_233eb0:
    // 0x233eb0: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x233eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_233eb4:
    // 0x233eb4: 0x10000030  b           . + 4 + (0x30 << 2)
label_233eb8:
    if (ctx->pc == 0x233EB8u) {
        ctx->pc = 0x233EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233EB4u;
        // 0x233eb8: 0x3c72021  addu        $a0, $fp, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233EBCu;
        goto label_233ebc;
    }
    ctx->pc = 0x233EB4u;
    {
        const bool branch_taken_0x233eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233EB4u;
        // 0x233eb8: 0x3c72021  addu        $a0, $fp, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233eb4) {
            ctx->pc = 0x233F78u;
            goto label_233f78;
        }
    }
    ctx->pc = 0x233EBCu;
label_233ebc:
    // 0x233ebc: 0x8fab00c4  lw          $t3, 0xC4($sp)
    ctx->pc = 0x233ebcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_233ec0:
    // 0x233ec0: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x233ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_233ec4:
    // 0x233ec4: 0x3cb2021  addu        $a0, $fp, $t3
    ctx->pc = 0x233ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 11)));
label_233ec8:
    // 0x233ec8: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x233ec8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_233ecc:
    // 0x233ecc: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x233eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_233ed0:
    // 0x233ed0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x233ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_233ed4:
    // 0x233ed4: 0x31878  dsll        $v1, $v1, 1
    ctx->pc = 0x233ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 1);
label_233ed8:
    // 0x233ed8: 0x30a40002  andi        $a0, $a1, 0x2
    ctx->pc = 0x233ed8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_233edc:
    // 0x233edc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x233edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_233ee0:
    // 0x233ee0: 0x420f8  dsll        $a0, $a0, 3
    ctx->pc = 0x233ee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 3);
label_233ee4:
    // 0x233ee4: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x233ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
label_233ee8:
    // 0x233ee8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x233ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_233eec:
    // 0x233eec: 0x30a40010  andi        $a0, $a1, 0x10
    ctx->pc = 0x233eecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
label_233ef0:
    // 0x233ef0: 0x318ba  dsrl        $v1, $v1, 2
    ctx->pc = 0x233ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 2);
label_233ef4:
    // 0x233ef4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x233ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_233ef8:
    // 0x233ef8: 0x30a50008  andi        $a1, $a1, 0x8
    ctx->pc = 0x233ef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
label_233efc:
    // 0x233efc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x233efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_233f00:
    // 0x233f00: 0x420ba  dsrl        $a0, $a0, 2
    ctx->pc = 0x233f00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 2);
label_233f04:
    // 0x233f04: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x233f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_233f08:
    // 0x233f08: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x233f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_233f0c:
    // 0x233f0c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x233f0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_233f10:
    // 0x233f10: 0x10000071  b           . + 4 + (0x71 << 2)
label_233f14:
    if (ctx->pc == 0x233F14u) {
        ctx->pc = 0x233F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F10u;
        // 0x233f14: 0x8fab00ec  lw          $t3, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233F18u;
        goto label_233f18;
    }
    ctx->pc = 0x233F10u;
    {
        const bool branch_taken_0x233f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F10u;
        // 0x233f14: 0x8fab00ec  lw          $t3, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f10) {
            ctx->pc = 0x2340D8u;
            goto label_2340d8;
        }
    }
    ctx->pc = 0x233F18u;
label_233f18:
    // 0x233f18: 0x8fac00c4  lw          $t4, 0xC4($sp)
    ctx->pc = 0x233f18u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_233f1c:
    // 0x233f1c: 0x2402ffe1  addiu       $v0, $zero, -0x1F
    ctx->pc = 0x233f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
label_233f20:
    // 0x233f20: 0x3cc2821  addu        $a1, $fp, $t4
    ctx->pc = 0x233f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 12)));
label_233f24:
    // 0x233f24: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x233f24u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_233f28:
    // 0x233f28: 0x30640002  andi        $a0, $v1, 0x2
    ctx->pc = 0x233f28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_233f2c:
    // 0x233f2c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x233f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_233f30:
    // 0x233f30: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x233f30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
label_233f34:
    // 0x233f34: 0x30650004  andi        $a1, $v1, 0x4
    ctx->pc = 0x233f34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_233f38:
    // 0x233f38: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x233f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_233f3c:
    // 0x233f3c: 0x528b8  dsll        $a1, $a1, 2
    ctx->pc = 0x233f3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 2);
label_233f40:
    // 0x233f40: 0x30640008  andi        $a0, $v1, 0x8
    ctx->pc = 0x233f40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_233f44:
    // 0x233f44: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x233f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_233f48:
    // 0x233f48: 0x420ba  dsrl        $a0, $a0, 2
    ctx->pc = 0x233f48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 2);
label_233f4c:
    // 0x233f4c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x233f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_233f50:
    // 0x233f50: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x233f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_233f54:
    // 0x233f54: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x233f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
label_233f58:
    // 0x233f58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x233f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_233f5c:
    // 0x233f5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x233f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_233f60:
    // 0x233f60: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x233f60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_233f64:
    // 0x233f64: 0x1000005c  b           . + 4 + (0x5C << 2)
label_233f68:
    if (ctx->pc == 0x233F68u) {
        ctx->pc = 0x233F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F64u;
        // 0x233f68: 0x8fab00ec  lw          $t3, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233F6Cu;
        goto label_233f6c;
    }
    ctx->pc = 0x233F64u;
    {
        const bool branch_taken_0x233f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F64u;
        // 0x233f68: 0x8fab00ec  lw          $t3, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f64) {
            ctx->pc = 0x2340D8u;
            goto label_2340d8;
        }
    }
    ctx->pc = 0x233F6Cu;
label_233f6c:
    // 0x233f6c: 0x8fb000c4  lw          $s0, 0xC4($sp)
    ctx->pc = 0x233f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_233f70:
    // 0x233f70: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x233f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_233f74:
    // 0x233f74: 0x3d02021  addu        $a0, $fp, $s0
    ctx->pc = 0x233f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
label_233f78:
    // 0x233f78: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x233f78u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_233f7c:
    // 0x233f7c: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x233f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_233f80:
    // 0x233f80: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x233f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_233f84:
    // 0x233f84: 0x31878  dsll        $v1, $v1, 1
    ctx->pc = 0x233f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 1);
label_233f88:
    // 0x233f88: 0x30c40002  andi        $a0, $a2, 0x2
    ctx->pc = 0x233f88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
label_233f8c:
    // 0x233f8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x233f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_233f90:
    // 0x233f90: 0x30c50004  andi        $a1, $a2, 0x4
    ctx->pc = 0x233f90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_233f94:
    // 0x233f94: 0x420b8  dsll        $a0, $a0, 2
    ctx->pc = 0x233f94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 2);
label_233f98:
    // 0x233f98: 0x30c30008  andi        $v1, $a2, 0x8
    ctx->pc = 0x233f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
label_233f9c:
    // 0x233f9c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x233f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_233fa0:
    // 0x233fa0: 0x528ba  dsrl        $a1, $a1, 2
    ctx->pc = 0x233fa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 2);
label_233fa4:
    // 0x233fa4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x233fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_233fa8:
    // 0x233fa8: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x233fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
label_233fac:
    // 0x233fac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x233facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_233fb0:
    // 0x233fb0: 0x30c60010  andi        $a2, $a2, 0x10
    ctx->pc = 0x233fb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
label_233fb4:
    // 0x233fb4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x233fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_233fb8:
    // 0x233fb8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x233fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_233fbc:
    // 0x233fbc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x233fbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_233fc0:
    // 0x233fc0: 0x10000045  b           . + 4 + (0x45 << 2)
label_233fc4:
    if (ctx->pc == 0x233FC4u) {
        ctx->pc = 0x233FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233FC0u;
        // 0x233fc4: 0x8fab00ec  lw          $t3, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233FC8u;
        goto label_233fc8;
    }
    ctx->pc = 0x233FC0u;
    {
        const bool branch_taken_0x233fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233FC0u;
        // 0x233fc4: 0x8fab00ec  lw          $t3, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233fc0) {
            ctx->pc = 0x2340D8u;
            goto label_2340d8;
        }
    }
    ctx->pc = 0x233FC8u;
label_233fc8:
    // 0x233fc8: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x233fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_233fcc:
    // 0x233fcc: 0x3c22821  addu        $a1, $fp, $v0
    ctx->pc = 0x233fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_233fd0:
    // 0x233fd0: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x233fd0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_233fd4:
    // 0x233fd4: 0x2402ffe1  addiu       $v0, $zero, -0x1F
    ctx->pc = 0x233fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
label_233fd8:
    // 0x233fd8: 0x30640002  andi        $a0, $v1, 0x2
    ctx->pc = 0x233fd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_233fdc:
    // 0x233fdc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x233fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_233fe0:
    // 0x233fe0: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x233fe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
label_233fe4:
    // 0x233fe4: 0x30650004  andi        $a1, $v1, 0x4
    ctx->pc = 0x233fe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_233fe8:
    // 0x233fe8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x233fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_233fec:
    // 0x233fec: 0x528b8  dsll        $a1, $a1, 2
    ctx->pc = 0x233fecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 2);
label_233ff0:
    // 0x233ff0: 0x30640008  andi        $a0, $v1, 0x8
    ctx->pc = 0x233ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_233ff4:
    // 0x233ff4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x233ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_233ff8:
    // 0x233ff8: 0x420ba  dsrl        $a0, $a0, 2
    ctx->pc = 0x233ff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 2);
label_233ffc:
    // 0x233ffc: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x233ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_234000:
    // 0x234000: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x234000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_234004:
    // 0x234004: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x234004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
label_234008:
    // 0x234008: 0x10000028  b           . + 4 + (0x28 << 2)
label_23400c:
    if (ctx->pc == 0x23400Cu) {
        ctx->pc = 0x23400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234008u;
        // 0x23400c: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234010u;
        goto label_234010;
    }
    ctx->pc = 0x234008u;
    {
        const bool branch_taken_0x234008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234008u;
        // 0x23400c: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234008) {
            ctx->pc = 0x2340ACu;
            goto label_2340ac;
        }
    }
    ctx->pc = 0x234010u;
label_234010:
    // 0x234010: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x234010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_234014:
    // 0x234014: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x234014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_234018:
    // 0x234018: 0x3c32021  addu        $a0, $fp, $v1
    ctx->pc = 0x234018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_23401c:
    // 0x23401c: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x23401cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_234020:
    // 0x234020: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x234020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_234024:
    // 0x234024: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x234024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_234028:
    // 0x234028: 0x31878  dsll        $v1, $v1, 1
    ctx->pc = 0x234028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 1);
label_23402c:
    // 0x23402c: 0x30c40002  andi        $a0, $a2, 0x2
    ctx->pc = 0x23402cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
label_234030:
    // 0x234030: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x234030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_234034:
    // 0x234034: 0x30c50004  andi        $a1, $a2, 0x4
    ctx->pc = 0x234034u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_234038:
    // 0x234038: 0x420b8  dsll        $a0, $a0, 2
    ctx->pc = 0x234038u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 2);
label_23403c:
    // 0x23403c: 0x30c30008  andi        $v1, $a2, 0x8
    ctx->pc = 0x23403cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
label_234040:
    // 0x234040: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x234040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_234044:
    // 0x234044: 0x528ba  dsrl        $a1, $a1, 2
    ctx->pc = 0x234044u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 2);
label_234048:
    // 0x234048: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x234048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_23404c:
    // 0x23404c: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x23404cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
label_234050:
    // 0x234050: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x234050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_234054:
    // 0x234054: 0x30c60010  andi        $a2, $a2, 0x10
    ctx->pc = 0x234054u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
label_234058:
    // 0x234058: 0x10000014  b           . + 4 + (0x14 << 2)
label_23405c:
    if (ctx->pc == 0x23405Cu) {
        ctx->pc = 0x23405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234058u;
        // 0x23405c: 0x461025  or          $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234060u;
        goto label_234060;
    }
    ctx->pc = 0x234058u;
    {
        const bool branch_taken_0x234058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234058u;
        // 0x23405c: 0x461025  or          $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234058) {
            ctx->pc = 0x2340ACu;
            goto label_2340ac;
        }
    }
    ctx->pc = 0x234060u;
label_234060:
    // 0x234060: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x234060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_234064:
    // 0x234064: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x234064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_234068:
    // 0x234068: 0x3c52021  addu        $a0, $fp, $a1
    ctx->pc = 0x234068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_23406c:
    // 0x23406c: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x23406cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_234070:
    // 0x234070: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x234070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_234074:
    // 0x234074: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x234074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_234078:
    // 0x234078: 0x31878  dsll        $v1, $v1, 1
    ctx->pc = 0x234078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 1);
label_23407c:
    // 0x23407c: 0x30a40002  andi        $a0, $a1, 0x2
    ctx->pc = 0x23407cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_234080:
    // 0x234080: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x234080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_234084:
    // 0x234084: 0x420f8  dsll        $a0, $a0, 3
    ctx->pc = 0x234084u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 3);
label_234088:
    // 0x234088: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x234088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
label_23408c:
    // 0x23408c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x23408cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_234090:
    // 0x234090: 0x30a40010  andi        $a0, $a1, 0x10
    ctx->pc = 0x234090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
label_234094:
    // 0x234094: 0x318ba  dsrl        $v1, $v1, 2
    ctx->pc = 0x234094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 2);
label_234098:
    // 0x234098: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x234098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23409c:
    // 0x23409c: 0x30a50008  andi        $a1, $a1, 0x8
    ctx->pc = 0x23409cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
label_2340a0:
    // 0x2340a0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2340a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_2340a4:
    // 0x2340a4: 0x420ba  dsrl        $a0, $a0, 2
    ctx->pc = 0x2340a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 2);
label_2340a8:
    // 0x2340a8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2340a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2340ac:
    // 0x2340ac: 0x38420018  xori        $v0, $v0, 0x18
    ctx->pc = 0x2340acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)24);
label_2340b0:
    // 0x2340b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2340b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2340b4:
    // 0x2340b4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2340b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2340b8:
    // 0x2340b8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2340bc:
    if (ctx->pc == 0x2340BCu) {
        ctx->pc = 0x2340BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2340B8u;
        // 0x2340bc: 0x8fab00ec  lw          $t3, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2340C0u;
        goto label_2340c0;
    }
    ctx->pc = 0x2340B8u;
    {
        const bool branch_taken_0x2340b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2340BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2340B8u;
        // 0x2340bc: 0x8fab00ec  lw          $t3, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2340b8) {
            ctx->pc = 0x2340D8u;
            goto label_2340d8;
        }
    }
    ctx->pc = 0x2340C0u;
label_2340c0:
    // 0x2340c0: 0x8fa600c4  lw          $a2, 0xC4($sp)
    ctx->pc = 0x2340c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_2340c4:
    // 0x2340c4: 0x3c61021  addu        $v0, $fp, $a2
    ctx->pc = 0x2340c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
label_2340c8:
    // 0x2340c8: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2340c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_2340cc:
    // 0x2340cc: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x2340ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_2340d0:
    // 0x2340d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2340d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2340d4:
    // 0x2340d4: 0x8fab00ec  lw          $t3, 0xEC($sp)
    ctx->pc = 0x2340d4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_2340d8:
    // 0x2340d8: 0x8fa700c4  lw          $a3, 0xC4($sp)
    ctx->pc = 0x2340d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_2340dc:
    // 0x2340dc: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2340dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_2340e0:
    // 0x2340e0: 0x3c71821  addu        $v1, $fp, $a3
    ctx->pc = 0x2340e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 7)));
label_2340e4:
    // 0x2340e4: 0xafab00ec  sw          $t3, 0xEC($sp)
    ctx->pc = 0x2340e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 11));
label_2340e8:
    // 0x2340e8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2340e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_2340ec:
    // 0x2340ec: 0x8fac00dc  lw          $t4, 0xDC($sp)
    ctx->pc = 0x2340ecu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_2340f0:
    // 0x2340f0: 0x16c102a  slt         $v0, $t3, $t4
    ctx->pc = 0x2340f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
label_2340f4:
    // 0x2340f4: 0x1440fed2  bnez        $v0, . + 4 + (-0x12E << 2)
label_2340f8:
    if (ctx->pc == 0x2340F8u) {
        ctx->pc = 0x2340F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2340F4u;
        // 0x2340f8: 0x8fa300ec  lw          $v1, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2340FCu;
        goto label_2340fc;
    }
    ctx->pc = 0x2340F4u;
    {
        const bool branch_taken_0x2340f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2340F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2340F4u;
        // 0x2340f8: 0x8fa300ec  lw          $v1, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2340f4) {
            ctx->pc = 0x233C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233c40;
        }
    }
    ctx->pc = 0x2340FCu;
label_2340fc:
    // 0x2340fc: 0x8fb00100  lw          $s0, 0x100($sp)
    ctx->pc = 0x2340fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_234100:
    // 0x234100: 0x51a00001  beql        $t5, $zero, . + 4 + (0x1 << 2)
label_234104:
    if (ctx->pc == 0x234104u) {
        ctx->pc = 0x234104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234100u;
        // 0x234104: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x234108u;
        goto label_234108;
    }
    ctx->pc = 0x234100u;
    {
        const bool branch_taken_0x234100 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x234100) {
            ctx->pc = 0x234104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234100u;
            // 0x234104: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x234108u;
            goto label_234108;
        }
    }
    ctx->pc = 0x234108u;
label_234108:
    // 0x234108: 0x103980  sll         $a3, $s0, 6
    ctx->pc = 0x234108u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_23410c:
    // 0x23410c: 0xed001b  divu        $zero, $a3, $t5
    ctx->pc = 0x23410cu;
    { uint32_t divisor = GPR_U32(ctx, 13); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
label_234110:
    // 0x234110: 0x1012  mflo        $v0
    ctx->pc = 0x234110u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_234114:
    // 0x234114: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x234114u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_234118:
    // 0x234118: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_23411c:
    if (ctx->pc == 0x23411Cu) {
        ctx->pc = 0x23411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234118u;
        // 0x23411c: 0x8fa20140  lw          $v0, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234120u;
        goto label_234120;
    }
    ctx->pc = 0x234118u;
    {
        const bool branch_taken_0x234118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234118u;
        // 0x23411c: 0x8fa20140  lw          $v0, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234118) {
            ctx->pc = 0x234190u;
            goto label_234190;
        }
    }
    ctx->pc = 0x234120u;
label_234120:
    // 0x234120: 0xf7001b  divu        $zero, $a3, $s7
    ctx->pc = 0x234120u;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
label_234124:
    // 0x234124: 0x1012c0  sll         $v0, $s0, 11
    ctx->pc = 0x234124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 11));
label_234128:
    // 0x234128: 0x51a00001  beql        $t5, $zero, . + 4 + (0x1 << 2)
label_23412c:
    if (ctx->pc == 0x23412Cu) {
        ctx->pc = 0x23412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234128u;
        // 0x23412c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x234130u;
        goto label_234130;
    }
    ctx->pc = 0x234128u;
    {
        const bool branch_taken_0x234128 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x234128) {
            ctx->pc = 0x23412Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234128u;
            // 0x23412c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x234130u;
            goto label_234130;
        }
    }
    ctx->pc = 0x234130u;
label_234130:
    // 0x234130: 0x1812  mflo        $v1
    ctx->pc = 0x234130u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_234134:
    // 0x234134: 0x1b7001b  divu        $zero, $t5, $s7
    ctx->pc = 0x234134u;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
label_234138:
    // 0x234138: 0x2012  mflo        $a0
    ctx->pc = 0x234138u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_23413c:
    // 0x23413c: 0x4d001b  divu        $zero, $v0, $t5
    ctx->pc = 0x23413cu;
    { uint32_t divisor = GPR_U32(ctx, 13); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_234140:
    // 0x234140: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x234140u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_234144:
    // 0x234144: 0x2c52824  and         $a1, $s6, $a1
    ctx->pc = 0x234144u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & GPR_U64(ctx, 5));
label_234148:
    // 0x234148: 0x1012  mflo        $v0
    ctx->pc = 0x234148u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_23414c:
    // 0x23414c: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x23414cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_234150:
    // 0x234150: 0x3012  mflo        $a2
    ctx->pc = 0x234150u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_234154:
    // 0x234154: 0xf7001b  divu        $zero, $a3, $s7
    ctx->pc = 0x234154u;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
label_234158:
    // 0x234158: 0x3812  mflo        $a3
    ctx->pc = 0x234158u;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_23415c:
    // 0x23415c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23415cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_234160:
    // 0x234160: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x234160u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_234164:
    // 0x234164: 0x2c31824  and         $v1, $s6, $v1
    ctx->pc = 0x234164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
label_234168:
    // 0x234168: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x234168u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_23416c:
    // 0x23416c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23416cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_234170:
    // 0x234170: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x234170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
label_234174:
    // 0x234174: 0x4012  mflo        $t0
    ctx->pc = 0x234174u;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_234178:
    // 0x234178: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x234178u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_23417c:
    // 0x23417c: 0x1812  mflo        $v1
    ctx->pc = 0x23417cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_234180:
    // 0x234180: 0xa82818  mult        $a1, $a1, $t0
    ctx->pc = 0x234180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_234184:
    // 0x234184: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x234184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_234188:
    // 0x234188: 0x43b025  or          $s6, $v0, $v1
    ctx->pc = 0x234188u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23418c:
    // 0x23418c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x23418cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_234190:
    // 0x234190: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
label_234194:
    if (ctx->pc == 0x234194u) {
        ctx->pc = 0x234194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234190u;
        // 0x234194: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234198u;
        goto label_234198;
    }
    ctx->pc = 0x234190u;
    {
        const bool branch_taken_0x234190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234190u;
        // 0x234194: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234190) {
            ctx->pc = 0x234348u;
            goto label_234348;
        }
    }
    ctx->pc = 0x234198u;
label_234198:
    // 0x234198: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x234198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_23419c:
    // 0x23419c: 0x2442acc0  addiu       $v0, $v0, -0x5340
    ctx->pc = 0x23419cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945984));
label_2341a0:
    // 0x2341a0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2341a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2341a4:
    // 0x2341a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2341a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2341a8:
    // 0x2341a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2341a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2341ac:
    // 0x2341ac: 0x800008  jr          $a0
label_2341b0:
    if (ctx->pc == 0x2341B0u) {
        ctx->pc = 0x2341B4u;
        goto label_2341b4;
    }
    ctx->pc = 0x2341ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2341ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2341B4u;
label_2341b4:
    // 0x2341b4: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x2341b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_2341b8:
    // 0x2341b8: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x2341b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_2341bc:
    // 0x2341bc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2341bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2341c0:
    // 0x2341c0: 0x2c31824  and         $v1, $s6, $v1
    ctx->pc = 0x2341c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
label_2341c4:
    // 0x2341c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2341c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2341c8:
    // 0x2341c8: 0x32c40002  andi        $a0, $s6, 0x2
    ctx->pc = 0x2341c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
label_2341cc:
    // 0x2341cc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2341ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2341d0:
    // 0x2341d0: 0x32c20004  andi        $v0, $s6, 0x4
    ctx->pc = 0x2341d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
label_2341d4:
    // 0x2341d4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2341d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2341d8:
    // 0x2341d8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2341d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_2341dc:
    // 0x2341dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2341dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2341e0:
    // 0x2341e0: 0x32c40010  andi        $a0, $s6, 0x10
    ctx->pc = 0x2341e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)16);
label_2341e4:
    // 0x2341e4: 0x32c20008  andi        $v0, $s6, 0x8
    ctx->pc = 0x2341e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)8);
label_2341e8:
    // 0x2341e8: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x2341e8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
label_2341ec:
    // 0x2341ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2341ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2341f0:
    // 0x2341f0: 0x10000056  b           . + 4 + (0x56 << 2)
label_2341f4:
    if (ctx->pc == 0x2341F4u) {
        ctx->pc = 0x2341F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2341F0u;
        // 0x2341f4: 0x641025  or          $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2341F8u;
        goto label_2341f8;
    }
    ctx->pc = 0x2341F0u;
    {
        const bool branch_taken_0x2341f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2341F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2341F0u;
        // 0x2341f4: 0x641025  or          $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2341f0) {
            ctx->pc = 0x23434Cu;
            goto label_23434c;
        }
    }
    ctx->pc = 0x2341F8u;
label_2341f8:
    // 0x2341f8: 0x2403ffe1  addiu       $v1, $zero, -0x1F
    ctx->pc = 0x2341f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
label_2341fc:
    // 0x2341fc: 0x32c20002  andi        $v0, $s6, 0x2
    ctx->pc = 0x2341fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
label_234200:
    // 0x234200: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x234200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_234204:
    // 0x234204: 0x2c31824  and         $v1, $s6, $v1
    ctx->pc = 0x234204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
label_234208:
    // 0x234208: 0x32c40004  andi        $a0, $s6, 0x4
    ctx->pc = 0x234208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
label_23420c:
    // 0x23420c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23420cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_234210:
    // 0x234210: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x234210u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_234214:
    // 0x234214: 0x32c50008  andi        $a1, $s6, 0x8
    ctx->pc = 0x234214u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)8);
label_234218:
    // 0x234218: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x234218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_23421c:
    // 0x23421c: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x23421cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
label_234220:
    // 0x234220: 0x32c20010  andi        $v0, $s6, 0x10
    ctx->pc = 0x234220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)16);
label_234224:
    // 0x234224: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x234224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_234228:
    // 0x234228: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x234228u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_23422c:
    // 0x23422c: 0x10000047  b           . + 4 + (0x47 << 2)
label_234230:
    if (ctx->pc == 0x234230u) {
        ctx->pc = 0x234230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23422Cu;
        // 0x234230: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234234u;
        goto label_234234;
    }
    ctx->pc = 0x23422Cu;
    {
        const bool branch_taken_0x23422c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23422Cu;
        // 0x234230: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23422c) {
            ctx->pc = 0x23434Cu;
            goto label_23434c;
        }
    }
    ctx->pc = 0x234234u;
label_234234:
    // 0x234234: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x234234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_234238:
    // 0x234238: 0x32c30001  andi        $v1, $s6, 0x1
    ctx->pc = 0x234238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_23423c:
    // 0x23423c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x23423cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_234240:
    // 0x234240: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x234240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
label_234244:
    // 0x234244: 0x32c40002  andi        $a0, $s6, 0x2
    ctx->pc = 0x234244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
label_234248:
    // 0x234248: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x234248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23424c:
    // 0x23424c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23424cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_234250:
    // 0x234250: 0x32c30004  andi        $v1, $s6, 0x4
    ctx->pc = 0x234250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
label_234254:
    // 0x234254: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x234254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_234258:
    // 0x234258: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x234258u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_23425c:
    // 0x23425c: 0x32c40008  andi        $a0, $s6, 0x8
    ctx->pc = 0x23425cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)8);
label_234260:
    // 0x234260: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x234260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_234264:
    // 0x234264: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x234264u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_234268:
    // 0x234268: 0x32c30010  andi        $v1, $s6, 0x10
    ctx->pc = 0x234268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)16);
label_23426c:
    // 0x23426c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x23426cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_234270:
    // 0x234270: 0x10000036  b           . + 4 + (0x36 << 2)
label_234274:
    if (ctx->pc == 0x234274u) {
        ctx->pc = 0x234274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234270u;
        // 0x234274: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234278u;
        goto label_234278;
    }
    ctx->pc = 0x234270u;
    {
        const bool branch_taken_0x234270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234270u;
        // 0x234274: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234270) {
            ctx->pc = 0x23434Cu;
            goto label_23434c;
        }
    }
    ctx->pc = 0x234278u;
label_234278:
    // 0x234278: 0x2403ffe1  addiu       $v1, $zero, -0x1F
    ctx->pc = 0x234278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
label_23427c:
    // 0x23427c: 0x32c20002  andi        $v0, $s6, 0x2
    ctx->pc = 0x23427cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
label_234280:
    // 0x234280: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x234280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_234284:
    // 0x234284: 0x2c31824  and         $v1, $s6, $v1
    ctx->pc = 0x234284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
label_234288:
    // 0x234288: 0x32c40004  andi        $a0, $s6, 0x4
    ctx->pc = 0x234288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
label_23428c:
    // 0x23428c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23428cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_234290:
    // 0x234290: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x234290u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_234294:
    // 0x234294: 0x32c50008  andi        $a1, $s6, 0x8
    ctx->pc = 0x234294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)8);
label_234298:
    // 0x234298: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x234298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_23429c:
    // 0x23429c: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x23429cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
label_2342a0:
    // 0x2342a0: 0x32c20010  andi        $v0, $s6, 0x10
    ctx->pc = 0x2342a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)16);
label_2342a4:
    // 0x2342a4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2342a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_2342a8:
    // 0x2342a8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2342a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_2342ac:
    // 0x2342ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2342acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2342b0:
    // 0x2342b0: 0x10000026  b           . + 4 + (0x26 << 2)
label_2342b4:
    if (ctx->pc == 0x2342B4u) {
        ctx->pc = 0x2342B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342B0u;
        // 0x2342b4: 0x38620018  xori        $v0, $v1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2342B8u;
        goto label_2342b8;
    }
    ctx->pc = 0x2342B0u;
    {
        const bool branch_taken_0x2342b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2342B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342B0u;
        // 0x2342b4: 0x38620018  xori        $v0, $v1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2342b0) {
            ctx->pc = 0x23434Cu;
            goto label_23434c;
        }
    }
    ctx->pc = 0x2342B8u;
label_2342b8:
    // 0x2342b8: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x2342b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_2342bc:
    // 0x2342bc: 0x32c30001  andi        $v1, $s6, 0x1
    ctx->pc = 0x2342bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_2342c0:
    // 0x2342c0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2342c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2342c4:
    // 0x2342c4: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x2342c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
label_2342c8:
    // 0x2342c8: 0x32c40002  andi        $a0, $s6, 0x2
    ctx->pc = 0x2342c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
label_2342cc:
    // 0x2342cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2342ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2342d0:
    // 0x2342d0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2342d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2342d4:
    // 0x2342d4: 0x32c30004  andi        $v1, $s6, 0x4
    ctx->pc = 0x2342d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
label_2342d8:
    // 0x2342d8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2342d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2342dc:
    // 0x2342dc: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2342dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_2342e0:
    // 0x2342e0: 0x32c40008  andi        $a0, $s6, 0x8
    ctx->pc = 0x2342e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)8);
label_2342e4:
    // 0x2342e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2342e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2342e8:
    // 0x2342e8: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x2342e8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_2342ec:
    // 0x2342ec: 0x32c30010  andi        $v1, $s6, 0x10
    ctx->pc = 0x2342ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)16);
label_2342f0:
    // 0x2342f0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2342f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2342f4:
    // 0x2342f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2342f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2342f8:
    // 0x2342f8: 0x10000014  b           . + 4 + (0x14 << 2)
label_2342fc:
    if (ctx->pc == 0x2342FCu) {
        ctx->pc = 0x2342FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342F8u;
        // 0x2342fc: 0x38420018  xori        $v0, $v0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = 0x234300u;
        goto label_234300;
    }
    ctx->pc = 0x2342F8u;
    {
        const bool branch_taken_0x2342f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2342FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342F8u;
        // 0x2342fc: 0x38420018  xori        $v0, $v0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2342f8) {
            ctx->pc = 0x23434Cu;
            goto label_23434c;
        }
    }
    ctx->pc = 0x234300u;
label_234300:
    // 0x234300: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x234300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_234304:
    // 0x234304: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x234304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_234308:
    // 0x234308: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x234308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_23430c:
    // 0x23430c: 0x2c31824  and         $v1, $s6, $v1
    ctx->pc = 0x23430cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
label_234310:
    // 0x234310: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x234310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_234314:
    // 0x234314: 0x32c40002  andi        $a0, $s6, 0x2
    ctx->pc = 0x234314u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
label_234318:
    // 0x234318: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x234318u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_23431c:
    // 0x23431c: 0x32c20004  andi        $v0, $s6, 0x4
    ctx->pc = 0x23431cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
label_234320:
    // 0x234320: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x234320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_234324:
    // 0x234324: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x234324u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_234328:
    // 0x234328: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x234328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_23432c:
    // 0x23432c: 0x32c40010  andi        $a0, $s6, 0x10
    ctx->pc = 0x23432cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)16);
label_234330:
    // 0x234330: 0x32c20008  andi        $v0, $s6, 0x8
    ctx->pc = 0x234330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)8);
label_234334:
    // 0x234334: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x234334u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
label_234338:
    // 0x234338: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x234338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_23433c:
    // 0x23433c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x23433cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_234340:
    // 0x234340: 0x10000002  b           . + 4 + (0x2 << 2)
label_234344:
    if (ctx->pc == 0x234344u) {
        ctx->pc = 0x234344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234340u;
        // 0x234344: 0x38620018  xori        $v0, $v1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = 0x234348u;
        goto label_234348;
    }
    ctx->pc = 0x234340u;
    {
        const bool branch_taken_0x234340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234340u;
        // 0x234344: 0x38620018  xori        $v0, $v1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x234340) {
            ctx->pc = 0x23434Cu;
            goto label_23434c;
        }
    }
    ctx->pc = 0x234348u;
label_234348:
    // 0x234348: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x234348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23434c:
    // 0x23434c: 0x8fa500d4  lw          $a1, 0xD4($sp)
    ctx->pc = 0x23434cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_234350:
    // 0x234350: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x234350u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_234354:
    // 0x234354: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x234354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_234358:
    // 0x234358: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x234358u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_23435c:
    // 0x23435c: 0x8fab0124  lw          $t3, 0x124($sp)
    ctx->pc = 0x23435cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_234360:
    // 0x234360: 0x8fb00120  lw          $s0, 0x120($sp)
    ctx->pc = 0x234360u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_234364:
    // 0x234364: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x234364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_234368:
    // 0x234368: 0xb8880  sll         $s1, $t3, 2
    ctx->pc = 0x234368u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_23436c:
    // 0x23436c: 0xdc64fff8  ld          $a0, -0x8($v1)
    ctx->pc = 0x23436cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_234370:
    // 0x234370: 0xdfac0148  ld          $t4, 0x148($sp)
    ctx->pc = 0x234370u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 29), 328)));
label_234374:
    // 0x234374: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x234374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_234378:
    // 0x234378: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x234378u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23437c:
    // 0x23437c: 0x421b8  dsll        $a0, $a0, 6
    ctx->pc = 0x23437cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
label_234380:
    // 0x234380: 0xc283e  dsrl32      $a1, $t4, 0
    ctx->pc = 0x234380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) >> (32 + 0));
label_234384:
    // 0x234384: 0xc07db0a  jal         func_1F6C28
label_234388:
    if (ctx->pc == 0x234388u) {
        ctx->pc = 0x234388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234384u;
        // 0x234388: 0x7fae0170  sq          $t6, 0x170($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23438Cu;
        goto label_23438c;
    }
    ctx->pc = 0x234384u;
    SET_GPR_U32(ctx, 31, 0x23438Cu);
    ctx->pc = 0x234388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234384u;
    // 0x234388: 0x7fae0170  sq          $t6, 0x170($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6C28u, 0x234384u, 0x23438Cu)) {
        return;
    }
    ctx->pc = 0x23438Cu;
label_23438c:
    // 0x23438c: 0x7bae0170  lq          $t6, 0x170($sp)
    ctx->pc = 0x23438cu;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_234390:
    // 0x234390: 0x3b11821  addu        $v1, $sp, $s1
    ctx->pc = 0x234390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
label_234394:
    // 0x234394: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x234394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234398:
    // 0x234398: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
label_23439c:
    if (ctx->pc == 0x23439Cu) {
        ctx->pc = 0x23439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234398u;
        // 0x23439c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2343A0u;
        goto label_2343a0;
    }
    ctx->pc = 0x234398u;
    {
        const bool branch_taken_0x234398 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x234398) {
            ctx->pc = 0x23439Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234398u;
            // 0x23439c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2343A0u;
            goto label_2343a0;
        }
    }
    ctx->pc = 0x2343A0u;
label_2343a0:
    // 0x2343a0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2343a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2343a4:
    // 0x2343a4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2343a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_2343a8:
    // 0x2343a8: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x2343a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2343ac:
    // 0x2343ac: 0xae001b  divu        $zero, $a1, $t6
    ctx->pc = 0x2343acu;
    { uint32_t divisor = GPR_U32(ctx, 14); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_2343b0:
    // 0x2343b0: 0x2812  mflo        $a1
    ctx->pc = 0x2343b0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_2343b4:
    // 0x2343b4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2343b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_2343b8:
    // 0x2343b8: 0xc07e4e4  jal         func_1F9390
label_2343bc:
    if (ctx->pc == 0x2343BCu) {
        ctx->pc = 0x2343BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343B8u;
        // 0x2343bc: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2343C0u;
        goto label_2343c0;
    }
    ctx->pc = 0x2343B8u;
    SET_GPR_U32(ctx, 31, 0x2343C0u);
    ctx->pc = 0x2343BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2343B8u;
    // 0x2343bc: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x2343B8u, 0x2343C0u)) {
        return;
    }
    ctx->pc = 0x2343C0u;
label_2343c0:
    // 0x2343c0: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x2343c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_2343c4:
    // 0x2343c4: 0x7bb10220  lq          $s1, 0x220($sp)
    ctx->pc = 0x2343c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_2343c8:
    // 0x2343c8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2343c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2343cc:
    // 0x2343cc: 0x1081bc  dsll32      $s0, $s0, 6
    ctx->pc = 0x2343ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 6));
label_2343d0:
    // 0x2343d0: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x2343d0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_2343d4:
    // 0x2343d4: 0x7bb20210  lq          $s2, 0x210($sp)
    ctx->pc = 0x2343d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_2343d8:
    // 0x2343d8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2343d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_2343dc:
    // 0x2343dc: 0x7bb00230  lq          $s0, 0x230($sp)
    ctx->pc = 0x2343dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_2343e0:
    // 0x2343e0: 0x7bb30200  lq          $s3, 0x200($sp)
    ctx->pc = 0x2343e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_2343e4:
    // 0x2343e4: 0x7bb401f0  lq          $s4, 0x1F0($sp)
    ctx->pc = 0x2343e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_2343e8:
    // 0x2343e8: 0x7bb501e0  lq          $s5, 0x1E0($sp)
    ctx->pc = 0x2343e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_2343ec:
    // 0x2343ec: 0x7bb601d0  lq          $s6, 0x1D0($sp)
    ctx->pc = 0x2343ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_2343f0:
    // 0x2343f0: 0x7bb701c0  lq          $s7, 0x1C0($sp)
    ctx->pc = 0x2343f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_2343f4:
    // 0x2343f4: 0x7bbe01b0  lq          $fp, 0x1B0($sp)
    ctx->pc = 0x2343f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_2343f8:
    // 0x2343f8: 0xdfbf01a0  ld          $ra, 0x1A0($sp)
    ctx->pc = 0x2343f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
label_2343fc:
    // 0x2343fc: 0x3e00008  jr          $ra
label_234400:
    if (ctx->pc == 0x234400u) {
        ctx->pc = 0x234400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343FCu;
        // 0x234400: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234404u;
        goto label_234404;
    }
    ctx->pc = 0x2343FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343FCu;
        // 0x234400: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2343FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234404u;
label_234404:
    // 0x234404: 0x0  nop
    ctx->pc = 0x234404u;
    // NOP
    ctx->pc = 0x234408u;
}
