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

// Function: sub_00120200
// Address: 0x120200 - 0x120b98
void sub_00120200_0x120200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120200_0x120200");
#endif

    switch (ctx->pc) {
        case 0x120200u: goto label_120200;
        case 0x120204u: goto label_120204;
        case 0x120208u: goto label_120208;
        case 0x12020cu: goto label_12020c;
        case 0x120210u: goto label_120210;
        case 0x120214u: goto label_120214;
        case 0x120218u: goto label_120218;
        case 0x12021cu: goto label_12021c;
        case 0x120220u: goto label_120220;
        case 0x120224u: goto label_120224;
        case 0x120228u: goto label_120228;
        case 0x12022cu: goto label_12022c;
        case 0x120230u: goto label_120230;
        case 0x120234u: goto label_120234;
        case 0x120238u: goto label_120238;
        case 0x12023cu: goto label_12023c;
        case 0x120240u: goto label_120240;
        case 0x120244u: goto label_120244;
        case 0x120248u: goto label_120248;
        case 0x12024cu: goto label_12024c;
        case 0x120250u: goto label_120250;
        case 0x120254u: goto label_120254;
        case 0x120258u: goto label_120258;
        case 0x12025cu: goto label_12025c;
        case 0x120260u: goto label_120260;
        case 0x120264u: goto label_120264;
        case 0x120268u: goto label_120268;
        case 0x12026cu: goto label_12026c;
        case 0x120270u: goto label_120270;
        case 0x120274u: goto label_120274;
        case 0x120278u: goto label_120278;
        case 0x12027cu: goto label_12027c;
        case 0x120280u: goto label_120280;
        case 0x120284u: goto label_120284;
        case 0x120288u: goto label_120288;
        case 0x12028cu: goto label_12028c;
        case 0x120290u: goto label_120290;
        case 0x120294u: goto label_120294;
        case 0x120298u: goto label_120298;
        case 0x12029cu: goto label_12029c;
        case 0x1202a0u: goto label_1202a0;
        case 0x1202a4u: goto label_1202a4;
        case 0x1202a8u: goto label_1202a8;
        case 0x1202acu: goto label_1202ac;
        case 0x1202b0u: goto label_1202b0;
        case 0x1202b4u: goto label_1202b4;
        case 0x1202b8u: goto label_1202b8;
        case 0x1202bcu: goto label_1202bc;
        case 0x1202c0u: goto label_1202c0;
        case 0x1202c4u: goto label_1202c4;
        case 0x1202c8u: goto label_1202c8;
        case 0x1202ccu: goto label_1202cc;
        case 0x1202d0u: goto label_1202d0;
        case 0x1202d4u: goto label_1202d4;
        case 0x1202d8u: goto label_1202d8;
        case 0x1202dcu: goto label_1202dc;
        case 0x1202e0u: goto label_1202e0;
        case 0x1202e4u: goto label_1202e4;
        case 0x1202e8u: goto label_1202e8;
        case 0x1202ecu: goto label_1202ec;
        case 0x1202f0u: goto label_1202f0;
        case 0x1202f4u: goto label_1202f4;
        case 0x1202f8u: goto label_1202f8;
        case 0x1202fcu: goto label_1202fc;
        case 0x120300u: goto label_120300;
        case 0x120304u: goto label_120304;
        case 0x120308u: goto label_120308;
        case 0x12030cu: goto label_12030c;
        case 0x120310u: goto label_120310;
        case 0x120314u: goto label_120314;
        case 0x120318u: goto label_120318;
        case 0x12031cu: goto label_12031c;
        case 0x120320u: goto label_120320;
        case 0x120324u: goto label_120324;
        case 0x120328u: goto label_120328;
        case 0x12032cu: goto label_12032c;
        case 0x120330u: goto label_120330;
        case 0x120334u: goto label_120334;
        case 0x120338u: goto label_120338;
        case 0x12033cu: goto label_12033c;
        case 0x120340u: goto label_120340;
        case 0x120344u: goto label_120344;
        case 0x120348u: goto label_120348;
        case 0x12034cu: goto label_12034c;
        case 0x120350u: goto label_120350;
        case 0x120354u: goto label_120354;
        case 0x120358u: goto label_120358;
        case 0x12035cu: goto label_12035c;
        case 0x120360u: goto label_120360;
        case 0x120364u: goto label_120364;
        case 0x120368u: goto label_120368;
        case 0x12036cu: goto label_12036c;
        case 0x120370u: goto label_120370;
        case 0x120374u: goto label_120374;
        case 0x120378u: goto label_120378;
        case 0x12037cu: goto label_12037c;
        case 0x120380u: goto label_120380;
        case 0x120384u: goto label_120384;
        case 0x120388u: goto label_120388;
        case 0x12038cu: goto label_12038c;
        case 0x120390u: goto label_120390;
        case 0x120394u: goto label_120394;
        case 0x120398u: goto label_120398;
        case 0x12039cu: goto label_12039c;
        case 0x1203a0u: goto label_1203a0;
        case 0x1203a4u: goto label_1203a4;
        case 0x1203a8u: goto label_1203a8;
        case 0x1203acu: goto label_1203ac;
        case 0x1203b0u: goto label_1203b0;
        case 0x1203b4u: goto label_1203b4;
        case 0x1203b8u: goto label_1203b8;
        case 0x1203bcu: goto label_1203bc;
        case 0x1203c0u: goto label_1203c0;
        case 0x1203c4u: goto label_1203c4;
        case 0x1203c8u: goto label_1203c8;
        case 0x1203ccu: goto label_1203cc;
        case 0x1203d0u: goto label_1203d0;
        case 0x1203d4u: goto label_1203d4;
        case 0x1203d8u: goto label_1203d8;
        case 0x1203dcu: goto label_1203dc;
        case 0x1203e0u: goto label_1203e0;
        case 0x1203e4u: goto label_1203e4;
        case 0x1203e8u: goto label_1203e8;
        case 0x1203ecu: goto label_1203ec;
        case 0x1203f0u: goto label_1203f0;
        case 0x1203f4u: goto label_1203f4;
        case 0x1203f8u: goto label_1203f8;
        case 0x1203fcu: goto label_1203fc;
        case 0x120400u: goto label_120400;
        case 0x120404u: goto label_120404;
        case 0x120408u: goto label_120408;
        case 0x12040cu: goto label_12040c;
        case 0x120410u: goto label_120410;
        case 0x120414u: goto label_120414;
        case 0x120418u: goto label_120418;
        case 0x12041cu: goto label_12041c;
        case 0x120420u: goto label_120420;
        case 0x120424u: goto label_120424;
        case 0x120428u: goto label_120428;
        case 0x12042cu: goto label_12042c;
        case 0x120430u: goto label_120430;
        case 0x120434u: goto label_120434;
        case 0x120438u: goto label_120438;
        case 0x12043cu: goto label_12043c;
        case 0x120440u: goto label_120440;
        case 0x120444u: goto label_120444;
        case 0x120448u: goto label_120448;
        case 0x12044cu: goto label_12044c;
        case 0x120450u: goto label_120450;
        case 0x120454u: goto label_120454;
        case 0x120458u: goto label_120458;
        case 0x12045cu: goto label_12045c;
        case 0x120460u: goto label_120460;
        case 0x120464u: goto label_120464;
        case 0x120468u: goto label_120468;
        case 0x12046cu: goto label_12046c;
        case 0x120470u: goto label_120470;
        case 0x120474u: goto label_120474;
        case 0x120478u: goto label_120478;
        case 0x12047cu: goto label_12047c;
        case 0x120480u: goto label_120480;
        case 0x120484u: goto label_120484;
        case 0x120488u: goto label_120488;
        case 0x12048cu: goto label_12048c;
        case 0x120490u: goto label_120490;
        case 0x120494u: goto label_120494;
        case 0x120498u: goto label_120498;
        case 0x12049cu: goto label_12049c;
        case 0x1204a0u: goto label_1204a0;
        case 0x1204a4u: goto label_1204a4;
        case 0x1204a8u: goto label_1204a8;
        case 0x1204acu: goto label_1204ac;
        case 0x1204b0u: goto label_1204b0;
        case 0x1204b4u: goto label_1204b4;
        case 0x1204b8u: goto label_1204b8;
        case 0x1204bcu: goto label_1204bc;
        case 0x1204c0u: goto label_1204c0;
        case 0x1204c4u: goto label_1204c4;
        case 0x1204c8u: goto label_1204c8;
        case 0x1204ccu: goto label_1204cc;
        case 0x1204d0u: goto label_1204d0;
        case 0x1204d4u: goto label_1204d4;
        case 0x1204d8u: goto label_1204d8;
        case 0x1204dcu: goto label_1204dc;
        case 0x1204e0u: goto label_1204e0;
        case 0x1204e4u: goto label_1204e4;
        case 0x1204e8u: goto label_1204e8;
        case 0x1204ecu: goto label_1204ec;
        case 0x1204f0u: goto label_1204f0;
        case 0x1204f4u: goto label_1204f4;
        case 0x1204f8u: goto label_1204f8;
        case 0x1204fcu: goto label_1204fc;
        case 0x120500u: goto label_120500;
        case 0x120504u: goto label_120504;
        case 0x120508u: goto label_120508;
        case 0x12050cu: goto label_12050c;
        case 0x120510u: goto label_120510;
        case 0x120514u: goto label_120514;
        case 0x120518u: goto label_120518;
        case 0x12051cu: goto label_12051c;
        case 0x120520u: goto label_120520;
        case 0x120524u: goto label_120524;
        case 0x120528u: goto label_120528;
        case 0x12052cu: goto label_12052c;
        case 0x120530u: goto label_120530;
        case 0x120534u: goto label_120534;
        case 0x120538u: goto label_120538;
        case 0x12053cu: goto label_12053c;
        case 0x120540u: goto label_120540;
        case 0x120544u: goto label_120544;
        case 0x120548u: goto label_120548;
        case 0x12054cu: goto label_12054c;
        case 0x120550u: goto label_120550;
        case 0x120554u: goto label_120554;
        case 0x120558u: goto label_120558;
        case 0x12055cu: goto label_12055c;
        case 0x120560u: goto label_120560;
        case 0x120564u: goto label_120564;
        case 0x120568u: goto label_120568;
        case 0x12056cu: goto label_12056c;
        case 0x120570u: goto label_120570;
        case 0x120574u: goto label_120574;
        case 0x120578u: goto label_120578;
        case 0x12057cu: goto label_12057c;
        case 0x120580u: goto label_120580;
        case 0x120584u: goto label_120584;
        case 0x120588u: goto label_120588;
        case 0x12058cu: goto label_12058c;
        case 0x120590u: goto label_120590;
        case 0x120594u: goto label_120594;
        case 0x120598u: goto label_120598;
        case 0x12059cu: goto label_12059c;
        case 0x1205a0u: goto label_1205a0;
        case 0x1205a4u: goto label_1205a4;
        case 0x1205a8u: goto label_1205a8;
        case 0x1205acu: goto label_1205ac;
        case 0x1205b0u: goto label_1205b0;
        case 0x1205b4u: goto label_1205b4;
        case 0x1205b8u: goto label_1205b8;
        case 0x1205bcu: goto label_1205bc;
        case 0x1205c0u: goto label_1205c0;
        case 0x1205c4u: goto label_1205c4;
        case 0x1205c8u: goto label_1205c8;
        case 0x1205ccu: goto label_1205cc;
        case 0x1205d0u: goto label_1205d0;
        case 0x1205d4u: goto label_1205d4;
        case 0x1205d8u: goto label_1205d8;
        case 0x1205dcu: goto label_1205dc;
        case 0x1205e0u: goto label_1205e0;
        case 0x1205e4u: goto label_1205e4;
        case 0x1205e8u: goto label_1205e8;
        case 0x1205ecu: goto label_1205ec;
        case 0x1205f0u: goto label_1205f0;
        case 0x1205f4u: goto label_1205f4;
        case 0x1205f8u: goto label_1205f8;
        case 0x1205fcu: goto label_1205fc;
        case 0x120600u: goto label_120600;
        case 0x120604u: goto label_120604;
        case 0x120608u: goto label_120608;
        case 0x12060cu: goto label_12060c;
        case 0x120610u: goto label_120610;
        case 0x120614u: goto label_120614;
        case 0x120618u: goto label_120618;
        case 0x12061cu: goto label_12061c;
        case 0x120620u: goto label_120620;
        case 0x120624u: goto label_120624;
        case 0x120628u: goto label_120628;
        case 0x12062cu: goto label_12062c;
        case 0x120630u: goto label_120630;
        case 0x120634u: goto label_120634;
        case 0x120638u: goto label_120638;
        case 0x12063cu: goto label_12063c;
        case 0x120640u: goto label_120640;
        case 0x120644u: goto label_120644;
        case 0x120648u: goto label_120648;
        case 0x12064cu: goto label_12064c;
        case 0x120650u: goto label_120650;
        case 0x120654u: goto label_120654;
        case 0x120658u: goto label_120658;
        case 0x12065cu: goto label_12065c;
        case 0x120660u: goto label_120660;
        case 0x120664u: goto label_120664;
        case 0x120668u: goto label_120668;
        case 0x12066cu: goto label_12066c;
        case 0x120670u: goto label_120670;
        case 0x120674u: goto label_120674;
        case 0x120678u: goto label_120678;
        case 0x12067cu: goto label_12067c;
        case 0x120680u: goto label_120680;
        case 0x120684u: goto label_120684;
        case 0x120688u: goto label_120688;
        case 0x12068cu: goto label_12068c;
        case 0x120690u: goto label_120690;
        case 0x120694u: goto label_120694;
        case 0x120698u: goto label_120698;
        case 0x12069cu: goto label_12069c;
        case 0x1206a0u: goto label_1206a0;
        case 0x1206a4u: goto label_1206a4;
        case 0x1206a8u: goto label_1206a8;
        case 0x1206acu: goto label_1206ac;
        case 0x1206b0u: goto label_1206b0;
        case 0x1206b4u: goto label_1206b4;
        case 0x1206b8u: goto label_1206b8;
        case 0x1206bcu: goto label_1206bc;
        case 0x1206c0u: goto label_1206c0;
        case 0x1206c4u: goto label_1206c4;
        case 0x1206c8u: goto label_1206c8;
        case 0x1206ccu: goto label_1206cc;
        case 0x1206d0u: goto label_1206d0;
        case 0x1206d4u: goto label_1206d4;
        case 0x1206d8u: goto label_1206d8;
        case 0x1206dcu: goto label_1206dc;
        case 0x1206e0u: goto label_1206e0;
        case 0x1206e4u: goto label_1206e4;
        case 0x1206e8u: goto label_1206e8;
        case 0x1206ecu: goto label_1206ec;
        case 0x1206f0u: goto label_1206f0;
        case 0x1206f4u: goto label_1206f4;
        case 0x1206f8u: goto label_1206f8;
        case 0x1206fcu: goto label_1206fc;
        case 0x120700u: goto label_120700;
        case 0x120704u: goto label_120704;
        case 0x120708u: goto label_120708;
        case 0x12070cu: goto label_12070c;
        case 0x120710u: goto label_120710;
        case 0x120714u: goto label_120714;
        case 0x120718u: goto label_120718;
        case 0x12071cu: goto label_12071c;
        case 0x120720u: goto label_120720;
        case 0x120724u: goto label_120724;
        case 0x120728u: goto label_120728;
        case 0x12072cu: goto label_12072c;
        case 0x120730u: goto label_120730;
        case 0x120734u: goto label_120734;
        case 0x120738u: goto label_120738;
        case 0x12073cu: goto label_12073c;
        case 0x120740u: goto label_120740;
        case 0x120744u: goto label_120744;
        case 0x120748u: goto label_120748;
        case 0x12074cu: goto label_12074c;
        case 0x120750u: goto label_120750;
        case 0x120754u: goto label_120754;
        case 0x120758u: goto label_120758;
        case 0x12075cu: goto label_12075c;
        case 0x120760u: goto label_120760;
        case 0x120764u: goto label_120764;
        case 0x120768u: goto label_120768;
        case 0x12076cu: goto label_12076c;
        case 0x120770u: goto label_120770;
        case 0x120774u: goto label_120774;
        case 0x120778u: goto label_120778;
        case 0x12077cu: goto label_12077c;
        case 0x120780u: goto label_120780;
        case 0x120784u: goto label_120784;
        case 0x120788u: goto label_120788;
        case 0x12078cu: goto label_12078c;
        case 0x120790u: goto label_120790;
        case 0x120794u: goto label_120794;
        case 0x120798u: goto label_120798;
        case 0x12079cu: goto label_12079c;
        case 0x1207a0u: goto label_1207a0;
        case 0x1207a4u: goto label_1207a4;
        case 0x1207a8u: goto label_1207a8;
        case 0x1207acu: goto label_1207ac;
        case 0x1207b0u: goto label_1207b0;
        case 0x1207b4u: goto label_1207b4;
        case 0x1207b8u: goto label_1207b8;
        case 0x1207bcu: goto label_1207bc;
        case 0x1207c0u: goto label_1207c0;
        case 0x1207c4u: goto label_1207c4;
        case 0x1207c8u: goto label_1207c8;
        case 0x1207ccu: goto label_1207cc;
        case 0x1207d0u: goto label_1207d0;
        case 0x1207d4u: goto label_1207d4;
        case 0x1207d8u: goto label_1207d8;
        case 0x1207dcu: goto label_1207dc;
        case 0x1207e0u: goto label_1207e0;
        case 0x1207e4u: goto label_1207e4;
        case 0x1207e8u: goto label_1207e8;
        case 0x1207ecu: goto label_1207ec;
        case 0x1207f0u: goto label_1207f0;
        case 0x1207f4u: goto label_1207f4;
        case 0x1207f8u: goto label_1207f8;
        case 0x1207fcu: goto label_1207fc;
        case 0x120800u: goto label_120800;
        case 0x120804u: goto label_120804;
        case 0x120808u: goto label_120808;
        case 0x12080cu: goto label_12080c;
        case 0x120810u: goto label_120810;
        case 0x120814u: goto label_120814;
        case 0x120818u: goto label_120818;
        case 0x12081cu: goto label_12081c;
        case 0x120820u: goto label_120820;
        case 0x120824u: goto label_120824;
        case 0x120828u: goto label_120828;
        case 0x12082cu: goto label_12082c;
        case 0x120830u: goto label_120830;
        case 0x120834u: goto label_120834;
        case 0x120838u: goto label_120838;
        case 0x12083cu: goto label_12083c;
        case 0x120840u: goto label_120840;
        case 0x120844u: goto label_120844;
        case 0x120848u: goto label_120848;
        case 0x12084cu: goto label_12084c;
        case 0x120850u: goto label_120850;
        case 0x120854u: goto label_120854;
        case 0x120858u: goto label_120858;
        case 0x12085cu: goto label_12085c;
        case 0x120860u: goto label_120860;
        case 0x120864u: goto label_120864;
        case 0x120868u: goto label_120868;
        case 0x12086cu: goto label_12086c;
        case 0x120870u: goto label_120870;
        case 0x120874u: goto label_120874;
        case 0x120878u: goto label_120878;
        case 0x12087cu: goto label_12087c;
        case 0x120880u: goto label_120880;
        case 0x120884u: goto label_120884;
        case 0x120888u: goto label_120888;
        case 0x12088cu: goto label_12088c;
        case 0x120890u: goto label_120890;
        case 0x120894u: goto label_120894;
        case 0x120898u: goto label_120898;
        case 0x12089cu: goto label_12089c;
        case 0x1208a0u: goto label_1208a0;
        case 0x1208a4u: goto label_1208a4;
        case 0x1208a8u: goto label_1208a8;
        case 0x1208acu: goto label_1208ac;
        case 0x1208b0u: goto label_1208b0;
        case 0x1208b4u: goto label_1208b4;
        case 0x1208b8u: goto label_1208b8;
        case 0x1208bcu: goto label_1208bc;
        case 0x1208c0u: goto label_1208c0;
        case 0x1208c4u: goto label_1208c4;
        case 0x1208c8u: goto label_1208c8;
        case 0x1208ccu: goto label_1208cc;
        case 0x1208d0u: goto label_1208d0;
        case 0x1208d4u: goto label_1208d4;
        case 0x1208d8u: goto label_1208d8;
        case 0x1208dcu: goto label_1208dc;
        case 0x1208e0u: goto label_1208e0;
        case 0x1208e4u: goto label_1208e4;
        case 0x1208e8u: goto label_1208e8;
        case 0x1208ecu: goto label_1208ec;
        case 0x1208f0u: goto label_1208f0;
        case 0x1208f4u: goto label_1208f4;
        case 0x1208f8u: goto label_1208f8;
        case 0x1208fcu: goto label_1208fc;
        case 0x120900u: goto label_120900;
        case 0x120904u: goto label_120904;
        case 0x120908u: goto label_120908;
        case 0x12090cu: goto label_12090c;
        case 0x120910u: goto label_120910;
        case 0x120914u: goto label_120914;
        case 0x120918u: goto label_120918;
        case 0x12091cu: goto label_12091c;
        case 0x120920u: goto label_120920;
        case 0x120924u: goto label_120924;
        case 0x120928u: goto label_120928;
        case 0x12092cu: goto label_12092c;
        case 0x120930u: goto label_120930;
        case 0x120934u: goto label_120934;
        case 0x120938u: goto label_120938;
        case 0x12093cu: goto label_12093c;
        case 0x120940u: goto label_120940;
        case 0x120944u: goto label_120944;
        case 0x120948u: goto label_120948;
        case 0x12094cu: goto label_12094c;
        case 0x120950u: goto label_120950;
        case 0x120954u: goto label_120954;
        case 0x120958u: goto label_120958;
        case 0x12095cu: goto label_12095c;
        case 0x120960u: goto label_120960;
        case 0x120964u: goto label_120964;
        case 0x120968u: goto label_120968;
        case 0x12096cu: goto label_12096c;
        case 0x120970u: goto label_120970;
        case 0x120974u: goto label_120974;
        case 0x120978u: goto label_120978;
        case 0x12097cu: goto label_12097c;
        case 0x120980u: goto label_120980;
        case 0x120984u: goto label_120984;
        case 0x120988u: goto label_120988;
        case 0x12098cu: goto label_12098c;
        case 0x120990u: goto label_120990;
        case 0x120994u: goto label_120994;
        case 0x120998u: goto label_120998;
        case 0x12099cu: goto label_12099c;
        case 0x1209a0u: goto label_1209a0;
        case 0x1209a4u: goto label_1209a4;
        case 0x1209a8u: goto label_1209a8;
        case 0x1209acu: goto label_1209ac;
        case 0x1209b0u: goto label_1209b0;
        case 0x1209b4u: goto label_1209b4;
        case 0x1209b8u: goto label_1209b8;
        case 0x1209bcu: goto label_1209bc;
        case 0x1209c0u: goto label_1209c0;
        case 0x1209c4u: goto label_1209c4;
        case 0x1209c8u: goto label_1209c8;
        case 0x1209ccu: goto label_1209cc;
        case 0x1209d0u: goto label_1209d0;
        case 0x1209d4u: goto label_1209d4;
        case 0x1209d8u: goto label_1209d8;
        case 0x1209dcu: goto label_1209dc;
        case 0x1209e0u: goto label_1209e0;
        case 0x1209e4u: goto label_1209e4;
        case 0x1209e8u: goto label_1209e8;
        case 0x1209ecu: goto label_1209ec;
        case 0x1209f0u: goto label_1209f0;
        case 0x1209f4u: goto label_1209f4;
        case 0x1209f8u: goto label_1209f8;
        case 0x1209fcu: goto label_1209fc;
        case 0x120a00u: goto label_120a00;
        case 0x120a04u: goto label_120a04;
        case 0x120a08u: goto label_120a08;
        case 0x120a0cu: goto label_120a0c;
        case 0x120a10u: goto label_120a10;
        case 0x120a14u: goto label_120a14;
        case 0x120a18u: goto label_120a18;
        case 0x120a1cu: goto label_120a1c;
        case 0x120a20u: goto label_120a20;
        case 0x120a24u: goto label_120a24;
        case 0x120a28u: goto label_120a28;
        case 0x120a2cu: goto label_120a2c;
        case 0x120a30u: goto label_120a30;
        case 0x120a34u: goto label_120a34;
        case 0x120a38u: goto label_120a38;
        case 0x120a3cu: goto label_120a3c;
        case 0x120a40u: goto label_120a40;
        case 0x120a44u: goto label_120a44;
        case 0x120a48u: goto label_120a48;
        case 0x120a4cu: goto label_120a4c;
        case 0x120a50u: goto label_120a50;
        case 0x120a54u: goto label_120a54;
        case 0x120a58u: goto label_120a58;
        case 0x120a5cu: goto label_120a5c;
        case 0x120a60u: goto label_120a60;
        case 0x120a64u: goto label_120a64;
        case 0x120a68u: goto label_120a68;
        case 0x120a6cu: goto label_120a6c;
        case 0x120a70u: goto label_120a70;
        case 0x120a74u: goto label_120a74;
        case 0x120a78u: goto label_120a78;
        case 0x120a7cu: goto label_120a7c;
        case 0x120a80u: goto label_120a80;
        case 0x120a84u: goto label_120a84;
        case 0x120a88u: goto label_120a88;
        case 0x120a8cu: goto label_120a8c;
        case 0x120a90u: goto label_120a90;
        case 0x120a94u: goto label_120a94;
        case 0x120a98u: goto label_120a98;
        case 0x120a9cu: goto label_120a9c;
        case 0x120aa0u: goto label_120aa0;
        case 0x120aa4u: goto label_120aa4;
        case 0x120aa8u: goto label_120aa8;
        case 0x120aacu: goto label_120aac;
        case 0x120ab0u: goto label_120ab0;
        case 0x120ab4u: goto label_120ab4;
        case 0x120ab8u: goto label_120ab8;
        case 0x120abcu: goto label_120abc;
        case 0x120ac0u: goto label_120ac0;
        case 0x120ac4u: goto label_120ac4;
        case 0x120ac8u: goto label_120ac8;
        case 0x120accu: goto label_120acc;
        case 0x120ad0u: goto label_120ad0;
        case 0x120ad4u: goto label_120ad4;
        case 0x120ad8u: goto label_120ad8;
        case 0x120adcu: goto label_120adc;
        case 0x120ae0u: goto label_120ae0;
        case 0x120ae4u: goto label_120ae4;
        case 0x120ae8u: goto label_120ae8;
        case 0x120aecu: goto label_120aec;
        case 0x120af0u: goto label_120af0;
        case 0x120af4u: goto label_120af4;
        case 0x120af8u: goto label_120af8;
        case 0x120afcu: goto label_120afc;
        case 0x120b00u: goto label_120b00;
        case 0x120b04u: goto label_120b04;
        case 0x120b08u: goto label_120b08;
        case 0x120b0cu: goto label_120b0c;
        case 0x120b10u: goto label_120b10;
        case 0x120b14u: goto label_120b14;
        case 0x120b18u: goto label_120b18;
        case 0x120b1cu: goto label_120b1c;
        case 0x120b20u: goto label_120b20;
        case 0x120b24u: goto label_120b24;
        case 0x120b28u: goto label_120b28;
        case 0x120b2cu: goto label_120b2c;
        case 0x120b30u: goto label_120b30;
        case 0x120b34u: goto label_120b34;
        case 0x120b38u: goto label_120b38;
        case 0x120b3cu: goto label_120b3c;
        case 0x120b40u: goto label_120b40;
        case 0x120b44u: goto label_120b44;
        case 0x120b48u: goto label_120b48;
        case 0x120b4cu: goto label_120b4c;
        case 0x120b50u: goto label_120b50;
        case 0x120b54u: goto label_120b54;
        case 0x120b58u: goto label_120b58;
        case 0x120b5cu: goto label_120b5c;
        case 0x120b60u: goto label_120b60;
        case 0x120b64u: goto label_120b64;
        case 0x120b68u: goto label_120b68;
        case 0x120b6cu: goto label_120b6c;
        case 0x120b70u: goto label_120b70;
        case 0x120b74u: goto label_120b74;
        case 0x120b78u: goto label_120b78;
        case 0x120b7cu: goto label_120b7c;
        case 0x120b80u: goto label_120b80;
        case 0x120b84u: goto label_120b84;
        case 0x120b88u: goto label_120b88;
        case 0x120b8cu: goto label_120b8c;
        case 0x120b90u: goto label_120b90;
        case 0x120b94u: goto label_120b94;
        default: break;
    }

    ctx->pc = 0x120200u;

label_120200:
    // 0x120200: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x120200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
label_120204:
    // 0x120204: 0x7fb301e0  sq          $s3, 0x1E0($sp)
    ctx->pc = 0x120204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 19));
label_120208:
    // 0x120208: 0x7fb201f0  sq          $s2, 0x1F0($sp)
    ctx->pc = 0x120208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 18));
label_12020c:
    // 0x12020c: 0xafa50130  sw          $a1, 0x130($sp)
    ctx->pc = 0x12020cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 5));
label_120210:
    // 0x120210: 0x7fb00210  sq          $s0, 0x210($sp)
    ctx->pc = 0x120210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 16));
label_120214:
    // 0x120214: 0x7fb10200  sq          $s1, 0x200($sp)
    ctx->pc = 0x120214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 17));
label_120218:
    // 0x120218: 0x7fb401d0  sq          $s4, 0x1D0($sp)
    ctx->pc = 0x120218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 20));
label_12021c:
    // 0x12021c: 0x7fb501c0  sq          $s5, 0x1C0($sp)
    ctx->pc = 0x12021cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 21));
label_120220:
    // 0x120220: 0x7fb601b0  sq          $s6, 0x1B0($sp)
    ctx->pc = 0x120220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 22));
label_120224:
    // 0x120224: 0x7fb701a0  sq          $s7, 0x1A0($sp)
    ctx->pc = 0x120224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 23));
label_120228:
    // 0x120228: 0x7fbe0190  sq          $fp, 0x190($sp)
    ctx->pc = 0x120228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 30));
label_12022c:
    // 0x12022c: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x12022cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
label_120230:
    // 0x120230: 0xc040132  jal         func_1004C8
label_120234:
    if (ctx->pc == 0x120234u) {
        ctx->pc = 0x120234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120230u;
        // 0x120234: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120238u;
        goto label_120238;
    }
    ctx->pc = 0x120230u;
    SET_GPR_U32(ctx, 31, 0x120238u);
    ctx->pc = 0x120234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120230u;
    // 0x120234: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1004C8u, 0x120230u, 0x120238u)) {
        return;
    }
    ctx->pc = 0x120238u;
label_120238:
    // 0x120238: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x120238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_12023c:
    // 0x12023c: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x12023cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_120240:
    // 0x120240: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x120240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6760)));
label_120244:
    // 0x120244: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x120244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120248:
    // 0x120248: 0xc07f1c0  jal         func_1FC700
label_12024c:
    if (ctx->pc == 0x12024Cu) {
        ctx->pc = 0x12024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120248u;
        // 0x12024c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120250u;
        goto label_120250;
    }
    ctx->pc = 0x120248u;
    SET_GPR_U32(ctx, 31, 0x120250u);
    ctx->pc = 0x12024Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120248u;
    // 0x12024c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x120248u, 0x120250u)) {
        return;
    }
    ctx->pc = 0x120250u;
label_120250:
    // 0x120250: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_120254:
    // 0x120254: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x120254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_120258:
    // 0x120258: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_12025c:
    if (ctx->pc == 0x12025Cu) {
        ctx->pc = 0x12025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120258u;
        // 0x12025c: 0x8e461a68  lw          $a2, 0x1A68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6760)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120260u;
        goto label_120260;
    }
    ctx->pc = 0x120258u;
    {
        const bool branch_taken_0x120258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120258u;
        // 0x12025c: 0x8e461a68  lw          $a2, 0x1A68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120258) {
            ctx->pc = 0x120350u;
            goto label_120350;
        }
    }
    ctx->pc = 0x120260u;
label_120260:
    // 0x120260: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x120260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_120264:
    // 0x120264: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x120264u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_120268:
    // 0x120268: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12026c:
    // 0x12026c: 0x0  nop
    ctx->pc = 0x12026cu;
    // NOP
label_120270:
    // 0x120270: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x120270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_120274:
    // 0x120274: 0x5451002c  bnel        $v0, $s1, . + 4 + (0x2C << 2)
label_120278:
    if (ctx->pc == 0x120278u) {
        ctx->pc = 0x120278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120274u;
        // 0x120278: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12027Cu;
        goto label_12027c;
    }
    ctx->pc = 0x120274u;
    {
        const bool branch_taken_0x120274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x120274) {
            ctx->pc = 0x120278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120274u;
            // 0x120278: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120328u;
            goto label_120328;
        }
    }
    ctx->pc = 0x12027Cu;
label_12027c:
    // 0x12027c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12027cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_120280:
    // 0x120280: 0x6862000f  ldl         $v0, 0xF($v1)
    ctx->pc = 0x120280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_120284:
    // 0x120284: 0x6c620008  ldr         $v0, 0x8($v1)
    ctx->pc = 0x120284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_120288:
    // 0x120288: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x120288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_12028c:
    // 0x12028c: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x12028cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_120290:
    // 0x120290: 0x6867001f  ldl         $a3, 0x1F($v1)
    ctx->pc = 0x120290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_120294:
    // 0x120294: 0x6c670018  ldr         $a3, 0x18($v1)
    ctx->pc = 0x120294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_120298:
    // 0x120298: 0x68680027  ldl         $t0, 0x27($v1)
    ctx->pc = 0x120298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_12029c:
    // 0x12029c: 0x6c680020  ldr         $t0, 0x20($v1)
    ctx->pc = 0x12029cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1202a0:
    // 0x1202a0: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x1202a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1202a4:
    // 0x1202a4: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x1202a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1202a8:
    // 0x1202a8: 0xb3a6001f  sdl         $a2, 0x1F($sp)
    ctx->pc = 0x1202a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1202ac:
    // 0x1202ac: 0xb7a60018  sdr         $a2, 0x18($sp)
    ctx->pc = 0x1202acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1202b0:
    // 0x1202b0: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x1202b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1202b4:
    // 0x1202b4: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x1202b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1202b8:
    // 0x1202b8: 0xb3a8002f  sdl         $t0, 0x2F($sp)
    ctx->pc = 0x1202b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1202bc:
    // 0x1202bc: 0xb7a80028  sdr         $t0, 0x28($sp)
    ctx->pc = 0x1202bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1202c0:
    // 0x1202c0: 0x6862002f  ldl         $v0, 0x2F($v1)
    ctx->pc = 0x1202c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1202c4:
    // 0x1202c4: 0x6c620028  ldr         $v0, 0x28($v1)
    ctx->pc = 0x1202c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1202c8:
    // 0x1202c8: 0x68660037  ldl         $a2, 0x37($v1)
    ctx->pc = 0x1202c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1202cc:
    // 0x1202cc: 0x6c660030  ldr         $a2, 0x30($v1)
    ctx->pc = 0x1202ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1202d0:
    // 0x1202d0: 0x6867003f  ldl         $a3, 0x3F($v1)
    ctx->pc = 0x1202d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1202d4:
    // 0x1202d4: 0x6c670038  ldr         $a3, 0x38($v1)
    ctx->pc = 0x1202d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1202d8:
    // 0x1202d8: 0x68680047  ldl         $t0, 0x47($v1)
    ctx->pc = 0x1202d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1202dc:
    // 0x1202dc: 0x6c680040  ldr         $t0, 0x40($v1)
    ctx->pc = 0x1202dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1202e0:
    // 0x1202e0: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x1202e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1202e4:
    // 0x1202e4: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x1202e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1202e8:
    // 0x1202e8: 0xb3a6003f  sdl         $a2, 0x3F($sp)
    ctx->pc = 0x1202e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1202ec:
    // 0x1202ec: 0xb7a60038  sdr         $a2, 0x38($sp)
    ctx->pc = 0x1202ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1202f0:
    // 0x1202f0: 0xb3a70047  sdl         $a3, 0x47($sp)
    ctx->pc = 0x1202f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1202f4:
    // 0x1202f4: 0xb7a70040  sdr         $a3, 0x40($sp)
    ctx->pc = 0x1202f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1202f8:
    // 0x1202f8: 0xb3a8004f  sdl         $t0, 0x4F($sp)
    ctx->pc = 0x1202f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1202fc:
    // 0x1202fc: 0xb7a80048  sdr         $t0, 0x48($sp)
    ctx->pc = 0x1202fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_120300:
    // 0x120300: 0xc092dbc  jal         func_24B6F0
label_120304:
    if (ctx->pc == 0x120304u) {
        ctx->pc = 0x120304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120300u;
        // 0x120304: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120308u;
        goto label_120308;
    }
    ctx->pc = 0x120300u;
    SET_GPR_U32(ctx, 31, 0x120308u);
    ctx->pc = 0x120304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120300u;
    // 0x120304: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B6F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B6F0u, 0x120300u, 0x120308u)) {
        return;
    }
    ctx->pc = 0x120308u;
label_120308:
    // 0x120308: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x120308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_12030c:
    // 0x12030c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12030cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_120310:
    // 0x120310: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x120310u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_120314:
    // 0x120314: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x120314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_120318:
    // 0x120318: 0x40f809  jalr        $v0
label_12031c:
    if (ctx->pc == 0x12031Cu) {
        ctx->pc = 0x12031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120318u;
        // 0x12031c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120320u;
        goto label_120320;
    }
    ctx->pc = 0x120318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x120320u);
        ctx->pc = 0x12031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120318u;
        // 0x12031c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120318u, 0x120320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x120320u;
label_120320:
    // 0x120320: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_120324:
    // 0x120324: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x120324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_120328:
    // 0x120328: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x120328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12032c:
    // 0x12032c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12032cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_120330:
    // 0x120330: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x120330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_120334:
    // 0x120334: 0xc07f0c8  jal         func_1FC320
label_120338:
    if (ctx->pc == 0x120338u) {
        ctx->pc = 0x120338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120334u;
        // 0x120338: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12033Cu;
        goto label_12033c;
    }
    ctx->pc = 0x120334u;
    SET_GPR_U32(ctx, 31, 0x12033Cu);
    ctx->pc = 0x120338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120334u;
    // 0x120338: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x120334u, 0x12033Cu)) {
        return;
    }
    ctx->pc = 0x12033Cu;
label_12033c:
    // 0x12033c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12033cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_120340:
    // 0x120340: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x120340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_120344:
    // 0x120344: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
label_120348:
    if (ctx->pc == 0x120348u) {
        ctx->pc = 0x120348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120344u;
        // 0x120348: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12034Cu;
        goto label_12034c;
    }
    ctx->pc = 0x120344u;
    {
        const bool branch_taken_0x120344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x120348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120344u;
        // 0x120348: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120344) {
            ctx->pc = 0x120270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120270;
        }
    }
    ctx->pc = 0x12034Cu;
label_12034c:
    // 0x12034c: 0x8e461a68  lw          $a2, 0x1A68($s2)
    ctx->pc = 0x12034cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6760)));
label_120350:
    // 0x120350: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x120350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_120354:
    // 0x120354: 0xc07f1c0  jal         func_1FC700
label_120358:
    if (ctx->pc == 0x120358u) {
        ctx->pc = 0x120358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120354u;
        // 0x120358: 0x8fa50130  lw          $a1, 0x130($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12035Cu;
        goto label_12035c;
    }
    ctx->pc = 0x120354u;
    SET_GPR_U32(ctx, 31, 0x12035Cu);
    ctx->pc = 0x120358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120354u;
    // 0x120358: 0x8fa50130  lw          $a1, 0x130($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x120354u, 0x12035Cu)) {
        return;
    }
    ctx->pc = 0x12035Cu;
label_12035c:
    // 0x12035c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12035cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_120360:
    // 0x120360: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x120360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_120364:
    // 0x120364: 0x10400145  beqz        $v0, . + 4 + (0x145 << 2)
label_120368:
    if (ctx->pc == 0x120368u) {
        ctx->pc = 0x120368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120364u;
        // 0x120368: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12036Cu;
        goto label_12036c;
    }
    ctx->pc = 0x120364u;
    {
        const bool branch_taken_0x120364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120364u;
        // 0x120368: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120364) {
            ctx->pc = 0x12087Cu;
            goto label_12087c;
        }
    }
    ctx->pc = 0x12036Cu;
label_12036c:
    // 0x12036c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12036cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_120370:
    // 0x120370: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x120370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_120374:
    // 0x120374: 0x14400136  bnez        $v0, . + 4 + (0x136 << 2)
label_120378:
    if (ctx->pc == 0x120378u) {
        ctx->pc = 0x120378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120374u;
        // 0x120378: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12037Cu;
        goto label_12037c;
    }
    ctx->pc = 0x120374u;
    {
        const bool branch_taken_0x120374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120374u;
        // 0x120378: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120374) {
            ctx->pc = 0x120850u;
            goto label_120850;
        }
    }
    ctx->pc = 0x12037Cu;
label_12037c:
    // 0x12037c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x12037cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_120380:
    // 0x120380: 0x8c438bc4  lw          $v1, -0x743C($v0)
    ctx->pc = 0x120380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937540)));
label_120384:
    // 0x120384: 0x8c6405b0  lw          $a0, 0x5B0($v1)
    ctx->pc = 0x120384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1456)));
label_120388:
    // 0x120388: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_12038c:
    if (ctx->pc == 0x12038Cu) {
        ctx->pc = 0x12038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120388u;
        // 0x12038c: 0x24b00008  addiu       $s0, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120390u;
        goto label_120390;
    }
    ctx->pc = 0x120388u;
    {
        const bool branch_taken_0x120388 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120388u;
        // 0x12038c: 0x24b00008  addiu       $s0, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120388) {
            ctx->pc = 0x1203A8u;
            goto label_1203a8;
        }
    }
    ctx->pc = 0x120390u;
label_120390:
    // 0x120390: 0x8e620c70  lw          $v0, 0xC70($s3)
    ctx->pc = 0x120390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3184)));
label_120394:
    // 0x120394: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_120398:
    if (ctx->pc == 0x120398u) {
        ctx->pc = 0x120398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120394u;
        // 0x120398: 0x26640f84  addiu       $a0, $s3, 0xF84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3972));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12039Cu;
        goto label_12039c;
    }
    ctx->pc = 0x120394u;
    {
        const bool branch_taken_0x120394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120394u;
        // 0x120398: 0x26640f84  addiu       $a0, $s3, 0xF84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3972));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120394) {
            ctx->pc = 0x1203ACu;
            goto label_1203ac;
        }
    }
    ctx->pc = 0x12039Cu;
label_12039c:
    // 0x12039c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12039cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1203a0:
    // 0x1203a0: 0xc0482e6  jal         func_120B98
label_1203a4:
    if (ctx->pc == 0x1203A4u) {
        ctx->pc = 0x1203A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1203A0u;
        // 0x1203a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1203A8u;
        goto label_1203a8;
    }
    ctx->pc = 0x1203A0u;
    SET_GPR_U32(ctx, 31, 0x1203A8u);
    ctx->pc = 0x1203A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1203A0u;
    // 0x1203a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x120B98u, 0x1203A0u, 0x1203A8u)) {
        return;
    }
    ctx->pc = 0x1203A8u;
label_1203a8:
    // 0x1203a8: 0x26640f84  addiu       $a0, $s3, 0xF84
    ctx->pc = 0x1203a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3972));
label_1203ac:
    // 0x1203ac: 0xc041928  jal         func_1064A0
label_1203b0:
    if (ctx->pc == 0x1203B0u) {
        ctx->pc = 0x1203B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1203ACu;
        // 0x1203b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1203B4u;
        goto label_1203b4;
    }
    ctx->pc = 0x1203ACu;
    SET_GPR_U32(ctx, 31, 0x1203B4u);
    ctx->pc = 0x1203B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1203ACu;
    // 0x1203b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1064A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1064A0u, 0x1203ACu, 0x1203B4u)) {
        return;
    }
    ctx->pc = 0x1203B4u;
label_1203b4:
    // 0x1203b4: 0x14400126  bnez        $v0, . + 4 + (0x126 << 2)
label_1203b8:
    if (ctx->pc == 0x1203B8u) {
        ctx->pc = 0x1203B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1203B4u;
        // 0x1203b8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1203BCu;
        goto label_1203bc;
    }
    ctx->pc = 0x1203B4u;
    {
        const bool branch_taken_0x1203b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1203B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1203B4u;
        // 0x1203b8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1203b4) {
            ctx->pc = 0x120850u;
            goto label_120850;
        }
    }
    ctx->pc = 0x1203BCu;
label_1203bc:
    // 0x1203bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1203bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1203c0:
    // 0x1203c0: 0xc049714  jal         func_125C50
label_1203c4:
    if (ctx->pc == 0x1203C4u) {
        ctx->pc = 0x1203C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1203C0u;
        // 0x1203c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1203C8u;
        goto label_1203c8;
    }
    ctx->pc = 0x1203C0u;
    SET_GPR_U32(ctx, 31, 0x1203C8u);
    ctx->pc = 0x1203C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1203C0u;
    // 0x1203c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125C50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x125C50u, 0x1203C0u, 0x1203C8u)) {
        return;
    }
    ctx->pc = 0x1203C8u;
label_1203c8:
    // 0x1203c8: 0x10400120  beqz        $v0, . + 4 + (0x120 << 2)
label_1203cc:
    if (ctx->pc == 0x1203CCu) {
        ctx->pc = 0x1203CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1203C8u;
        // 0x1203cc: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1203D0u;
        goto label_1203d0;
    }
    ctx->pc = 0x1203C8u;
    {
        const bool branch_taken_0x1203c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1203CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1203C8u;
        // 0x1203cc: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1203c8) {
            ctx->pc = 0x12084Cu;
            goto label_12084c;
        }
    }
    ctx->pc = 0x1203D0u;
label_1203d0:
    // 0x1203d0: 0x266a0320  addiu       $t2, $s3, 0x320
    ctx->pc = 0x1203d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 800));
label_1203d4:
    // 0x1203d4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1203d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_1203d8:
    // 0x1203d8: 0xafa90148  sw          $t1, 0x148($sp)
    ctx->pc = 0x1203d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 9));
label_1203dc:
    // 0x1203dc: 0xafaa014c  sw          $t2, 0x14C($sp)
    ctx->pc = 0x1203dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 10));
label_1203e0:
    // 0x1203e0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1203e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1203e4:
    // 0x1203e4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1203e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_1203e8:
    // 0x1203e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1203e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1203ec:
    // 0x1203ec: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1203ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1203f0:
    // 0x1203f0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1203f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1203f4:
    // 0x1203f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1203f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1203f8:
    // 0x1203f8: 0x0  nop
    ctx->pc = 0x1203f8u;
    // NOP
label_1203fc:
    // 0x1203fc: 0x0  nop
    ctx->pc = 0x1203fcu;
    // NOP
label_120400:
    // 0x120400: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
label_120404:
    if (ctx->pc == 0x120404u) {
        ctx->pc = 0x120404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120400u;
        // 0x120404: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120408u;
        goto label_120408;
    }
    ctx->pc = 0x120400u;
    {
        const bool branch_taken_0x120400 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x120404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120400u;
        // 0x120404: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120400) {
            ctx->pc = 0x1203F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1203f0;
        }
    }
    ctx->pc = 0x120408u;
label_120408:
    // 0x120408: 0x8fab014c  lw          $t3, 0x14C($sp)
    ctx->pc = 0x120408u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_12040c:
    // 0x12040c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x12040cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_120410:
    // 0x120410: 0x8d620804  lw          $v0, 0x804($t3)
    ctx->pc = 0x120410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 2052)));
label_120414:
    // 0x120414: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x120414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_120418:
    // 0x120418: 0x184000e9  blez        $v0, . + 4 + (0xE9 << 2)
label_12041c:
    if (ctx->pc == 0x12041Cu) {
        ctx->pc = 0x12041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120418u;
        // 0x12041c: 0xafa20134  sw          $v0, 0x134($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120420u;
        goto label_120420;
    }
    ctx->pc = 0x120418u;
    {
        const bool branch_taken_0x120418 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x12041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120418u;
        // 0x12041c: 0xafa20134  sw          $v0, 0x134($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120418) {
            ctx->pc = 0x1207C0u;
            goto label_1207c0;
        }
    }
    ctx->pc = 0x120420u;
label_120420:
    // 0x120420: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x120420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_120424:
    // 0x120424: 0x0  nop
    ctx->pc = 0x120424u;
    // NOP
label_120428:
    // 0x120428: 0xc06817a  jal         func_1A05E8
label_12042c:
    if (ctx->pc == 0x12042Cu) {
        ctx->pc = 0x12042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120428u;
        // 0x12042c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120430u;
        goto label_120430;
    }
    ctx->pc = 0x120428u;
    SET_GPR_U32(ctx, 31, 0x120430u);
    ctx->pc = 0x12042Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120428u;
    // 0x12042c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A05E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A05E8u, 0x120428u, 0x120430u)) {
        return;
    }
    ctx->pc = 0x120430u;
label_120430:
    // 0x120430: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x120430u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120434:
    // 0x120434: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x120434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_120438:
    // 0x120438: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_12043c:
    if (ctx->pc == 0x12043Cu) {
        ctx->pc = 0x12043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120438u;
        // 0x12043c: 0x27a80090  addiu       $t0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120440u;
        goto label_120440;
    }
    ctx->pc = 0x120438u;
    {
        const bool branch_taken_0x120438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120438u;
        // 0x12043c: 0x27a80090  addiu       $t0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120438) {
            ctx->pc = 0x1204A4u;
            goto label_1204a4;
        }
    }
    ctx->pc = 0x120440u;
label_120440:
    // 0x120440: 0x27c40001  addiu       $a0, $fp, 0x1
    ctx->pc = 0x120440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_120444:
    // 0x120444: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x120444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_120448:
    // 0x120448: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x120448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_12044c:
    // 0x12044c: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x12044cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_120450:
    // 0x120450: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x120450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_120454:
    // 0x120454: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x120454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_120458:
    // 0x120458: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x120458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_12045c:
    // 0x12045c: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x12045cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_120460:
    // 0x120460: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x120460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_120464:
    // 0x120464: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x120464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_120468:
    // 0x120468: 0x6869001f  ldl         $t1, 0x1F($v1)
    ctx->pc = 0x120468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_12046c:
    // 0x12046c: 0x6c690018  ldr         $t1, 0x18($v1)
    ctx->pc = 0x12046cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_120470:
    // 0x120470: 0xb1050007  sdl         $a1, 0x7($t0)
    ctx->pc = 0x120470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_120474:
    // 0x120474: 0xb5050000  sdr         $a1, 0x0($t0)
    ctx->pc = 0x120474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_120478:
    // 0x120478: 0xb106000f  sdl         $a2, 0xF($t0)
    ctx->pc = 0x120478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12047c:
    // 0x12047c: 0xb5060008  sdr         $a2, 0x8($t0)
    ctx->pc = 0x12047cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_120480:
    // 0x120480: 0xb1070017  sdl         $a3, 0x17($t0)
    ctx->pc = 0x120480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_120484:
    // 0x120484: 0xb5070010  sdr         $a3, 0x10($t0)
    ctx->pc = 0x120484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_120488:
    // 0x120488: 0xb109001f  sdl         $t1, 0x1F($t0)
    ctx->pc = 0x120488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12048c:
    // 0x12048c: 0xb5090018  sdr         $t1, 0x18($t0)
    ctx->pc = 0x12048cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_120490:
    // 0x120490: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x120490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_120494:
    // 0x120494: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
label_120498:
    if (ctx->pc == 0x120498u) {
        ctx->pc = 0x120498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120494u;
        // 0x120498: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12049Cu;
        goto label_12049c;
    }
    ctx->pc = 0x120494u;
    {
        const bool branch_taken_0x120494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x120498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120494u;
        // 0x120498: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120494) {
            ctx->pc = 0x120450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120450;
        }
    }
    ctx->pc = 0x12049Cu;
label_12049c:
    // 0x12049c: 0x10000011  b           . + 4 + (0x11 << 2)
label_1204a0:
    if (ctx->pc == 0x1204A0u) {
        ctx->pc = 0x1204A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12049Cu;
        // 0x1204a0: 0x8fa4014c  lw          $a0, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1204A4u;
        goto label_1204a4;
    }
    ctx->pc = 0x12049Cu;
    {
        const bool branch_taken_0x12049c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1204A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12049Cu;
        // 0x1204a0: 0x8fa4014c  lw          $a0, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12049c) {
            ctx->pc = 0x1204E4u;
            goto label_1204e4;
        }
    }
    ctx->pc = 0x1204A4u;
label_1204a4:
    // 0x1204a4: 0x27ca0001  addiu       $t2, $fp, 0x1
    ctx->pc = 0x1204a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_1204a8:
    // 0x1204a8: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x1204a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_1204ac:
    // 0x1204ac: 0xafaa0140  sw          $t2, 0x140($sp)
    ctx->pc = 0x1204acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 10));
label_1204b0:
    // 0x1204b0: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x1204b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1204b4:
    // 0x1204b4: 0xdc6b0000  ld          $t3, 0x0($v1)
    ctx->pc = 0x1204b4u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1204b8:
    // 0x1204b8: 0xdc640008  ld          $a0, 0x8($v1)
    ctx->pc = 0x1204b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_1204bc:
    // 0x1204bc: 0xdc650010  ld          $a1, 0x10($v1)
    ctx->pc = 0x1204bcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_1204c0:
    // 0x1204c0: 0xdc660018  ld          $a2, 0x18($v1)
    ctx->pc = 0x1204c0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_1204c4:
    // 0x1204c4: 0xfd0b0000  sd          $t3, 0x0($t0)
    ctx->pc = 0x1204c4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 11));
label_1204c8:
    // 0x1204c8: 0xfd040008  sd          $a0, 0x8($t0)
    ctx->pc = 0x1204c8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 4));
label_1204cc:
    // 0x1204cc: 0xfd050010  sd          $a1, 0x10($t0)
    ctx->pc = 0x1204ccu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 5));
label_1204d0:
    // 0x1204d0: 0xfd060018  sd          $a2, 0x18($t0)
    ctx->pc = 0x1204d0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 6));
label_1204d4:
    // 0x1204d4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1204d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1204d8:
    // 0x1204d8: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
label_1204dc:
    if (ctx->pc == 0x1204DCu) {
        ctx->pc = 0x1204DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1204D8u;
        // 0x1204dc: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1204E0u;
        goto label_1204e0;
    }
    ctx->pc = 0x1204D8u;
    {
        const bool branch_taken_0x1204d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1204DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1204D8u;
        // 0x1204dc: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1204d8) {
            ctx->pc = 0x1204B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1204b4;
        }
    }
    ctx->pc = 0x1204E0u;
label_1204e0:
    // 0x1204e0: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x1204e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_1204e4:
    // 0x1204e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1204e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1204e8:
    // 0x1204e8: 0x68690007  ldl         $t1, 0x7($v1)
    ctx->pc = 0x1204e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_1204ec:
    // 0x1204ec: 0x6c690000  ldr         $t1, 0x0($v1)
    ctx->pc = 0x1204ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_1204f0:
    // 0x1204f0: 0x686a000f  ldl         $t2, 0xF($v1)
    ctx->pc = 0x1204f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_1204f4:
    // 0x1204f4: 0x6c6a0008  ldr         $t2, 0x8($v1)
    ctx->pc = 0x1204f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_1204f8:
    // 0x1204f8: 0x686b0017  ldl         $t3, 0x17($v1)
    ctx->pc = 0x1204f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_1204fc:
    // 0x1204fc: 0x6c6b0010  ldr         $t3, 0x10($v1)
    ctx->pc = 0x1204fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_120500:
    // 0x120500: 0xb1090007  sdl         $t1, 0x7($t0)
    ctx->pc = 0x120500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_120504:
    // 0x120504: 0xb5090000  sdr         $t1, 0x0($t0)
    ctx->pc = 0x120504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_120508:
    // 0x120508: 0xb10a000f  sdl         $t2, 0xF($t0)
    ctx->pc = 0x120508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12050c:
    // 0x12050c: 0xb50a0008  sdr         $t2, 0x8($t0)
    ctx->pc = 0x12050cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_120510:
    // 0x120510: 0xb10b0017  sdl         $t3, 0x17($t0)
    ctx->pc = 0x120510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_120514:
    // 0x120514: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x120514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_120518:
    // 0x120518: 0xb50b0010  sdr         $t3, 0x10($t0)
    ctx->pc = 0x120518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12051c:
    // 0x12051c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x12051cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_120520:
    // 0x120520: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x120520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_120524:
    // 0x120524: 0xc068132  jal         func_1A04C8
label_120528:
    if (ctx->pc == 0x120528u) {
        ctx->pc = 0x120528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120524u;
        // 0x120528: 0xafa30138  sw          $v1, 0x138($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12052Cu;
        goto label_12052c;
    }
    ctx->pc = 0x120524u;
    SET_GPR_U32(ctx, 31, 0x12052Cu);
    ctx->pc = 0x120528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120524u;
    // 0x120528: 0xafa30138  sw          $v1, 0x138($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A04C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A04C8u, 0x120524u, 0x12052Cu)) {
        return;
    }
    ctx->pc = 0x12052Cu;
label_12052c:
    // 0x12052c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12052cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120530:
    // 0x120530: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x120530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_120534:
    // 0x120534: 0xc0406e8  jal         func_101BA0
label_120538:
    if (ctx->pc == 0x120538u) {
        ctx->pc = 0x120538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120534u;
        // 0x120538: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12053Cu;
        goto label_12053c;
    }
    ctx->pc = 0x120534u;
    SET_GPR_U32(ctx, 31, 0x12053Cu);
    ctx->pc = 0x120538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120534u;
    // 0x120538: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101BA0u, 0x120534u, 0x12053Cu)) {
        return;
    }
    ctx->pc = 0x12053Cu;
label_12053c:
    // 0x12053c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12053cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120540:
    // 0x120540: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x120540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_120544:
    // 0x120544: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x120544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_120548:
    // 0x120548: 0x52820099  beql        $s4, $v0, . + 4 + (0x99 << 2)
label_12054c:
    if (ctx->pc == 0x12054Cu) {
        ctx->pc = 0x12054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120548u;
        // 0x12054c: 0x8fbe0140  lw          $fp, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120550u;
        goto label_120550;
    }
    ctx->pc = 0x120548u;
    {
        const bool branch_taken_0x120548 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x120548) {
            ctx->pc = 0x12054Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120548u;
            // 0x12054c: 0x8fbe0140  lw          $fp, 0x140($sp) (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1207B0u;
            goto label_1207b0;
        }
    }
    ctx->pc = 0x120550u;
label_120550:
    // 0x120550: 0x52200097  beql        $s1, $zero, . + 4 + (0x97 << 2)
label_120554:
    if (ctx->pc == 0x120554u) {
        ctx->pc = 0x120554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120550u;
        // 0x120554: 0x8fbe0140  lw          $fp, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120558u;
        goto label_120558;
    }
    ctx->pc = 0x120550u;
    {
        const bool branch_taken_0x120550 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x120550) {
            ctx->pc = 0x120554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120550u;
            // 0x120554: 0x8fbe0140  lw          $fp, 0x140($sp) (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1207B0u;
            goto label_1207b0;
        }
    }
    ctx->pc = 0x120558u;
label_120558:
    // 0x120558: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x120558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_12055c:
    // 0x12055c: 0x0  nop
    ctx->pc = 0x12055cu;
    // NOP
label_120560:
    // 0x120560: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x120560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_120564:
    // 0x120564: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x120564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_120568:
    // 0x120568: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x120568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12056c:
    // 0x12056c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x12056cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_120570:
    // 0x120570: 0xc0496b4  jal         func_125AD0
label_120574:
    if (ctx->pc == 0x120574u) {
        ctx->pc = 0x120574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120570u;
        // 0x120574: 0xafa70144  sw          $a3, 0x144($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120578u;
        goto label_120578;
    }
    ctx->pc = 0x120570u;
    SET_GPR_U32(ctx, 31, 0x120578u);
    ctx->pc = 0x120574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120570u;
    // 0x120574: 0xafa70144  sw          $a3, 0x144($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x125AD0u, 0x120570u, 0x120578u)) {
        return;
    }
    ctx->pc = 0x120578u;
label_120578:
    // 0x120578: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x120578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12057c:
    // 0x12057c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x12057cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_120580:
    // 0x120580: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x120580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_120584:
    // 0x120584: 0xc0496b4  jal         func_125AD0
label_120588:
    if (ctx->pc == 0x120588u) {
        ctx->pc = 0x120588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120584u;
        // 0x120588: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12058Cu;
        goto label_12058c;
    }
    ctx->pc = 0x120584u;
    SET_GPR_U32(ctx, 31, 0x12058Cu);
    ctx->pc = 0x120588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120584u;
    // 0x120588: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x125AD0u, 0x120584u, 0x12058Cu)) {
        return;
    }
    ctx->pc = 0x12058Cu;
label_12058c:
    // 0x12058c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12058cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120590:
    // 0x120590: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x120590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_120594:
    // 0x120594: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x120594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_120598:
    // 0x120598: 0xc0496b4  jal         func_125AD0
label_12059c:
    if (ctx->pc == 0x12059Cu) {
        ctx->pc = 0x12059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120598u;
        // 0x12059c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1205A0u;
        goto label_1205a0;
    }
    ctx->pc = 0x120598u;
    SET_GPR_U32(ctx, 31, 0x1205A0u);
    ctx->pc = 0x12059Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120598u;
    // 0x12059c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x125AD0u, 0x120598u, 0x1205A0u)) {
        return;
    }
    ctx->pc = 0x1205A0u;
label_1205a0:
    // 0x1205a0: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x1205a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1205a4:
    // 0x1205a4: 0x12c80077  beq         $s6, $t0, . + 4 + (0x77 << 2)
label_1205a8:
    if (ctx->pc == 0x1205A8u) {
        ctx->pc = 0x1205A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1205A4u;
        // 0x1205a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1205ACu;
        goto label_1205ac;
    }
    ctx->pc = 0x1205A4u;
    {
        const bool branch_taken_0x1205a4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 8));
        ctx->pc = 0x1205A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1205A4u;
        // 0x1205a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1205a4) {
            ctx->pc = 0x120784u;
            goto label_120784;
        }
    }
    ctx->pc = 0x1205ACu;
label_1205ac:
    // 0x1205ac: 0x12a80075  beq         $s5, $t0, . + 4 + (0x75 << 2)
label_1205b0:
    if (ctx->pc == 0x1205B0u) {
        ctx->pc = 0x1205B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1205ACu;
        // 0x1205b0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1205B4u;
        goto label_1205b4;
    }
    ctx->pc = 0x1205ACu;
    {
        const bool branch_taken_0x1205ac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 8));
        ctx->pc = 0x1205B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1205ACu;
        // 0x1205b0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1205ac) {
            ctx->pc = 0x120784u;
            goto label_120784;
        }
    }
    ctx->pc = 0x1205B4u;
label_1205b4:
    // 0x1205b4: 0xafa0013c  sw          $zero, 0x13C($sp)
    ctx->pc = 0x1205b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
label_1205b8:
    // 0x1205b8: 0x2e21018  mult        $v0, $s7, $v0
    ctx->pc = 0x1205b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1205bc:
    // 0x1205bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1205bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1205c0:
    // 0x1205c0: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x1205c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_1205c4:
    // 0x1205c4: 0x24420f00  addiu       $v0, $v0, 0xF00
    ctx->pc = 0x1205c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3840));
label_1205c8:
    // 0x1205c8: 0xc0808f0  jal         func_2023C0
label_1205cc:
    if (ctx->pc == 0x1205CCu) {
        ctx->pc = 0x1205CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1205C8u;
        // 0x1205cc: 0x2629021  addu        $s2, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1205D0u;
        goto label_1205d0;
    }
    ctx->pc = 0x1205C8u;
    SET_GPR_U32(ctx, 31, 0x1205D0u);
    ctx->pc = 0x1205CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1205C8u;
    // 0x1205cc: 0x2629021  addu        $s2, $s3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1205C8u, 0x1205D0u)) {
        return;
    }
    ctx->pc = 0x1205D0u;
label_1205d0:
    // 0x1205d0: 0xc05402c  jal         func_1500B0
label_1205d4:
    if (ctx->pc == 0x1205D4u) {
        ctx->pc = 0x1205D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1205D0u;
        // 0x1205d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1205D8u;
        goto label_1205d8;
    }
    ctx->pc = 0x1205D0u;
    SET_GPR_U32(ctx, 31, 0x1205D8u);
    ctx->pc = 0x1205D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1205D0u;
    // 0x1205d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1500B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1500B0u, 0x1205D0u, 0x1205D8u)) {
        return;
    }
    ctx->pc = 0x1205D8u;
label_1205d8:
    // 0x1205d8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1205d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1205dc:
    // 0x1205dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1205dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1205e0:
    // 0x1205e0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1205e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1205e4:
    // 0x1205e4: 0xc06818c  jal         func_1A0630
label_1205e8:
    if (ctx->pc == 0x1205E8u) {
        ctx->pc = 0x1205E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1205E4u;
        // 0x1205e8: 0x8fa4014c  lw          $a0, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1205ECu;
        goto label_1205ec;
    }
    ctx->pc = 0x1205E4u;
    SET_GPR_U32(ctx, 31, 0x1205ECu);
    ctx->pc = 0x1205E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1205E4u;
    // 0x1205e8: 0x8fa4014c  lw          $a0, 0x14C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0630u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0630u, 0x1205E4u, 0x1205ECu)) {
        return;
    }
    ctx->pc = 0x1205ECu;
label_1205ec:
    // 0x1205ec: 0x8e620f50  lw          $v0, 0xF50($s3)
    ctx->pc = 0x1205ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3920)));
label_1205f0:
    // 0x1205f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1205f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1205f4:
    // 0x1205f4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1205f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1205f8:
    // 0x1205f8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1205f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1205fc:
    // 0x1205fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1205fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_120600:
    // 0x120600: 0xc040d12  jal         func_103448
label_120604:
    if (ctx->pc == 0x120604u) {
        ctx->pc = 0x120604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120600u;
        // 0x120604: 0xae620f50  sw          $v0, 0xF50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3920), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120608u;
        goto label_120608;
    }
    ctx->pc = 0x120600u;
    SET_GPR_U32(ctx, 31, 0x120608u);
    ctx->pc = 0x120604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120600u;
    // 0x120604: 0xae620f50  sw          $v0, 0xF50($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 3920), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x103448u, 0x120600u, 0x120608u)) {
        return;
    }
    ctx->pc = 0x120608u;
label_120608:
    // 0x120608: 0x340affff  ori         $t2, $zero, 0xFFFF
    ctx->pc = 0x120608u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_12060c:
    // 0x12060c: 0x120a0008  beq         $s0, $t2, . + 4 + (0x8 << 2)
label_120610:
    if (ctx->pc == 0x120610u) {
        ctx->pc = 0x120610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12060Cu;
        // 0x120610: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120614u;
        goto label_120614;
    }
    ctx->pc = 0x12060Cu;
    {
        const bool branch_taken_0x12060c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x120610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12060Cu;
        // 0x120610: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12060c) {
            ctx->pc = 0x120630u;
            goto label_120630;
        }
    }
    ctx->pc = 0x120614u;
label_120614:
    // 0x120614: 0x7fa90150  sq          $t1, 0x150($sp)
    ctx->pc = 0x120614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 9));
label_120618:
    // 0x120618: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x120618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12061c:
    // 0x12061c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12061cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_120620:
    // 0x120620: 0xc040d12  jal         func_103448
label_120624:
    if (ctx->pc == 0x120624u) {
        ctx->pc = 0x120624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120620u;
        // 0x120624: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120628u;
        goto label_120628;
    }
    ctx->pc = 0x120620u;
    SET_GPR_U32(ctx, 31, 0x120628u);
    ctx->pc = 0x120624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120620u;
    // 0x120624: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x103448u, 0x120620u, 0x120628u)) {
        return;
    }
    ctx->pc = 0x120628u;
label_120628:
    // 0x120628: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x120628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
label_12062c:
    // 0x12062c: 0x7ba90150  lq          $t1, 0x150($sp)
    ctx->pc = 0x12062cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_120630:
    // 0x120630: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_120634:
    // 0x120634: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x120634u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_120638:
    // 0x120638: 0x266a0310  addiu       $t2, $s3, 0x310
    ctx->pc = 0x120638u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
label_12063c:
    // 0x12063c: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x12063cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_120640:
    // 0x120640: 0x12820017  beq         $s4, $v0, . + 4 + (0x17 << 2)
label_120644:
    if (ctx->pc == 0x120644u) {
        ctx->pc = 0x120644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120640u;
        // 0x120644: 0x262b0080  addiu       $t3, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120648u;
        goto label_120648;
    }
    ctx->pc = 0x120640u;
    {
        const bool branch_taken_0x120640 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x120644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120640u;
        // 0x120644: 0x262b0080  addiu       $t3, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120640) {
            ctx->pc = 0x1206A0u;
            goto label_1206a0;
        }
    }
    ctx->pc = 0x120648u;
label_120648:
    // 0x120648: 0x8fa60148  lw          $a2, 0x148($sp)
    ctx->pc = 0x120648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_12064c:
    // 0x12064c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x12064cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_120650:
    // 0x120650: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x120650u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_120654:
    // 0x120654: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x120654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_120658:
    // 0x120658: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x120658u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12065c:
    // 0x12065c: 0x24680040  addiu       $t0, $v1, 0x40
    ctx->pc = 0x12065cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_120660:
    // 0x120660: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x120660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_120664:
    // 0x120664: 0x0  nop
    ctx->pc = 0x120664u;
    // NOP
label_120668:
    // 0x120668: 0x14470006  bne         $v0, $a3, . + 4 + (0x6 << 2)
label_12066c:
    if (ctx->pc == 0x12066Cu) {
        ctx->pc = 0x12066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120668u;
        // 0x12066c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120670u;
        goto label_120670;
    }
    ctx->pc = 0x120668u;
    {
        const bool branch_taken_0x120668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x12066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120668u;
        // 0x12066c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120668) {
            ctx->pc = 0x120684u;
            goto label_120684;
        }
    }
    ctx->pc = 0x120670u;
label_120670:
    // 0x120670: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x120670u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
label_120674:
    // 0x120674: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x120674u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
label_120678:
    // 0x120678: 0xac95fffc  sw          $s5, -0x4($a0)
    ctx->pc = 0x120678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 21));
label_12067c:
    // 0x12067c: 0x10000008  b           . + 4 + (0x8 << 2)
label_120680:
    if (ctx->pc == 0x120680u) {
        ctx->pc = 0x120680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12067Cu;
        // 0x120680: 0xac96fff8  sw          $s6, -0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294967288), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120684u;
        goto label_120684;
    }
    ctx->pc = 0x12067Cu;
    {
        const bool branch_taken_0x12067c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12067Cu;
        // 0x120680: 0xac96fff8  sw          $s6, -0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294967288), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12067c) {
            ctx->pc = 0x1206A0u;
            goto label_1206a0;
        }
    }
    ctx->pc = 0x120684u;
label_120684:
    // 0x120684: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x120684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_120688:
    // 0x120688: 0xc8102a  slt         $v0, $a2, $t0
    ctx->pc = 0x120688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_12068c:
    // 0x12068c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_120690:
    if (ctx->pc == 0x120690u) {
        ctx->pc = 0x120690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12068Cu;
        // 0x120690: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120694u;
        goto label_120694;
    }
    ctx->pc = 0x12068Cu;
    {
        const bool branch_taken_0x12068c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12068Cu;
        // 0x120690: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12068c) {
            ctx->pc = 0x1206A0u;
            goto label_1206a0;
        }
    }
    ctx->pc = 0x120694u;
label_120694:
    // 0x120694: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x120694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_120698:
    // 0x120698: 0x5682fff3  bnel        $s4, $v0, . + 4 + (-0xD << 2)
label_12069c:
    if (ctx->pc == 0x12069Cu) {
        ctx->pc = 0x12069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120698u;
        // 0x12069c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1206A0u;
        goto label_1206a0;
    }
    ctx->pc = 0x120698u;
    {
        const bool branch_taken_0x120698 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x120698) {
            ctx->pc = 0x12069Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120698u;
            // 0x12069c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120668;
        }
    }
    ctx->pc = 0x1206A0u;
label_1206a0:
    // 0x1206a0: 0xae560000  sw          $s6, 0x0($s2)
    ctx->pc = 0x1206a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 22));
label_1206a4:
    // 0x1206a4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1206a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_1206a8:
    // 0x1206a8: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x1206a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1206ac:
    // 0x1206ac: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x1206acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1206b0:
    // 0x1206b0: 0xc62000a0  lwc1        $f0, 0xA0($s1)
    ctx->pc = 0x1206b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1206b4:
    // 0x1206b4: 0x32f700ff  andi        $s7, $s7, 0xFF
    ctx->pc = 0x1206b4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_1206b8:
    // 0x1206b8: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1206b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1206bc:
    // 0x1206bc: 0xae090000  sw          $t1, 0x0($s0)
    ctx->pc = 0x1206bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 9));
label_1206c0:
    // 0x1206c0: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x1206c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_1206c4:
    // 0x1206c4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1206c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1206c8:
    // 0x1206c8: 0xc62000a8  lwc1        $f0, 0xA8($s1)
    ctx->pc = 0x1206c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1206cc:
    // 0x1206cc: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x1206ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_1206d0:
    // 0x1206d0: 0xc62100b0  lwc1        $f1, 0xB0($s1)
    ctx->pc = 0x1206d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1206d4:
    // 0x1206d4: 0xe6010044  swc1        $f1, 0x44($s0)
    ctx->pc = 0x1206d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_1206d8:
    // 0x1206d8: 0xc62000b4  lwc1        $f0, 0xB4($s1)
    ctx->pc = 0x1206d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1206dc:
    // 0x1206dc: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x1206dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_1206e0:
    // 0x1206e0: 0xc62100a4  lwc1        $f1, 0xA4($s1)
    ctx->pc = 0x1206e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1206e4:
    // 0x1206e4: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x1206e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1206e8:
    // 0x1206e8: 0xc62000ac  lwc1        $f0, 0xAC($s1)
    ctx->pc = 0x1206e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1206ec:
    // 0x1206ec: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x1206ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
label_1206f0:
    // 0x1206f0: 0xc62100b8  lwc1        $f1, 0xB8($s1)
    ctx->pc = 0x1206f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1206f4:
    // 0x1206f4: 0xe6010050  swc1        $f1, 0x50($s0)
    ctx->pc = 0x1206f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_1206f8:
    // 0x1206f8: 0xc62000c8  lwc1        $f0, 0xC8($s1)
    ctx->pc = 0x1206f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1206fc:
    // 0x1206fc: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x1206fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
label_120700:
    // 0x120700: 0xc62100bc  lwc1        $f1, 0xBC($s1)
    ctx->pc = 0x120700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_120704:
    // 0x120704: 0xe6010054  swc1        $f1, 0x54($s0)
    ctx->pc = 0x120704u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
label_120708:
    // 0x120708: 0xc62000c0  lwc1        $f0, 0xC0($s1)
    ctx->pc = 0x120708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12070c:
    // 0x12070c: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x12070cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_120710:
    // 0x120710: 0xc62100c4  lwc1        $f1, 0xC4($s1)
    ctx->pc = 0x120710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_120714:
    // 0x120714: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x120714u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_120718:
    // 0x120718: 0x962300cc  lhu         $v1, 0xCC($s1)
    ctx->pc = 0x120718u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 204)));
label_12071c:
    // 0x12071c: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x12071cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
label_120720:
    // 0x120720: 0x8e2200cc  lw          $v0, 0xCC($s1)
    ctx->pc = 0x120720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_120724:
    // 0x120724: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x120724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_120728:
    // 0x120728: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x120728u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_12072c:
    // 0x12072c: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x12072cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_120730:
    // 0x120730: 0x7faa0160  sq          $t2, 0x160($sp)
    ctx->pc = 0x120730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 10));
label_120734:
    // 0x120734: 0xc043ce6  jal         func_10F398
label_120738:
    if (ctx->pc == 0x120738u) {
        ctx->pc = 0x120738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120734u;
        // 0x120738: 0x7fab0170  sq          $t3, 0x170($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12073Cu;
        goto label_12073c;
    }
    ctx->pc = 0x120734u;
    SET_GPR_U32(ctx, 31, 0x12073Cu);
    ctx->pc = 0x120738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120734u;
    // 0x120738: 0x7fab0170  sq          $t3, 0x170($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x120734u, 0x12073Cu)) {
        return;
    }
    ctx->pc = 0x12073Cu;
label_12073c:
    // 0x12073c: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x12073cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_120740:
    // 0x120740: 0x7baa0160  lq          $t2, 0x160($sp)
    ctx->pc = 0x120740u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_120744:
    // 0x120744: 0x7bab0170  lq          $t3, 0x170($sp)
    ctx->pc = 0x120744u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_120748:
    // 0x120748: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x120748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_12074c:
    // 0x12074c: 0xc043ce6  jal         func_10F398
label_120750:
    if (ctx->pc == 0x120750u) {
        ctx->pc = 0x120750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12074Cu;
        // 0x120750: 0x160282d  daddu       $a1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120754u;
        goto label_120754;
    }
    ctx->pc = 0x12074Cu;
    SET_GPR_U32(ctx, 31, 0x120754u);
    ctx->pc = 0x120750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12074Cu;
    // 0x120750: 0x160282d  daddu       $a1, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x12074Cu, 0x120754u)) {
        return;
    }
    ctx->pc = 0x120754u;
label_120754:
    // 0x120754: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x120754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_120758:
    // 0x120758: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x120758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_12075c:
    // 0x12075c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12075cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_120760:
    // 0x120760: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x120760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
label_120764:
    // 0x120764: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x120764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_120768:
    // 0x120768: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x120768u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_12076c:
    // 0x12076c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x12076cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_120770:
    // 0x120770: 0xae03009c  sw          $v1, 0x9C($s0)
    ctx->pc = 0x120770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
label_120774:
    // 0x120774: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x120774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_120778:
    // 0x120778: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x120778u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_12077c:
    // 0x12077c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12077cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_120780:
    // 0x120780: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x120780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_120784:
    // 0x120784: 0x8fa30144  lw          $v1, 0x144($sp)
    ctx->pc = 0x120784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_120788:
    // 0x120788: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x120788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12078c:
    // 0x12078c: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x12078cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_120790:
    // 0x120790: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x120790u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_120794:
    // 0x120794: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x120794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_120798:
    // 0x120798: 0xc068132  jal         func_1A04C8
label_12079c:
    if (ctx->pc == 0x12079Cu) {
        ctx->pc = 0x12079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120798u;
        // 0x12079c: 0xafa30138  sw          $v1, 0x138($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1207A0u;
        goto label_1207a0;
    }
    ctx->pc = 0x120798u;
    SET_GPR_U32(ctx, 31, 0x1207A0u);
    ctx->pc = 0x12079Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120798u;
    // 0x12079c: 0xafa30138  sw          $v1, 0x138($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A04C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A04C8u, 0x120798u, 0x1207A0u)) {
        return;
    }
    ctx->pc = 0x1207A0u;
label_1207a0:
    // 0x1207a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1207a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1207a4:
    // 0x1207a4: 0x1620ff6e  bnez        $s1, . + 4 + (-0x92 << 2)
label_1207a8:
    if (ctx->pc == 0x1207A8u) {
        ctx->pc = 0x1207A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1207A4u;
        // 0x1207a8: 0x8fa70138  lw          $a3, 0x138($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1207ACu;
        goto label_1207ac;
    }
    ctx->pc = 0x1207A4u;
    {
        const bool branch_taken_0x1207a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1207A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1207A4u;
        // 0x1207a8: 0x8fa70138  lw          $a3, 0x138($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1207a4) {
            ctx->pc = 0x120560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120560;
        }
    }
    ctx->pc = 0x1207ACu;
label_1207ac:
    // 0x1207ac: 0x8fbe0140  lw          $fp, 0x140($sp)
    ctx->pc = 0x1207acu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1207b0:
    // 0x1207b0: 0x8fa40134  lw          $a0, 0x134($sp)
    ctx->pc = 0x1207b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_1207b4:
    // 0x1207b4: 0x3c4102a  slt         $v0, $fp, $a0
    ctx->pc = 0x1207b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1207b8:
    // 0x1207b8: 0x1440ff1b  bnez        $v0, . + 4 + (-0xE5 << 2)
label_1207bc:
    if (ctx->pc == 0x1207BCu) {
        ctx->pc = 0x1207BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1207B8u;
        // 0x1207bc: 0x8fa4014c  lw          $a0, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1207C0u;
        goto label_1207c0;
    }
    ctx->pc = 0x1207B8u;
    {
        const bool branch_taken_0x1207b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1207BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1207B8u;
        // 0x1207bc: 0x8fa4014c  lw          $a0, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1207b8) {
            ctx->pc = 0x120428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120428;
        }
    }
    ctx->pc = 0x1207C0u;
label_1207c0:
    // 0x1207c0: 0x8fb10148  lw          $s1, 0x148($sp)
    ctx->pc = 0x1207c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_1207c4:
    // 0x1207c4: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x1207c4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_1207c8:
    // 0x1207c8: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x1207c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_1207cc:
    // 0x1207cc: 0x3415ffff  ori         $s5, $zero, 0xFFFF
    ctx->pc = 0x1207ccu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1207d0:
    // 0x1207d0: 0x26340040  addiu       $s4, $s1, 0x40
    ctx->pc = 0x1207d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_1207d4:
    // 0x1207d4: 0x27b0001c  addiu       $s0, $sp, 0x1C
    ctx->pc = 0x1207d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_1207d8:
    // 0x1207d8: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x1207d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1207dc:
    // 0x1207dc: 0x10f20017  beq         $a3, $s2, . + 4 + (0x17 << 2)
label_1207e0:
    if (ctx->pc == 0x1207E0u) {
        ctx->pc = 0x1207E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1207DCu;
        // 0x1207e0: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1207E4u;
        goto label_1207e4;
    }
    ctx->pc = 0x1207DCu;
    {
        const bool branch_taken_0x1207dc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 18));
        ctx->pc = 0x1207E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1207DCu;
        // 0x1207e0: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1207dc) {
            ctx->pc = 0x12083Cu;
            goto label_12083c;
        }
    }
    ctx->pc = 0x1207E4u;
label_1207e4:
    // 0x1207e4: 0x8e05fffc  lw          $a1, -0x4($s0)
    ctx->pc = 0x1207e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
label_1207e8:
    // 0x1207e8: 0x50a3000f  beql        $a1, $v1, . + 4 + (0xF << 2)
label_1207ec:
    if (ctx->pc == 0x1207ECu) {
        ctx->pc = 0x1207ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1207E8u;
        // 0x1207ec: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1207F0u;
        goto label_1207f0;
    }
    ctx->pc = 0x1207E8u;
    {
        const bool branch_taken_0x1207e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1207e8) {
            ctx->pc = 0x1207ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1207E8u;
            // 0x1207ec: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120828u;
            goto label_120828;
        }
    }
    ctx->pc = 0x1207F0u;
label_1207f0:
    // 0x1207f0: 0x8e02fff8  lw          $v0, -0x8($s0)
    ctx->pc = 0x1207f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
label_1207f4:
    // 0x1207f4: 0x50a2000c  beql        $a1, $v0, . + 4 + (0xC << 2)
label_1207f8:
    if (ctx->pc == 0x1207F8u) {
        ctx->pc = 0x1207F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1207F4u;
        // 0x1207f8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1207FCu;
        goto label_1207fc;
    }
    ctx->pc = 0x1207F4u;
    {
        const bool branch_taken_0x1207f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1207f4) {
            ctx->pc = 0x1207F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1207F4u;
            // 0x1207f8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120828u;
            goto label_120828;
        }
    }
    ctx->pc = 0x1207FCu;
label_1207fc:
    // 0x1207fc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1207fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_120800:
    // 0x120800: 0x50c30005  beql        $a2, $v1, . + 4 + (0x5 << 2)
label_120804:
    if (ctx->pc == 0x120804u) {
        ctx->pc = 0x120804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120800u;
        // 0x120804: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120808u;
        goto label_120808;
    }
    ctx->pc = 0x120800u;
    {
        const bool branch_taken_0x120800 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x120800) {
            ctx->pc = 0x120804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120800u;
            // 0x120804: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120818u;
            goto label_120818;
        }
    }
    ctx->pc = 0x120808u;
label_120808:
    // 0x120808: 0xc040a24  jal         func_102890
label_12080c:
    if (ctx->pc == 0x12080Cu) {
        ctx->pc = 0x12080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120808u;
        // 0x12080c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120810u;
        goto label_120810;
    }
    ctx->pc = 0x120808u;
    SET_GPR_U32(ctx, 31, 0x120810u);
    ctx->pc = 0x12080Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120808u;
    // 0x12080c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102890u, 0x120808u, 0x120810u)) {
        return;
    }
    ctx->pc = 0x120810u;
label_120810:
    // 0x120810: 0x1000000b  b           . + 4 + (0xB << 2)
label_120814:
    if (ctx->pc == 0x120814u) {
        ctx->pc = 0x120814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120810u;
        // 0x120814: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120818u;
        goto label_120818;
    }
    ctx->pc = 0x120810u;
    {
        const bool branch_taken_0x120810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120810u;
        // 0x120814: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120810) {
            ctx->pc = 0x120840u;
            goto label_120840;
        }
    }
    ctx->pc = 0x120818u;
label_120818:
    // 0x120818: 0xc040d2c  jal         func_1034B0
label_12081c:
    if (ctx->pc == 0x12081Cu) {
        ctx->pc = 0x12081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120818u;
        // 0x12081c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120820u;
        goto label_120820;
    }
    ctx->pc = 0x120818u;
    SET_GPR_U32(ctx, 31, 0x120820u);
    ctx->pc = 0x12081Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120818u;
    // 0x12081c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1034B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1034B0u, 0x120818u, 0x120820u)) {
        return;
    }
    ctx->pc = 0x120820u;
label_120820:
    // 0x120820: 0x10000007  b           . + 4 + (0x7 << 2)
label_120824:
    if (ctx->pc == 0x120824u) {
        ctx->pc = 0x120824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120820u;
        // 0x120824: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120828u;
        goto label_120828;
    }
    ctx->pc = 0x120820u;
    {
        const bool branch_taken_0x120820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120820u;
        // 0x120824: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120820) {
            ctx->pc = 0x120840u;
            goto label_120840;
        }
    }
    ctx->pc = 0x120828u;
label_120828:
    // 0x120828: 0x50b50005  beql        $a1, $s5, . + 4 + (0x5 << 2)
label_12082c:
    if (ctx->pc == 0x12082Cu) {
        ctx->pc = 0x12082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120828u;
        // 0x12082c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120830u;
        goto label_120830;
    }
    ctx->pc = 0x120828u;
    {
        const bool branch_taken_0x120828 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 21));
        if (branch_taken_0x120828) {
            ctx->pc = 0x12082Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120828u;
            // 0x12082c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120840u;
            goto label_120840;
        }
    }
    ctx->pc = 0x120830u;
label_120830:
    // 0x120830: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x120830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_120834:
    // 0x120834: 0xc040d2c  jal         func_1034B0
label_120838:
    if (ctx->pc == 0x120838u) {
        ctx->pc = 0x120838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120834u;
        // 0x120838: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12083Cu;
        goto label_12083c;
    }
    ctx->pc = 0x120834u;
    SET_GPR_U32(ctx, 31, 0x12083Cu);
    ctx->pc = 0x120838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120834u;
    // 0x120838: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1034B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1034B0u, 0x120834u, 0x12083Cu)) {
        return;
    }
    ctx->pc = 0x12083Cu;
label_12083c:
    // 0x12083c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12083cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_120840:
    // 0x120840: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x120840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_120844:
    // 0x120844: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_120848:
    if (ctx->pc == 0x120848u) {
        ctx->pc = 0x120848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120844u;
        // 0x120848: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12084Cu;
        goto label_12084c;
    }
    ctx->pc = 0x120844u;
    {
        const bool branch_taken_0x120844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120844u;
        // 0x120848: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120844) {
            ctx->pc = 0x1207D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1207d8;
        }
    }
    ctx->pc = 0x12084Cu;
label_12084c:
    // 0x12084c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12084cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_120850:
    // 0x120850: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x120850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_120854:
    // 0x120854: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x120854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_120858:
    // 0x120858: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x120858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_12085c:
    // 0x12085c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12085cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_120860:
    // 0x120860: 0xc07f0c8  jal         func_1FC320
label_120864:
    if (ctx->pc == 0x120864u) {
        ctx->pc = 0x120864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120860u;
        // 0x120864: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120868u;
        goto label_120868;
    }
    ctx->pc = 0x120860u;
    SET_GPR_U32(ctx, 31, 0x120868u);
    ctx->pc = 0x120864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120860u;
    // 0x120864: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x120860u, 0x120868u)) {
        return;
    }
    ctx->pc = 0x120868u;
label_120868:
    // 0x120868: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x120868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12086c:
    // 0x12086c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12086cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_120870:
    // 0x120870: 0x1460febf  bnez        $v1, . + 4 + (-0x141 << 2)
label_120874:
    if (ctx->pc == 0x120874u) {
        ctx->pc = 0x120874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120870u;
        // 0x120874: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120878u;
        goto label_120878;
    }
    ctx->pc = 0x120870u;
    {
        const bool branch_taken_0x120870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x120874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120870u;
        // 0x120874: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120870) {
            ctx->pc = 0x120370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120370;
        }
    }
    ctx->pc = 0x120878u;
label_120878:
    // 0x120878: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x120878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_12087c:
    // 0x12087c: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x12087cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_120880:
    // 0x120880: 0x8c464660  lw          $a2, 0x4660($v0)
    ctx->pc = 0x120880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18016)));
label_120884:
    // 0x120884: 0xc07f1c0  jal         func_1FC700
label_120888:
    if (ctx->pc == 0x120888u) {
        ctx->pc = 0x120888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120884u;
        // 0x120888: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12088Cu;
        goto label_12088c;
    }
    ctx->pc = 0x120884u;
    SET_GPR_U32(ctx, 31, 0x12088Cu);
    ctx->pc = 0x120888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120884u;
    // 0x120888: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x120884u, 0x12088Cu)) {
        return;
    }
    ctx->pc = 0x12088Cu;
label_12088c:
    // 0x12088c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12088cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_120890:
    // 0x120890: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x120890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_120894:
    // 0x120894: 0x50400094  beql        $v0, $zero, . + 4 + (0x94 << 2)
label_120898:
    if (ctx->pc == 0x120898u) {
        ctx->pc = 0x120898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120894u;
        // 0x120898: 0x8e620c00  lw          $v0, 0xC00($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12089Cu;
        goto label_12089c;
    }
    ctx->pc = 0x120894u;
    {
        const bool branch_taken_0x120894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120894) {
            ctx->pc = 0x120898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120894u;
            // 0x120898: 0x8e620c00  lw          $v0, 0xC00($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120AE8u;
            goto label_120ae8;
        }
    }
    ctx->pc = 0x12089Cu;
label_12089c:
    // 0x12089c: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x12089cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
label_1208a0:
    // 0x1208a0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1208a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1208a4:
    // 0x1208a4: 0x0  nop
    ctx->pc = 0x1208a4u;
    // NOP
label_1208a8:
    // 0x1208a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1208a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1208ac:
    // 0x1208ac: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1208acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1208b0:
    // 0x1208b0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1208b4:
    if (ctx->pc == 0x1208B4u) {
        ctx->pc = 0x1208B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1208B0u;
        // 0x1208b4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1208B8u;
        goto label_1208b8;
    }
    ctx->pc = 0x1208B0u;
    {
        const bool branch_taken_0x1208b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1208B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1208B0u;
        // 0x1208b4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1208b0) {
            ctx->pc = 0x1208C8u;
            goto label_1208c8;
        }
    }
    ctx->pc = 0x1208B8u;
label_1208b8:
    // 0x1208b8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1208b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1208bc:
    // 0x1208bc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1208bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1208c0:
    // 0x1208c0: 0x1000007d  b           . + 4 + (0x7D << 2)
label_1208c4:
    if (ctx->pc == 0x1208C4u) {
        ctx->pc = 0x1208C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1208C0u;
        // 0x1208c4: 0xae620c9c  sw          $v0, 0xC9C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1208C8u;
        goto label_1208c8;
    }
    ctx->pc = 0x1208C0u;
    {
        const bool branch_taken_0x1208c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1208C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1208C0u;
        // 0x1208c4: 0xae620c9c  sw          $v0, 0xC9C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1208c0) {
            ctx->pc = 0x120AB8u;
            goto label_120ab8;
        }
    }
    ctx->pc = 0x1208C8u;
label_1208c8:
    // 0x1208c8: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_1208cc:
    if (ctx->pc == 0x1208CCu) {
        ctx->pc = 0x1208CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1208C8u;
        // 0x1208cc: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1208D0u;
        goto label_1208d0;
    }
    ctx->pc = 0x1208C8u;
    {
        const bool branch_taken_0x1208c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1208CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1208C8u;
        // 0x1208cc: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1208c8) {
            ctx->pc = 0x1208E0u;
            goto label_1208e0;
        }
    }
    ctx->pc = 0x1208D0u;
label_1208d0:
    // 0x1208d0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1208d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1208d4:
    // 0x1208d4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1208d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1208d8:
    // 0x1208d8: 0x10000077  b           . + 4 + (0x77 << 2)
label_1208dc:
    if (ctx->pc == 0x1208DCu) {
        ctx->pc = 0x1208DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1208D8u;
        // 0x1208dc: 0xae620e84  sw          $v0, 0xE84($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1208E0u;
        goto label_1208e0;
    }
    ctx->pc = 0x1208D8u;
    {
        const bool branch_taken_0x1208d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1208DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1208D8u;
        // 0x1208dc: 0xae620e84  sw          $v0, 0xE84($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1208d8) {
            ctx->pc = 0x120AB8u;
            goto label_120ab8;
        }
    }
    ctx->pc = 0x1208E0u;
label_1208e0:
    // 0x1208e0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1208e4:
    if (ctx->pc == 0x1208E4u) {
        ctx->pc = 0x1208E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1208E0u;
        // 0x1208e4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1208E8u;
        goto label_1208e8;
    }
    ctx->pc = 0x1208E0u;
    {
        const bool branch_taken_0x1208e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1208E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1208E0u;
        // 0x1208e4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1208e0) {
            ctx->pc = 0x1208F4u;
            goto label_1208f4;
        }
    }
    ctx->pc = 0x1208E8u;
label_1208e8:
    // 0x1208e8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1208e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1208ec:
    // 0x1208ec: 0x10000072  b           . + 4 + (0x72 << 2)
label_1208f0:
    if (ctx->pc == 0x1208F0u) {
        ctx->pc = 0x1208F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1208ECu;
        // 0x1208f0: 0xe6600e24  swc1        $f0, 0xE24($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3620), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1208F4u;
        goto label_1208f4;
    }
    ctx->pc = 0x1208ECu;
    {
        const bool branch_taken_0x1208ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1208F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1208ECu;
        // 0x1208f0: 0xe6600e24  swc1        $f0, 0xE24($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3620), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1208ec) {
            ctx->pc = 0x120AB8u;
            goto label_120ab8;
        }
    }
    ctx->pc = 0x1208F4u;
label_1208f4:
    // 0x1208f4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1208f8:
    if (ctx->pc == 0x1208F8u) {
        ctx->pc = 0x1208F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1208F4u;
        // 0x1208f8: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1208FCu;
        goto label_1208fc;
    }
    ctx->pc = 0x1208F4u;
    {
        const bool branch_taken_0x1208f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1208F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1208F4u;
        // 0x1208f8: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1208f4) {
            ctx->pc = 0x120908u;
            goto label_120908;
        }
    }
    ctx->pc = 0x1208FCu;
label_1208fc:
    // 0x1208fc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1208fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_120900:
    // 0x120900: 0x1000006d  b           . + 4 + (0x6D << 2)
label_120904:
    if (ctx->pc == 0x120904u) {
        ctx->pc = 0x120904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120900u;
        // 0x120904: 0xae620dd8  sw          $v0, 0xDD8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120908u;
        goto label_120908;
    }
    ctx->pc = 0x120900u;
    {
        const bool branch_taken_0x120900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120900u;
        // 0x120904: 0xae620dd8  sw          $v0, 0xDD8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120900) {
            ctx->pc = 0x120AB8u;
            goto label_120ab8;
        }
    }
    ctx->pc = 0x120908u;
label_120908:
    // 0x120908: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_12090c:
    if (ctx->pc == 0x12090Cu) {
        ctx->pc = 0x12090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120908u;
        // 0x12090c: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120910u;
        goto label_120910;
    }
    ctx->pc = 0x120908u;
    {
        const bool branch_taken_0x120908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120908u;
        // 0x12090c: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120908) {
            ctx->pc = 0x120920u;
            goto label_120920;
        }
    }
    ctx->pc = 0x120910u;
label_120910:
    // 0x120910: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x120910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_120914:
    // 0x120914: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x120914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_120918:
    // 0x120918: 0x10000067  b           . + 4 + (0x67 << 2)
label_12091c:
    if (ctx->pc == 0x12091Cu) {
        ctx->pc = 0x12091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120918u;
        // 0x12091c: 0xae620c90  sw          $v0, 0xC90($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120920u;
        goto label_120920;
    }
    ctx->pc = 0x120918u;
    {
        const bool branch_taken_0x120918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120918u;
        // 0x12091c: 0xae620c90  sw          $v0, 0xC90($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120918) {
            ctx->pc = 0x120AB8u;
            goto label_120ab8;
        }
    }
    ctx->pc = 0x120920u;
label_120920:
    // 0x120920: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_120924:
    if (ctx->pc == 0x120924u) {
        ctx->pc = 0x120924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120920u;
        // 0x120924: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120928u;
        goto label_120928;
    }
    ctx->pc = 0x120920u;
    {
        const bool branch_taken_0x120920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x120924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120920u;
        // 0x120924: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120920) {
            ctx->pc = 0x120938u;
            goto label_120938;
        }
    }
    ctx->pc = 0x120928u;
label_120928:
    // 0x120928: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x120928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_12092c:
    // 0x12092c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x12092cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_120930:
    // 0x120930: 0x10000061  b           . + 4 + (0x61 << 2)
label_120934:
    if (ctx->pc == 0x120934u) {
        ctx->pc = 0x120934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120930u;
        // 0x120934: 0xae620c98  sw          $v0, 0xC98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120938u;
        goto label_120938;
    }
    ctx->pc = 0x120930u;
    {
        const bool branch_taken_0x120930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120930u;
        // 0x120934: 0xae620c98  sw          $v0, 0xC98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120930) {
            ctx->pc = 0x120AB8u;
            goto label_120ab8;
        }
    }
    ctx->pc = 0x120938u;
label_120938:
    // 0x120938: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_12093c:
    if (ctx->pc == 0x12093Cu) {
        ctx->pc = 0x12093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120938u;
        // 0x12093c: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120940u;
        goto label_120940;
    }
    ctx->pc = 0x120938u;
    {
        const bool branch_taken_0x120938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120938u;
        // 0x12093c: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120938) {
            ctx->pc = 0x120960u;
            goto label_120960;
        }
    }
    ctx->pc = 0x120940u;
label_120940:
    // 0x120940: 0x8e640f6c  lw          $a0, 0xF6C($s3)
    ctx->pc = 0x120940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3948)));
label_120944:
    // 0x120944: 0x1080005d  beqz        $a0, . + 4 + (0x5D << 2)
label_120948:
    if (ctx->pc == 0x120948u) {
        ctx->pc = 0x120948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120944u;
        // 0x120948: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12094Cu;
        goto label_12094c;
    }
    ctx->pc = 0x120944u;
    {
        const bool branch_taken_0x120944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x120948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120944u;
        // 0x120948: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120944) {
            ctx->pc = 0x120ABCu;
            goto label_120abc;
        }
    }
    ctx->pc = 0x12094Cu;
label_12094c:
    // 0x12094c: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x12094cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_120950:
    // 0x120950: 0xc050474  jal         func_1411D0
label_120954:
    if (ctx->pc == 0x120954u) {
        ctx->pc = 0x120954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120950u;
        // 0x120954: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x120958u;
        goto label_120958;
    }
    ctx->pc = 0x120950u;
    SET_GPR_U32(ctx, 31, 0x120958u);
    ctx->pc = 0x120954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120950u;
    // 0x120954: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1411D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1411D0u, 0x120950u, 0x120958u)) {
        return;
    }
    ctx->pc = 0x120958u;
label_120958:
    // 0x120958: 0x10000058  b           . + 4 + (0x58 << 2)
label_12095c:
    if (ctx->pc == 0x12095Cu) {
        ctx->pc = 0x12095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120958u;
        // 0x12095c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120960u;
        goto label_120960;
    }
    ctx->pc = 0x120958u;
    {
        const bool branch_taken_0x120958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120958u;
        // 0x12095c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120958) {
            ctx->pc = 0x120ABCu;
            goto label_120abc;
        }
    }
    ctx->pc = 0x120960u;
label_120960:
    // 0x120960: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_120964:
    if (ctx->pc == 0x120964u) {
        ctx->pc = 0x120968u;
        goto label_120968;
    }
    ctx->pc = 0x120960u;
    {
        const bool branch_taken_0x120960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x120960) {
            ctx->pc = 0x120984u;
            goto label_120984;
        }
    }
    ctx->pc = 0x120968u;
label_120968:
    // 0x120968: 0x8e640eac  lw          $a0, 0xEAC($s3)
    ctx->pc = 0x120968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3756)));
label_12096c:
    // 0x12096c: 0x10800052  beqz        $a0, . + 4 + (0x52 << 2)
label_120970:
    if (ctx->pc == 0x120970u) {
        ctx->pc = 0x120970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12096Cu;
        // 0x120970: 0xc4ac0008  lwc1        $f12, 0x8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x120974u;
        goto label_120974;
    }
    ctx->pc = 0x12096Cu;
    {
        const bool branch_taken_0x12096c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x120970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12096Cu;
        // 0x120970: 0xc4ac0008  lwc1        $f12, 0x8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12096c) {
            ctx->pc = 0x120AB8u;
            goto label_120ab8;
        }
    }
    ctx->pc = 0x120974u;
label_120974:
    // 0x120974: 0xc059cbc  jal         func_1672F0
label_120978:
    if (ctx->pc == 0x120978u) {
        ctx->pc = 0x120978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120974u;
        // 0x120978: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12097Cu;
        goto label_12097c;
    }
    ctx->pc = 0x120974u;
    SET_GPR_U32(ctx, 31, 0x12097Cu);
    ctx->pc = 0x120978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120974u;
    // 0x120978: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1672F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1672F0u, 0x120974u, 0x12097Cu)) {
        return;
    }
    ctx->pc = 0x12097Cu;
label_12097c:
    // 0x12097c: 0x1000004f  b           . + 4 + (0x4F << 2)
label_120980:
    if (ctx->pc == 0x120980u) {
        ctx->pc = 0x120980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12097Cu;
        // 0x120980: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120984u;
        goto label_120984;
    }
    ctx->pc = 0x12097Cu;
    {
        const bool branch_taken_0x12097c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12097Cu;
        // 0x120980: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12097c) {
            ctx->pc = 0x120ABCu;
            goto label_120abc;
        }
    }
    ctx->pc = 0x120984u;
label_120984:
    // 0x120984: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_120988:
    if (ctx->pc == 0x120988u) {
        ctx->pc = 0x120988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120984u;
        // 0x120988: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12098Cu;
        goto label_12098c;
    }
    ctx->pc = 0x120984u;
    {
        const bool branch_taken_0x120984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x120988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120984u;
        // 0x120988: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120984) {
            ctx->pc = 0x120998u;
            goto label_120998;
        }
    }
    ctx->pc = 0x12098Cu;
label_12098c:
    // 0x12098c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x12098cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_120990:
    // 0x120990: 0x10000049  b           . + 4 + (0x49 << 2)
label_120994:
    if (ctx->pc == 0x120994u) {
        ctx->pc = 0x120994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120990u;
        // 0x120994: 0xe6600e14  swc1        $f0, 0xE14($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3604), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x120998u;
        goto label_120998;
    }
    ctx->pc = 0x120990u;
    {
        const bool branch_taken_0x120990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120990u;
        // 0x120994: 0xe6600e14  swc1        $f0, 0xE14($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3604), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x120990) {
            ctx->pc = 0x120AB8u;
            goto label_120ab8;
        }
    }
    ctx->pc = 0x120998u;
label_120998:
    // 0x120998: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_12099c:
    if (ctx->pc == 0x12099Cu) {
        ctx->pc = 0x12099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120998u;
        // 0x12099c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1209A0u;
        goto label_1209a0;
    }
    ctx->pc = 0x120998u;
    {
        const bool branch_taken_0x120998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x120998) {
            ctx->pc = 0x12099Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120998u;
            // 0x12099c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1209ACu;
            goto label_1209ac;
        }
    }
    ctx->pc = 0x1209A0u;
label_1209a0:
    // 0x1209a0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1209a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1209a4:
    // 0x1209a4: 0x10000044  b           . + 4 + (0x44 << 2)
label_1209a8:
    if (ctx->pc == 0x1209A8u) {
        ctx->pc = 0x1209A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209A4u;
        // 0x1209a8: 0xae620d18  sw          $v0, 0xD18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1209ACu;
        goto label_1209ac;
    }
    ctx->pc = 0x1209A4u;
    {
        const bool branch_taken_0x1209a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1209A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209A4u;
        // 0x1209a8: 0xae620d18  sw          $v0, 0xD18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1209a4) {
            ctx->pc = 0x120AB8u;
            goto label_120ab8;
        }
    }
    ctx->pc = 0x1209ACu;
label_1209ac:
    // 0x1209ac: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1209acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1209b0:
    // 0x1209b0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1209b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1209b4:
    // 0x1209b4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1209b8:
    if (ctx->pc == 0x1209B8u) {
        ctx->pc = 0x1209B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209B4u;
        // 0x1209b8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1209BCu;
        goto label_1209bc;
    }
    ctx->pc = 0x1209B4u;
    {
        const bool branch_taken_0x1209b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1209B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209B4u;
        // 0x1209b8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1209b4) {
            ctx->pc = 0x1209D4u;
            goto label_1209d4;
        }
    }
    ctx->pc = 0x1209BCu;
label_1209bc:
    // 0x1209bc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1209bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1209c0:
    // 0x1209c0: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x1209c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_1209c4:
    // 0x1209c4: 0x1444003c  bne         $v0, $a0, . + 4 + (0x3C << 2)
label_1209c8:
    if (ctx->pc == 0x1209C8u) {
        ctx->pc = 0x1209C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209C4u;
        // 0x1209c8: 0xe6600bd8  swc1        $f0, 0xBD8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3032), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1209CCu;
        goto label_1209cc;
    }
    ctx->pc = 0x1209C4u;
    {
        const bool branch_taken_0x1209c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1209C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209C4u;
        // 0x1209c8: 0xe6600bd8  swc1        $f0, 0xBD8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3032), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1209c4) {
            ctx->pc = 0x120AB8u;
            goto label_120ab8;
        }
    }
    ctx->pc = 0x1209CCu;
label_1209cc:
    // 0x1209cc: 0x1000003a  b           . + 4 + (0x3A << 2)
label_1209d0:
    if (ctx->pc == 0x1209D0u) {
        ctx->pc = 0x1209D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209CCu;
        // 0x1209d0: 0xe6600bdc  swc1        $f0, 0xBDC($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3036), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1209D4u;
        goto label_1209d4;
    }
    ctx->pc = 0x1209CCu;
    {
        const bool branch_taken_0x1209cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1209D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209CCu;
        // 0x1209d0: 0xe6600bdc  swc1        $f0, 0xBDC($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3036), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1209cc) {
            ctx->pc = 0x120AB8u;
            goto label_120ab8;
        }
    }
    ctx->pc = 0x1209D4u;
label_1209d4:
    // 0x1209d4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1209d8:
    if (ctx->pc == 0x1209D8u) {
        ctx->pc = 0x1209D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209D4u;
        // 0x1209d8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1209DCu;
        goto label_1209dc;
    }
    ctx->pc = 0x1209D4u;
    {
        const bool branch_taken_0x1209d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1209D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209D4u;
        // 0x1209d8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1209d4) {
            ctx->pc = 0x1209F0u;
            goto label_1209f0;
        }
    }
    ctx->pc = 0x1209DCu;
label_1209dc:
    // 0x1209dc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1209dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1209e0:
    // 0x1209e0: 0xc043ce6  jal         func_10F398
label_1209e4:
    if (ctx->pc == 0x1209E4u) {
        ctx->pc = 0x1209E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209E0u;
        // 0x1209e4: 0x26640310  addiu       $a0, $s3, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1209E8u;
        goto label_1209e8;
    }
    ctx->pc = 0x1209E0u;
    SET_GPR_U32(ctx, 31, 0x1209E8u);
    ctx->pc = 0x1209E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1209E0u;
    // 0x1209e4: 0x26640310  addiu       $a0, $s3, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x1209E0u, 0x1209E8u)) {
        return;
    }
    ctx->pc = 0x1209E8u;
label_1209e8:
    // 0x1209e8: 0x10000033  b           . + 4 + (0x33 << 2)
label_1209ec:
    if (ctx->pc == 0x1209ECu) {
        ctx->pc = 0x1209ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209E8u;
        // 0x1209ec: 0xae620eb8  sw          $v0, 0xEB8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3768), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1209F0u;
        goto label_1209f0;
    }
    ctx->pc = 0x1209E8u;
    {
        const bool branch_taken_0x1209e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1209ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209E8u;
        // 0x1209ec: 0xae620eb8  sw          $v0, 0xEB8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3768), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1209e8) {
            ctx->pc = 0x120AB8u;
            goto label_120ab8;
        }
    }
    ctx->pc = 0x1209F0u;
label_1209f0:
    // 0x1209f0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1209f4:
    if (ctx->pc == 0x1209F4u) {
        ctx->pc = 0x1209F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209F0u;
        // 0x1209f4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1209F8u;
        goto label_1209f8;
    }
    ctx->pc = 0x1209F0u;
    {
        const bool branch_taken_0x1209f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1209F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209F0u;
        // 0x1209f4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1209f0) {
            ctx->pc = 0x120A0Cu;
            goto label_120a0c;
        }
    }
    ctx->pc = 0x1209F8u;
label_1209f8:
    // 0x1209f8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1209f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1209fc:
    // 0x1209fc: 0xc043ce6  jal         func_10F398
label_120a00:
    if (ctx->pc == 0x120A00u) {
        ctx->pc = 0x120A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209FCu;
        // 0x120a00: 0x26640310  addiu       $a0, $s3, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120A04u;
        goto label_120a04;
    }
    ctx->pc = 0x1209FCu;
    SET_GPR_U32(ctx, 31, 0x120A04u);
    ctx->pc = 0x120A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1209FCu;
    // 0x120a00: 0x26640310  addiu       $a0, $s3, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x1209FCu, 0x120A04u)) {
        return;
    }
    ctx->pc = 0x120A04u;
label_120a04:
    // 0x120a04: 0x1000002c  b           . + 4 + (0x2C << 2)
label_120a08:
    if (ctx->pc == 0x120A08u) {
        ctx->pc = 0x120A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A04u;
        // 0x120a08: 0xae620ebc  sw          $v0, 0xEBC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3772), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120A0Cu;
        goto label_120a0c;
    }
    ctx->pc = 0x120A04u;
    {
        const bool branch_taken_0x120a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A04u;
        // 0x120a08: 0xae620ebc  sw          $v0, 0xEBC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3772), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a04) {
            ctx->pc = 0x120AB8u;
            goto label_120ab8;
        }
    }
    ctx->pc = 0x120A0Cu;
label_120a0c:
    // 0x120a0c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_120a10:
    if (ctx->pc == 0x120A10u) {
        ctx->pc = 0x120A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A0Cu;
        // 0x120a10: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120A14u;
        goto label_120a14;
    }
    ctx->pc = 0x120A0Cu;
    {
        const bool branch_taken_0x120a0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x120A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A0Cu;
        // 0x120a10: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a0c) {
            ctx->pc = 0x120A28u;
            goto label_120a28;
        }
    }
    ctx->pc = 0x120A14u;
label_120a14:
    // 0x120a14: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x120a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_120a18:
    // 0x120a18: 0xc043ce6  jal         func_10F398
label_120a1c:
    if (ctx->pc == 0x120A1Cu) {
        ctx->pc = 0x120A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A18u;
        // 0x120a1c: 0x26640310  addiu       $a0, $s3, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120A20u;
        goto label_120a20;
    }
    ctx->pc = 0x120A18u;
    SET_GPR_U32(ctx, 31, 0x120A20u);
    ctx->pc = 0x120A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120A18u;
    // 0x120a1c: 0x26640310  addiu       $a0, $s3, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x120A18u, 0x120A20u)) {
        return;
    }
    ctx->pc = 0x120A20u;
label_120a20:
    // 0x120a20: 0x10000025  b           . + 4 + (0x25 << 2)
label_120a24:
    if (ctx->pc == 0x120A24u) {
        ctx->pc = 0x120A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A20u;
        // 0x120a24: 0xae620ec0  sw          $v0, 0xEC0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3776), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120A28u;
        goto label_120a28;
    }
    ctx->pc = 0x120A20u;
    {
        const bool branch_taken_0x120a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A20u;
        // 0x120a24: 0xae620ec0  sw          $v0, 0xEC0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3776), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a20) {
            ctx->pc = 0x120AB8u;
            goto label_120ab8;
        }
    }
    ctx->pc = 0x120A28u;
label_120a28:
    // 0x120a28: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_120a2c:
    if (ctx->pc == 0x120A2Cu) {
        ctx->pc = 0x120A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A28u;
        // 0x120a2c: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120A30u;
        goto label_120a30;
    }
    ctx->pc = 0x120A28u;
    {
        const bool branch_taken_0x120a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x120A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A28u;
        // 0x120a2c: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a28) {
            ctx->pc = 0x120A44u;
            goto label_120a44;
        }
    }
    ctx->pc = 0x120A30u;
label_120a30:
    // 0x120a30: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x120a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_120a34:
    // 0x120a34: 0xc043ce6  jal         func_10F398
label_120a38:
    if (ctx->pc == 0x120A38u) {
        ctx->pc = 0x120A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A34u;
        // 0x120a38: 0x26640310  addiu       $a0, $s3, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120A3Cu;
        goto label_120a3c;
    }
    ctx->pc = 0x120A34u;
    SET_GPR_U32(ctx, 31, 0x120A3Cu);
    ctx->pc = 0x120A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120A34u;
    // 0x120a38: 0x26640310  addiu       $a0, $s3, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x120A34u, 0x120A3Cu)) {
        return;
    }
    ctx->pc = 0x120A3Cu;
label_120a3c:
    // 0x120a3c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_120a40:
    if (ctx->pc == 0x120A40u) {
        ctx->pc = 0x120A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A3Cu;
        // 0x120a40: 0xae620ec4  sw          $v0, 0xEC4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3780), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120A44u;
        goto label_120a44;
    }
    ctx->pc = 0x120A3Cu;
    {
        const bool branch_taken_0x120a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A3Cu;
        // 0x120a40: 0xae620ec4  sw          $v0, 0xEC4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3780), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a3c) {
            ctx->pc = 0x120AB8u;
            goto label_120ab8;
        }
    }
    ctx->pc = 0x120A44u;
label_120a44:
    // 0x120a44: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_120a48:
    if (ctx->pc == 0x120A48u) {
        ctx->pc = 0x120A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A44u;
        // 0x120a48: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120A4Cu;
        goto label_120a4c;
    }
    ctx->pc = 0x120A44u;
    {
        const bool branch_taken_0x120a44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x120A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A44u;
        // 0x120a48: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a44) {
            ctx->pc = 0x120A58u;
            goto label_120a58;
        }
    }
    ctx->pc = 0x120A4Cu;
label_120a4c:
    // 0x120a4c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x120a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_120a50:
    // 0x120a50: 0x10000005  b           . + 4 + (0x5 << 2)
label_120a54:
    if (ctx->pc == 0x120A54u) {
        ctx->pc = 0x120A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A50u;
        // 0x120a54: 0x26640bf0  addiu       $a0, $s3, 0xBF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120A58u;
        goto label_120a58;
    }
    ctx->pc = 0x120A50u;
    {
        const bool branch_taken_0x120a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A50u;
        // 0x120a54: 0x26640bf0  addiu       $a0, $s3, 0xBF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a50) {
            ctx->pc = 0x120A68u;
            goto label_120a68;
        }
    }
    ctx->pc = 0x120A58u;
label_120a58:
    // 0x120a58: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_120a5c:
    if (ctx->pc == 0x120A5Cu) {
        ctx->pc = 0x120A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A58u;
        // 0x120a5c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120A60u;
        goto label_120a60;
    }
    ctx->pc = 0x120A58u;
    {
        const bool branch_taken_0x120a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x120A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A58u;
        // 0x120a5c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a58) {
            ctx->pc = 0x120A78u;
            goto label_120a78;
        }
    }
    ctx->pc = 0x120A60u;
label_120a60:
    // 0x120a60: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x120a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_120a64:
    // 0x120a64: 0x26640bf8  addiu       $a0, $s3, 0xBF8
    ctx->pc = 0x120a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3064));
label_120a68:
    // 0x120a68: 0xc07fce0  jal         func_1FF380
label_120a6c:
    if (ctx->pc == 0x120A6Cu) {
        ctx->pc = 0x120A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A68u;
        // 0x120a6c: 0x2606bdd0  addiu       $a2, $s0, -0x4230 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120A70u;
        goto label_120a70;
    }
    ctx->pc = 0x120A68u;
    SET_GPR_U32(ctx, 31, 0x120A70u);
    ctx->pc = 0x120A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120A68u;
    // 0x120a6c: 0x2606bdd0  addiu       $a2, $s0, -0x4230 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x120A68u, 0x120A70u)) {
        return;
    }
    ctx->pc = 0x120A70u;
label_120a70:
    // 0x120a70: 0x10000012  b           . + 4 + (0x12 << 2)
label_120a74:
    if (ctx->pc == 0x120A74u) {
        ctx->pc = 0x120A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A70u;
        // 0x120a74: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120A78u;
        goto label_120a78;
    }
    ctx->pc = 0x120A70u;
    {
        const bool branch_taken_0x120a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A70u;
        // 0x120a74: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a70) {
            ctx->pc = 0x120ABCu;
            goto label_120abc;
        }
    }
    ctx->pc = 0x120A78u;
label_120a78:
    // 0x120a78: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_120a7c:
    if (ctx->pc == 0x120A7Cu) {
        ctx->pc = 0x120A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A78u;
        // 0x120a7c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120A80u;
        goto label_120a80;
    }
    ctx->pc = 0x120A78u;
    {
        const bool branch_taken_0x120a78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x120A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A78u;
        // 0x120a7c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a78) {
            ctx->pc = 0x120A90u;
            goto label_120a90;
        }
    }
    ctx->pc = 0x120A80u;
label_120a80:
    // 0x120a80: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x120a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_120a84:
    // 0x120a84: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x120a84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_120a88:
    // 0x120a88: 0x1000000b  b           . + 4 + (0xB << 2)
label_120a8c:
    if (ctx->pc == 0x120A8Cu) {
        ctx->pc = 0x120A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A88u;
        // 0x120a8c: 0xae620c74  sw          $v0, 0xC74($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120A90u;
        goto label_120a90;
    }
    ctx->pc = 0x120A88u;
    {
        const bool branch_taken_0x120a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A88u;
        // 0x120a8c: 0xae620c74  sw          $v0, 0xC74($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a88) {
            ctx->pc = 0x120AB8u;
            goto label_120ab8;
        }
    }
    ctx->pc = 0x120A90u;
label_120a90:
    // 0x120a90: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_120a94:
    if (ctx->pc == 0x120A94u) {
        ctx->pc = 0x120A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A90u;
        // 0x120a94: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120A98u;
        goto label_120a98;
    }
    ctx->pc = 0x120A90u;
    {
        const bool branch_taken_0x120a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x120A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A90u;
        // 0x120a94: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a90) {
            ctx->pc = 0x120AA8u;
            goto label_120aa8;
        }
    }
    ctx->pc = 0x120A98u;
label_120a98:
    // 0x120a98: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x120a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_120a9c:
    // 0x120a9c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x120a9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_120aa0:
    // 0x120aa0: 0x10000005  b           . + 4 + (0x5 << 2)
label_120aa4:
    if (ctx->pc == 0x120AA4u) {
        ctx->pc = 0x120AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120AA0u;
        // 0x120aa4: 0xae620c78  sw          $v0, 0xC78($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120AA8u;
        goto label_120aa8;
    }
    ctx->pc = 0x120AA0u;
    {
        const bool branch_taken_0x120aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120AA0u;
        // 0x120aa4: 0xae620c78  sw          $v0, 0xC78($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120aa0) {
            ctx->pc = 0x120AB8u;
            goto label_120ab8;
        }
    }
    ctx->pc = 0x120AA8u;
label_120aa8:
    // 0x120aa8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_120aac:
    if (ctx->pc == 0x120AACu) {
        ctx->pc = 0x120AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120AA8u;
        // 0x120aac: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120AB0u;
        goto label_120ab0;
    }
    ctx->pc = 0x120AA8u;
    {
        const bool branch_taken_0x120aa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x120AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120AA8u;
        // 0x120aac: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120aa8) {
            ctx->pc = 0x120ABCu;
            goto label_120abc;
        }
    }
    ctx->pc = 0x120AB0u;
label_120ab0:
    // 0x120ab0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x120ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_120ab4:
    // 0x120ab4: 0xae620ca4  sw          $v0, 0xCA4($s3)
    ctx->pc = 0x120ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3236), GPR_U32(ctx, 2));
label_120ab8:
    // 0x120ab8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_120abc:
    // 0x120abc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x120abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_120ac0:
    // 0x120ac0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x120ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_120ac4:
    // 0x120ac4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x120ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_120ac8:
    // 0x120ac8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x120ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_120acc:
    // 0x120acc: 0xc07f0c8  jal         func_1FC320
label_120ad0:
    if (ctx->pc == 0x120AD0u) {
        ctx->pc = 0x120AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120ACCu;
        // 0x120ad0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120AD4u;
        goto label_120ad4;
    }
    ctx->pc = 0x120ACCu;
    SET_GPR_U32(ctx, 31, 0x120AD4u);
    ctx->pc = 0x120AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120ACCu;
    // 0x120ad0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x120ACCu, 0x120AD4u)) {
        return;
    }
    ctx->pc = 0x120AD4u;
label_120ad4:
    // 0x120ad4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x120ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_120ad8:
    // 0x120ad8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x120ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_120adc:
    // 0x120adc: 0x1460ff72  bnez        $v1, . + 4 + (-0x8E << 2)
label_120ae0:
    if (ctx->pc == 0x120AE0u) {
        ctx->pc = 0x120AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120ADCu;
        // 0x120ae0: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120AE4u;
        goto label_120ae4;
    }
    ctx->pc = 0x120ADCu;
    {
        const bool branch_taken_0x120adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x120AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120ADCu;
        // 0x120ae0: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120adc) {
            ctx->pc = 0x1208A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1208a8;
        }
    }
    ctx->pc = 0x120AE4u;
label_120ae4:
    // 0x120ae4: 0x8e620c00  lw          $v0, 0xC00($s3)
    ctx->pc = 0x120ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3072)));
label_120ae8:
    // 0x120ae8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_120aec:
    if (ctx->pc == 0x120AECu) {
        ctx->pc = 0x120AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120AE8u;
        // 0x120aec: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120AF0u;
        goto label_120af0;
    }
    ctx->pc = 0x120AE8u;
    {
        const bool branch_taken_0x120ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120AE8u;
        // 0x120aec: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ae8) {
            ctx->pc = 0x120B00u;
            goto label_120b00;
        }
    }
    ctx->pc = 0x120AF0u;
label_120af0:
    // 0x120af0: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x120af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_120af4:
    // 0x120af4: 0xc048384  jal         func_120E10
label_120af8:
    if (ctx->pc == 0x120AF8u) {
        ctx->pc = 0x120AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120AF4u;
        // 0x120af8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120AFCu;
        goto label_120afc;
    }
    ctx->pc = 0x120AF4u;
    SET_GPR_U32(ctx, 31, 0x120AFCu);
    ctx->pc = 0x120AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120AF4u;
    // 0x120af8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120E10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x120E10u, 0x120AF4u, 0x120AFCu)) {
        return;
    }
    ctx->pc = 0x120AFCu;
label_120afc:
    // 0x120afc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x120afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_120b00:
    // 0x120b00: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x120b00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_120b04:
    // 0x120b04: 0x8c46ee88  lw          $a2, -0x1178($v0)
    ctx->pc = 0x120b04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962824)));
label_120b08:
    // 0x120b08: 0xc07f1c0  jal         func_1FC700
label_120b0c:
    if (ctx->pc == 0x120B0Cu) {
        ctx->pc = 0x120B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B08u;
        // 0x120b0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120B10u;
        goto label_120b10;
    }
    ctx->pc = 0x120B08u;
    SET_GPR_U32(ctx, 31, 0x120B10u);
    ctx->pc = 0x120B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120B08u;
    // 0x120b0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x120B08u, 0x120B10u)) {
        return;
    }
    ctx->pc = 0x120B10u;
label_120b10:
    // 0x120b10: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_120b14:
    // 0x120b14: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x120b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_120b18:
    // 0x120b18: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_120b1c:
    if (ctx->pc == 0x120B1Cu) {
        ctx->pc = 0x120B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B18u;
        // 0x120b1c: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120B20u;
        goto label_120b20;
    }
    ctx->pc = 0x120B18u;
    {
        const bool branch_taken_0x120b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B18u;
        // 0x120b1c: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120b18) {
            ctx->pc = 0x120B64u;
            goto label_120b64;
        }
    }
    ctx->pc = 0x120B20u;
label_120b20:
    // 0x120b20: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_120b24:
    // 0x120b24: 0x0  nop
    ctx->pc = 0x120b24u;
    // NOP
label_120b28:
    // 0x120b28: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x120b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_120b2c:
    // 0x120b2c: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
label_120b30:
    if (ctx->pc == 0x120B30u) {
        ctx->pc = 0x120B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B2Cu;
        // 0x120b30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120B34u;
        goto label_120b34;
    }
    ctx->pc = 0x120B2Cu;
    {
        const bool branch_taken_0x120b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x120B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B2Cu;
        // 0x120b30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120b2c) {
            ctx->pc = 0x120B40u;
            goto label_120b40;
        }
    }
    ctx->pc = 0x120B34u;
label_120b34:
    // 0x120b34: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x120b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_120b38:
    // 0x120b38: 0xe6600d14  swc1        $f0, 0xD14($s3)
    ctx->pc = 0x120b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3348), bits); }
label_120b3c:
    // 0x120b3c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_120b40:
    // 0x120b40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x120b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_120b44:
    // 0x120b44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x120b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_120b48:
    // 0x120b48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x120b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_120b4c:
    // 0x120b4c: 0xc07f0c8  jal         func_1FC320
label_120b50:
    if (ctx->pc == 0x120B50u) {
        ctx->pc = 0x120B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B4Cu;
        // 0x120b50: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120B54u;
        goto label_120b54;
    }
    ctx->pc = 0x120B4Cu;
    SET_GPR_U32(ctx, 31, 0x120B54u);
    ctx->pc = 0x120B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120B4Cu;
    // 0x120b50: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x120B4Cu, 0x120B54u)) {
        return;
    }
    ctx->pc = 0x120B54u;
label_120b54:
    // 0x120b54: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x120b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_120b58:
    // 0x120b58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x120b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_120b5c:
    // 0x120b5c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_120b60:
    if (ctx->pc == 0x120B60u) {
        ctx->pc = 0x120B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B5Cu;
        // 0x120b60: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120B64u;
        goto label_120b64;
    }
    ctx->pc = 0x120B5Cu;
    {
        const bool branch_taken_0x120b5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x120B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B5Cu;
        // 0x120b60: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120b5c) {
            ctx->pc = 0x120B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120b28;
        }
    }
    ctx->pc = 0x120B64u;
label_120b64:
    // 0x120b64: 0x7bb00210  lq          $s0, 0x210($sp)
    ctx->pc = 0x120b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_120b68:
    // 0x120b68: 0x7bb10200  lq          $s1, 0x200($sp)
    ctx->pc = 0x120b68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_120b6c:
    // 0x120b6c: 0x7bb201f0  lq          $s2, 0x1F0($sp)
    ctx->pc = 0x120b6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_120b70:
    // 0x120b70: 0x7bb301e0  lq          $s3, 0x1E0($sp)
    ctx->pc = 0x120b70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_120b74:
    // 0x120b74: 0x7bb401d0  lq          $s4, 0x1D0($sp)
    ctx->pc = 0x120b74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_120b78:
    // 0x120b78: 0x7bb501c0  lq          $s5, 0x1C0($sp)
    ctx->pc = 0x120b78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_120b7c:
    // 0x120b7c: 0x7bb601b0  lq          $s6, 0x1B0($sp)
    ctx->pc = 0x120b7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_120b80:
    // 0x120b80: 0x7bb701a0  lq          $s7, 0x1A0($sp)
    ctx->pc = 0x120b80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_120b84:
    // 0x120b84: 0x7bbe0190  lq          $fp, 0x190($sp)
    ctx->pc = 0x120b84u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_120b88:
    // 0x120b88: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x120b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_120b8c:
    // 0x120b8c: 0x3e00008  jr          $ra
label_120b90:
    if (ctx->pc == 0x120B90u) {
        ctx->pc = 0x120B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B8Cu;
        // 0x120b90: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120B94u;
        goto label_120b94;
    }
    ctx->pc = 0x120B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B8Cu;
        // 0x120b90: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120B94u;
label_120b94:
    // 0x120b94: 0x0  nop
    ctx->pc = 0x120b94u;
    // NOP
    ctx->pc = 0x120b98u;
}
