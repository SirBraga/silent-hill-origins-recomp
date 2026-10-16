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

// Function: sub_00278F88
// Address: 0x278f88 - 0x279968
void sub_00278F88_0x278f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278F88_0x278f88");
#endif

    switch (ctx->pc) {
        case 0x278f88u: goto label_278f88;
        case 0x278f8cu: goto label_278f8c;
        case 0x278f90u: goto label_278f90;
        case 0x278f94u: goto label_278f94;
        case 0x278f98u: goto label_278f98;
        case 0x278f9cu: goto label_278f9c;
        case 0x278fa0u: goto label_278fa0;
        case 0x278fa4u: goto label_278fa4;
        case 0x278fa8u: goto label_278fa8;
        case 0x278facu: goto label_278fac;
        case 0x278fb0u: goto label_278fb0;
        case 0x278fb4u: goto label_278fb4;
        case 0x278fb8u: goto label_278fb8;
        case 0x278fbcu: goto label_278fbc;
        case 0x278fc0u: goto label_278fc0;
        case 0x278fc4u: goto label_278fc4;
        case 0x278fc8u: goto label_278fc8;
        case 0x278fccu: goto label_278fcc;
        case 0x278fd0u: goto label_278fd0;
        case 0x278fd4u: goto label_278fd4;
        case 0x278fd8u: goto label_278fd8;
        case 0x278fdcu: goto label_278fdc;
        case 0x278fe0u: goto label_278fe0;
        case 0x278fe4u: goto label_278fe4;
        case 0x278fe8u: goto label_278fe8;
        case 0x278fecu: goto label_278fec;
        case 0x278ff0u: goto label_278ff0;
        case 0x278ff4u: goto label_278ff4;
        case 0x278ff8u: goto label_278ff8;
        case 0x278ffcu: goto label_278ffc;
        case 0x279000u: goto label_279000;
        case 0x279004u: goto label_279004;
        case 0x279008u: goto label_279008;
        case 0x27900cu: goto label_27900c;
        case 0x279010u: goto label_279010;
        case 0x279014u: goto label_279014;
        case 0x279018u: goto label_279018;
        case 0x27901cu: goto label_27901c;
        case 0x279020u: goto label_279020;
        case 0x279024u: goto label_279024;
        case 0x279028u: goto label_279028;
        case 0x27902cu: goto label_27902c;
        case 0x279030u: goto label_279030;
        case 0x279034u: goto label_279034;
        case 0x279038u: goto label_279038;
        case 0x27903cu: goto label_27903c;
        case 0x279040u: goto label_279040;
        case 0x279044u: goto label_279044;
        case 0x279048u: goto label_279048;
        case 0x27904cu: goto label_27904c;
        case 0x279050u: goto label_279050;
        case 0x279054u: goto label_279054;
        case 0x279058u: goto label_279058;
        case 0x27905cu: goto label_27905c;
        case 0x279060u: goto label_279060;
        case 0x279064u: goto label_279064;
        case 0x279068u: goto label_279068;
        case 0x27906cu: goto label_27906c;
        case 0x279070u: goto label_279070;
        case 0x279074u: goto label_279074;
        case 0x279078u: goto label_279078;
        case 0x27907cu: goto label_27907c;
        case 0x279080u: goto label_279080;
        case 0x279084u: goto label_279084;
        case 0x279088u: goto label_279088;
        case 0x27908cu: goto label_27908c;
        case 0x279090u: goto label_279090;
        case 0x279094u: goto label_279094;
        case 0x279098u: goto label_279098;
        case 0x27909cu: goto label_27909c;
        case 0x2790a0u: goto label_2790a0;
        case 0x2790a4u: goto label_2790a4;
        case 0x2790a8u: goto label_2790a8;
        case 0x2790acu: goto label_2790ac;
        case 0x2790b0u: goto label_2790b0;
        case 0x2790b4u: goto label_2790b4;
        case 0x2790b8u: goto label_2790b8;
        case 0x2790bcu: goto label_2790bc;
        case 0x2790c0u: goto label_2790c0;
        case 0x2790c4u: goto label_2790c4;
        case 0x2790c8u: goto label_2790c8;
        case 0x2790ccu: goto label_2790cc;
        case 0x2790d0u: goto label_2790d0;
        case 0x2790d4u: goto label_2790d4;
        case 0x2790d8u: goto label_2790d8;
        case 0x2790dcu: goto label_2790dc;
        case 0x2790e0u: goto label_2790e0;
        case 0x2790e4u: goto label_2790e4;
        case 0x2790e8u: goto label_2790e8;
        case 0x2790ecu: goto label_2790ec;
        case 0x2790f0u: goto label_2790f0;
        case 0x2790f4u: goto label_2790f4;
        case 0x2790f8u: goto label_2790f8;
        case 0x2790fcu: goto label_2790fc;
        case 0x279100u: goto label_279100;
        case 0x279104u: goto label_279104;
        case 0x279108u: goto label_279108;
        case 0x27910cu: goto label_27910c;
        case 0x279110u: goto label_279110;
        case 0x279114u: goto label_279114;
        case 0x279118u: goto label_279118;
        case 0x27911cu: goto label_27911c;
        case 0x279120u: goto label_279120;
        case 0x279124u: goto label_279124;
        case 0x279128u: goto label_279128;
        case 0x27912cu: goto label_27912c;
        case 0x279130u: goto label_279130;
        case 0x279134u: goto label_279134;
        case 0x279138u: goto label_279138;
        case 0x27913cu: goto label_27913c;
        case 0x279140u: goto label_279140;
        case 0x279144u: goto label_279144;
        case 0x279148u: goto label_279148;
        case 0x27914cu: goto label_27914c;
        case 0x279150u: goto label_279150;
        case 0x279154u: goto label_279154;
        case 0x279158u: goto label_279158;
        case 0x27915cu: goto label_27915c;
        case 0x279160u: goto label_279160;
        case 0x279164u: goto label_279164;
        case 0x279168u: goto label_279168;
        case 0x27916cu: goto label_27916c;
        case 0x279170u: goto label_279170;
        case 0x279174u: goto label_279174;
        case 0x279178u: goto label_279178;
        case 0x27917cu: goto label_27917c;
        case 0x279180u: goto label_279180;
        case 0x279184u: goto label_279184;
        case 0x279188u: goto label_279188;
        case 0x27918cu: goto label_27918c;
        case 0x279190u: goto label_279190;
        case 0x279194u: goto label_279194;
        case 0x279198u: goto label_279198;
        case 0x27919cu: goto label_27919c;
        case 0x2791a0u: goto label_2791a0;
        case 0x2791a4u: goto label_2791a4;
        case 0x2791a8u: goto label_2791a8;
        case 0x2791acu: goto label_2791ac;
        case 0x2791b0u: goto label_2791b0;
        case 0x2791b4u: goto label_2791b4;
        case 0x2791b8u: goto label_2791b8;
        case 0x2791bcu: goto label_2791bc;
        case 0x2791c0u: goto label_2791c0;
        case 0x2791c4u: goto label_2791c4;
        case 0x2791c8u: goto label_2791c8;
        case 0x2791ccu: goto label_2791cc;
        case 0x2791d0u: goto label_2791d0;
        case 0x2791d4u: goto label_2791d4;
        case 0x2791d8u: goto label_2791d8;
        case 0x2791dcu: goto label_2791dc;
        case 0x2791e0u: goto label_2791e0;
        case 0x2791e4u: goto label_2791e4;
        case 0x2791e8u: goto label_2791e8;
        case 0x2791ecu: goto label_2791ec;
        case 0x2791f0u: goto label_2791f0;
        case 0x2791f4u: goto label_2791f4;
        case 0x2791f8u: goto label_2791f8;
        case 0x2791fcu: goto label_2791fc;
        case 0x279200u: goto label_279200;
        case 0x279204u: goto label_279204;
        case 0x279208u: goto label_279208;
        case 0x27920cu: goto label_27920c;
        case 0x279210u: goto label_279210;
        case 0x279214u: goto label_279214;
        case 0x279218u: goto label_279218;
        case 0x27921cu: goto label_27921c;
        case 0x279220u: goto label_279220;
        case 0x279224u: goto label_279224;
        case 0x279228u: goto label_279228;
        case 0x27922cu: goto label_27922c;
        case 0x279230u: goto label_279230;
        case 0x279234u: goto label_279234;
        case 0x279238u: goto label_279238;
        case 0x27923cu: goto label_27923c;
        case 0x279240u: goto label_279240;
        case 0x279244u: goto label_279244;
        case 0x279248u: goto label_279248;
        case 0x27924cu: goto label_27924c;
        case 0x279250u: goto label_279250;
        case 0x279254u: goto label_279254;
        case 0x279258u: goto label_279258;
        case 0x27925cu: goto label_27925c;
        case 0x279260u: goto label_279260;
        case 0x279264u: goto label_279264;
        case 0x279268u: goto label_279268;
        case 0x27926cu: goto label_27926c;
        case 0x279270u: goto label_279270;
        case 0x279274u: goto label_279274;
        case 0x279278u: goto label_279278;
        case 0x27927cu: goto label_27927c;
        case 0x279280u: goto label_279280;
        case 0x279284u: goto label_279284;
        case 0x279288u: goto label_279288;
        case 0x27928cu: goto label_27928c;
        case 0x279290u: goto label_279290;
        case 0x279294u: goto label_279294;
        case 0x279298u: goto label_279298;
        case 0x27929cu: goto label_27929c;
        case 0x2792a0u: goto label_2792a0;
        case 0x2792a4u: goto label_2792a4;
        case 0x2792a8u: goto label_2792a8;
        case 0x2792acu: goto label_2792ac;
        case 0x2792b0u: goto label_2792b0;
        case 0x2792b4u: goto label_2792b4;
        case 0x2792b8u: goto label_2792b8;
        case 0x2792bcu: goto label_2792bc;
        case 0x2792c0u: goto label_2792c0;
        case 0x2792c4u: goto label_2792c4;
        case 0x2792c8u: goto label_2792c8;
        case 0x2792ccu: goto label_2792cc;
        case 0x2792d0u: goto label_2792d0;
        case 0x2792d4u: goto label_2792d4;
        case 0x2792d8u: goto label_2792d8;
        case 0x2792dcu: goto label_2792dc;
        case 0x2792e0u: goto label_2792e0;
        case 0x2792e4u: goto label_2792e4;
        case 0x2792e8u: goto label_2792e8;
        case 0x2792ecu: goto label_2792ec;
        case 0x2792f0u: goto label_2792f0;
        case 0x2792f4u: goto label_2792f4;
        case 0x2792f8u: goto label_2792f8;
        case 0x2792fcu: goto label_2792fc;
        case 0x279300u: goto label_279300;
        case 0x279304u: goto label_279304;
        case 0x279308u: goto label_279308;
        case 0x27930cu: goto label_27930c;
        case 0x279310u: goto label_279310;
        case 0x279314u: goto label_279314;
        case 0x279318u: goto label_279318;
        case 0x27931cu: goto label_27931c;
        case 0x279320u: goto label_279320;
        case 0x279324u: goto label_279324;
        case 0x279328u: goto label_279328;
        case 0x27932cu: goto label_27932c;
        case 0x279330u: goto label_279330;
        case 0x279334u: goto label_279334;
        case 0x279338u: goto label_279338;
        case 0x27933cu: goto label_27933c;
        case 0x279340u: goto label_279340;
        case 0x279344u: goto label_279344;
        case 0x279348u: goto label_279348;
        case 0x27934cu: goto label_27934c;
        case 0x279350u: goto label_279350;
        case 0x279354u: goto label_279354;
        case 0x279358u: goto label_279358;
        case 0x27935cu: goto label_27935c;
        case 0x279360u: goto label_279360;
        case 0x279364u: goto label_279364;
        case 0x279368u: goto label_279368;
        case 0x27936cu: goto label_27936c;
        case 0x279370u: goto label_279370;
        case 0x279374u: goto label_279374;
        case 0x279378u: goto label_279378;
        case 0x27937cu: goto label_27937c;
        case 0x279380u: goto label_279380;
        case 0x279384u: goto label_279384;
        case 0x279388u: goto label_279388;
        case 0x27938cu: goto label_27938c;
        case 0x279390u: goto label_279390;
        case 0x279394u: goto label_279394;
        case 0x279398u: goto label_279398;
        case 0x27939cu: goto label_27939c;
        case 0x2793a0u: goto label_2793a0;
        case 0x2793a4u: goto label_2793a4;
        case 0x2793a8u: goto label_2793a8;
        case 0x2793acu: goto label_2793ac;
        case 0x2793b0u: goto label_2793b0;
        case 0x2793b4u: goto label_2793b4;
        case 0x2793b8u: goto label_2793b8;
        case 0x2793bcu: goto label_2793bc;
        case 0x2793c0u: goto label_2793c0;
        case 0x2793c4u: goto label_2793c4;
        case 0x2793c8u: goto label_2793c8;
        case 0x2793ccu: goto label_2793cc;
        case 0x2793d0u: goto label_2793d0;
        case 0x2793d4u: goto label_2793d4;
        case 0x2793d8u: goto label_2793d8;
        case 0x2793dcu: goto label_2793dc;
        case 0x2793e0u: goto label_2793e0;
        case 0x2793e4u: goto label_2793e4;
        case 0x2793e8u: goto label_2793e8;
        case 0x2793ecu: goto label_2793ec;
        case 0x2793f0u: goto label_2793f0;
        case 0x2793f4u: goto label_2793f4;
        case 0x2793f8u: goto label_2793f8;
        case 0x2793fcu: goto label_2793fc;
        case 0x279400u: goto label_279400;
        case 0x279404u: goto label_279404;
        case 0x279408u: goto label_279408;
        case 0x27940cu: goto label_27940c;
        case 0x279410u: goto label_279410;
        case 0x279414u: goto label_279414;
        case 0x279418u: goto label_279418;
        case 0x27941cu: goto label_27941c;
        case 0x279420u: goto label_279420;
        case 0x279424u: goto label_279424;
        case 0x279428u: goto label_279428;
        case 0x27942cu: goto label_27942c;
        case 0x279430u: goto label_279430;
        case 0x279434u: goto label_279434;
        case 0x279438u: goto label_279438;
        case 0x27943cu: goto label_27943c;
        case 0x279440u: goto label_279440;
        case 0x279444u: goto label_279444;
        case 0x279448u: goto label_279448;
        case 0x27944cu: goto label_27944c;
        case 0x279450u: goto label_279450;
        case 0x279454u: goto label_279454;
        case 0x279458u: goto label_279458;
        case 0x27945cu: goto label_27945c;
        case 0x279460u: goto label_279460;
        case 0x279464u: goto label_279464;
        case 0x279468u: goto label_279468;
        case 0x27946cu: goto label_27946c;
        case 0x279470u: goto label_279470;
        case 0x279474u: goto label_279474;
        case 0x279478u: goto label_279478;
        case 0x27947cu: goto label_27947c;
        case 0x279480u: goto label_279480;
        case 0x279484u: goto label_279484;
        case 0x279488u: goto label_279488;
        case 0x27948cu: goto label_27948c;
        case 0x279490u: goto label_279490;
        case 0x279494u: goto label_279494;
        case 0x279498u: goto label_279498;
        case 0x27949cu: goto label_27949c;
        case 0x2794a0u: goto label_2794a0;
        case 0x2794a4u: goto label_2794a4;
        case 0x2794a8u: goto label_2794a8;
        case 0x2794acu: goto label_2794ac;
        case 0x2794b0u: goto label_2794b0;
        case 0x2794b4u: goto label_2794b4;
        case 0x2794b8u: goto label_2794b8;
        case 0x2794bcu: goto label_2794bc;
        case 0x2794c0u: goto label_2794c0;
        case 0x2794c4u: goto label_2794c4;
        case 0x2794c8u: goto label_2794c8;
        case 0x2794ccu: goto label_2794cc;
        case 0x2794d0u: goto label_2794d0;
        case 0x2794d4u: goto label_2794d4;
        case 0x2794d8u: goto label_2794d8;
        case 0x2794dcu: goto label_2794dc;
        case 0x2794e0u: goto label_2794e0;
        case 0x2794e4u: goto label_2794e4;
        case 0x2794e8u: goto label_2794e8;
        case 0x2794ecu: goto label_2794ec;
        case 0x2794f0u: goto label_2794f0;
        case 0x2794f4u: goto label_2794f4;
        case 0x2794f8u: goto label_2794f8;
        case 0x2794fcu: goto label_2794fc;
        case 0x279500u: goto label_279500;
        case 0x279504u: goto label_279504;
        case 0x279508u: goto label_279508;
        case 0x27950cu: goto label_27950c;
        case 0x279510u: goto label_279510;
        case 0x279514u: goto label_279514;
        case 0x279518u: goto label_279518;
        case 0x27951cu: goto label_27951c;
        case 0x279520u: goto label_279520;
        case 0x279524u: goto label_279524;
        case 0x279528u: goto label_279528;
        case 0x27952cu: goto label_27952c;
        case 0x279530u: goto label_279530;
        case 0x279534u: goto label_279534;
        case 0x279538u: goto label_279538;
        case 0x27953cu: goto label_27953c;
        case 0x279540u: goto label_279540;
        case 0x279544u: goto label_279544;
        case 0x279548u: goto label_279548;
        case 0x27954cu: goto label_27954c;
        case 0x279550u: goto label_279550;
        case 0x279554u: goto label_279554;
        case 0x279558u: goto label_279558;
        case 0x27955cu: goto label_27955c;
        case 0x279560u: goto label_279560;
        case 0x279564u: goto label_279564;
        case 0x279568u: goto label_279568;
        case 0x27956cu: goto label_27956c;
        case 0x279570u: goto label_279570;
        case 0x279574u: goto label_279574;
        case 0x279578u: goto label_279578;
        case 0x27957cu: goto label_27957c;
        case 0x279580u: goto label_279580;
        case 0x279584u: goto label_279584;
        case 0x279588u: goto label_279588;
        case 0x27958cu: goto label_27958c;
        case 0x279590u: goto label_279590;
        case 0x279594u: goto label_279594;
        case 0x279598u: goto label_279598;
        case 0x27959cu: goto label_27959c;
        case 0x2795a0u: goto label_2795a0;
        case 0x2795a4u: goto label_2795a4;
        case 0x2795a8u: goto label_2795a8;
        case 0x2795acu: goto label_2795ac;
        case 0x2795b0u: goto label_2795b0;
        case 0x2795b4u: goto label_2795b4;
        case 0x2795b8u: goto label_2795b8;
        case 0x2795bcu: goto label_2795bc;
        case 0x2795c0u: goto label_2795c0;
        case 0x2795c4u: goto label_2795c4;
        case 0x2795c8u: goto label_2795c8;
        case 0x2795ccu: goto label_2795cc;
        case 0x2795d0u: goto label_2795d0;
        case 0x2795d4u: goto label_2795d4;
        case 0x2795d8u: goto label_2795d8;
        case 0x2795dcu: goto label_2795dc;
        case 0x2795e0u: goto label_2795e0;
        case 0x2795e4u: goto label_2795e4;
        case 0x2795e8u: goto label_2795e8;
        case 0x2795ecu: goto label_2795ec;
        case 0x2795f0u: goto label_2795f0;
        case 0x2795f4u: goto label_2795f4;
        case 0x2795f8u: goto label_2795f8;
        case 0x2795fcu: goto label_2795fc;
        case 0x279600u: goto label_279600;
        case 0x279604u: goto label_279604;
        case 0x279608u: goto label_279608;
        case 0x27960cu: goto label_27960c;
        case 0x279610u: goto label_279610;
        case 0x279614u: goto label_279614;
        case 0x279618u: goto label_279618;
        case 0x27961cu: goto label_27961c;
        case 0x279620u: goto label_279620;
        case 0x279624u: goto label_279624;
        case 0x279628u: goto label_279628;
        case 0x27962cu: goto label_27962c;
        case 0x279630u: goto label_279630;
        case 0x279634u: goto label_279634;
        case 0x279638u: goto label_279638;
        case 0x27963cu: goto label_27963c;
        case 0x279640u: goto label_279640;
        case 0x279644u: goto label_279644;
        case 0x279648u: goto label_279648;
        case 0x27964cu: goto label_27964c;
        case 0x279650u: goto label_279650;
        case 0x279654u: goto label_279654;
        case 0x279658u: goto label_279658;
        case 0x27965cu: goto label_27965c;
        case 0x279660u: goto label_279660;
        case 0x279664u: goto label_279664;
        case 0x279668u: goto label_279668;
        case 0x27966cu: goto label_27966c;
        case 0x279670u: goto label_279670;
        case 0x279674u: goto label_279674;
        case 0x279678u: goto label_279678;
        case 0x27967cu: goto label_27967c;
        case 0x279680u: goto label_279680;
        case 0x279684u: goto label_279684;
        case 0x279688u: goto label_279688;
        case 0x27968cu: goto label_27968c;
        case 0x279690u: goto label_279690;
        case 0x279694u: goto label_279694;
        case 0x279698u: goto label_279698;
        case 0x27969cu: goto label_27969c;
        case 0x2796a0u: goto label_2796a0;
        case 0x2796a4u: goto label_2796a4;
        case 0x2796a8u: goto label_2796a8;
        case 0x2796acu: goto label_2796ac;
        case 0x2796b0u: goto label_2796b0;
        case 0x2796b4u: goto label_2796b4;
        case 0x2796b8u: goto label_2796b8;
        case 0x2796bcu: goto label_2796bc;
        case 0x2796c0u: goto label_2796c0;
        case 0x2796c4u: goto label_2796c4;
        case 0x2796c8u: goto label_2796c8;
        case 0x2796ccu: goto label_2796cc;
        case 0x2796d0u: goto label_2796d0;
        case 0x2796d4u: goto label_2796d4;
        case 0x2796d8u: goto label_2796d8;
        case 0x2796dcu: goto label_2796dc;
        case 0x2796e0u: goto label_2796e0;
        case 0x2796e4u: goto label_2796e4;
        case 0x2796e8u: goto label_2796e8;
        case 0x2796ecu: goto label_2796ec;
        case 0x2796f0u: goto label_2796f0;
        case 0x2796f4u: goto label_2796f4;
        case 0x2796f8u: goto label_2796f8;
        case 0x2796fcu: goto label_2796fc;
        case 0x279700u: goto label_279700;
        case 0x279704u: goto label_279704;
        case 0x279708u: goto label_279708;
        case 0x27970cu: goto label_27970c;
        case 0x279710u: goto label_279710;
        case 0x279714u: goto label_279714;
        case 0x279718u: goto label_279718;
        case 0x27971cu: goto label_27971c;
        case 0x279720u: goto label_279720;
        case 0x279724u: goto label_279724;
        case 0x279728u: goto label_279728;
        case 0x27972cu: goto label_27972c;
        case 0x279730u: goto label_279730;
        case 0x279734u: goto label_279734;
        case 0x279738u: goto label_279738;
        case 0x27973cu: goto label_27973c;
        case 0x279740u: goto label_279740;
        case 0x279744u: goto label_279744;
        case 0x279748u: goto label_279748;
        case 0x27974cu: goto label_27974c;
        case 0x279750u: goto label_279750;
        case 0x279754u: goto label_279754;
        case 0x279758u: goto label_279758;
        case 0x27975cu: goto label_27975c;
        case 0x279760u: goto label_279760;
        case 0x279764u: goto label_279764;
        case 0x279768u: goto label_279768;
        case 0x27976cu: goto label_27976c;
        case 0x279770u: goto label_279770;
        case 0x279774u: goto label_279774;
        case 0x279778u: goto label_279778;
        case 0x27977cu: goto label_27977c;
        case 0x279780u: goto label_279780;
        case 0x279784u: goto label_279784;
        case 0x279788u: goto label_279788;
        case 0x27978cu: goto label_27978c;
        case 0x279790u: goto label_279790;
        case 0x279794u: goto label_279794;
        case 0x279798u: goto label_279798;
        case 0x27979cu: goto label_27979c;
        case 0x2797a0u: goto label_2797a0;
        case 0x2797a4u: goto label_2797a4;
        case 0x2797a8u: goto label_2797a8;
        case 0x2797acu: goto label_2797ac;
        case 0x2797b0u: goto label_2797b0;
        case 0x2797b4u: goto label_2797b4;
        case 0x2797b8u: goto label_2797b8;
        case 0x2797bcu: goto label_2797bc;
        case 0x2797c0u: goto label_2797c0;
        case 0x2797c4u: goto label_2797c4;
        case 0x2797c8u: goto label_2797c8;
        case 0x2797ccu: goto label_2797cc;
        case 0x2797d0u: goto label_2797d0;
        case 0x2797d4u: goto label_2797d4;
        case 0x2797d8u: goto label_2797d8;
        case 0x2797dcu: goto label_2797dc;
        case 0x2797e0u: goto label_2797e0;
        case 0x2797e4u: goto label_2797e4;
        case 0x2797e8u: goto label_2797e8;
        case 0x2797ecu: goto label_2797ec;
        case 0x2797f0u: goto label_2797f0;
        case 0x2797f4u: goto label_2797f4;
        case 0x2797f8u: goto label_2797f8;
        case 0x2797fcu: goto label_2797fc;
        case 0x279800u: goto label_279800;
        case 0x279804u: goto label_279804;
        case 0x279808u: goto label_279808;
        case 0x27980cu: goto label_27980c;
        case 0x279810u: goto label_279810;
        case 0x279814u: goto label_279814;
        case 0x279818u: goto label_279818;
        case 0x27981cu: goto label_27981c;
        case 0x279820u: goto label_279820;
        case 0x279824u: goto label_279824;
        case 0x279828u: goto label_279828;
        case 0x27982cu: goto label_27982c;
        case 0x279830u: goto label_279830;
        case 0x279834u: goto label_279834;
        case 0x279838u: goto label_279838;
        case 0x27983cu: goto label_27983c;
        case 0x279840u: goto label_279840;
        case 0x279844u: goto label_279844;
        case 0x279848u: goto label_279848;
        case 0x27984cu: goto label_27984c;
        case 0x279850u: goto label_279850;
        case 0x279854u: goto label_279854;
        case 0x279858u: goto label_279858;
        case 0x27985cu: goto label_27985c;
        case 0x279860u: goto label_279860;
        case 0x279864u: goto label_279864;
        case 0x279868u: goto label_279868;
        case 0x27986cu: goto label_27986c;
        case 0x279870u: goto label_279870;
        case 0x279874u: goto label_279874;
        case 0x279878u: goto label_279878;
        case 0x27987cu: goto label_27987c;
        case 0x279880u: goto label_279880;
        case 0x279884u: goto label_279884;
        case 0x279888u: goto label_279888;
        case 0x27988cu: goto label_27988c;
        case 0x279890u: goto label_279890;
        case 0x279894u: goto label_279894;
        case 0x279898u: goto label_279898;
        case 0x27989cu: goto label_27989c;
        case 0x2798a0u: goto label_2798a0;
        case 0x2798a4u: goto label_2798a4;
        case 0x2798a8u: goto label_2798a8;
        case 0x2798acu: goto label_2798ac;
        case 0x2798b0u: goto label_2798b0;
        case 0x2798b4u: goto label_2798b4;
        case 0x2798b8u: goto label_2798b8;
        case 0x2798bcu: goto label_2798bc;
        case 0x2798c0u: goto label_2798c0;
        case 0x2798c4u: goto label_2798c4;
        case 0x2798c8u: goto label_2798c8;
        case 0x2798ccu: goto label_2798cc;
        case 0x2798d0u: goto label_2798d0;
        case 0x2798d4u: goto label_2798d4;
        case 0x2798d8u: goto label_2798d8;
        case 0x2798dcu: goto label_2798dc;
        case 0x2798e0u: goto label_2798e0;
        case 0x2798e4u: goto label_2798e4;
        case 0x2798e8u: goto label_2798e8;
        case 0x2798ecu: goto label_2798ec;
        case 0x2798f0u: goto label_2798f0;
        case 0x2798f4u: goto label_2798f4;
        case 0x2798f8u: goto label_2798f8;
        case 0x2798fcu: goto label_2798fc;
        case 0x279900u: goto label_279900;
        case 0x279904u: goto label_279904;
        case 0x279908u: goto label_279908;
        case 0x27990cu: goto label_27990c;
        case 0x279910u: goto label_279910;
        case 0x279914u: goto label_279914;
        case 0x279918u: goto label_279918;
        case 0x27991cu: goto label_27991c;
        case 0x279920u: goto label_279920;
        case 0x279924u: goto label_279924;
        case 0x279928u: goto label_279928;
        case 0x27992cu: goto label_27992c;
        case 0x279930u: goto label_279930;
        case 0x279934u: goto label_279934;
        case 0x279938u: goto label_279938;
        case 0x27993cu: goto label_27993c;
        case 0x279940u: goto label_279940;
        case 0x279944u: goto label_279944;
        case 0x279948u: goto label_279948;
        case 0x27994cu: goto label_27994c;
        case 0x279950u: goto label_279950;
        case 0x279954u: goto label_279954;
        case 0x279958u: goto label_279958;
        case 0x27995cu: goto label_27995c;
        case 0x279960u: goto label_279960;
        case 0x279964u: goto label_279964;
        default: break;
    }

    ctx->pc = 0x278f88u;

label_278f88:
    // 0x278f88: 0x27bdfbb0  addiu       $sp, $sp, -0x450
    ctx->pc = 0x278f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966192));
label_278f8c:
    // 0x278f8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x278f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_278f90:
    // 0x278f90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x278f90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_278f94:
    // 0x278f94: 0x7fb703b0  sq          $s7, 0x3B0($sp)
    ctx->pc = 0x278f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), GPR_VEC(ctx, 23));
label_278f98:
    // 0x278f98: 0xe7b60440  swc1        $f22, 0x440($sp)
    ctx->pc = 0x278f98u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1088), bits); }
label_278f9c:
    // 0x278f9c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x278f9cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_278fa0:
    // 0x278fa0: 0x7fb00420  sq          $s0, 0x420($sp)
    ctx->pc = 0x278fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 16));
label_278fa4:
    // 0x278fa4: 0x7fb10410  sq          $s1, 0x410($sp)
    ctx->pc = 0x278fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 17));
label_278fa8:
    // 0x278fa8: 0x7fb20400  sq          $s2, 0x400($sp)
    ctx->pc = 0x278fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), GPR_VEC(ctx, 18));
label_278fac:
    // 0x278fac: 0x7fb303f0  sq          $s3, 0x3F0($sp)
    ctx->pc = 0x278facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), GPR_VEC(ctx, 19));
label_278fb0:
    // 0x278fb0: 0x7fb403e0  sq          $s4, 0x3E0($sp)
    ctx->pc = 0x278fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), GPR_VEC(ctx, 20));
label_278fb4:
    // 0x278fb4: 0x7fb503d0  sq          $s5, 0x3D0($sp)
    ctx->pc = 0x278fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 976), GPR_VEC(ctx, 21));
label_278fb8:
    // 0x278fb8: 0x7fb603c0  sq          $s6, 0x3C0($sp)
    ctx->pc = 0x278fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), GPR_VEC(ctx, 22));
label_278fbc:
    // 0x278fbc: 0x7fbe03a0  sq          $fp, 0x3A0($sp)
    ctx->pc = 0x278fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), GPR_VEC(ctx, 30));
label_278fc0:
    // 0x278fc0: 0xffbf0390  sd          $ra, 0x390($sp)
    ctx->pc = 0x278fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 912), GPR_U64(ctx, 31));
label_278fc4:
    // 0x278fc4: 0xe7b50438  swc1        $f21, 0x438($sp)
    ctx->pc = 0x278fc4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1080), bits); }
label_278fc8:
    // 0x278fc8: 0xe7b40430  swc1        $f20, 0x430($sp)
    ctx->pc = 0x278fc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1072), bits); }
label_278fcc:
    // 0x278fcc: 0xc7878024  lwc1        $f7, -0x7FDC($gp)
    ctx->pc = 0x278fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_278fd0:
    // 0x278fd0: 0xc6e4000c  lwc1        $f4, 0xC($s7)
    ctx->pc = 0x278fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_278fd4:
    // 0x278fd4: 0xafa60324  sw          $a2, 0x324($sp)
    ctx->pc = 0x278fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 804), GPR_U32(ctx, 6));
label_278fd8:
    // 0x278fd8: 0x46040583  div.s       $f22, $f0, $f4
    ctx->pc = 0x278fd8u;
    ctx->f[22] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[4]);
label_278fdc:
    // 0x278fdc: 0xafa70328  sw          $a3, 0x328($sp)
    ctx->pc = 0x278fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 808), GPR_U32(ctx, 7));
label_278fe0:
    // 0x278fe0: 0x460721c2  mul.s       $f7, $f4, $f7
    ctx->pc = 0x278fe0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
label_278fe4:
    // 0x278fe4: 0xafa8032c  sw          $t0, 0x32C($sp)
    ctx->pc = 0x278fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 812), GPR_U32(ctx, 8));
label_278fe8:
    // 0x278fe8: 0x6ae20007  ldl         $v0, 0x7($s7)
    ctx->pc = 0x278fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_278fec:
    // 0x278fec: 0x6ee20000  ldr         $v0, 0x0($s7)
    ctx->pc = 0x278fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_278ff0:
    // 0x278ff0: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x278ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_278ff4:
    // 0x278ff4: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x278ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_278ff8:
    // 0x278ff8: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x278ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_278ffc:
    // 0x278ffc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x278ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_279000:
    // 0x279000: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x279000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_279004:
    // 0x279004: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x279004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_279008:
    // 0x279008: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x279008u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_27900c:
    // 0x27900c: 0xb3a70013  sdl         $a3, 0x13($sp)
    ctx->pc = 0x27900cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_279010:
    // 0x279010: 0xb7a7000c  sdr         $a3, 0xC($sp)
    ctx->pc = 0x279010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_279014:
    // 0x279014: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x279014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
label_279018:
    // 0x279018: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x279018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27901c:
    // 0x27901c: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x27901cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_279020:
    // 0x279020: 0xc7a60014  lwc1        $f6, 0x14($sp)
    ctx->pc = 0x279020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_279024:
    // 0x279024: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x279024u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_279028:
    // 0x279028: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x279028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27902c:
    // 0x27902c: 0x46042941  sub.s       $f5, $f5, $f4
    ctx->pc = 0x27902cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_279030:
    // 0x279030: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x279030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_279034:
    // 0x279034: 0x46043181  sub.s       $f6, $f6, $f4
    ctx->pc = 0x279034u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
label_279038:
    // 0x279038: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x279038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27903c:
    // 0x27903c: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x27903cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_279040:
    // 0x279040: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x279040u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_279044:
    // 0x279044: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x279044u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_279048:
    // 0x279048: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x279048u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_27904c:
    // 0x27904c: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x27904cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_279050:
    // 0x279050: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x279050u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_279054:
    // 0x279054: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x279054u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_279058:
    // 0x279058: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x279058u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_27905c:
    // 0x27905c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x27905cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_279060:
    // 0x279060: 0x6ae30007  ldl         $v1, 0x7($s7)
    ctx->pc = 0x279060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_279064:
    // 0x279064: 0x6ee30000  ldr         $v1, 0x0($s7)
    ctx->pc = 0x279064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_279068:
    // 0x279068: 0x8ee50008  lw          $a1, 0x8($s7)
    ctx->pc = 0x279068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_27906c:
    // 0x27906c: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x27906cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_279070:
    // 0x279070: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x279070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_279074:
    // 0x279074: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x279074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
label_279078:
    // 0x279078: 0x6ba80027  ldl         $t0, 0x27($sp)
    ctx->pc = 0x279078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_27907c:
    // 0x27907c: 0x6fa80020  ldr         $t0, 0x20($sp)
    ctx->pc = 0x27907cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_279080:
    // 0x279080: 0x8fa90028  lw          $t1, 0x28($sp)
    ctx->pc = 0x279080u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_279084:
    // 0x279084: 0xb3a80033  sdl         $t0, 0x33($sp)
    ctx->pc = 0x279084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_279088:
    // 0x279088: 0xb7a8002c  sdr         $t0, 0x2C($sp)
    ctx->pc = 0x279088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27908c:
    // 0x27908c: 0xafa90034  sw          $t1, 0x34($sp)
    ctx->pc = 0x27908cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 9));
label_279090:
    // 0x279090: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x279090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_279094:
    // 0x279094: 0xc7a40030  lwc1        $f4, 0x30($sp)
    ctx->pc = 0x279094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_279098:
    // 0x279098: 0xc7a50034  lwc1        $f5, 0x34($sp)
    ctx->pc = 0x279098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_27909c:
    // 0x27909c: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x27909cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_2790a0:
    // 0x2790a0: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x2790a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2790a4:
    // 0x2790a4: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x2790a4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
label_2790a8:
    // 0x2790a8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2790a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2790ac:
    // 0x2790ac: 0x46072941  sub.s       $f5, $f5, $f7
    ctx->pc = 0x2790acu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
label_2790b0:
    // 0x2790b0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2790b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2790b4:
    // 0x2790b4: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x2790b4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
label_2790b8:
    // 0x2790b8: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x2790b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
label_2790bc:
    // 0x2790bc: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x2790bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_2790c0:
    // 0x2790c0: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x2790c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
label_2790c4:
    // 0x2790c4: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x2790c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2790c8:
    // 0x2790c8: 0xe7a50034  swc1        $f5, 0x34($sp)
    ctx->pc = 0x2790c8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2790cc:
    // 0x2790cc: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x2790ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2790d0:
    // 0x2790d0: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2790d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2790d4:
    // 0x2790d4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2790d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2790d8:
    // 0x2790d8: 0x6ba50007  ldl         $a1, 0x7($sp)
    ctx->pc = 0x2790d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_2790dc:
    // 0x2790dc: 0x6fa50000  ldr         $a1, 0x0($sp)
    ctx->pc = 0x2790dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2790e0:
    // 0x2790e0: 0x6ba6000f  ldl         $a2, 0xF($sp)
    ctx->pc = 0x2790e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2790e4:
    // 0x2790e4: 0x6fa60008  ldr         $a2, 0x8($sp)
    ctx->pc = 0x2790e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2790e8:
    // 0x2790e8: 0x6ba70017  ldl         $a3, 0x17($sp)
    ctx->pc = 0x2790e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2790ec:
    // 0x2790ec: 0x6fa70010  ldr         $a3, 0x10($sp)
    ctx->pc = 0x2790ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2790f0:
    // 0x2790f0: 0xb3a50047  sdl         $a1, 0x47($sp)
    ctx->pc = 0x2790f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2790f4:
    // 0x2790f4: 0xb7a50040  sdr         $a1, 0x40($sp)
    ctx->pc = 0x2790f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2790f8:
    // 0x2790f8: 0xb3a6004f  sdl         $a2, 0x4F($sp)
    ctx->pc = 0x2790f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2790fc:
    // 0x2790fc: 0xb7a60048  sdr         $a2, 0x48($sp)
    ctx->pc = 0x2790fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_279100:
    // 0x279100: 0xb3a70057  sdl         $a3, 0x57($sp)
    ctx->pc = 0x279100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_279104:
    // 0x279104: 0xb7a70050  sdr         $a3, 0x50($sp)
    ctx->pc = 0x279104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_279108:
    // 0x279108: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x279108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_27910c:
    // 0x27910c: 0x27a3005c  addiu       $v1, $sp, 0x5C
    ctx->pc = 0x27910cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_279110:
    // 0x279110: 0xafa3015c  sw          $v1, 0x15C($sp)
    ctx->pc = 0x279110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
label_279114:
    // 0x279114: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x279114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_279118:
    // 0x279118: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x279118u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_27911c:
    // 0x27911c: 0x10800202  beqz        $a0, . + 4 + (0x202 << 2)
label_279120:
    if (ctx->pc == 0x279120u) {
        ctx->pc = 0x279120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27911Cu;
        // 0x279120: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279124u;
        goto label_279124;
    }
    ctx->pc = 0x27911Cu;
    {
        const bool branch_taken_0x27911c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x279120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27911Cu;
        // 0x279120: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27911c) {
            ctx->pc = 0x279928u;
            goto label_279928;
        }
    }
    ctx->pc = 0x279124u;
label_279124:
    // 0x279124: 0x27a90194  addiu       $t1, $sp, 0x194
    ctx->pc = 0x279124u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
label_279128:
    // 0x279128: 0x27a201a4  addiu       $v0, $sp, 0x1A4
    ctx->pc = 0x279128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
label_27912c:
    // 0x27912c: 0x27a4019c  addiu       $a0, $sp, 0x19C
    ctx->pc = 0x27912cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
label_279130:
    // 0x279130: 0xafa90334  sw          $t1, 0x334($sp)
    ctx->pc = 0x279130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 820), GPR_U32(ctx, 9));
label_279134:
    // 0x279134: 0xafa20338  sw          $v0, 0x338($sp)
    ctx->pc = 0x279134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 824), GPR_U32(ctx, 2));
label_279138:
    // 0x279138: 0xafa4033c  sw          $a0, 0x33C($sp)
    ctx->pc = 0x279138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 4));
label_27913c:
    // 0x27913c: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x27913cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_279140:
    // 0x279140: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x279140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_279144:
    // 0x279144: 0xafa3015c  sw          $v1, 0x15C($sp)
    ctx->pc = 0x279144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
label_279148:
    // 0x279148: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x279148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27914c:
    // 0x27914c: 0x4800021  bltz        $a0, . + 4 + (0x21 << 2)
label_279150:
    if (ctx->pc == 0x279150u) {
        ctx->pc = 0x279150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27914Cu;
        // 0x279150: 0x8fa2015c  lw          $v0, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279154u;
        goto label_279154;
    }
    ctx->pc = 0x27914Cu;
    {
        const bool branch_taken_0x27914c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x279150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27914Cu;
        // 0x279150: 0x8fa2015c  lw          $v0, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27914c) {
            ctx->pc = 0x2791D4u;
            goto label_2791d4;
        }
    }
    ctx->pc = 0x279154u;
label_279154:
    // 0x279154: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x279154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_279158:
    // 0x279158: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x279158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_27915c:
    // 0x27915c: 0x8fa5015c  lw          $a1, 0x15C($sp)
    ctx->pc = 0x27915cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_279160:
    // 0x279160: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x279160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_279164:
    // 0x279164: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x279164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_279168:
    // 0x279168: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x279168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_27916c:
    // 0x27916c: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x27916cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_279170:
    // 0x279170: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x279170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279174:
    // 0x279174: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x279174u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279178:
    // 0x279178: 0x0  nop
    ctx->pc = 0x279178u;
    // NOP
label_27917c:
    // 0x27917c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_279180:
    if (ctx->pc == 0x279180u) {
        ctx->pc = 0x279180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27917Cu;
        // 0x279180: 0xc31021  addu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279184u;
        goto label_279184;
    }
    ctx->pc = 0x27917Cu;
    {
        const bool branch_taken_0x27917c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x279180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27917Cu;
        // 0x279180: 0xc31021  addu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27917c) {
            ctx->pc = 0x279190u;
            goto label_279190;
        }
    }
    ctx->pc = 0x279184u;
label_279184:
    // 0x279184: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x279184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_279188:
    // 0x279188: 0x1000000c  b           . + 4 + (0xC << 2)
label_27918c:
    if (ctx->pc == 0x27918Cu) {
        ctx->pc = 0x27918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279188u;
        // 0x27918c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279190u;
        goto label_279190;
    }
    ctx->pc = 0x279188u;
    {
        const bool branch_taken_0x279188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279188u;
        // 0x27918c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279188) {
            ctx->pc = 0x2791BCu;
            goto label_2791bc;
        }
    }
    ctx->pc = 0x279190u;
label_279190:
    // 0x279190: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x279190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_279194:
    // 0x279194: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x279194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279198:
    // 0x279198: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x279198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_27919c:
    // 0x27919c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27919cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2791a0:
    // 0x2791a0: 0x0  nop
    ctx->pc = 0x2791a0u;
    // NOP
label_2791a4:
    // 0x2791a4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2791a8:
    if (ctx->pc == 0x2791A8u) {
        ctx->pc = 0x2791A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2791A4u;
        // 0x2791a8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2791ACu;
        goto label_2791ac;
    }
    ctx->pc = 0x2791A4u;
    {
        const bool branch_taken_0x2791a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2791A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2791A4u;
        // 0x2791a8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2791a4) {
            ctx->pc = 0x2791BCu;
            goto label_2791bc;
        }
    }
    ctx->pc = 0x2791ACu;
label_2791ac:
    // 0x2791ac: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2791acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2791b0:
    // 0x2791b0: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x2791b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2791b4:
    // 0x2791b4: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x2791b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
label_2791b8:
    // 0x2791b8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2791b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_2791bc:
    // 0x2791bc: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x2791bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_2791c0:
    // 0x2791c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2791c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2791c4:
    // 0x2791c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2791c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2791c8:
    // 0x2791c8: 0x481ffe5  bgez        $a0, . + 4 + (-0x1B << 2)
label_2791cc:
    if (ctx->pc == 0x2791CCu) {
        ctx->pc = 0x2791CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2791C8u;
        // 0x2791cc: 0x8fa5015c  lw          $a1, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2791D0u;
        goto label_2791d0;
    }
    ctx->pc = 0x2791C8u;
    {
        const bool branch_taken_0x2791c8 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2791CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2791C8u;
        // 0x2791cc: 0x8fa5015c  lw          $a1, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2791c8) {
            ctx->pc = 0x279160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279160;
        }
    }
    ctx->pc = 0x2791D0u;
label_2791d0:
    // 0x2791d0: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x2791d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_2791d4:
    // 0x2791d4: 0x8c4d0000  lw          $t5, 0x0($v0)
    ctx->pc = 0x2791d4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2791d8:
    // 0x2791d8: 0x8f8387d8  lw          $v1, -0x7828($gp)
    ctx->pc = 0x2791d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936536)));
label_2791dc:
    // 0x2791dc: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x2791dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
label_2791e0:
    // 0x2791e0: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x2791e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2791e4:
    // 0x2791e4: 0x526001cc  beql        $s3, $zero, . + 4 + (0x1CC << 2)
label_2791e8:
    if (ctx->pc == 0x2791E8u) {
        ctx->pc = 0x2791E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2791E4u;
        // 0x2791e8: 0x8fa3015c  lw          $v1, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2791ECu;
        goto label_2791ec;
    }
    ctx->pc = 0x2791E4u;
    {
        const bool branch_taken_0x2791e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2791e4) {
            ctx->pc = 0x2791E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2791E4u;
            // 0x2791e8: 0x8fa3015c  lw          $v1, 0x15C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279918u;
            goto label_279918;
        }
    }
    ctx->pc = 0x2791ECu;
label_2791ec:
    // 0x2791ec: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x2791ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2791f0:
    // 0x2791f0: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2791f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2791f4:
    // 0x2791f4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2791f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2791f8:
    // 0x2791f8: 0x0  nop
    ctx->pc = 0x2791f8u;
    // NOP
label_2791fc:
    // 0x2791fc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_279200:
    if (ctx->pc == 0x279200u) {
        ctx->pc = 0x279200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2791FCu;
        // 0x279200: 0x46000186  mov.s       $f6, $f0 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x279204u;
        goto label_279204;
    }
    ctx->pc = 0x2791FCu;
    {
        const bool branch_taken_0x2791fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x279200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2791FCu;
        // 0x279200: 0x46000186  mov.s       $f6, $f0 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2791fc) {
            ctx->pc = 0x279210u;
            goto label_279210;
        }
    }
    ctx->pc = 0x279204u;
label_279204:
    // 0x279204: 0x10000008  b           . + 4 + (0x8 << 2)
label_279208:
    if (ctx->pc == 0x279208u) {
        ctx->pc = 0x279208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279204u;
        // 0x279208: 0x46023041  sub.s       $f1, $f6, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27920Cu;
        goto label_27920c;
    }
    ctx->pc = 0x279204u;
    {
        const bool branch_taken_0x279204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279204u;
        // 0x279208: 0x46023041  sub.s       $f1, $f6, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x279204) {
            ctx->pc = 0x279228u;
            goto label_279228;
        }
    }
    ctx->pc = 0x27920Cu;
label_27920c:
    // 0x27920c: 0x0  nop
    ctx->pc = 0x27920cu;
    // NOP
label_279210:
    // 0x279210: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x279210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279214:
    // 0x279214: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x279214u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_279218:
    // 0x279218: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x279218u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27921c:
    // 0x27921c: 0x0  nop
    ctx->pc = 0x27921cu;
    // NOP
label_279220:
    // 0x279220: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_279224:
    if (ctx->pc == 0x279224u) {
        ctx->pc = 0x279224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279220u;
        // 0x279224: 0x46001041  sub.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x279228u;
        goto label_279228;
    }
    ctx->pc = 0x279220u;
    {
        const bool branch_taken_0x279220 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x279220) {
            ctx->pc = 0x279224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279220u;
            // 0x279224: 0x46001041  sub.s       $f1, $f2, $f0 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x279228u;
            goto label_279228;
        }
    }
    ctx->pc = 0x279228u;
label_279228:
    // 0x279228: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x279228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27922c:
    // 0x27922c: 0x46010902  mul.s       $f4, $f1, $f1
    ctx->pc = 0x27922cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_279230:
    // 0x279230: 0xc6e20004  lwc1        $f2, 0x4($s7)
    ctx->pc = 0x279230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_279234:
    // 0x279234: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x279234u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279238:
    // 0x279238: 0x0  nop
    ctx->pc = 0x279238u;
    // NOP
label_27923c:
    // 0x27923c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_279240:
    if (ctx->pc == 0x279240u) {
        ctx->pc = 0x279240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27923Cu;
        // 0x279240: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x279244u;
        goto label_279244;
    }
    ctx->pc = 0x27923Cu;
    {
        const bool branch_taken_0x27923c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x279240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27923Cu;
        // 0x279240: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27923c) {
            ctx->pc = 0x27924Cu;
            goto label_27924c;
        }
    }
    ctx->pc = 0x279244u;
label_279244:
    // 0x279244: 0x10000007  b           . + 4 + (0x7 << 2)
label_279248:
    if (ctx->pc == 0x279248u) {
        ctx->pc = 0x279248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279244u;
        // 0x279248: 0x46022841  sub.s       $f1, $f5, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27924Cu;
        goto label_27924c;
    }
    ctx->pc = 0x279244u;
    {
        const bool branch_taken_0x279244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279244u;
        // 0x279248: 0x46022841  sub.s       $f1, $f5, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x279244) {
            ctx->pc = 0x279264u;
            goto label_279264;
        }
    }
    ctx->pc = 0x27924Cu;
label_27924c:
    // 0x27924c: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x27924cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279250:
    // 0x279250: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x279250u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_279254:
    // 0x279254: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x279254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279258:
    // 0x279258: 0x0  nop
    ctx->pc = 0x279258u;
    // NOP
label_27925c:
    // 0x27925c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_279260:
    if (ctx->pc == 0x279260u) {
        ctx->pc = 0x279260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27925Cu;
        // 0x279260: 0x46001041  sub.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x279264u;
        goto label_279264;
    }
    ctx->pc = 0x27925Cu;
    {
        const bool branch_taken_0x27925c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27925c) {
            ctx->pc = 0x279260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27925Cu;
            // 0x279260: 0x46001041  sub.s       $f1, $f2, $f0 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x279264u;
            goto label_279264;
        }
    }
    ctx->pc = 0x279264u;
label_279264:
    // 0x279264: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x279264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279268:
    // 0x279268: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x279268u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_27926c:
    // 0x27926c: 0xc6e20008  lwc1        $f2, 0x8($s7)
    ctx->pc = 0x27926cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_279270:
    // 0x279270: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x279270u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_279274:
    // 0x279274: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x279274u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279278:
    // 0x279278: 0x0  nop
    ctx->pc = 0x279278u;
    // NOP
label_27927c:
    // 0x27927c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_279280:
    if (ctx->pc == 0x279280u) {
        ctx->pc = 0x279280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27927Cu;
        // 0x279280: 0x46012100  add.s       $f4, $f4, $f1 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x279284u;
        goto label_279284;
    }
    ctx->pc = 0x27927Cu;
    {
        const bool branch_taken_0x27927c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x279280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27927Cu;
        // 0x279280: 0x46012100  add.s       $f4, $f4, $f1 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27927c) {
            ctx->pc = 0x27928Cu;
            goto label_27928c;
        }
    }
    ctx->pc = 0x279284u;
label_279284:
    // 0x279284: 0x10000007  b           . + 4 + (0x7 << 2)
label_279288:
    if (ctx->pc == 0x279288u) {
        ctx->pc = 0x279288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279284u;
        // 0x279288: 0x46021841  sub.s       $f1, $f3, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27928Cu;
        goto label_27928c;
    }
    ctx->pc = 0x279284u;
    {
        const bool branch_taken_0x279284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279284u;
        // 0x279288: 0x46021841  sub.s       $f1, $f3, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x279284) {
            ctx->pc = 0x2792A4u;
            goto label_2792a4;
        }
    }
    ctx->pc = 0x27928Cu;
label_27928c:
    // 0x27928c: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x27928cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279290:
    // 0x279290: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x279290u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_279294:
    // 0x279294: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x279294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279298:
    // 0x279298: 0x0  nop
    ctx->pc = 0x279298u;
    // NOP
label_27929c:
    // 0x27929c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2792a0:
    if (ctx->pc == 0x2792A0u) {
        ctx->pc = 0x2792A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27929Cu;
        // 0x2792a0: 0x46001041  sub.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2792A4u;
        goto label_2792a4;
    }
    ctx->pc = 0x27929Cu;
    {
        const bool branch_taken_0x27929c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27929c) {
            ctx->pc = 0x2792A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27929Cu;
            // 0x2792a0: 0x46001041  sub.s       $f1, $f2, $f0 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2792A4u;
            goto label_2792a4;
        }
    }
    ctx->pc = 0x2792A4u;
label_2792a4:
    // 0x2792a4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2792a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2792a8:
    // 0x2792a8: 0xc6e0000c  lwc1        $f0, 0xC($s7)
    ctx->pc = 0x2792a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2792ac:
    // 0x2792ac: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2792acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2792b0:
    // 0x2792b0: 0x46012040  add.s       $f1, $f4, $f1
    ctx->pc = 0x2792b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_2792b4:
    // 0x2792b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2792b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2792b8:
    // 0x2792b8: 0x0  nop
    ctx->pc = 0x2792b8u;
    // NOP
label_2792bc:
    // 0x2792bc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2792c0:
    if (ctx->pc == 0x2792C0u) {
        ctx->pc = 0x2792C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2792BCu;
        // 0x2792c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2792C4u;
        goto label_2792c4;
    }
    ctx->pc = 0x2792BCu;
    {
        const bool branch_taken_0x2792bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2792C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2792BCu;
        // 0x2792c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2792bc) {
            ctx->pc = 0x2792C8u;
            goto label_2792c8;
        }
    }
    ctx->pc = 0x2792C4u;
label_2792c4:
    // 0x2792c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2792c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2792c8:
    // 0x2792c8: 0x10400193  beqz        $v0, . + 4 + (0x193 << 2)
label_2792cc:
    if (ctx->pc == 0x2792CCu) {
        ctx->pc = 0x2792CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2792C8u;
        // 0x2792cc: 0x8fa3015c  lw          $v1, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2792D0u;
        goto label_2792d0;
    }
    ctx->pc = 0x2792C8u;
    {
        const bool branch_taken_0x2792c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2792CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2792C8u;
        // 0x2792cc: 0x8fa3015c  lw          $v1, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2792c8) {
            ctx->pc = 0x279918u;
            goto label_279918;
        }
    }
    ctx->pc = 0x2792D0u;
label_2792d0:
    // 0x2792d0: 0x8da50004  lw          $a1, 0x4($t5)
    ctx->pc = 0x2792d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
label_2792d4:
    // 0x2792d4: 0xafa50330  sw          $a1, 0x330($sp)
    ctx->pc = 0x2792d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 816), GPR_U32(ctx, 5));
label_2792d8:
    // 0x2792d8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2792d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2792dc:
    // 0x2792dc: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x2792dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2792e0:
    // 0x2792e0: 0x0  nop
    ctx->pc = 0x2792e0u;
    // NOP
label_2792e4:
    // 0x2792e4: 0x45000067  bc1f        . + 4 + (0x67 << 2)
label_2792e8:
    if (ctx->pc == 0x2792E8u) {
        ctx->pc = 0x2792E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2792E4u;
        // 0x2792e8: 0x8dac0008  lw          $t4, 0x8($t5) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2792ECu;
        goto label_2792ec;
    }
    ctx->pc = 0x2792E4u;
    {
        const bool branch_taken_0x2792e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2792E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2792E4u;
        // 0x2792e8: 0x8dac0008  lw          $t4, 0x8($t5) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2792e4) {
            ctx->pc = 0x279484u;
            goto label_279484;
        }
    }
    ctx->pc = 0x2792ECu;
label_2792ec:
    // 0x2792ec: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2792ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2792f0:
    // 0x2792f0: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x2792f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2792f4:
    // 0x2792f4: 0x0  nop
    ctx->pc = 0x2792f4u;
    // NOP
label_2792f8:
    // 0x2792f8: 0x45000062  bc1f        . + 4 + (0x62 << 2)
label_2792fc:
    if (ctx->pc == 0x2792FCu) {
        ctx->pc = 0x2792FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2792F8u;
        // 0x2792fc: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x279300u;
        goto label_279300;
    }
    ctx->pc = 0x2792F8u;
    {
        const bool branch_taken_0x2792f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2792FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2792F8u;
        // 0x2792fc: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2792f8) {
            ctx->pc = 0x279484u;
            goto label_279484;
        }
    }
    ctx->pc = 0x279300u;
label_279300:
    // 0x279300: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x279300u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279304:
    // 0x279304: 0x0  nop
    ctx->pc = 0x279304u;
    // NOP
label_279308:
    // 0x279308: 0x4500005e  bc1f        . + 4 + (0x5E << 2)
label_27930c:
    if (ctx->pc == 0x27930Cu) {
        ctx->pc = 0x27930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279308u;
        // 0x27930c: 0xc7a0000c  lwc1        $f0, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x279310u;
        goto label_279310;
    }
    ctx->pc = 0x279308u;
    {
        const bool branch_taken_0x279308 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279308u;
        // 0x27930c: 0xc7a0000c  lwc1        $f0, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x279308) {
            ctx->pc = 0x279484u;
            goto label_279484;
        }
    }
    ctx->pc = 0x279310u;
label_279310:
    // 0x279310: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x279310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_279314:
    // 0x279314: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x279314u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279318:
    // 0x279318: 0x0  nop
    ctx->pc = 0x279318u;
    // NOP
label_27931c:
    // 0x27931c: 0x45000059  bc1f        . + 4 + (0x59 << 2)
label_279320:
    if (ctx->pc == 0x279320u) {
        ctx->pc = 0x279320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27931Cu;
        // 0x279320: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x279324u;
        goto label_279324;
    }
    ctx->pc = 0x27931Cu;
    {
        const bool branch_taken_0x27931c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x279320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27931Cu;
        // 0x279320: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27931c) {
            ctx->pc = 0x279484u;
            goto label_279484;
        }
    }
    ctx->pc = 0x279324u;
label_279324:
    // 0x279324: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x279324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_279328:
    // 0x279328: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x279328u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27932c:
    // 0x27932c: 0x0  nop
    ctx->pc = 0x27932cu;
    // NOP
label_279330:
    // 0x279330: 0x45000054  bc1f        . + 4 + (0x54 << 2)
label_279334:
    if (ctx->pc == 0x279334u) {
        ctx->pc = 0x279334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279330u;
        // 0x279334: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x279338u;
        goto label_279338;
    }
    ctx->pc = 0x279330u;
    {
        const bool branch_taken_0x279330 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x279334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279330u;
        // 0x279334: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x279330) {
            ctx->pc = 0x279484u;
            goto label_279484;
        }
    }
    ctx->pc = 0x279338u;
label_279338:
    // 0x279338: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x279338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27933c:
    // 0x27933c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27933cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279340:
    // 0x279340: 0x0  nop
    ctx->pc = 0x279340u;
    // NOP
label_279344:
    // 0x279344: 0x4500004f  bc1f        . + 4 + (0x4F << 2)
label_279348:
    if (ctx->pc == 0x279348u) {
        ctx->pc = 0x279348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279344u;
        // 0x279348: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27934Cu;
        goto label_27934c;
    }
    ctx->pc = 0x279344u;
    {
        const bool branch_taken_0x279344 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x279348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279344u;
        // 0x279348: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279344) {
            ctx->pc = 0x279484u;
            goto label_279484;
        }
    }
    ctx->pc = 0x27934Cu;
label_27934c:
    // 0x27934c: 0xa7a00196  sh          $zero, 0x196($sp)
    ctx->pc = 0x27934cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 406), (uint16_t)GPR_U32(ctx, 0));
label_279350:
    // 0x279350: 0xa3a60195  sb          $a2, 0x195($sp)
    ctx->pc = 0x279350u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 405), (uint8_t)GPR_U32(ctx, 6));
label_279354:
    // 0x279354: 0xafb30160  sw          $s3, 0x160($sp)
    ctx->pc = 0x279354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 19));
label_279358:
    // 0x279358: 0x9662001e  lhu         $v0, 0x1E($s3)
    ctx->pc = 0x279358u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 30)));
label_27935c:
    // 0x27935c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_279360:
    if (ctx->pc == 0x279360u) {
        ctx->pc = 0x279364u;
        goto label_279364;
    }
    ctx->pc = 0x27935Cu;
    {
        const bool branch_taken_0x27935c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27935c) {
            ctx->pc = 0x279370u;
            goto label_279370;
        }
    }
    ctx->pc = 0x279364u;
label_279364:
    // 0x279364: 0x9262001c  lbu         $v0, 0x1C($s3)
    ctx->pc = 0x279364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
label_279368:
    // 0x279368: 0xa3a20195  sb          $v0, 0x195($sp)
    ctx->pc = 0x279368u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 405), (uint8_t)GPR_U32(ctx, 2));
label_27936c:
    // 0x27936c: 0x0  nop
    ctx->pc = 0x27936cu;
    // NOP
label_279370:
    // 0x279370: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x279370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_279374:
    // 0x279374: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x279374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_279378:
    // 0x279378: 0x6ba8000f  ldl         $t0, 0xF($sp)
    ctx->pc = 0x279378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_27937c:
    // 0x27937c: 0x6fa80008  ldr         $t0, 0x8($sp)
    ctx->pc = 0x27937cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_279380:
    // 0x279380: 0x6ba90017  ldl         $t1, 0x17($sp)
    ctx->pc = 0x279380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_279384:
    // 0x279384: 0x6fa90010  ldr         $t1, 0x10($sp)
    ctx->pc = 0x279384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_279388:
    // 0x279388: 0xb3a7016b  sdl         $a3, 0x16B($sp)
    ctx->pc = 0x279388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 363); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27938c:
    // 0x27938c: 0xb7a70164  sdr         $a3, 0x164($sp)
    ctx->pc = 0x27938cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 356); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_279390:
    // 0x279390: 0xb3a80173  sdl         $t0, 0x173($sp)
    ctx->pc = 0x279390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 371); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_279394:
    // 0x279394: 0xb7a8016c  sdr         $t0, 0x16C($sp)
    ctx->pc = 0x279394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 364); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_279398:
    // 0x279398: 0xb3a9017b  sdl         $t1, 0x17B($sp)
    ctx->pc = 0x279398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 379); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27939c:
    // 0x27939c: 0xb7a90174  sdr         $t1, 0x174($sp)
    ctx->pc = 0x27939cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 372); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2793a0:
    // 0x2793a0: 0x6ba30027  ldl         $v1, 0x27($sp)
    ctx->pc = 0x2793a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2793a4:
    // 0x2793a4: 0x6fa30020  ldr         $v1, 0x20($sp)
    ctx->pc = 0x2793a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2793a8:
    // 0x2793a8: 0x6ba4002f  ldl         $a0, 0x2F($sp)
    ctx->pc = 0x2793a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2793ac:
    // 0x2793ac: 0x6fa40028  ldr         $a0, 0x28($sp)
    ctx->pc = 0x2793acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2793b0:
    // 0x2793b0: 0x6ba50037  ldl         $a1, 0x37($sp)
    ctx->pc = 0x2793b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_2793b4:
    // 0x2793b4: 0x6fa50030  ldr         $a1, 0x30($sp)
    ctx->pc = 0x2793b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2793b8:
    // 0x2793b8: 0xb3a30183  sdl         $v1, 0x183($sp)
    ctx->pc = 0x2793b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 387); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2793bc:
    // 0x2793bc: 0xb7a3017c  sdr         $v1, 0x17C($sp)
    ctx->pc = 0x2793bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 380); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2793c0:
    // 0x2793c0: 0xb3a4018b  sdl         $a0, 0x18B($sp)
    ctx->pc = 0x2793c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 395); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2793c4:
    // 0x2793c4: 0xb7a40184  sdr         $a0, 0x184($sp)
    ctx->pc = 0x2793c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 388); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2793c8:
    // 0x2793c8: 0xb3a50193  sdl         $a1, 0x193($sp)
    ctx->pc = 0x2793c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 403); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2793cc:
    // 0x2793cc: 0xb7a5018c  sdr         $a1, 0x18C($sp)
    ctx->pc = 0x2793ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 396); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2793d0:
    // 0x2793d0: 0x8fa70334  lw          $a3, 0x334($sp)
    ctx->pc = 0x2793d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 820)));
label_2793d4:
    // 0x2793d4: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2793d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2793d8:
    // 0x2793d8: 0xafa7019c  sw          $a3, 0x19C($sp)
    ctx->pc = 0x2793d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 7));
label_2793dc:
    // 0x2793dc: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x2793dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2793e0:
    // 0x2793e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2793e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2793e4:
    // 0x2793e4: 0x0  nop
    ctx->pc = 0x2793e4u;
    // NOP
label_2793e8:
    // 0x2793e8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_2793ec:
    if (ctx->pc == 0x2793ECu) {
        ctx->pc = 0x2793ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2793E8u;
        // 0x2793ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2793F0u;
        goto label_2793f0;
    }
    ctx->pc = 0x2793E8u;
    {
        const bool branch_taken_0x2793e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2793ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2793E8u;
        // 0x2793ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2793e8) {
            ctx->pc = 0x2793F8u;
            goto label_2793f8;
        }
    }
    ctx->pc = 0x2793F0u;
label_2793f0:
    // 0x2793f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2793f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2793f4:
    // 0x2793f4: 0x0  nop
    ctx->pc = 0x2793f4u;
    // NOP
label_2793f8:
    // 0x2793f8: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x2793f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2793fc:
    // 0x2793fc: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2793fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279400:
    // 0x279400: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x279400u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279404:
    // 0x279404: 0x0  nop
    ctx->pc = 0x279404u;
    // NOP
label_279408:
    // 0x279408: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_27940c:
    if (ctx->pc == 0x27940Cu) {
        ctx->pc = 0x27940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279408u;
        // 0x27940c: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x279410u;
        goto label_279410;
    }
    ctx->pc = 0x279408u;
    {
        const bool branch_taken_0x279408 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x279408) {
            ctx->pc = 0x27940Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279408u;
            // 0x27940c: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x279410u;
            goto label_279410;
        }
    }
    ctx->pc = 0x279410u;
label_279410:
    // 0x279410: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x279410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_279414:
    // 0x279414: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x279414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279418:
    // 0x279418: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x279418u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27941c:
    // 0x27941c: 0x0  nop
    ctx->pc = 0x27941cu;
    // NOP
label_279420:
    // 0x279420: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_279424:
    if (ctx->pc == 0x279424u) {
        ctx->pc = 0x279424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279420u;
        // 0x279424: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x279428u;
        goto label_279428;
    }
    ctx->pc = 0x279420u;
    {
        const bool branch_taken_0x279420 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x279420) {
            ctx->pc = 0x279424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279420u;
            // 0x279424: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x279428u;
            goto label_279428;
        }
    }
    ctx->pc = 0x279428u;
label_279428:
    // 0x279428: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x279428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27942c:
    // 0x27942c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x27942cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279430:
    // 0x279430: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x279430u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279434:
    // 0x279434: 0x0  nop
    ctx->pc = 0x279434u;
    // NOP
label_279438:
    // 0x279438: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_27943c:
    if (ctx->pc == 0x27943Cu) {
        ctx->pc = 0x27943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279438u;
        // 0x27943c: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x279440u;
        goto label_279440;
    }
    ctx->pc = 0x279438u;
    {
        const bool branch_taken_0x279438 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x279438) {
            ctx->pc = 0x27943Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279438u;
            // 0x27943c: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x279440u;
            goto label_279440;
        }
    }
    ctx->pc = 0x279440u;
label_279440:
    // 0x279440: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x279440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_279444:
    // 0x279444: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x279444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279448:
    // 0x279448: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x279448u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27944c:
    // 0x27944c: 0x0  nop
    ctx->pc = 0x27944cu;
    // NOP
label_279450:
    // 0x279450: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_279454:
    if (ctx->pc == 0x279454u) {
        ctx->pc = 0x279454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279450u;
        // 0x279454: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x279458u;
        goto label_279458;
    }
    ctx->pc = 0x279450u;
    {
        const bool branch_taken_0x279450 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x279450) {
            ctx->pc = 0x279454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279450u;
            // 0x279454: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x279458u;
            goto label_279458;
        }
    }
    ctx->pc = 0x279458u;
label_279458:
    // 0x279458: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x279458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27945c:
    // 0x27945c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x27945cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279460:
    // 0x279460: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x279460u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279464:
    // 0x279464: 0x0  nop
    ctx->pc = 0x279464u;
    // NOP
label_279468:
    // 0x279468: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_27946c:
    if (ctx->pc == 0x27946Cu) {
        ctx->pc = 0x27946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279468u;
        // 0x27946c: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x279470u;
        goto label_279470;
    }
    ctx->pc = 0x279468u;
    {
        const bool branch_taken_0x279468 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x279468) {
            ctx->pc = 0x27946Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279468u;
            // 0x27946c: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x279470u;
            goto label_279470;
        }
    }
    ctx->pc = 0x279470u;
label_279470:
    // 0x279470: 0x8fa80338  lw          $t0, 0x338($sp)
    ctx->pc = 0x279470u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 824)));
label_279474:
    // 0x279474: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x279474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
label_279478:
    // 0x279478: 0xafa802a4  sw          $t0, 0x2A4($sp)
    ctx->pc = 0x279478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 8));
label_27947c:
    // 0x27947c: 0x10000004  b           . + 4 + (0x4 << 2)
label_279480:
    if (ctx->pc == 0x279480u) {
        ctx->pc = 0x279480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27947Cu;
        // 0x279480: 0x27ab019c  addiu       $t3, $sp, 0x19C (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279484u;
        goto label_279484;
    }
    ctx->pc = 0x27947Cu;
    {
        const bool branch_taken_0x27947c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27947Cu;
        // 0x279480: 0x27ab019c  addiu       $t3, $sp, 0x19C (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27947c) {
            ctx->pc = 0x279490u;
            goto label_279490;
        }
    }
    ctx->pc = 0x279484u;
label_279484:
    // 0x279484: 0x8fa9033c  lw          $t1, 0x33C($sp)
    ctx->pc = 0x279484u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_279488:
    // 0x279488: 0x27ab019c  addiu       $t3, $sp, 0x19C
    ctx->pc = 0x279488u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
label_27948c:
    // 0x27948c: 0xafa902a4  sw          $t1, 0x2A4($sp)
    ctx->pc = 0x27948cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 9));
label_279490:
    // 0x279490: 0x8fa302a4  lw          $v1, 0x2A4($sp)
    ctx->pc = 0x279490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
label_279494:
    // 0x279494: 0x163102b  sltu        $v0, $t3, $v1
    ctx->pc = 0x279494u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_279498:
    // 0x279498: 0x1040011e  beqz        $v0, . + 4 + (0x11E << 2)
label_27949c:
    if (ctx->pc == 0x27949Cu) {
        ctx->pc = 0x27949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279498u;
        // 0x27949c: 0x27a20164  addiu       $v0, $sp, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2794A0u;
        goto label_2794a0;
    }
    ctx->pc = 0x279498u;
    {
        const bool branch_taken_0x279498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279498u;
        // 0x27949c: 0x27a20164  addiu       $v0, $sp, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279498) {
            ctx->pc = 0x279914u;
            goto label_279914;
        }
    }
    ctx->pc = 0x2794A0u;
label_2794a0:
    // 0x2794a0: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2794a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_2794a4:
    // 0x2794a4: 0x27a5017c  addiu       $a1, $sp, 0x17C
    ctx->pc = 0x2794a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
label_2794a8:
    // 0x2794a8: 0x27a60188  addiu       $a2, $sp, 0x188
    ctx->pc = 0x2794a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_2794ac:
    // 0x2794ac: 0xafa20340  sw          $v0, 0x340($sp)
    ctx->pc = 0x2794acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 832), GPR_U32(ctx, 2));
label_2794b0:
    // 0x2794b0: 0x241e00ff  addiu       $fp, $zero, 0xFF
    ctx->pc = 0x2794b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2794b4:
    // 0x2794b4: 0xafa40344  sw          $a0, 0x344($sp)
    ctx->pc = 0x2794b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 836), GPR_U32(ctx, 4));
label_2794b8:
    // 0x2794b8: 0xafa50348  sw          $a1, 0x348($sp)
    ctx->pc = 0x2794b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 840), GPR_U32(ctx, 5));
label_2794bc:
    // 0x2794bc: 0xafa6034c  sw          $a2, 0x34C($sp)
    ctx->pc = 0x2794bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 844), GPR_U32(ctx, 6));
label_2794c0:
    // 0x2794c0: 0x8c64fff8  lw          $a0, -0x8($v1)
    ctx->pc = 0x2794c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_2794c4:
    // 0x2794c4: 0x0  nop
    ctx->pc = 0x2794c4u;
    // NOP
label_2794c8:
    // 0x2794c8: 0x2465fff8  addiu       $a1, $v1, -0x8
    ctx->pc = 0x2794c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_2794cc:
    // 0x2794cc: 0x10000067  b           . + 4 + (0x67 << 2)
label_2794d0:
    if (ctx->pc == 0x2794D0u) {
        ctx->pc = 0x2794D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2794CCu;
        // 0x2794d0: 0xafa502a4  sw          $a1, 0x2A4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2794D4u;
        goto label_2794d4;
    }
    ctx->pc = 0x2794CCu;
    {
        const bool branch_taken_0x2794cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2794D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2794CCu;
        // 0x2794d0: 0xafa502a4  sw          $a1, 0x2A4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2794cc) {
            ctx->pc = 0x27966Cu;
            goto label_27966c;
        }
    }
    ctx->pc = 0x2794D4u;
label_2794d4:
    // 0x2794d4: 0x0  nop
    ctx->pc = 0x2794d4u;
    // NOP
label_2794d8:
    // 0x2794d8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2794d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_2794dc:
    // 0x2794dc: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_2794e0:
    if (ctx->pc == 0x2794E0u) {
        ctx->pc = 0x2794E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2794DCu;
        // 0x2794e0: 0x8fa30160  lw          $v1, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2794E4u;
        goto label_2794e4;
    }
    ctx->pc = 0x2794DCu;
    {
        const bool branch_taken_0x2794dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2794E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2794DCu;
        // 0x2794e0: 0x8fa30160  lw          $v1, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2794dc) {
            ctx->pc = 0x27958Cu;
            goto label_27958c;
        }
    }
    ctx->pc = 0x2794E4u;
label_2794e4:
    // 0x2794e4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x2794e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_2794e8:
    // 0x2794e8: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x2794e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_2794ec:
    // 0x2794ec: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x2794ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_2794f0:
    // 0x2794f0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2794f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2794f4:
    // 0x2794f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2794f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2794f8:
    // 0x2794f8: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x2794f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2794fc:
    // 0x2794fc: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x2794fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_279500:
    // 0x279500: 0x145e000a  bne         $v0, $fp, . + 4 + (0xA << 2)
label_279504:
    if (ctx->pc == 0x279504u) {
        ctx->pc = 0x279504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279500u;
        // 0x279504: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279508u;
        goto label_279508;
    }
    ctx->pc = 0x279500u;
    {
        const bool branch_taken_0x279500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x279504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279500u;
        // 0x279504: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279500) {
            ctx->pc = 0x27952Cu;
            goto label_27952c;
        }
    }
    ctx->pc = 0x279508u;
label_279508:
    // 0x279508: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x279508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_27950c:
    // 0x27950c: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x27950cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_279510:
    // 0x279510: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x279510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_279514:
    // 0x279514: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x279514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_279518:
    // 0x279518: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x279518u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_27951c:
    // 0x27951c: 0x0  nop
    ctx->pc = 0x27951cu;
    // NOP
label_279520:
    // 0x279520: 0x0  nop
    ctx->pc = 0x279520u;
    // NOP
label_279524:
    // 0x279524: 0x5067fffa  beql        $v1, $a3, . + 4 + (-0x6 << 2)
label_279528:
    if (ctx->pc == 0x279528u) {
        ctx->pc = 0x279528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279524u;
        // 0x279528: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27952Cu;
        goto label_27952c;
    }
    ctx->pc = 0x279524u;
    {
        const bool branch_taken_0x279524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x279524) {
            ctx->pc = 0x279528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279524u;
            // 0x279528: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279510;
        }
    }
    ctx->pc = 0x27952Cu;
label_27952c:
    // 0x27952c: 0x24c50008  addiu       $a1, $a2, 0x8
    ctx->pc = 0x27952cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_279530:
    // 0x279530: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x279530u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_279534:
    // 0x279534: 0x145e000b  bne         $v0, $fp, . + 4 + (0xB << 2)
label_279538:
    if (ctx->pc == 0x279538u) {
        ctx->pc = 0x279538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279534u;
        // 0x279538: 0x94860002  lhu         $a2, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27953Cu;
        goto label_27953c;
    }
    ctx->pc = 0x279534u;
    {
        const bool branch_taken_0x279534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x279538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279534u;
        // 0x279538: 0x94860002  lhu         $a2, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279534) {
            ctx->pc = 0x279564u;
            goto label_279564;
        }
    }
    ctx->pc = 0x27953Cu;
label_27953c:
    // 0x27953c: 0x8d040020  lw          $a0, 0x20($t0)
    ctx->pc = 0x27953cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_279540:
    // 0x279540: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x279540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_279544:
    // 0x279544: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x279544u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_279548:
    // 0x279548: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x279548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_27954c:
    // 0x27954c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27954cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_279550:
    // 0x279550: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x279550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_279554:
    // 0x279554: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x279554u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_279558:
    // 0x279558: 0x0  nop
    ctx->pc = 0x279558u;
    // NOP
label_27955c:
    // 0x27955c: 0x5067fffa  beql        $v1, $a3, . + 4 + (-0x6 << 2)
label_279560:
    if (ctx->pc == 0x279560u) {
        ctx->pc = 0x279560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27955Cu;
        // 0x279560: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279564u;
        goto label_279564;
    }
    ctx->pc = 0x27955Cu;
    {
        const bool branch_taken_0x27955c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x27955c) {
            ctx->pc = 0x279560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27955Cu;
            // 0x279560: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279548;
        }
    }
    ctx->pc = 0x279564u;
label_279564:
    // 0x279564: 0xa7a602b0  sh          $a2, 0x2B0($sp)
    ctx->pc = 0x279564u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 688), (uint16_t)GPR_U32(ctx, 6));
label_279568:
    // 0x279568: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x279568u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_27956c:
    // 0x27956c: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x27956cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_279570:
    // 0x279570: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x279570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_279574:
    // 0x279574: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x279574u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_279578:
    // 0x279578: 0xa7a202b2  sh          $v0, 0x2B2($sp)
    ctx->pc = 0x279578u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 690), (uint16_t)GPR_U32(ctx, 2));
label_27957c:
    // 0x27957c: 0x10000043  b           . + 4 + (0x43 << 2)
label_279580:
    if (ctx->pc == 0x279580u) {
        ctx->pc = 0x279580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27957Cu;
        // 0x279580: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279584u;
        goto label_279584;
    }
    ctx->pc = 0x27957Cu;
    {
        const bool branch_taken_0x27957c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27957Cu;
        // 0x279580: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27957c) {
            ctx->pc = 0x27968Cu;
            goto label_27968c;
        }
    }
    ctx->pc = 0x279584u;
label_279584:
    // 0x279584: 0x10000037  b           . + 4 + (0x37 << 2)
label_279588:
    if (ctx->pc == 0x279588u) {
        ctx->pc = 0x279588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279584u;
        // 0x279588: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27958Cu;
        goto label_27958c;
    }
    ctx->pc = 0x279584u;
    {
        const bool branch_taken_0x279584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279584u;
        // 0x279588: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279584) {
            ctx->pc = 0x279664u;
            goto label_279664;
        }
    }
    ctx->pc = 0x27958Cu;
label_27958c:
    // 0x27958c: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x27958cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_279590:
    // 0x279590: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x279590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_279594:
    // 0x279594: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x279594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_279598:
    // 0x279598: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x279598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_27959c:
    // 0x27959c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x27959cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2795a0:
    // 0x2795a0: 0x3066000c  andi        $a2, $v1, 0xC
    ctx->pc = 0x2795a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
label_2795a4:
    // 0x2795a4: 0x8fa80340  lw          $t0, 0x340($sp)
    ctx->pc = 0x2795a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
label_2795a8:
    // 0x2795a8: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x2795a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_2795ac:
    // 0x2795ac: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2795acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2795b0:
    // 0x2795b0: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2795b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2795b4:
    // 0x2795b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2795b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2795b8:
    // 0x2795b8: 0x0  nop
    ctx->pc = 0x2795b8u;
    // NOP
label_2795bc:
    // 0x2795bc: 0x4501fff1  bc1t        . + 4 + (-0xF << 2)
label_2795c0:
    if (ctx->pc == 0x2795C0u) {
        ctx->pc = 0x2795C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2795BCu;
        // 0x2795c0: 0x8fa90344  lw          $t1, 0x344($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 836)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2795C4u;
        goto label_2795c4;
    }
    ctx->pc = 0x2795BCu;
    {
        const bool branch_taken_0x2795bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2795C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2795BCu;
        // 0x2795c0: 0x8fa90344  lw          $t1, 0x344($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 836)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2795bc) {
            ctx->pc = 0x279584u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279584;
        }
    }
    ctx->pc = 0x2795C4u;
label_2795c4:
    // 0x2795c4: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x2795c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_2795c8:
    // 0x2795c8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2795c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2795cc:
    // 0x2795cc: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x2795ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_2795d0:
    // 0x2795d0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2795d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_2795d4:
    // 0x2795d4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2795d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2795d8:
    // 0x2795d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2795d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2795dc:
    // 0x2795dc: 0x0  nop
    ctx->pc = 0x2795dcu;
    // NOP
label_2795e0:
    // 0x2795e0: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_2795e4:
    if (ctx->pc == 0x2795E4u) {
        ctx->pc = 0x2795E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2795E0u;
        // 0x2795e4: 0x8fa30348  lw          $v1, 0x348($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 840)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2795E8u;
        goto label_2795e8;
    }
    ctx->pc = 0x2795E0u;
    {
        const bool branch_taken_0x2795e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2795E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2795E0u;
        // 0x2795e4: 0x8fa30348  lw          $v1, 0x348($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2795e0) {
            ctx->pc = 0x279664u;
            goto label_279664;
        }
    }
    ctx->pc = 0x2795E8u;
label_2795e8:
    // 0x2795e8: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x2795e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
label_2795ec:
    // 0x2795ec: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x2795ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2795f0:
    // 0x2795f0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2795f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2795f4:
    // 0x2795f4: 0x24e30008  addiu       $v1, $a3, 0x8
    ctx->pc = 0x2795f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_2795f8:
    // 0x2795f8: 0x8c65fffc  lw          $a1, -0x4($v1)
    ctx->pc = 0x2795f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_2795fc:
    // 0x2795fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2795fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279600:
    // 0x279600: 0xafa302a4  sw          $v1, 0x2A4($sp)
    ctx->pc = 0x279600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 3));
label_279604:
    // 0x279604: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_279608:
    if (ctx->pc == 0x279608u) {
        ctx->pc = 0x279608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279604u;
        // 0x279608: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27960Cu;
        goto label_27960c;
    }
    ctx->pc = 0x279604u;
    {
        const bool branch_taken_0x279604 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x279608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279604u;
        // 0x279608: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279604) {
            ctx->pc = 0x279628u;
            goto label_279628;
        }
    }
    ctx->pc = 0x27960Cu;
label_27960c:
    // 0x27960c: 0x61042  srl         $v0, $a2, 1
    ctx->pc = 0x27960cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_279610:
    // 0x279610: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x279610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_279614:
    // 0x279614: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x279614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_279618:
    // 0x279618: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x279618u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_27961c:
    // 0x27961c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x27961cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_279620:
    // 0x279620: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x279620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_279624:
    // 0x279624: 0x0  nop
    ctx->pc = 0x279624u;
    // NOP
label_279628:
    // 0x279628: 0x8fa8034c  lw          $t0, 0x34C($sp)
    ctx->pc = 0x279628u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_27962c:
    // 0x27962c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x27962cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_279630:
    // 0x279630: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x279630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_279634:
    // 0x279634: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x279634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279638:
    // 0x279638: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x279638u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27963c:
    // 0x27963c: 0x0  nop
    ctx->pc = 0x27963cu;
    // NOP
label_279640:
    // 0x279640: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_279644:
    if (ctx->pc == 0x279644u) {
        ctx->pc = 0x279644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279640u;
        // 0x279644: 0x8fa202a4  lw          $v0, 0x2A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279648u;
        goto label_279648;
    }
    ctx->pc = 0x279640u;
    {
        const bool branch_taken_0x279640 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x279644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279640u;
        // 0x279644: 0x8fa202a4  lw          $v0, 0x2A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279640) {
            ctx->pc = 0x279664u;
            goto label_279664;
        }
    }
    ctx->pc = 0x279648u;
label_279648:
    // 0x279648: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x279648u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_27964c:
    // 0x27964c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x27964cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_279650:
    // 0x279650: 0x8c44fffc  lw          $a0, -0x4($v0)
    ctx->pc = 0x279650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_279654:
    // 0x279654: 0x691804  sllv        $v1, $t1, $v1
    ctx->pc = 0x279654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
label_279658:
    // 0x279658: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x279658u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_27965c:
    // 0x27965c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x27965cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_279660:
    // 0x279660: 0xac44fffc  sw          $a0, -0x4($v0)
    ctx->pc = 0x279660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 4));
label_279664:
    // 0x279664: 0x8fa502a4  lw          $a1, 0x2A4($sp)
    ctx->pc = 0x279664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
label_279668:
    // 0x279668: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x279668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_27966c:
    // 0x27966c: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x27966cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_279670:
    // 0x279670: 0x105eff99  beq         $v0, $fp, . + 4 + (-0x67 << 2)
label_279674:
    if (ctx->pc == 0x279674u) {
        ctx->pc = 0x279674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279670u;
        // 0x279674: 0x8fa702a4  lw          $a3, 0x2A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279678u;
        goto label_279678;
    }
    ctx->pc = 0x279670u;
    {
        const bool branch_taken_0x279670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        ctx->pc = 0x279674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279670u;
        // 0x279674: 0x8fa702a4  lw          $a3, 0x2A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279670) {
            ctx->pc = 0x2794D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2794d8;
        }
    }
    ctx->pc = 0x279678u;
label_279678:
    // 0x279678: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x279678u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_27967c:
    // 0x27967c: 0x8cb60004  lw          $s6, 0x4($a1)
    ctx->pc = 0x27967cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_279680:
    // 0x279680: 0xa7a302b0  sh          $v1, 0x2B0($sp)
    ctx->pc = 0x279680u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 688), (uint16_t)GPR_U32(ctx, 3));
label_279684:
    // 0x279684: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x279684u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_279688:
    // 0x279688: 0xa7a202b2  sh          $v0, 0x2B2($sp)
    ctx->pc = 0x279688u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 690), (uint16_t)GPR_U32(ctx, 2));
label_27968c:
    // 0x27968c: 0x97b402b0  lhu         $s4, 0x2B0($sp)
    ctx->pc = 0x27968cu;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 688)));
label_279690:
    // 0x279690: 0x97a202b2  lhu         $v0, 0x2B2($sp)
    ctx->pc = 0x279690u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 690)));
label_279694:
    // 0x279694: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x279694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_279698:
    // 0x279698: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x279698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_27969c:
    // 0x27969c: 0x1040009a  beqz        $v0, . + 4 + (0x9A << 2)
label_2796a0:
    if (ctx->pc == 0x2796A0u) {
        ctx->pc = 0x2796A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27969Cu;
        // 0x2796a0: 0x8fa302a4  lw          $v1, 0x2A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2796A4u;
        goto label_2796a4;
    }
    ctx->pc = 0x27969Cu;
    {
        const bool branch_taken_0x27969c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2796A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27969Cu;
        // 0x2796a0: 0x8fa302a4  lw          $v1, 0x2A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27969c) {
            ctx->pc = 0x279908u;
            goto label_279908;
        }
    }
    ctx->pc = 0x2796A4u;
label_2796a4:
    // 0x2796a4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2796a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2796a8:
    // 0x2796a8: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x2796a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2796ac:
    // 0x2796ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2796acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2796b0:
    // 0x2796b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2796b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2796b4:
    // 0x2796b4: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x2796b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_2796b8:
    // 0x2796b8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2796bc:
    if (ctx->pc == 0x2796BCu) {
        ctx->pc = 0x2796BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2796B8u;
        // 0x2796bc: 0x141040  sll         $v0, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2796C0u;
        goto label_2796c0;
    }
    ctx->pc = 0x2796B8u;
    {
        const bool branch_taken_0x2796b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2796BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2796B8u;
        // 0x2796bc: 0x141040  sll         $v0, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2796b8) {
            ctx->pc = 0x2796CCu;
            goto label_2796cc;
        }
    }
    ctx->pc = 0x2796C0u;
label_2796c0:
    // 0x2796c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2796c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2796c4:
    // 0x2796c4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2796c8:
    if (ctx->pc == 0x2796C8u) {
        ctx->pc = 0x2796C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2796C4u;
        // 0x2796c8: 0x94550000  lhu         $s5, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2796CCu;
        goto label_2796cc;
    }
    ctx->pc = 0x2796C4u;
    {
        const bool branch_taken_0x2796c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2796C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2796C4u;
        // 0x2796c8: 0x94550000  lhu         $s5, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2796c4) {
            ctx->pc = 0x2796D0u;
            goto label_2796d0;
        }
    }
    ctx->pc = 0x2796CCu;
label_2796cc:
    // 0x2796cc: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x2796ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2796d0:
    // 0x2796d0: 0x8fa30330  lw          $v1, 0x330($sp)
    ctx->pc = 0x2796d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
label_2796d4:
    // 0x2796d4: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x2796d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_2796d8:
    // 0x2796d8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2796d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2796dc:
    // 0x2796dc: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x2796dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_2796e0:
    // 0x2796e0: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2796e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2796e4:
    // 0x2796e4: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x2796e4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2796e8:
    // 0x2796e8: 0x6a1018  mult        $v0, $v1, $t2
    ctx->pc = 0x2796e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2796ec:
    // 0x2796ec: 0x4c9021  addu        $s2, $v0, $t4
    ctx->pc = 0x2796ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
label_2796f0:
    // 0x2796f0: 0x8a1018  mult        $v0, $a0, $t2
    ctx->pc = 0x2796f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2796f4:
    // 0x2796f4: 0x4c8021  addu        $s0, $v0, $t4
    ctx->pc = 0x2796f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
label_2796f8:
    // 0x2796f8: 0xaa1018  mult        $v0, $a1, $t2
    ctx->pc = 0x2796f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2796fc:
    // 0x2796fc: 0x16c0004c  bnez        $s6, . + 4 + (0x4C << 2)
label_279700:
    if (ctx->pc == 0x279700u) {
        ctx->pc = 0x279700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2796FCu;
        // 0x279700: 0x4c8821  addu        $s1, $v0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279704u;
        goto label_279704;
    }
    ctx->pc = 0x2796FCu;
    {
        const bool branch_taken_0x2796fc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x279700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2796FCu;
        // 0x279700: 0x4c8821  addu        $s1, $v0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2796fc) {
            ctx->pc = 0x279830u;
            goto label_279830;
        }
    }
    ctx->pc = 0x279704u;
label_279704:
    // 0x279704: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x279704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279708:
    // 0x279708: 0xc6270000  lwc1        $f7, 0x0($s1)
    ctx->pc = 0x279708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_27970c:
    // 0x27970c: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x27970cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_279710:
    // 0x279710: 0xe7a70300  swc1        $f7, 0x300($sp)
    ctx->pc = 0x279710u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 768), bits); }
label_279714:
    // 0x279714: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x279714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279718:
    // 0x279718: 0xc6260004  lwc1        $f6, 0x4($s1)
    ctx->pc = 0x279718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_27971c:
    // 0x27971c: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x27971cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_279720:
    // 0x279720: 0xe7a60304  swc1        $f6, 0x304($sp)
    ctx->pc = 0x279720u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 772), bits); }
label_279724:
    // 0x279724: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x279724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_279728:
    // 0x279728: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x279728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27972c:
    // 0x27972c: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x27972cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_279730:
    // 0x279730: 0xe7a50308  swc1        $f5, 0x308($sp)
    ctx->pc = 0x279730u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 776), bits); }
label_279734:
    // 0x279734: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x279734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_279738:
    // 0x279738: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x279738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27973c:
    // 0x27973c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x27973cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_279740:
    // 0x279740: 0xe7a20310  swc1        $f2, 0x310($sp)
    ctx->pc = 0x279740u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 784), bits); }
label_279744:
    // 0x279744: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x279744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279748:
    // 0x279748: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x279748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27974c:
    // 0x27974c: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x27974cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_279750:
    // 0x279750: 0xe7a40314  swc1        $f4, 0x314($sp)
    ctx->pc = 0x279750u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 788), bits); }
label_279754:
    // 0x279754: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x279754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_279758:
    // 0x279758: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x279758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27975c:
    // 0x27975c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27975cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_279760:
    // 0x279760: 0xe7a10318  swc1        $f1, 0x318($sp)
    ctx->pc = 0x279760u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 792), bits); }
label_279764:
    // 0x279764: 0x46013002  mul.s       $f0, $f6, $f1
    ctx->pc = 0x279764u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_279768:
    // 0x279768: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x279768u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_27976c:
    // 0x27976c: 0x460438c2  mul.s       $f3, $f7, $f4
    ctx->pc = 0x27976cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_279770:
    // 0x279770: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x279770u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_279774:
    // 0x279774: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x279774u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_279778:
    // 0x279778: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x279778u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_27977c:
    // 0x27977c: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x27977cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
label_279780:
    // 0x279780: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x279780u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_279784:
    // 0x279784: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x279784u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_279788:
    // 0x279788: 0xe7a302c8  swc1        $f3, 0x2C8($sp)
    ctx->pc = 0x279788u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 712), bits); }
label_27978c:
    // 0x27978c: 0xe7a202c4  swc1        $f2, 0x2C4($sp)
    ctx->pc = 0x27978cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 708), bits); }
label_279790:
    // 0x279790: 0xe7a002c0  swc1        $f0, 0x2C0($sp)
    ctx->pc = 0x279790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
label_279794:
    // 0x279794: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x279794u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_279798:
    // 0x279798: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x279798u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_27979c:
    // 0x27979c: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x27979cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_2797a0:
    // 0x2797a0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2797a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2797a4:
    // 0x2797a4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2797a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_2797a8:
    // 0x2797a8: 0x46000004  c1          0x4
    ctx->pc = 0x2797a8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_2797ac:
    // 0x2797ac: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2797acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2797b0:
    // 0x2797b0: 0x0  nop
    ctx->pc = 0x2797b0u;
    // NOP
label_2797b4:
    // 0x2797b4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2797b8:
    if (ctx->pc == 0x2797B8u) {
        ctx->pc = 0x2797B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2797B4u;
        // 0x2797b8: 0xc7a402c0  lwc1        $f4, 0x2C0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2797BCu;
        goto label_2797bc;
    }
    ctx->pc = 0x2797B4u;
    {
        const bool branch_taken_0x2797b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2797B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2797B4u;
        // 0x2797b8: 0xc7a402c0  lwc1        $f4, 0x2C0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2797b4) {
            ctx->pc = 0x2797C0u;
            goto label_2797c0;
        }
    }
    ctx->pc = 0x2797BCu;
label_2797bc:
    // 0x2797bc: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x2797bcu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[0]);
label_2797c0:
    // 0x2797c0: 0xc7a502c4  lwc1        $f5, 0x2C4($sp)
    ctx->pc = 0x2797c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2797c4:
    // 0x2797c4: 0xc7a602c8  lwc1        $f6, 0x2C8($sp)
    ctx->pc = 0x2797c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2797c8:
    // 0x2797c8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2797c8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2797cc:
    // 0x2797cc: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2797ccu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_2797d0:
    // 0x2797d0: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x2797d0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_2797d4:
    // 0x2797d4: 0xe7a402c0  swc1        $f4, 0x2C0($sp)
    ctx->pc = 0x2797d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
label_2797d8:
    // 0x2797d8: 0xe7a502c4  swc1        $f5, 0x2C4($sp)
    ctx->pc = 0x2797d8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 708), bits); }
label_2797dc:
    // 0x2797dc: 0xe7a602c8  swc1        $f6, 0x2C8($sp)
    ctx->pc = 0x2797dcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 712), bits); }
label_2797e0:
    // 0x2797e0: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x2797e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2797e4:
    // 0x2797e4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2797e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2797e8:
    // 0x2797e8: 0xc6e30004  lwc1        $f3, 0x4($s7)
    ctx->pc = 0x2797e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2797ec:
    // 0x2797ec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2797ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2797f0:
    // 0x2797f0: 0xc6e20008  lwc1        $f2, 0x8($s7)
    ctx->pc = 0x2797f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2797f4:
    // 0x2797f4: 0xe7a102f0  swc1        $f1, 0x2F0($sp)
    ctx->pc = 0x2797f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 752), bits); }
label_2797f8:
    // 0x2797f8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2797f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2797fc:
    // 0x2797fc: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2797fcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_279800:
    // 0x279800: 0xe7a302f4  swc1        $f3, 0x2F4($sp)
    ctx->pc = 0x279800u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 756), bits); }
label_279804:
    // 0x279804: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x279804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279808:
    // 0x279808: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x279808u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_27980c:
    // 0x27980c: 0xe7a202f8  swc1        $f2, 0x2F8($sp)
    ctx->pc = 0x27980cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 760), bits); }
label_279810:
    // 0x279810: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x279810u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_279814:
    // 0x279814: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x279814u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_279818:
    // 0x279818: 0x27a602c0  addiu       $a2, $sp, 0x2C0
    ctx->pc = 0x279818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_27981c:
    // 0x27981c: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x27981cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_279820:
    // 0x279820: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x279820u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_279824:
    // 0x279824: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x279824u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_279828:
    // 0x279828: 0x10000012  b           . + 4 + (0x12 << 2)
label_27982c:
    if (ctx->pc == 0x27982Cu) {
        ctx->pc = 0x27982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279828u;
        // 0x27982c: 0xe7a10320  swc1        $f1, 0x320($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 800), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x279830u;
        goto label_279830;
    }
    ctx->pc = 0x279828u;
    {
        const bool branch_taken_0x279828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279828u;
        // 0x27982c: 0xe7a10320  swc1        $f1, 0x320($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 800), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x279828) {
            ctx->pc = 0x279874u;
            goto label_279874;
        }
    }
    ctx->pc = 0x279830u;
label_279830:
    // 0x279830: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x279830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_279834:
    // 0x279834: 0x7faa0350  sq          $t2, 0x350($sp)
    ctx->pc = 0x279834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 10));
label_279838:
    // 0x279838: 0x7fab0360  sq          $t3, 0x360($sp)
    ctx->pc = 0x279838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 11));
label_27983c:
    // 0x27983c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x27983cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_279840:
    // 0x279840: 0x7fac0370  sq          $t4, 0x370($sp)
    ctx->pc = 0x279840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 12));
label_279844:
    // 0x279844: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x279844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_279848:
    // 0x279848: 0x7fad0380  sq          $t5, 0x380($sp)
    ctx->pc = 0x279848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), GPR_VEC(ctx, 13));
label_27984c:
    // 0x27984c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x27984cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_279850:
    // 0x279850: 0x27a802c0  addiu       $t0, $sp, 0x2C0
    ctx->pc = 0x279850u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_279854:
    // 0x279854: 0xc0a43ea  jal         func_290FA8
label_279858:
    if (ctx->pc == 0x279858u) {
        ctx->pc = 0x279858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279854u;
        // 0x279858: 0x27a90320  addiu       $t1, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27985Cu;
        goto label_27985c;
    }
    ctx->pc = 0x279854u;
    SET_GPR_U32(ctx, 31, 0x27985Cu);
    ctx->pc = 0x279858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279854u;
    // 0x279858: 0x27a90320  addiu       $t1, $sp, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x290FA8u, 0x279854u, 0x27985Cu)) {
        return;
    }
    ctx->pc = 0x27985Cu;
label_27985c:
    // 0x27985c: 0x27a602c0  addiu       $a2, $sp, 0x2C0
    ctx->pc = 0x27985cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_279860:
    // 0x279860: 0x7baa0350  lq          $t2, 0x350($sp)
    ctx->pc = 0x279860u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 848)));
label_279864:
    // 0x279864: 0x7bab0360  lq          $t3, 0x360($sp)
    ctx->pc = 0x279864u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 864)));
label_279868:
    // 0x279868: 0x7bac0370  lq          $t4, 0x370($sp)
    ctx->pc = 0x279868u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 880)));
label_27986c:
    // 0x27986c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_279870:
    if (ctx->pc == 0x279870u) {
        ctx->pc = 0x279870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27986Cu;
        // 0x279870: 0x7bad0380  lq          $t5, 0x380($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 896)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279874u;
        goto label_279874;
    }
    ctx->pc = 0x27986Cu;
    {
        const bool branch_taken_0x27986c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27986Cu;
        // 0x279870: 0x7bad0380  lq          $t5, 0x380($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27986c) {
            ctx->pc = 0x2798E4u;
            goto label_2798e4;
        }
    }
    ctx->pc = 0x279874u;
label_279874:
    // 0x279874: 0xc7a00320  lwc1        $f0, 0x320($sp)
    ctx->pc = 0x279874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279878:
    // 0x279878: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x279878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_27987c:
    // 0x27987c: 0x8fa40324  lw          $a0, 0x324($sp)
    ctx->pc = 0x27987cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 804)));
label_279880:
    // 0x279880: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x279880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_279884:
    // 0x279884: 0x8fa7032c  lw          $a3, 0x32C($sp)
    ctx->pc = 0x279884u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 812)));
label_279888:
    // 0x279888: 0xe7a00320  swc1        $f0, 0x320($sp)
    ctx->pc = 0x279888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 800), bits); }
label_27988c:
    // 0x27988c: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x27988cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_279890:
    // 0x279890: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x279890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_279894:
    // 0x279894: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x279894u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_279898:
    // 0x279898: 0xb3a302d3  sdl         $v1, 0x2D3($sp)
    ctx->pc = 0x279898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 723); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27989c:
    // 0x27989c: 0xb7a302cc  sdr         $v1, 0x2CC($sp)
    ctx->pc = 0x27989cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 716); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2798a0:
    // 0x2798a0: 0xafa802d4  sw          $t0, 0x2D4($sp)
    ctx->pc = 0x2798a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 8));
label_2798a4:
    // 0x2798a4: 0x8fa30328  lw          $v1, 0x328($sp)
    ctx->pc = 0x2798a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 808)));
label_2798a8:
    // 0x2798a8: 0xc7ac0320  lwc1        $f12, 0x320($sp)
    ctx->pc = 0x2798a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2798ac:
    // 0x2798ac: 0x7faa0350  sq          $t2, 0x350($sp)
    ctx->pc = 0x2798acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 10));
label_2798b0:
    // 0x2798b0: 0x7fab0360  sq          $t3, 0x360($sp)
    ctx->pc = 0x2798b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 11));
label_2798b4:
    // 0x2798b4: 0x7fac0370  sq          $t4, 0x370($sp)
    ctx->pc = 0x2798b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 12));
label_2798b8:
    // 0x2798b8: 0x7fad0380  sq          $t5, 0x380($sp)
    ctx->pc = 0x2798b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), GPR_VEC(ctx, 13));
label_2798bc:
    // 0x2798bc: 0xafb502d8  sw          $s5, 0x2D8($sp)
    ctx->pc = 0x2798bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 21));
label_2798c0:
    // 0x2798c0: 0xafb002dc  sw          $s0, 0x2DC($sp)
    ctx->pc = 0x2798c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 16));
label_2798c4:
    // 0x2798c4: 0xafb102e0  sw          $s1, 0x2E0($sp)
    ctx->pc = 0x2798c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 17));
label_2798c8:
    // 0x2798c8: 0x60f809  jalr        $v1
label_2798cc:
    if (ctx->pc == 0x2798CCu) {
        ctx->pc = 0x2798CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2798C8u;
        // 0x2798cc: 0xafb202e4  sw          $s2, 0x2E4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2798D0u;
        goto label_2798d0;
    }
    ctx->pc = 0x2798C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2798D0u);
        ctx->pc = 0x2798CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2798C8u;
        // 0x2798cc: 0xafb202e4  sw          $s2, 0x2E4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2798C8u, 0x2798D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2798D0u;
label_2798d0:
    // 0x2798d0: 0x7baa0350  lq          $t2, 0x350($sp)
    ctx->pc = 0x2798d0u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 848)));
label_2798d4:
    // 0x2798d4: 0x7bab0360  lq          $t3, 0x360($sp)
    ctx->pc = 0x2798d4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 864)));
label_2798d8:
    // 0x2798d8: 0x7bac0370  lq          $t4, 0x370($sp)
    ctx->pc = 0x2798d8u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 880)));
label_2798dc:
    // 0x2798dc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2798e0:
    if (ctx->pc == 0x2798E0u) {
        ctx->pc = 0x2798E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2798DCu;
        // 0x2798e0: 0x7bad0380  lq          $t5, 0x380($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 896)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2798E4u;
        goto label_2798e4;
    }
    ctx->pc = 0x2798DCu;
    {
        const bool branch_taken_0x2798dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2798E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2798DCu;
        // 0x2798e0: 0x7bad0380  lq          $t5, 0x380($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2798dc) {
            ctx->pc = 0x279928u;
            goto label_279928;
        }
    }
    ctx->pc = 0x2798E4u;
label_2798e4:
    // 0x2798e4: 0x97a202b0  lhu         $v0, 0x2B0($sp)
    ctx->pc = 0x2798e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 688)));
label_2798e8:
    // 0x2798e8: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x2798e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2798ec:
    // 0x2798ec: 0x97a402b2  lhu         $a0, 0x2B2($sp)
    ctx->pc = 0x2798ecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 690)));
label_2798f0:
    // 0x2798f0: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x2798f0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2798f4:
    // 0x2798f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2798f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2798f8:
    // 0x2798f8: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x2798f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2798fc:
    // 0x2798fc: 0x5440ff6e  bnel        $v0, $zero, . + 4 + (-0x92 << 2)
label_279900:
    if (ctx->pc == 0x279900u) {
        ctx->pc = 0x279900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2798FCu;
        // 0x279900: 0x8e630024  lw          $v1, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279904u;
        goto label_279904;
    }
    ctx->pc = 0x2798FCu;
    {
        const bool branch_taken_0x2798fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2798fc) {
            ctx->pc = 0x279900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2798FCu;
            // 0x279900: 0x8e630024  lw          $v1, 0x24($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2796B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2796b8;
        }
    }
    ctx->pc = 0x279904u;
label_279904:
    // 0x279904: 0x8fa302a4  lw          $v1, 0x2A4($sp)
    ctx->pc = 0x279904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
label_279908:
    // 0x279908: 0x163102b  sltu        $v0, $t3, $v1
    ctx->pc = 0x279908u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_27990c:
    // 0x27990c: 0x5440feee  bnel        $v0, $zero, . + 4 + (-0x112 << 2)
label_279910:
    if (ctx->pc == 0x279910u) {
        ctx->pc = 0x279910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27990Cu;
        // 0x279910: 0x8c64fff8  lw          $a0, -0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279914u;
        goto label_279914;
    }
    ctx->pc = 0x27990Cu;
    {
        const bool branch_taken_0x27990c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27990c) {
            ctx->pc = 0x279910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27990Cu;
            // 0x279910: 0x8c64fff8  lw          $a0, -0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2794C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2794c8;
        }
    }
    ctx->pc = 0x279914u;
label_279914:
    // 0x279914: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x279914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_279918:
    // 0x279918: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x279918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_27991c:
    // 0x27991c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x27991cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_279920:
    // 0x279920: 0x5440fe07  bnel        $v0, $zero, . + 4 + (-0x1F9 << 2)
label_279924:
    if (ctx->pc == 0x279924u) {
        ctx->pc = 0x279924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279920u;
        // 0x279924: 0x8c62fffc  lw          $v0, -0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279928u;
        goto label_279928;
    }
    ctx->pc = 0x279920u;
    {
        const bool branch_taken_0x279920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x279920) {
            ctx->pc = 0x279924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279920u;
            // 0x279924: 0x8c62fffc  lw          $v0, -0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279140;
        }
    }
    ctx->pc = 0x279928u;
label_279928:
    // 0x279928: 0x7bb00420  lq          $s0, 0x420($sp)
    ctx->pc = 0x279928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_27992c:
    // 0x27992c: 0x7bb10410  lq          $s1, 0x410($sp)
    ctx->pc = 0x27992cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_279930:
    // 0x279930: 0x7bb20400  lq          $s2, 0x400($sp)
    ctx->pc = 0x279930u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1024)));
label_279934:
    // 0x279934: 0x7bb303f0  lq          $s3, 0x3F0($sp)
    ctx->pc = 0x279934u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1008)));
label_279938:
    // 0x279938: 0x7bb403e0  lq          $s4, 0x3E0($sp)
    ctx->pc = 0x279938u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 992)));
label_27993c:
    // 0x27993c: 0x7bb503d0  lq          $s5, 0x3D0($sp)
    ctx->pc = 0x27993cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 976)));
label_279940:
    // 0x279940: 0x7bb603c0  lq          $s6, 0x3C0($sp)
    ctx->pc = 0x279940u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 960)));
label_279944:
    // 0x279944: 0x7bb703b0  lq          $s7, 0x3B0($sp)
    ctx->pc = 0x279944u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 944)));
label_279948:
    // 0x279948: 0x7bbe03a0  lq          $fp, 0x3A0($sp)
    ctx->pc = 0x279948u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 928)));
label_27994c:
    // 0x27994c: 0xdfbf0390  ld          $ra, 0x390($sp)
    ctx->pc = 0x27994cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 912)));
label_279950:
    // 0x279950: 0xc7b60440  lwc1        $f22, 0x440($sp)
    ctx->pc = 0x279950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_279954:
    // 0x279954: 0xc7b50438  lwc1        $f21, 0x438($sp)
    ctx->pc = 0x279954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_279958:
    // 0x279958: 0xc7b40430  lwc1        $f20, 0x430($sp)
    ctx->pc = 0x279958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27995c:
    // 0x27995c: 0x3e00008  jr          $ra
label_279960:
    if (ctx->pc == 0x279960u) {
        ctx->pc = 0x279960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27995Cu;
        // 0x279960: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279964u;
        goto label_279964;
    }
    ctx->pc = 0x27995Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27995Cu;
        // 0x279960: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27995Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279964u;
label_279964:
    // 0x279964: 0x0  nop
    ctx->pc = 0x279964u;
    // NOP
    ctx->pc = 0x279968u;
}
