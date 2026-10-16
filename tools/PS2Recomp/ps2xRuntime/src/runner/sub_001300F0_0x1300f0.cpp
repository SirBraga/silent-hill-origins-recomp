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

// Function: sub_001300F0
// Address: 0x1300f0 - 0x1314d8
void sub_001300F0_0x1300f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001300F0_0x1300f0");
#endif

    switch (ctx->pc) {
        case 0x1300f0u: goto label_1300f0;
        case 0x1300f4u: goto label_1300f4;
        case 0x1300f8u: goto label_1300f8;
        case 0x1300fcu: goto label_1300fc;
        case 0x130100u: goto label_130100;
        case 0x130104u: goto label_130104;
        case 0x130108u: goto label_130108;
        case 0x13010cu: goto label_13010c;
        case 0x130110u: goto label_130110;
        case 0x130114u: goto label_130114;
        case 0x130118u: goto label_130118;
        case 0x13011cu: goto label_13011c;
        case 0x130120u: goto label_130120;
        case 0x130124u: goto label_130124;
        case 0x130128u: goto label_130128;
        case 0x13012cu: goto label_13012c;
        case 0x130130u: goto label_130130;
        case 0x130134u: goto label_130134;
        case 0x130138u: goto label_130138;
        case 0x13013cu: goto label_13013c;
        case 0x130140u: goto label_130140;
        case 0x130144u: goto label_130144;
        case 0x130148u: goto label_130148;
        case 0x13014cu: goto label_13014c;
        case 0x130150u: goto label_130150;
        case 0x130154u: goto label_130154;
        case 0x130158u: goto label_130158;
        case 0x13015cu: goto label_13015c;
        case 0x130160u: goto label_130160;
        case 0x130164u: goto label_130164;
        case 0x130168u: goto label_130168;
        case 0x13016cu: goto label_13016c;
        case 0x130170u: goto label_130170;
        case 0x130174u: goto label_130174;
        case 0x130178u: goto label_130178;
        case 0x13017cu: goto label_13017c;
        case 0x130180u: goto label_130180;
        case 0x130184u: goto label_130184;
        case 0x130188u: goto label_130188;
        case 0x13018cu: goto label_13018c;
        case 0x130190u: goto label_130190;
        case 0x130194u: goto label_130194;
        case 0x130198u: goto label_130198;
        case 0x13019cu: goto label_13019c;
        case 0x1301a0u: goto label_1301a0;
        case 0x1301a4u: goto label_1301a4;
        case 0x1301a8u: goto label_1301a8;
        case 0x1301acu: goto label_1301ac;
        case 0x1301b0u: goto label_1301b0;
        case 0x1301b4u: goto label_1301b4;
        case 0x1301b8u: goto label_1301b8;
        case 0x1301bcu: goto label_1301bc;
        case 0x1301c0u: goto label_1301c0;
        case 0x1301c4u: goto label_1301c4;
        case 0x1301c8u: goto label_1301c8;
        case 0x1301ccu: goto label_1301cc;
        case 0x1301d0u: goto label_1301d0;
        case 0x1301d4u: goto label_1301d4;
        case 0x1301d8u: goto label_1301d8;
        case 0x1301dcu: goto label_1301dc;
        case 0x1301e0u: goto label_1301e0;
        case 0x1301e4u: goto label_1301e4;
        case 0x1301e8u: goto label_1301e8;
        case 0x1301ecu: goto label_1301ec;
        case 0x1301f0u: goto label_1301f0;
        case 0x1301f4u: goto label_1301f4;
        case 0x1301f8u: goto label_1301f8;
        case 0x1301fcu: goto label_1301fc;
        case 0x130200u: goto label_130200;
        case 0x130204u: goto label_130204;
        case 0x130208u: goto label_130208;
        case 0x13020cu: goto label_13020c;
        case 0x130210u: goto label_130210;
        case 0x130214u: goto label_130214;
        case 0x130218u: goto label_130218;
        case 0x13021cu: goto label_13021c;
        case 0x130220u: goto label_130220;
        case 0x130224u: goto label_130224;
        case 0x130228u: goto label_130228;
        case 0x13022cu: goto label_13022c;
        case 0x130230u: goto label_130230;
        case 0x130234u: goto label_130234;
        case 0x130238u: goto label_130238;
        case 0x13023cu: goto label_13023c;
        case 0x130240u: goto label_130240;
        case 0x130244u: goto label_130244;
        case 0x130248u: goto label_130248;
        case 0x13024cu: goto label_13024c;
        case 0x130250u: goto label_130250;
        case 0x130254u: goto label_130254;
        case 0x130258u: goto label_130258;
        case 0x13025cu: goto label_13025c;
        case 0x130260u: goto label_130260;
        case 0x130264u: goto label_130264;
        case 0x130268u: goto label_130268;
        case 0x13026cu: goto label_13026c;
        case 0x130270u: goto label_130270;
        case 0x130274u: goto label_130274;
        case 0x130278u: goto label_130278;
        case 0x13027cu: goto label_13027c;
        case 0x130280u: goto label_130280;
        case 0x130284u: goto label_130284;
        case 0x130288u: goto label_130288;
        case 0x13028cu: goto label_13028c;
        case 0x130290u: goto label_130290;
        case 0x130294u: goto label_130294;
        case 0x130298u: goto label_130298;
        case 0x13029cu: goto label_13029c;
        case 0x1302a0u: goto label_1302a0;
        case 0x1302a4u: goto label_1302a4;
        case 0x1302a8u: goto label_1302a8;
        case 0x1302acu: goto label_1302ac;
        case 0x1302b0u: goto label_1302b0;
        case 0x1302b4u: goto label_1302b4;
        case 0x1302b8u: goto label_1302b8;
        case 0x1302bcu: goto label_1302bc;
        case 0x1302c0u: goto label_1302c0;
        case 0x1302c4u: goto label_1302c4;
        case 0x1302c8u: goto label_1302c8;
        case 0x1302ccu: goto label_1302cc;
        case 0x1302d0u: goto label_1302d0;
        case 0x1302d4u: goto label_1302d4;
        case 0x1302d8u: goto label_1302d8;
        case 0x1302dcu: goto label_1302dc;
        case 0x1302e0u: goto label_1302e0;
        case 0x1302e4u: goto label_1302e4;
        case 0x1302e8u: goto label_1302e8;
        case 0x1302ecu: goto label_1302ec;
        case 0x1302f0u: goto label_1302f0;
        case 0x1302f4u: goto label_1302f4;
        case 0x1302f8u: goto label_1302f8;
        case 0x1302fcu: goto label_1302fc;
        case 0x130300u: goto label_130300;
        case 0x130304u: goto label_130304;
        case 0x130308u: goto label_130308;
        case 0x13030cu: goto label_13030c;
        case 0x130310u: goto label_130310;
        case 0x130314u: goto label_130314;
        case 0x130318u: goto label_130318;
        case 0x13031cu: goto label_13031c;
        case 0x130320u: goto label_130320;
        case 0x130324u: goto label_130324;
        case 0x130328u: goto label_130328;
        case 0x13032cu: goto label_13032c;
        case 0x130330u: goto label_130330;
        case 0x130334u: goto label_130334;
        case 0x130338u: goto label_130338;
        case 0x13033cu: goto label_13033c;
        case 0x130340u: goto label_130340;
        case 0x130344u: goto label_130344;
        case 0x130348u: goto label_130348;
        case 0x13034cu: goto label_13034c;
        case 0x130350u: goto label_130350;
        case 0x130354u: goto label_130354;
        case 0x130358u: goto label_130358;
        case 0x13035cu: goto label_13035c;
        case 0x130360u: goto label_130360;
        case 0x130364u: goto label_130364;
        case 0x130368u: goto label_130368;
        case 0x13036cu: goto label_13036c;
        case 0x130370u: goto label_130370;
        case 0x130374u: goto label_130374;
        case 0x130378u: goto label_130378;
        case 0x13037cu: goto label_13037c;
        case 0x130380u: goto label_130380;
        case 0x130384u: goto label_130384;
        case 0x130388u: goto label_130388;
        case 0x13038cu: goto label_13038c;
        case 0x130390u: goto label_130390;
        case 0x130394u: goto label_130394;
        case 0x130398u: goto label_130398;
        case 0x13039cu: goto label_13039c;
        case 0x1303a0u: goto label_1303a0;
        case 0x1303a4u: goto label_1303a4;
        case 0x1303a8u: goto label_1303a8;
        case 0x1303acu: goto label_1303ac;
        case 0x1303b0u: goto label_1303b0;
        case 0x1303b4u: goto label_1303b4;
        case 0x1303b8u: goto label_1303b8;
        case 0x1303bcu: goto label_1303bc;
        case 0x1303c0u: goto label_1303c0;
        case 0x1303c4u: goto label_1303c4;
        case 0x1303c8u: goto label_1303c8;
        case 0x1303ccu: goto label_1303cc;
        case 0x1303d0u: goto label_1303d0;
        case 0x1303d4u: goto label_1303d4;
        case 0x1303d8u: goto label_1303d8;
        case 0x1303dcu: goto label_1303dc;
        case 0x1303e0u: goto label_1303e0;
        case 0x1303e4u: goto label_1303e4;
        case 0x1303e8u: goto label_1303e8;
        case 0x1303ecu: goto label_1303ec;
        case 0x1303f0u: goto label_1303f0;
        case 0x1303f4u: goto label_1303f4;
        case 0x1303f8u: goto label_1303f8;
        case 0x1303fcu: goto label_1303fc;
        case 0x130400u: goto label_130400;
        case 0x130404u: goto label_130404;
        case 0x130408u: goto label_130408;
        case 0x13040cu: goto label_13040c;
        case 0x130410u: goto label_130410;
        case 0x130414u: goto label_130414;
        case 0x130418u: goto label_130418;
        case 0x13041cu: goto label_13041c;
        case 0x130420u: goto label_130420;
        case 0x130424u: goto label_130424;
        case 0x130428u: goto label_130428;
        case 0x13042cu: goto label_13042c;
        case 0x130430u: goto label_130430;
        case 0x130434u: goto label_130434;
        case 0x130438u: goto label_130438;
        case 0x13043cu: goto label_13043c;
        case 0x130440u: goto label_130440;
        case 0x130444u: goto label_130444;
        case 0x130448u: goto label_130448;
        case 0x13044cu: goto label_13044c;
        case 0x130450u: goto label_130450;
        case 0x130454u: goto label_130454;
        case 0x130458u: goto label_130458;
        case 0x13045cu: goto label_13045c;
        case 0x130460u: goto label_130460;
        case 0x130464u: goto label_130464;
        case 0x130468u: goto label_130468;
        case 0x13046cu: goto label_13046c;
        case 0x130470u: goto label_130470;
        case 0x130474u: goto label_130474;
        case 0x130478u: goto label_130478;
        case 0x13047cu: goto label_13047c;
        case 0x130480u: goto label_130480;
        case 0x130484u: goto label_130484;
        case 0x130488u: goto label_130488;
        case 0x13048cu: goto label_13048c;
        case 0x130490u: goto label_130490;
        case 0x130494u: goto label_130494;
        case 0x130498u: goto label_130498;
        case 0x13049cu: goto label_13049c;
        case 0x1304a0u: goto label_1304a0;
        case 0x1304a4u: goto label_1304a4;
        case 0x1304a8u: goto label_1304a8;
        case 0x1304acu: goto label_1304ac;
        case 0x1304b0u: goto label_1304b0;
        case 0x1304b4u: goto label_1304b4;
        case 0x1304b8u: goto label_1304b8;
        case 0x1304bcu: goto label_1304bc;
        case 0x1304c0u: goto label_1304c0;
        case 0x1304c4u: goto label_1304c4;
        case 0x1304c8u: goto label_1304c8;
        case 0x1304ccu: goto label_1304cc;
        case 0x1304d0u: goto label_1304d0;
        case 0x1304d4u: goto label_1304d4;
        case 0x1304d8u: goto label_1304d8;
        case 0x1304dcu: goto label_1304dc;
        case 0x1304e0u: goto label_1304e0;
        case 0x1304e4u: goto label_1304e4;
        case 0x1304e8u: goto label_1304e8;
        case 0x1304ecu: goto label_1304ec;
        case 0x1304f0u: goto label_1304f0;
        case 0x1304f4u: goto label_1304f4;
        case 0x1304f8u: goto label_1304f8;
        case 0x1304fcu: goto label_1304fc;
        case 0x130500u: goto label_130500;
        case 0x130504u: goto label_130504;
        case 0x130508u: goto label_130508;
        case 0x13050cu: goto label_13050c;
        case 0x130510u: goto label_130510;
        case 0x130514u: goto label_130514;
        case 0x130518u: goto label_130518;
        case 0x13051cu: goto label_13051c;
        case 0x130520u: goto label_130520;
        case 0x130524u: goto label_130524;
        case 0x130528u: goto label_130528;
        case 0x13052cu: goto label_13052c;
        case 0x130530u: goto label_130530;
        case 0x130534u: goto label_130534;
        case 0x130538u: goto label_130538;
        case 0x13053cu: goto label_13053c;
        case 0x130540u: goto label_130540;
        case 0x130544u: goto label_130544;
        case 0x130548u: goto label_130548;
        case 0x13054cu: goto label_13054c;
        case 0x130550u: goto label_130550;
        case 0x130554u: goto label_130554;
        case 0x130558u: goto label_130558;
        case 0x13055cu: goto label_13055c;
        case 0x130560u: goto label_130560;
        case 0x130564u: goto label_130564;
        case 0x130568u: goto label_130568;
        case 0x13056cu: goto label_13056c;
        case 0x130570u: goto label_130570;
        case 0x130574u: goto label_130574;
        case 0x130578u: goto label_130578;
        case 0x13057cu: goto label_13057c;
        case 0x130580u: goto label_130580;
        case 0x130584u: goto label_130584;
        case 0x130588u: goto label_130588;
        case 0x13058cu: goto label_13058c;
        case 0x130590u: goto label_130590;
        case 0x130594u: goto label_130594;
        case 0x130598u: goto label_130598;
        case 0x13059cu: goto label_13059c;
        case 0x1305a0u: goto label_1305a0;
        case 0x1305a4u: goto label_1305a4;
        case 0x1305a8u: goto label_1305a8;
        case 0x1305acu: goto label_1305ac;
        case 0x1305b0u: goto label_1305b0;
        case 0x1305b4u: goto label_1305b4;
        case 0x1305b8u: goto label_1305b8;
        case 0x1305bcu: goto label_1305bc;
        case 0x1305c0u: goto label_1305c0;
        case 0x1305c4u: goto label_1305c4;
        case 0x1305c8u: goto label_1305c8;
        case 0x1305ccu: goto label_1305cc;
        case 0x1305d0u: goto label_1305d0;
        case 0x1305d4u: goto label_1305d4;
        case 0x1305d8u: goto label_1305d8;
        case 0x1305dcu: goto label_1305dc;
        case 0x1305e0u: goto label_1305e0;
        case 0x1305e4u: goto label_1305e4;
        case 0x1305e8u: goto label_1305e8;
        case 0x1305ecu: goto label_1305ec;
        case 0x1305f0u: goto label_1305f0;
        case 0x1305f4u: goto label_1305f4;
        case 0x1305f8u: goto label_1305f8;
        case 0x1305fcu: goto label_1305fc;
        case 0x130600u: goto label_130600;
        case 0x130604u: goto label_130604;
        case 0x130608u: goto label_130608;
        case 0x13060cu: goto label_13060c;
        case 0x130610u: goto label_130610;
        case 0x130614u: goto label_130614;
        case 0x130618u: goto label_130618;
        case 0x13061cu: goto label_13061c;
        case 0x130620u: goto label_130620;
        case 0x130624u: goto label_130624;
        case 0x130628u: goto label_130628;
        case 0x13062cu: goto label_13062c;
        case 0x130630u: goto label_130630;
        case 0x130634u: goto label_130634;
        case 0x130638u: goto label_130638;
        case 0x13063cu: goto label_13063c;
        case 0x130640u: goto label_130640;
        case 0x130644u: goto label_130644;
        case 0x130648u: goto label_130648;
        case 0x13064cu: goto label_13064c;
        case 0x130650u: goto label_130650;
        case 0x130654u: goto label_130654;
        case 0x130658u: goto label_130658;
        case 0x13065cu: goto label_13065c;
        case 0x130660u: goto label_130660;
        case 0x130664u: goto label_130664;
        case 0x130668u: goto label_130668;
        case 0x13066cu: goto label_13066c;
        case 0x130670u: goto label_130670;
        case 0x130674u: goto label_130674;
        case 0x130678u: goto label_130678;
        case 0x13067cu: goto label_13067c;
        case 0x130680u: goto label_130680;
        case 0x130684u: goto label_130684;
        case 0x130688u: goto label_130688;
        case 0x13068cu: goto label_13068c;
        case 0x130690u: goto label_130690;
        case 0x130694u: goto label_130694;
        case 0x130698u: goto label_130698;
        case 0x13069cu: goto label_13069c;
        case 0x1306a0u: goto label_1306a0;
        case 0x1306a4u: goto label_1306a4;
        case 0x1306a8u: goto label_1306a8;
        case 0x1306acu: goto label_1306ac;
        case 0x1306b0u: goto label_1306b0;
        case 0x1306b4u: goto label_1306b4;
        case 0x1306b8u: goto label_1306b8;
        case 0x1306bcu: goto label_1306bc;
        case 0x1306c0u: goto label_1306c0;
        case 0x1306c4u: goto label_1306c4;
        case 0x1306c8u: goto label_1306c8;
        case 0x1306ccu: goto label_1306cc;
        case 0x1306d0u: goto label_1306d0;
        case 0x1306d4u: goto label_1306d4;
        case 0x1306d8u: goto label_1306d8;
        case 0x1306dcu: goto label_1306dc;
        case 0x1306e0u: goto label_1306e0;
        case 0x1306e4u: goto label_1306e4;
        case 0x1306e8u: goto label_1306e8;
        case 0x1306ecu: goto label_1306ec;
        case 0x1306f0u: goto label_1306f0;
        case 0x1306f4u: goto label_1306f4;
        case 0x1306f8u: goto label_1306f8;
        case 0x1306fcu: goto label_1306fc;
        case 0x130700u: goto label_130700;
        case 0x130704u: goto label_130704;
        case 0x130708u: goto label_130708;
        case 0x13070cu: goto label_13070c;
        case 0x130710u: goto label_130710;
        case 0x130714u: goto label_130714;
        case 0x130718u: goto label_130718;
        case 0x13071cu: goto label_13071c;
        case 0x130720u: goto label_130720;
        case 0x130724u: goto label_130724;
        case 0x130728u: goto label_130728;
        case 0x13072cu: goto label_13072c;
        case 0x130730u: goto label_130730;
        case 0x130734u: goto label_130734;
        case 0x130738u: goto label_130738;
        case 0x13073cu: goto label_13073c;
        case 0x130740u: goto label_130740;
        case 0x130744u: goto label_130744;
        case 0x130748u: goto label_130748;
        case 0x13074cu: goto label_13074c;
        case 0x130750u: goto label_130750;
        case 0x130754u: goto label_130754;
        case 0x130758u: goto label_130758;
        case 0x13075cu: goto label_13075c;
        case 0x130760u: goto label_130760;
        case 0x130764u: goto label_130764;
        case 0x130768u: goto label_130768;
        case 0x13076cu: goto label_13076c;
        case 0x130770u: goto label_130770;
        case 0x130774u: goto label_130774;
        case 0x130778u: goto label_130778;
        case 0x13077cu: goto label_13077c;
        case 0x130780u: goto label_130780;
        case 0x130784u: goto label_130784;
        case 0x130788u: goto label_130788;
        case 0x13078cu: goto label_13078c;
        case 0x130790u: goto label_130790;
        case 0x130794u: goto label_130794;
        case 0x130798u: goto label_130798;
        case 0x13079cu: goto label_13079c;
        case 0x1307a0u: goto label_1307a0;
        case 0x1307a4u: goto label_1307a4;
        case 0x1307a8u: goto label_1307a8;
        case 0x1307acu: goto label_1307ac;
        case 0x1307b0u: goto label_1307b0;
        case 0x1307b4u: goto label_1307b4;
        case 0x1307b8u: goto label_1307b8;
        case 0x1307bcu: goto label_1307bc;
        case 0x1307c0u: goto label_1307c0;
        case 0x1307c4u: goto label_1307c4;
        case 0x1307c8u: goto label_1307c8;
        case 0x1307ccu: goto label_1307cc;
        case 0x1307d0u: goto label_1307d0;
        case 0x1307d4u: goto label_1307d4;
        case 0x1307d8u: goto label_1307d8;
        case 0x1307dcu: goto label_1307dc;
        case 0x1307e0u: goto label_1307e0;
        case 0x1307e4u: goto label_1307e4;
        case 0x1307e8u: goto label_1307e8;
        case 0x1307ecu: goto label_1307ec;
        case 0x1307f0u: goto label_1307f0;
        case 0x1307f4u: goto label_1307f4;
        case 0x1307f8u: goto label_1307f8;
        case 0x1307fcu: goto label_1307fc;
        case 0x130800u: goto label_130800;
        case 0x130804u: goto label_130804;
        case 0x130808u: goto label_130808;
        case 0x13080cu: goto label_13080c;
        case 0x130810u: goto label_130810;
        case 0x130814u: goto label_130814;
        case 0x130818u: goto label_130818;
        case 0x13081cu: goto label_13081c;
        case 0x130820u: goto label_130820;
        case 0x130824u: goto label_130824;
        case 0x130828u: goto label_130828;
        case 0x13082cu: goto label_13082c;
        case 0x130830u: goto label_130830;
        case 0x130834u: goto label_130834;
        case 0x130838u: goto label_130838;
        case 0x13083cu: goto label_13083c;
        case 0x130840u: goto label_130840;
        case 0x130844u: goto label_130844;
        case 0x130848u: goto label_130848;
        case 0x13084cu: goto label_13084c;
        case 0x130850u: goto label_130850;
        case 0x130854u: goto label_130854;
        case 0x130858u: goto label_130858;
        case 0x13085cu: goto label_13085c;
        case 0x130860u: goto label_130860;
        case 0x130864u: goto label_130864;
        case 0x130868u: goto label_130868;
        case 0x13086cu: goto label_13086c;
        case 0x130870u: goto label_130870;
        case 0x130874u: goto label_130874;
        case 0x130878u: goto label_130878;
        case 0x13087cu: goto label_13087c;
        case 0x130880u: goto label_130880;
        case 0x130884u: goto label_130884;
        case 0x130888u: goto label_130888;
        case 0x13088cu: goto label_13088c;
        case 0x130890u: goto label_130890;
        case 0x130894u: goto label_130894;
        case 0x130898u: goto label_130898;
        case 0x13089cu: goto label_13089c;
        case 0x1308a0u: goto label_1308a0;
        case 0x1308a4u: goto label_1308a4;
        case 0x1308a8u: goto label_1308a8;
        case 0x1308acu: goto label_1308ac;
        case 0x1308b0u: goto label_1308b0;
        case 0x1308b4u: goto label_1308b4;
        case 0x1308b8u: goto label_1308b8;
        case 0x1308bcu: goto label_1308bc;
        case 0x1308c0u: goto label_1308c0;
        case 0x1308c4u: goto label_1308c4;
        case 0x1308c8u: goto label_1308c8;
        case 0x1308ccu: goto label_1308cc;
        case 0x1308d0u: goto label_1308d0;
        case 0x1308d4u: goto label_1308d4;
        case 0x1308d8u: goto label_1308d8;
        case 0x1308dcu: goto label_1308dc;
        case 0x1308e0u: goto label_1308e0;
        case 0x1308e4u: goto label_1308e4;
        case 0x1308e8u: goto label_1308e8;
        case 0x1308ecu: goto label_1308ec;
        case 0x1308f0u: goto label_1308f0;
        case 0x1308f4u: goto label_1308f4;
        case 0x1308f8u: goto label_1308f8;
        case 0x1308fcu: goto label_1308fc;
        case 0x130900u: goto label_130900;
        case 0x130904u: goto label_130904;
        case 0x130908u: goto label_130908;
        case 0x13090cu: goto label_13090c;
        case 0x130910u: goto label_130910;
        case 0x130914u: goto label_130914;
        case 0x130918u: goto label_130918;
        case 0x13091cu: goto label_13091c;
        case 0x130920u: goto label_130920;
        case 0x130924u: goto label_130924;
        case 0x130928u: goto label_130928;
        case 0x13092cu: goto label_13092c;
        case 0x130930u: goto label_130930;
        case 0x130934u: goto label_130934;
        case 0x130938u: goto label_130938;
        case 0x13093cu: goto label_13093c;
        case 0x130940u: goto label_130940;
        case 0x130944u: goto label_130944;
        case 0x130948u: goto label_130948;
        case 0x13094cu: goto label_13094c;
        case 0x130950u: goto label_130950;
        case 0x130954u: goto label_130954;
        case 0x130958u: goto label_130958;
        case 0x13095cu: goto label_13095c;
        case 0x130960u: goto label_130960;
        case 0x130964u: goto label_130964;
        case 0x130968u: goto label_130968;
        case 0x13096cu: goto label_13096c;
        case 0x130970u: goto label_130970;
        case 0x130974u: goto label_130974;
        case 0x130978u: goto label_130978;
        case 0x13097cu: goto label_13097c;
        case 0x130980u: goto label_130980;
        case 0x130984u: goto label_130984;
        case 0x130988u: goto label_130988;
        case 0x13098cu: goto label_13098c;
        case 0x130990u: goto label_130990;
        case 0x130994u: goto label_130994;
        case 0x130998u: goto label_130998;
        case 0x13099cu: goto label_13099c;
        case 0x1309a0u: goto label_1309a0;
        case 0x1309a4u: goto label_1309a4;
        case 0x1309a8u: goto label_1309a8;
        case 0x1309acu: goto label_1309ac;
        case 0x1309b0u: goto label_1309b0;
        case 0x1309b4u: goto label_1309b4;
        case 0x1309b8u: goto label_1309b8;
        case 0x1309bcu: goto label_1309bc;
        case 0x1309c0u: goto label_1309c0;
        case 0x1309c4u: goto label_1309c4;
        case 0x1309c8u: goto label_1309c8;
        case 0x1309ccu: goto label_1309cc;
        case 0x1309d0u: goto label_1309d0;
        case 0x1309d4u: goto label_1309d4;
        case 0x1309d8u: goto label_1309d8;
        case 0x1309dcu: goto label_1309dc;
        case 0x1309e0u: goto label_1309e0;
        case 0x1309e4u: goto label_1309e4;
        case 0x1309e8u: goto label_1309e8;
        case 0x1309ecu: goto label_1309ec;
        case 0x1309f0u: goto label_1309f0;
        case 0x1309f4u: goto label_1309f4;
        case 0x1309f8u: goto label_1309f8;
        case 0x1309fcu: goto label_1309fc;
        case 0x130a00u: goto label_130a00;
        case 0x130a04u: goto label_130a04;
        case 0x130a08u: goto label_130a08;
        case 0x130a0cu: goto label_130a0c;
        case 0x130a10u: goto label_130a10;
        case 0x130a14u: goto label_130a14;
        case 0x130a18u: goto label_130a18;
        case 0x130a1cu: goto label_130a1c;
        case 0x130a20u: goto label_130a20;
        case 0x130a24u: goto label_130a24;
        case 0x130a28u: goto label_130a28;
        case 0x130a2cu: goto label_130a2c;
        case 0x130a30u: goto label_130a30;
        case 0x130a34u: goto label_130a34;
        case 0x130a38u: goto label_130a38;
        case 0x130a3cu: goto label_130a3c;
        case 0x130a40u: goto label_130a40;
        case 0x130a44u: goto label_130a44;
        case 0x130a48u: goto label_130a48;
        case 0x130a4cu: goto label_130a4c;
        case 0x130a50u: goto label_130a50;
        case 0x130a54u: goto label_130a54;
        case 0x130a58u: goto label_130a58;
        case 0x130a5cu: goto label_130a5c;
        case 0x130a60u: goto label_130a60;
        case 0x130a64u: goto label_130a64;
        case 0x130a68u: goto label_130a68;
        case 0x130a6cu: goto label_130a6c;
        case 0x130a70u: goto label_130a70;
        case 0x130a74u: goto label_130a74;
        case 0x130a78u: goto label_130a78;
        case 0x130a7cu: goto label_130a7c;
        case 0x130a80u: goto label_130a80;
        case 0x130a84u: goto label_130a84;
        case 0x130a88u: goto label_130a88;
        case 0x130a8cu: goto label_130a8c;
        case 0x130a90u: goto label_130a90;
        case 0x130a94u: goto label_130a94;
        case 0x130a98u: goto label_130a98;
        case 0x130a9cu: goto label_130a9c;
        case 0x130aa0u: goto label_130aa0;
        case 0x130aa4u: goto label_130aa4;
        case 0x130aa8u: goto label_130aa8;
        case 0x130aacu: goto label_130aac;
        case 0x130ab0u: goto label_130ab0;
        case 0x130ab4u: goto label_130ab4;
        case 0x130ab8u: goto label_130ab8;
        case 0x130abcu: goto label_130abc;
        case 0x130ac0u: goto label_130ac0;
        case 0x130ac4u: goto label_130ac4;
        case 0x130ac8u: goto label_130ac8;
        case 0x130accu: goto label_130acc;
        case 0x130ad0u: goto label_130ad0;
        case 0x130ad4u: goto label_130ad4;
        case 0x130ad8u: goto label_130ad8;
        case 0x130adcu: goto label_130adc;
        case 0x130ae0u: goto label_130ae0;
        case 0x130ae4u: goto label_130ae4;
        case 0x130ae8u: goto label_130ae8;
        case 0x130aecu: goto label_130aec;
        case 0x130af0u: goto label_130af0;
        case 0x130af4u: goto label_130af4;
        case 0x130af8u: goto label_130af8;
        case 0x130afcu: goto label_130afc;
        case 0x130b00u: goto label_130b00;
        case 0x130b04u: goto label_130b04;
        case 0x130b08u: goto label_130b08;
        case 0x130b0cu: goto label_130b0c;
        case 0x130b10u: goto label_130b10;
        case 0x130b14u: goto label_130b14;
        case 0x130b18u: goto label_130b18;
        case 0x130b1cu: goto label_130b1c;
        case 0x130b20u: goto label_130b20;
        case 0x130b24u: goto label_130b24;
        case 0x130b28u: goto label_130b28;
        case 0x130b2cu: goto label_130b2c;
        case 0x130b30u: goto label_130b30;
        case 0x130b34u: goto label_130b34;
        case 0x130b38u: goto label_130b38;
        case 0x130b3cu: goto label_130b3c;
        case 0x130b40u: goto label_130b40;
        case 0x130b44u: goto label_130b44;
        case 0x130b48u: goto label_130b48;
        case 0x130b4cu: goto label_130b4c;
        case 0x130b50u: goto label_130b50;
        case 0x130b54u: goto label_130b54;
        case 0x130b58u: goto label_130b58;
        case 0x130b5cu: goto label_130b5c;
        case 0x130b60u: goto label_130b60;
        case 0x130b64u: goto label_130b64;
        case 0x130b68u: goto label_130b68;
        case 0x130b6cu: goto label_130b6c;
        case 0x130b70u: goto label_130b70;
        case 0x130b74u: goto label_130b74;
        case 0x130b78u: goto label_130b78;
        case 0x130b7cu: goto label_130b7c;
        case 0x130b80u: goto label_130b80;
        case 0x130b84u: goto label_130b84;
        case 0x130b88u: goto label_130b88;
        case 0x130b8cu: goto label_130b8c;
        case 0x130b90u: goto label_130b90;
        case 0x130b94u: goto label_130b94;
        case 0x130b98u: goto label_130b98;
        case 0x130b9cu: goto label_130b9c;
        case 0x130ba0u: goto label_130ba0;
        case 0x130ba4u: goto label_130ba4;
        case 0x130ba8u: goto label_130ba8;
        case 0x130bacu: goto label_130bac;
        case 0x130bb0u: goto label_130bb0;
        case 0x130bb4u: goto label_130bb4;
        case 0x130bb8u: goto label_130bb8;
        case 0x130bbcu: goto label_130bbc;
        case 0x130bc0u: goto label_130bc0;
        case 0x130bc4u: goto label_130bc4;
        case 0x130bc8u: goto label_130bc8;
        case 0x130bccu: goto label_130bcc;
        case 0x130bd0u: goto label_130bd0;
        case 0x130bd4u: goto label_130bd4;
        case 0x130bd8u: goto label_130bd8;
        case 0x130bdcu: goto label_130bdc;
        case 0x130be0u: goto label_130be0;
        case 0x130be4u: goto label_130be4;
        case 0x130be8u: goto label_130be8;
        case 0x130becu: goto label_130bec;
        case 0x130bf0u: goto label_130bf0;
        case 0x130bf4u: goto label_130bf4;
        case 0x130bf8u: goto label_130bf8;
        case 0x130bfcu: goto label_130bfc;
        case 0x130c00u: goto label_130c00;
        case 0x130c04u: goto label_130c04;
        case 0x130c08u: goto label_130c08;
        case 0x130c0cu: goto label_130c0c;
        case 0x130c10u: goto label_130c10;
        case 0x130c14u: goto label_130c14;
        case 0x130c18u: goto label_130c18;
        case 0x130c1cu: goto label_130c1c;
        case 0x130c20u: goto label_130c20;
        case 0x130c24u: goto label_130c24;
        case 0x130c28u: goto label_130c28;
        case 0x130c2cu: goto label_130c2c;
        case 0x130c30u: goto label_130c30;
        case 0x130c34u: goto label_130c34;
        case 0x130c38u: goto label_130c38;
        case 0x130c3cu: goto label_130c3c;
        case 0x130c40u: goto label_130c40;
        case 0x130c44u: goto label_130c44;
        case 0x130c48u: goto label_130c48;
        case 0x130c4cu: goto label_130c4c;
        case 0x130c50u: goto label_130c50;
        case 0x130c54u: goto label_130c54;
        case 0x130c58u: goto label_130c58;
        case 0x130c5cu: goto label_130c5c;
        case 0x130c60u: goto label_130c60;
        case 0x130c64u: goto label_130c64;
        case 0x130c68u: goto label_130c68;
        case 0x130c6cu: goto label_130c6c;
        case 0x130c70u: goto label_130c70;
        case 0x130c74u: goto label_130c74;
        case 0x130c78u: goto label_130c78;
        case 0x130c7cu: goto label_130c7c;
        case 0x130c80u: goto label_130c80;
        case 0x130c84u: goto label_130c84;
        case 0x130c88u: goto label_130c88;
        case 0x130c8cu: goto label_130c8c;
        case 0x130c90u: goto label_130c90;
        case 0x130c94u: goto label_130c94;
        case 0x130c98u: goto label_130c98;
        case 0x130c9cu: goto label_130c9c;
        case 0x130ca0u: goto label_130ca0;
        case 0x130ca4u: goto label_130ca4;
        case 0x130ca8u: goto label_130ca8;
        case 0x130cacu: goto label_130cac;
        case 0x130cb0u: goto label_130cb0;
        case 0x130cb4u: goto label_130cb4;
        case 0x130cb8u: goto label_130cb8;
        case 0x130cbcu: goto label_130cbc;
        case 0x130cc0u: goto label_130cc0;
        case 0x130cc4u: goto label_130cc4;
        case 0x130cc8u: goto label_130cc8;
        case 0x130cccu: goto label_130ccc;
        case 0x130cd0u: goto label_130cd0;
        case 0x130cd4u: goto label_130cd4;
        case 0x130cd8u: goto label_130cd8;
        case 0x130cdcu: goto label_130cdc;
        case 0x130ce0u: goto label_130ce0;
        case 0x130ce4u: goto label_130ce4;
        case 0x130ce8u: goto label_130ce8;
        case 0x130cecu: goto label_130cec;
        case 0x130cf0u: goto label_130cf0;
        case 0x130cf4u: goto label_130cf4;
        case 0x130cf8u: goto label_130cf8;
        case 0x130cfcu: goto label_130cfc;
        case 0x130d00u: goto label_130d00;
        case 0x130d04u: goto label_130d04;
        case 0x130d08u: goto label_130d08;
        case 0x130d0cu: goto label_130d0c;
        case 0x130d10u: goto label_130d10;
        case 0x130d14u: goto label_130d14;
        case 0x130d18u: goto label_130d18;
        case 0x130d1cu: goto label_130d1c;
        case 0x130d20u: goto label_130d20;
        case 0x130d24u: goto label_130d24;
        case 0x130d28u: goto label_130d28;
        case 0x130d2cu: goto label_130d2c;
        case 0x130d30u: goto label_130d30;
        case 0x130d34u: goto label_130d34;
        case 0x130d38u: goto label_130d38;
        case 0x130d3cu: goto label_130d3c;
        case 0x130d40u: goto label_130d40;
        case 0x130d44u: goto label_130d44;
        case 0x130d48u: goto label_130d48;
        case 0x130d4cu: goto label_130d4c;
        case 0x130d50u: goto label_130d50;
        case 0x130d54u: goto label_130d54;
        case 0x130d58u: goto label_130d58;
        case 0x130d5cu: goto label_130d5c;
        case 0x130d60u: goto label_130d60;
        case 0x130d64u: goto label_130d64;
        case 0x130d68u: goto label_130d68;
        case 0x130d6cu: goto label_130d6c;
        case 0x130d70u: goto label_130d70;
        case 0x130d74u: goto label_130d74;
        case 0x130d78u: goto label_130d78;
        case 0x130d7cu: goto label_130d7c;
        case 0x130d80u: goto label_130d80;
        case 0x130d84u: goto label_130d84;
        case 0x130d88u: goto label_130d88;
        case 0x130d8cu: goto label_130d8c;
        case 0x130d90u: goto label_130d90;
        case 0x130d94u: goto label_130d94;
        case 0x130d98u: goto label_130d98;
        case 0x130d9cu: goto label_130d9c;
        case 0x130da0u: goto label_130da0;
        case 0x130da4u: goto label_130da4;
        case 0x130da8u: goto label_130da8;
        case 0x130dacu: goto label_130dac;
        case 0x130db0u: goto label_130db0;
        case 0x130db4u: goto label_130db4;
        case 0x130db8u: goto label_130db8;
        case 0x130dbcu: goto label_130dbc;
        case 0x130dc0u: goto label_130dc0;
        case 0x130dc4u: goto label_130dc4;
        case 0x130dc8u: goto label_130dc8;
        case 0x130dccu: goto label_130dcc;
        case 0x130dd0u: goto label_130dd0;
        case 0x130dd4u: goto label_130dd4;
        case 0x130dd8u: goto label_130dd8;
        case 0x130ddcu: goto label_130ddc;
        case 0x130de0u: goto label_130de0;
        case 0x130de4u: goto label_130de4;
        case 0x130de8u: goto label_130de8;
        case 0x130decu: goto label_130dec;
        case 0x130df0u: goto label_130df0;
        case 0x130df4u: goto label_130df4;
        case 0x130df8u: goto label_130df8;
        case 0x130dfcu: goto label_130dfc;
        case 0x130e00u: goto label_130e00;
        case 0x130e04u: goto label_130e04;
        case 0x130e08u: goto label_130e08;
        case 0x130e0cu: goto label_130e0c;
        case 0x130e10u: goto label_130e10;
        case 0x130e14u: goto label_130e14;
        case 0x130e18u: goto label_130e18;
        case 0x130e1cu: goto label_130e1c;
        case 0x130e20u: goto label_130e20;
        case 0x130e24u: goto label_130e24;
        case 0x130e28u: goto label_130e28;
        case 0x130e2cu: goto label_130e2c;
        case 0x130e30u: goto label_130e30;
        case 0x130e34u: goto label_130e34;
        case 0x130e38u: goto label_130e38;
        case 0x130e3cu: goto label_130e3c;
        case 0x130e40u: goto label_130e40;
        case 0x130e44u: goto label_130e44;
        case 0x130e48u: goto label_130e48;
        case 0x130e4cu: goto label_130e4c;
        case 0x130e50u: goto label_130e50;
        case 0x130e54u: goto label_130e54;
        case 0x130e58u: goto label_130e58;
        case 0x130e5cu: goto label_130e5c;
        case 0x130e60u: goto label_130e60;
        case 0x130e64u: goto label_130e64;
        case 0x130e68u: goto label_130e68;
        case 0x130e6cu: goto label_130e6c;
        case 0x130e70u: goto label_130e70;
        case 0x130e74u: goto label_130e74;
        case 0x130e78u: goto label_130e78;
        case 0x130e7cu: goto label_130e7c;
        case 0x130e80u: goto label_130e80;
        case 0x130e84u: goto label_130e84;
        case 0x130e88u: goto label_130e88;
        case 0x130e8cu: goto label_130e8c;
        case 0x130e90u: goto label_130e90;
        case 0x130e94u: goto label_130e94;
        case 0x130e98u: goto label_130e98;
        case 0x130e9cu: goto label_130e9c;
        case 0x130ea0u: goto label_130ea0;
        case 0x130ea4u: goto label_130ea4;
        case 0x130ea8u: goto label_130ea8;
        case 0x130eacu: goto label_130eac;
        case 0x130eb0u: goto label_130eb0;
        case 0x130eb4u: goto label_130eb4;
        case 0x130eb8u: goto label_130eb8;
        case 0x130ebcu: goto label_130ebc;
        case 0x130ec0u: goto label_130ec0;
        case 0x130ec4u: goto label_130ec4;
        case 0x130ec8u: goto label_130ec8;
        case 0x130eccu: goto label_130ecc;
        case 0x130ed0u: goto label_130ed0;
        case 0x130ed4u: goto label_130ed4;
        case 0x130ed8u: goto label_130ed8;
        case 0x130edcu: goto label_130edc;
        case 0x130ee0u: goto label_130ee0;
        case 0x130ee4u: goto label_130ee4;
        case 0x130ee8u: goto label_130ee8;
        case 0x130eecu: goto label_130eec;
        case 0x130ef0u: goto label_130ef0;
        case 0x130ef4u: goto label_130ef4;
        case 0x130ef8u: goto label_130ef8;
        case 0x130efcu: goto label_130efc;
        case 0x130f00u: goto label_130f00;
        case 0x130f04u: goto label_130f04;
        case 0x130f08u: goto label_130f08;
        case 0x130f0cu: goto label_130f0c;
        case 0x130f10u: goto label_130f10;
        case 0x130f14u: goto label_130f14;
        case 0x130f18u: goto label_130f18;
        case 0x130f1cu: goto label_130f1c;
        case 0x130f20u: goto label_130f20;
        case 0x130f24u: goto label_130f24;
        case 0x130f28u: goto label_130f28;
        case 0x130f2cu: goto label_130f2c;
        case 0x130f30u: goto label_130f30;
        case 0x130f34u: goto label_130f34;
        case 0x130f38u: goto label_130f38;
        case 0x130f3cu: goto label_130f3c;
        case 0x130f40u: goto label_130f40;
        case 0x130f44u: goto label_130f44;
        case 0x130f48u: goto label_130f48;
        case 0x130f4cu: goto label_130f4c;
        case 0x130f50u: goto label_130f50;
        case 0x130f54u: goto label_130f54;
        case 0x130f58u: goto label_130f58;
        case 0x130f5cu: goto label_130f5c;
        case 0x130f60u: goto label_130f60;
        case 0x130f64u: goto label_130f64;
        case 0x130f68u: goto label_130f68;
        case 0x130f6cu: goto label_130f6c;
        case 0x130f70u: goto label_130f70;
        case 0x130f74u: goto label_130f74;
        case 0x130f78u: goto label_130f78;
        case 0x130f7cu: goto label_130f7c;
        case 0x130f80u: goto label_130f80;
        case 0x130f84u: goto label_130f84;
        case 0x130f88u: goto label_130f88;
        case 0x130f8cu: goto label_130f8c;
        case 0x130f90u: goto label_130f90;
        case 0x130f94u: goto label_130f94;
        case 0x130f98u: goto label_130f98;
        case 0x130f9cu: goto label_130f9c;
        case 0x130fa0u: goto label_130fa0;
        case 0x130fa4u: goto label_130fa4;
        case 0x130fa8u: goto label_130fa8;
        case 0x130facu: goto label_130fac;
        case 0x130fb0u: goto label_130fb0;
        case 0x130fb4u: goto label_130fb4;
        case 0x130fb8u: goto label_130fb8;
        case 0x130fbcu: goto label_130fbc;
        case 0x130fc0u: goto label_130fc0;
        case 0x130fc4u: goto label_130fc4;
        case 0x130fc8u: goto label_130fc8;
        case 0x130fccu: goto label_130fcc;
        case 0x130fd0u: goto label_130fd0;
        case 0x130fd4u: goto label_130fd4;
        case 0x130fd8u: goto label_130fd8;
        case 0x130fdcu: goto label_130fdc;
        case 0x130fe0u: goto label_130fe0;
        case 0x130fe4u: goto label_130fe4;
        case 0x130fe8u: goto label_130fe8;
        case 0x130fecu: goto label_130fec;
        case 0x130ff0u: goto label_130ff0;
        case 0x130ff4u: goto label_130ff4;
        case 0x130ff8u: goto label_130ff8;
        case 0x130ffcu: goto label_130ffc;
        case 0x131000u: goto label_131000;
        case 0x131004u: goto label_131004;
        case 0x131008u: goto label_131008;
        case 0x13100cu: goto label_13100c;
        case 0x131010u: goto label_131010;
        case 0x131014u: goto label_131014;
        case 0x131018u: goto label_131018;
        case 0x13101cu: goto label_13101c;
        case 0x131020u: goto label_131020;
        case 0x131024u: goto label_131024;
        case 0x131028u: goto label_131028;
        case 0x13102cu: goto label_13102c;
        case 0x131030u: goto label_131030;
        case 0x131034u: goto label_131034;
        case 0x131038u: goto label_131038;
        case 0x13103cu: goto label_13103c;
        case 0x131040u: goto label_131040;
        case 0x131044u: goto label_131044;
        case 0x131048u: goto label_131048;
        case 0x13104cu: goto label_13104c;
        case 0x131050u: goto label_131050;
        case 0x131054u: goto label_131054;
        case 0x131058u: goto label_131058;
        case 0x13105cu: goto label_13105c;
        case 0x131060u: goto label_131060;
        case 0x131064u: goto label_131064;
        case 0x131068u: goto label_131068;
        case 0x13106cu: goto label_13106c;
        case 0x131070u: goto label_131070;
        case 0x131074u: goto label_131074;
        case 0x131078u: goto label_131078;
        case 0x13107cu: goto label_13107c;
        case 0x131080u: goto label_131080;
        case 0x131084u: goto label_131084;
        case 0x131088u: goto label_131088;
        case 0x13108cu: goto label_13108c;
        case 0x131090u: goto label_131090;
        case 0x131094u: goto label_131094;
        case 0x131098u: goto label_131098;
        case 0x13109cu: goto label_13109c;
        case 0x1310a0u: goto label_1310a0;
        case 0x1310a4u: goto label_1310a4;
        case 0x1310a8u: goto label_1310a8;
        case 0x1310acu: goto label_1310ac;
        case 0x1310b0u: goto label_1310b0;
        case 0x1310b4u: goto label_1310b4;
        case 0x1310b8u: goto label_1310b8;
        case 0x1310bcu: goto label_1310bc;
        case 0x1310c0u: goto label_1310c0;
        case 0x1310c4u: goto label_1310c4;
        case 0x1310c8u: goto label_1310c8;
        case 0x1310ccu: goto label_1310cc;
        case 0x1310d0u: goto label_1310d0;
        case 0x1310d4u: goto label_1310d4;
        case 0x1310d8u: goto label_1310d8;
        case 0x1310dcu: goto label_1310dc;
        case 0x1310e0u: goto label_1310e0;
        case 0x1310e4u: goto label_1310e4;
        case 0x1310e8u: goto label_1310e8;
        case 0x1310ecu: goto label_1310ec;
        case 0x1310f0u: goto label_1310f0;
        case 0x1310f4u: goto label_1310f4;
        case 0x1310f8u: goto label_1310f8;
        case 0x1310fcu: goto label_1310fc;
        case 0x131100u: goto label_131100;
        case 0x131104u: goto label_131104;
        case 0x131108u: goto label_131108;
        case 0x13110cu: goto label_13110c;
        case 0x131110u: goto label_131110;
        case 0x131114u: goto label_131114;
        case 0x131118u: goto label_131118;
        case 0x13111cu: goto label_13111c;
        case 0x131120u: goto label_131120;
        case 0x131124u: goto label_131124;
        case 0x131128u: goto label_131128;
        case 0x13112cu: goto label_13112c;
        case 0x131130u: goto label_131130;
        case 0x131134u: goto label_131134;
        case 0x131138u: goto label_131138;
        case 0x13113cu: goto label_13113c;
        case 0x131140u: goto label_131140;
        case 0x131144u: goto label_131144;
        case 0x131148u: goto label_131148;
        case 0x13114cu: goto label_13114c;
        case 0x131150u: goto label_131150;
        case 0x131154u: goto label_131154;
        case 0x131158u: goto label_131158;
        case 0x13115cu: goto label_13115c;
        case 0x131160u: goto label_131160;
        case 0x131164u: goto label_131164;
        case 0x131168u: goto label_131168;
        case 0x13116cu: goto label_13116c;
        case 0x131170u: goto label_131170;
        case 0x131174u: goto label_131174;
        case 0x131178u: goto label_131178;
        case 0x13117cu: goto label_13117c;
        case 0x131180u: goto label_131180;
        case 0x131184u: goto label_131184;
        case 0x131188u: goto label_131188;
        case 0x13118cu: goto label_13118c;
        case 0x131190u: goto label_131190;
        case 0x131194u: goto label_131194;
        case 0x131198u: goto label_131198;
        case 0x13119cu: goto label_13119c;
        case 0x1311a0u: goto label_1311a0;
        case 0x1311a4u: goto label_1311a4;
        case 0x1311a8u: goto label_1311a8;
        case 0x1311acu: goto label_1311ac;
        case 0x1311b0u: goto label_1311b0;
        case 0x1311b4u: goto label_1311b4;
        case 0x1311b8u: goto label_1311b8;
        case 0x1311bcu: goto label_1311bc;
        case 0x1311c0u: goto label_1311c0;
        case 0x1311c4u: goto label_1311c4;
        case 0x1311c8u: goto label_1311c8;
        case 0x1311ccu: goto label_1311cc;
        case 0x1311d0u: goto label_1311d0;
        case 0x1311d4u: goto label_1311d4;
        case 0x1311d8u: goto label_1311d8;
        case 0x1311dcu: goto label_1311dc;
        case 0x1311e0u: goto label_1311e0;
        case 0x1311e4u: goto label_1311e4;
        case 0x1311e8u: goto label_1311e8;
        case 0x1311ecu: goto label_1311ec;
        case 0x1311f0u: goto label_1311f0;
        case 0x1311f4u: goto label_1311f4;
        case 0x1311f8u: goto label_1311f8;
        case 0x1311fcu: goto label_1311fc;
        case 0x131200u: goto label_131200;
        case 0x131204u: goto label_131204;
        case 0x131208u: goto label_131208;
        case 0x13120cu: goto label_13120c;
        case 0x131210u: goto label_131210;
        case 0x131214u: goto label_131214;
        case 0x131218u: goto label_131218;
        case 0x13121cu: goto label_13121c;
        case 0x131220u: goto label_131220;
        case 0x131224u: goto label_131224;
        case 0x131228u: goto label_131228;
        case 0x13122cu: goto label_13122c;
        case 0x131230u: goto label_131230;
        case 0x131234u: goto label_131234;
        case 0x131238u: goto label_131238;
        case 0x13123cu: goto label_13123c;
        case 0x131240u: goto label_131240;
        case 0x131244u: goto label_131244;
        case 0x131248u: goto label_131248;
        case 0x13124cu: goto label_13124c;
        case 0x131250u: goto label_131250;
        case 0x131254u: goto label_131254;
        case 0x131258u: goto label_131258;
        case 0x13125cu: goto label_13125c;
        case 0x131260u: goto label_131260;
        case 0x131264u: goto label_131264;
        case 0x131268u: goto label_131268;
        case 0x13126cu: goto label_13126c;
        case 0x131270u: goto label_131270;
        case 0x131274u: goto label_131274;
        case 0x131278u: goto label_131278;
        case 0x13127cu: goto label_13127c;
        case 0x131280u: goto label_131280;
        case 0x131284u: goto label_131284;
        case 0x131288u: goto label_131288;
        case 0x13128cu: goto label_13128c;
        case 0x131290u: goto label_131290;
        case 0x131294u: goto label_131294;
        case 0x131298u: goto label_131298;
        case 0x13129cu: goto label_13129c;
        case 0x1312a0u: goto label_1312a0;
        case 0x1312a4u: goto label_1312a4;
        case 0x1312a8u: goto label_1312a8;
        case 0x1312acu: goto label_1312ac;
        case 0x1312b0u: goto label_1312b0;
        case 0x1312b4u: goto label_1312b4;
        case 0x1312b8u: goto label_1312b8;
        case 0x1312bcu: goto label_1312bc;
        case 0x1312c0u: goto label_1312c0;
        case 0x1312c4u: goto label_1312c4;
        case 0x1312c8u: goto label_1312c8;
        case 0x1312ccu: goto label_1312cc;
        case 0x1312d0u: goto label_1312d0;
        case 0x1312d4u: goto label_1312d4;
        case 0x1312d8u: goto label_1312d8;
        case 0x1312dcu: goto label_1312dc;
        case 0x1312e0u: goto label_1312e0;
        case 0x1312e4u: goto label_1312e4;
        case 0x1312e8u: goto label_1312e8;
        case 0x1312ecu: goto label_1312ec;
        case 0x1312f0u: goto label_1312f0;
        case 0x1312f4u: goto label_1312f4;
        case 0x1312f8u: goto label_1312f8;
        case 0x1312fcu: goto label_1312fc;
        case 0x131300u: goto label_131300;
        case 0x131304u: goto label_131304;
        case 0x131308u: goto label_131308;
        case 0x13130cu: goto label_13130c;
        case 0x131310u: goto label_131310;
        case 0x131314u: goto label_131314;
        case 0x131318u: goto label_131318;
        case 0x13131cu: goto label_13131c;
        case 0x131320u: goto label_131320;
        case 0x131324u: goto label_131324;
        case 0x131328u: goto label_131328;
        case 0x13132cu: goto label_13132c;
        case 0x131330u: goto label_131330;
        case 0x131334u: goto label_131334;
        case 0x131338u: goto label_131338;
        case 0x13133cu: goto label_13133c;
        case 0x131340u: goto label_131340;
        case 0x131344u: goto label_131344;
        case 0x131348u: goto label_131348;
        case 0x13134cu: goto label_13134c;
        case 0x131350u: goto label_131350;
        case 0x131354u: goto label_131354;
        case 0x131358u: goto label_131358;
        case 0x13135cu: goto label_13135c;
        case 0x131360u: goto label_131360;
        case 0x131364u: goto label_131364;
        case 0x131368u: goto label_131368;
        case 0x13136cu: goto label_13136c;
        case 0x131370u: goto label_131370;
        case 0x131374u: goto label_131374;
        case 0x131378u: goto label_131378;
        case 0x13137cu: goto label_13137c;
        case 0x131380u: goto label_131380;
        case 0x131384u: goto label_131384;
        case 0x131388u: goto label_131388;
        case 0x13138cu: goto label_13138c;
        case 0x131390u: goto label_131390;
        case 0x131394u: goto label_131394;
        case 0x131398u: goto label_131398;
        case 0x13139cu: goto label_13139c;
        case 0x1313a0u: goto label_1313a0;
        case 0x1313a4u: goto label_1313a4;
        case 0x1313a8u: goto label_1313a8;
        case 0x1313acu: goto label_1313ac;
        case 0x1313b0u: goto label_1313b0;
        case 0x1313b4u: goto label_1313b4;
        case 0x1313b8u: goto label_1313b8;
        case 0x1313bcu: goto label_1313bc;
        case 0x1313c0u: goto label_1313c0;
        case 0x1313c4u: goto label_1313c4;
        case 0x1313c8u: goto label_1313c8;
        case 0x1313ccu: goto label_1313cc;
        case 0x1313d0u: goto label_1313d0;
        case 0x1313d4u: goto label_1313d4;
        case 0x1313d8u: goto label_1313d8;
        case 0x1313dcu: goto label_1313dc;
        case 0x1313e0u: goto label_1313e0;
        case 0x1313e4u: goto label_1313e4;
        case 0x1313e8u: goto label_1313e8;
        case 0x1313ecu: goto label_1313ec;
        case 0x1313f0u: goto label_1313f0;
        case 0x1313f4u: goto label_1313f4;
        case 0x1313f8u: goto label_1313f8;
        case 0x1313fcu: goto label_1313fc;
        case 0x131400u: goto label_131400;
        case 0x131404u: goto label_131404;
        case 0x131408u: goto label_131408;
        case 0x13140cu: goto label_13140c;
        case 0x131410u: goto label_131410;
        case 0x131414u: goto label_131414;
        case 0x131418u: goto label_131418;
        case 0x13141cu: goto label_13141c;
        case 0x131420u: goto label_131420;
        case 0x131424u: goto label_131424;
        case 0x131428u: goto label_131428;
        case 0x13142cu: goto label_13142c;
        case 0x131430u: goto label_131430;
        case 0x131434u: goto label_131434;
        case 0x131438u: goto label_131438;
        case 0x13143cu: goto label_13143c;
        case 0x131440u: goto label_131440;
        case 0x131444u: goto label_131444;
        case 0x131448u: goto label_131448;
        case 0x13144cu: goto label_13144c;
        case 0x131450u: goto label_131450;
        case 0x131454u: goto label_131454;
        case 0x131458u: goto label_131458;
        case 0x13145cu: goto label_13145c;
        case 0x131460u: goto label_131460;
        case 0x131464u: goto label_131464;
        case 0x131468u: goto label_131468;
        case 0x13146cu: goto label_13146c;
        case 0x131470u: goto label_131470;
        case 0x131474u: goto label_131474;
        case 0x131478u: goto label_131478;
        case 0x13147cu: goto label_13147c;
        case 0x131480u: goto label_131480;
        case 0x131484u: goto label_131484;
        case 0x131488u: goto label_131488;
        case 0x13148cu: goto label_13148c;
        case 0x131490u: goto label_131490;
        case 0x131494u: goto label_131494;
        case 0x131498u: goto label_131498;
        case 0x13149cu: goto label_13149c;
        case 0x1314a0u: goto label_1314a0;
        case 0x1314a4u: goto label_1314a4;
        case 0x1314a8u: goto label_1314a8;
        case 0x1314acu: goto label_1314ac;
        case 0x1314b0u: goto label_1314b0;
        case 0x1314b4u: goto label_1314b4;
        case 0x1314b8u: goto label_1314b8;
        case 0x1314bcu: goto label_1314bc;
        case 0x1314c0u: goto label_1314c0;
        case 0x1314c4u: goto label_1314c4;
        case 0x1314c8u: goto label_1314c8;
        case 0x1314ccu: goto label_1314cc;
        case 0x1314d0u: goto label_1314d0;
        case 0x1314d4u: goto label_1314d4;
        default: break;
    }

    ctx->pc = 0x1300f0u;

label_1300f0:
    // 0x1300f0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1300f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_1300f4:
    // 0x1300f4: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x1300f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
label_1300f8:
    // 0x1300f8: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x1300f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
label_1300fc:
    // 0x1300fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1300fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_130100:
    // 0x130100: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x130100u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_130104:
    // 0x130104: 0x263014f0  addiu       $s0, $s1, 0x14F0
    ctx->pc = 0x130104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 5360));
label_130108:
    // 0x130108: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x130108u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_13010c:
    // 0x13010c: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x13010cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
label_130110:
    // 0x130110: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x130110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
label_130114:
    // 0x130114: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x130114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
label_130118:
    // 0x130118: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x130118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
label_13011c:
    // 0x13011c: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x13011cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
label_130120:
    // 0x130120: 0x7fb70110  sq          $s7, 0x110($sp)
    ctx->pc = 0x130120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 23));
label_130124:
    // 0x130124: 0x7fbe0100  sq          $fp, 0x100($sp)
    ctx->pc = 0x130124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 30));
label_130128:
    // 0x130128: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x130128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
label_13012c:
    // 0x13012c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x13012cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_130130:
    // 0x130130: 0xc62014f0  lwc1        $f0, 0x14F0($s1)
    ctx->pc = 0x130130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_130134:
    // 0x130134: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x130134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_130138:
    // 0x130138: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x130138u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_13013c:
    // 0x13013c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x13013cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_130140:
    // 0x130140: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x130140u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_130144:
    // 0x130144: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x130144u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_130148:
    // 0x130148: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x130148u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_13014c:
    // 0x13014c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13014cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_130150:
    // 0x130150: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x130150u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_130154:
    // 0x130154: 0x0  nop
    ctx->pc = 0x130154u;
    // NOP
label_130158:
    // 0x130158: 0x45010035  bc1t        . + 4 + (0x35 << 2)
label_13015c:
    if (ctx->pc == 0x13015Cu) {
        ctx->pc = 0x13015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130158u;
        // 0x13015c: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x130160u;
        goto label_130160;
    }
    ctx->pc = 0x130158u;
    {
        const bool branch_taken_0x130158 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130158u;
        // 0x13015c: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x130158) {
            ctx->pc = 0x130230u;
            goto label_130230;
        }
    }
    ctx->pc = 0x130160u;
label_130160:
    // 0x130160: 0xc04f0cc  jal         func_13C330
label_130164:
    if (ctx->pc == 0x130164u) {
        ctx->pc = 0x130168u;
        goto label_130168;
    }
    ctx->pc = 0x130160u;
    SET_GPR_U32(ctx, 31, 0x130168u);
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x130160u, 0x130168u)) {
        return;
    }
    ctx->pc = 0x130168u;
label_130168:
    // 0x130168: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x130168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_13016c:
    // 0x13016c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x13016cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_130170:
    // 0x130170: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x130170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_130174:
    // 0x130174: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x130174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_130178:
    // 0x130178: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x130178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13017c:
    // 0x13017c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x13017cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_130180:
    // 0x130180: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x130180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_130184:
    // 0x130184: 0xc62014f0  lwc1        $f0, 0x14F0($s1)
    ctx->pc = 0x130184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_130188:
    // 0x130188: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x130188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13018c:
    // 0x13018c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x13018cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_130190:
    // 0x130190: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x130190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_130194:
    // 0x130194: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x130194u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_130198:
    // 0x130198: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x130198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13019c:
    // 0x13019c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x13019cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1301a0:
    // 0x1301a0: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x1301a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1301a4:
    // 0x1301a4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1301a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1301a8:
    // 0x1301a8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x1301a8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_1301ac:
    // 0x1301ac: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x1301acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1301b0:
    // 0x1301b0: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x1301b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1301b4:
    // 0x1301b4: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x1301b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1301b8:
    // 0x1301b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1301b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1301bc:
    // 0x1301bc: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x1301bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1301c0:
    // 0x1301c0: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x1301c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1301c4:
    // 0x1301c4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1301c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_1301c8:
    // 0x1301c8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1301c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1301cc:
    // 0x1301cc: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1301ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1301d0:
    // 0x1301d0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1301d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1301d4:
    // 0x1301d4: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x1301d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1301d8:
    // 0x1301d8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1301d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_1301dc:
    // 0x1301dc: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1301dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1301e0:
    // 0x1301e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1301e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1301e4:
    // 0x1301e4: 0x0  nop
    ctx->pc = 0x1301e4u;
    // NOP
label_1301e8:
    // 0x1301e8: 0x0  nop
    ctx->pc = 0x1301e8u;
    // NOP
label_1301ec:
    // 0x1301ec: 0x46000004  c1          0x4
    ctx->pc = 0x1301ecu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_1301f0:
    // 0x1301f0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1301f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1301f4:
    // 0x1301f4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1301f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1301f8:
    // 0x1301f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1301f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1301fc:
    // 0x1301fc: 0x0  nop
    ctx->pc = 0x1301fcu;
    // NOP
label_130200:
    // 0x130200: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x130200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_130204:
    // 0x130204: 0x0  nop
    ctx->pc = 0x130204u;
    // NOP
label_130208:
    // 0x130208: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_13020c:
    if (ctx->pc == 0x13020Cu) {
        ctx->pc = 0x13020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130208u;
        // 0x13020c: 0xe6201500  swc1        $f0, 0x1500($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5376), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x130210u;
        goto label_130210;
    }
    ctx->pc = 0x130208u;
    {
        const bool branch_taken_0x130208 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130208u;
        // 0x13020c: 0xe6201500  swc1        $f0, 0x1500($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5376), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x130208) {
            ctx->pc = 0x130218u;
            goto label_130218;
        }
    }
    ctx->pc = 0x130210u;
label_130210:
    // 0x130210: 0xe6341500  swc1        $f20, 0x1500($s1)
    ctx->pc = 0x130210u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5376), bits); }
label_130214:
    // 0x130214: 0x0  nop
    ctx->pc = 0x130214u;
    // NOP
label_130218:
    // 0x130218: 0xc05f90a  jal         func_17E428
label_13021c:
    if (ctx->pc == 0x13021Cu) {
        ctx->pc = 0x13021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130218u;
        // 0x13021c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130220u;
        goto label_130220;
    }
    ctx->pc = 0x130218u;
    SET_GPR_U32(ctx, 31, 0x130220u);
    ctx->pc = 0x13021Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130218u;
    // 0x13021c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x130218u, 0x130220u)) {
        return;
    }
    ctx->pc = 0x130220u;
label_130220:
    // 0x130220: 0xc62c1500  lwc1        $f12, 0x1500($s1)
    ctx->pc = 0x130220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_130224:
    // 0x130224: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x130224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_130228:
    // 0x130228: 0xc05f910  jal         func_17E440
label_13022c:
    if (ctx->pc == 0x13022Cu) {
        ctx->pc = 0x13022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130228u;
        // 0x13022c: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x130230u;
        goto label_130230;
    }
    ctx->pc = 0x130228u;
    SET_GPR_U32(ctx, 31, 0x130230u);
    ctx->pc = 0x13022Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130228u;
    // 0x13022c: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E440u, 0x130228u, 0x130230u)) {
        return;
    }
    ctx->pc = 0x130230u;
label_130230:
    // 0x130230: 0xc04f0cc  jal         func_13C330
label_130234:
    if (ctx->pc == 0x130234u) {
        ctx->pc = 0x130234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130230u;
        // 0x130234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130238u;
        goto label_130238;
    }
    ctx->pc = 0x130230u;
    SET_GPR_U32(ctx, 31, 0x130238u);
    ctx->pc = 0x130234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130230u;
    // 0x130234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x130230u, 0x130238u)) {
        return;
    }
    ctx->pc = 0x130238u;
label_130238:
    // 0x130238: 0x68460007  ldl         $a2, 0x7($v0)
    ctx->pc = 0x130238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_13023c:
    // 0x13023c: 0x6c460000  ldr         $a2, 0x0($v0)
    ctx->pc = 0x13023cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_130240:
    // 0x130240: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x130240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_130244:
    // 0x130244: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x130244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_130248:
    // 0x130248: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x130248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13024c:
    // 0x13024c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x13024cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_130250:
    // 0x130250: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x130250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_130254:
    // 0x130254: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x130254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_130258:
    // 0x130258: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x130258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_13025c:
    // 0x13025c: 0xb22614f7  sdl         $a2, 0x14F7($s1)
    ctx->pc = 0x13025cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 5367); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_130260:
    // 0x130260: 0xb62614f0  sdr         $a2, 0x14F0($s1)
    ctx->pc = 0x130260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 5360); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_130264:
    // 0x130264: 0xae2214f8  sw          $v0, 0x14F8($s1)
    ctx->pc = 0x130264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5368), GPR_U32(ctx, 2));
label_130268:
    // 0x130268: 0x8e220c00  lw          $v0, 0xC00($s1)
    ctx->pc = 0x130268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3072)));
label_13026c:
    // 0x13026c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_130270:
    if (ctx->pc == 0x130270u) {
        ctx->pc = 0x130270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13026Cu;
        // 0x130270: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130274u;
        goto label_130274;
    }
    ctx->pc = 0x13026Cu;
    {
        const bool branch_taken_0x13026c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13026Cu;
        // 0x130270: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13026c) {
            ctx->pc = 0x130278u;
            goto label_130278;
        }
    }
    ctx->pc = 0x130274u;
label_130274:
    // 0x130274: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x130274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_130278:
    // 0x130278: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_13027c:
    if (ctx->pc == 0x13027Cu) {
        ctx->pc = 0x13027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130278u;
        // 0x13027c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130280u;
        goto label_130280;
    }
    ctx->pc = 0x130278u;
    {
        const bool branch_taken_0x130278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130278u;
        // 0x13027c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130278) {
            ctx->pc = 0x130290u;
            goto label_130290;
        }
    }
    ctx->pc = 0x130280u;
label_130280:
    // 0x130280: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x130280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_130284:
    // 0x130284: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x130284u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_130288:
    // 0x130288: 0x10000002  b           . + 4 + (0x2 << 2)
label_13028c:
    if (ctx->pc == 0x13028Cu) {
        ctx->pc = 0x13028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130288u;
        // 0x13028c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130290u;
        goto label_130290;
    }
    ctx->pc = 0x130288u;
    {
        const bool branch_taken_0x130288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130288u;
        // 0x13028c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130288) {
            ctx->pc = 0x130294u;
            goto label_130294;
        }
    }
    ctx->pc = 0x130290u;
label_130290:
    // 0x130290: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x130290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_130294:
    // 0x130294: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_130298:
    if (ctx->pc == 0x130298u) {
        ctx->pc = 0x130298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130294u;
        // 0x130298: 0x8c700004  lw          $s0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13029Cu;
        goto label_13029c;
    }
    ctx->pc = 0x130294u;
    {
        const bool branch_taken_0x130294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x130298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130294u;
        // 0x130298: 0x8c700004  lw          $s0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130294) {
            ctx->pc = 0x1302A8u;
            goto label_1302a8;
        }
    }
    ctx->pc = 0x13029Cu;
label_13029c:
    // 0x13029c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x13029cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1302a0:
    // 0x1302a0: 0xc0aa756  jal         func_2A9D58
label_1302a4:
    if (ctx->pc == 0x1302A4u) {
        ctx->pc = 0x1302A8u;
        goto label_1302a8;
    }
    ctx->pc = 0x1302A0u;
    SET_GPR_U32(ctx, 31, 0x1302A8u);
    ctx->pc = 0x2A9D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9D58u, 0x1302A0u, 0x1302A8u)) {
        return;
    }
    ctx->pc = 0x1302A8u;
label_1302a8:
    // 0x1302a8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_1302ac:
    if (ctx->pc == 0x1302ACu) {
        ctx->pc = 0x1302ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1302A8u;
        // 0x1302ac: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1302B0u;
        goto label_1302b0;
    }
    ctx->pc = 0x1302A8u;
    {
        const bool branch_taken_0x1302a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1302ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1302A8u;
        // 0x1302ac: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1302a8) {
            ctx->pc = 0x1302C8u;
            goto label_1302c8;
        }
    }
    ctx->pc = 0x1302B0u;
label_1302b0:
    // 0x1302b0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1302b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_1302b4:
    // 0x1302b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1302b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1302b8:
    // 0x1302b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1302b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1302bc:
    // 0x1302bc: 0xc0ab838  jal         func_2AE0E0
label_1302c0:
    if (ctx->pc == 0x1302C0u) {
        ctx->pc = 0x1302C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1302BCu;
        // 0x1302c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1302C4u;
        goto label_1302c4;
    }
    ctx->pc = 0x1302BCu;
    SET_GPR_U32(ctx, 31, 0x1302C4u);
    ctx->pc = 0x1302C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1302BCu;
    // 0x1302c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE0E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AE0E0u, 0x1302BCu, 0x1302C4u)) {
        return;
    }
    ctx->pc = 0x1302C4u;
label_1302c4:
    // 0x1302c4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1302c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1302c8:
    // 0x1302c8: 0x8e361874  lw          $s6, 0x1874($s1)
    ctx->pc = 0x1302c8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6260)));
label_1302cc:
    // 0x1302cc: 0xc044fe4  jal         func_113F90
label_1302d0:
    if (ctx->pc == 0x1302D0u) {
        ctx->pc = 0x1302D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1302CCu;
        // 0x1302d0: 0x8c44830c  lw          $a0, -0x7CF4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1302D4u;
        goto label_1302d4;
    }
    ctx->pc = 0x1302CCu;
    SET_GPR_U32(ctx, 31, 0x1302D4u);
    ctx->pc = 0x1302D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1302CCu;
    // 0x1302d0: 0x8c44830c  lw          $a0, -0x7CF4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x113F90u, 0x1302CCu, 0x1302D4u)) {
        return;
    }
    ctx->pc = 0x1302D4u;
label_1302d4:
    // 0x1302d4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1302d8:
    if (ctx->pc == 0x1302D8u) {
        ctx->pc = 0x1302D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1302D4u;
        // 0x1302d8: 0x26230320  addiu       $v1, $s1, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1302DCu;
        goto label_1302dc;
    }
    ctx->pc = 0x1302D4u;
    {
        const bool branch_taken_0x1302d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1302D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1302D4u;
        // 0x1302d8: 0x26230320  addiu       $v1, $s1, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1302d4) {
            ctx->pc = 0x1302ECu;
            goto label_1302ec;
        }
    }
    ctx->pc = 0x1302DCu;
label_1302dc:
    // 0x1302dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1302dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1302e0:
    // 0x1302e0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1302e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1302e4:
    // 0x1302e4: 0xae221860  sw          $v0, 0x1860($s1)
    ctx->pc = 0x1302e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6240), GPR_U32(ctx, 2));
label_1302e8:
    // 0x1302e8: 0xae221864  sw          $v0, 0x1864($s1)
    ctx->pc = 0x1302e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6244), GPR_U32(ctx, 2));
label_1302ec:
    // 0x1302ec: 0x8c62083c  lw          $v0, 0x83C($v1)
    ctx->pc = 0x1302ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2108)));
label_1302f0:
    // 0x1302f0: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x1302f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1302f4:
    // 0x1302f4: 0x21583  sra         $v0, $v0, 22
    ctx->pc = 0x1302f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
label_1302f8:
    // 0x1302f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1302f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1302fc:
    // 0x1302fc: 0xc06b920  jal         func_1AE480
label_130300:
    if (ctx->pc == 0x130300u) {
        ctx->pc = 0x130300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1302FCu;
        // 0x130300: 0x2b00b  movn        $s6, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130304u;
        goto label_130304;
    }
    ctx->pc = 0x1302FCu;
    SET_GPR_U32(ctx, 31, 0x130304u);
    ctx->pc = 0x130300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1302FCu;
    // 0x130300: 0x2b00b  movn        $s6, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE480u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE480u, 0x1302FCu, 0x130304u)) {
        return;
    }
    ctx->pc = 0x130304u;
label_130304:
    // 0x130304: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_130308:
    if (ctx->pc == 0x130308u) {
        ctx->pc = 0x130308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130304u;
        // 0x130308: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13030Cu;
        goto label_13030c;
    }
    ctx->pc = 0x130304u;
    {
        const bool branch_taken_0x130304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130304u;
        // 0x130308: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130304) {
            ctx->pc = 0x130318u;
            goto label_130318;
        }
    }
    ctx->pc = 0x13030Cu;
label_13030c:
    // 0x13030c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x13030cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_130310:
    // 0x130310: 0xae221860  sw          $v0, 0x1860($s1)
    ctx->pc = 0x130310u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6240), GPR_U32(ctx, 2));
label_130314:
    // 0x130314: 0xae221864  sw          $v0, 0x1864($s1)
    ctx->pc = 0x130314u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6244), GPR_U32(ctx, 2));
label_130318:
    // 0x130318: 0x8e221be4  lw          $v0, 0x1BE4($s1)
    ctx->pc = 0x130318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7140)));
label_13031c:
    // 0x13031c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_130320:
    if (ctx->pc == 0x130320u) {
        ctx->pc = 0x130320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13031Cu;
        // 0x130320: 0x8e82083c  lw          $v0, 0x83C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130324u;
        goto label_130324;
    }
    ctx->pc = 0x13031Cu;
    {
        const bool branch_taken_0x13031c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13031Cu;
        // 0x130320: 0x8e82083c  lw          $v0, 0x83C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13031c) {
            ctx->pc = 0x130358u;
            goto label_130358;
        }
    }
    ctx->pc = 0x130324u;
label_130324:
    // 0x130324: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x130324u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_130328:
    // 0x130328: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x130328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_13032c:
    // 0x13032c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_130330:
    if (ctx->pc == 0x130330u) {
        ctx->pc = 0x130330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13032Cu;
        // 0x130330: 0x262216c0  addiu       $v0, $s1, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 5824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130334u;
        goto label_130334;
    }
    ctx->pc = 0x13032Cu;
    {
        const bool branch_taken_0x13032c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13032Cu;
        // 0x130330: 0x262216c0  addiu       $v0, $s1, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 5824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13032c) {
            ctx->pc = 0x13034Cu;
            goto label_13034c;
        }
    }
    ctx->pc = 0x130334u;
label_130334:
    // 0x130334: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x130334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_130338:
    // 0x130338: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13033c:
    // 0x13033c: 0xc053426  jal         func_14D098
label_130340:
    if (ctx->pc == 0x130340u) {
        ctx->pc = 0x130340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13033Cu;
        // 0x130340: 0xafa20098  sw          $v0, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130344u;
        goto label_130344;
    }
    ctx->pc = 0x13033Cu;
    SET_GPR_U32(ctx, 31, 0x130344u);
    ctx->pc = 0x130340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13033Cu;
    // 0x130340: 0xafa20098  sw          $v0, 0x98($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D098u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14D098u, 0x13033Cu, 0x130344u)) {
        return;
    }
    ctx->pc = 0x130344u;
label_130344:
    // 0x130344: 0x1000000d  b           . + 4 + (0xD << 2)
label_130348:
    if (ctx->pc == 0x130348u) {
        ctx->pc = 0x130348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130344u;
        // 0x130348: 0x8e82083c  lw          $v0, 0x83C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13034Cu;
        goto label_13034c;
    }
    ctx->pc = 0x130344u;
    {
        const bool branch_taken_0x130344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130344u;
        // 0x130348: 0x8e82083c  lw          $v0, 0x83C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130344) {
            ctx->pc = 0x13037Cu;
            goto label_13037c;
        }
    }
    ctx->pc = 0x13034Cu;
label_13034c:
    // 0x13034c: 0x262616c0  addiu       $a2, $s1, 0x16C0
    ctx->pc = 0x13034cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5824));
label_130350:
    // 0x130350: 0x10000009  b           . + 4 + (0x9 << 2)
label_130354:
    if (ctx->pc == 0x130354u) {
        ctx->pc = 0x130354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130350u;
        // 0x130354: 0xafa60098  sw          $a2, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130358u;
        goto label_130358;
    }
    ctx->pc = 0x130350u;
    {
        const bool branch_taken_0x130350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130350u;
        // 0x130354: 0xafa60098  sw          $a2, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130350) {
            ctx->pc = 0x130378u;
            goto label_130378;
        }
    }
    ctx->pc = 0x130358u;
label_130358:
    // 0x130358: 0x262316c0  addiu       $v1, $s1, 0x16C0
    ctx->pc = 0x130358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5824));
label_13035c:
    // 0x13035c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x13035cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_130360:
    // 0x130360: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x130360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_130364:
    // 0x130364: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_130368:
    if (ctx->pc == 0x130368u) {
        ctx->pc = 0x130368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130364u;
        // 0x130368: 0xafa30098  sw          $v1, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13036Cu;
        goto label_13036c;
    }
    ctx->pc = 0x130364u;
    {
        const bool branch_taken_0x130364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130364u;
        // 0x130368: 0xafa30098  sw          $v1, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130364) {
            ctx->pc = 0x130378u;
            goto label_130378;
        }
    }
    ctx->pc = 0x13036Cu;
label_13036c:
    // 0x13036c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x13036cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_130370:
    // 0x130370: 0xc053426  jal         func_14D098
label_130374:
    if (ctx->pc == 0x130374u) {
        ctx->pc = 0x130374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130370u;
        // 0x130374: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130378u;
        goto label_130378;
    }
    ctx->pc = 0x130370u;
    SET_GPR_U32(ctx, 31, 0x130378u);
    ctx->pc = 0x130374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130370u;
    // 0x130374: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D098u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14D098u, 0x130370u, 0x130378u)) {
        return;
    }
    ctx->pc = 0x130378u;
label_130378:
    // 0x130378: 0x8e82083c  lw          $v0, 0x83C($s4)
    ctx->pc = 0x130378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2108)));
label_13037c:
    // 0x13037c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13037cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_130380:
    // 0x130380: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x130380u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_130384:
    // 0x130384: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x130384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_130388:
    // 0x130388: 0xae221be4  sw          $v0, 0x1BE4($s1)
    ctx->pc = 0x130388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7140), GPR_U32(ctx, 2));
label_13038c:
    // 0x13038c: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x13038cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_130390:
    // 0x130390: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x130390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_130394:
    // 0x130394: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_130398:
    if (ctx->pc == 0x130398u) {
        ctx->pc = 0x130398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130394u;
        // 0x130398: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13039Cu;
        goto label_13039c;
    }
    ctx->pc = 0x130394u;
    {
        const bool branch_taken_0x130394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x130398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130394u;
        // 0x130398: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130394) {
            ctx->pc = 0x1303B4u;
            goto label_1303b4;
        }
    }
    ctx->pc = 0x13039Cu;
label_13039c:
    // 0x13039c: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_1303a0:
    if (ctx->pc == 0x1303A0u) {
        ctx->pc = 0x1303A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13039Cu;
        // 0x1303a0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1303A4u;
        goto label_1303a4;
    }
    ctx->pc = 0x13039Cu;
    {
        const bool branch_taken_0x13039c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1303A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13039Cu;
        // 0x1303a0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13039c) {
            ctx->pc = 0x1303B4u;
            goto label_1303b4;
        }
    }
    ctx->pc = 0x1303A4u;
label_1303a4:
    // 0x1303a4: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_1303a8:
    if (ctx->pc == 0x1303A8u) {
        ctx->pc = 0x1303A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1303A4u;
        // 0x1303a8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1303ACu;
        goto label_1303ac;
    }
    ctx->pc = 0x1303A4u;
    {
        const bool branch_taken_0x1303a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1303A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1303A4u;
        // 0x1303a8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1303a4) {
            ctx->pc = 0x1303B4u;
            goto label_1303b4;
        }
    }
    ctx->pc = 0x1303ACu;
label_1303ac:
    // 0x1303ac: 0x5482000b  bnel        $a0, $v0, . + 4 + (0xB << 2)
label_1303b0:
    if (ctx->pc == 0x1303B0u) {
        ctx->pc = 0x1303B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1303ACu;
        // 0x1303b0: 0xc6200bdc  lwc1        $f0, 0xBDC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1303B4u;
        goto label_1303b4;
    }
    ctx->pc = 0x1303ACu;
    {
        const bool branch_taken_0x1303ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1303ac) {
            ctx->pc = 0x1303B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1303ACu;
            // 0x1303b0: 0xc6200bdc  lwc1        $f0, 0xBDC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1303DCu;
            goto label_1303dc;
        }
    }
    ctx->pc = 0x1303B4u;
label_1303b4:
    // 0x1303b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1303b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1303b8:
    // 0x1303b8: 0xc04e344  jal         func_138D10
label_1303bc:
    if (ctx->pc == 0x1303BCu) {
        ctx->pc = 0x1303BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1303B8u;
        // 0x1303bc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1303C0u;
        goto label_1303c0;
    }
    ctx->pc = 0x1303B8u;
    SET_GPR_U32(ctx, 31, 0x1303C0u);
    ctx->pc = 0x1303BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1303B8u;
    // 0x1303bc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x138D10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x138D10u, 0x1303B8u, 0x1303C0u)) {
        return;
    }
    ctx->pc = 0x1303C0u;
label_1303c0:
    // 0x1303c0: 0xc04e1f4  jal         func_1387D0
label_1303c4:
    if (ctx->pc == 0x1303C4u) {
        ctx->pc = 0x1303C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1303C0u;
        // 0x1303c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1303C8u;
        goto label_1303c8;
    }
    ctx->pc = 0x1303C0u;
    SET_GPR_U32(ctx, 31, 0x1303C8u);
    ctx->pc = 0x1303C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1303C0u;
    // 0x1303c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1387D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1387D0u, 0x1303C0u, 0x1303C8u)) {
        return;
    }
    ctx->pc = 0x1303C8u;
label_1303c8:
    // 0x1303c8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1303cc:
    if (ctx->pc == 0x1303CCu) {
        ctx->pc = 0x1303CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1303C8u;
        // 0x1303cc: 0xc6200bdc  lwc1        $f0, 0xBDC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1303D0u;
        goto label_1303d0;
    }
    ctx->pc = 0x1303C8u;
    {
        const bool branch_taken_0x1303c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1303c8) {
            ctx->pc = 0x1303CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1303C8u;
            // 0x1303cc: 0xc6200bdc  lwc1        $f0, 0xBDC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1303DCu;
            goto label_1303dc;
        }
    }
    ctx->pc = 0x1303D0u;
label_1303d0:
    // 0x1303d0: 0xc04e3b8  jal         func_138EE0
label_1303d4:
    if (ctx->pc == 0x1303D4u) {
        ctx->pc = 0x1303D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1303D0u;
        // 0x1303d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1303D8u;
        goto label_1303d8;
    }
    ctx->pc = 0x1303D0u;
    SET_GPR_U32(ctx, 31, 0x1303D8u);
    ctx->pc = 0x1303D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1303D0u;
    // 0x1303d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x138EE0u, 0x1303D0u, 0x1303D8u)) {
        return;
    }
    ctx->pc = 0x1303D8u;
label_1303d8:
    // 0x1303d8: 0xc6200bdc  lwc1        $f0, 0xBDC($s1)
    ctx->pc = 0x1303d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1303dc:
    // 0x1303dc: 0xc6210bd8  lwc1        $f1, 0xBD8($s1)
    ctx->pc = 0x1303dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1303e0:
    // 0x1303e0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1303e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1303e4:
    // 0x1303e4: 0x0  nop
    ctx->pc = 0x1303e4u;
    // NOP
label_1303e8:
    // 0x1303e8: 0x0  nop
    ctx->pc = 0x1303e8u;
    // NOP
label_1303ec:
    // 0x1303ec: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1303ecu;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_1303f0:
    // 0x1303f0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1303f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1303f4:
    // 0x1303f4: 0x0  nop
    ctx->pc = 0x1303f4u;
    // NOP
label_1303f8:
    // 0x1303f8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1303fc:
    if (ctx->pc == 0x1303FCu) {
        ctx->pc = 0x1303FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1303F8u;
        // 0x1303fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130400u;
        goto label_130400;
    }
    ctx->pc = 0x1303F8u;
    {
        const bool branch_taken_0x1303f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1303FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1303F8u;
        // 0x1303fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1303f8) {
            ctx->pc = 0x130414u;
            goto label_130414;
        }
    }
    ctx->pc = 0x130400u;
label_130400:
    // 0x130400: 0xc62014d4  lwc1        $f0, 0x14D4($s1)
    ctx->pc = 0x130400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_130404:
    // 0x130404: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x130404u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_130408:
    // 0x130408: 0x0  nop
    ctx->pc = 0x130408u;
    // NOP
label_13040c:
    // 0x13040c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_130410:
    if (ctx->pc == 0x130410u) {
        ctx->pc = 0x130410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13040Cu;
        // 0x130410: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130414u;
        goto label_130414;
    }
    ctx->pc = 0x13040Cu;
    {
        const bool branch_taken_0x13040c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13040c) {
            ctx->pc = 0x130410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13040Cu;
            // 0x130410: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130414u;
            goto label_130414;
        }
    }
    ctx->pc = 0x130414u;
label_130414:
    // 0x130414: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_130418:
    if (ctx->pc == 0x130418u) {
        ctx->pc = 0x130418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130414u;
        // 0x130418: 0x8e2214dc  lw          $v0, 0x14DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13041Cu;
        goto label_13041c;
    }
    ctx->pc = 0x130414u;
    {
        const bool branch_taken_0x130414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130414u;
        // 0x130418: 0x8e2214dc  lw          $v0, 0x14DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130414) {
            ctx->pc = 0x13046Cu;
            goto label_13046c;
        }
    }
    ctx->pc = 0x13041Cu;
label_13041c:
    // 0x13041c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_130420:
    if (ctx->pc == 0x130420u) {
        ctx->pc = 0x130420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13041Cu;
        // 0x130420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130424u;
        goto label_130424;
    }
    ctx->pc = 0x13041Cu;
    {
        const bool branch_taken_0x13041c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13041Cu;
        // 0x130420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13041c) {
            ctx->pc = 0x130444u;
            goto label_130444;
        }
    }
    ctx->pc = 0x130424u;
label_130424:
    // 0x130424: 0xc04f0cc  jal         func_13C330
label_130428:
    if (ctx->pc == 0x130428u) {
        ctx->pc = 0x130428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130424u;
        // 0x130428: 0x26300310  addiu       $s0, $s1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13042Cu;
        goto label_13042c;
    }
    ctx->pc = 0x130424u;
    SET_GPR_U32(ctx, 31, 0x13042Cu);
    ctx->pc = 0x130428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130424u;
    // 0x130428: 0x26300310  addiu       $s0, $s1, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x130424u, 0x13042Cu)) {
        return;
    }
    ctx->pc = 0x13042Cu;
label_13042c:
    // 0x13042c: 0x8e2514d8  lw          $a1, 0x14D8($s1)
    ctx->pc = 0x13042cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5336)));
label_130430:
    // 0x130430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_130434:
    // 0x130434: 0xc043c92  jal         func_10F248
label_130438:
    if (ctx->pc == 0x130438u) {
        ctx->pc = 0x130438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130434u;
        // 0x130438: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13043Cu;
        goto label_13043c;
    }
    ctx->pc = 0x130434u;
    SET_GPR_U32(ctx, 31, 0x13043Cu);
    ctx->pc = 0x130438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130434u;
    // 0x130438: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F248u, 0x130434u, 0x13043Cu)) {
        return;
    }
    ctx->pc = 0x13043Cu;
label_13043c:
    // 0x13043c: 0x10000011  b           . + 4 + (0x11 << 2)
label_130440:
    if (ctx->pc == 0x130440u) {
        ctx->pc = 0x130440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13043Cu;
        // 0x130440: 0x8e220f80  lw          $v0, 0xF80($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3968)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130444u;
        goto label_130444;
    }
    ctx->pc = 0x13043Cu;
    {
        const bool branch_taken_0x13043c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13043Cu;
        // 0x130440: 0x8e220f80  lw          $v0, 0xF80($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13043c) {
            ctx->pc = 0x130484u;
            goto label_130484;
        }
    }
    ctx->pc = 0x130444u;
label_130444:
    // 0x130444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x130444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_130448:
    // 0x130448: 0xae2214dc  sw          $v0, 0x14DC($s1)
    ctx->pc = 0x130448u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5340), GPR_U32(ctx, 2));
label_13044c:
    // 0x13044c: 0xc04f0cc  jal         func_13C330
label_130450:
    if (ctx->pc == 0x130450u) {
        ctx->pc = 0x130450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13044Cu;
        // 0x130450: 0x26300310  addiu       $s0, $s1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130454u;
        goto label_130454;
    }
    ctx->pc = 0x13044Cu;
    SET_GPR_U32(ctx, 31, 0x130454u);
    ctx->pc = 0x130450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13044Cu;
    // 0x130450: 0x26300310  addiu       $s0, $s1, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x13044Cu, 0x130454u)) {
        return;
    }
    ctx->pc = 0x130454u;
label_130454:
    // 0x130454: 0x8e2514d8  lw          $a1, 0x14D8($s1)
    ctx->pc = 0x130454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5336)));
label_130458:
    // 0x130458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13045c:
    // 0x13045c: 0xc043c7c  jal         func_10F1F0
label_130460:
    if (ctx->pc == 0x130460u) {
        ctx->pc = 0x130460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13045Cu;
        // 0x130460: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130464u;
        goto label_130464;
    }
    ctx->pc = 0x13045Cu;
    SET_GPR_U32(ctx, 31, 0x130464u);
    ctx->pc = 0x130460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13045Cu;
    // 0x130460: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F1F0u, 0x13045Cu, 0x130464u)) {
        return;
    }
    ctx->pc = 0x130464u;
label_130464:
    // 0x130464: 0x10000007  b           . + 4 + (0x7 << 2)
label_130468:
    if (ctx->pc == 0x130468u) {
        ctx->pc = 0x130468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130464u;
        // 0x130468: 0x8e220f80  lw          $v0, 0xF80($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3968)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13046Cu;
        goto label_13046c;
    }
    ctx->pc = 0x130464u;
    {
        const bool branch_taken_0x130464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130464u;
        // 0x130468: 0x8e220f80  lw          $v0, 0xF80($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130464) {
            ctx->pc = 0x130484u;
            goto label_130484;
        }
    }
    ctx->pc = 0x13046Cu;
label_13046c:
    // 0x13046c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_130470:
    if (ctx->pc == 0x130470u) {
        ctx->pc = 0x130470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13046Cu;
        // 0x130470: 0x26240310  addiu       $a0, $s1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130474u;
        goto label_130474;
    }
    ctx->pc = 0x13046Cu;
    {
        const bool branch_taken_0x13046c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13046Cu;
        // 0x130470: 0x26240310  addiu       $a0, $s1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13046c) {
            ctx->pc = 0x130480u;
            goto label_130480;
        }
    }
    ctx->pc = 0x130474u;
label_130474:
    // 0x130474: 0xae2014dc  sw          $zero, 0x14DC($s1)
    ctx->pc = 0x130474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5340), GPR_U32(ctx, 0));
label_130478:
    // 0x130478: 0xc043c88  jal         func_10F220
label_13047c:
    if (ctx->pc == 0x13047Cu) {
        ctx->pc = 0x13047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130478u;
        // 0x13047c: 0x8e2514d8  lw          $a1, 0x14D8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130480u;
        goto label_130480;
    }
    ctx->pc = 0x130478u;
    SET_GPR_U32(ctx, 31, 0x130480u);
    ctx->pc = 0x13047Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130478u;
    // 0x13047c: 0x8e2514d8  lw          $a1, 0x14D8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F220u, 0x130478u, 0x130480u)) {
        return;
    }
    ctx->pc = 0x130480u;
label_130480:
    // 0x130480: 0x8e220f80  lw          $v0, 0xF80($s1)
    ctx->pc = 0x130480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3968)));
label_130484:
    // 0x130484: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_130488:
    if (ctx->pc == 0x130488u) {
        ctx->pc = 0x130488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130484u;
        // 0x130488: 0x8e2214e4  lw          $v0, 0x14E4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5348)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13048Cu;
        goto label_13048c;
    }
    ctx->pc = 0x130484u;
    {
        const bool branch_taken_0x130484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130484u;
        // 0x130488: 0x8e2214e4  lw          $v0, 0x14E4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130484) {
            ctx->pc = 0x1304D8u;
            goto label_1304d8;
        }
    }
    ctx->pc = 0x13048Cu;
label_13048c:
    // 0x13048c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_130490:
    if (ctx->pc == 0x130490u) {
        ctx->pc = 0x130490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13048Cu;
        // 0x130490: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130494u;
        goto label_130494;
    }
    ctx->pc = 0x13048Cu;
    {
        const bool branch_taken_0x13048c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13048Cu;
        // 0x130490: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13048c) {
            ctx->pc = 0x1304B8u;
            goto label_1304b8;
        }
    }
    ctx->pc = 0x130494u;
label_130494:
    // 0x130494: 0xc04f0cc  jal         func_13C330
label_130498:
    if (ctx->pc == 0x130498u) {
        ctx->pc = 0x130498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130494u;
        // 0x130498: 0x26300310  addiu       $s0, $s1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13049Cu;
        goto label_13049c;
    }
    ctx->pc = 0x130494u;
    SET_GPR_U32(ctx, 31, 0x13049Cu);
    ctx->pc = 0x130498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130494u;
    // 0x130498: 0x26300310  addiu       $s0, $s1, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x130494u, 0x13049Cu)) {
        return;
    }
    ctx->pc = 0x13049Cu;
label_13049c:
    // 0x13049c: 0x8e2514e0  lw          $a1, 0x14E0($s1)
    ctx->pc = 0x13049cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5344)));
label_1304a0:
    // 0x1304a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1304a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1304a4:
    // 0x1304a4: 0xc043c7c  jal         func_10F1F0
label_1304a8:
    if (ctx->pc == 0x1304A8u) {
        ctx->pc = 0x1304A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1304A4u;
        // 0x1304a8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1304ACu;
        goto label_1304ac;
    }
    ctx->pc = 0x1304A4u;
    SET_GPR_U32(ctx, 31, 0x1304ACu);
    ctx->pc = 0x1304A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1304A4u;
    // 0x1304a8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F1F0u, 0x1304A4u, 0x1304ACu)) {
        return;
    }
    ctx->pc = 0x1304ACu;
label_1304ac:
    // 0x1304ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1304acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1304b0:
    // 0x1304b0: 0x1000000f  b           . + 4 + (0xF << 2)
label_1304b4:
    if (ctx->pc == 0x1304B4u) {
        ctx->pc = 0x1304B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1304B0u;
        // 0x1304b4: 0xae2314e4  sw          $v1, 0x14E4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1304B8u;
        goto label_1304b8;
    }
    ctx->pc = 0x1304B0u;
    {
        const bool branch_taken_0x1304b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1304B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1304B0u;
        // 0x1304b4: 0xae2314e4  sw          $v1, 0x14E4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1304b0) {
            ctx->pc = 0x1304F0u;
            goto label_1304f0;
        }
    }
    ctx->pc = 0x1304B8u;
label_1304b8:
    // 0x1304b8: 0xc04f0cc  jal         func_13C330
label_1304bc:
    if (ctx->pc == 0x1304BCu) {
        ctx->pc = 0x1304BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1304B8u;
        // 0x1304bc: 0x26300310  addiu       $s0, $s1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1304C0u;
        goto label_1304c0;
    }
    ctx->pc = 0x1304B8u;
    SET_GPR_U32(ctx, 31, 0x1304C0u);
    ctx->pc = 0x1304BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1304B8u;
    // 0x1304bc: 0x26300310  addiu       $s0, $s1, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1304B8u, 0x1304C0u)) {
        return;
    }
    ctx->pc = 0x1304C0u;
label_1304c0:
    // 0x1304c0: 0x8e2514e0  lw          $a1, 0x14E0($s1)
    ctx->pc = 0x1304c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5344)));
label_1304c4:
    // 0x1304c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1304c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1304c8:
    // 0x1304c8: 0xc043c92  jal         func_10F248
label_1304cc:
    if (ctx->pc == 0x1304CCu) {
        ctx->pc = 0x1304CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1304C8u;
        // 0x1304cc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1304D0u;
        goto label_1304d0;
    }
    ctx->pc = 0x1304C8u;
    SET_GPR_U32(ctx, 31, 0x1304D0u);
    ctx->pc = 0x1304CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1304C8u;
    // 0x1304cc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F248u, 0x1304C8u, 0x1304D0u)) {
        return;
    }
    ctx->pc = 0x1304D0u;
label_1304d0:
    // 0x1304d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1304d4:
    if (ctx->pc == 0x1304D4u) {
        ctx->pc = 0x1304D8u;
        goto label_1304d8;
    }
    ctx->pc = 0x1304D0u;
    {
        const bool branch_taken_0x1304d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1304d0) {
            ctx->pc = 0x1304F0u;
            goto label_1304f0;
        }
    }
    ctx->pc = 0x1304D8u;
label_1304d8:
    // 0x1304d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1304dc:
    if (ctx->pc == 0x1304DCu) {
        ctx->pc = 0x1304E0u;
        goto label_1304e0;
    }
    ctx->pc = 0x1304D8u;
    {
        const bool branch_taken_0x1304d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1304d8) {
            ctx->pc = 0x1304F0u;
            goto label_1304f0;
        }
    }
    ctx->pc = 0x1304E0u;
label_1304e0:
    // 0x1304e0: 0x8e2514e0  lw          $a1, 0x14E0($s1)
    ctx->pc = 0x1304e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5344)));
label_1304e4:
    // 0x1304e4: 0xc043c88  jal         func_10F220
label_1304e8:
    if (ctx->pc == 0x1304E8u) {
        ctx->pc = 0x1304E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1304E4u;
        // 0x1304e8: 0x26240310  addiu       $a0, $s1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1304ECu;
        goto label_1304ec;
    }
    ctx->pc = 0x1304E4u;
    SET_GPR_U32(ctx, 31, 0x1304ECu);
    ctx->pc = 0x1304E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1304E4u;
    // 0x1304e8: 0x26240310  addiu       $a0, $s1, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F220u, 0x1304E4u, 0x1304ECu)) {
        return;
    }
    ctx->pc = 0x1304ECu;
label_1304ec:
    // 0x1304ec: 0xae2014e4  sw          $zero, 0x14E4($s1)
    ctx->pc = 0x1304ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5348), GPR_U32(ctx, 0));
label_1304f0:
    // 0x1304f0: 0xc04dd42  jal         func_137508
label_1304f4:
    if (ctx->pc == 0x1304F4u) {
        ctx->pc = 0x1304F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1304F0u;
        // 0x1304f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1304F8u;
        goto label_1304f8;
    }
    ctx->pc = 0x1304F0u;
    SET_GPR_U32(ctx, 31, 0x1304F8u);
    ctx->pc = 0x1304F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1304F0u;
    // 0x1304f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137508u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x137508u, 0x1304F0u, 0x1304F8u)) {
        return;
    }
    ctx->pc = 0x1304F8u;
label_1304f8:
    // 0x1304f8: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x1304f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_1304fc:
    // 0x1304fc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1304fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_130500:
    // 0x130500: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x130500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_130504:
    // 0x130504: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x130504u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_130508:
    // 0x130508: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x130508u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_13050c:
    // 0x13050c: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x13050cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_130510:
    // 0x130510: 0x0  nop
    ctx->pc = 0x130510u;
    // NOP
label_130514:
    // 0x130514: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_130518:
    if (ctx->pc == 0x130518u) {
        ctx->pc = 0x130518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130514u;
        // 0x130518: 0x46001506  mov.s       $f20, $f2 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13051Cu;
        goto label_13051c;
    }
    ctx->pc = 0x130514u;
    {
        const bool branch_taken_0x130514 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x130514) {
            ctx->pc = 0x130518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130514u;
            // 0x130518: 0x46001506  mov.s       $f20, $f2 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13051Cu;
            goto label_13051c;
        }
    }
    ctx->pc = 0x13051Cu;
label_13051c:
    // 0x13051c: 0xc05a27c  jal         func_1689F0
label_130520:
    if (ctx->pc == 0x130520u) {
        ctx->pc = 0x130524u;
        goto label_130524;
    }
    ctx->pc = 0x13051Cu;
    SET_GPR_U32(ctx, 31, 0x130524u);
    ctx->pc = 0x1689F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1689F0u, 0x13051Cu, 0x130524u)) {
        return;
    }
    ctx->pc = 0x130524u;
label_130524:
    // 0x130524: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x130524u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_130528:
    // 0x130528: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x130528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_13052c:
    // 0x13052c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13052cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_130530:
    // 0x130530: 0xc6201ba0  lwc1        $f0, 0x1BA0($s1)
    ctx->pc = 0x130530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_130534:
    // 0x130534: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x130534u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_130538:
    // 0x130538: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x130538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13053c:
    // 0x13053c: 0x0  nop
    ctx->pc = 0x13053cu;
    // NOP
label_130540:
    // 0x130540: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_130544:
    if (ctx->pc == 0x130544u) {
        ctx->pc = 0x130544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130540u;
        // 0x130544: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x130548u;
        goto label_130548;
    }
    ctx->pc = 0x130540u;
    {
        const bool branch_taken_0x130540 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x130540) {
            ctx->pc = 0x130544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130540u;
            // 0x130544: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x130548u;
            goto label_130548;
        }
    }
    ctx->pc = 0x130548u;
label_130548:
    // 0x130548: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x130548u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_13054c:
    // 0x13054c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13054cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_130550:
    // 0x130550: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x130550u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_130554:
    // 0x130554: 0xc04cc8e  jal         func_133238
label_130558:
    if (ctx->pc == 0x130558u) {
        ctx->pc = 0x130558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130554u;
        // 0x130558: 0xafa00088  sw          $zero, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13055Cu;
        goto label_13055c;
    }
    ctx->pc = 0x130554u;
    SET_GPR_U32(ctx, 31, 0x13055Cu);
    ctx->pc = 0x130558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130554u;
    // 0x130558: 0xafa00088  sw          $zero, 0x88($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133238u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x133238u, 0x130554u, 0x13055Cu)) {
        return;
    }
    ctx->pc = 0x13055Cu;
label_13055c:
    // 0x13055c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13055cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_130560:
    // 0x130560: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x130560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_130564:
    // 0x130564: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x130564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_130568:
    // 0x130568: 0xc0c493d  jal         func_3124F4
label_13056c:
    if (ctx->pc == 0x13056Cu) {
        ctx->pc = 0x13056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130568u;
        // 0x13056c: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130570u;
        goto label_130570;
    }
    ctx->pc = 0x130568u;
    SET_GPR_U32(ctx, 31, 0x130570u);
    ctx->pc = 0x13056Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130568u;
    // 0x13056c: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x130568u, 0x130570u)) {
        return;
    }
    ctx->pc = 0x130570u;
label_130570:
    // 0x130570: 0x26261540  addiu       $a2, $s1, 0x1540
    ctx->pc = 0x130570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5440));
label_130574:
    // 0x130574: 0x26221548  addiu       $v0, $s1, 0x1548
    ctx->pc = 0x130574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 5448));
label_130578:
    // 0x130578: 0xafa600a8  sw          $a2, 0xA8($sp)
    ctx->pc = 0x130578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 6));
label_13057c:
    // 0x13057c: 0x26231558  addiu       $v1, $s1, 0x1558
    ctx->pc = 0x13057cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5464));
label_130580:
    // 0x130580: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x130580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_130584:
    // 0x130584: 0x26241560  addiu       $a0, $s1, 0x1560
    ctx->pc = 0x130584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5472));
label_130588:
    // 0x130588: 0x26251568  addiu       $a1, $s1, 0x1568
    ctx->pc = 0x130588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5480));
label_13058c:
    // 0x13058c: 0x26261570  addiu       $a2, $s1, 0x1570
    ctx->pc = 0x13058cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5488));
label_130590:
    // 0x130590: 0x26221578  addiu       $v0, $s1, 0x1578
    ctx->pc = 0x130590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 5496));
label_130594:
    // 0x130594: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x130594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_130598:
    // 0x130598: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x130598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
label_13059c:
    // 0x13059c: 0x262315c0  addiu       $v1, $s1, 0x15C0
    ctx->pc = 0x13059cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5568));
label_1305a0:
    // 0x1305a0: 0xafa500b8  sw          $a1, 0xB8($sp)
    ctx->pc = 0x1305a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
label_1305a4:
    // 0x1305a4: 0x26241580  addiu       $a0, $s1, 0x1580
    ctx->pc = 0x1305a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5504));
label_1305a8:
    // 0x1305a8: 0xafa600bc  sw          $a2, 0xBC($sp)
    ctx->pc = 0x1305a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 6));
label_1305ac:
    // 0x1305ac: 0x26251588  addiu       $a1, $s1, 0x1588
    ctx->pc = 0x1305acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5512));
label_1305b0:
    // 0x1305b0: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1305b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_1305b4:
    // 0x1305b4: 0x26261598  addiu       $a2, $s1, 0x1598
    ctx->pc = 0x1305b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5528));
label_1305b8:
    // 0x1305b8: 0x262215a0  addiu       $v0, $s1, 0x15A0
    ctx->pc = 0x1305b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 5536));
label_1305bc:
    // 0x1305bc: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x1305bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_1305c0:
    // 0x1305c0: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x1305c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
label_1305c4:
    // 0x1305c4: 0x262315a8  addiu       $v1, $s1, 0x15A8
    ctx->pc = 0x1305c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5544));
label_1305c8:
    // 0x1305c8: 0xafa500c8  sw          $a1, 0xC8($sp)
    ctx->pc = 0x1305c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 5));
label_1305cc:
    // 0x1305cc: 0x262415b0  addiu       $a0, $s1, 0x15B0
    ctx->pc = 0x1305ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5552));
label_1305d0:
    // 0x1305d0: 0xafa600cc  sw          $a2, 0xCC($sp)
    ctx->pc = 0x1305d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 6));
label_1305d4:
    // 0x1305d4: 0x262515b8  addiu       $a1, $s1, 0x15B8
    ctx->pc = 0x1305d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5560));
label_1305d8:
    // 0x1305d8: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1305d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_1305dc:
    // 0x1305dc: 0x26261620  addiu       $a2, $s1, 0x1620
    ctx->pc = 0x1305dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5664));
label_1305e0:
    // 0x1305e0: 0x26221628  addiu       $v0, $s1, 0x1628
    ctx->pc = 0x1305e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 5672));
label_1305e4:
    // 0x1305e4: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x1305e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
label_1305e8:
    // 0x1305e8: 0xafa400d8  sw          $a0, 0xD8($sp)
    ctx->pc = 0x1305e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 4));
label_1305ec:
    // 0x1305ec: 0x26231938  addiu       $v1, $s1, 0x1938
    ctx->pc = 0x1305ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 6456));
label_1305f0:
    // 0x1305f0: 0xafa500dc  sw          $a1, 0xDC($sp)
    ctx->pc = 0x1305f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 5));
label_1305f4:
    // 0x1305f4: 0x2624193c  addiu       $a0, $s1, 0x193C
    ctx->pc = 0x1305f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 6460));
label_1305f8:
    // 0x1305f8: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x1305f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
label_1305fc:
    // 0x1305fc: 0x26251940  addiu       $a1, $s1, 0x1940
    ctx->pc = 0x1305fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 6464));
label_130600:
    // 0x130600: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x130600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_130604:
    // 0x130604: 0x262615f0  addiu       $a2, $s1, 0x15F0
    ctx->pc = 0x130604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5616));
label_130608:
    // 0x130608: 0x262215f8  addiu       $v0, $s1, 0x15F8
    ctx->pc = 0x130608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 5624));
label_13060c:
    // 0x13060c: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x13060cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
label_130610:
    // 0x130610: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x130610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
label_130614:
    // 0x130614: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x130614u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_130618:
    // 0x130618: 0xafa500a4  sw          $a1, 0xA4($sp)
    ctx->pc = 0x130618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 5));
label_13061c:
    // 0x13061c: 0x27be0020  addiu       $fp, $sp, 0x20
    ctx->pc = 0x13061cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_130620:
    // 0x130620: 0xafa600e4  sw          $a2, 0xE4($sp)
    ctx->pc = 0x130620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 6));
label_130624:
    // 0x130624: 0x12c00097  beqz        $s6, . + 4 + (0x97 << 2)
label_130628:
    if (ctx->pc == 0x130628u) {
        ctx->pc = 0x130628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130624u;
        // 0x130628: 0xafa200e8  sw          $v0, 0xE8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13062Cu;
        goto label_13062c;
    }
    ctx->pc = 0x130624u;
    {
        const bool branch_taken_0x130624 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x130628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130624u;
        // 0x130628: 0xafa200e8  sw          $v0, 0xE8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130624) {
            ctx->pc = 0x130884u;
            goto label_130884;
        }
    }
    ctx->pc = 0x13062Cu;
label_13062c:
    // 0x13062c: 0x8e221bb0  lw          $v0, 0x1BB0($s1)
    ctx->pc = 0x13062cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7088)));
label_130630:
    // 0x130630: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
label_130634:
    if (ctx->pc == 0x130634u) {
        ctx->pc = 0x130634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130630u;
        // 0x130634: 0x8e231670  lw          $v1, 0x1670($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5744)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130638u;
        goto label_130638;
    }
    ctx->pc = 0x130630u;
    {
        const bool branch_taken_0x130630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130630) {
            ctx->pc = 0x130634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130630u;
            // 0x130634: 0x8e231670  lw          $v1, 0x1670($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5744)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1306BCu;
            goto label_1306bc;
        }
    }
    ctx->pc = 0x130638u;
label_130638:
    // 0x130638: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x130638u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13063c:
    // 0x13063c: 0x3c150034  lui         $s5, 0x34
    ctx->pc = 0x13063cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52 << 16));
label_130640:
    // 0x130640: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x130640u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_130644:
    // 0x130644: 0x26301630  addiu       $s0, $s1, 0x1630
    ctx->pc = 0x130644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 5680));
label_130648:
    // 0x130648: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x130648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13064c:
    // 0x13064c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x13064cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_130650:
    // 0x130650: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x130650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_130654:
    // 0x130654: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x130654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_130658:
    // 0x130658: 0x8c821a70  lw          $v0, 0x1A70($a0)
    ctx->pc = 0x130658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
label_13065c:
    // 0x13065c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_130660:
    if (ctx->pc == 0x130660u) {
        ctx->pc = 0x130660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13065Cu;
        // 0x130660: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130664u;
        goto label_130664;
    }
    ctx->pc = 0x13065Cu;
    {
        const bool branch_taken_0x13065c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x130660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13065Cu;
        // 0x130660: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13065c) {
            ctx->pc = 0x13067Cu;
            goto label_13067c;
        }
    }
    ctx->pc = 0x130664u;
label_130664:
    // 0x130664: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x130664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_130668:
    // 0x130668: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_13066c:
    if (ctx->pc == 0x13066Cu) {
        ctx->pc = 0x13066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130668u;
        // 0x13066c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130670u;
        goto label_130670;
    }
    ctx->pc = 0x130668u;
    {
        const bool branch_taken_0x130668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130668u;
        // 0x13066c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130668) {
            ctx->pc = 0x13067Cu;
            goto label_13067c;
        }
    }
    ctx->pc = 0x130670u;
label_130670:
    // 0x130670: 0xc07fd18  jal         func_1FF460
label_130674:
    if (ctx->pc == 0x130674u) {
        ctx->pc = 0x130674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130670u;
        // 0x130674: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130678u;
        goto label_130678;
    }
    ctx->pc = 0x130670u;
    SET_GPR_U32(ctx, 31, 0x130678u);
    ctx->pc = 0x130674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130670u;
    // 0x130674: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x130670u, 0x130678u)) {
        return;
    }
    ctx->pc = 0x130678u;
label_130678:
    // 0x130678: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x130678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_13067c:
    // 0x13067c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_130680:
    if (ctx->pc == 0x130680u) {
        ctx->pc = 0x130680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13067Cu;
        // 0x130680: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x130684u;
        goto label_130684;
    }
    ctx->pc = 0x13067Cu;
    {
        const bool branch_taken_0x13067c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13067Cu;
        // 0x130680: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13067c) {
            ctx->pc = 0x1306A0u;
            goto label_1306a0;
        }
    }
    ctx->pc = 0x130684u;
label_130684:
    // 0x130684: 0xc6a08368  lwc1        $f0, -0x7C98($s5)
    ctx->pc = 0x130684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294935400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_130688:
    // 0x130688: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x130688u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13068c:
    // 0x13068c: 0x0  nop
    ctx->pc = 0x13068cu;
    // NOP
label_130690:
    // 0x130690: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_130694:
    if (ctx->pc == 0x130694u) {
        ctx->pc = 0x130694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130690u;
        // 0x130694: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130698u;
        goto label_130698;
    }
    ctx->pc = 0x130690u;
    {
        const bool branch_taken_0x130690 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x130694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130690u;
        // 0x130694: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130690) {
            ctx->pc = 0x13069Cu;
            goto label_13069c;
        }
    }
    ctx->pc = 0x130698u;
label_130698:
    // 0x130698: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x130698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13069c:
    // 0x13069c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x13069cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1306a0:
    // 0x1306a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1306a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1306a4:
    // 0x1306a4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1306a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1306a8:
    // 0x1306a8: 0x2e620012  sltiu       $v0, $s3, 0x12
    ctx->pc = 0x1306a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_1306ac:
    // 0x1306ac: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_1306b0:
    if (ctx->pc == 0x1306B0u) {
        ctx->pc = 0x1306B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306ACu;
        // 0x1306b0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1306B4u;
        goto label_1306b4;
    }
    ctx->pc = 0x1306ACu;
    {
        const bool branch_taken_0x1306ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1306B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306ACu;
        // 0x1306b0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1306ac) {
            ctx->pc = 0x130648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130648;
        }
    }
    ctx->pc = 0x1306B4u;
label_1306b4:
    // 0x1306b4: 0x10000074  b           . + 4 + (0x74 << 2)
label_1306b8:
    if (ctx->pc == 0x1306B8u) {
        ctx->pc = 0x1306B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306B4u;
        // 0x1306b8: 0x2413000d  addiu       $s3, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1306BCu;
        goto label_1306bc;
    }
    ctx->pc = 0x1306B4u;
    {
        const bool branch_taken_0x1306b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1306B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306B4u;
        // 0x1306b8: 0x2413000d  addiu       $s3, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1306b4) {
            ctx->pc = 0x130888u;
            goto label_130888;
        }
    }
    ctx->pc = 0x1306BCu;
label_1306bc:
    // 0x1306bc: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1306bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_1306c0:
    // 0x1306c0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1306c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1306c4:
    // 0x1306c4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1306c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1306c8:
    // 0x1306c8: 0x8ca21a70  lw          $v0, 0x1A70($a1)
    ctx->pc = 0x1306c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6768)));
label_1306cc:
    // 0x1306cc: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_1306d0:
    if (ctx->pc == 0x1306D0u) {
        ctx->pc = 0x1306D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306CCu;
        // 0x1306d0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1306D4u;
        goto label_1306d4;
    }
    ctx->pc = 0x1306CCu;
    {
        const bool branch_taken_0x1306cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1306D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306CCu;
        // 0x1306d0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1306cc) {
            ctx->pc = 0x1306ECu;
            goto label_1306ec;
        }
    }
    ctx->pc = 0x1306D4u;
label_1306d4:
    // 0x1306d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1306d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1306d8:
    // 0x1306d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1306dc:
    if (ctx->pc == 0x1306DCu) {
        ctx->pc = 0x1306DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306D8u;
        // 0x1306dc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1306E0u;
        goto label_1306e0;
    }
    ctx->pc = 0x1306D8u;
    {
        const bool branch_taken_0x1306d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1306DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306D8u;
        // 0x1306dc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1306d8) {
            ctx->pc = 0x1306ECu;
            goto label_1306ec;
        }
    }
    ctx->pc = 0x1306E0u;
label_1306e0:
    // 0x1306e0: 0xc07fd18  jal         func_1FF460
label_1306e4:
    if (ctx->pc == 0x1306E4u) {
        ctx->pc = 0x1306E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306E0u;
        // 0x1306e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1306E8u;
        goto label_1306e8;
    }
    ctx->pc = 0x1306E0u;
    SET_GPR_U32(ctx, 31, 0x1306E8u);
    ctx->pc = 0x1306E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1306E0u;
    // 0x1306e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1306E0u, 0x1306E8u)) {
        return;
    }
    ctx->pc = 0x1306E8u;
label_1306e8:
    // 0x1306e8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1306e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1306ec:
    // 0x1306ec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1306f0:
    if (ctx->pc == 0x1306F0u) {
        ctx->pc = 0x1306F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306ECu;
        // 0x1306f0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1306F4u;
        goto label_1306f4;
    }
    ctx->pc = 0x1306ECu;
    {
        const bool branch_taken_0x1306ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1306F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306ECu;
        // 0x1306f0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1306ec) {
            ctx->pc = 0x130714u;
            goto label_130714;
        }
    }
    ctx->pc = 0x1306F4u;
label_1306f4:
    // 0x1306f4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1306f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1306f8:
    // 0x1306f8: 0xc4408368  lwc1        $f0, -0x7C98($v0)
    ctx->pc = 0x1306f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1306fc:
    // 0x1306fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1306fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_130700:
    // 0x130700: 0x0  nop
    ctx->pc = 0x130700u;
    // NOP
label_130704:
    // 0x130704: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_130708:
    if (ctx->pc == 0x130708u) {
        ctx->pc = 0x130708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130704u;
        // 0x130708: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13070Cu;
        goto label_13070c;
    }
    ctx->pc = 0x130704u;
    {
        const bool branch_taken_0x130704 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x130708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130704u;
        // 0x130708: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130704) {
            ctx->pc = 0x130710u;
            goto label_130710;
        }
    }
    ctx->pc = 0x13070Cu;
label_13070c:
    // 0x13070c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13070cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_130710:
    // 0x130710: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x130710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_130714:
    // 0x130714: 0x8e231688  lw          $v1, 0x1688($s1)
    ctx->pc = 0x130714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5768)));
label_130718:
    // 0x130718: 0x3c060070  lui         $a2, 0x70
    ctx->pc = 0x130718u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)112 << 16));
label_13071c:
    // 0x13071c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x13071cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_130720:
    // 0x130720: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x130720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_130724:
    // 0x130724: 0x8cc21a70  lw          $v0, 0x1A70($a2)
    ctx->pc = 0x130724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 6768)));
label_130728:
    // 0x130728: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_13072c:
    if (ctx->pc == 0x13072Cu) {
        ctx->pc = 0x13072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130728u;
        // 0x13072c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130730u;
        goto label_130730;
    }
    ctx->pc = 0x130728u;
    {
        const bool branch_taken_0x130728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130728u;
        // 0x13072c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130728) {
            ctx->pc = 0x130748u;
            goto label_130748;
        }
    }
    ctx->pc = 0x130730u;
label_130730:
    // 0x130730: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x130730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_130734:
    // 0x130734: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_130738:
    if (ctx->pc == 0x130738u) {
        ctx->pc = 0x130738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130734u;
        // 0x130738: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13073Cu;
        goto label_13073c;
    }
    ctx->pc = 0x130734u;
    {
        const bool branch_taken_0x130734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130734u;
        // 0x130738: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130734) {
            ctx->pc = 0x130748u;
            goto label_130748;
        }
    }
    ctx->pc = 0x13073Cu;
label_13073c:
    // 0x13073c: 0xc07fd18  jal         func_1FF460
label_130740:
    if (ctx->pc == 0x130740u) {
        ctx->pc = 0x130740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13073Cu;
        // 0x130740: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130744u;
        goto label_130744;
    }
    ctx->pc = 0x13073Cu;
    SET_GPR_U32(ctx, 31, 0x130744u);
    ctx->pc = 0x130740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13073Cu;
    // 0x130740: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x13073Cu, 0x130744u)) {
        return;
    }
    ctx->pc = 0x130744u;
label_130744:
    // 0x130744: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x130744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_130748:
    // 0x130748: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_13074c:
    if (ctx->pc == 0x13074Cu) {
        ctx->pc = 0x13074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130748u;
        // 0x13074c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130750u;
        goto label_130750;
    }
    ctx->pc = 0x130748u;
    {
        const bool branch_taken_0x130748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130748u;
        // 0x13074c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130748) {
            ctx->pc = 0x130770u;
            goto label_130770;
        }
    }
    ctx->pc = 0x130750u;
label_130750:
    // 0x130750: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x130750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_130754:
    // 0x130754: 0xc4408368  lwc1        $f0, -0x7C98($v0)
    ctx->pc = 0x130754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_130758:
    // 0x130758: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x130758u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13075c:
    // 0x13075c: 0x0  nop
    ctx->pc = 0x13075cu;
    // NOP
label_130760:
    // 0x130760: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_130764:
    if (ctx->pc == 0x130764u) {
        ctx->pc = 0x130764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130760u;
        // 0x130764: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130768u;
        goto label_130768;
    }
    ctx->pc = 0x130760u;
    {
        const bool branch_taken_0x130760 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x130764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130760u;
        // 0x130764: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130760) {
            ctx->pc = 0x13076Cu;
            goto label_13076c;
        }
    }
    ctx->pc = 0x130768u;
label_130768:
    // 0x130768: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x130768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13076c:
    // 0x13076c: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x13076cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_130770:
    // 0x130770: 0x8e231690  lw          $v1, 0x1690($s1)
    ctx->pc = 0x130770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5776)));
label_130774:
    // 0x130774: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x130774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_130778:
    // 0x130778: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x130778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_13077c:
    // 0x13077c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x13077cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_130780:
    // 0x130780: 0x8c821a70  lw          $v0, 0x1A70($a0)
    ctx->pc = 0x130780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
label_130784:
    // 0x130784: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_130788:
    if (ctx->pc == 0x130788u) {
        ctx->pc = 0x130788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130784u;
        // 0x130788: 0x26251540  addiu       $a1, $s1, 0x1540 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13078Cu;
        goto label_13078c;
    }
    ctx->pc = 0x130784u;
    {
        const bool branch_taken_0x130784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x130788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130784u;
        // 0x130788: 0x26251540  addiu       $a1, $s1, 0x1540 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130784) {
            ctx->pc = 0x1307A4u;
            goto label_1307a4;
        }
    }
    ctx->pc = 0x13078Cu;
label_13078c:
    // 0x13078c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13078cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_130790:
    // 0x130790: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_130794:
    if (ctx->pc == 0x130794u) {
        ctx->pc = 0x130794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130790u;
        // 0x130794: 0x26261548  addiu       $a2, $s1, 0x1548 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130798u;
        goto label_130798;
    }
    ctx->pc = 0x130790u;
    {
        const bool branch_taken_0x130790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130790u;
        // 0x130794: 0x26261548  addiu       $a2, $s1, 0x1548 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130790) {
            ctx->pc = 0x1307A8u;
            goto label_1307a8;
        }
    }
    ctx->pc = 0x130798u;
label_130798:
    // 0x130798: 0xc07fd18  jal         func_1FF460
label_13079c:
    if (ctx->pc == 0x13079Cu) {
        ctx->pc = 0x13079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130798u;
        // 0x13079c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1307A0u;
        goto label_1307a0;
    }
    ctx->pc = 0x130798u;
    SET_GPR_U32(ctx, 31, 0x1307A0u);
    ctx->pc = 0x13079Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130798u;
    // 0x13079c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x130798u, 0x1307A0u)) {
        return;
    }
    ctx->pc = 0x1307A0u;
label_1307a0:
    // 0x1307a0: 0x26251540  addiu       $a1, $s1, 0x1540
    ctx->pc = 0x1307a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5440));
label_1307a4:
    // 0x1307a4: 0x26261548  addiu       $a2, $s1, 0x1548
    ctx->pc = 0x1307a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5448));
label_1307a8:
    // 0x1307a8: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x1307a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
label_1307ac:
    // 0x1307ac: 0x26231558  addiu       $v1, $s1, 0x1558
    ctx->pc = 0x1307acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5464));
label_1307b0:
    // 0x1307b0: 0xafa600ac  sw          $a2, 0xAC($sp)
    ctx->pc = 0x1307b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
label_1307b4:
    // 0x1307b4: 0x26241560  addiu       $a0, $s1, 0x1560
    ctx->pc = 0x1307b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5472));
label_1307b8:
    // 0x1307b8: 0x26251568  addiu       $a1, $s1, 0x1568
    ctx->pc = 0x1307b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5480));
label_1307bc:
    // 0x1307bc: 0x26261570  addiu       $a2, $s1, 0x1570
    ctx->pc = 0x1307bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5488));
label_1307c0:
    // 0x1307c0: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x1307c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_1307c4:
    // 0x1307c4: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x1307c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1307c8:
    // 0x1307c8: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x1307c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
label_1307cc:
    // 0x1307cc: 0x26231578  addiu       $v1, $s1, 0x1578
    ctx->pc = 0x1307ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5496));
label_1307d0:
    // 0x1307d0: 0xafa500b8  sw          $a1, 0xB8($sp)
    ctx->pc = 0x1307d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
label_1307d4:
    // 0x1307d4: 0x262415c0  addiu       $a0, $s1, 0x15C0
    ctx->pc = 0x1307d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5568));
label_1307d8:
    // 0x1307d8: 0xafa600bc  sw          $a2, 0xBC($sp)
    ctx->pc = 0x1307d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 6));
label_1307dc:
    // 0x1307dc: 0x26251580  addiu       $a1, $s1, 0x1580
    ctx->pc = 0x1307dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5504));
label_1307e0:
    // 0x1307e0: 0x26261588  addiu       $a2, $s1, 0x1588
    ctx->pc = 0x1307e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5512));
label_1307e4:
    // 0x1307e4: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x1307e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_1307e8:
    // 0x1307e8: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x1307e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
label_1307ec:
    // 0x1307ec: 0x26231598  addiu       $v1, $s1, 0x1598
    ctx->pc = 0x1307ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5528));
label_1307f0:
    // 0x1307f0: 0xafa500c4  sw          $a1, 0xC4($sp)
    ctx->pc = 0x1307f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 5));
label_1307f4:
    // 0x1307f4: 0x262415a0  addiu       $a0, $s1, 0x15A0
    ctx->pc = 0x1307f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5536));
label_1307f8:
    // 0x1307f8: 0xafa600c8  sw          $a2, 0xC8($sp)
    ctx->pc = 0x1307f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 6));
label_1307fc:
    // 0x1307fc: 0x262515a8  addiu       $a1, $s1, 0x15A8
    ctx->pc = 0x1307fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5544));
label_130800:
    // 0x130800: 0x262615b0  addiu       $a2, $s1, 0x15B0
    ctx->pc = 0x130800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5552));
label_130804:
    // 0x130804: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x130804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
label_130808:
    // 0x130808: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x130808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
label_13080c:
    // 0x13080c: 0x262315b8  addiu       $v1, $s1, 0x15B8
    ctx->pc = 0x13080cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5560));
label_130810:
    // 0x130810: 0xafa500d4  sw          $a1, 0xD4($sp)
    ctx->pc = 0x130810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 5));
label_130814:
    // 0x130814: 0x26241620  addiu       $a0, $s1, 0x1620
    ctx->pc = 0x130814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5664));
label_130818:
    // 0x130818: 0xafa600d8  sw          $a2, 0xD8($sp)
    ctx->pc = 0x130818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 6));
label_13081c:
    // 0x13081c: 0x26251628  addiu       $a1, $s1, 0x1628
    ctx->pc = 0x13081cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5672));
label_130820:
    // 0x130820: 0x26261938  addiu       $a2, $s1, 0x1938
    ctx->pc = 0x130820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 6456));
label_130824:
    // 0x130824: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x130824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
label_130828:
    // 0x130828: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x130828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
label_13082c:
    // 0x13082c: 0x2623193c  addiu       $v1, $s1, 0x193C
    ctx->pc = 0x13082cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 6460));
label_130830:
    // 0x130830: 0xafa50094  sw          $a1, 0x94($sp)
    ctx->pc = 0x130830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 5));
label_130834:
    // 0x130834: 0x26241940  addiu       $a0, $s1, 0x1940
    ctx->pc = 0x130834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 6464));
label_130838:
    // 0x130838: 0xafa6009c  sw          $a2, 0x9C($sp)
    ctx->pc = 0x130838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 6));
label_13083c:
    // 0x13083c: 0x262515f0  addiu       $a1, $s1, 0x15F0
    ctx->pc = 0x13083cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5616));
label_130840:
    // 0x130840: 0x262615f8  addiu       $a2, $s1, 0x15F8
    ctx->pc = 0x130840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5624));
label_130844:
    // 0x130844: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x130844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_130848:
    // 0x130848: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x130848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_13084c:
    // 0x13084c: 0x27be0020  addiu       $fp, $sp, 0x20
    ctx->pc = 0x13084cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_130850:
    // 0x130850: 0xafa400a4  sw          $a0, 0xA4($sp)
    ctx->pc = 0x130850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 4));
label_130854:
    // 0x130854: 0xafa500e4  sw          $a1, 0xE4($sp)
    ctx->pc = 0x130854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 5));
label_130858:
    // 0x130858: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_13085c:
    if (ctx->pc == 0x13085Cu) {
        ctx->pc = 0x13085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130858u;
        // 0x13085c: 0xafa600e8  sw          $a2, 0xE8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130860u;
        goto label_130860;
    }
    ctx->pc = 0x130858u;
    {
        const bool branch_taken_0x130858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130858u;
        // 0x13085c: 0xafa600e8  sw          $a2, 0xE8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130858) {
            ctx->pc = 0x130884u;
            goto label_130884;
        }
    }
    ctx->pc = 0x130860u;
label_130860:
    // 0x130860: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x130860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_130864:
    // 0x130864: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x130864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_130868:
    // 0x130868: 0xc4408368  lwc1        $f0, -0x7C98($v0)
    ctx->pc = 0x130868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13086c:
    // 0x13086c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13086cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_130870:
    // 0x130870: 0x0  nop
    ctx->pc = 0x130870u;
    // NOP
label_130874:
    // 0x130874: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_130878:
    if (ctx->pc == 0x130878u) {
        ctx->pc = 0x130878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130874u;
        // 0x130878: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13087Cu;
        goto label_13087c;
    }
    ctx->pc = 0x130874u;
    {
        const bool branch_taken_0x130874 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x130878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130874u;
        // 0x130878: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130874) {
            ctx->pc = 0x130880u;
            goto label_130880;
        }
    }
    ctx->pc = 0x13087Cu;
label_13087c:
    // 0x13087c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13087cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_130880:
    // 0x130880: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x130880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_130884:
    // 0x130884: 0x2413000d  addiu       $s3, $zero, 0xD
    ctx->pc = 0x130884u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_130888:
    // 0x130888: 0x3c150034  lui         $s5, 0x34
    ctx->pc = 0x130888u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52 << 16));
label_13088c:
    // 0x13088c: 0x27b20064  addiu       $s2, $sp, 0x64
    ctx->pc = 0x13088cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_130890:
    // 0x130890: 0x26301698  addiu       $s0, $s1, 0x1698
    ctx->pc = 0x130890u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 5784));
label_130894:
    // 0x130894: 0x0  nop
    ctx->pc = 0x130894u;
    // NOP
label_130898:
    // 0x130898: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x130898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13089c:
    // 0x13089c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x13089cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_1308a0:
    // 0x1308a0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1308a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1308a4:
    // 0x1308a4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1308a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1308a8:
    // 0x1308a8: 0x8c821a70  lw          $v0, 0x1A70($a0)
    ctx->pc = 0x1308a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
label_1308ac:
    // 0x1308ac: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_1308b0:
    if (ctx->pc == 0x1308B0u) {
        ctx->pc = 0x1308B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1308ACu;
        // 0x1308b0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1308B4u;
        goto label_1308b4;
    }
    ctx->pc = 0x1308ACu;
    {
        const bool branch_taken_0x1308ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1308B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1308ACu;
        // 0x1308b0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1308ac) {
            ctx->pc = 0x1308CCu;
            goto label_1308cc;
        }
    }
    ctx->pc = 0x1308B4u;
label_1308b4:
    // 0x1308b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1308b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1308b8:
    // 0x1308b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1308bc:
    if (ctx->pc == 0x1308BCu) {
        ctx->pc = 0x1308BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1308B8u;
        // 0x1308bc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1308C0u;
        goto label_1308c0;
    }
    ctx->pc = 0x1308B8u;
    {
        const bool branch_taken_0x1308b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1308BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1308B8u;
        // 0x1308bc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1308b8) {
            ctx->pc = 0x1308CCu;
            goto label_1308cc;
        }
    }
    ctx->pc = 0x1308C0u;
label_1308c0:
    // 0x1308c0: 0xc07fd18  jal         func_1FF460
label_1308c4:
    if (ctx->pc == 0x1308C4u) {
        ctx->pc = 0x1308C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1308C0u;
        // 0x1308c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1308C8u;
        goto label_1308c8;
    }
    ctx->pc = 0x1308C0u;
    SET_GPR_U32(ctx, 31, 0x1308C8u);
    ctx->pc = 0x1308C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1308C0u;
    // 0x1308c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1308C0u, 0x1308C8u)) {
        return;
    }
    ctx->pc = 0x1308C8u;
label_1308c8:
    // 0x1308c8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1308c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1308cc:
    // 0x1308cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1308d0:
    if (ctx->pc == 0x1308D0u) {
        ctx->pc = 0x1308D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1308CCu;
        // 0x1308d0: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1308D4u;
        goto label_1308d4;
    }
    ctx->pc = 0x1308CCu;
    {
        const bool branch_taken_0x1308cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1308D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1308CCu;
        // 0x1308d0: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1308cc) {
            ctx->pc = 0x1308F0u;
            goto label_1308f0;
        }
    }
    ctx->pc = 0x1308D4u;
label_1308d4:
    // 0x1308d4: 0xc6a08368  lwc1        $f0, -0x7C98($s5)
    ctx->pc = 0x1308d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294935400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1308d8:
    // 0x1308d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1308d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1308dc:
    // 0x1308dc: 0x0  nop
    ctx->pc = 0x1308dcu;
    // NOP
label_1308e0:
    // 0x1308e0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1308e4:
    if (ctx->pc == 0x1308E4u) {
        ctx->pc = 0x1308E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1308E0u;
        // 0x1308e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1308E8u;
        goto label_1308e8;
    }
    ctx->pc = 0x1308E0u;
    {
        const bool branch_taken_0x1308e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1308E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1308E0u;
        // 0x1308e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1308e0) {
            ctx->pc = 0x1308ECu;
            goto label_1308ec;
        }
    }
    ctx->pc = 0x1308E8u;
label_1308e8:
    // 0x1308e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1308e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1308ec:
    // 0x1308ec: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1308ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1308f0:
    // 0x1308f0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1308f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1308f4:
    // 0x1308f4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1308f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1308f8:
    // 0x1308f8: 0x2e620012  sltiu       $v0, $s3, 0x12
    ctx->pc = 0x1308f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_1308fc:
    // 0x1308fc: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_130900:
    if (ctx->pc == 0x130900u) {
        ctx->pc = 0x130900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1308FCu;
        // 0x130900: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130904u;
        goto label_130904;
    }
    ctx->pc = 0x1308FCu;
    {
        const bool branch_taken_0x1308fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1308FCu;
        // 0x130900: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1308fc) {
            ctx->pc = 0x130898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130898;
        }
    }
    ctx->pc = 0x130904u;
label_130904:
    // 0x130904: 0xc05fd96  jal         func_17F658
label_130908:
    if (ctx->pc == 0x130908u) {
        ctx->pc = 0x13090Cu;
        goto label_13090c;
    }
    ctx->pc = 0x130904u;
    SET_GPR_U32(ctx, 31, 0x13090Cu);
    ctx->pc = 0x17F658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F658u, 0x130904u, 0x13090Cu)) {
        return;
    }
    ctx->pc = 0x13090Cu;
label_13090c:
    // 0x13090c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_130910:
    if (ctx->pc == 0x130910u) {
        ctx->pc = 0x130910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13090Cu;
        // 0x130910: 0x8fa2003c  lw          $v0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130914u;
        goto label_130914;
    }
    ctx->pc = 0x13090Cu;
    {
        const bool branch_taken_0x13090c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13090Cu;
        // 0x130910: 0x8fa2003c  lw          $v0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13090c) {
            ctx->pc = 0x13091Cu;
            goto label_13091c;
        }
    }
    ctx->pc = 0x130914u;
label_130914:
    // 0x130914: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x130914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_130918:
    // 0x130918: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x130918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_13091c:
    // 0x13091c: 0x12c0000a  beqz        $s6, . + 4 + (0xA << 2)
label_130920:
    if (ctx->pc == 0x130920u) {
        ctx->pc = 0x130924u;
        goto label_130924;
    }
    ctx->pc = 0x13091Cu;
    {
        const bool branch_taken_0x13091c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x13091c) {
            ctx->pc = 0x130948u;
            goto label_130948;
        }
    }
    ctx->pc = 0x130924u;
label_130924:
    // 0x130924: 0xc04ddee  jal         func_1377B8
label_130928:
    if (ctx->pc == 0x130928u) {
        ctx->pc = 0x130928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130924u;
        // 0x130928: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13092Cu;
        goto label_13092c;
    }
    ctx->pc = 0x130924u;
    SET_GPR_U32(ctx, 31, 0x13092Cu);
    ctx->pc = 0x130928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130924u;
    // 0x130928: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1377B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1377B8u, 0x130924u, 0x13092Cu)) {
        return;
    }
    ctx->pc = 0x13092Cu;
label_13092c:
    // 0x13092c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_130930:
    if (ctx->pc == 0x130930u) {
        ctx->pc = 0x130934u;
        goto label_130934;
    }
    ctx->pc = 0x13092Cu;
    {
        const bool branch_taken_0x13092c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13092c) {
            ctx->pc = 0x130948u;
            goto label_130948;
        }
    }
    ctx->pc = 0x130934u;
label_130934:
    // 0x130934: 0x8e221860  lw          $v0, 0x1860($s1)
    ctx->pc = 0x130934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6240)));
label_130938:
    // 0x130938: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_13093c:
    if (ctx->pc == 0x13093Cu) {
        ctx->pc = 0x13093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130938u;
        // 0x13093c: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130940u;
        goto label_130940;
    }
    ctx->pc = 0x130938u;
    {
        const bool branch_taken_0x130938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130938u;
        // 0x13093c: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130938) {
            ctx->pc = 0x130948u;
            goto label_130948;
        }
    }
    ctx->pc = 0x130940u;
label_130940:
    // 0x130940: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_130944:
    if (ctx->pc == 0x130944u) {
        ctx->pc = 0x130944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130940u;
        // 0x130944: 0xae201860  sw          $zero, 0x1860($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130948u;
        goto label_130948;
    }
    ctx->pc = 0x130940u;
    {
        const bool branch_taken_0x130940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130940) {
            ctx->pc = 0x130944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130940u;
            // 0x130944: 0xae201860  sw          $zero, 0x1860($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 6240), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130948u;
            goto label_130948;
        }
    }
    ctx->pc = 0x130948u;
label_130948:
    // 0x130948: 0xc04ddee  jal         func_1377B8
label_13094c:
    if (ctx->pc == 0x13094Cu) {
        ctx->pc = 0x13094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130948u;
        // 0x13094c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130950u;
        goto label_130950;
    }
    ctx->pc = 0x130948u;
    SET_GPR_U32(ctx, 31, 0x130950u);
    ctx->pc = 0x13094Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130948u;
    // 0x13094c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1377B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1377B8u, 0x130948u, 0x130950u)) {
        return;
    }
    ctx->pc = 0x130950u;
label_130950:
    // 0x130950: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_130954:
    if (ctx->pc == 0x130954u) {
        ctx->pc = 0x130954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130950u;
        // 0x130954: 0x8e221870  lw          $v0, 0x1870($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130958u;
        goto label_130958;
    }
    ctx->pc = 0x130950u;
    {
        const bool branch_taken_0x130950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130950) {
            ctx->pc = 0x130954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130950u;
            // 0x130954: 0x8e221870  lw          $v0, 0x1870($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130964u;
            goto label_130964;
        }
    }
    ctx->pc = 0x130958u;
label_130958:
    // 0x130958: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x130958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_13095c:
    // 0x13095c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x13095cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_130960:
    // 0x130960: 0x8e221870  lw          $v0, 0x1870($s1)
    ctx->pc = 0x130960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6256)));
label_130964:
    // 0x130964: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_130968:
    if (ctx->pc == 0x130968u) {
        ctx->pc = 0x130968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130964u;
        // 0x130968: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13096Cu;
        goto label_13096c;
    }
    ctx->pc = 0x130964u;
    {
        const bool branch_taken_0x130964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130964) {
            ctx->pc = 0x130968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130964u;
            // 0x130968: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13096Cu;
            goto label_13096c;
        }
    }
    ctx->pc = 0x13096Cu;
label_13096c:
    // 0x13096c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x13096cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_130970:
    // 0x130970: 0xae201bc4  sw          $zero, 0x1BC4($s1)
    ctx->pc = 0x130970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7108), GPR_U32(ctx, 0));
label_130974:
    // 0x130974: 0xae201bc0  sw          $zero, 0x1BC0($s1)
    ctx->pc = 0x130974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7104), GPR_U32(ctx, 0));
label_130978:
    // 0x130978: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_13097c:
    if (ctx->pc == 0x13097Cu) {
        ctx->pc = 0x13097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130978u;
        // 0x13097c: 0xae201bbc  sw          $zero, 0x1BBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 7100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130980u;
        goto label_130980;
    }
    ctx->pc = 0x130978u;
    {
        const bool branch_taken_0x130978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130978u;
        // 0x13097c: 0xae201bbc  sw          $zero, 0x1BBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 7100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130978) {
            ctx->pc = 0x130994u;
            goto label_130994;
        }
    }
    ctx->pc = 0x130980u;
label_130980:
    // 0x130980: 0x8e221858  lw          $v0, 0x1858($s1)
    ctx->pc = 0x130980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6232)));
label_130984:
    // 0x130984: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_130988:
    if (ctx->pc == 0x130988u) {
        ctx->pc = 0x130988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130984u;
        // 0x130988: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13098Cu;
        goto label_13098c;
    }
    ctx->pc = 0x130984u;
    {
        const bool branch_taken_0x130984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130984u;
        // 0x130988: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130984) {
            ctx->pc = 0x130998u;
            goto label_130998;
        }
    }
    ctx->pc = 0x13098Cu;
label_13098c:
    // 0x13098c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13098cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_130990:
    // 0x130990: 0xae221bbc  sw          $v0, 0x1BBC($s1)
    ctx->pc = 0x130990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7100), GPR_U32(ctx, 2));
label_130994:
    // 0x130994: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x130994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_130998:
    // 0x130998: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_13099c:
    if (ctx->pc == 0x13099Cu) {
        ctx->pc = 0x13099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130998u;
        // 0x13099c: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1309A0u;
        goto label_1309a0;
    }
    ctx->pc = 0x130998u;
    {
        const bool branch_taken_0x130998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130998u;
        // 0x13099c: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130998) {
            ctx->pc = 0x1309B8u;
            goto label_1309b8;
        }
    }
    ctx->pc = 0x1309A0u;
label_1309a0:
    // 0x1309a0: 0x8e22185c  lw          $v0, 0x185C($s1)
    ctx->pc = 0x1309a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6236)));
label_1309a4:
    // 0x1309a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1309a8:
    if (ctx->pc == 0x1309A8u) {
        ctx->pc = 0x1309A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1309A4u;
        // 0x1309a8: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1309ACu;
        goto label_1309ac;
    }
    ctx->pc = 0x1309A4u;
    {
        const bool branch_taken_0x1309a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1309A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1309A4u;
        // 0x1309a8: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1309a4) {
            ctx->pc = 0x1309B8u;
            goto label_1309b8;
        }
    }
    ctx->pc = 0x1309ACu;
label_1309ac:
    // 0x1309ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1309acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1309b0:
    // 0x1309b0: 0xae221bc0  sw          $v0, 0x1BC0($s1)
    ctx->pc = 0x1309b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7104), GPR_U32(ctx, 2));
label_1309b4:
    // 0x1309b4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1309b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1309b8:
    // 0x1309b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1309bc:
    if (ctx->pc == 0x1309BCu) {
        ctx->pc = 0x1309BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1309B8u;
        // 0x1309bc: 0x8fa2005c  lw          $v0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1309C0u;
        goto label_1309c0;
    }
    ctx->pc = 0x1309B8u;
    {
        const bool branch_taken_0x1309b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1309BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1309B8u;
        // 0x1309bc: 0x8fa2005c  lw          $v0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1309b8) {
            ctx->pc = 0x1309D8u;
            goto label_1309d8;
        }
    }
    ctx->pc = 0x1309C0u;
label_1309c0:
    // 0x1309c0: 0x8e22184c  lw          $v0, 0x184C($s1)
    ctx->pc = 0x1309c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6220)));
label_1309c4:
    // 0x1309c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1309c8:
    if (ctx->pc == 0x1309C8u) {
        ctx->pc = 0x1309C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1309C4u;
        // 0x1309c8: 0x8fa2005c  lw          $v0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1309CCu;
        goto label_1309cc;
    }
    ctx->pc = 0x1309C4u;
    {
        const bool branch_taken_0x1309c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1309C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1309C4u;
        // 0x1309c8: 0x8fa2005c  lw          $v0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1309c4) {
            ctx->pc = 0x1309D8u;
            goto label_1309d8;
        }
    }
    ctx->pc = 0x1309CCu;
label_1309cc:
    // 0x1309cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1309ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1309d0:
    // 0x1309d0: 0xae221bc4  sw          $v0, 0x1BC4($s1)
    ctx->pc = 0x1309d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7108), GPR_U32(ctx, 2));
label_1309d4:
    // 0x1309d4: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1309d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1309d8:
    // 0x1309d8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1309d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1309dc:
    // 0x1309dc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1309dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1309e0:
    // 0x1309e0: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x1309e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1309e4:
    // 0x1309e4: 0xae221858  sw          $v0, 0x1858($s1)
    ctx->pc = 0x1309e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6232), GPR_U32(ctx, 2));
label_1309e8:
    // 0x1309e8: 0xae23185c  sw          $v1, 0x185C($s1)
    ctx->pc = 0x1309e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6236), GPR_U32(ctx, 3));
label_1309ec:
    // 0x1309ec: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1309f0:
    if (ctx->pc == 0x1309F0u) {
        ctx->pc = 0x1309F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1309ECu;
        // 0x1309f0: 0xae24184c  sw          $a0, 0x184C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6220), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1309F4u;
        goto label_1309f4;
    }
    ctx->pc = 0x1309ECu;
    {
        const bool branch_taken_0x1309ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1309F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1309ECu;
        // 0x1309f0: 0xae24184c  sw          $a0, 0x184C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6220), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1309ec) {
            ctx->pc = 0x130A08u;
            goto label_130a08;
        }
    }
    ctx->pc = 0x1309F4u;
label_1309f4:
    // 0x1309f4: 0x8e221848  lw          $v0, 0x1848($s1)
    ctx->pc = 0x1309f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6216)));
label_1309f8:
    // 0x1309f8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1309fc:
    if (ctx->pc == 0x1309FCu) {
        ctx->pc = 0x1309FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1309F8u;
        // 0x1309fc: 0x8fa60038  lw          $a2, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130A00u;
        goto label_130a00;
    }
    ctx->pc = 0x1309F8u;
    {
        const bool branch_taken_0x1309f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1309f8) {
            ctx->pc = 0x1309FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1309F8u;
            // 0x1309fc: 0x8fa60038  lw          $a2, 0x38($sp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130A0Cu;
            goto label_130a0c;
        }
    }
    ctx->pc = 0x130A00u;
label_130a00:
    // 0x130a00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x130a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_130a04:
    // 0x130a04: 0xae221868  sw          $v0, 0x1868($s1)
    ctx->pc = 0x130a04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6248), GPR_U32(ctx, 2));
label_130a08:
    // 0x130a08: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x130a08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_130a0c:
    // 0x130a0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x130a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_130a10:
    // 0x130a10: 0xc067fca  jal         func_19FF28
label_130a14:
    if (ctx->pc == 0x130A14u) {
        ctx->pc = 0x130A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A10u;
        // 0x130a14: 0x8fa500a8  lw          $a1, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130A18u;
        goto label_130a18;
    }
    ctx->pc = 0x130A10u;
    SET_GPR_U32(ctx, 31, 0x130A18u);
    ctx->pc = 0x130A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130A10u;
    // 0x130a14: 0x8fa500a8  lw          $a1, 0xA8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x130A10u, 0x130A18u)) {
        return;
    }
    ctx->pc = 0x130A18u;
label_130a18:
    // 0x130a18: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x130a18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_130a1c:
    // 0x130a1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x130a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_130a20:
    // 0x130a20: 0xc067fca  jal         func_19FF28
label_130a24:
    if (ctx->pc == 0x130A24u) {
        ctx->pc = 0x130A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A20u;
        // 0x130a24: 0x8fa500ac  lw          $a1, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130A28u;
        goto label_130a28;
    }
    ctx->pc = 0x130A20u;
    SET_GPR_U32(ctx, 31, 0x130A28u);
    ctx->pc = 0x130A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130A20u;
    // 0x130a24: 0x8fa500ac  lw          $a1, 0xAC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x130A20u, 0x130A28u)) {
        return;
    }
    ctx->pc = 0x130A28u;
label_130a28:
    // 0x130a28: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x130a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_130a2c:
    // 0x130a2c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_130a30:
    if (ctx->pc == 0x130A30u) {
        ctx->pc = 0x130A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A2Cu;
        // 0x130a30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130A34u;
        goto label_130a34;
    }
    ctx->pc = 0x130A2Cu;
    {
        const bool branch_taken_0x130a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A2Cu;
        // 0x130a30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130a2c) {
            ctx->pc = 0x130A40u;
            goto label_130a40;
        }
    }
    ctx->pc = 0x130A34u;
label_130a34:
    // 0x130a34: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x130a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_130a38:
    // 0x130a38: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_130a3c:
    if (ctx->pc == 0x130A3Cu) {
        ctx->pc = 0x130A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A38u;
        // 0x130a3c: 0x8fa500b0  lw          $a1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130A40u;
        goto label_130a40;
    }
    ctx->pc = 0x130A38u;
    {
        const bool branch_taken_0x130a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130a38) {
            ctx->pc = 0x130A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130A38u;
            // 0x130a3c: 0x8fa500b0  lw          $a1, 0xB0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130A48u;
            goto label_130a48;
        }
    }
    ctx->pc = 0x130A40u;
label_130a40:
    // 0x130a40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x130a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_130a44:
    // 0x130a44: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x130a44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_130a48:
    // 0x130a48: 0xc067fca  jal         func_19FF28
label_130a4c:
    if (ctx->pc == 0x130A4Cu) {
        ctx->pc = 0x130A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A48u;
        // 0x130a4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130A50u;
        goto label_130a50;
    }
    ctx->pc = 0x130A48u;
    SET_GPR_U32(ctx, 31, 0x130A50u);
    ctx->pc = 0x130A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130A48u;
    // 0x130a4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x130A48u, 0x130A50u)) {
        return;
    }
    ctx->pc = 0x130A50u;
label_130a50:
    // 0x130a50: 0x8fa60064  lw          $a2, 0x64($sp)
    ctx->pc = 0x130a50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_130a54:
    // 0x130a54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x130a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_130a58:
    // 0x130a58: 0xc067fca  jal         func_19FF28
label_130a5c:
    if (ctx->pc == 0x130A5Cu) {
        ctx->pc = 0x130A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A58u;
        // 0x130a5c: 0x8fa500b4  lw          $a1, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130A60u;
        goto label_130a60;
    }
    ctx->pc = 0x130A58u;
    SET_GPR_U32(ctx, 31, 0x130A60u);
    ctx->pc = 0x130A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130A58u;
    // 0x130a5c: 0x8fa500b4  lw          $a1, 0xB4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x130A58u, 0x130A60u)) {
        return;
    }
    ctx->pc = 0x130A60u;
label_130a60:
    // 0x130a60: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x130a60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_130a64:
    // 0x130a64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x130a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_130a68:
    // 0x130a68: 0xc067fca  jal         func_19FF28
label_130a6c:
    if (ctx->pc == 0x130A6Cu) {
        ctx->pc = 0x130A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A68u;
        // 0x130a6c: 0x8fa500b8  lw          $a1, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130A70u;
        goto label_130a70;
    }
    ctx->pc = 0x130A68u;
    SET_GPR_U32(ctx, 31, 0x130A70u);
    ctx->pc = 0x130A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130A68u;
    // 0x130a6c: 0x8fa500b8  lw          $a1, 0xB8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x130A68u, 0x130A70u)) {
        return;
    }
    ctx->pc = 0x130A70u;
label_130a70:
    // 0x130a70: 0x8fa60054  lw          $a2, 0x54($sp)
    ctx->pc = 0x130a70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_130a74:
    // 0x130a74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x130a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_130a78:
    // 0x130a78: 0xc067fca  jal         func_19FF28
label_130a7c:
    if (ctx->pc == 0x130A7Cu) {
        ctx->pc = 0x130A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A78u;
        // 0x130a7c: 0x8fa500bc  lw          $a1, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130A80u;
        goto label_130a80;
    }
    ctx->pc = 0x130A78u;
    SET_GPR_U32(ctx, 31, 0x130A80u);
    ctx->pc = 0x130A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130A78u;
    // 0x130a7c: 0x8fa500bc  lw          $a1, 0xBC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x130A78u, 0x130A80u)) {
        return;
    }
    ctx->pc = 0x130A80u;
label_130a80:
    // 0x130a80: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x130a80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_130a84:
    // 0x130a84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x130a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_130a88:
    // 0x130a88: 0xc067fca  jal         func_19FF28
label_130a8c:
    if (ctx->pc == 0x130A8Cu) {
        ctx->pc = 0x130A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A88u;
        // 0x130a8c: 0x8fa500c0  lw          $a1, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130A90u;
        goto label_130a90;
    }
    ctx->pc = 0x130A88u;
    SET_GPR_U32(ctx, 31, 0x130A90u);
    ctx->pc = 0x130A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130A88u;
    // 0x130a8c: 0x8fa500c0  lw          $a1, 0xC0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x130A88u, 0x130A90u)) {
        return;
    }
    ctx->pc = 0x130A90u;
label_130a90:
    // 0x130a90: 0x8e2614c0  lw          $a2, 0x14C0($s1)
    ctx->pc = 0x130a90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5312)));
label_130a94:
    // 0x130a94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x130a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_130a98:
    // 0x130a98: 0xc067ffc  jal         func_19FFF0
label_130a9c:
    if (ctx->pc == 0x130A9Cu) {
        ctx->pc = 0x130A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A98u;
        // 0x130a9c: 0x8fa500e0  lw          $a1, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130AA0u;
        goto label_130aa0;
    }
    ctx->pc = 0x130A98u;
    SET_GPR_U32(ctx, 31, 0x130AA0u);
    ctx->pc = 0x130A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130A98u;
    // 0x130a9c: 0x8fa500e0  lw          $a1, 0xE0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FFF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FFF0u, 0x130A98u, 0x130AA0u)) {
        return;
    }
    ctx->pc = 0x130AA0u;
label_130aa0:
    // 0x130aa0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_130aa4:
    // 0x130aa4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_130aa8:
    if (ctx->pc == 0x130AA8u) {
        ctx->pc = 0x130AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130AA4u;
        // 0x130aa8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130AACu;
        goto label_130aac;
    }
    ctx->pc = 0x130AA4u;
    {
        const bool branch_taken_0x130aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130AA4u;
        // 0x130aa8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130aa4) {
            ctx->pc = 0x130AB8u;
            goto label_130ab8;
        }
    }
    ctx->pc = 0x130AACu;
label_130aac:
    // 0x130aac: 0x8e221834  lw          $v0, 0x1834($s1)
    ctx->pc = 0x130aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6196)));
label_130ab0:
    // 0x130ab0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x130ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_130ab4:
    // 0x130ab4: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x130ab4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_130ab8:
    // 0x130ab8: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x130ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_130abc:
    // 0x130abc: 0xc067fca  jal         func_19FF28
label_130ac0:
    if (ctx->pc == 0x130AC0u) {
        ctx->pc = 0x130AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130ABCu;
        // 0x130ac0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130AC4u;
        goto label_130ac4;
    }
    ctx->pc = 0x130ABCu;
    SET_GPR_U32(ctx, 31, 0x130AC4u);
    ctx->pc = 0x130AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130ABCu;
    // 0x130ac0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x130ABCu, 0x130AC4u)) {
        return;
    }
    ctx->pc = 0x130AC4u;
label_130ac4:
    // 0x130ac4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_130ac8:
    // 0x130ac8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x130ac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_130acc:
    // 0x130acc: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x130accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_130ad0:
    // 0x130ad0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_130ad4:
    if (ctx->pc == 0x130AD4u) {
        ctx->pc = 0x130AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130AD0u;
        // 0x130ad4: 0xae231834  sw          $v1, 0x1834($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130AD8u;
        goto label_130ad8;
    }
    ctx->pc = 0x130AD0u;
    {
        const bool branch_taken_0x130ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130AD0u;
        // 0x130ad4: 0xae231834  sw          $v1, 0x1834($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ad0) {
            ctx->pc = 0x130AE0u;
            goto label_130ae0;
        }
    }
    ctx->pc = 0x130AD8u;
label_130ad8:
    // 0x130ad8: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x130ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_130adc:
    // 0x130adc: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x130adcu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_130ae0:
    // 0x130ae0: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x130ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_130ae4:
    // 0x130ae4: 0xc067fca  jal         func_19FF28
label_130ae8:
    if (ctx->pc == 0x130AE8u) {
        ctx->pc = 0x130AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130AE4u;
        // 0x130ae8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130AECu;
        goto label_130aec;
    }
    ctx->pc = 0x130AE4u;
    SET_GPR_U32(ctx, 31, 0x130AECu);
    ctx->pc = 0x130AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130AE4u;
    // 0x130ae8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x130AE4u, 0x130AECu)) {
        return;
    }
    ctx->pc = 0x130AECu;
label_130aec:
    // 0x130aec: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x130aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_130af0:
    // 0x130af0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x130af0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_130af4:
    // 0x130af4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x130af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_130af8:
    // 0x130af8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_130afc:
    if (ctx->pc == 0x130AFCu) {
        ctx->pc = 0x130AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130AF8u;
        // 0x130afc: 0xae231834  sw          $v1, 0x1834($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130B00u;
        goto label_130b00;
    }
    ctx->pc = 0x130AF8u;
    {
        const bool branch_taken_0x130af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130AF8u;
        // 0x130afc: 0xae231834  sw          $v1, 0x1834($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130af8) {
            ctx->pc = 0x130B0Cu;
            goto label_130b0c;
        }
    }
    ctx->pc = 0x130B00u;
label_130b00:
    // 0x130b00: 0x8e221840  lw          $v0, 0x1840($s1)
    ctx->pc = 0x130b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6208)));
label_130b04:
    // 0x130b04: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_130b08:
    if (ctx->pc == 0x130B08u) {
        ctx->pc = 0x130B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B04u;
        // 0x130b08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130B0Cu;
        goto label_130b0c;
    }
    ctx->pc = 0x130B04u;
    {
        const bool branch_taken_0x130b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130b04) {
            ctx->pc = 0x130B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130B04u;
            // 0x130b08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130B28u;
            goto label_130b28;
        }
    }
    ctx->pc = 0x130B0Cu;
label_130b0c:
    // 0x130b0c: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x130b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_130b10:
    // 0x130b10: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_130b14:
    if (ctx->pc == 0x130B14u) {
        ctx->pc = 0x130B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B10u;
        // 0x130b14: 0x8fa500cc  lw          $a1, 0xCC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130B18u;
        goto label_130b18;
    }
    ctx->pc = 0x130B10u;
    {
        const bool branch_taken_0x130b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B10u;
        // 0x130b14: 0x8fa500cc  lw          $a1, 0xCC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b10) {
            ctx->pc = 0x130B2Cu;
            goto label_130b2c;
        }
    }
    ctx->pc = 0x130B18u;
label_130b18:
    // 0x130b18: 0x8e22183c  lw          $v0, 0x183C($s1)
    ctx->pc = 0x130b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6204)));
label_130b1c:
    // 0x130b1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_130b20:
    if (ctx->pc == 0x130B20u) {
        ctx->pc = 0x130B24u;
        goto label_130b24;
    }
    ctx->pc = 0x130B1Cu;
    {
        const bool branch_taken_0x130b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130b1c) {
            ctx->pc = 0x130B2Cu;
            goto label_130b2c;
        }
    }
    ctx->pc = 0x130B24u;
label_130b24:
    // 0x130b24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x130b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_130b28:
    // 0x130b28: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x130b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_130b2c:
    // 0x130b2c: 0xc067fca  jal         func_19FF28
label_130b30:
    if (ctx->pc == 0x130B30u) {
        ctx->pc = 0x130B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B2Cu;
        // 0x130b30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130B34u;
        goto label_130b34;
    }
    ctx->pc = 0x130B2Cu;
    SET_GPR_U32(ctx, 31, 0x130B34u);
    ctx->pc = 0x130B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130B2Cu;
    // 0x130b30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x130B2Cu, 0x130B34u)) {
        return;
    }
    ctx->pc = 0x130B34u;
label_130b34:
    // 0x130b34: 0x8e221840  lw          $v0, 0x1840($s1)
    ctx->pc = 0x130b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6208)));
label_130b38:
    // 0x130b38: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_130b3c:
    if (ctx->pc == 0x130B3Cu) {
        ctx->pc = 0x130B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B38u;
        // 0x130b3c: 0x8e22183c  lw          $v0, 0x183C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130B40u;
        goto label_130b40;
    }
    ctx->pc = 0x130B38u;
    {
        const bool branch_taken_0x130b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130b38) {
            ctx->pc = 0x130B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130B38u;
            // 0x130b3c: 0x8e22183c  lw          $v0, 0x183C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130B50u;
            goto label_130b50;
        }
    }
    ctx->pc = 0x130B40u;
label_130b40:
    // 0x130b40: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x130b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_130b44:
    // 0x130b44: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x130b44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_130b48:
    // 0x130b48: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x130b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_130b4c:
    // 0x130b4c: 0x8e22183c  lw          $v0, 0x183C($s1)
    ctx->pc = 0x130b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6204)));
label_130b50:
    // 0x130b50: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_130b54:
    if (ctx->pc == 0x130B54u) {
        ctx->pc = 0x130B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B50u;
        // 0x130b54: 0x8fa30048  lw          $v1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130B58u;
        goto label_130b58;
    }
    ctx->pc = 0x130B50u;
    {
        const bool branch_taken_0x130b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B50u;
        // 0x130b54: 0x8fa30048  lw          $v1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b50) {
            ctx->pc = 0x130B74u;
            goto label_130b74;
        }
    }
    ctx->pc = 0x130B58u;
label_130b58:
    // 0x130b58: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x130b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_130b5c:
    // 0x130b5c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_130b60:
    if (ctx->pc == 0x130B60u) {
        ctx->pc = 0x130B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B5Cu;
        // 0x130b60: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130B64u;
        goto label_130b64;
    }
    ctx->pc = 0x130B5Cu;
    {
        const bool branch_taken_0x130b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B5Cu;
        // 0x130b60: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b5c) {
            ctx->pc = 0x130B7Cu;
            goto label_130b7c;
        }
    }
    ctx->pc = 0x130B64u;
label_130b64:
    // 0x130b64: 0x8e221860  lw          $v0, 0x1860($s1)
    ctx->pc = 0x130b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6240)));
label_130b68:
    // 0x130b68: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x130b68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_130b6c:
    // 0x130b6c: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x130b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_130b70:
    // 0x130b70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x130b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_130b74:
    // 0x130b74: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x130b74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_130b78:
    // 0x130b78: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x130b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_130b7c:
    // 0x130b7c: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x130b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_130b80:
    // 0x130b80: 0xae231840  sw          $v1, 0x1840($s1)
    ctx->pc = 0x130b80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6208), GPR_U32(ctx, 3));
label_130b84:
    // 0x130b84: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_130b88:
    if (ctx->pc == 0x130B88u) {
        ctx->pc = 0x130B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B84u;
        // 0x130b88: 0xae22183c  sw          $v0, 0x183C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130B8Cu;
        goto label_130b8c;
    }
    ctx->pc = 0x130B84u;
    {
        const bool branch_taken_0x130b84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x130B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B84u;
        // 0x130b88: 0xae22183c  sw          $v0, 0x183C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b84) {
            ctx->pc = 0x130B94u;
            goto label_130b94;
        }
    }
    ctx->pc = 0x130B8Cu;
label_130b8c:
    // 0x130b8c: 0x8e221844  lw          $v0, 0x1844($s1)
    ctx->pc = 0x130b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6212)));
label_130b90:
    // 0x130b90: 0x2c550001  sltiu       $s5, $v0, 0x1
    ctx->pc = 0x130b90u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_130b94:
    // 0x130b94: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_130b98:
    if (ctx->pc == 0x130B98u) {
        ctx->pc = 0x130B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B94u;
        // 0x130b98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130B9Cu;
        goto label_130b9c;
    }
    ctx->pc = 0x130B94u;
    {
        const bool branch_taken_0x130b94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x130B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B94u;
        // 0x130b98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b94) {
            ctx->pc = 0x130BA8u;
            goto label_130ba8;
        }
    }
    ctx->pc = 0x130B9Cu;
label_130b9c:
    // 0x130b9c: 0x8e221844  lw          $v0, 0x1844($s1)
    ctx->pc = 0x130b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6212)));
label_130ba0:
    // 0x130ba0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x130ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_130ba4:
    // 0x130ba4: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x130ba4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_130ba8:
    // 0x130ba8: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x130ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_130bac:
    // 0x130bac: 0xc067fca  jal         func_19FF28
label_130bb0:
    if (ctx->pc == 0x130BB0u) {
        ctx->pc = 0x130BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130BACu;
        // 0x130bb0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130BB4u;
        goto label_130bb4;
    }
    ctx->pc = 0x130BACu;
    SET_GPR_U32(ctx, 31, 0x130BB4u);
    ctx->pc = 0x130BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130BACu;
    // 0x130bb0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x130BACu, 0x130BB4u)) {
        return;
    }
    ctx->pc = 0x130BB4u;
label_130bb4:
    // 0x130bb4: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x130bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_130bb8:
    // 0x130bb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x130bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_130bbc:
    // 0x130bbc: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x130bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_130bc0:
    // 0x130bc0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_130bc4:
    if (ctx->pc == 0x130BC4u) {
        ctx->pc = 0x130BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130BC0u;
        // 0x130bc4: 0xae231844  sw          $v1, 0x1844($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130BC8u;
        goto label_130bc8;
    }
    ctx->pc = 0x130BC0u;
    {
        const bool branch_taken_0x130bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130BC0u;
        // 0x130bc4: 0xae231844  sw          $v1, 0x1844($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130bc0) {
            ctx->pc = 0x130BD4u;
            goto label_130bd4;
        }
    }
    ctx->pc = 0x130BC8u;
label_130bc8:
    // 0x130bc8: 0x8e221848  lw          $v0, 0x1848($s1)
    ctx->pc = 0x130bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6216)));
label_130bcc:
    // 0x130bcc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x130bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_130bd0:
    // 0x130bd0: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x130bd0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_130bd4:
    // 0x130bd4: 0x8fa500d4  lw          $a1, 0xD4($sp)
    ctx->pc = 0x130bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_130bd8:
    // 0x130bd8: 0xc067fca  jal         func_19FF28
label_130bdc:
    if (ctx->pc == 0x130BDCu) {
        ctx->pc = 0x130BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130BD8u;
        // 0x130bdc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130BE0u;
        goto label_130be0;
    }
    ctx->pc = 0x130BD8u;
    SET_GPR_U32(ctx, 31, 0x130BE0u);
    ctx->pc = 0x130BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130BD8u;
    // 0x130bdc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x130BD8u, 0x130BE0u)) {
        return;
    }
    ctx->pc = 0x130BE0u;
label_130be0:
    // 0x130be0: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x130be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_130be4:
    // 0x130be4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x130be4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_130be8:
    // 0x130be8: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x130be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_130bec:
    // 0x130bec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_130bf0:
    if (ctx->pc == 0x130BF0u) {
        ctx->pc = 0x130BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130BECu;
        // 0x130bf0: 0xae231848  sw          $v1, 0x1848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130BF4u;
        goto label_130bf4;
    }
    ctx->pc = 0x130BECu;
    {
        const bool branch_taken_0x130bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130BECu;
        // 0x130bf0: 0xae231848  sw          $v1, 0x1848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130bec) {
            ctx->pc = 0x130C00u;
            goto label_130c00;
        }
    }
    ctx->pc = 0x130BF4u;
label_130bf4:
    // 0x130bf4: 0x8e221850  lw          $v0, 0x1850($s1)
    ctx->pc = 0x130bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6224)));
label_130bf8:
    // 0x130bf8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x130bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_130bfc:
    // 0x130bfc: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x130bfcu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_130c00:
    // 0x130c00: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x130c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_130c04:
    // 0x130c04: 0xc067fca  jal         func_19FF28
label_130c08:
    if (ctx->pc == 0x130C08u) {
        ctx->pc = 0x130C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C04u;
        // 0x130c08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130C0Cu;
        goto label_130c0c;
    }
    ctx->pc = 0x130C04u;
    SET_GPR_U32(ctx, 31, 0x130C0Cu);
    ctx->pc = 0x130C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130C04u;
    // 0x130c08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x130C04u, 0x130C0Cu)) {
        return;
    }
    ctx->pc = 0x130C0Cu;
label_130c0c:
    // 0x130c0c: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x130c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_130c10:
    // 0x130c10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x130c10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_130c14:
    // 0x130c14: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x130c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_130c18:
    // 0x130c18: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_130c1c:
    if (ctx->pc == 0x130C1Cu) {
        ctx->pc = 0x130C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C18u;
        // 0x130c1c: 0xae231850  sw          $v1, 0x1850($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130C20u;
        goto label_130c20;
    }
    ctx->pc = 0x130C18u;
    {
        const bool branch_taken_0x130c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C18u;
        // 0x130c1c: 0xae231850  sw          $v1, 0x1850($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c18) {
            ctx->pc = 0x130C2Cu;
            goto label_130c2c;
        }
    }
    ctx->pc = 0x130C20u;
label_130c20:
    // 0x130c20: 0x8e221854  lw          $v0, 0x1854($s1)
    ctx->pc = 0x130c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6228)));
label_130c24:
    // 0x130c24: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x130c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_130c28:
    // 0x130c28: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x130c28u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_130c2c:
    // 0x130c2c: 0x8fa500dc  lw          $a1, 0xDC($sp)
    ctx->pc = 0x130c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_130c30:
    // 0x130c30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x130c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_130c34:
    // 0x130c34: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x130c34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_130c38:
    // 0x130c38: 0xc067fca  jal         func_19FF28
label_130c3c:
    if (ctx->pc == 0x130C3Cu) {
        ctx->pc = 0x130C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C38u;
        // 0x130c3c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130C40u;
        goto label_130c40;
    }
    ctx->pc = 0x130C38u;
    SET_GPR_U32(ctx, 31, 0x130C40u);
    ctx->pc = 0x130C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130C38u;
    // 0x130c3c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x130C38u, 0x130C40u)) {
        return;
    }
    ctx->pc = 0x130C40u;
label_130c40:
    // 0x130c40: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x130c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_130c44:
    // 0x130c44: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x130c44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_130c48:
    // 0x130c48: 0xae221854  sw          $v0, 0x1854($s1)
    ctx->pc = 0x130c48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6228), GPR_U32(ctx, 2));
label_130c4c:
    // 0x130c4c: 0x8ca48b2c  lw          $a0, -0x74D4($a1)
    ctx->pc = 0x130c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294937388)));
label_130c50:
    // 0x130c50: 0x8c85006c  lw          $a1, 0x6C($a0)
    ctx->pc = 0x130c50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_130c54:
    // 0x130c54: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_130c58:
    if (ctx->pc == 0x130C58u) {
        ctx->pc = 0x130C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C54u;
        // 0x130c58: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130C5Cu;
        goto label_130c5c;
    }
    ctx->pc = 0x130C54u;
    {
        const bool branch_taken_0x130c54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C54u;
        // 0x130c58: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c54) {
            ctx->pc = 0x130C78u;
            goto label_130c78;
        }
    }
    ctx->pc = 0x130C5Cu;
label_130c5c:
    // 0x130c5c: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x130c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_130c60:
    // 0x130c60: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_130c64:
    if (ctx->pc == 0x130C64u) {
        ctx->pc = 0x130C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C60u;
        // 0x130c64: 0x8fa50090  lw          $a1, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130C68u;
        goto label_130c68;
    }
    ctx->pc = 0x130C60u;
    {
        const bool branch_taken_0x130c60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x130c60) {
            ctx->pc = 0x130C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130C60u;
            // 0x130c64: 0x8fa50090  lw          $a1, 0x90($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130C7Cu;
            goto label_130c7c;
        }
    }
    ctx->pc = 0x130C68u;
label_130c68:
    // 0x130c68: 0x8ca20064  lw          $v0, 0x64($a1)
    ctx->pc = 0x130c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
label_130c6c:
    // 0x130c6c: 0xc064496  jal         func_191258
label_130c70:
    if (ctx->pc == 0x130C70u) {
        ctx->pc = 0x130C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C6Cu;
        // 0x130c70: 0x2802a  slt         $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x130C74u;
        goto label_130c74;
    }
    ctx->pc = 0x130C6Cu;
    SET_GPR_U32(ctx, 31, 0x130C74u);
    ctx->pc = 0x130C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130C6Cu;
    // 0x130c70: 0x2802a  slt         $s0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x191258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191258u, 0x130C6Cu, 0x130C74u)) {
        return;
    }
    ctx->pc = 0x130C74u;
label_130c74:
    // 0x130c74: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x130c74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_130c78:
    // 0x130c78: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x130c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_130c7c:
    // 0x130c7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x130c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_130c80:
    // 0x130c80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x130c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_130c84:
    // 0x130c84: 0xc067fca  jal         func_19FF28
label_130c88:
    if (ctx->pc == 0x130C88u) {
        ctx->pc = 0x130C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C84u;
        // 0x130c88: 0x27b20068  addiu       $s2, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130C8Cu;
        goto label_130c8c;
    }
    ctx->pc = 0x130C84u;
    SET_GPR_U32(ctx, 31, 0x130C8Cu);
    ctx->pc = 0x130C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130C84u;
    // 0x130c88: 0x27b20068  addiu       $s2, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x130C84u, 0x130C8Cu)) {
        return;
    }
    ctx->pc = 0x130C8Cu;
label_130c8c:
    // 0x130c8c: 0x2410000e  addiu       $s0, $zero, 0xE
    ctx->pc = 0x130c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_130c90:
    // 0x130c90: 0x8fa50094  lw          $a1, 0x94($sp)
    ctx->pc = 0x130c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_130c94:
    // 0x130c94: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x130c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_130c98:
    // 0x130c98: 0xc067fca  jal         func_19FF28
label_130c9c:
    if (ctx->pc == 0x130C9Cu) {
        ctx->pc = 0x130C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C98u;
        // 0x130c9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130CA0u;
        goto label_130ca0;
    }
    ctx->pc = 0x130C98u;
    SET_GPR_U32(ctx, 31, 0x130CA0u);
    ctx->pc = 0x130C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130C98u;
    // 0x130c9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x130C98u, 0x130CA0u)) {
        return;
    }
    ctx->pc = 0x130CA0u;
label_130ca0:
    // 0x130ca0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x130ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_130ca4:
    // 0x130ca4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_130ca8:
    if (ctx->pc == 0x130CA8u) {
        ctx->pc = 0x130CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CA4u;
        // 0x130ca8: 0x3c06006b  lui         $a2, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130CACu;
        goto label_130cac;
    }
    ctx->pc = 0x130CA4u;
    {
        const bool branch_taken_0x130ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CA4u;
        // 0x130ca8: 0x3c06006b  lui         $a2, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ca4) {
            ctx->pc = 0x130CB8u;
            goto label_130cb8;
        }
    }
    ctx->pc = 0x130CACu;
label_130cac:
    // 0x130cac: 0x2605fff2  addiu       $a1, $s0, -0xE
    ctx->pc = 0x130cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967282));
label_130cb0:
    // 0x130cb0: 0xc0421f2  jal         func_1087C8
label_130cb4:
    if (ctx->pc == 0x130CB4u) {
        ctx->pc = 0x130CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CB0u;
        // 0x130cb4: 0x24c44238  addiu       $a0, $a2, 0x4238 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130CB8u;
        goto label_130cb8;
    }
    ctx->pc = 0x130CB0u;
    SET_GPR_U32(ctx, 31, 0x130CB8u);
    ctx->pc = 0x130CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130CB0u;
    // 0x130cb4: 0x24c44238  addiu       $a0, $a2, 0x4238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1087C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1087C8u, 0x130CB0u, 0x130CB8u)) {
        return;
    }
    ctx->pc = 0x130CB8u;
label_130cb8:
    // 0x130cb8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x130cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_130cbc:
    // 0x130cbc: 0x2a020012  slti        $v0, $s0, 0x12
    ctx->pc = 0x130cbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)18) ? 1 : 0);
label_130cc0:
    // 0x130cc0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_130cc4:
    if (ctx->pc == 0x130CC4u) {
        ctx->pc = 0x130CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CC0u;
        // 0x130cc4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130CC8u;
        goto label_130cc8;
    }
    ctx->pc = 0x130CC0u;
    {
        const bool branch_taken_0x130cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CC0u;
        // 0x130cc4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130cc0) {
            ctx->pc = 0x130CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130ca0;
        }
    }
    ctx->pc = 0x130CC8u;
label_130cc8:
    // 0x130cc8: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_130ccc:
    if (ctx->pc == 0x130CCCu) {
        ctx->pc = 0x130CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CC8u;
        // 0x130ccc: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130CD0u;
        goto label_130cd0;
    }
    ctx->pc = 0x130CC8u;
    {
        const bool branch_taken_0x130cc8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x130CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CC8u;
        // 0x130ccc: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130cc8) {
            ctx->pc = 0x130CD8u;
            goto label_130cd8;
        }
    }
    ctx->pc = 0x130CD0u;
label_130cd0:
    // 0x130cd0: 0xc0421e6  jal         func_108798
label_130cd4:
    if (ctx->pc == 0x130CD4u) {
        ctx->pc = 0x130CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CD0u;
        // 0x130cd4: 0x24444238  addiu       $a0, $v0, 0x4238 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130CD8u;
        goto label_130cd8;
    }
    ctx->pc = 0x130CD0u;
    SET_GPR_U32(ctx, 31, 0x130CD8u);
    ctx->pc = 0x130CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130CD0u;
    // 0x130cd4: 0x24444238  addiu       $a0, $v0, 0x4238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x108798u, 0x130CD0u, 0x130CD8u)) {
        return;
    }
    ctx->pc = 0x130CD8u;
label_130cd8:
    // 0x130cd8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x130cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_130cdc:
    // 0x130cdc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x130cdcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_130ce0:
    // 0x130ce0: 0xc0421c8  jal         func_108720
label_130ce4:
    if (ctx->pc == 0x130CE4u) {
        ctx->pc = 0x130CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CE0u;
        // 0x130ce4: 0x24644238  addiu       $a0, $v1, 0x4238 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130CE8u;
        goto label_130ce8;
    }
    ctx->pc = 0x130CE0u;
    SET_GPR_U32(ctx, 31, 0x130CE8u);
    ctx->pc = 0x130CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130CE0u;
    // 0x130ce4: 0x24644238  addiu       $a0, $v1, 0x4238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108720u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x108720u, 0x130CE0u, 0x130CE8u)) {
        return;
    }
    ctx->pc = 0x130CE8u;
label_130ce8:
    // 0x130ce8: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x130ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_130cec:
    // 0x130cec: 0x8c828474  lw          $v0, -0x7B8C($a0)
    ctx->pc = 0x130cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294935668)));
label_130cf0:
    // 0x130cf0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_130cf4:
    if (ctx->pc == 0x130CF4u) {
        ctx->pc = 0x130CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CF0u;
        // 0x130cf4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130CF8u;
        goto label_130cf8;
    }
    ctx->pc = 0x130CF0u;
    {
        const bool branch_taken_0x130cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CF0u;
        // 0x130cf4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130cf0) {
            ctx->pc = 0x130D04u;
            goto label_130d04;
        }
    }
    ctx->pc = 0x130CF8u;
label_130cf8:
    // 0x130cf8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x130cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_130cfc:
    // 0x130cfc: 0x8c438478  lw          $v1, -0x7B88($v0)
    ctx->pc = 0x130cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935672)));
label_130d00:
    // 0x130d00: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x130d00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_130d04:
    // 0x130d04: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
label_130d08:
    if (ctx->pc == 0x130D08u) {
        ctx->pc = 0x130D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D04u;
        // 0x130d08: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130D0Cu;
        goto label_130d0c;
    }
    ctx->pc = 0x130D04u;
    {
        const bool branch_taken_0x130d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x130D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D04u;
        // 0x130d08: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d04) {
            ctx->pc = 0x130E0Cu;
            goto label_130e0c;
        }
    }
    ctx->pc = 0x130D0Cu;
label_130d0c:
    // 0x130d0c: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_130d10:
    if (ctx->pc == 0x130D10u) {
        ctx->pc = 0x130D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D0Cu;
        // 0x130d10: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130D14u;
        goto label_130d14;
    }
    ctx->pc = 0x130D0Cu;
    {
        const bool branch_taken_0x130d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D0Cu;
        // 0x130d10: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d0c) {
            ctx->pc = 0x130E10u;
            goto label_130e10;
        }
    }
    ctx->pc = 0x130D14u;
label_130d14:
    // 0x130d14: 0x8e221838  lw          $v0, 0x1838($s1)
    ctx->pc = 0x130d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6200)));
label_130d18:
    // 0x130d18: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
label_130d1c:
    if (ctx->pc == 0x130D1Cu) {
        ctx->pc = 0x130D20u;
        goto label_130d20;
    }
    ctx->pc = 0x130D18u;
    {
        const bool branch_taken_0x130d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130d18) {
            ctx->pc = 0x130E10u;
            goto label_130e10;
        }
    }
    ctx->pc = 0x130D20u;
label_130d20:
    // 0x130d20: 0x8e221864  lw          $v0, 0x1864($s1)
    ctx->pc = 0x130d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6244)));
label_130d24:
    // 0x130d24: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_130d28:
    if (ctx->pc == 0x130D28u) {
        ctx->pc = 0x130D2Cu;
        goto label_130d2c;
    }
    ctx->pc = 0x130D24u;
    {
        const bool branch_taken_0x130d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130d24) {
            ctx->pc = 0x130E10u;
            goto label_130e10;
        }
    }
    ctx->pc = 0x130D2Cu;
label_130d2c:
    // 0x130d2c: 0x8e221988  lw          $v0, 0x1988($s1)
    ctx->pc = 0x130d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6536)));
label_130d30:
    // 0x130d30: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_130d34:
    if (ctx->pc == 0x130D34u) {
        ctx->pc = 0x130D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D30u;
        // 0x130d34: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130D38u;
        goto label_130d38;
    }
    ctx->pc = 0x130D30u;
    {
        const bool branch_taken_0x130d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D30u;
        // 0x130d34: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d30) {
            ctx->pc = 0x130DA4u;
            goto label_130da4;
        }
    }
    ctx->pc = 0x130D38u;
label_130d38:
    // 0x130d38: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x130d38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_130d3c:
    // 0x130d3c: 0x8ca31a70  lw          $v1, 0x1A70($a1)
    ctx->pc = 0x130d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6768)));
label_130d40:
    // 0x130d40: 0x8c444700  lw          $a0, 0x4700($v0)
    ctx->pc = 0x130d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18176)));
label_130d44:
    // 0x130d44: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_130d48:
    if (ctx->pc == 0x130D48u) {
        ctx->pc = 0x130D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D44u;
        // 0x130d48: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130D4Cu;
        goto label_130d4c;
    }
    ctx->pc = 0x130D44u;
    {
        const bool branch_taken_0x130d44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x130D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D44u;
        // 0x130d48: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d44) {
            ctx->pc = 0x130D6Cu;
            goto label_130d6c;
        }
    }
    ctx->pc = 0x130D4Cu;
label_130d4c:
    // 0x130d4c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x130d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_130d50:
    // 0x130d50: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_130d54:
    if (ctx->pc == 0x130D54u) {
        ctx->pc = 0x130D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D50u;
        // 0x130d54: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130D58u;
        goto label_130d58;
    }
    ctx->pc = 0x130D50u;
    {
        const bool branch_taken_0x130d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D50u;
        // 0x130d54: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d50) {
            ctx->pc = 0x130D6Cu;
            goto label_130d6c;
        }
    }
    ctx->pc = 0x130D58u;
label_130d58:
    // 0x130d58: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x130d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_130d5c:
    // 0x130d5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x130d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_130d60:
    // 0x130d60: 0xc07fd18  jal         func_1FF460
label_130d64:
    if (ctx->pc == 0x130D64u) {
        ctx->pc = 0x130D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D60u;
        // 0x130d64: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130D68u;
        goto label_130d68;
    }
    ctx->pc = 0x130D60u;
    SET_GPR_U32(ctx, 31, 0x130D68u);
    ctx->pc = 0x130D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130D60u;
    // 0x130d64: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x130D60u, 0x130D68u)) {
        return;
    }
    ctx->pc = 0x130D68u;
label_130d68:
    // 0x130d68: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x130d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_130d6c:
    // 0x130d6c: 0x3c060070  lui         $a2, 0x70
    ctx->pc = 0x130d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)112 << 16));
label_130d70:
    // 0x130d70: 0x8cc31a70  lw          $v1, 0x1A70($a2)
    ctx->pc = 0x130d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 6768)));
label_130d74:
    // 0x130d74: 0x8c444480  lw          $a0, 0x4480($v0)
    ctx->pc = 0x130d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17536)));
label_130d78:
    // 0x130d78: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
label_130d7c:
    if (ctx->pc == 0x130D7Cu) {
        ctx->pc = 0x130D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D78u;
        // 0x130d7c: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130D80u;
        goto label_130d80;
    }
    ctx->pc = 0x130D78u;
    {
        const bool branch_taken_0x130d78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x130D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D78u;
        // 0x130d7c: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d78) {
            ctx->pc = 0x130E10u;
            goto label_130e10;
        }
    }
    ctx->pc = 0x130D80u;
label_130d80:
    // 0x130d80: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x130d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_130d84:
    // 0x130d84: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_130d88:
    if (ctx->pc == 0x130D88u) {
        ctx->pc = 0x130D8Cu;
        goto label_130d8c;
    }
    ctx->pc = 0x130D84u;
    {
        const bool branch_taken_0x130d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130d84) {
            ctx->pc = 0x130E10u;
            goto label_130e10;
        }
    }
    ctx->pc = 0x130D8Cu;
label_130d8c:
    // 0x130d8c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x130d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_130d90:
    // 0x130d90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x130d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_130d94:
    // 0x130d94: 0xc07fd18  jal         func_1FF460
label_130d98:
    if (ctx->pc == 0x130D98u) {
        ctx->pc = 0x130D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D94u;
        // 0x130d98: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130D9Cu;
        goto label_130d9c;
    }
    ctx->pc = 0x130D94u;
    SET_GPR_U32(ctx, 31, 0x130D9Cu);
    ctx->pc = 0x130D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130D94u;
    // 0x130d98: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x130D94u, 0x130D9Cu)) {
        return;
    }
    ctx->pc = 0x130D9Cu;
label_130d9c:
    // 0x130d9c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_130da0:
    if (ctx->pc == 0x130DA0u) {
        ctx->pc = 0x130DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D9Cu;
        // 0x130da0: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130DA4u;
        goto label_130da4;
    }
    ctx->pc = 0x130D9Cu;
    {
        const bool branch_taken_0x130d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D9Cu;
        // 0x130da0: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d9c) {
            ctx->pc = 0x130E10u;
            goto label_130e10;
        }
    }
    ctx->pc = 0x130DA4u;
label_130da4:
    // 0x130da4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x130da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_130da8:
    // 0x130da8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x130da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_130dac:
    // 0x130dac: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x130dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
label_130db0:
    // 0x130db0: 0x8c4446f8  lw          $a0, 0x46F8($v0)
    ctx->pc = 0x130db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18168)));
label_130db4:
    // 0x130db4: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_130db8:
    if (ctx->pc == 0x130DB8u) {
        ctx->pc = 0x130DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130DB4u;
        // 0x130db8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130DBCu;
        goto label_130dbc;
    }
    ctx->pc = 0x130DB4u;
    {
        const bool branch_taken_0x130db4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x130DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130DB4u;
        // 0x130db8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130db4) {
            ctx->pc = 0x130DDCu;
            goto label_130ddc;
        }
    }
    ctx->pc = 0x130DBCu;
label_130dbc:
    // 0x130dbc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x130dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_130dc0:
    // 0x130dc0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_130dc4:
    if (ctx->pc == 0x130DC4u) {
        ctx->pc = 0x130DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130DC0u;
        // 0x130dc4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130DC8u;
        goto label_130dc8;
    }
    ctx->pc = 0x130DC0u;
    {
        const bool branch_taken_0x130dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130DC0u;
        // 0x130dc4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130dc0) {
            ctx->pc = 0x130DDCu;
            goto label_130ddc;
        }
    }
    ctx->pc = 0x130DC8u;
label_130dc8:
    // 0x130dc8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x130dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_130dcc:
    // 0x130dcc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x130dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_130dd0:
    // 0x130dd0: 0xc07fd18  jal         func_1FF460
label_130dd4:
    if (ctx->pc == 0x130DD4u) {
        ctx->pc = 0x130DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130DD0u;
        // 0x130dd4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130DD8u;
        goto label_130dd8;
    }
    ctx->pc = 0x130DD0u;
    SET_GPR_U32(ctx, 31, 0x130DD8u);
    ctx->pc = 0x130DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130DD0u;
    // 0x130dd4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x130DD0u, 0x130DD8u)) {
        return;
    }
    ctx->pc = 0x130DD8u;
label_130dd8:
    // 0x130dd8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x130dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_130ddc:
    // 0x130ddc: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x130ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_130de0:
    // 0x130de0: 0x8ca31a70  lw          $v1, 0x1A70($a1)
    ctx->pc = 0x130de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6768)));
label_130de4:
    // 0x130de4: 0x8c444478  lw          $a0, 0x4478($v0)
    ctx->pc = 0x130de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17528)));
label_130de8:
    // 0x130de8: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_130dec:
    if (ctx->pc == 0x130DECu) {
        ctx->pc = 0x130DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130DE8u;
        // 0x130dec: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130DF0u;
        goto label_130df0;
    }
    ctx->pc = 0x130DE8u;
    {
        const bool branch_taken_0x130de8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x130DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130DE8u;
        // 0x130dec: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130de8) {
            ctx->pc = 0x130E10u;
            goto label_130e10;
        }
    }
    ctx->pc = 0x130DF0u;
label_130df0:
    // 0x130df0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x130df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_130df4:
    // 0x130df4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_130df8:
    if (ctx->pc == 0x130DF8u) {
        ctx->pc = 0x130DFCu;
        goto label_130dfc;
    }
    ctx->pc = 0x130DF4u;
    {
        const bool branch_taken_0x130df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130df4) {
            ctx->pc = 0x130E10u;
            goto label_130e10;
        }
    }
    ctx->pc = 0x130DFCu;
label_130dfc:
    // 0x130dfc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x130dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_130e00:
    // 0x130e00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x130e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_130e04:
    // 0x130e04: 0xc07fd18  jal         func_1FF460
label_130e08:
    if (ctx->pc == 0x130E08u) {
        ctx->pc = 0x130E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E04u;
        // 0x130e08: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130E0Cu;
        goto label_130e0c;
    }
    ctx->pc = 0x130E04u;
    SET_GPR_U32(ctx, 31, 0x130E0Cu);
    ctx->pc = 0x130E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130E04u;
    // 0x130e08: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x130E04u, 0x130E0Cu)) {
        return;
    }
    ctx->pc = 0x130E0Cu;
label_130e0c:
    // 0x130e0c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x130e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_130e10:
    // 0x130e10: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
label_130e14:
    if (ctx->pc == 0x130E14u) {
        ctx->pc = 0x130E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E10u;
        // 0x130e14: 0xae231838  sw          $v1, 0x1838($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130E18u;
        goto label_130e18;
    }
    ctx->pc = 0x130E10u;
    {
        const bool branch_taken_0x130e10 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x130E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E10u;
        // 0x130e14: 0xae231838  sw          $v1, 0x1838($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e10) {
            ctx->pc = 0x130E2Cu;
            goto label_130e2c;
        }
    }
    ctx->pc = 0x130E18u;
label_130e18:
    // 0x130e18: 0x8e221864  lw          $v0, 0x1864($s1)
    ctx->pc = 0x130e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6244)));
label_130e1c:
    // 0x130e1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_130e20:
    if (ctx->pc == 0x130E20u) {
        ctx->pc = 0x130E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E1Cu;
        // 0x130e20: 0x8fa5009c  lw          $a1, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130E24u;
        goto label_130e24;
    }
    ctx->pc = 0x130E1Cu;
    {
        const bool branch_taken_0x130e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E1Cu;
        // 0x130e20: 0x8fa5009c  lw          $a1, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e1c) {
            ctx->pc = 0x130E30u;
            goto label_130e30;
        }
    }
    ctx->pc = 0x130E24u;
label_130e24:
    // 0x130e24: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_130e28:
    if (ctx->pc == 0x130E28u) {
        ctx->pc = 0x130E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E24u;
        // 0x130e28: 0xae201864  sw          $zero, 0x1864($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130E2Cu;
        goto label_130e2c;
    }
    ctx->pc = 0x130E24u;
    {
        const bool branch_taken_0x130e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x130e24) {
            ctx->pc = 0x130E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130E24u;
            // 0x130e28: 0xae201864  sw          $zero, 0x1864($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 6244), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130E2Cu;
            goto label_130e2c;
        }
    }
    ctx->pc = 0x130E2Cu;
label_130e2c:
    // 0x130e2c: 0x8fa5009c  lw          $a1, 0x9C($sp)
    ctx->pc = 0x130e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_130e30:
    // 0x130e30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_130e34:
    // 0x130e34: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x130e34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_130e38:
    // 0x130e38: 0xc04bc08  jal         func_12F020
label_130e3c:
    if (ctx->pc == 0x130E3Cu) {
        ctx->pc = 0x130E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E38u;
        // 0x130e3c: 0x8fa700a4  lw          $a3, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130E40u;
        goto label_130e40;
    }
    ctx->pc = 0x130E38u;
    SET_GPR_U32(ctx, 31, 0x130E40u);
    ctx->pc = 0x130E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130E38u;
    // 0x130e3c: 0x8fa700a4  lw          $a3, 0xA4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F020u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x12F020u, 0x130E38u, 0x130E40u)) {
        return;
    }
    ctx->pc = 0x130E40u;
label_130e40:
    // 0x130e40: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x130e40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_130e44:
    // 0x130e44: 0xc04be16  jal         func_12F858
label_130e48:
    if (ctx->pc == 0x130E48u) {
        ctx->pc = 0x130E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E44u;
        // 0x130e48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130E4Cu;
        goto label_130e4c;
    }
    ctx->pc = 0x130E44u;
    SET_GPR_U32(ctx, 31, 0x130E4Cu);
    ctx->pc = 0x130E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130E44u;
    // 0x130e48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x12F858u, 0x130E44u, 0x130E4Cu)) {
        return;
    }
    ctx->pc = 0x130E4Cu;
label_130e4c:
    // 0x130e4c: 0xc04d3f2  jal         func_134FC8
label_130e50:
    if (ctx->pc == 0x130E50u) {
        ctx->pc = 0x130E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E4Cu;
        // 0x130e50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130E54u;
        goto label_130e54;
    }
    ctx->pc = 0x130E4Cu;
    SET_GPR_U32(ctx, 31, 0x130E54u);
    ctx->pc = 0x130E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130E4Cu;
    // 0x130e50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x134FC8u, 0x130E4Cu, 0x130E54u)) {
        return;
    }
    ctx->pc = 0x130E54u;
label_130e54:
    // 0x130e54: 0xc04de06  jal         func_137818
label_130e58:
    if (ctx->pc == 0x130E58u) {
        ctx->pc = 0x130E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E54u;
        // 0x130e58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130E5Cu;
        goto label_130e5c;
    }
    ctx->pc = 0x130E54u;
    SET_GPR_U32(ctx, 31, 0x130E5Cu);
    ctx->pc = 0x130E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130E54u;
    // 0x130e58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137818u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x137818u, 0x130E54u, 0x130E5Cu)) {
        return;
    }
    ctx->pc = 0x130E5Cu;
label_130e5c:
    // 0x130e5c: 0x8e2218d0  lw          $v0, 0x18D0($s1)
    ctx->pc = 0x130e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6352)));
label_130e60:
    // 0x130e60: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_130e64:
    if (ctx->pc == 0x130E64u) {
        ctx->pc = 0x130E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E60u;
        // 0x130e64: 0xae2018d0  sw          $zero, 0x18D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130E68u;
        goto label_130e68;
    }
    ctx->pc = 0x130E60u;
    {
        const bool branch_taken_0x130e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130e60) {
            ctx->pc = 0x130E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130E60u;
            // 0x130e64: 0xae2018d0  sw          $zero, 0x18D0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 6352), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130E74u;
            goto label_130e74;
        }
    }
    ctx->pc = 0x130E68u;
label_130e68:
    // 0x130e68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_130e6c:
    // 0x130e6c: 0xc04f0f4  jal         func_13C3D0
label_130e70:
    if (ctx->pc == 0x130E70u) {
        ctx->pc = 0x130E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E6Cu;
        // 0x130e70: 0x26251890  addiu       $a1, $s1, 0x1890 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 6288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130E74u;
        goto label_130e74;
    }
    ctx->pc = 0x130E6Cu;
    SET_GPR_U32(ctx, 31, 0x130E74u);
    ctx->pc = 0x130E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130E6Cu;
    // 0x130e70: 0x26251890  addiu       $a1, $s1, 0x1890 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 6288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3D0u, 0x130E6Cu, 0x130E74u)) {
        return;
    }
    ctx->pc = 0x130E74u;
label_130e74:
    // 0x130e74: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
label_130e78:
    if (ctx->pc == 0x130E78u) {
        ctx->pc = 0x130E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E74u;
        // 0x130e78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130E7Cu;
        goto label_130e7c;
    }
    ctx->pc = 0x130E74u;
    {
        const bool branch_taken_0x130e74 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x130E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E74u;
        // 0x130e78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e74) {
            ctx->pc = 0x130E8Cu;
            goto label_130e8c;
        }
    }
    ctx->pc = 0x130E7Cu;
label_130e7c:
    // 0x130e7c: 0xc04bc50  jal         func_12F140
label_130e80:
    if (ctx->pc == 0x130E80u) {
        ctx->pc = 0x130E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E7Cu;
        // 0x130e80: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x130E84u;
        goto label_130e84;
    }
    ctx->pc = 0x130E7Cu;
    SET_GPR_U32(ctx, 31, 0x130E84u);
    ctx->pc = 0x130E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130E7Cu;
    // 0x130e80: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x12F140u, 0x130E7Cu, 0x130E84u)) {
        return;
    }
    ctx->pc = 0x130E84u;
label_130e84:
    // 0x130e84: 0x10000029  b           . + 4 + (0x29 << 2)
label_130e88:
    if (ctx->pc == 0x130E88u) {
        ctx->pc = 0x130E8Cu;
        goto label_130e8c;
    }
    ctx->pc = 0x130E84u;
    {
        const bool branch_taken_0x130e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130e84) {
            ctx->pc = 0x130F2Cu;
            goto label_130f2c;
        }
    }
    ctx->pc = 0x130E8Cu;
label_130e8c:
    // 0x130e8c: 0x8e221a34  lw          $v0, 0x1A34($s1)
    ctx->pc = 0x130e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6708)));
label_130e90:
    // 0x130e90: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_130e94:
    if (ctx->pc == 0x130E94u) {
        ctx->pc = 0x130E98u;
        goto label_130e98;
    }
    ctx->pc = 0x130E90u;
    {
        const bool branch_taken_0x130e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130e90) {
            ctx->pc = 0x130EA4u;
            goto label_130ea4;
        }
    }
    ctx->pc = 0x130E98u;
label_130e98:
    // 0x130e98: 0x8e221b80  lw          $v0, 0x1B80($s1)
    ctx->pc = 0x130e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7040)));
label_130e9c:
    // 0x130e9c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_130ea0:
    if (ctx->pc == 0x130EA0u) {
        ctx->pc = 0x130EA4u;
        goto label_130ea4;
    }
    ctx->pc = 0x130E9Cu;
    {
        const bool branch_taken_0x130e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130e9c) {
            ctx->pc = 0x130F14u;
            goto label_130f14;
        }
    }
    ctx->pc = 0x130EA4u;
label_130ea4:
    // 0x130ea4: 0x6a261a47  ldl         $a2, 0x1A47($s1)
    ctx->pc = 0x130ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6727); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_130ea8:
    // 0x130ea8: 0x6e261a40  ldr         $a2, 0x1A40($s1)
    ctx->pc = 0x130ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6720); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_130eac:
    // 0x130eac: 0x8e221a48  lw          $v0, 0x1A48($s1)
    ctx->pc = 0x130eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6728)));
label_130eb0:
    // 0x130eb0: 0xb2261887  sdl         $a2, 0x1887($s1)
    ctx->pc = 0x130eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_130eb4:
    // 0x130eb4: 0xb6261880  sdr         $a2, 0x1880($s1)
    ctx->pc = 0x130eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_130eb8:
    // 0x130eb8: 0xae221888  sw          $v0, 0x1888($s1)
    ctx->pc = 0x130eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6280), GPR_U32(ctx, 2));
label_130ebc:
    // 0x130ebc: 0x6a251a47  ldl         $a1, 0x1A47($s1)
    ctx->pc = 0x130ebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6727); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_130ec0:
    // 0x130ec0: 0x6e251a40  ldr         $a1, 0x1A40($s1)
    ctx->pc = 0x130ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6720); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_130ec4:
    // 0x130ec4: 0x8e261a48  lw          $a2, 0x1A48($s1)
    ctx->pc = 0x130ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6728)));
label_130ec8:
    // 0x130ec8: 0xb2250cf7  sdl         $a1, 0xCF7($s1)
    ctx->pc = 0x130ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3319); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_130ecc:
    // 0x130ecc: 0xb6250cf0  sdr         $a1, 0xCF0($s1)
    ctx->pc = 0x130eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3312); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_130ed0:
    // 0x130ed0: 0xae260cf8  sw          $a2, 0xCF8($s1)
    ctx->pc = 0x130ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3320), GPR_U32(ctx, 6));
label_130ed4:
    // 0x130ed4: 0x6a241a47  ldl         $a0, 0x1A47($s1)
    ctx->pc = 0x130ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6727); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_130ed8:
    // 0x130ed8: 0x6e241a40  ldr         $a0, 0x1A40($s1)
    ctx->pc = 0x130ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6720); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_130edc:
    // 0x130edc: 0x8e251a48  lw          $a1, 0x1A48($s1)
    ctx->pc = 0x130edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6728)));
label_130ee0:
    // 0x130ee0: 0xb2240ce7  sdl         $a0, 0xCE7($s1)
    ctx->pc = 0x130ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_130ee4:
    // 0x130ee4: 0xb6240ce0  sdr         $a0, 0xCE0($s1)
    ctx->pc = 0x130ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_130ee8:
    // 0x130ee8: 0xae250ce8  sw          $a1, 0xCE8($s1)
    ctx->pc = 0x130ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3304), GPR_U32(ctx, 5));
label_130eec:
    // 0x130eec: 0x6a231a47  ldl         $v1, 0x1A47($s1)
    ctx->pc = 0x130eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6727); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_130ef0:
    // 0x130ef0: 0x6e231a40  ldr         $v1, 0x1A40($s1)
    ctx->pc = 0x130ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6720); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_130ef4:
    // 0x130ef4: 0x8e241a48  lw          $a0, 0x1A48($s1)
    ctx->pc = 0x130ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6728)));
label_130ef8:
    // 0x130ef8: 0xb2230d07  sdl         $v1, 0xD07($s1)
    ctx->pc = 0x130ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_130efc:
    // 0x130efc: 0xb6230d00  sdr         $v1, 0xD00($s1)
    ctx->pc = 0x130efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_130f00:
    // 0x130f00: 0xae240d08  sw          $a0, 0xD08($s1)
    ctx->pc = 0x130f00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3336), GPR_U32(ctx, 4));
label_130f04:
    // 0x130f04: 0xae2018b0  sw          $zero, 0x18B0($s1)
    ctx->pc = 0x130f04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6320), GPR_U32(ctx, 0));
label_130f08:
    // 0x130f08: 0xae2018b4  sw          $zero, 0x18B4($s1)
    ctx->pc = 0x130f08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6324), GPR_U32(ctx, 0));
label_130f0c:
    // 0x130f0c: 0x10000007  b           . + 4 + (0x7 << 2)
label_130f10:
    if (ctx->pc == 0x130F10u) {
        ctx->pc = 0x130F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F0Cu;
        // 0x130f10: 0xae2018b8  sw          $zero, 0x18B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6328), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130F14u;
        goto label_130f14;
    }
    ctx->pc = 0x130F0Cu;
    {
        const bool branch_taken_0x130f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F0Cu;
        // 0x130f10: 0xae2018b8  sw          $zero, 0x18B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6328), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f0c) {
            ctx->pc = 0x130F2Cu;
            goto label_130f2c;
        }
    }
    ctx->pc = 0x130F14u;
label_130f14:
    // 0x130f14: 0x6a221897  ldl         $v0, 0x1897($s1)
    ctx->pc = 0x130f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_130f18:
    // 0x130f18: 0x6e221890  ldr         $v0, 0x1890($s1)
    ctx->pc = 0x130f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_130f1c:
    // 0x130f1c: 0x8e231898  lw          $v1, 0x1898($s1)
    ctx->pc = 0x130f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6296)));
label_130f20:
    // 0x130f20: 0xb2221887  sdl         $v0, 0x1887($s1)
    ctx->pc = 0x130f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_130f24:
    // 0x130f24: 0xb6221880  sdr         $v0, 0x1880($s1)
    ctx->pc = 0x130f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_130f28:
    // 0x130f28: 0xae231888  sw          $v1, 0x1888($s1)
    ctx->pc = 0x130f28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6280), GPR_U32(ctx, 3));
label_130f2c:
    // 0x130f2c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x130f2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_130f30:
    // 0x130f30: 0x16c00004  bnez        $s6, . + 4 + (0x4 << 2)
label_130f34:
    if (ctx->pc == 0x130F34u) {
        ctx->pc = 0x130F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F30u;
        // 0x130f34: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x130F38u;
        goto label_130f38;
    }
    ctx->pc = 0x130F30u;
    {
        const bool branch_taken_0x130f30 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x130F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F30u;
        // 0x130f34: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f30) {
            ctx->pc = 0x130F44u;
            goto label_130f44;
        }
    }
    ctx->pc = 0x130F38u;
label_130f38:
    // 0x130f38: 0xe62218b0  swc1        $f2, 0x18B0($s1)
    ctx->pc = 0x130f38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6320), bits); }
label_130f3c:
    // 0x130f3c: 0xe62218b4  swc1        $f2, 0x18B4($s1)
    ctx->pc = 0x130f3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6324), bits); }
label_130f40:
    // 0x130f40: 0xe62218b8  swc1        $f2, 0x18B8($s1)
    ctx->pc = 0x130f40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6328), bits); }
label_130f44:
    // 0x130f44: 0x8e230e64  lw          $v1, 0xE64($s1)
    ctx->pc = 0x130f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3684)));
label_130f48:
    // 0x130f48: 0x50600017  beql        $v1, $zero, . + 4 + (0x17 << 2)
label_130f4c:
    if (ctx->pc == 0x130F4Cu) {
        ctx->pc = 0x130F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F48u;
        // 0x130f4c: 0x8e220c8c  lw          $v0, 0xC8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130F50u;
        goto label_130f50;
    }
    ctx->pc = 0x130F48u;
    {
        const bool branch_taken_0x130f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x130f48) {
            ctx->pc = 0x130F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130F48u;
            // 0x130f4c: 0x8e220c8c  lw          $v0, 0xC8C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130FA8u;
            goto label_130fa8;
        }
    }
    ctx->pc = 0x130F50u;
label_130f50:
    // 0x130f50: 0x8e82083c  lw          $v0, 0x83C($s4)
    ctx->pc = 0x130f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2108)));
label_130f54:
    // 0x130f54: 0x214c3  sra         $v0, $v0, 19
    ctx->pc = 0x130f54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 19));
label_130f58:
    // 0x130f58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x130f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_130f5c:
    // 0x130f5c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_130f60:
    if (ctx->pc == 0x130F60u) {
        ctx->pc = 0x130F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F5Cu;
        // 0x130f60: 0x8e220c8c  lw          $v0, 0xC8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130F64u;
        goto label_130f64;
    }
    ctx->pc = 0x130F5Cu;
    {
        const bool branch_taken_0x130f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130f5c) {
            ctx->pc = 0x130F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130F5Cu;
            // 0x130f60: 0x8e220c8c  lw          $v0, 0xC8C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130FA8u;
            goto label_130fa8;
        }
    }
    ctx->pc = 0x130F64u;
label_130f64:
    // 0x130f64: 0x8e2218d8  lw          $v0, 0x18D8($s1)
    ctx->pc = 0x130f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6360)));
label_130f68:
    // 0x130f68: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_130f6c:
    if (ctx->pc == 0x130F6Cu) {
        ctx->pc = 0x130F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F68u;
        // 0x130f6c: 0x8e220c8c  lw          $v0, 0xC8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130F70u;
        goto label_130f70;
    }
    ctx->pc = 0x130F68u;
    {
        const bool branch_taken_0x130f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130f68) {
            ctx->pc = 0x130F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130F68u;
            // 0x130f6c: 0x8e220c8c  lw          $v0, 0xC8C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130FA8u;
            goto label_130fa8;
        }
    }
    ctx->pc = 0x130F70u;
label_130f70:
    // 0x130f70: 0x6a261897  ldl         $a2, 0x1897($s1)
    ctx->pc = 0x130f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_130f74:
    // 0x130f74: 0x6e261890  ldr         $a2, 0x1890($s1)
    ctx->pc = 0x130f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_130f78:
    // 0x130f78: 0x8e221898  lw          $v0, 0x1898($s1)
    ctx->pc = 0x130f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6296)));
label_130f7c:
    // 0x130f7c: 0xb2261887  sdl         $a2, 0x1887($s1)
    ctx->pc = 0x130f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_130f80:
    // 0x130f80: 0xb6261880  sdr         $a2, 0x1880($s1)
    ctx->pc = 0x130f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_130f84:
    // 0x130f84: 0xae221888  sw          $v0, 0x1888($s1)
    ctx->pc = 0x130f84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6280), GPR_U32(ctx, 2));
label_130f88:
    // 0x130f88: 0x100000e0  b           . + 4 + (0xE0 << 2)
label_130f8c:
    if (ctx->pc == 0x130F8Cu) {
        ctx->pc = 0x130F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F88u;
        // 0x130f8c: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x130F90u;
        goto label_130f90;
    }
    ctx->pc = 0x130F88u;
    {
        const bool branch_taken_0x130f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F88u;
        // 0x130f8c: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f88) {
            ctx->pc = 0x13130Cu;
            goto label_13130c;
        }
    }
    ctx->pc = 0x130F90u;
label_130f90:
    // 0x130f90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x130f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_130f94:
    // 0x130f94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x130f94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_130f98:
    // 0x130f98: 0x0  nop
    ctx->pc = 0x130f98u;
    // NOP
label_130f9c:
    // 0x130f9c: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x130f9cu;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_130fa0:
    // 0x130fa0: 0x1000006f  b           . + 4 + (0x6F << 2)
label_130fa4:
    if (ctx->pc == 0x130FA4u) {
        ctx->pc = 0x130FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130FA0u;
        // 0x130fa4: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x130FA8u;
        goto label_130fa8;
    }
    ctx->pc = 0x130FA0u;
    {
        const bool branch_taken_0x130fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130FA0u;
        // 0x130fa4: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x130fa0) {
            ctx->pc = 0x131160u;
            goto label_131160;
        }
    }
    ctx->pc = 0x130FA8u;
label_130fa8:
    // 0x130fa8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_130fac:
    if (ctx->pc == 0x130FACu) {
        ctx->pc = 0x130FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130FA8u;
        // 0x130fac: 0x8fa500ac  lw          $a1, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130FB0u;
        goto label_130fb0;
    }
    ctx->pc = 0x130FA8u;
    {
        const bool branch_taken_0x130fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130FA8u;
        // 0x130fac: 0x8fa500ac  lw          $a1, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130fa8) {
            ctx->pc = 0x130FB8u;
            goto label_130fb8;
        }
    }
    ctx->pc = 0x130FB0u;
label_130fb0:
    // 0x130fb0: 0x506000cf  beql        $v1, $zero, . + 4 + (0xCF << 2)
label_130fb4:
    if (ctx->pc == 0x130FB4u) {
        ctx->pc = 0x130FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130FB0u;
        // 0x130fb4: 0xc62118b0  lwc1        $f1, 0x18B0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x130FB8u;
        goto label_130fb8;
    }
    ctx->pc = 0x130FB0u;
    {
        const bool branch_taken_0x130fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x130fb0) {
            ctx->pc = 0x130FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130FB0u;
            // 0x130fb4: 0xc62118b0  lwc1        $f1, 0x18B0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1312F0u;
            goto label_1312f0;
        }
    }
    ctx->pc = 0x130FB8u;
label_130fb8:
    // 0x130fb8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x130fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_130fbc:
    // 0x130fbc: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x130fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_130fc0:
    // 0x130fc0: 0xc067fc4  jal         func_19FF10
label_130fc4:
    if (ctx->pc == 0x130FC4u) {
        ctx->pc = 0x130FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130FC0u;
        // 0x130fc4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130FC8u;
        goto label_130fc8;
    }
    ctx->pc = 0x130FC0u;
    SET_GPR_U32(ctx, 31, 0x130FC8u);
    ctx->pc = 0x130FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130FC0u;
    // 0x130fc4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF10u, 0x130FC0u, 0x130FC8u)) {
        return;
    }
    ctx->pc = 0x130FC8u;
label_130fc8:
    // 0x130fc8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x130fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_130fcc:
    // 0x130fcc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x130fccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_130fd0:
    // 0x130fd0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x130fd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_130fd4:
    // 0x130fd4: 0x0  nop
    ctx->pc = 0x130fd4u;
    // NOP
label_130fd8:
    // 0x130fd8: 0xe62318d4  swc1        $f3, 0x18D4($s1)
    ctx->pc = 0x130fd8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6356), bits); }
label_130fdc:
    // 0x130fdc: 0x6a251887  ldl         $a1, 0x1887($s1)
    ctx->pc = 0x130fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_130fe0:
    // 0x130fe0: 0x6e251880  ldr         $a1, 0x1880($s1)
    ctx->pc = 0x130fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_130fe4:
    // 0x130fe4: 0x8e261888  lw          $a2, 0x1888($s1)
    ctx->pc = 0x130fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6280)));
label_130fe8:
    // 0x130fe8: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x130fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_130fec:
    // 0x130fec: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x130fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_130ff0:
    // 0x130ff0: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x130ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
label_130ff4:
    // 0x130ff4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x130ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_130ff8:
    // 0x130ff8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x130ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_130ffc:
    // 0x130ffc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x130ffcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_131000:
    // 0x131000: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x131000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_131004:
    // 0x131004: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x131004u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_131008:
    // 0x131008: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x131008u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_13100c:
    // 0x13100c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x13100cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_131010:
    // 0x131010: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x131010u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_131014:
    // 0x131014: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x131014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_131018:
    // 0x131018: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x131018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_13101c:
    // 0x13101c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x13101cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_131020:
    // 0x131020: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x131020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_131024:
    // 0x131024: 0x26221890  addiu       $v0, $s1, 0x1890
    ctx->pc = 0x131024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 6288));
label_131028:
    // 0x131028: 0xc6261890  lwc1        $f6, 0x1890($s1)
    ctx->pc = 0x131028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_13102c:
    // 0x13102c: 0x46023042  mul.s       $f1, $f6, $f2
    ctx->pc = 0x13102cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_131030:
    // 0x131030: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x131030u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_131034:
    // 0x131034: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x131034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_131038:
    // 0x131038: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x131038u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_13103c:
    // 0x13103c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x13103cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_131040:
    // 0x131040: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x131040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_131044:
    // 0x131044: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x131044u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_131048:
    // 0x131048: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x131048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_13104c:
    // 0x13104c: 0x6ba40027  ldl         $a0, 0x27($sp)
    ctx->pc = 0x13104cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_131050:
    // 0x131050: 0x6fa40020  ldr         $a0, 0x20($sp)
    ctx->pc = 0x131050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_131054:
    // 0x131054: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x131054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_131058:
    // 0x131058: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x131058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13105c:
    // 0x13105c: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x13105cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_131060:
    // 0x131060: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x131060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
label_131064:
    // 0x131064: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x131064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_131068:
    // 0x131068: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x131068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_13106c:
    // 0x13106c: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x13106cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_131070:
    // 0x131070: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x131070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_131074:
    // 0x131074: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x131074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_131078:
    // 0x131078: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x131078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13107c:
    // 0x13107c: 0x460019c0  add.s       $f7, $f3, $f0
    ctx->pc = 0x13107cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_131080:
    // 0x131080: 0x46022200  add.s       $f8, $f4, $f2
    ctx->pc = 0x131080u;
    ctx->f[8] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_131084:
    // 0x131084: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x131084u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_131088:
    // 0x131088: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x131088u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_13108c:
    // 0x13108c: 0xe7a80004  swc1        $f8, 0x4($sp)
    ctx->pc = 0x13108cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_131090:
    // 0x131090: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x131090u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_131094:
    // 0x131094: 0x26231880  addiu       $v1, $s1, 0x1880
    ctx->pc = 0x131094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 6272));
label_131098:
    // 0x131098: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x131098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13109c:
    // 0x13109c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13109cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1310a0:
    // 0x1310a0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1310a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1310a4:
    // 0x1310a4: 0x27a50084  addiu       $a1, $sp, 0x84
    ctx->pc = 0x1310a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_1310a8:
    // 0x1310a8: 0xc6221880  lwc1        $f2, 0x1880($s1)
    ctx->pc = 0x1310a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1310ac:
    // 0x1310ac: 0x26241b28  addiu       $a0, $s1, 0x1B28
    ctx->pc = 0x1310acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 6952));
label_1310b0:
    // 0x1310b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1310b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1310b4:
    // 0x1310b4: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x1310b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1310b8:
    // 0x1310b8: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x1310b8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_1310bc:
    // 0x1310bc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1310bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1310c0:
    // 0x1310c0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1310c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_1310c4:
    // 0x1310c4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1310c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1310c8:
    // 0x1310c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1310c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1310cc:
    // 0x1310cc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1310ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1310d0:
    // 0x1310d0: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x1310d0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
label_1310d4:
    // 0x1310d4: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x1310d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1310d8:
    // 0x1310d8: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x1310d8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_1310dc:
    // 0x1310dc: 0x46023034  c.lt.s      $f6, $f2
    ctx->pc = 0x1310dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1310e0:
    // 0x1310e0: 0x0  nop
    ctx->pc = 0x1310e0u;
    // NOP
label_1310e4:
    // 0x1310e4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1310e8:
    if (ctx->pc == 0x1310E8u) {
        ctx->pc = 0x1310E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1310E4u;
        // 0x1310e8: 0xe6261b28  swc1        $f6, 0x1B28($s1) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6952), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1310ECu;
        goto label_1310ec;
    }
    ctx->pc = 0x1310E4u;
    {
        const bool branch_taken_0x1310e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1310E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1310E4u;
        // 0x1310e8: 0xe6261b28  swc1        $f6, 0x1B28($s1) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6952), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1310e4) {
            ctx->pc = 0x1310F0u;
            goto label_1310f0;
        }
    }
    ctx->pc = 0x1310ECu;
label_1310ec:
    // 0x1310ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1310ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1310f0:
    // 0x1310f0: 0x46073802  mul.s       $f0, $f7, $f7
    ctx->pc = 0x1310f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
label_1310f4:
    // 0x1310f4: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x1310f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
label_1310f8:
    // 0x1310f8: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x1310f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
label_1310fc:
    // 0x1310fc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1310fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_131100:
    // 0x131100: 0x460840c2  mul.s       $f3, $f8, $f8
    ctx->pc = 0x131100u;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
label_131104:
    // 0x131104: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x131104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_131108:
    // 0x131108: 0x46052882  mul.s       $f2, $f5, $f5
    ctx->pc = 0x131108u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_13110c:
    // 0x13110c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x13110cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_131110:
    // 0x131110: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x131110u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_131114:
    // 0x131114: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x131114u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_131118:
    // 0x131118: 0x0  nop
    ctx->pc = 0x131118u;
    // NOP
label_13111c:
    // 0x13111c: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_131120:
    if (ctx->pc == 0x131120u) {
        ctx->pc = 0x131120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13111Cu;
        // 0x131120: 0xe6211b28  swc1        $f1, 0x1B28($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6952), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x131124u;
        goto label_131124;
    }
    ctx->pc = 0x13111Cu;
    {
        const bool branch_taken_0x13111c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x131120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13111Cu;
        // 0x131120: 0xe6211b28  swc1        $f1, 0x1B28($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6952), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13111c) {
            ctx->pc = 0x131184u;
            goto label_131184;
        }
    }
    ctx->pc = 0x131124u;
label_131124:
    // 0x131124: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x131124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_131128:
    // 0x131128: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x131128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13112c:
    // 0x13112c: 0xc04642c  jal         func_1190B0
label_131130:
    if (ctx->pc == 0x131130u) {
        ctx->pc = 0x131130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13112Cu;
        // 0x131130: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131134u;
        goto label_131134;
    }
    ctx->pc = 0x13112Cu;
    SET_GPR_U32(ctx, 31, 0x131134u);
    ctx->pc = 0x131130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13112Cu;
    // 0x131130: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x13112Cu, 0x131134u)) {
        return;
    }
    ctx->pc = 0x131134u;
label_131134:
    // 0x131134: 0x0  nop
    ctx->pc = 0x131134u;
    // NOP
label_131138:
    // 0x131138: 0x0  nop
    ctx->pc = 0x131138u;
    // NOP
label_13113c:
    // 0x13113c: 0x46000044  c1          0x44
    ctx->pc = 0x13113cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_131140:
    // 0x131140: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x131140u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_131144:
    // 0x131144: 0x0  nop
    ctx->pc = 0x131144u;
    // NOP
label_131148:
    // 0x131148: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x131148u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13114c:
    // 0x13114c: 0x0  nop
    ctx->pc = 0x13114cu;
    // NOP
label_131150:
    // 0x131150: 0x4501ff8f  bc1t        . + 4 + (-0x71 << 2)
label_131154:
    if (ctx->pc == 0x131154u) {
        ctx->pc = 0x131154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131150u;
        // 0x131154: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x131158u;
        goto label_131158;
    }
    ctx->pc = 0x131150u;
    {
        const bool branch_taken_0x131150 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x131154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131150u;
        // 0x131154: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x131150) {
            ctx->pc = 0x130F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130f90;
        }
    }
    ctx->pc = 0x131158u;
label_131158:
    // 0x131158: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x131158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13115c:
    // 0x13115c: 0x0  nop
    ctx->pc = 0x13115cu;
    // NOP
label_131160:
    // 0x131160: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x131160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_131164:
    // 0x131164: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x131164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_131168:
    // 0x131168: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x131168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_13116c:
    // 0x13116c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x13116cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_131170:
    // 0x131170: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x131170u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_131174:
    // 0x131174: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x131174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_131178:
    // 0x131178: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x131178u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_13117c:
    // 0x13117c: 0x10000007  b           . + 4 + (0x7 << 2)
label_131180:
    if (ctx->pc == 0x131180u) {
        ctx->pc = 0x131180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13117Cu;
        // 0x131180: 0xe6020008  swc1        $f2, 0x8($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x131184u;
        goto label_131184;
    }
    ctx->pc = 0x13117Cu;
    {
        const bool branch_taken_0x13117c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13117Cu;
        // 0x131180: 0xe6020008  swc1        $f2, 0x8($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13117c) {
            ctx->pc = 0x13119Cu;
            goto label_13119c;
        }
    }
    ctx->pc = 0x131184u;
label_131184:
    // 0x131184: 0x6a241887  ldl         $a0, 0x1887($s1)
    ctx->pc = 0x131184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_131188:
    // 0x131188: 0x6e241880  ldr         $a0, 0x1880($s1)
    ctx->pc = 0x131188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_13118c:
    // 0x13118c: 0x8e251888  lw          $a1, 0x1888($s1)
    ctx->pc = 0x13118cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6280)));
label_131190:
    // 0x131190: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x131190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_131194:
    // 0x131194: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x131194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_131198:
    // 0x131198: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x131198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
label_13119c:
    // 0x13119c: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x13119cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1311a0:
    // 0x1311a0: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x1311a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1311a4:
    // 0x1311a4: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1311a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1311a8:
    // 0x1311a8: 0xb2231897  sdl         $v1, 0x1897($s1)
    ctx->pc = 0x1311a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1311ac:
    // 0x1311ac: 0xb6231890  sdr         $v1, 0x1890($s1)
    ctx->pc = 0x1311acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1311b0:
    // 0x1311b0: 0xae241898  sw          $a0, 0x1898($s1)
    ctx->pc = 0x1311b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6296), GPR_U32(ctx, 4));
label_1311b4:
    // 0x1311b4: 0x12c0003c  beqz        $s6, . + 4 + (0x3C << 2)
label_1311b8:
    if (ctx->pc == 0x1311B8u) {
        ctx->pc = 0x1311B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1311B4u;
        // 0x1311b8: 0x262218b0  addiu       $v0, $s1, 0x18B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 6320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1311BCu;
        goto label_1311bc;
    }
    ctx->pc = 0x1311B4u;
    {
        const bool branch_taken_0x1311b4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1311B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1311B4u;
        // 0x1311b8: 0x262218b0  addiu       $v0, $s1, 0x18B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 6320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1311b4) {
            ctx->pc = 0x1312A8u;
            goto label_1312a8;
        }
    }
    ctx->pc = 0x1311BCu;
label_1311bc:
    // 0x1311bc: 0xc6231940  lwc1        $f3, 0x1940($s1)
    ctx->pc = 0x1311bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1311c0:
    // 0x1311c0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1311c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1311c4:
    // 0x1311c4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1311c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1311c8:
    // 0x1311c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1311c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1311cc:
    // 0x1311cc: 0x0  nop
    ctx->pc = 0x1311ccu;
    // NOP
label_1311d0:
    // 0x1311d0: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1311d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1311d4:
    // 0x1311d4: 0x0  nop
    ctx->pc = 0x1311d4u;
    // NOP
label_1311d8:
    // 0x1311d8: 0x45020034  bc1fl       . + 4 + (0x34 << 2)
label_1311dc:
    if (ctx->pc == 0x1311DCu) {
        ctx->pc = 0x1311DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1311D8u;
        // 0x1311dc: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1311E0u;
        goto label_1311e0;
    }
    ctx->pc = 0x1311D8u;
    {
        const bool branch_taken_0x1311d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1311d8) {
            ctx->pc = 0x1311DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1311D8u;
            // 0x1311dc: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1312ACu;
            goto label_1312ac;
        }
    }
    ctx->pc = 0x1311E0u;
label_1311e0:
    // 0x1311e0: 0x8e2218d8  lw          $v0, 0x18D8($s1)
    ctx->pc = 0x1311e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6360)));
label_1311e4:
    // 0x1311e4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1311e8:
    if (ctx->pc == 0x1311E8u) {
        ctx->pc = 0x1311E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1311E4u;
        // 0x1311e8: 0x262218a0  addiu       $v0, $s1, 0x18A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 6304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1311ECu;
        goto label_1311ec;
    }
    ctx->pc = 0x1311E4u;
    {
        const bool branch_taken_0x1311e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1311E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1311E4u;
        // 0x1311e8: 0x262218a0  addiu       $v0, $s1, 0x18A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 6304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1311e4) {
            ctx->pc = 0x131248u;
            goto label_131248;
        }
    }
    ctx->pc = 0x1311ECu;
label_1311ec:
    // 0x1311ec: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1311ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1311f0:
    // 0x1311f0: 0xc6211890  lwc1        $f1, 0x1890($s1)
    ctx->pc = 0x1311f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1311f4:
    // 0x1311f4: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x1311f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1311f8:
    // 0x1311f8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1311f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1311fc:
    // 0x1311fc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1311fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_131200:
    // 0x131200: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x131200u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_131204:
    // 0x131204: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x131204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_131208:
    // 0x131208: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x131208u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_13120c:
    // 0x13120c: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x13120cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_131210:
    // 0x131210: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x131210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_131214:
    // 0x131214: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x131214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_131218:
    // 0x131218: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x131218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_13121c:
    // 0x13121c: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x13121cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_131220:
    // 0x131220: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x131220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_131224:
    // 0x131224: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x131224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_131228:
    // 0x131228: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x131228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_13122c:
    // 0x13122c: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x13122cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_131230:
    // 0x131230: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x131230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_131234:
    // 0x131234: 0xb22618b7  sdl         $a2, 0x18B7($s1)
    ctx->pc = 0x131234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_131238:
    // 0x131238: 0xb62618b0  sdr         $a2, 0x18B0($s1)
    ctx->pc = 0x131238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13123c:
    // 0x13123c: 0xae2218b8  sw          $v0, 0x18B8($s1)
    ctx->pc = 0x13123cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6328), GPR_U32(ctx, 2));
label_131240:
    // 0x131240: 0x10000023  b           . + 4 + (0x23 << 2)
label_131244:
    if (ctx->pc == 0x131244u) {
        ctx->pc = 0x131244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131240u;
        // 0x131244: 0xc62118b0  lwc1        $f1, 0x18B0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x131248u;
        goto label_131248;
    }
    ctx->pc = 0x131240u;
    {
        const bool branch_taken_0x131240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131240u;
        // 0x131244: 0xc62118b0  lwc1        $f1, 0x18B0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131240) {
            ctx->pc = 0x1312D0u;
            goto label_1312d0;
        }
    }
    ctx->pc = 0x131248u;
label_131248:
    // 0x131248: 0xc62018a0  lwc1        $f0, 0x18A0($s1)
    ctx->pc = 0x131248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13124c:
    // 0x13124c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x13124cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_131250:
    // 0x131250: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x131250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_131254:
    // 0x131254: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x131254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_131258:
    // 0x131258: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x131258u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_13125c:
    // 0x13125c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x13125cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_131260:
    // 0x131260: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x131260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_131264:
    // 0x131264: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x131264u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_131268:
    // 0x131268: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x131268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_13126c:
    // 0x13126c: 0x6ba50027  ldl         $a1, 0x27($sp)
    ctx->pc = 0x13126cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_131270:
    // 0x131270: 0x6fa50020  ldr         $a1, 0x20($sp)
    ctx->pc = 0x131270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_131274:
    // 0x131274: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x131274u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_131278:
    // 0x131278: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x131278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13127c:
    // 0x13127c: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x13127cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_131280:
    // 0x131280: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x131280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
label_131284:
    // 0x131284: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x131284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_131288:
    // 0x131288: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x131288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_13128c:
    // 0x13128c: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x13128cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_131290:
    // 0x131290: 0xb22418b7  sdl         $a0, 0x18B7($s1)
    ctx->pc = 0x131290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_131294:
    // 0x131294: 0xb62418b0  sdr         $a0, 0x18B0($s1)
    ctx->pc = 0x131294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_131298:
    // 0x131298: 0xae2518b8  sw          $a1, 0x18B8($s1)
    ctx->pc = 0x131298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6328), GPR_U32(ctx, 5));
label_13129c:
    // 0x13129c: 0x1000000c  b           . + 4 + (0xC << 2)
label_1312a0:
    if (ctx->pc == 0x1312A0u) {
        ctx->pc = 0x1312A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13129Cu;
        // 0x1312a0: 0xc62118b0  lwc1        $f1, 0x18B0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1312A4u;
        goto label_1312a4;
    }
    ctx->pc = 0x13129Cu;
    {
        const bool branch_taken_0x13129c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1312A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13129Cu;
        // 0x1312a0: 0xc62118b0  lwc1        $f1, 0x18B0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13129c) {
            ctx->pc = 0x1312D0u;
            goto label_1312d0;
        }
    }
    ctx->pc = 0x1312A4u;
label_1312a4:
    // 0x1312a4: 0x0  nop
    ctx->pc = 0x1312a4u;
    // NOP
label_1312a8:
    // 0x1312a8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1312a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1312ac:
    // 0x1312ac: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1312acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_1312b0:
    // 0x1312b0: 0xae2018b0  sw          $zero, 0x18B0($s1)
    ctx->pc = 0x1312b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6320), GPR_U32(ctx, 0));
label_1312b4:
    // 0x1312b4: 0x6a231897  ldl         $v1, 0x1897($s1)
    ctx->pc = 0x1312b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1312b8:
    // 0x1312b8: 0x6e231890  ldr         $v1, 0x1890($s1)
    ctx->pc = 0x1312b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1312bc:
    // 0x1312bc: 0x8e241898  lw          $a0, 0x1898($s1)
    ctx->pc = 0x1312bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6296)));
label_1312c0:
    // 0x1312c0: 0xb2231887  sdl         $v1, 0x1887($s1)
    ctx->pc = 0x1312c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1312c4:
    // 0x1312c4: 0xb6231880  sdr         $v1, 0x1880($s1)
    ctx->pc = 0x1312c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1312c8:
    // 0x1312c8: 0xae241888  sw          $a0, 0x1888($s1)
    ctx->pc = 0x1312c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6280), GPR_U32(ctx, 4));
label_1312cc:
    // 0x1312cc: 0xc62118b0  lwc1        $f1, 0x18B0($s1)
    ctx->pc = 0x1312ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1312d0:
    // 0x1312d0: 0x1000000d  b           . + 4 + (0xD << 2)
label_1312d4:
    if (ctx->pc == 0x1312D4u) {
        ctx->pc = 0x1312D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1312D0u;
        // 0x1312d4: 0xc62218b8  lwc1        $f2, 0x18B8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1312D8u;
        goto label_1312d8;
    }
    ctx->pc = 0x1312D0u;
    {
        const bool branch_taken_0x1312d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1312D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1312D0u;
        // 0x1312d4: 0xc62218b8  lwc1        $f2, 0x18B8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1312d0) {
            ctx->pc = 0x131308u;
            goto label_131308;
        }
    }
    ctx->pc = 0x1312D8u;
label_1312d8:
    // 0x1312d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1312d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1312dc:
    // 0x1312dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1312dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1312e0:
    // 0x1312e0: 0x0  nop
    ctx->pc = 0x1312e0u;
    // NOP
label_1312e4:
    // 0x1312e4: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x1312e4u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_1312e8:
    // 0x1312e8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1312ec:
    if (ctx->pc == 0x1312ECu) {
        ctx->pc = 0x1312ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1312E8u;
        // 0x1312ec: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1312F0u;
        goto label_1312f0;
    }
    ctx->pc = 0x1312E8u;
    {
        const bool branch_taken_0x1312e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1312ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1312E8u;
        // 0x1312ec: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1312e8) {
            ctx->pc = 0x131360u;
            goto label_131360;
        }
    }
    ctx->pc = 0x1312F0u;
label_1312f0:
    // 0x1312f0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1312f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1312f4:
    // 0x1312f4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1312f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1312f8:
    // 0x1312f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1312f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1312fc:
    // 0x1312fc: 0xc62218b8  lwc1        $f2, 0x18B8($s1)
    ctx->pc = 0x1312fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_131300:
    // 0x131300: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x131300u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_131304:
    // 0x131304: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x131304u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_131308:
    // 0x131308: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x131308u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_13130c:
    // 0x13130c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13130cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_131310:
    // 0x131310: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x131310u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_131314:
    // 0x131314: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x131314u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_131318:
    // 0x131318: 0xc093aa8  jal         func_24EAA0
label_13131c:
    if (ctx->pc == 0x13131Cu) {
        ctx->pc = 0x13131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131318u;
        // 0x13131c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131320u;
        goto label_131320;
    }
    ctx->pc = 0x131318u;
    SET_GPR_U32(ctx, 31, 0x131320u);
    ctx->pc = 0x13131Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131318u;
    // 0x13131c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x131318u, 0x131320u)) {
        return;
    }
    ctx->pc = 0x131320u;
label_131320:
    // 0x131320: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x131320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_131324:
    // 0x131324: 0x0  nop
    ctx->pc = 0x131324u;
    // NOP
label_131328:
    // 0x131328: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_13132c:
    if (ctx->pc == 0x13132Cu) {
        ctx->pc = 0x13132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131328u;
        // 0x13132c: 0xe620187c  swc1        $f0, 0x187C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6268), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x131330u;
        goto label_131330;
    }
    ctx->pc = 0x131328u;
    {
        const bool branch_taken_0x131328 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131328u;
        // 0x13132c: 0xe620187c  swc1        $f0, 0x187C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6268), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131328) {
            ctx->pc = 0x131380u;
            goto label_131380;
        }
    }
    ctx->pc = 0x131330u;
label_131330:
    // 0x131330: 0x263018b0  addiu       $s0, $s1, 0x18B0
    ctx->pc = 0x131330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 6320));
label_131334:
    // 0x131334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x131334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_131338:
    // 0x131338: 0xc04642c  jal         func_1190B0
label_13133c:
    if (ctx->pc == 0x13133Cu) {
        ctx->pc = 0x13133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131338u;
        // 0x13133c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131340u;
        goto label_131340;
    }
    ctx->pc = 0x131338u;
    SET_GPR_U32(ctx, 31, 0x131340u);
    ctx->pc = 0x13133Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131338u;
    // 0x13133c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x131338u, 0x131340u)) {
        return;
    }
    ctx->pc = 0x131340u;
label_131340:
    // 0x131340: 0x0  nop
    ctx->pc = 0x131340u;
    // NOP
label_131344:
    // 0x131344: 0x0  nop
    ctx->pc = 0x131344u;
    // NOP
label_131348:
    // 0x131348: 0x46000044  c1          0x44
    ctx->pc = 0x131348u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_13134c:
    // 0x13134c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x13134cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_131350:
    // 0x131350: 0x0  nop
    ctx->pc = 0x131350u;
    // NOP
label_131354:
    // 0x131354: 0x4501ffe0  bc1t        . + 4 + (-0x20 << 2)
label_131358:
    if (ctx->pc == 0x131358u) {
        ctx->pc = 0x131358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131354u;
        // 0x131358: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13135Cu;
        goto label_13135c;
    }
    ctx->pc = 0x131354u;
    {
        const bool branch_taken_0x131354 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x131358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131354u;
        // 0x131358: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x131354) {
            ctx->pc = 0x1312D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1312d8;
        }
    }
    ctx->pc = 0x13135Cu;
label_13135c:
    // 0x13135c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x13135cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_131360:
    // 0x131360: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x131360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_131364:
    // 0x131364: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x131364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_131368:
    // 0x131368: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x131368u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_13136c:
    // 0x13136c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x13136cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_131370:
    // 0x131370: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x131370u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_131374:
    // 0x131374: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x131374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_131378:
    // 0x131378: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x131378u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_13137c:
    // 0x13137c: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x13137cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_131380:
    // 0x131380: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x131380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_131384:
    // 0x131384: 0xc04f0c2  jal         func_13C308
label_131388:
    if (ctx->pc == 0x131388u) {
        ctx->pc = 0x131388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131384u;
        // 0x131388: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13138Cu;
        goto label_13138c;
    }
    ctx->pc = 0x131384u;
    SET_GPR_U32(ctx, 31, 0x13138Cu);
    ctx->pc = 0x131388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131384u;
    // 0x131388: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x131384u, 0x13138Cu)) {
        return;
    }
    ctx->pc = 0x13138Cu;
label_13138c:
    // 0x13138c: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x13138cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_131390:
    // 0x131390: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x131390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_131394:
    // 0x131394: 0x84440208  lh          $a0, 0x208($v0)
    ctx->pc = 0x131394u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 520)));
label_131398:
    // 0x131398: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x131398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_13139c:
    // 0x13139c: 0x60f809  jalr        $v1
label_1313a0:
    if (ctx->pc == 0x1313A0u) {
        ctx->pc = 0x1313A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13139Cu;
        // 0x1313a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1313A4u;
        goto label_1313a4;
    }
    ctx->pc = 0x13139Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1313A4u);
        ctx->pc = 0x1313A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13139Cu;
        // 0x1313a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13139Cu, 0x1313A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1313A4u;
label_1313a4:
    // 0x1313a4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1313a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1313a8:
    // 0x1313a8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1313a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1313ac:
    // 0x1313ac: 0x8c448ac0  lw          $a0, -0x7540($v0)
    ctx->pc = 0x1313acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937280)));
label_1313b0:
    // 0x1313b0: 0xc06217e  jal         func_1885F8
label_1313b4:
    if (ctx->pc == 0x1313B4u) {
        ctx->pc = 0x1313B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1313B0u;
        // 0x1313b4: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1313B8u;
        goto label_1313b8;
    }
    ctx->pc = 0x1313B0u;
    SET_GPR_U32(ctx, 31, 0x1313B8u);
    ctx->pc = 0x1313B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1313B0u;
    // 0x1313b4: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1885F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1885F8u, 0x1313B0u, 0x1313B8u)) {
        return;
    }
    ctx->pc = 0x1313B8u;
label_1313b8:
    // 0x1313b8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1313b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1313bc:
    // 0x1313bc: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_1313c0:
    if (ctx->pc == 0x1313C0u) {
        ctx->pc = 0x1313C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1313BCu;
        // 0x1313c0: 0x8e82083c  lw          $v0, 0x83C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1313C4u;
        goto label_1313c4;
    }
    ctx->pc = 0x1313BCu;
    {
        const bool branch_taken_0x1313bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1313bc) {
            ctx->pc = 0x1313C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1313BCu;
            // 0x1313c0: 0x8e82083c  lw          $v0, 0x83C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1313D4u;
            goto label_1313d4;
        }
    }
    ctx->pc = 0x1313C4u;
label_1313c4:
    // 0x1313c4: 0x8fa4008c  lw          $a0, 0x8C($sp)
    ctx->pc = 0x1313c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_1313c8:
    // 0x1313c8: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_1313cc:
    if (ctx->pc == 0x1313CCu) {
        ctx->pc = 0x1313D0u;
        goto label_1313d0;
    }
    ctx->pc = 0x1313C8u;
    {
        const bool branch_taken_0x1313c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1313c8) {
            ctx->pc = 0x1313FCu;
            goto label_1313fc;
        }
    }
    ctx->pc = 0x1313D0u;
label_1313d0:
    // 0x1313d0: 0x8e82083c  lw          $v0, 0x83C($s4)
    ctx->pc = 0x1313d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2108)));
label_1313d4:
    // 0x1313d4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1313d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1313d8:
    // 0x1313d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1313d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1313dc:
    // 0x1313dc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1313e0:
    if (ctx->pc == 0x1313E0u) {
        ctx->pc = 0x1313E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1313DCu;
        // 0x1313e0: 0x8fa5008c  lw          $a1, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1313E4u;
        goto label_1313e4;
    }
    ctx->pc = 0x1313DCu;
    {
        const bool branch_taken_0x1313dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1313E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1313DCu;
        // 0x1313e0: 0x8fa5008c  lw          $a1, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1313dc) {
            ctx->pc = 0x1313FCu;
            goto label_1313fc;
        }
    }
    ctx->pc = 0x1313E4u;
label_1313e4:
    // 0x1313e4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1313e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1313e8:
    // 0x1313e8: 0xae251a50  sw          $a1, 0x1A50($s1)
    ctx->pc = 0x1313e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6736), GPR_U32(ctx, 5));
label_1313ec:
    // 0x1313ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1313ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1313f0:
    // 0x1313f0: 0x8fa6008c  lw          $a2, 0x8C($sp)
    ctx->pc = 0x1313f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_1313f4:
    // 0x1313f4: 0xc06230c  jal         func_188C30
label_1313f8:
    if (ctx->pc == 0x1313F8u) {
        ctx->pc = 0x1313F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1313F4u;
        // 0x1313f8: 0x8c448ac0  lw          $a0, -0x7540($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1313FCu;
        goto label_1313fc;
    }
    ctx->pc = 0x1313F4u;
    SET_GPR_U32(ctx, 31, 0x1313FCu);
    ctx->pc = 0x1313F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1313F4u;
    // 0x1313f8: 0x8c448ac0  lw          $a0, -0x7540($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188C30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188C30u, 0x1313F4u, 0x1313FCu)) {
        return;
    }
    ctx->pc = 0x1313FCu;
label_1313fc:
    // 0x1313fc: 0xc04c936  jal         func_1324D8
label_131400:
    if (ctx->pc == 0x131400u) {
        ctx->pc = 0x131400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1313FCu;
        // 0x131400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131404u;
        goto label_131404;
    }
    ctx->pc = 0x1313FCu;
    SET_GPR_U32(ctx, 31, 0x131404u);
    ctx->pc = 0x131400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1313FCu;
    // 0x131400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1324D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1324D8u, 0x1313FCu, 0x131404u)) {
        return;
    }
    ctx->pc = 0x131404u;
label_131404:
    // 0x131404: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x131404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_131408:
    // 0x131408: 0xc052e8a  jal         func_14BA28
label_13140c:
    if (ctx->pc == 0x13140Cu) {
        ctx->pc = 0x13140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131408u;
        // 0x13140c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x131410u;
        goto label_131410;
    }
    ctx->pc = 0x131408u;
    SET_GPR_U32(ctx, 31, 0x131410u);
    ctx->pc = 0x13140Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131408u;
    // 0x13140c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BA28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14BA28u, 0x131408u, 0x131410u)) {
        return;
    }
    ctx->pc = 0x131410u;
label_131410:
    // 0x131410: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x131410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_131414:
    // 0x131414: 0xc04da2a  jal         func_1368A8
label_131418:
    if (ctx->pc == 0x131418u) {
        ctx->pc = 0x131418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131414u;
        // 0x131418: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13141Cu;
        goto label_13141c;
    }
    ctx->pc = 0x131414u;
    SET_GPR_U32(ctx, 31, 0x13141Cu);
    ctx->pc = 0x131418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131414u;
    // 0x131418: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1368A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1368A8u, 0x131414u, 0x13141Cu)) {
        return;
    }
    ctx->pc = 0x13141Cu;
label_13141c:
    // 0x13141c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13141cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_131420:
    // 0x131420: 0xc04d7a8  jal         func_135EA0
label_131424:
    if (ctx->pc == 0x131424u) {
        ctx->pc = 0x131424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131420u;
        // 0x131424: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x131428u;
        goto label_131428;
    }
    ctx->pc = 0x131420u;
    SET_GPR_U32(ctx, 31, 0x131428u);
    ctx->pc = 0x131424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131420u;
    // 0x131424: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x135EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x135EA0u, 0x131420u, 0x131428u)) {
        return;
    }
    ctx->pc = 0x131428u;
label_131428:
    // 0x131428: 0xc6211acc  lwc1        $f1, 0x1ACC($s1)
    ctx->pc = 0x131428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13142c:
    // 0x13142c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13142cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_131430:
    // 0x131430: 0x0  nop
    ctx->pc = 0x131430u;
    // NOP
label_131434:
    // 0x131434: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x131434u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_131438:
    // 0x131438: 0x0  nop
    ctx->pc = 0x131438u;
    // NOP
label_13143c:
    // 0x13143c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_131440:
    if (ctx->pc == 0x131440u) {
        ctx->pc = 0x131440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13143Cu;
        // 0x131440: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131444u;
        goto label_131444;
    }
    ctx->pc = 0x13143Cu;
    {
        const bool branch_taken_0x13143c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x131440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13143Cu;
        // 0x131440: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13143c) {
            ctx->pc = 0x131448u;
            goto label_131448;
        }
    }
    ctx->pc = 0x131444u;
label_131444:
    // 0x131444: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x131444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_131448:
    // 0x131448: 0x8fa500e4  lw          $a1, 0xE4($sp)
    ctx->pc = 0x131448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_13144c:
    // 0x13144c: 0xc067fca  jal         func_19FF28
label_131450:
    if (ctx->pc == 0x131450u) {
        ctx->pc = 0x131450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13144Cu;
        // 0x131450: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131454u;
        goto label_131454;
    }
    ctx->pc = 0x13144Cu;
    SET_GPR_U32(ctx, 31, 0x131454u);
    ctx->pc = 0x131450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13144Cu;
    // 0x131450: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x13144Cu, 0x131454u)) {
        return;
    }
    ctx->pc = 0x131454u;
label_131454:
    // 0x131454: 0xc6200bdc  lwc1        $f0, 0xBDC($s1)
    ctx->pc = 0x131454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_131458:
    // 0x131458: 0xc6210bd8  lwc1        $f1, 0xBD8($s1)
    ctx->pc = 0x131458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13145c:
    // 0x13145c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x13145cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_131460:
    // 0x131460: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x131460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_131464:
    // 0x131464: 0x0  nop
    ctx->pc = 0x131464u;
    // NOP
label_131468:
    // 0x131468: 0x0  nop
    ctx->pc = 0x131468u;
    // NOP
label_13146c:
    // 0x13146c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x13146cu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_131470:
    // 0x131470: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x131470u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_131474:
    // 0x131474: 0x0  nop
    ctx->pc = 0x131474u;
    // NOP
label_131478:
    // 0x131478: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_13147c:
    if (ctx->pc == 0x13147Cu) {
        ctx->pc = 0x13147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131478u;
        // 0x13147c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131480u;
        goto label_131480;
    }
    ctx->pc = 0x131478u;
    {
        const bool branch_taken_0x131478 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131478u;
        // 0x13147c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131478) {
            ctx->pc = 0x131484u;
            goto label_131484;
        }
    }
    ctx->pc = 0x131480u;
label_131480:
    // 0x131480: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x131480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_131484:
    // 0x131484: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x131484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_131488:
    // 0x131488: 0xc067fca  jal         func_19FF28
label_13148c:
    if (ctx->pc == 0x13148Cu) {
        ctx->pc = 0x13148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131488u;
        // 0x13148c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131490u;
        goto label_131490;
    }
    ctx->pc = 0x131488u;
    SET_GPR_U32(ctx, 31, 0x131490u);
    ctx->pc = 0x13148Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131488u;
    // 0x13148c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x131488u, 0x131490u)) {
        return;
    }
    ctx->pc = 0x131490u;
label_131490:
    // 0x131490: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x131490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_131494:
    // 0x131494: 0xc048516  jal         func_121458
label_131498:
    if (ctx->pc == 0x131498u) {
        ctx->pc = 0x131498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131494u;
        // 0x131498: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13149Cu;
        goto label_13149c;
    }
    ctx->pc = 0x131494u;
    SET_GPR_U32(ctx, 31, 0x13149Cu);
    ctx->pc = 0x131498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131494u;
    // 0x131498: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x121458u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x121458u, 0x131494u, 0x13149Cu)) {
        return;
    }
    ctx->pc = 0x13149Cu;
label_13149c:
    // 0x13149c: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x13149cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_1314a0:
    // 0x1314a0: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x1314a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_1314a4:
    // 0x1314a4: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x1314a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_1314a8:
    // 0x1314a8: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x1314a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1314ac:
    // 0x1314ac: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x1314acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1314b0:
    // 0x1314b0: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x1314b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1314b4:
    // 0x1314b4: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x1314b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1314b8:
    // 0x1314b8: 0x7bb70110  lq          $s7, 0x110($sp)
    ctx->pc = 0x1314b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1314bc:
    // 0x1314bc: 0x7bbe0100  lq          $fp, 0x100($sp)
    ctx->pc = 0x1314bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1314c0:
    // 0x1314c0: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x1314c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_1314c4:
    // 0x1314c4: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x1314c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1314c8:
    // 0x1314c8: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x1314c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1314cc:
    // 0x1314cc: 0x3e00008  jr          $ra
label_1314d0:
    if (ctx->pc == 0x1314D0u) {
        ctx->pc = 0x1314D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1314CCu;
        // 0x1314d0: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1314D4u;
        goto label_1314d4;
    }
    ctx->pc = 0x1314CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1314D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1314CCu;
        // 0x1314d0: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1314CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1314D4u;
label_1314d4:
    // 0x1314d4: 0x0  nop
    ctx->pc = 0x1314d4u;
    // NOP
    ctx->pc = 0x1314d8u;
}
