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

// Function: sub_00283F90
// Address: 0x283f90 - 0x2846f0
void sub_00283F90_0x283f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283F90_0x283f90");
#endif

    switch (ctx->pc) {
        case 0x283f90u: goto label_283f90;
        case 0x283f94u: goto label_283f94;
        case 0x283f98u: goto label_283f98;
        case 0x283f9cu: goto label_283f9c;
        case 0x283fa0u: goto label_283fa0;
        case 0x283fa4u: goto label_283fa4;
        case 0x283fa8u: goto label_283fa8;
        case 0x283facu: goto label_283fac;
        case 0x283fb0u: goto label_283fb0;
        case 0x283fb4u: goto label_283fb4;
        case 0x283fb8u: goto label_283fb8;
        case 0x283fbcu: goto label_283fbc;
        case 0x283fc0u: goto label_283fc0;
        case 0x283fc4u: goto label_283fc4;
        case 0x283fc8u: goto label_283fc8;
        case 0x283fccu: goto label_283fcc;
        case 0x283fd0u: goto label_283fd0;
        case 0x283fd4u: goto label_283fd4;
        case 0x283fd8u: goto label_283fd8;
        case 0x283fdcu: goto label_283fdc;
        case 0x283fe0u: goto label_283fe0;
        case 0x283fe4u: goto label_283fe4;
        case 0x283fe8u: goto label_283fe8;
        case 0x283fecu: goto label_283fec;
        case 0x283ff0u: goto label_283ff0;
        case 0x283ff4u: goto label_283ff4;
        case 0x283ff8u: goto label_283ff8;
        case 0x283ffcu: goto label_283ffc;
        case 0x284000u: goto label_284000;
        case 0x284004u: goto label_284004;
        case 0x284008u: goto label_284008;
        case 0x28400cu: goto label_28400c;
        case 0x284010u: goto label_284010;
        case 0x284014u: goto label_284014;
        case 0x284018u: goto label_284018;
        case 0x28401cu: goto label_28401c;
        case 0x284020u: goto label_284020;
        case 0x284024u: goto label_284024;
        case 0x284028u: goto label_284028;
        case 0x28402cu: goto label_28402c;
        case 0x284030u: goto label_284030;
        case 0x284034u: goto label_284034;
        case 0x284038u: goto label_284038;
        case 0x28403cu: goto label_28403c;
        case 0x284040u: goto label_284040;
        case 0x284044u: goto label_284044;
        case 0x284048u: goto label_284048;
        case 0x28404cu: goto label_28404c;
        case 0x284050u: goto label_284050;
        case 0x284054u: goto label_284054;
        case 0x284058u: goto label_284058;
        case 0x28405cu: goto label_28405c;
        case 0x284060u: goto label_284060;
        case 0x284064u: goto label_284064;
        case 0x284068u: goto label_284068;
        case 0x28406cu: goto label_28406c;
        case 0x284070u: goto label_284070;
        case 0x284074u: goto label_284074;
        case 0x284078u: goto label_284078;
        case 0x28407cu: goto label_28407c;
        case 0x284080u: goto label_284080;
        case 0x284084u: goto label_284084;
        case 0x284088u: goto label_284088;
        case 0x28408cu: goto label_28408c;
        case 0x284090u: goto label_284090;
        case 0x284094u: goto label_284094;
        case 0x284098u: goto label_284098;
        case 0x28409cu: goto label_28409c;
        case 0x2840a0u: goto label_2840a0;
        case 0x2840a4u: goto label_2840a4;
        case 0x2840a8u: goto label_2840a8;
        case 0x2840acu: goto label_2840ac;
        case 0x2840b0u: goto label_2840b0;
        case 0x2840b4u: goto label_2840b4;
        case 0x2840b8u: goto label_2840b8;
        case 0x2840bcu: goto label_2840bc;
        case 0x2840c0u: goto label_2840c0;
        case 0x2840c4u: goto label_2840c4;
        case 0x2840c8u: goto label_2840c8;
        case 0x2840ccu: goto label_2840cc;
        case 0x2840d0u: goto label_2840d0;
        case 0x2840d4u: goto label_2840d4;
        case 0x2840d8u: goto label_2840d8;
        case 0x2840dcu: goto label_2840dc;
        case 0x2840e0u: goto label_2840e0;
        case 0x2840e4u: goto label_2840e4;
        case 0x2840e8u: goto label_2840e8;
        case 0x2840ecu: goto label_2840ec;
        case 0x2840f0u: goto label_2840f0;
        case 0x2840f4u: goto label_2840f4;
        case 0x2840f8u: goto label_2840f8;
        case 0x2840fcu: goto label_2840fc;
        case 0x284100u: goto label_284100;
        case 0x284104u: goto label_284104;
        case 0x284108u: goto label_284108;
        case 0x28410cu: goto label_28410c;
        case 0x284110u: goto label_284110;
        case 0x284114u: goto label_284114;
        case 0x284118u: goto label_284118;
        case 0x28411cu: goto label_28411c;
        case 0x284120u: goto label_284120;
        case 0x284124u: goto label_284124;
        case 0x284128u: goto label_284128;
        case 0x28412cu: goto label_28412c;
        case 0x284130u: goto label_284130;
        case 0x284134u: goto label_284134;
        case 0x284138u: goto label_284138;
        case 0x28413cu: goto label_28413c;
        case 0x284140u: goto label_284140;
        case 0x284144u: goto label_284144;
        case 0x284148u: goto label_284148;
        case 0x28414cu: goto label_28414c;
        case 0x284150u: goto label_284150;
        case 0x284154u: goto label_284154;
        case 0x284158u: goto label_284158;
        case 0x28415cu: goto label_28415c;
        case 0x284160u: goto label_284160;
        case 0x284164u: goto label_284164;
        case 0x284168u: goto label_284168;
        case 0x28416cu: goto label_28416c;
        case 0x284170u: goto label_284170;
        case 0x284174u: goto label_284174;
        case 0x284178u: goto label_284178;
        case 0x28417cu: goto label_28417c;
        case 0x284180u: goto label_284180;
        case 0x284184u: goto label_284184;
        case 0x284188u: goto label_284188;
        case 0x28418cu: goto label_28418c;
        case 0x284190u: goto label_284190;
        case 0x284194u: goto label_284194;
        case 0x284198u: goto label_284198;
        case 0x28419cu: goto label_28419c;
        case 0x2841a0u: goto label_2841a0;
        case 0x2841a4u: goto label_2841a4;
        case 0x2841a8u: goto label_2841a8;
        case 0x2841acu: goto label_2841ac;
        case 0x2841b0u: goto label_2841b0;
        case 0x2841b4u: goto label_2841b4;
        case 0x2841b8u: goto label_2841b8;
        case 0x2841bcu: goto label_2841bc;
        case 0x2841c0u: goto label_2841c0;
        case 0x2841c4u: goto label_2841c4;
        case 0x2841c8u: goto label_2841c8;
        case 0x2841ccu: goto label_2841cc;
        case 0x2841d0u: goto label_2841d0;
        case 0x2841d4u: goto label_2841d4;
        case 0x2841d8u: goto label_2841d8;
        case 0x2841dcu: goto label_2841dc;
        case 0x2841e0u: goto label_2841e0;
        case 0x2841e4u: goto label_2841e4;
        case 0x2841e8u: goto label_2841e8;
        case 0x2841ecu: goto label_2841ec;
        case 0x2841f0u: goto label_2841f0;
        case 0x2841f4u: goto label_2841f4;
        case 0x2841f8u: goto label_2841f8;
        case 0x2841fcu: goto label_2841fc;
        case 0x284200u: goto label_284200;
        case 0x284204u: goto label_284204;
        case 0x284208u: goto label_284208;
        case 0x28420cu: goto label_28420c;
        case 0x284210u: goto label_284210;
        case 0x284214u: goto label_284214;
        case 0x284218u: goto label_284218;
        case 0x28421cu: goto label_28421c;
        case 0x284220u: goto label_284220;
        case 0x284224u: goto label_284224;
        case 0x284228u: goto label_284228;
        case 0x28422cu: goto label_28422c;
        case 0x284230u: goto label_284230;
        case 0x284234u: goto label_284234;
        case 0x284238u: goto label_284238;
        case 0x28423cu: goto label_28423c;
        case 0x284240u: goto label_284240;
        case 0x284244u: goto label_284244;
        case 0x284248u: goto label_284248;
        case 0x28424cu: goto label_28424c;
        case 0x284250u: goto label_284250;
        case 0x284254u: goto label_284254;
        case 0x284258u: goto label_284258;
        case 0x28425cu: goto label_28425c;
        case 0x284260u: goto label_284260;
        case 0x284264u: goto label_284264;
        case 0x284268u: goto label_284268;
        case 0x28426cu: goto label_28426c;
        case 0x284270u: goto label_284270;
        case 0x284274u: goto label_284274;
        case 0x284278u: goto label_284278;
        case 0x28427cu: goto label_28427c;
        case 0x284280u: goto label_284280;
        case 0x284284u: goto label_284284;
        case 0x284288u: goto label_284288;
        case 0x28428cu: goto label_28428c;
        case 0x284290u: goto label_284290;
        case 0x284294u: goto label_284294;
        case 0x284298u: goto label_284298;
        case 0x28429cu: goto label_28429c;
        case 0x2842a0u: goto label_2842a0;
        case 0x2842a4u: goto label_2842a4;
        case 0x2842a8u: goto label_2842a8;
        case 0x2842acu: goto label_2842ac;
        case 0x2842b0u: goto label_2842b0;
        case 0x2842b4u: goto label_2842b4;
        case 0x2842b8u: goto label_2842b8;
        case 0x2842bcu: goto label_2842bc;
        case 0x2842c0u: goto label_2842c0;
        case 0x2842c4u: goto label_2842c4;
        case 0x2842c8u: goto label_2842c8;
        case 0x2842ccu: goto label_2842cc;
        case 0x2842d0u: goto label_2842d0;
        case 0x2842d4u: goto label_2842d4;
        case 0x2842d8u: goto label_2842d8;
        case 0x2842dcu: goto label_2842dc;
        case 0x2842e0u: goto label_2842e0;
        case 0x2842e4u: goto label_2842e4;
        case 0x2842e8u: goto label_2842e8;
        case 0x2842ecu: goto label_2842ec;
        case 0x2842f0u: goto label_2842f0;
        case 0x2842f4u: goto label_2842f4;
        case 0x2842f8u: goto label_2842f8;
        case 0x2842fcu: goto label_2842fc;
        case 0x284300u: goto label_284300;
        case 0x284304u: goto label_284304;
        case 0x284308u: goto label_284308;
        case 0x28430cu: goto label_28430c;
        case 0x284310u: goto label_284310;
        case 0x284314u: goto label_284314;
        case 0x284318u: goto label_284318;
        case 0x28431cu: goto label_28431c;
        case 0x284320u: goto label_284320;
        case 0x284324u: goto label_284324;
        case 0x284328u: goto label_284328;
        case 0x28432cu: goto label_28432c;
        case 0x284330u: goto label_284330;
        case 0x284334u: goto label_284334;
        case 0x284338u: goto label_284338;
        case 0x28433cu: goto label_28433c;
        case 0x284340u: goto label_284340;
        case 0x284344u: goto label_284344;
        case 0x284348u: goto label_284348;
        case 0x28434cu: goto label_28434c;
        case 0x284350u: goto label_284350;
        case 0x284354u: goto label_284354;
        case 0x284358u: goto label_284358;
        case 0x28435cu: goto label_28435c;
        case 0x284360u: goto label_284360;
        case 0x284364u: goto label_284364;
        case 0x284368u: goto label_284368;
        case 0x28436cu: goto label_28436c;
        case 0x284370u: goto label_284370;
        case 0x284374u: goto label_284374;
        case 0x284378u: goto label_284378;
        case 0x28437cu: goto label_28437c;
        case 0x284380u: goto label_284380;
        case 0x284384u: goto label_284384;
        case 0x284388u: goto label_284388;
        case 0x28438cu: goto label_28438c;
        case 0x284390u: goto label_284390;
        case 0x284394u: goto label_284394;
        case 0x284398u: goto label_284398;
        case 0x28439cu: goto label_28439c;
        case 0x2843a0u: goto label_2843a0;
        case 0x2843a4u: goto label_2843a4;
        case 0x2843a8u: goto label_2843a8;
        case 0x2843acu: goto label_2843ac;
        case 0x2843b0u: goto label_2843b0;
        case 0x2843b4u: goto label_2843b4;
        case 0x2843b8u: goto label_2843b8;
        case 0x2843bcu: goto label_2843bc;
        case 0x2843c0u: goto label_2843c0;
        case 0x2843c4u: goto label_2843c4;
        case 0x2843c8u: goto label_2843c8;
        case 0x2843ccu: goto label_2843cc;
        case 0x2843d0u: goto label_2843d0;
        case 0x2843d4u: goto label_2843d4;
        case 0x2843d8u: goto label_2843d8;
        case 0x2843dcu: goto label_2843dc;
        case 0x2843e0u: goto label_2843e0;
        case 0x2843e4u: goto label_2843e4;
        case 0x2843e8u: goto label_2843e8;
        case 0x2843ecu: goto label_2843ec;
        case 0x2843f0u: goto label_2843f0;
        case 0x2843f4u: goto label_2843f4;
        case 0x2843f8u: goto label_2843f8;
        case 0x2843fcu: goto label_2843fc;
        case 0x284400u: goto label_284400;
        case 0x284404u: goto label_284404;
        case 0x284408u: goto label_284408;
        case 0x28440cu: goto label_28440c;
        case 0x284410u: goto label_284410;
        case 0x284414u: goto label_284414;
        case 0x284418u: goto label_284418;
        case 0x28441cu: goto label_28441c;
        case 0x284420u: goto label_284420;
        case 0x284424u: goto label_284424;
        case 0x284428u: goto label_284428;
        case 0x28442cu: goto label_28442c;
        case 0x284430u: goto label_284430;
        case 0x284434u: goto label_284434;
        case 0x284438u: goto label_284438;
        case 0x28443cu: goto label_28443c;
        case 0x284440u: goto label_284440;
        case 0x284444u: goto label_284444;
        case 0x284448u: goto label_284448;
        case 0x28444cu: goto label_28444c;
        case 0x284450u: goto label_284450;
        case 0x284454u: goto label_284454;
        case 0x284458u: goto label_284458;
        case 0x28445cu: goto label_28445c;
        case 0x284460u: goto label_284460;
        case 0x284464u: goto label_284464;
        case 0x284468u: goto label_284468;
        case 0x28446cu: goto label_28446c;
        case 0x284470u: goto label_284470;
        case 0x284474u: goto label_284474;
        case 0x284478u: goto label_284478;
        case 0x28447cu: goto label_28447c;
        case 0x284480u: goto label_284480;
        case 0x284484u: goto label_284484;
        case 0x284488u: goto label_284488;
        case 0x28448cu: goto label_28448c;
        case 0x284490u: goto label_284490;
        case 0x284494u: goto label_284494;
        case 0x284498u: goto label_284498;
        case 0x28449cu: goto label_28449c;
        case 0x2844a0u: goto label_2844a0;
        case 0x2844a4u: goto label_2844a4;
        case 0x2844a8u: goto label_2844a8;
        case 0x2844acu: goto label_2844ac;
        case 0x2844b0u: goto label_2844b0;
        case 0x2844b4u: goto label_2844b4;
        case 0x2844b8u: goto label_2844b8;
        case 0x2844bcu: goto label_2844bc;
        case 0x2844c0u: goto label_2844c0;
        case 0x2844c4u: goto label_2844c4;
        case 0x2844c8u: goto label_2844c8;
        case 0x2844ccu: goto label_2844cc;
        case 0x2844d0u: goto label_2844d0;
        case 0x2844d4u: goto label_2844d4;
        case 0x2844d8u: goto label_2844d8;
        case 0x2844dcu: goto label_2844dc;
        case 0x2844e0u: goto label_2844e0;
        case 0x2844e4u: goto label_2844e4;
        case 0x2844e8u: goto label_2844e8;
        case 0x2844ecu: goto label_2844ec;
        case 0x2844f0u: goto label_2844f0;
        case 0x2844f4u: goto label_2844f4;
        case 0x2844f8u: goto label_2844f8;
        case 0x2844fcu: goto label_2844fc;
        case 0x284500u: goto label_284500;
        case 0x284504u: goto label_284504;
        case 0x284508u: goto label_284508;
        case 0x28450cu: goto label_28450c;
        case 0x284510u: goto label_284510;
        case 0x284514u: goto label_284514;
        case 0x284518u: goto label_284518;
        case 0x28451cu: goto label_28451c;
        case 0x284520u: goto label_284520;
        case 0x284524u: goto label_284524;
        case 0x284528u: goto label_284528;
        case 0x28452cu: goto label_28452c;
        case 0x284530u: goto label_284530;
        case 0x284534u: goto label_284534;
        case 0x284538u: goto label_284538;
        case 0x28453cu: goto label_28453c;
        case 0x284540u: goto label_284540;
        case 0x284544u: goto label_284544;
        case 0x284548u: goto label_284548;
        case 0x28454cu: goto label_28454c;
        case 0x284550u: goto label_284550;
        case 0x284554u: goto label_284554;
        case 0x284558u: goto label_284558;
        case 0x28455cu: goto label_28455c;
        case 0x284560u: goto label_284560;
        case 0x284564u: goto label_284564;
        case 0x284568u: goto label_284568;
        case 0x28456cu: goto label_28456c;
        case 0x284570u: goto label_284570;
        case 0x284574u: goto label_284574;
        case 0x284578u: goto label_284578;
        case 0x28457cu: goto label_28457c;
        case 0x284580u: goto label_284580;
        case 0x284584u: goto label_284584;
        case 0x284588u: goto label_284588;
        case 0x28458cu: goto label_28458c;
        case 0x284590u: goto label_284590;
        case 0x284594u: goto label_284594;
        case 0x284598u: goto label_284598;
        case 0x28459cu: goto label_28459c;
        case 0x2845a0u: goto label_2845a0;
        case 0x2845a4u: goto label_2845a4;
        case 0x2845a8u: goto label_2845a8;
        case 0x2845acu: goto label_2845ac;
        case 0x2845b0u: goto label_2845b0;
        case 0x2845b4u: goto label_2845b4;
        case 0x2845b8u: goto label_2845b8;
        case 0x2845bcu: goto label_2845bc;
        case 0x2845c0u: goto label_2845c0;
        case 0x2845c4u: goto label_2845c4;
        case 0x2845c8u: goto label_2845c8;
        case 0x2845ccu: goto label_2845cc;
        case 0x2845d0u: goto label_2845d0;
        case 0x2845d4u: goto label_2845d4;
        case 0x2845d8u: goto label_2845d8;
        case 0x2845dcu: goto label_2845dc;
        case 0x2845e0u: goto label_2845e0;
        case 0x2845e4u: goto label_2845e4;
        case 0x2845e8u: goto label_2845e8;
        case 0x2845ecu: goto label_2845ec;
        case 0x2845f0u: goto label_2845f0;
        case 0x2845f4u: goto label_2845f4;
        case 0x2845f8u: goto label_2845f8;
        case 0x2845fcu: goto label_2845fc;
        case 0x284600u: goto label_284600;
        case 0x284604u: goto label_284604;
        case 0x284608u: goto label_284608;
        case 0x28460cu: goto label_28460c;
        case 0x284610u: goto label_284610;
        case 0x284614u: goto label_284614;
        case 0x284618u: goto label_284618;
        case 0x28461cu: goto label_28461c;
        case 0x284620u: goto label_284620;
        case 0x284624u: goto label_284624;
        case 0x284628u: goto label_284628;
        case 0x28462cu: goto label_28462c;
        case 0x284630u: goto label_284630;
        case 0x284634u: goto label_284634;
        case 0x284638u: goto label_284638;
        case 0x28463cu: goto label_28463c;
        case 0x284640u: goto label_284640;
        case 0x284644u: goto label_284644;
        case 0x284648u: goto label_284648;
        case 0x28464cu: goto label_28464c;
        case 0x284650u: goto label_284650;
        case 0x284654u: goto label_284654;
        case 0x284658u: goto label_284658;
        case 0x28465cu: goto label_28465c;
        case 0x284660u: goto label_284660;
        case 0x284664u: goto label_284664;
        case 0x284668u: goto label_284668;
        case 0x28466cu: goto label_28466c;
        case 0x284670u: goto label_284670;
        case 0x284674u: goto label_284674;
        case 0x284678u: goto label_284678;
        case 0x28467cu: goto label_28467c;
        case 0x284680u: goto label_284680;
        case 0x284684u: goto label_284684;
        case 0x284688u: goto label_284688;
        case 0x28468cu: goto label_28468c;
        case 0x284690u: goto label_284690;
        case 0x284694u: goto label_284694;
        case 0x284698u: goto label_284698;
        case 0x28469cu: goto label_28469c;
        case 0x2846a0u: goto label_2846a0;
        case 0x2846a4u: goto label_2846a4;
        case 0x2846a8u: goto label_2846a8;
        case 0x2846acu: goto label_2846ac;
        case 0x2846b0u: goto label_2846b0;
        case 0x2846b4u: goto label_2846b4;
        case 0x2846b8u: goto label_2846b8;
        case 0x2846bcu: goto label_2846bc;
        case 0x2846c0u: goto label_2846c0;
        case 0x2846c4u: goto label_2846c4;
        case 0x2846c8u: goto label_2846c8;
        case 0x2846ccu: goto label_2846cc;
        case 0x2846d0u: goto label_2846d0;
        case 0x2846d4u: goto label_2846d4;
        case 0x2846d8u: goto label_2846d8;
        case 0x2846dcu: goto label_2846dc;
        case 0x2846e0u: goto label_2846e0;
        case 0x2846e4u: goto label_2846e4;
        case 0x2846e8u: goto label_2846e8;
        case 0x2846ecu: goto label_2846ec;
        default: break;
    }

    ctx->pc = 0x283f90u;

label_283f90:
    // 0x283f90: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x283f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_283f94:
    // 0x283f94: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x283f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_283f98:
    // 0x283f98: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x283f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_283f9c:
    // 0x283f9c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x283f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_283fa0:
    // 0x283fa0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x283fa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_283fa4:
    // 0x283fa4: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x283fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_283fa8:
    // 0x283fa8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x283fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_283fac:
    // 0x283fac: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x283facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_283fb0:
    // 0x283fb0: 0x2428018  mult        $s0, $s2, $v0
    ctx->pc = 0x283fb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_283fb4:
    // 0x283fb4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x283fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_283fb8:
    // 0x283fb8: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x283fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_283fbc:
    // 0x283fbc: 0x24730fc8  addiu       $s3, $v1, 0xFC8
    ctx->pc = 0x283fbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_283fc0:
    // 0x283fc0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x283fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_283fc4:
    // 0x283fc4: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x283fc4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_283fc8:
    // 0x283fc8: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x283fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_283fcc:
    // 0x283fcc: 0x34a50102  ori         $a1, $a1, 0x102
    ctx->pc = 0x283fccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
label_283fd0:
    // 0x283fd0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x283fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_283fd4:
    // 0x283fd4: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x283fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_283fd8:
    // 0x283fd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x283fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_283fdc:
    // 0x283fdc: 0x8e620108  lw          $v0, 0x108($s3)
    ctx->pc = 0x283fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
label_283fe0:
    // 0x283fe0: 0x40f809  jalr        $v0
label_283fe4:
    if (ctx->pc == 0x283FE4u) {
        ctx->pc = 0x283FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283FE0u;
        // 0x283fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283FE8u;
        goto label_283fe8;
    }
    ctx->pc = 0x283FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x283FE8u);
        ctx->pc = 0x283FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283FE0u;
        // 0x283fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283FE0u, 0x283FE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x283FE8u;
label_283fe8:
    // 0x283fe8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x283fe8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_283fec:
    // 0x283fec: 0x16a0000c  bnez        $s5, . + 4 + (0xC << 2)
label_283ff0:
    if (ctx->pc == 0x283FF0u) {
        ctx->pc = 0x283FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283FECu;
        // 0x283ff0: 0x2523018  mult        $a2, $s2, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x283FF4u;
        goto label_283ff4;
    }
    ctx->pc = 0x283FECu;
    {
        const bool branch_taken_0x283fec = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x283FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283FECu;
        // 0x283ff0: 0x2523018  mult        $a2, $s2, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x283fec) {
            ctx->pc = 0x284020u;
            goto label_284020;
        }
    }
    ctx->pc = 0x283FF4u;
label_283ff4:
    // 0x283ff4: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x283ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_283ff8:
    // 0x283ff8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x283ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_283ffc:
    // 0x283ffc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x283ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_284000:
    // 0x284000: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x284000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_284004:
    // 0x284004: 0xc092848  jal         func_24A120
label_284008:
    if (ctx->pc == 0x284008u) {
        ctx->pc = 0x284008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284004u;
        // 0x284008: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28400Cu;
        goto label_28400c;
    }
    ctx->pc = 0x284004u;
    SET_GPR_U32(ctx, 31, 0x28400Cu);
    ctx->pc = 0x284008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284004u;
    // 0x284008: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x284004u, 0x28400Cu)) {
        return;
    }
    ctx->pc = 0x28400Cu;
label_28400c:
    // 0x28400c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28400cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_284010:
    // 0x284010: 0xc09281a  jal         func_24A068
label_284014:
    if (ctx->pc == 0x284014u) {
        ctx->pc = 0x284014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284010u;
        // 0x284014: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284018u;
        goto label_284018;
    }
    ctx->pc = 0x284010u;
    SET_GPR_U32(ctx, 31, 0x284018u);
    ctx->pc = 0x284014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284010u;
    // 0x284014: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x284010u, 0x284018u)) {
        return;
    }
    ctx->pc = 0x284018u;
label_284018:
    // 0x284018: 0x100001a9  b           . + 4 + (0x1A9 << 2)
label_28401c:
    if (ctx->pc == 0x28401Cu) {
        ctx->pc = 0x28401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284018u;
        // 0x28401c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284020u;
        goto label_284020;
    }
    ctx->pc = 0x284018u;
    {
        const bool branch_taken_0x284018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284018u;
        // 0x28401c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284018) {
            ctx->pc = 0x2846C0u;
            goto label_2846c0;
        }
    }
    ctx->pc = 0x284020u;
label_284020:
    // 0x284020: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x284020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_284024:
    // 0x284024: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x284024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_284028:
    // 0x284028: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x284028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28402c:
    // 0x28402c: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x28402cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_284030:
    // 0x284030: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x284030u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_284034:
    // 0x284034: 0xc0c493d  jal         func_3124F4
label_284038:
    if (ctx->pc == 0x284038u) {
        ctx->pc = 0x284038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284034u;
        // 0x284038: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28403Cu;
        goto label_28403c;
    }
    ctx->pc = 0x284034u;
    SET_GPR_U32(ctx, 31, 0x28403Cu);
    ctx->pc = 0x284038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284034u;
    // 0x284038: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x284034u, 0x28403Cu)) {
        return;
    }
    ctx->pc = 0x28403Cu;
label_28403c:
    // 0x28403c: 0x8e620108  lw          $v0, 0x108($s3)
    ctx->pc = 0x28403cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
label_284040:
    // 0x284040: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x284040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_284044:
    // 0x284044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x284044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_284048:
    // 0x284048: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x284048u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_28404c:
    // 0x28404c: 0x40f809  jalr        $v0
label_284050:
    if (ctx->pc == 0x284050u) {
        ctx->pc = 0x284050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28404Cu;
        // 0x284050: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        ctx->pc = 0x284054u;
        goto label_284054;
    }
    ctx->pc = 0x28404Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x284054u);
        ctx->pc = 0x284050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28404Cu;
        // 0x284050: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28404Cu, 0x284054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x284054u;
label_284054:
    // 0x284054: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x284054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_284058:
    // 0x284058: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
label_28405c:
    if (ctx->pc == 0x28405Cu) {
        ctx->pc = 0x28405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284058u;
        // 0x28405c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284060u;
        goto label_284060;
    }
    ctx->pc = 0x284058u;
    {
        const bool branch_taken_0x284058 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284058u;
        // 0x28405c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284058) {
            ctx->pc = 0x284090u;
            goto label_284090;
        }
    }
    ctx->pc = 0x284060u;
label_284060:
    // 0x284060: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x284060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_284064:
    // 0x284064: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x284064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_284068:
    // 0x284068: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x284068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_28406c:
    // 0x28406c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28406cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_284070:
    // 0x284070: 0xc092848  jal         func_24A120
label_284074:
    if (ctx->pc == 0x284074u) {
        ctx->pc = 0x284074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284070u;
        // 0x284074: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x284078u;
        goto label_284078;
    }
    ctx->pc = 0x284070u;
    SET_GPR_U32(ctx, 31, 0x284078u);
    ctx->pc = 0x284074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284070u;
    // 0x284074: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x284070u, 0x284078u)) {
        return;
    }
    ctx->pc = 0x284078u;
label_284078:
    // 0x284078: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x284078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_28407c:
    // 0x28407c: 0xc09281a  jal         func_24A068
label_284080:
    if (ctx->pc == 0x284080u) {
        ctx->pc = 0x284080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28407Cu;
        // 0x284080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284084u;
        goto label_284084;
    }
    ctx->pc = 0x28407Cu;
    SET_GPR_U32(ctx, 31, 0x284084u);
    ctx->pc = 0x284080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28407Cu;
    // 0x284080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x28407Cu, 0x284084u)) {
        return;
    }
    ctx->pc = 0x284084u;
label_284084:
    // 0x284084: 0x10000046  b           . + 4 + (0x46 << 2)
label_284088:
    if (ctx->pc == 0x284088u) {
        ctx->pc = 0x284088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284084u;
        // 0x284088: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28408Cu;
        goto label_28408c;
    }
    ctx->pc = 0x284084u;
    {
        const bool branch_taken_0x284084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284084u;
        // 0x284088: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284084) {
            ctx->pc = 0x2841A0u;
            goto label_2841a0;
        }
    }
    ctx->pc = 0x28408Cu;
label_28408c:
    // 0x28408c: 0x0  nop
    ctx->pc = 0x28408cu;
    // NOP
label_284090:
    // 0x284090: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x284090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_284094:
    // 0x284094: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x284094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_284098:
    // 0x284098: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x284098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_28409c:
    // 0x28409c: 0x116102a  slt         $v0, $t0, $s6
    ctx->pc = 0x28409cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_2840a0:
    // 0x2840a0: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_2840a4:
    if (ctx->pc == 0x2840A4u) {
        ctx->pc = 0x2840A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2840A0u;
        // 0x2840a4: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2840A8u;
        goto label_2840a8;
    }
    ctx->pc = 0x2840A0u;
    {
        const bool branch_taken_0x2840a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2840A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2840A0u;
        // 0x2840a4: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2840a0) {
            ctx->pc = 0x28419Cu;
            goto label_28419c;
        }
    }
    ctx->pc = 0x2840A8u;
label_2840a8:
    // 0x2840a8: 0x2648fffd  addiu       $t0, $s2, -0x3
    ctx->pc = 0x2840a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967293));
label_2840ac:
    // 0x2840ac: 0x24860008  addiu       $a2, $a0, 0x8
    ctx->pc = 0x2840acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_2840b0:
    // 0x2840b0: 0x81023  negu        $v0, $t0
    ctx->pc = 0x2840b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
label_2840b4:
    // 0x2840b4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2840b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2840b8:
    // 0x2840b8: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_2840bc:
    if (ctx->pc == 0x2840BCu) {
        ctx->pc = 0x2840BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2840B8u;
        // 0x2840bc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2840C0u;
        goto label_2840c0;
    }
    ctx->pc = 0x2840B8u;
    {
        const bool branch_taken_0x2840b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2840BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2840B8u;
        // 0x2840bc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2840b8) {
            ctx->pc = 0x28412Cu;
            goto label_28412c;
        }
    }
    ctx->pc = 0x2840C0u;
label_2840c0:
    // 0x2840c0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2840c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_2840c4:
    // 0x2840c4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2840c8:
    if (ctx->pc == 0x2840C8u) {
        ctx->pc = 0x2840C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2840C4u;
        // 0x2840c8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2840CCu;
        goto label_2840cc;
    }
    ctx->pc = 0x2840C4u;
    {
        const bool branch_taken_0x2840c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2840C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2840C4u;
        // 0x2840c8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2840c4) {
            ctx->pc = 0x28410Cu;
            goto label_28410c;
        }
    }
    ctx->pc = 0x2840CCu;
label_2840cc:
    // 0x2840cc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2840d0:
    if (ctx->pc == 0x2840D0u) {
        ctx->pc = 0x2840D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2840CCu;
        // 0x2840d0: 0x8ca2fffc  lw          $v0, -0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2840D4u;
        goto label_2840d4;
    }
    ctx->pc = 0x2840CCu;
    {
        const bool branch_taken_0x2840cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2840cc) {
            ctx->pc = 0x2840D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2840CCu;
            // 0x2840d0: 0x8ca2fffc  lw          $v0, -0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2840F4u;
            goto label_2840f4;
        }
    }
    ctx->pc = 0x2840D4u;
label_2840d4:
    // 0x2840d4: 0x8cc2fffc  lw          $v0, -0x4($a2)
    ctx->pc = 0x2840d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_2840d8:
    // 0x2840d8: 0x2485000c  addiu       $a1, $a0, 0xC
    ctx->pc = 0x2840d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_2840dc:
    // 0x2840dc: 0x8cc3fff8  lw          $v1, -0x8($a2)
    ctx->pc = 0x2840dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_2840e0:
    // 0x2840e0: 0x2648fffc  addiu       $t0, $s2, -0x4
    ctx->pc = 0x2840e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
label_2840e4:
    // 0x2840e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2840e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2840e8:
    // 0x2840e8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2840e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2840ec:
    // 0x2840ec: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2840ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_2840f0:
    // 0x2840f0: 0x8ca2fffc  lw          $v0, -0x4($a1)
    ctx->pc = 0x2840f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
label_2840f4:
    // 0x2840f4: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2840f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_2840f8:
    // 0x2840f8: 0x8ca3fff8  lw          $v1, -0x8($a1)
    ctx->pc = 0x2840f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
label_2840fc:
    // 0x2840fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2840fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_284100:
    // 0x284100: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x284100u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_284104:
    // 0x284104: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x284104u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_284108:
    // 0x284108: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x284108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_28410c:
    // 0x28410c: 0x8ca2fffc  lw          $v0, -0x4($a1)
    ctx->pc = 0x28410cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
label_284110:
    // 0x284110: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x284110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_284114:
    // 0x284114: 0x8ca3fff8  lw          $v1, -0x8($a1)
    ctx->pc = 0x284114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
label_284118:
    // 0x284118: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x284118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28411c:
    // 0x28411c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x28411cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_284120:
    // 0x284120: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x284120u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_284124:
    // 0x284124: 0x1100001d  beqz        $t0, . + 4 + (0x1D << 2)
label_284128:
    if (ctx->pc == 0x284128u) {
        ctx->pc = 0x284128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284124u;
        // 0x284128: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28412Cu;
        goto label_28412c;
    }
    ctx->pc = 0x284124u;
    {
        const bool branch_taken_0x284124 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x284128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284124u;
        // 0x284128: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284124) {
            ctx->pc = 0x28419Cu;
            goto label_28419c;
        }
    }
    ctx->pc = 0x28412Cu;
label_28412c:
    // 0x28412c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x28412cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_284130:
    // 0x284130: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x284130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_284134:
    // 0x284134: 0x0  nop
    ctx->pc = 0x284134u;
    // NOP
label_284138:
    // 0x284138: 0x8cc2fffc  lw          $v0, -0x4($a2)
    ctx->pc = 0x284138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_28413c:
    // 0x28413c: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x28413cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
label_284140:
    // 0x284140: 0x8ce3fff8  lw          $v1, -0x8($a3)
    ctx->pc = 0x284140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967288)));
label_284144:
    // 0x284144: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x284144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_284148:
    // 0x284148: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x284148u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28414c:
    // 0x28414c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x28414cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_284150:
    // 0x284150: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x284150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_284154:
    // 0x284154: 0x8ce3fffc  lw          $v1, -0x4($a3)
    ctx->pc = 0x284154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967292)));
label_284158:
    // 0x284158: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x284158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28415c:
    // 0x28415c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x28415cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_284160:
    // 0x284160: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x284160u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_284164:
    // 0x284164: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x284164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_284168:
    // 0x284168: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x284168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_28416c:
    // 0x28416c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28416cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_284170:
    // 0x284170: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x284170u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_284174:
    // 0x284174: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x284174u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_284178:
    // 0x284178: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x284178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_28417c:
    // 0x28417c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x28417cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_284180:
    // 0x284180: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x284180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_284184:
    // 0x284184: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x284184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_284188:
    // 0x284188: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x284188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_28418c:
    // 0x28418c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x28418cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_284190:
    // 0x284190: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x284190u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_284194:
    // 0x284194: 0x1500ffe8  bnez        $t0, . + 4 + (-0x18 << 2)
label_284198:
    if (ctx->pc == 0x284198u) {
        ctx->pc = 0x284198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284194u;
        // 0x284198: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28419Cu;
        goto label_28419c;
    }
    ctx->pc = 0x284194u;
    {
        const bool branch_taken_0x284194 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x284198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284194u;
        // 0x284198: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284194) {
            ctx->pc = 0x284138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_284138;
        }
    }
    ctx->pc = 0x28419Cu;
label_28419c:
    // 0x28419c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28419cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2841a0:
    // 0x2841a0: 0x12600063  beqz        $s3, . + 4 + (0x63 << 2)
label_2841a4:
    if (ctx->pc == 0x2841A4u) {
        ctx->pc = 0x2841A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841A0u;
        // 0x2841a4: 0x128880  sll         $s1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2841A8u;
        goto label_2841a8;
    }
    ctx->pc = 0x2841A0u;
    {
        const bool branch_taken_0x2841a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2841A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841A0u;
        // 0x2841a4: 0x128880  sll         $s1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2841a0) {
            ctx->pc = 0x284330u;
            goto label_284330;
        }
    }
    ctx->pc = 0x2841A8u;
label_2841a8:
    // 0x2841a8: 0x27d00fc8  addiu       $s0, $fp, 0xFC8
    ctx->pc = 0x2841a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4040));
label_2841ac:
    // 0x2841ac: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x2841acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_2841b0:
    // 0x2841b0: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x2841b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2841b4:
    // 0x2841b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2841b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2841b8:
    // 0x2841b8: 0x60f809  jalr        $v1
label_2841bc:
    if (ctx->pc == 0x2841BCu) {
        ctx->pc = 0x2841BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841B8u;
        // 0x2841bc: 0x8c57fff8  lw          $s7, -0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2841C0u;
        goto label_2841c0;
    }
    ctx->pc = 0x2841B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2841C0u);
        ctx->pc = 0x2841BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841B8u;
        // 0x2841bc: 0x8c57fff8  lw          $s7, -0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2841B8u, 0x2841C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2841C0u;
label_2841c0:
    // 0x2841c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2841c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2841c4:
    // 0x2841c4: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x2841c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_2841c8:
    // 0x2841c8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2841c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2841cc:
    // 0x2841cc: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x2841ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2841d0:
    // 0x2841d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2841d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2841d4:
    // 0x2841d4: 0x40f809  jalr        $v0
label_2841d8:
    if (ctx->pc == 0x2841D8u) {
        ctx->pc = 0x2841D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841D4u;
        // 0x2841d8: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2841DCu;
        goto label_2841dc;
    }
    ctx->pc = 0x2841D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2841DCu);
        ctx->pc = 0x2841D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841D4u;
        // 0x2841d8: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2841D4u, 0x2841DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2841DCu;
label_2841dc:
    // 0x2841dc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2841dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2841e0:
    // 0x2841e0: 0x1500000d  bnez        $t0, . + 4 + (0xD << 2)
label_2841e4:
    if (ctx->pc == 0x2841E4u) {
        ctx->pc = 0x2841E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841E0u;
        // 0x2841e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2841E8u;
        goto label_2841e8;
    }
    ctx->pc = 0x2841E0u;
    {
        const bool branch_taken_0x2841e0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2841E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841E0u;
        // 0x2841e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2841e0) {
            ctx->pc = 0x284218u;
            goto label_284218;
        }
    }
    ctx->pc = 0x2841E8u;
label_2841e8:
    // 0x2841e8: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x2841e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_2841ec:
    // 0x2841ec: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2841ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_2841f0:
    // 0x2841f0: 0x34840013  ori         $a0, $a0, 0x13
    ctx->pc = 0x2841f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
label_2841f4:
    // 0x2841f4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2841f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_2841f8:
    // 0x2841f8: 0xc092848  jal         func_24A120
label_2841fc:
    if (ctx->pc == 0x2841FCu) {
        ctx->pc = 0x2841FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841F8u;
        // 0x2841fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284200u;
        goto label_284200;
    }
    ctx->pc = 0x2841F8u;
    SET_GPR_U32(ctx, 31, 0x284200u);
    ctx->pc = 0x2841FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2841F8u;
    // 0x2841fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x2841F8u, 0x284200u)) {
        return;
    }
    ctx->pc = 0x284200u;
label_284200:
    // 0x284200: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x284200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_284204:
    // 0x284204: 0xc09281a  jal         func_24A068
label_284208:
    if (ctx->pc == 0x284208u) {
        ctx->pc = 0x284208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284204u;
        // 0x284208: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28420Cu;
        goto label_28420c;
    }
    ctx->pc = 0x284204u;
    SET_GPR_U32(ctx, 31, 0x28420Cu);
    ctx->pc = 0x284208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284204u;
    // 0x284208: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x284204u, 0x28420Cu)) {
        return;
    }
    ctx->pc = 0x28420Cu;
label_28420c:
    // 0x28420c: 0x10000046  b           . + 4 + (0x46 << 2)
label_284210:
    if (ctx->pc == 0x284210u) {
        ctx->pc = 0x284214u;
        goto label_284214;
    }
    ctx->pc = 0x28420Cu;
    {
        const bool branch_taken_0x28420c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28420c) {
            ctx->pc = 0x284328u;
            goto label_284328;
        }
    }
    ctx->pc = 0x284214u;
label_284214:
    // 0x284214: 0x0  nop
    ctx->pc = 0x284214u;
    // NOP
label_284218:
    // 0x284218: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x284218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28421c:
    // 0x28421c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x28421cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_284220:
    // 0x284220: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x284220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_284224:
    // 0x284224: 0xf2102a  slt         $v0, $a3, $s2
    ctx->pc = 0x284224u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_284228:
    // 0x284228: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_28422c:
    if (ctx->pc == 0x28422Cu) {
        ctx->pc = 0x28422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284228u;
        // 0x28422c: 0xad030004  sw          $v1, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284230u;
        goto label_284230;
    }
    ctx->pc = 0x284228u;
    {
        const bool branch_taken_0x284228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284228u;
        // 0x28422c: 0xad030004  sw          $v1, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284228) {
            ctx->pc = 0x284324u;
            goto label_284324;
        }
    }
    ctx->pc = 0x284230u;
label_284230:
    // 0x284230: 0x2647fffe  addiu       $a3, $s2, -0x2
    ctx->pc = 0x284230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
label_284234:
    // 0x284234: 0x25050008  addiu       $a1, $t0, 0x8
    ctx->pc = 0x284234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_284238:
    // 0x284238: 0x71023  negu        $v0, $a3
    ctx->pc = 0x284238u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
label_28423c:
    // 0x28423c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x28423cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_284240:
    // 0x284240: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_284244:
    if (ctx->pc == 0x284244u) {
        ctx->pc = 0x284244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284240u;
        // 0x284244: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284248u;
        goto label_284248;
    }
    ctx->pc = 0x284240u;
    {
        const bool branch_taken_0x284240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x284244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284240u;
        // 0x284244: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284240) {
            ctx->pc = 0x2842B4u;
            goto label_2842b4;
        }
    }
    ctx->pc = 0x284248u;
label_284248:
    // 0x284248: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x284248u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_28424c:
    // 0x28424c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_284250:
    if (ctx->pc == 0x284250u) {
        ctx->pc = 0x284250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28424Cu;
        // 0x284250: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x284254u;
        goto label_284254;
    }
    ctx->pc = 0x28424Cu;
    {
        const bool branch_taken_0x28424c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28424Cu;
        // 0x284250: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28424c) {
            ctx->pc = 0x284294u;
            goto label_284294;
        }
    }
    ctx->pc = 0x284254u;
label_284254:
    // 0x284254: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_284258:
    if (ctx->pc == 0x284258u) {
        ctx->pc = 0x284258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284254u;
        // 0x284258: 0x8c82fffc  lw          $v0, -0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28425Cu;
        goto label_28425c;
    }
    ctx->pc = 0x284254u;
    {
        const bool branch_taken_0x284254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284254) {
            ctx->pc = 0x284258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284254u;
            // 0x284258: 0x8c82fffc  lw          $v0, -0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28427Cu;
            goto label_28427c;
        }
    }
    ctx->pc = 0x28425Cu;
label_28425c:
    // 0x28425c: 0x8ca2fffc  lw          $v0, -0x4($a1)
    ctx->pc = 0x28425cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
label_284260:
    // 0x284260: 0x2504000c  addiu       $a0, $t0, 0xC
    ctx->pc = 0x284260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_284264:
    // 0x284264: 0x8ca3fff8  lw          $v1, -0x8($a1)
    ctx->pc = 0x284264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
label_284268:
    // 0x284268: 0x2647fffd  addiu       $a3, $s2, -0x3
    ctx->pc = 0x284268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967293));
label_28426c:
    // 0x28426c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28426cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_284270:
    // 0x284270: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x284270u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_284274:
    // 0x284274: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x284274u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
label_284278:
    // 0x284278: 0x8c82fffc  lw          $v0, -0x4($a0)
    ctx->pc = 0x284278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
label_28427c:
    // 0x28427c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x28427cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_284280:
    // 0x284280: 0x8c83fff8  lw          $v1, -0x8($a0)
    ctx->pc = 0x284280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_284284:
    // 0x284284: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x284284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_284288:
    // 0x284288: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x284288u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28428c:
    // 0x28428c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x28428cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_284290:
    // 0x284290: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x284290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_284294:
    // 0x284294: 0x8c82fffc  lw          $v0, -0x4($a0)
    ctx->pc = 0x284294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
label_284298:
    // 0x284298: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x284298u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_28429c:
    // 0x28429c: 0x8c83fff8  lw          $v1, -0x8($a0)
    ctx->pc = 0x28429cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_2842a0:
    // 0x2842a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2842a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2842a4:
    // 0x2842a4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2842a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2842a8:
    // 0x2842a8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2842a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2842ac:
    // 0x2842ac: 0x10e0001d  beqz        $a3, . + 4 + (0x1D << 2)
label_2842b0:
    if (ctx->pc == 0x2842B0u) {
        ctx->pc = 0x2842B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2842ACu;
        // 0x2842b0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2842B4u;
        goto label_2842b4;
    }
    ctx->pc = 0x2842ACu;
    {
        const bool branch_taken_0x2842ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2842B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2842ACu;
        // 0x2842b0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2842ac) {
            ctx->pc = 0x284324u;
            goto label_284324;
        }
    }
    ctx->pc = 0x2842B4u;
label_2842b4:
    // 0x2842b4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2842b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2842b8:
    // 0x2842b8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2842b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2842bc:
    // 0x2842bc: 0x0  nop
    ctx->pc = 0x2842bcu;
    // NOP
label_2842c0:
    // 0x2842c0: 0x8ca2fffc  lw          $v0, -0x4($a1)
    ctx->pc = 0x2842c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
label_2842c4:
    // 0x2842c4: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x2842c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_2842c8:
    // 0x2842c8: 0x8cc3fff8  lw          $v1, -0x8($a2)
    ctx->pc = 0x2842c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_2842cc:
    // 0x2842cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2842ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2842d0:
    // 0x2842d0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2842d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2842d4:
    // 0x2842d4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2842d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2842d8:
    // 0x2842d8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2842d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2842dc:
    // 0x2842dc: 0x8cc3fffc  lw          $v1, -0x4($a2)
    ctx->pc = 0x2842dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_2842e0:
    // 0x2842e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2842e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2842e4:
    // 0x2842e4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2842e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2842e8:
    // 0x2842e8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2842e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2842ec:
    // 0x2842ec: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2842ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2842f0:
    // 0x2842f0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2842f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2842f4:
    // 0x2842f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2842f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2842f8:
    // 0x2842f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2842f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2842fc:
    // 0x2842fc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2842fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_284300:
    // 0x284300: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x284300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_284304:
    // 0x284304: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x284304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_284308:
    // 0x284308: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x284308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_28430c:
    // 0x28430c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28430cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_284310:
    // 0x284310: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x284310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_284314:
    // 0x284314: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x284314u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_284318:
    // 0x284318: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x284318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_28431c:
    // 0x28431c: 0x14e0ffe8  bnez        $a3, . + 4 + (-0x18 << 2)
label_284320:
    if (ctx->pc == 0x284320u) {
        ctx->pc = 0x284320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28431Cu;
        // 0x284320: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284324u;
        goto label_284324;
    }
    ctx->pc = 0x28431Cu;
    {
        const bool branch_taken_0x28431c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x284320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28431Cu;
        // 0x284320: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28431c) {
            ctx->pc = 0x2842C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2842c0;
        }
    }
    ctx->pc = 0x284324u;
label_284324:
    // 0x284324: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x284324u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_284328:
    // 0x284328: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
label_28432c:
    if (ctx->pc == 0x28432Cu) {
        ctx->pc = 0x28432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284328u;
        // 0x28432c: 0x2649fffe  addiu       $t1, $s2, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284330u;
        goto label_284330;
    }
    ctx->pc = 0x284328u;
    {
        const bool branch_taken_0x284328 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x28432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284328u;
        // 0x28432c: 0x2649fffe  addiu       $t1, $s2, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284328) {
            ctx->pc = 0x284348u;
            goto label_284348;
        }
    }
    ctx->pc = 0x284330u;
label_284330:
    // 0x284330: 0x27c30fc8  addiu       $v1, $fp, 0xFC8
    ctx->pc = 0x284330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4040));
label_284334:
    // 0x284334: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x284334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_284338:
    // 0x284338: 0x40f809  jalr        $v0
label_28433c:
    if (ctx->pc == 0x28433Cu) {
        ctx->pc = 0x28433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284338u;
        // 0x28433c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284340u;
        goto label_284340;
    }
    ctx->pc = 0x284338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x284340u);
        ctx->pc = 0x28433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284338u;
        // 0x28433c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284338u, 0x284340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x284340u;
label_284340:
    // 0x284340: 0x100000df  b           . + 4 + (0xDF << 2)
label_284344:
    if (ctx->pc == 0x284344u) {
        ctx->pc = 0x284344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284340u;
        // 0x284344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284348u;
        goto label_284348;
    }
    ctx->pc = 0x284340u;
    {
        const bool branch_taken_0x284340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284340u;
        // 0x284344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284340) {
            ctx->pc = 0x2846C0u;
            goto label_2846c0;
        }
    }
    ctx->pc = 0x284348u;
label_284348:
    // 0x284348: 0x520002e  bltz        $t1, . + 4 + (0x2E << 2)
label_28434c:
    if (ctx->pc == 0x28434Cu) {
        ctx->pc = 0x28434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284348u;
        // 0x28434c: 0x32470001  andi        $a3, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x284350u;
        goto label_284350;
    }
    ctx->pc = 0x284348u;
    {
        const bool branch_taken_0x284348 = (GPR_S64(ctx, 9) < 0);
        ctx->pc = 0x28434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284348u;
        // 0x28434c: 0x32470001  andi        $a3, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284348) {
            ctx->pc = 0x284404u;
            goto label_284404;
        }
    }
    ctx->pc = 0x284350u;
label_284350:
    // 0x284350: 0x91827  nor         $v1, $zero, $t1
    ctx->pc = 0x284350u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 9)));
label_284354:
    // 0x284354: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x284354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_284358:
    // 0x284358: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x284358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_28435c:
    // 0x28435c: 0x30640007  andi        $a0, $v1, 0x7
    ctx->pc = 0x28435cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_284360:
    // 0x284360: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_284364:
    if (ctx->pc == 0x284364u) {
        ctx->pc = 0x284364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284360u;
        // 0x284364: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284368u;
        goto label_284368;
    }
    ctx->pc = 0x284360u;
    {
        const bool branch_taken_0x284360 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x284364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284360u;
        // 0x284364: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284360) {
            ctx->pc = 0x2843C4u;
            goto label_2843c4;
        }
    }
    ctx->pc = 0x284368u;
label_284368:
    // 0x284368: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x284368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
label_28436c:
    // 0x28436c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_284370:
    if (ctx->pc == 0x284370u) {
        ctx->pc = 0x284370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28436Cu;
        // 0x284370: 0x28820004  slti        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x284374u;
        goto label_284374;
    }
    ctx->pc = 0x28436Cu;
    {
        const bool branch_taken_0x28436c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28436Cu;
        // 0x284370: 0x28820004  slti        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28436c) {
            ctx->pc = 0x2843ACu;
            goto label_2843ac;
        }
    }
    ctx->pc = 0x284374u;
label_284374:
    // 0x284374: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_284378:
    if (ctx->pc == 0x284378u) {
        ctx->pc = 0x284378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284374u;
        // 0x284378: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28437Cu;
        goto label_28437c;
    }
    ctx->pc = 0x284374u;
    {
        const bool branch_taken_0x284374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284374u;
        // 0x284378: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284374) {
            ctx->pc = 0x284398u;
            goto label_284398;
        }
    }
    ctx->pc = 0x28437Cu;
label_28437c:
    // 0x28437c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_284380:
    if (ctx->pc == 0x284380u) {
        ctx->pc = 0x284380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28437Cu;
        // 0x284380: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284384u;
        goto label_284384;
    }
    ctx->pc = 0x28437Cu;
    {
        const bool branch_taken_0x28437c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28437Cu;
        // 0x284380: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28437c) {
            ctx->pc = 0x2843C8u;
            goto label_2843c8;
        }
    }
    ctx->pc = 0x284384u;
label_284384:
    // 0x284384: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x284384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_284388:
    // 0x284388: 0x24a3fff8  addiu       $v1, $a1, -0x8
    ctx->pc = 0x284388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
label_28438c:
    // 0x28438c: 0x2649fffc  addiu       $t1, $s2, -0x4
    ctx->pc = 0x28438cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
label_284390:
    // 0x284390: 0x21023  negu        $v0, $v0
    ctx->pc = 0x284390u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_284394:
    // 0x284394: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x284394u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_284398:
    // 0x284398: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x284398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28439c:
    // 0x28439c: 0x2529fffe  addiu       $t1, $t1, -0x2
    ctx->pc = 0x28439cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967294));
label_2843a0:
    // 0x2843a0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2843a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2843a4:
    // 0x2843a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2843a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2843a8:
    // 0x2843a8: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x2843a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_2843ac:
    // 0x2843ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2843acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2843b0:
    // 0x2843b0: 0x2529fffe  addiu       $t1, $t1, -0x2
    ctx->pc = 0x2843b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967294));
label_2843b4:
    // 0x2843b4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2843b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2843b8:
    // 0x2843b8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2843b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2843bc:
    // 0x2843bc: 0x5200011  bltz        $t1, . + 4 + (0x11 << 2)
label_2843c0:
    if (ctx->pc == 0x2843C0u) {
        ctx->pc = 0x2843C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2843BCu;
        // 0x2843c0: 0x2463fff8  addiu       $v1, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2843C4u;
        goto label_2843c4;
    }
    ctx->pc = 0x2843BCu;
    {
        const bool branch_taken_0x2843bc = (GPR_S64(ctx, 9) < 0);
        ctx->pc = 0x2843C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2843BCu;
        // 0x2843c0: 0x2463fff8  addiu       $v1, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2843bc) {
            ctx->pc = 0x284404u;
            goto label_284404;
        }
    }
    ctx->pc = 0x2843C4u;
label_2843c4:
    // 0x2843c4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2843c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2843c8:
    // 0x2843c8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2843c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2843cc:
    // 0x2843cc: 0x2529fff8  addiu       $t1, $t1, -0x8
    ctx->pc = 0x2843ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
label_2843d0:
    // 0x2843d0: 0x8cc4fff8  lw          $a0, -0x8($a2)
    ctx->pc = 0x2843d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_2843d4:
    // 0x2843d4: 0x8cc5fff0  lw          $a1, -0x10($a2)
    ctx->pc = 0x2843d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967280)));
label_2843d8:
    // 0x2843d8: 0x31823  negu        $v1, $v1
    ctx->pc = 0x2843d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_2843dc:
    // 0x2843dc: 0x8cc2ffe8  lw          $v0, -0x18($a2)
    ctx->pc = 0x2843dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967272)));
label_2843e0:
    // 0x2843e0: 0x42023  negu        $a0, $a0
    ctx->pc = 0x2843e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_2843e4:
    // 0x2843e4: 0x52823  negu        $a1, $a1
    ctx->pc = 0x2843e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
label_2843e8:
    // 0x2843e8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2843e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_2843ec:
    // 0x2843ec: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2843ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2843f0:
    // 0x2843f0: 0xacc4fff8  sw          $a0, -0x8($a2)
    ctx->pc = 0x2843f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967288), GPR_U32(ctx, 4));
label_2843f4:
    // 0x2843f4: 0xacc5fff0  sw          $a1, -0x10($a2)
    ctx->pc = 0x2843f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 5));
label_2843f8:
    // 0x2843f8: 0xacc2ffe8  sw          $v0, -0x18($a2)
    ctx->pc = 0x2843f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967272), GPR_U32(ctx, 2));
label_2843fc:
    // 0x2843fc: 0x521fff2  bgez        $t1, . + 4 + (-0xE << 2)
label_284400:
    if (ctx->pc == 0x284400u) {
        ctx->pc = 0x284400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2843FCu;
        // 0x284400: 0x24c6ffe0  addiu       $a2, $a2, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284404u;
        goto label_284404;
    }
    ctx->pc = 0x2843FCu;
    {
        const bool branch_taken_0x2843fc = (GPR_S64(ctx, 9) >= 0);
        ctx->pc = 0x284400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2843FCu;
        // 0x284400: 0x24c6ffe0  addiu       $a2, $a2, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2843fc) {
            ctx->pc = 0x2843C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2843c8;
        }
    }
    ctx->pc = 0x284404u;
label_284404:
    // 0x284404: 0x240bfffe  addiu       $t3, $zero, -0x2
    ctx->pc = 0x284404u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_284408:
    // 0x284408: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x284408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28440c:
    // 0x28440c: 0x47580b  movn        $t3, $v0, $a3
    ctx->pc = 0x28440cu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2));
label_284410:
    // 0x284410: 0x1a400063  blez        $s2, . + 4 + (0x63 << 2)
label_284414:
    if (ctx->pc == 0x284414u) {
        ctx->pc = 0x284414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284410u;
        // 0x284414: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284418u;
        goto label_284418;
    }
    ctx->pc = 0x284410u;
    {
        const bool branch_taken_0x284410 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x284414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284410u;
        // 0x284414: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284410) {
            ctx->pc = 0x2845A0u;
            goto label_2845a0;
        }
    }
    ctx->pc = 0x284418u;
label_284418:
    // 0x284418: 0x44971800  mtc1        $s7, $f3
    ctx->pc = 0x284418u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_28441c:
    // 0x28441c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x28441cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_284420:
    // 0x284420: 0x25230001  addiu       $v1, $t1, 0x1
    ctx->pc = 0x284420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_284424:
    // 0x284424: 0x0  nop
    ctx->pc = 0x284424u;
    // NOP
label_284428:
    // 0x284428: 0x2492018  mult        $a0, $s2, $t1
    ctx->pc = 0x284428u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_28442c:
    // 0x28442c: 0x2431023  subu        $v0, $s2, $v1
    ctx->pc = 0x28442cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_284430:
    // 0x284430: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x284430u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_284434:
    // 0x284434: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x284434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_284438:
    // 0x284438: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x284438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_28443c:
    // 0x28443c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28443cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_284440:
    // 0x284440: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x284440u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_284444:
    // 0x284444: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x284444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_284448:
    // 0x284448: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x284448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28444c:
    // 0x28444c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28444cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_284450:
    // 0x284450: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x284450u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[3]);
label_284454:
    // 0x284454: 0x1920004e  blez        $t1, . + 4 + (0x4E << 2)
label_284458:
    if (ctx->pc == 0x284458u) {
        ctx->pc = 0x284458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284454u;
        // 0x284458: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28445Cu;
        goto label_28445c;
    }
    ctx->pc = 0x284454u;
    {
        const bool branch_taken_0x284454 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x284458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284454u;
        // 0x284458: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x284454) {
            ctx->pc = 0x284590u;
            goto label_284590;
        }
    }
    ctx->pc = 0x28445Cu;
label_28445c:
    // 0x28445c: 0x91023  negu        $v0, $t1
    ctx->pc = 0x28445cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
label_284460:
    // 0x284460: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x284460u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_284464:
    // 0x284464: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x284464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_284468:
    // 0x284468: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x284468u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
label_28446c:
    // 0x28446c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x28446cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_284470:
    // 0x284470: 0x26660004  addiu       $a2, $s3, 0x4
    ctx->pc = 0x284470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_284474:
    // 0x284474: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_284478:
    if (ctx->pc == 0x284478u) {
        ctx->pc = 0x284478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284474u;
        // 0x284478: 0x24880004  addiu       $t0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28447Cu;
        goto label_28447c;
    }
    ctx->pc = 0x284474u;
    {
        const bool branch_taken_0x284474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x284478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284474u;
        // 0x284478: 0x24880004  addiu       $t0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284474) {
            ctx->pc = 0x28450Cu;
            goto label_28450c;
        }
    }
    ctx->pc = 0x28447Cu;
label_28447c:
    // 0x28447c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x28447cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_284480:
    // 0x284480: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_284484:
    if (ctx->pc == 0x284484u) {
        ctx->pc = 0x284484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284480u;
        // 0x284484: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x284488u;
        goto label_284488;
    }
    ctx->pc = 0x284480u;
    {
        const bool branch_taken_0x284480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284480u;
        // 0x284484: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284480) {
            ctx->pc = 0x2844E0u;
            goto label_2844e0;
        }
    }
    ctx->pc = 0x284488u;
label_284488:
    // 0x284488: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_28448c:
    if (ctx->pc == 0x28448Cu) {
        ctx->pc = 0x28448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284488u;
        // 0x28448c: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284490u;
        goto label_284490;
    }
    ctx->pc = 0x284488u;
    {
        const bool branch_taken_0x284488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284488) {
            ctx->pc = 0x28448Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284488u;
            // 0x28448c: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2844BCu;
            goto label_2844bc;
        }
    }
    ctx->pc = 0x284490u;
label_284490:
    // 0x284490: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x284490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_284494:
    // 0x284494: 0x24880008  addiu       $t0, $a0, 0x8
    ctx->pc = 0x284494u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_284498:
    // 0x284498: 0x2527ffff  addiu       $a3, $t1, -0x1
    ctx->pc = 0x284498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_28449c:
    // 0x28449c: 0x26660008  addiu       $a2, $s3, 0x8
    ctx->pc = 0x28449cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_2844a0:
    // 0x2844a0: 0xaa1018  mult        $v0, $a1, $t2
    ctx->pc = 0x2844a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2844a4:
    // 0x2844a4: 0x4b1818  mult        $v1, $v0, $t3
    ctx->pc = 0x2844a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2844a8:
    // 0x2844a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2844a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2844ac:
    // 0x2844ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2844acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2844b0:
    // 0x2844b0: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x2844b0u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
label_2844b4:
    // 0x2844b4: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2844b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_2844b8:
    // 0x2844b8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2844b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2844bc:
    // 0x2844bc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2844bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_2844c0:
    // 0x2844c0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2844c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_2844c4:
    // 0x2844c4: 0xaa1018  mult        $v0, $a1, $t2
    ctx->pc = 0x2844c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2844c8:
    // 0x2844c8: 0x4b1818  mult        $v1, $v0, $t3
    ctx->pc = 0x2844c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2844cc:
    // 0x2844cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2844ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2844d0:
    // 0x2844d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2844d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2844d4:
    // 0x2844d4: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x2844d4u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
label_2844d8:
    // 0x2844d8: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x2844d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_2844dc:
    // 0x2844dc: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2844dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_2844e0:
    // 0x2844e0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2844e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2844e4:
    // 0x2844e4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2844e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_2844e8:
    // 0x2844e8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2844e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_2844ec:
    // 0x2844ec: 0xaa1018  mult        $v0, $a1, $t2
    ctx->pc = 0x2844ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2844f0:
    // 0x2844f0: 0x4b1818  mult        $v1, $v0, $t3
    ctx->pc = 0x2844f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2844f4:
    // 0x2844f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2844f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2844f8:
    // 0x2844f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2844f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2844fc:
    // 0x2844fc: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x2844fcu;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
label_284500:
    // 0x284500: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x284500u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_284504:
    // 0x284504: 0x10e00022  beqz        $a3, . + 4 + (0x22 << 2)
label_284508:
    if (ctx->pc == 0x284508u) {
        ctx->pc = 0x284508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284504u;
        // 0x284508: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28450Cu;
        goto label_28450c;
    }
    ctx->pc = 0x284504u;
    {
        const bool branch_taken_0x284504 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x284508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284504u;
        // 0x284508: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284504) {
            ctx->pc = 0x284590u;
            goto label_284590;
        }
    }
    ctx->pc = 0x28450Cu;
label_28450c:
    // 0x28450c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x28450cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_284510:
    // 0x284510: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x284510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_284514:
    // 0x284514: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x284514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_284518:
    // 0x284518: 0xaa1018  mult        $v0, $a1, $t2
    ctx->pc = 0x284518u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_28451c:
    // 0x28451c: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x28451cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_284520:
    // 0x284520: 0x4b1818  mult        $v1, $v0, $t3
    ctx->pc = 0x284520u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_284524:
    // 0x284524: 0xaa1018  mult        $v0, $a1, $t2
    ctx->pc = 0x284524u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_284528:
    // 0x284528: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x284528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_28452c:
    // 0x28452c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28452cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_284530:
    // 0x284530: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x284530u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_284534:
    // 0x284534: 0x4b1818  mult        $v1, $v0, $t3
    ctx->pc = 0x284534u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_284538:
    // 0x284538: 0xaa1018  mult        $v0, $a1, $t2
    ctx->pc = 0x284538u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_28453c:
    // 0x28453c: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x28453cu;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
label_284540:
    // 0x284540: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x284540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_284544:
    // 0x284544: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x284544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_284548:
    // 0x284548: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x284548u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28454c:
    // 0x28454c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28454cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_284550:
    // 0x284550: 0x4b1818  mult        $v1, $v0, $t3
    ctx->pc = 0x284550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_284554:
    // 0x284554: 0xaa1018  mult        $v0, $a1, $t2
    ctx->pc = 0x284554u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_284558:
    // 0x284558: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x284558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_28455c:
    // 0x28455c: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x28455cu;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
label_284560:
    // 0x284560: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x284560u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_284564:
    // 0x284564: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x284564u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_284568:
    // 0x284568: 0x4b1818  mult        $v1, $v0, $t3
    ctx->pc = 0x284568u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_28456c:
    // 0x28456c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x28456cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_284570:
    // 0x284570: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x284570u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
label_284574:
    // 0x284574: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x284574u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_284578:
    // 0x284578: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x284578u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28457c:
    // 0x28457c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x28457cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_284580:
    // 0x284580: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x284580u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
label_284584:
    // 0x284584: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x284584u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_284588:
    // 0x284588: 0x14e0ffe1  bnez        $a3, . + 4 + (-0x1F << 2)
label_28458c:
    if (ctx->pc == 0x28458Cu) {
        ctx->pc = 0x28458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284588u;
        // 0x28458c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284590u;
        goto label_284590;
    }
    ctx->pc = 0x284588u;
    {
        const bool branch_taken_0x284588 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x28458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284588u;
        // 0x28458c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284588) {
            ctx->pc = 0x284510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_284510;
        }
    }
    ctx->pc = 0x284590u;
label_284590:
    // 0x284590: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x284590u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_284594:
    // 0x284594: 0x132102a  slt         $v0, $t1, $s2
    ctx->pc = 0x284594u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_284598:
    // 0x284598: 0x1440ffa3  bnez        $v0, . + 4 + (-0x5D << 2)
label_28459c:
    if (ctx->pc == 0x28459Cu) {
        ctx->pc = 0x28459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284598u;
        // 0x28459c: 0x25230001  addiu       $v1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2845A0u;
        goto label_2845a0;
    }
    ctx->pc = 0x284598u;
    {
        const bool branch_taken_0x284598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284598u;
        // 0x28459c: 0x25230001  addiu       $v1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284598) {
            ctx->pc = 0x284428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_284428;
        }
    }
    ctx->pc = 0x2845A0u;
label_2845a0:
    // 0x2845a0: 0x2521018  mult        $v0, $s2, $s2
    ctx->pc = 0x2845a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2845a4:
    // 0x2845a4: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x2845a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2845a8:
    // 0x2845a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2845a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2845ac:
    // 0x2845ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2845acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2845b0:
    // 0x2845b0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2845b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2845b4:
    // 0x2845b4: 0x1a40003d  blez        $s2, . + 4 + (0x3D << 2)
label_2845b8:
    if (ctx->pc == 0x2845B8u) {
        ctx->pc = 0x2845B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2845B4u;
        // 0x2845b8: 0xe440fffc  swc1        $f0, -0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2845BCu;
        goto label_2845bc;
    }
    ctx->pc = 0x2845B4u;
    {
        const bool branch_taken_0x2845b4 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x2845B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2845B4u;
        // 0x2845b8: 0xe440fffc  swc1        $f0, -0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2845b4) {
            ctx->pc = 0x2846ACu;
            goto label_2846ac;
        }
    }
    ctx->pc = 0x2845BCu;
label_2845bc:
    // 0x2845bc: 0x165880  sll         $t3, $s6, 2
    ctx->pc = 0x2845bcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_2845c0:
    // 0x2845c0: 0x165027  nor         $t2, $zero, $s6
    ctx->pc = 0x2845c0u;
    SET_GPR_U64(ctx, 10, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 22)));
label_2845c4:
    // 0x2845c4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2845c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2845c8:
    // 0x2845c8: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x2845c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_2845cc:
    // 0x2845cc: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_2845d0:
    if (ctx->pc == 0x2845D0u) {
        ctx->pc = 0x2845D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2845CCu;
        // 0x2845d0: 0x252c0001  addiu       $t4, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2845D4u;
        goto label_2845d4;
    }
    ctx->pc = 0x2845CCu;
    {
        const bool branch_taken_0x2845cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2845D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2845CCu;
        // 0x2845d0: 0x252c0001  addiu       $t4, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2845cc) {
            ctx->pc = 0x28469Cu;
            goto label_28469c;
        }
    }
    ctx->pc = 0x2845D4u;
label_2845d4:
    // 0x2845d4: 0x2492023  subu        $a0, $s2, $t1
    ctx->pc = 0x2845d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
label_2845d8:
    // 0x2845d8: 0x1321818  mult        $v1, $t1, $s2
    ctx->pc = 0x2845d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2845dc:
    // 0x2845dc: 0x2441018  mult        $v0, $s2, $a0
    ctx->pc = 0x2845dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2845e0:
    // 0x2845e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2845e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2845e4:
    // 0x2845e4: 0x4a2021  addu        $a0, $v0, $t2
    ctx->pc = 0x2845e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_2845e8:
    // 0x2845e8: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x2845e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_2845ec:
    // 0x2845ec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2845ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2845f0:
    // 0x2845f0: 0x1271023  subu        $v0, $t1, $a3
    ctx->pc = 0x2845f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_2845f4:
    // 0x2845f4: 0x1633021  addu        $a2, $t3, $v1
    ctx->pc = 0x2845f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_2845f8:
    // 0x2845f8: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x2845f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_2845fc:
    // 0x2845fc: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x2845fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_284600:
    // 0x284600: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x284600u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_284604:
    // 0x284604: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
label_284608:
    if (ctx->pc == 0x284608u) {
        ctx->pc = 0x284608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284604u;
        // 0x284608: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28460Cu;
        goto label_28460c;
    }
    ctx->pc = 0x284604u;
    {
        const bool branch_taken_0x284604 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x284608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284604u;
        // 0x284608: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284604) {
            ctx->pc = 0x284664u;
            goto label_284664;
        }
    }
    ctx->pc = 0x28460Cu;
label_28460c:
    // 0x28460c: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x28460cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_284610:
    // 0x284610: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_284614:
    if (ctx->pc == 0x284614u) {
        ctx->pc = 0x284614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284610u;
        // 0x284614: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x284618u;
        goto label_284618;
    }
    ctx->pc = 0x284610u;
    {
        const bool branch_taken_0x284610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284610u;
        // 0x284614: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284610) {
            ctx->pc = 0x284648u;
            goto label_284648;
        }
    }
    ctx->pc = 0x284618u;
label_284618:
    // 0x284618: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_28461c:
    if (ctx->pc == 0x28461Cu) {
        ctx->pc = 0x28461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284618u;
        // 0x28461c: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x284620u;
        goto label_284620;
    }
    ctx->pc = 0x284618u;
    {
        const bool branch_taken_0x284618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284618) {
            ctx->pc = 0x28461Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284618u;
            // 0x28461c: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x284638u;
            goto label_284638;
        }
    }
    ctx->pc = 0x284620u;
label_284620:
    // 0x284620: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x284620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_284624:
    // 0x284624: 0x24c3fffc  addiu       $v1, $a2, -0x4
    ctx->pc = 0x284624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_284628:
    // 0x284628: 0x25040004  addiu       $a0, $t0, 0x4
    ctx->pc = 0x284628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_28462c:
    // 0x28462c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x28462cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_284630:
    // 0x284630: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x284630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_284634:
    // 0x284634: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x284634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_284638:
    // 0x284638: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x284638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_28463c:
    // 0x28463c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x28463cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_284640:
    // 0x284640: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x284640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_284644:
    // 0x284644: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x284644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_284648:
    // 0x284648: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x284648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28464c:
    // 0x28464c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x28464cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_284650:
    // 0x284650: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x284650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_284654:
    // 0x284654: 0x127282a  slt         $a1, $t1, $a3
    ctx->pc = 0x284654u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_284658:
    // 0x284658: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x284658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_28465c:
    // 0x28465c: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
label_284660:
    if (ctx->pc == 0x284660u) {
        ctx->pc = 0x284660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28465Cu;
        // 0x284660: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284664u;
        goto label_284664;
    }
    ctx->pc = 0x28465Cu;
    {
        const bool branch_taken_0x28465c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x284660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28465Cu;
        // 0x284660: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28465c) {
            ctx->pc = 0x28469Cu;
            goto label_28469c;
        }
    }
    ctx->pc = 0x284664u;
label_284664:
    // 0x284664: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x284664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_284668:
    // 0x284668: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x284668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28466c:
    // 0x28466c: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x28466cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_284670:
    // 0x284670: 0x127282a  slt         $a1, $t1, $a3
    ctx->pc = 0x284670u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_284674:
    // 0x284674: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x284674u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_284678:
    // 0x284678: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x284678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28467c:
    // 0x28467c: 0xe440fffc  swc1        $f0, -0x4($v0)
    ctx->pc = 0x28467cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
label_284680:
    // 0x284680: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x284680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_284684:
    // 0x284684: 0xe441fff8  swc1        $f1, -0x8($v0)
    ctx->pc = 0x284684u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
label_284688:
    // 0x284688: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x284688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28468c:
    // 0x28468c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x28468cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_284690:
    // 0x284690: 0xe440fff4  swc1        $f0, -0xC($v0)
    ctx->pc = 0x284690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), bits); }
label_284694:
    // 0x284694: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
label_284698:
    if (ctx->pc == 0x284698u) {
        ctx->pc = 0x284698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284694u;
        // 0x284698: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28469Cu;
        goto label_28469c;
    }
    ctx->pc = 0x284694u;
    {
        const bool branch_taken_0x284694 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x284698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284694u;
        // 0x284698: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284694) {
            ctx->pc = 0x284668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_284668;
        }
    }
    ctx->pc = 0x28469Cu;
label_28469c:
    // 0x28469c: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x28469cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_2846a0:
    // 0x2846a0: 0x132102a  slt         $v0, $t1, $s2
    ctx->pc = 0x2846a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2846a4:
    // 0x2846a4: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
label_2846a8:
    if (ctx->pc == 0x2846A8u) {
        ctx->pc = 0x2846A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2846A4u;
        // 0x2846a8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2846ACu;
        goto label_2846ac;
    }
    ctx->pc = 0x2846A4u;
    {
        const bool branch_taken_0x2846a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2846A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2846A4u;
        // 0x2846a8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2846a4) {
            ctx->pc = 0x2845C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2845c8;
        }
    }
    ctx->pc = 0x2846ACu;
label_2846ac:
    // 0x2846ac: 0x27c30fc8  addiu       $v1, $fp, 0xFC8
    ctx->pc = 0x2846acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4040));
label_2846b0:
    // 0x2846b0: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x2846b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_2846b4:
    // 0x2846b4: 0x40f809  jalr        $v0
label_2846b8:
    if (ctx->pc == 0x2846B8u) {
        ctx->pc = 0x2846B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2846B4u;
        // 0x2846b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2846BCu;
        goto label_2846bc;
    }
    ctx->pc = 0x2846B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2846BCu);
        ctx->pc = 0x2846B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2846B4u;
        // 0x2846b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2846B4u, 0x2846BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2846BCu;
label_2846bc:
    // 0x2846bc: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2846bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2846c0:
    // 0x2846c0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2846c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2846c4:
    // 0x2846c4: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2846c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2846c8:
    // 0x2846c8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2846c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2846cc:
    // 0x2846cc: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2846ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2846d0:
    // 0x2846d0: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x2846d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2846d4:
    // 0x2846d4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2846d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2846d8:
    // 0x2846d8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2846d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2846dc:
    // 0x2846dc: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x2846dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2846e0:
    // 0x2846e0: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x2846e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2846e4:
    // 0x2846e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2846e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2846e8:
    // 0x2846e8: 0x3e00008  jr          $ra
label_2846ec:
    if (ctx->pc == 0x2846ECu) {
        ctx->pc = 0x2846ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2846E8u;
        // 0x2846ec: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2846F0u;
        goto label_fallthrough_0x2846e8;
    }
    ctx->pc = 0x2846E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2846ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2846E8u;
        // 0x2846ec: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2846E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2846e8:
    ctx->pc = 0x2846F0u;
}
