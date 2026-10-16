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

// Function: sub_001EAE50
// Address: 0x1eae50 - 0x1eb6c0
void sub_001EAE50_0x1eae50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EAE50_0x1eae50");
#endif

    switch (ctx->pc) {
        case 0x1eae50u: goto label_1eae50;
        case 0x1eae54u: goto label_1eae54;
        case 0x1eae58u: goto label_1eae58;
        case 0x1eae5cu: goto label_1eae5c;
        case 0x1eae60u: goto label_1eae60;
        case 0x1eae64u: goto label_1eae64;
        case 0x1eae68u: goto label_1eae68;
        case 0x1eae6cu: goto label_1eae6c;
        case 0x1eae70u: goto label_1eae70;
        case 0x1eae74u: goto label_1eae74;
        case 0x1eae78u: goto label_1eae78;
        case 0x1eae7cu: goto label_1eae7c;
        case 0x1eae80u: goto label_1eae80;
        case 0x1eae84u: goto label_1eae84;
        case 0x1eae88u: goto label_1eae88;
        case 0x1eae8cu: goto label_1eae8c;
        case 0x1eae90u: goto label_1eae90;
        case 0x1eae94u: goto label_1eae94;
        case 0x1eae98u: goto label_1eae98;
        case 0x1eae9cu: goto label_1eae9c;
        case 0x1eaea0u: goto label_1eaea0;
        case 0x1eaea4u: goto label_1eaea4;
        case 0x1eaea8u: goto label_1eaea8;
        case 0x1eaeacu: goto label_1eaeac;
        case 0x1eaeb0u: goto label_1eaeb0;
        case 0x1eaeb4u: goto label_1eaeb4;
        case 0x1eaeb8u: goto label_1eaeb8;
        case 0x1eaebcu: goto label_1eaebc;
        case 0x1eaec0u: goto label_1eaec0;
        case 0x1eaec4u: goto label_1eaec4;
        case 0x1eaec8u: goto label_1eaec8;
        case 0x1eaeccu: goto label_1eaecc;
        case 0x1eaed0u: goto label_1eaed0;
        case 0x1eaed4u: goto label_1eaed4;
        case 0x1eaed8u: goto label_1eaed8;
        case 0x1eaedcu: goto label_1eaedc;
        case 0x1eaee0u: goto label_1eaee0;
        case 0x1eaee4u: goto label_1eaee4;
        case 0x1eaee8u: goto label_1eaee8;
        case 0x1eaeecu: goto label_1eaeec;
        case 0x1eaef0u: goto label_1eaef0;
        case 0x1eaef4u: goto label_1eaef4;
        case 0x1eaef8u: goto label_1eaef8;
        case 0x1eaefcu: goto label_1eaefc;
        case 0x1eaf00u: goto label_1eaf00;
        case 0x1eaf04u: goto label_1eaf04;
        case 0x1eaf08u: goto label_1eaf08;
        case 0x1eaf0cu: goto label_1eaf0c;
        case 0x1eaf10u: goto label_1eaf10;
        case 0x1eaf14u: goto label_1eaf14;
        case 0x1eaf18u: goto label_1eaf18;
        case 0x1eaf1cu: goto label_1eaf1c;
        case 0x1eaf20u: goto label_1eaf20;
        case 0x1eaf24u: goto label_1eaf24;
        case 0x1eaf28u: goto label_1eaf28;
        case 0x1eaf2cu: goto label_1eaf2c;
        case 0x1eaf30u: goto label_1eaf30;
        case 0x1eaf34u: goto label_1eaf34;
        case 0x1eaf38u: goto label_1eaf38;
        case 0x1eaf3cu: goto label_1eaf3c;
        case 0x1eaf40u: goto label_1eaf40;
        case 0x1eaf44u: goto label_1eaf44;
        case 0x1eaf48u: goto label_1eaf48;
        case 0x1eaf4cu: goto label_1eaf4c;
        case 0x1eaf50u: goto label_1eaf50;
        case 0x1eaf54u: goto label_1eaf54;
        case 0x1eaf58u: goto label_1eaf58;
        case 0x1eaf5cu: goto label_1eaf5c;
        case 0x1eaf60u: goto label_1eaf60;
        case 0x1eaf64u: goto label_1eaf64;
        case 0x1eaf68u: goto label_1eaf68;
        case 0x1eaf6cu: goto label_1eaf6c;
        case 0x1eaf70u: goto label_1eaf70;
        case 0x1eaf74u: goto label_1eaf74;
        case 0x1eaf78u: goto label_1eaf78;
        case 0x1eaf7cu: goto label_1eaf7c;
        case 0x1eaf80u: goto label_1eaf80;
        case 0x1eaf84u: goto label_1eaf84;
        case 0x1eaf88u: goto label_1eaf88;
        case 0x1eaf8cu: goto label_1eaf8c;
        case 0x1eaf90u: goto label_1eaf90;
        case 0x1eaf94u: goto label_1eaf94;
        case 0x1eaf98u: goto label_1eaf98;
        case 0x1eaf9cu: goto label_1eaf9c;
        case 0x1eafa0u: goto label_1eafa0;
        case 0x1eafa4u: goto label_1eafa4;
        case 0x1eafa8u: goto label_1eafa8;
        case 0x1eafacu: goto label_1eafac;
        case 0x1eafb0u: goto label_1eafb0;
        case 0x1eafb4u: goto label_1eafb4;
        case 0x1eafb8u: goto label_1eafb8;
        case 0x1eafbcu: goto label_1eafbc;
        case 0x1eafc0u: goto label_1eafc0;
        case 0x1eafc4u: goto label_1eafc4;
        case 0x1eafc8u: goto label_1eafc8;
        case 0x1eafccu: goto label_1eafcc;
        case 0x1eafd0u: goto label_1eafd0;
        case 0x1eafd4u: goto label_1eafd4;
        case 0x1eafd8u: goto label_1eafd8;
        case 0x1eafdcu: goto label_1eafdc;
        case 0x1eafe0u: goto label_1eafe0;
        case 0x1eafe4u: goto label_1eafe4;
        case 0x1eafe8u: goto label_1eafe8;
        case 0x1eafecu: goto label_1eafec;
        case 0x1eaff0u: goto label_1eaff0;
        case 0x1eaff4u: goto label_1eaff4;
        case 0x1eaff8u: goto label_1eaff8;
        case 0x1eaffcu: goto label_1eaffc;
        case 0x1eb000u: goto label_1eb000;
        case 0x1eb004u: goto label_1eb004;
        case 0x1eb008u: goto label_1eb008;
        case 0x1eb00cu: goto label_1eb00c;
        case 0x1eb010u: goto label_1eb010;
        case 0x1eb014u: goto label_1eb014;
        case 0x1eb018u: goto label_1eb018;
        case 0x1eb01cu: goto label_1eb01c;
        case 0x1eb020u: goto label_1eb020;
        case 0x1eb024u: goto label_1eb024;
        case 0x1eb028u: goto label_1eb028;
        case 0x1eb02cu: goto label_1eb02c;
        case 0x1eb030u: goto label_1eb030;
        case 0x1eb034u: goto label_1eb034;
        case 0x1eb038u: goto label_1eb038;
        case 0x1eb03cu: goto label_1eb03c;
        case 0x1eb040u: goto label_1eb040;
        case 0x1eb044u: goto label_1eb044;
        case 0x1eb048u: goto label_1eb048;
        case 0x1eb04cu: goto label_1eb04c;
        case 0x1eb050u: goto label_1eb050;
        case 0x1eb054u: goto label_1eb054;
        case 0x1eb058u: goto label_1eb058;
        case 0x1eb05cu: goto label_1eb05c;
        case 0x1eb060u: goto label_1eb060;
        case 0x1eb064u: goto label_1eb064;
        case 0x1eb068u: goto label_1eb068;
        case 0x1eb06cu: goto label_1eb06c;
        case 0x1eb070u: goto label_1eb070;
        case 0x1eb074u: goto label_1eb074;
        case 0x1eb078u: goto label_1eb078;
        case 0x1eb07cu: goto label_1eb07c;
        case 0x1eb080u: goto label_1eb080;
        case 0x1eb084u: goto label_1eb084;
        case 0x1eb088u: goto label_1eb088;
        case 0x1eb08cu: goto label_1eb08c;
        case 0x1eb090u: goto label_1eb090;
        case 0x1eb094u: goto label_1eb094;
        case 0x1eb098u: goto label_1eb098;
        case 0x1eb09cu: goto label_1eb09c;
        case 0x1eb0a0u: goto label_1eb0a0;
        case 0x1eb0a4u: goto label_1eb0a4;
        case 0x1eb0a8u: goto label_1eb0a8;
        case 0x1eb0acu: goto label_1eb0ac;
        case 0x1eb0b0u: goto label_1eb0b0;
        case 0x1eb0b4u: goto label_1eb0b4;
        case 0x1eb0b8u: goto label_1eb0b8;
        case 0x1eb0bcu: goto label_1eb0bc;
        case 0x1eb0c0u: goto label_1eb0c0;
        case 0x1eb0c4u: goto label_1eb0c4;
        case 0x1eb0c8u: goto label_1eb0c8;
        case 0x1eb0ccu: goto label_1eb0cc;
        case 0x1eb0d0u: goto label_1eb0d0;
        case 0x1eb0d4u: goto label_1eb0d4;
        case 0x1eb0d8u: goto label_1eb0d8;
        case 0x1eb0dcu: goto label_1eb0dc;
        case 0x1eb0e0u: goto label_1eb0e0;
        case 0x1eb0e4u: goto label_1eb0e4;
        case 0x1eb0e8u: goto label_1eb0e8;
        case 0x1eb0ecu: goto label_1eb0ec;
        case 0x1eb0f0u: goto label_1eb0f0;
        case 0x1eb0f4u: goto label_1eb0f4;
        case 0x1eb0f8u: goto label_1eb0f8;
        case 0x1eb0fcu: goto label_1eb0fc;
        case 0x1eb100u: goto label_1eb100;
        case 0x1eb104u: goto label_1eb104;
        case 0x1eb108u: goto label_1eb108;
        case 0x1eb10cu: goto label_1eb10c;
        case 0x1eb110u: goto label_1eb110;
        case 0x1eb114u: goto label_1eb114;
        case 0x1eb118u: goto label_1eb118;
        case 0x1eb11cu: goto label_1eb11c;
        case 0x1eb120u: goto label_1eb120;
        case 0x1eb124u: goto label_1eb124;
        case 0x1eb128u: goto label_1eb128;
        case 0x1eb12cu: goto label_1eb12c;
        case 0x1eb130u: goto label_1eb130;
        case 0x1eb134u: goto label_1eb134;
        case 0x1eb138u: goto label_1eb138;
        case 0x1eb13cu: goto label_1eb13c;
        case 0x1eb140u: goto label_1eb140;
        case 0x1eb144u: goto label_1eb144;
        case 0x1eb148u: goto label_1eb148;
        case 0x1eb14cu: goto label_1eb14c;
        case 0x1eb150u: goto label_1eb150;
        case 0x1eb154u: goto label_1eb154;
        case 0x1eb158u: goto label_1eb158;
        case 0x1eb15cu: goto label_1eb15c;
        case 0x1eb160u: goto label_1eb160;
        case 0x1eb164u: goto label_1eb164;
        case 0x1eb168u: goto label_1eb168;
        case 0x1eb16cu: goto label_1eb16c;
        case 0x1eb170u: goto label_1eb170;
        case 0x1eb174u: goto label_1eb174;
        case 0x1eb178u: goto label_1eb178;
        case 0x1eb17cu: goto label_1eb17c;
        case 0x1eb180u: goto label_1eb180;
        case 0x1eb184u: goto label_1eb184;
        case 0x1eb188u: goto label_1eb188;
        case 0x1eb18cu: goto label_1eb18c;
        case 0x1eb190u: goto label_1eb190;
        case 0x1eb194u: goto label_1eb194;
        case 0x1eb198u: goto label_1eb198;
        case 0x1eb19cu: goto label_1eb19c;
        case 0x1eb1a0u: goto label_1eb1a0;
        case 0x1eb1a4u: goto label_1eb1a4;
        case 0x1eb1a8u: goto label_1eb1a8;
        case 0x1eb1acu: goto label_1eb1ac;
        case 0x1eb1b0u: goto label_1eb1b0;
        case 0x1eb1b4u: goto label_1eb1b4;
        case 0x1eb1b8u: goto label_1eb1b8;
        case 0x1eb1bcu: goto label_1eb1bc;
        case 0x1eb1c0u: goto label_1eb1c0;
        case 0x1eb1c4u: goto label_1eb1c4;
        case 0x1eb1c8u: goto label_1eb1c8;
        case 0x1eb1ccu: goto label_1eb1cc;
        case 0x1eb1d0u: goto label_1eb1d0;
        case 0x1eb1d4u: goto label_1eb1d4;
        case 0x1eb1d8u: goto label_1eb1d8;
        case 0x1eb1dcu: goto label_1eb1dc;
        case 0x1eb1e0u: goto label_1eb1e0;
        case 0x1eb1e4u: goto label_1eb1e4;
        case 0x1eb1e8u: goto label_1eb1e8;
        case 0x1eb1ecu: goto label_1eb1ec;
        case 0x1eb1f0u: goto label_1eb1f0;
        case 0x1eb1f4u: goto label_1eb1f4;
        case 0x1eb1f8u: goto label_1eb1f8;
        case 0x1eb1fcu: goto label_1eb1fc;
        case 0x1eb200u: goto label_1eb200;
        case 0x1eb204u: goto label_1eb204;
        case 0x1eb208u: goto label_1eb208;
        case 0x1eb20cu: goto label_1eb20c;
        case 0x1eb210u: goto label_1eb210;
        case 0x1eb214u: goto label_1eb214;
        case 0x1eb218u: goto label_1eb218;
        case 0x1eb21cu: goto label_1eb21c;
        case 0x1eb220u: goto label_1eb220;
        case 0x1eb224u: goto label_1eb224;
        case 0x1eb228u: goto label_1eb228;
        case 0x1eb22cu: goto label_1eb22c;
        case 0x1eb230u: goto label_1eb230;
        case 0x1eb234u: goto label_1eb234;
        case 0x1eb238u: goto label_1eb238;
        case 0x1eb23cu: goto label_1eb23c;
        case 0x1eb240u: goto label_1eb240;
        case 0x1eb244u: goto label_1eb244;
        case 0x1eb248u: goto label_1eb248;
        case 0x1eb24cu: goto label_1eb24c;
        case 0x1eb250u: goto label_1eb250;
        case 0x1eb254u: goto label_1eb254;
        case 0x1eb258u: goto label_1eb258;
        case 0x1eb25cu: goto label_1eb25c;
        case 0x1eb260u: goto label_1eb260;
        case 0x1eb264u: goto label_1eb264;
        case 0x1eb268u: goto label_1eb268;
        case 0x1eb26cu: goto label_1eb26c;
        case 0x1eb270u: goto label_1eb270;
        case 0x1eb274u: goto label_1eb274;
        case 0x1eb278u: goto label_1eb278;
        case 0x1eb27cu: goto label_1eb27c;
        case 0x1eb280u: goto label_1eb280;
        case 0x1eb284u: goto label_1eb284;
        case 0x1eb288u: goto label_1eb288;
        case 0x1eb28cu: goto label_1eb28c;
        case 0x1eb290u: goto label_1eb290;
        case 0x1eb294u: goto label_1eb294;
        case 0x1eb298u: goto label_1eb298;
        case 0x1eb29cu: goto label_1eb29c;
        case 0x1eb2a0u: goto label_1eb2a0;
        case 0x1eb2a4u: goto label_1eb2a4;
        case 0x1eb2a8u: goto label_1eb2a8;
        case 0x1eb2acu: goto label_1eb2ac;
        case 0x1eb2b0u: goto label_1eb2b0;
        case 0x1eb2b4u: goto label_1eb2b4;
        case 0x1eb2b8u: goto label_1eb2b8;
        case 0x1eb2bcu: goto label_1eb2bc;
        case 0x1eb2c0u: goto label_1eb2c0;
        case 0x1eb2c4u: goto label_1eb2c4;
        case 0x1eb2c8u: goto label_1eb2c8;
        case 0x1eb2ccu: goto label_1eb2cc;
        case 0x1eb2d0u: goto label_1eb2d0;
        case 0x1eb2d4u: goto label_1eb2d4;
        case 0x1eb2d8u: goto label_1eb2d8;
        case 0x1eb2dcu: goto label_1eb2dc;
        case 0x1eb2e0u: goto label_1eb2e0;
        case 0x1eb2e4u: goto label_1eb2e4;
        case 0x1eb2e8u: goto label_1eb2e8;
        case 0x1eb2ecu: goto label_1eb2ec;
        case 0x1eb2f0u: goto label_1eb2f0;
        case 0x1eb2f4u: goto label_1eb2f4;
        case 0x1eb2f8u: goto label_1eb2f8;
        case 0x1eb2fcu: goto label_1eb2fc;
        case 0x1eb300u: goto label_1eb300;
        case 0x1eb304u: goto label_1eb304;
        case 0x1eb308u: goto label_1eb308;
        case 0x1eb30cu: goto label_1eb30c;
        case 0x1eb310u: goto label_1eb310;
        case 0x1eb314u: goto label_1eb314;
        case 0x1eb318u: goto label_1eb318;
        case 0x1eb31cu: goto label_1eb31c;
        case 0x1eb320u: goto label_1eb320;
        case 0x1eb324u: goto label_1eb324;
        case 0x1eb328u: goto label_1eb328;
        case 0x1eb32cu: goto label_1eb32c;
        case 0x1eb330u: goto label_1eb330;
        case 0x1eb334u: goto label_1eb334;
        case 0x1eb338u: goto label_1eb338;
        case 0x1eb33cu: goto label_1eb33c;
        case 0x1eb340u: goto label_1eb340;
        case 0x1eb344u: goto label_1eb344;
        case 0x1eb348u: goto label_1eb348;
        case 0x1eb34cu: goto label_1eb34c;
        case 0x1eb350u: goto label_1eb350;
        case 0x1eb354u: goto label_1eb354;
        case 0x1eb358u: goto label_1eb358;
        case 0x1eb35cu: goto label_1eb35c;
        case 0x1eb360u: goto label_1eb360;
        case 0x1eb364u: goto label_1eb364;
        case 0x1eb368u: goto label_1eb368;
        case 0x1eb36cu: goto label_1eb36c;
        case 0x1eb370u: goto label_1eb370;
        case 0x1eb374u: goto label_1eb374;
        case 0x1eb378u: goto label_1eb378;
        case 0x1eb37cu: goto label_1eb37c;
        case 0x1eb380u: goto label_1eb380;
        case 0x1eb384u: goto label_1eb384;
        case 0x1eb388u: goto label_1eb388;
        case 0x1eb38cu: goto label_1eb38c;
        case 0x1eb390u: goto label_1eb390;
        case 0x1eb394u: goto label_1eb394;
        case 0x1eb398u: goto label_1eb398;
        case 0x1eb39cu: goto label_1eb39c;
        case 0x1eb3a0u: goto label_1eb3a0;
        case 0x1eb3a4u: goto label_1eb3a4;
        case 0x1eb3a8u: goto label_1eb3a8;
        case 0x1eb3acu: goto label_1eb3ac;
        case 0x1eb3b0u: goto label_1eb3b0;
        case 0x1eb3b4u: goto label_1eb3b4;
        case 0x1eb3b8u: goto label_1eb3b8;
        case 0x1eb3bcu: goto label_1eb3bc;
        case 0x1eb3c0u: goto label_1eb3c0;
        case 0x1eb3c4u: goto label_1eb3c4;
        case 0x1eb3c8u: goto label_1eb3c8;
        case 0x1eb3ccu: goto label_1eb3cc;
        case 0x1eb3d0u: goto label_1eb3d0;
        case 0x1eb3d4u: goto label_1eb3d4;
        case 0x1eb3d8u: goto label_1eb3d8;
        case 0x1eb3dcu: goto label_1eb3dc;
        case 0x1eb3e0u: goto label_1eb3e0;
        case 0x1eb3e4u: goto label_1eb3e4;
        case 0x1eb3e8u: goto label_1eb3e8;
        case 0x1eb3ecu: goto label_1eb3ec;
        case 0x1eb3f0u: goto label_1eb3f0;
        case 0x1eb3f4u: goto label_1eb3f4;
        case 0x1eb3f8u: goto label_1eb3f8;
        case 0x1eb3fcu: goto label_1eb3fc;
        case 0x1eb400u: goto label_1eb400;
        case 0x1eb404u: goto label_1eb404;
        case 0x1eb408u: goto label_1eb408;
        case 0x1eb40cu: goto label_1eb40c;
        case 0x1eb410u: goto label_1eb410;
        case 0x1eb414u: goto label_1eb414;
        case 0x1eb418u: goto label_1eb418;
        case 0x1eb41cu: goto label_1eb41c;
        case 0x1eb420u: goto label_1eb420;
        case 0x1eb424u: goto label_1eb424;
        case 0x1eb428u: goto label_1eb428;
        case 0x1eb42cu: goto label_1eb42c;
        case 0x1eb430u: goto label_1eb430;
        case 0x1eb434u: goto label_1eb434;
        case 0x1eb438u: goto label_1eb438;
        case 0x1eb43cu: goto label_1eb43c;
        case 0x1eb440u: goto label_1eb440;
        case 0x1eb444u: goto label_1eb444;
        case 0x1eb448u: goto label_1eb448;
        case 0x1eb44cu: goto label_1eb44c;
        case 0x1eb450u: goto label_1eb450;
        case 0x1eb454u: goto label_1eb454;
        case 0x1eb458u: goto label_1eb458;
        case 0x1eb45cu: goto label_1eb45c;
        case 0x1eb460u: goto label_1eb460;
        case 0x1eb464u: goto label_1eb464;
        case 0x1eb468u: goto label_1eb468;
        case 0x1eb46cu: goto label_1eb46c;
        case 0x1eb470u: goto label_1eb470;
        case 0x1eb474u: goto label_1eb474;
        case 0x1eb478u: goto label_1eb478;
        case 0x1eb47cu: goto label_1eb47c;
        case 0x1eb480u: goto label_1eb480;
        case 0x1eb484u: goto label_1eb484;
        case 0x1eb488u: goto label_1eb488;
        case 0x1eb48cu: goto label_1eb48c;
        case 0x1eb490u: goto label_1eb490;
        case 0x1eb494u: goto label_1eb494;
        case 0x1eb498u: goto label_1eb498;
        case 0x1eb49cu: goto label_1eb49c;
        case 0x1eb4a0u: goto label_1eb4a0;
        case 0x1eb4a4u: goto label_1eb4a4;
        case 0x1eb4a8u: goto label_1eb4a8;
        case 0x1eb4acu: goto label_1eb4ac;
        case 0x1eb4b0u: goto label_1eb4b0;
        case 0x1eb4b4u: goto label_1eb4b4;
        case 0x1eb4b8u: goto label_1eb4b8;
        case 0x1eb4bcu: goto label_1eb4bc;
        case 0x1eb4c0u: goto label_1eb4c0;
        case 0x1eb4c4u: goto label_1eb4c4;
        case 0x1eb4c8u: goto label_1eb4c8;
        case 0x1eb4ccu: goto label_1eb4cc;
        case 0x1eb4d0u: goto label_1eb4d0;
        case 0x1eb4d4u: goto label_1eb4d4;
        case 0x1eb4d8u: goto label_1eb4d8;
        case 0x1eb4dcu: goto label_1eb4dc;
        case 0x1eb4e0u: goto label_1eb4e0;
        case 0x1eb4e4u: goto label_1eb4e4;
        case 0x1eb4e8u: goto label_1eb4e8;
        case 0x1eb4ecu: goto label_1eb4ec;
        case 0x1eb4f0u: goto label_1eb4f0;
        case 0x1eb4f4u: goto label_1eb4f4;
        case 0x1eb4f8u: goto label_1eb4f8;
        case 0x1eb4fcu: goto label_1eb4fc;
        case 0x1eb500u: goto label_1eb500;
        case 0x1eb504u: goto label_1eb504;
        case 0x1eb508u: goto label_1eb508;
        case 0x1eb50cu: goto label_1eb50c;
        case 0x1eb510u: goto label_1eb510;
        case 0x1eb514u: goto label_1eb514;
        case 0x1eb518u: goto label_1eb518;
        case 0x1eb51cu: goto label_1eb51c;
        case 0x1eb520u: goto label_1eb520;
        case 0x1eb524u: goto label_1eb524;
        case 0x1eb528u: goto label_1eb528;
        case 0x1eb52cu: goto label_1eb52c;
        case 0x1eb530u: goto label_1eb530;
        case 0x1eb534u: goto label_1eb534;
        case 0x1eb538u: goto label_1eb538;
        case 0x1eb53cu: goto label_1eb53c;
        case 0x1eb540u: goto label_1eb540;
        case 0x1eb544u: goto label_1eb544;
        case 0x1eb548u: goto label_1eb548;
        case 0x1eb54cu: goto label_1eb54c;
        case 0x1eb550u: goto label_1eb550;
        case 0x1eb554u: goto label_1eb554;
        case 0x1eb558u: goto label_1eb558;
        case 0x1eb55cu: goto label_1eb55c;
        case 0x1eb560u: goto label_1eb560;
        case 0x1eb564u: goto label_1eb564;
        case 0x1eb568u: goto label_1eb568;
        case 0x1eb56cu: goto label_1eb56c;
        case 0x1eb570u: goto label_1eb570;
        case 0x1eb574u: goto label_1eb574;
        case 0x1eb578u: goto label_1eb578;
        case 0x1eb57cu: goto label_1eb57c;
        case 0x1eb580u: goto label_1eb580;
        case 0x1eb584u: goto label_1eb584;
        case 0x1eb588u: goto label_1eb588;
        case 0x1eb58cu: goto label_1eb58c;
        case 0x1eb590u: goto label_1eb590;
        case 0x1eb594u: goto label_1eb594;
        case 0x1eb598u: goto label_1eb598;
        case 0x1eb59cu: goto label_1eb59c;
        case 0x1eb5a0u: goto label_1eb5a0;
        case 0x1eb5a4u: goto label_1eb5a4;
        case 0x1eb5a8u: goto label_1eb5a8;
        case 0x1eb5acu: goto label_1eb5ac;
        case 0x1eb5b0u: goto label_1eb5b0;
        case 0x1eb5b4u: goto label_1eb5b4;
        case 0x1eb5b8u: goto label_1eb5b8;
        case 0x1eb5bcu: goto label_1eb5bc;
        case 0x1eb5c0u: goto label_1eb5c0;
        case 0x1eb5c4u: goto label_1eb5c4;
        case 0x1eb5c8u: goto label_1eb5c8;
        case 0x1eb5ccu: goto label_1eb5cc;
        case 0x1eb5d0u: goto label_1eb5d0;
        case 0x1eb5d4u: goto label_1eb5d4;
        case 0x1eb5d8u: goto label_1eb5d8;
        case 0x1eb5dcu: goto label_1eb5dc;
        case 0x1eb5e0u: goto label_1eb5e0;
        case 0x1eb5e4u: goto label_1eb5e4;
        case 0x1eb5e8u: goto label_1eb5e8;
        case 0x1eb5ecu: goto label_1eb5ec;
        case 0x1eb5f0u: goto label_1eb5f0;
        case 0x1eb5f4u: goto label_1eb5f4;
        case 0x1eb5f8u: goto label_1eb5f8;
        case 0x1eb5fcu: goto label_1eb5fc;
        case 0x1eb600u: goto label_1eb600;
        case 0x1eb604u: goto label_1eb604;
        case 0x1eb608u: goto label_1eb608;
        case 0x1eb60cu: goto label_1eb60c;
        case 0x1eb610u: goto label_1eb610;
        case 0x1eb614u: goto label_1eb614;
        case 0x1eb618u: goto label_1eb618;
        case 0x1eb61cu: goto label_1eb61c;
        case 0x1eb620u: goto label_1eb620;
        case 0x1eb624u: goto label_1eb624;
        case 0x1eb628u: goto label_1eb628;
        case 0x1eb62cu: goto label_1eb62c;
        case 0x1eb630u: goto label_1eb630;
        case 0x1eb634u: goto label_1eb634;
        case 0x1eb638u: goto label_1eb638;
        case 0x1eb63cu: goto label_1eb63c;
        case 0x1eb640u: goto label_1eb640;
        case 0x1eb644u: goto label_1eb644;
        case 0x1eb648u: goto label_1eb648;
        case 0x1eb64cu: goto label_1eb64c;
        case 0x1eb650u: goto label_1eb650;
        case 0x1eb654u: goto label_1eb654;
        case 0x1eb658u: goto label_1eb658;
        case 0x1eb65cu: goto label_1eb65c;
        case 0x1eb660u: goto label_1eb660;
        case 0x1eb664u: goto label_1eb664;
        case 0x1eb668u: goto label_1eb668;
        case 0x1eb66cu: goto label_1eb66c;
        case 0x1eb670u: goto label_1eb670;
        case 0x1eb674u: goto label_1eb674;
        case 0x1eb678u: goto label_1eb678;
        case 0x1eb67cu: goto label_1eb67c;
        case 0x1eb680u: goto label_1eb680;
        case 0x1eb684u: goto label_1eb684;
        case 0x1eb688u: goto label_1eb688;
        case 0x1eb68cu: goto label_1eb68c;
        case 0x1eb690u: goto label_1eb690;
        case 0x1eb694u: goto label_1eb694;
        case 0x1eb698u: goto label_1eb698;
        case 0x1eb69cu: goto label_1eb69c;
        case 0x1eb6a0u: goto label_1eb6a0;
        case 0x1eb6a4u: goto label_1eb6a4;
        case 0x1eb6a8u: goto label_1eb6a8;
        case 0x1eb6acu: goto label_1eb6ac;
        case 0x1eb6b0u: goto label_1eb6b0;
        case 0x1eb6b4u: goto label_1eb6b4;
        case 0x1eb6b8u: goto label_1eb6b8;
        case 0x1eb6bcu: goto label_1eb6bc;
        default: break;
    }

    ctx->pc = 0x1eae50u;

label_1eae50:
    // 0x1eae50: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x1eae50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_1eae54:
    // 0x1eae54: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1eae54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1eae58:
    // 0x1eae58: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x1eae58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
label_1eae5c:
    // 0x1eae5c: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x1eae5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
label_1eae60:
    // 0x1eae60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1eae60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1eae64:
    // 0x1eae64: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x1eae64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
label_1eae68:
    // 0x1eae68: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x1eae68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
label_1eae6c:
    // 0x1eae6c: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x1eae6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
label_1eae70:
    // 0x1eae70: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x1eae70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
label_1eae74:
    // 0x1eae74: 0x7fb70110  sq          $s7, 0x110($sp)
    ctx->pc = 0x1eae74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 23));
label_1eae78:
    // 0x1eae78: 0x7fbe0100  sq          $fp, 0x100($sp)
    ctx->pc = 0x1eae78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 30));
label_1eae7c:
    // 0x1eae7c: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x1eae7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
label_1eae80:
    // 0x1eae80: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x1eae80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
label_1eae84:
    // 0x1eae84: 0xc078ec8  jal         func_1E3B20
label_1eae88:
    if (ctx->pc == 0x1EAE88u) {
        ctx->pc = 0x1EAE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAE84u;
        // 0x1eae88: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAE8Cu;
        goto label_1eae8c;
    }
    ctx->pc = 0x1EAE84u;
    SET_GPR_U32(ctx, 31, 0x1EAE8Cu);
    ctx->pc = 0x1EAE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAE84u;
    // 0x1eae88: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EAE84u, 0x1EAE8Cu)) {
        return;
    }
    ctx->pc = 0x1EAE8Cu;
label_1eae8c:
    // 0x1eae8c: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x1eae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1eae90:
    // 0x1eae90: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1eae90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1eae94:
    // 0x1eae94: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x1eae94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_1eae98:
    // 0x1eae98: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x1eae98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1eae9c:
    // 0x1eae9c: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x1eae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1eaea0:
    // 0x1eaea0: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x1eaea0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1eaea4:
    // 0x1eaea4: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x1eaea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
label_1eaea8:
    // 0x1eaea8: 0x27b50040  addiu       $s5, $sp, 0x40
    ctx->pc = 0x1eaea8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1eaeac:
    // 0x1eaeac: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1eaeacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1eaeb0:
    // 0x1eaeb0: 0x27b60050  addiu       $s6, $sp, 0x50
    ctx->pc = 0x1eaeb0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1eaeb4:
    // 0x1eaeb4: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x1eaeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
label_1eaeb8:
    // 0x1eaeb8: 0x27b70060  addiu       $s7, $sp, 0x60
    ctx->pc = 0x1eaeb8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1eaebc:
    // 0x1eaebc: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x1eaebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1eaec0:
    // 0x1eaec0: 0x27be0070  addiu       $fp, $sp, 0x70
    ctx->pc = 0x1eaec0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1eaec4:
    // 0x1eaec4: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x1eaec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
label_1eaec8:
    // 0x1eaec8: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x1eaec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1eaecc:
    // 0x1eaecc: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x1eaeccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_1eaed0:
    // 0x1eaed0: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1eaed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_1eaed4:
    // 0x1eaed4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_1eaed8:
    if (ctx->pc == 0x1EAED8u) {
        ctx->pc = 0x1EAED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAED4u;
        // 0x1eaed8: 0xae200020  sw          $zero, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAEDCu;
        goto label_1eaedc;
    }
    ctx->pc = 0x1EAED4u;
    {
        const bool branch_taken_0x1eaed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAED4u;
        // 0x1eaed8: 0xae200020  sw          $zero, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaed4) {
            ctx->pc = 0x1EAF44u;
            goto label_1eaf44;
        }
    }
    ctx->pc = 0x1EAEDCu;
label_1eaedc:
    // 0x1eaedc: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x1eaedcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1eaee0:
    // 0x1eaee0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1eaee0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eaee4:
    // 0x1eaee4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1eaee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1eaee8:
    // 0x1eaee8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1eaee8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1eaeec:
    // 0x1eaeec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1eaeecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1eaef0:
    // 0x1eaef0: 0x8ce20020  lw          $v0, 0x20($a3)
    ctx->pc = 0x1eaef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
label_1eaef4:
    // 0x1eaef4: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1eaef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1eaef8:
    // 0x1eaef8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1eaef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_1eaefc:
    // 0x1eaefc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1eaefcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1eaf00:
    // 0x1eaf00: 0x24460008  addiu       $a2, $v0, 0x8
    ctx->pc = 0x1eaf00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1eaf04:
    // 0x1eaf04: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_1eaf08:
    if (ctx->pc == 0x1EAF08u) {
        ctx->pc = 0x1EAF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF04u;
        // 0x1eaf08: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAF0Cu;
        goto label_1eaf0c;
    }
    ctx->pc = 0x1EAF04u;
    {
        const bool branch_taken_0x1eaf04 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1EAF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF04u;
        // 0x1eaf08: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaf04) {
            ctx->pc = 0x1EAF18u;
            goto label_1eaf18;
        }
    }
    ctx->pc = 0x1EAF0Cu;
label_1eaf0c:
    // 0x1eaf0c: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x1eaf0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1eaf10:
    // 0x1eaf10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1eaf14:
    if (ctx->pc == 0x1EAF14u) {
        ctx->pc = 0x1EAF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF10u;
        // 0x1eaf14: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAF18u;
        goto label_1eaf18;
    }
    ctx->pc = 0x1EAF10u;
    {
        const bool branch_taken_0x1eaf10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EAF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF10u;
        // 0x1eaf14: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaf10) {
            ctx->pc = 0x1EAF20u;
            goto label_1eaf20;
        }
    }
    ctx->pc = 0x1EAF18u;
label_1eaf18:
    // 0x1eaf18: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1eaf18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1eaf1c:
    // 0x1eaf1c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1eaf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1eaf20:
    // 0x1eaf20: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1eaf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1eaf24:
    // 0x1eaf24: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1eaf24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eaf28:
    // 0x1eaf28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1eaf28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1eaf2c:
    // 0x1eaf2c: 0x0  nop
    ctx->pc = 0x1eaf2cu;
    // NOP
label_1eaf30:
    // 0x1eaf30: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1eaf34:
    if (ctx->pc == 0x1EAF34u) {
        ctx->pc = 0x1EAF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF30u;
        // 0x1eaf34: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAF38u;
        goto label_1eaf38;
    }
    ctx->pc = 0x1EAF30u;
    {
        const bool branch_taken_0x1eaf30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EAF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF30u;
        // 0x1eaf34: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaf30) {
            ctx->pc = 0x1EAF44u;
            goto label_1eaf44;
        }
    }
    ctx->pc = 0x1EAF38u;
label_1eaf38:
    // 0x1eaf38: 0x48182b  sltu        $v1, $v0, $t0
    ctx->pc = 0x1eaf38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1eaf3c:
    // 0x1eaf3c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_1eaf40:
    if (ctx->pc == 0x1EAF40u) {
        ctx->pc = 0x1EAF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF3Cu;
        // 0x1eaf40: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAF44u;
        goto label_1eaf44;
    }
    ctx->pc = 0x1EAF3Cu;
    {
        const bool branch_taken_0x1eaf3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EAF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF3Cu;
        // 0x1eaf40: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaf3c) {
            ctx->pc = 0x1EAEF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eaef0;
        }
    }
    ctx->pc = 0x1EAF44u;
label_1eaf44:
    // 0x1eaf44: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1eaf44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1eaf48:
    // 0x1eaf48: 0xc078ec8  jal         func_1E3B20
label_1eaf4c:
    if (ctx->pc == 0x1EAF4Cu) {
        ctx->pc = 0x1EAF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF48u;
        // 0x1eaf4c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAF50u;
        goto label_1eaf50;
    }
    ctx->pc = 0x1EAF48u;
    SET_GPR_U32(ctx, 31, 0x1EAF50u);
    ctx->pc = 0x1EAF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAF48u;
    // 0x1eaf4c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EAF48u, 0x1EAF50u)) {
        return;
    }
    ctx->pc = 0x1EAF50u;
label_1eaf50:
    // 0x1eaf50: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x1eaf50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1eaf54:
    // 0x1eaf54: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1eaf54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1eaf58:
    // 0x1eaf58: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1eaf58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1eaf5c:
    // 0x1eaf5c: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1eaf5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1eaf60:
    // 0x1eaf60: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1eaf60u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_1eaf64:
    // 0x1eaf64: 0xc078ec8  jal         func_1E3B20
label_1eaf68:
    if (ctx->pc == 0x1EAF68u) {
        ctx->pc = 0x1EAF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF64u;
        // 0x1eaf68: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAF6Cu;
        goto label_1eaf6c;
    }
    ctx->pc = 0x1EAF64u;
    SET_GPR_U32(ctx, 31, 0x1EAF6Cu);
    ctx->pc = 0x1EAF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAF64u;
    // 0x1eaf68: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EAF64u, 0x1EAF6Cu)) {
        return;
    }
    ctx->pc = 0x1EAF6Cu;
label_1eaf6c:
    // 0x1eaf6c: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x1eaf6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1eaf70:
    // 0x1eaf70: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1eaf70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1eaf74:
    // 0x1eaf74: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1eaf74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1eaf78:
    // 0x1eaf78: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1eaf78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1eaf7c:
    // 0x1eaf7c: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1eaf7cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_1eaf80:
    // 0x1eaf80: 0xc078ec8  jal         func_1E3B20
label_1eaf84:
    if (ctx->pc == 0x1EAF84u) {
        ctx->pc = 0x1EAF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF80u;
        // 0x1eaf84: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAF88u;
        goto label_1eaf88;
    }
    ctx->pc = 0x1EAF80u;
    SET_GPR_U32(ctx, 31, 0x1EAF88u);
    ctx->pc = 0x1EAF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAF80u;
    // 0x1eaf84: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EAF80u, 0x1EAF88u)) {
        return;
    }
    ctx->pc = 0x1EAF88u;
label_1eaf88:
    // 0x1eaf88: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x1eaf88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1eaf8c:
    // 0x1eaf8c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1eaf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1eaf90:
    // 0x1eaf90: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1eaf90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1eaf94:
    // 0x1eaf94: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1eaf94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1eaf98:
    // 0x1eaf98: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1eaf98u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_1eaf9c:
    // 0x1eaf9c: 0xc078ec8  jal         func_1E3B20
label_1eafa0:
    if (ctx->pc == 0x1EAFA0u) {
        ctx->pc = 0x1EAFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF9Cu;
        // 0x1eafa0: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAFA4u;
        goto label_1eafa4;
    }
    ctx->pc = 0x1EAF9Cu;
    SET_GPR_U32(ctx, 31, 0x1EAFA4u);
    ctx->pc = 0x1EAFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAF9Cu;
    // 0x1eafa0: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EAF9Cu, 0x1EAFA4u)) {
        return;
    }
    ctx->pc = 0x1EAFA4u;
label_1eafa4:
    // 0x1eafa4: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x1eafa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1eafa8:
    // 0x1eafa8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1eafa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1eafac:
    // 0x1eafac: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1eafacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1eafb0:
    // 0x1eafb0: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1eafb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1eafb4:
    // 0x1eafb4: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1eafb4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_1eafb8:
    // 0x1eafb8: 0xc078ec8  jal         func_1E3B20
label_1eafbc:
    if (ctx->pc == 0x1EAFBCu) {
        ctx->pc = 0x1EAFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAFB8u;
        // 0x1eafbc: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAFC0u;
        goto label_1eafc0;
    }
    ctx->pc = 0x1EAFB8u;
    SET_GPR_U32(ctx, 31, 0x1EAFC0u);
    ctx->pc = 0x1EAFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAFB8u;
    // 0x1eafbc: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EAFB8u, 0x1EAFC0u)) {
        return;
    }
    ctx->pc = 0x1EAFC0u;
label_1eafc0:
    // 0x1eafc0: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x1eafc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1eafc4:
    // 0x1eafc4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1eafc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1eafc8:
    // 0x1eafc8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1eafc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1eafcc:
    // 0x1eafcc: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1eafccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1eafd0:
    // 0x1eafd0: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1eafd0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_1eafd4:
    // 0x1eafd4: 0xc078ec8  jal         func_1E3B20
label_1eafd8:
    if (ctx->pc == 0x1EAFD8u) {
        ctx->pc = 0x1EAFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAFD4u;
        // 0x1eafd8: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAFDCu;
        goto label_1eafdc;
    }
    ctx->pc = 0x1EAFD4u;
    SET_GPR_U32(ctx, 31, 0x1EAFDCu);
    ctx->pc = 0x1EAFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAFD4u;
    // 0x1eafd8: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EAFD4u, 0x1EAFDCu)) {
        return;
    }
    ctx->pc = 0x1EAFDCu;
label_1eafdc:
    // 0x1eafdc: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x1eafdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1eafe0:
    // 0x1eafe0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1eafe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1eafe4:
    // 0x1eafe4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1eafe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1eafe8:
    // 0x1eafe8: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1eafe8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1eafec:
    // 0x1eafec: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1eafecu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_1eaff0:
    // 0x1eaff0: 0xc078ec8  jal         func_1E3B20
label_1eaff4:
    if (ctx->pc == 0x1EAFF4u) {
        ctx->pc = 0x1EAFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAFF0u;
        // 0x1eaff4: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAFF8u;
        goto label_1eaff8;
    }
    ctx->pc = 0x1EAFF0u;
    SET_GPR_U32(ctx, 31, 0x1EAFF8u);
    ctx->pc = 0x1EAFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAFF0u;
    // 0x1eaff4: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EAFF0u, 0x1EAFF8u)) {
        return;
    }
    ctx->pc = 0x1EAFF8u;
label_1eaff8:
    // 0x1eaff8: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x1eaff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1eaffc:
    // 0x1eaffc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1eaffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1eb000:
    // 0x1eb000: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1eb000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1eb004:
    // 0x1eb004: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1eb004u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1eb008:
    // 0x1eb008: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1eb008u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_1eb00c:
    // 0x1eb00c: 0xc078ec8  jal         func_1E3B20
label_1eb010:
    if (ctx->pc == 0x1EB010u) {
        ctx->pc = 0x1EB010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB00Cu;
        // 0x1eb010: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB014u;
        goto label_1eb014;
    }
    ctx->pc = 0x1EB00Cu;
    SET_GPR_U32(ctx, 31, 0x1EB014u);
    ctx->pc = 0x1EB010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB00Cu;
    // 0x1eb010: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EB00Cu, 0x1EB014u)) {
        return;
    }
    ctx->pc = 0x1EB014u;
label_1eb014:
    // 0x1eb014: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x1eb014u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1eb018:
    // 0x1eb018: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1eb018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1eb01c:
    // 0x1eb01c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1eb01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1eb020:
    // 0x1eb020: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1eb020u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1eb024:
    // 0x1eb024: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1eb024u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_1eb028:
    // 0x1eb028: 0xc078ec8  jal         func_1E3B20
label_1eb02c:
    if (ctx->pc == 0x1EB02Cu) {
        ctx->pc = 0x1EB02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB028u;
        // 0x1eb02c: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB030u;
        goto label_1eb030;
    }
    ctx->pc = 0x1EB028u;
    SET_GPR_U32(ctx, 31, 0x1EB030u);
    ctx->pc = 0x1EB02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB028u;
    // 0x1eb02c: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EB028u, 0x1EB030u)) {
        return;
    }
    ctx->pc = 0x1EB030u;
label_1eb030:
    // 0x1eb030: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x1eb030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1eb034:
    // 0x1eb034: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1eb034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1eb038:
    // 0x1eb038: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1eb038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1eb03c:
    // 0x1eb03c: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1eb03cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1eb040:
    // 0x1eb040: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1eb040u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_1eb044:
    // 0x1eb044: 0xc078ec8  jal         func_1E3B20
label_1eb048:
    if (ctx->pc == 0x1EB048u) {
        ctx->pc = 0x1EB048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB044u;
        // 0x1eb048: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB04Cu;
        goto label_1eb04c;
    }
    ctx->pc = 0x1EB044u;
    SET_GPR_U32(ctx, 31, 0x1EB04Cu);
    ctx->pc = 0x1EB048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB044u;
    // 0x1eb048: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EB044u, 0x1EB04Cu)) {
        return;
    }
    ctx->pc = 0x1EB04Cu;
label_1eb04c:
    // 0x1eb04c: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x1eb04cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1eb050:
    // 0x1eb050: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1eb050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1eb054:
    // 0x1eb054: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1eb054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1eb058:
    // 0x1eb058: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1eb058u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1eb05c:
    // 0x1eb05c: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1eb05cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_1eb060:
    // 0x1eb060: 0xc078ec8  jal         func_1E3B20
label_1eb064:
    if (ctx->pc == 0x1EB064u) {
        ctx->pc = 0x1EB064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB060u;
        // 0x1eb064: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB068u;
        goto label_1eb068;
    }
    ctx->pc = 0x1EB060u;
    SET_GPR_U32(ctx, 31, 0x1EB068u);
    ctx->pc = 0x1EB064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB060u;
    // 0x1eb064: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EB060u, 0x1EB068u)) {
        return;
    }
    ctx->pc = 0x1EB068u;
label_1eb068:
    // 0x1eb068: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x1eb068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1eb06c:
    // 0x1eb06c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1eb06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1eb070:
    // 0x1eb070: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1eb070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1eb074:
    // 0x1eb074: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1eb074u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1eb078:
    // 0x1eb078: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1eb078u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_1eb07c:
    // 0x1eb07c: 0xc078ec8  jal         func_1E3B20
label_1eb080:
    if (ctx->pc == 0x1EB080u) {
        ctx->pc = 0x1EB080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB07Cu;
        // 0x1eb080: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB084u;
        goto label_1eb084;
    }
    ctx->pc = 0x1EB07Cu;
    SET_GPR_U32(ctx, 31, 0x1EB084u);
    ctx->pc = 0x1EB080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB07Cu;
    // 0x1eb080: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EB07Cu, 0x1EB084u)) {
        return;
    }
    ctx->pc = 0x1EB084u;
label_1eb084:
    // 0x1eb084: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x1eb084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1eb088:
    // 0x1eb088: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1eb088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1eb08c:
    // 0x1eb08c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1eb08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1eb090:
    // 0x1eb090: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1eb090u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1eb094:
    // 0x1eb094: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1eb094u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_1eb098:
    // 0x1eb098: 0xc078ec8  jal         func_1E3B20
label_1eb09c:
    if (ctx->pc == 0x1EB09Cu) {
        ctx->pc = 0x1EB09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB098u;
        // 0x1eb09c: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB0A0u;
        goto label_1eb0a0;
    }
    ctx->pc = 0x1EB098u;
    SET_GPR_U32(ctx, 31, 0x1EB0A0u);
    ctx->pc = 0x1EB09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB098u;
    // 0x1eb09c: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EB098u, 0x1EB0A0u)) {
        return;
    }
    ctx->pc = 0x1EB0A0u;
label_1eb0a0:
    // 0x1eb0a0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1eb0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1eb0a4:
    // 0x1eb0a4: 0x24100044  addiu       $s0, $zero, 0x44
    ctx->pc = 0x1eb0a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_1eb0a8:
    // 0x1eb0a8: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x1eb0a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1eb0ac:
    // 0x1eb0ac: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1eb0acu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
label_1eb0b0:
    // 0x1eb0b0: 0x508018  mult        $s0, $v0, $s0
    ctx->pc = 0x1eb0b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_1eb0b4:
    // 0x1eb0b4: 0xc0932d4  jal         func_24CB50
label_1eb0b8:
    if (ctx->pc == 0x1EB0B8u) {
        ctx->pc = 0x1EB0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB0B4u;
        // 0x1eb0b8: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB0BCu;
        goto label_1eb0bc;
    }
    ctx->pc = 0x1EB0B4u;
    SET_GPR_U32(ctx, 31, 0x1EB0BCu);
    ctx->pc = 0x1EB0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB0B4u;
    // 0x1eb0b8: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EB0B4u, 0x1EB0BCu)) {
        return;
    }
    ctx->pc = 0x1EB0BCu;
label_1eb0bc:
    // 0x1eb0bc: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1eb0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1eb0c0:
    // 0x1eb0c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eb0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb0c4:
    // 0x1eb0c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1eb0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1eb0c8:
    // 0x1eb0c8: 0x40f809  jalr        $v0
label_1eb0cc:
    if (ctx->pc == 0x1EB0CCu) {
        ctx->pc = 0x1EB0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB0C8u;
        // 0x1eb0cc: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB0D0u;
        goto label_1eb0d0;
    }
    ctx->pc = 0x1EB0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EB0D0u);
        ctx->pc = 0x1EB0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB0C8u;
        // 0x1eb0cc: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB0C8u, 0x1EB0D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EB0D0u;
label_1eb0d0:
    // 0x1eb0d0: 0xc0932d4  jal         func_24CB50
label_1eb0d4:
    if (ctx->pc == 0x1EB0D4u) {
        ctx->pc = 0x1EB0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB0D0u;
        // 0x1eb0d4: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB0D8u;
        goto label_1eb0d8;
    }
    ctx->pc = 0x1EB0D0u;
    SET_GPR_U32(ctx, 31, 0x1EB0D8u);
    ctx->pc = 0x1EB0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB0D0u;
    // 0x1eb0d4: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EB0D0u, 0x1EB0D8u)) {
        return;
    }
    ctx->pc = 0x1EB0D8u;
label_1eb0d8:
    // 0x1eb0d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1eb0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1eb0dc:
    // 0x1eb0dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eb0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eb0e0:
    // 0x1eb0e0: 0x40f809  jalr        $v0
label_1eb0e4:
    if (ctx->pc == 0x1EB0E4u) {
        ctx->pc = 0x1EB0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB0E0u;
        // 0x1eb0e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB0E8u;
        goto label_1eb0e8;
    }
    ctx->pc = 0x1EB0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EB0E8u);
        ctx->pc = 0x1EB0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB0E0u;
        // 0x1eb0e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB0E0u, 0x1EB0E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EB0E8u;
label_1eb0e8:
    // 0x1eb0e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1eb0e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eb0ec:
    // 0x1eb0ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1eb0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eb0f0:
    // 0x1eb0f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eb0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb0f4:
    // 0x1eb0f4: 0xc0c493d  jal         func_3124F4
label_1eb0f8:
    if (ctx->pc == 0x1EB0F8u) {
        ctx->pc = 0x1EB0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB0F4u;
        // 0x1eb0f8: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB0FCu;
        goto label_1eb0fc;
    }
    ctx->pc = 0x1EB0F4u;
    SET_GPR_U32(ctx, 31, 0x1EB0FCu);
    ctx->pc = 0x1EB0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB0F4u;
    // 0x1eb0f8: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1EB0F4u, 0x1EB0FCu)) {
        return;
    }
    ctx->pc = 0x1EB0FCu;
label_1eb0fc:
    // 0x1eb0fc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1eb0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1eb100:
    // 0x1eb100: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1eb100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1eb104:
    // 0x1eb104: 0xc078ee6  jal         func_1E3B98
label_1eb108:
    if (ctx->pc == 0x1EB108u) {
        ctx->pc = 0x1EB108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB104u;
        // 0x1eb108: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB10Cu;
        goto label_1eb10c;
    }
    ctx->pc = 0x1EB104u;
    SET_GPR_U32(ctx, 31, 0x1EB10Cu);
    ctx->pc = 0x1EB108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB104u;
    // 0x1eb108: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EB104u, 0x1EB10Cu)) {
        return;
    }
    ctx->pc = 0x1EB10Cu;
label_1eb10c:
    // 0x1eb10c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1eb10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1eb110:
    // 0x1eb110: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1eb110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1eb114:
    // 0x1eb114: 0xc078ee6  jal         func_1E3B98
label_1eb118:
    if (ctx->pc == 0x1EB118u) {
        ctx->pc = 0x1EB118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB114u;
        // 0x1eb118: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB11Cu;
        goto label_1eb11c;
    }
    ctx->pc = 0x1EB114u;
    SET_GPR_U32(ctx, 31, 0x1EB11Cu);
    ctx->pc = 0x1EB118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB114u;
    // 0x1eb118: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EB114u, 0x1EB11Cu)) {
        return;
    }
    ctx->pc = 0x1EB11Cu;
label_1eb11c:
    // 0x1eb11c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1eb11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1eb120:
    // 0x1eb120: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1eb120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1eb124:
    // 0x1eb124: 0xc078ee6  jal         func_1E3B98
label_1eb128:
    if (ctx->pc == 0x1EB128u) {
        ctx->pc = 0x1EB128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB124u;
        // 0x1eb128: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB12Cu;
        goto label_1eb12c;
    }
    ctx->pc = 0x1EB124u;
    SET_GPR_U32(ctx, 31, 0x1EB12Cu);
    ctx->pc = 0x1EB128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB124u;
    // 0x1eb128: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EB124u, 0x1EB12Cu)) {
        return;
    }
    ctx->pc = 0x1EB12Cu;
label_1eb12c:
    // 0x1eb12c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1eb12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1eb130:
    // 0x1eb130: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1eb130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1eb134:
    // 0x1eb134: 0xc078ee6  jal         func_1E3B98
label_1eb138:
    if (ctx->pc == 0x1EB138u) {
        ctx->pc = 0x1EB138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB134u;
        // 0x1eb138: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB13Cu;
        goto label_1eb13c;
    }
    ctx->pc = 0x1EB134u;
    SET_GPR_U32(ctx, 31, 0x1EB13Cu);
    ctx->pc = 0x1EB138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB134u;
    // 0x1eb138: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EB134u, 0x1EB13Cu)) {
        return;
    }
    ctx->pc = 0x1EB13Cu;
label_1eb13c:
    // 0x1eb13c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1eb13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1eb140:
    // 0x1eb140: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1eb140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1eb144:
    // 0x1eb144: 0xc078ee6  jal         func_1E3B98
label_1eb148:
    if (ctx->pc == 0x1EB148u) {
        ctx->pc = 0x1EB148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB144u;
        // 0x1eb148: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB14Cu;
        goto label_1eb14c;
    }
    ctx->pc = 0x1EB144u;
    SET_GPR_U32(ctx, 31, 0x1EB14Cu);
    ctx->pc = 0x1EB148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB144u;
    // 0x1eb148: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EB144u, 0x1EB14Cu)) {
        return;
    }
    ctx->pc = 0x1EB14Cu;
label_1eb14c:
    // 0x1eb14c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1eb14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1eb150:
    // 0x1eb150: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1eb150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1eb154:
    // 0x1eb154: 0xc078ee6  jal         func_1E3B98
label_1eb158:
    if (ctx->pc == 0x1EB158u) {
        ctx->pc = 0x1EB158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB154u;
        // 0x1eb158: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB15Cu;
        goto label_1eb15c;
    }
    ctx->pc = 0x1EB154u;
    SET_GPR_U32(ctx, 31, 0x1EB15Cu);
    ctx->pc = 0x1EB158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB154u;
    // 0x1eb158: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EB154u, 0x1EB15Cu)) {
        return;
    }
    ctx->pc = 0x1EB15Cu;
label_1eb15c:
    // 0x1eb15c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1eb15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1eb160:
    // 0x1eb160: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1eb160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1eb164:
    // 0x1eb164: 0xc078ee6  jal         func_1E3B98
label_1eb168:
    if (ctx->pc == 0x1EB168u) {
        ctx->pc = 0x1EB168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB164u;
        // 0x1eb168: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB16Cu;
        goto label_1eb16c;
    }
    ctx->pc = 0x1EB164u;
    SET_GPR_U32(ctx, 31, 0x1EB16Cu);
    ctx->pc = 0x1EB168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB164u;
    // 0x1eb168: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EB164u, 0x1EB16Cu)) {
        return;
    }
    ctx->pc = 0x1EB16Cu;
label_1eb16c:
    // 0x1eb16c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1eb16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1eb170:
    // 0x1eb170: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1eb170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1eb174:
    // 0x1eb174: 0xc078ee6  jal         func_1E3B98
label_1eb178:
    if (ctx->pc == 0x1EB178u) {
        ctx->pc = 0x1EB178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB174u;
        // 0x1eb178: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB17Cu;
        goto label_1eb17c;
    }
    ctx->pc = 0x1EB174u;
    SET_GPR_U32(ctx, 31, 0x1EB17Cu);
    ctx->pc = 0x1EB178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB174u;
    // 0x1eb178: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EB174u, 0x1EB17Cu)) {
        return;
    }
    ctx->pc = 0x1EB17Cu;
label_1eb17c:
    // 0x1eb17c: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x1eb17cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1eb180:
    // 0x1eb180: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1eb180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1eb184:
    // 0x1eb184: 0xc078ee6  jal         func_1E3B98
label_1eb188:
    if (ctx->pc == 0x1EB188u) {
        ctx->pc = 0x1EB188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB184u;
        // 0x1eb188: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB18Cu;
        goto label_1eb18c;
    }
    ctx->pc = 0x1EB184u;
    SET_GPR_U32(ctx, 31, 0x1EB18Cu);
    ctx->pc = 0x1EB188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB184u;
    // 0x1eb188: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EB184u, 0x1EB18Cu)) {
        return;
    }
    ctx->pc = 0x1EB18Cu;
label_1eb18c:
    // 0x1eb18c: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x1eb18cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_1eb190:
    // 0x1eb190: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1eb190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1eb194:
    // 0x1eb194: 0xc078ee6  jal         func_1E3B98
label_1eb198:
    if (ctx->pc == 0x1EB198u) {
        ctx->pc = 0x1EB198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB194u;
        // 0x1eb198: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB19Cu;
        goto label_1eb19c;
    }
    ctx->pc = 0x1EB194u;
    SET_GPR_U32(ctx, 31, 0x1EB19Cu);
    ctx->pc = 0x1EB198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB194u;
    // 0x1eb198: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EB194u, 0x1EB19Cu)) {
        return;
    }
    ctx->pc = 0x1EB19Cu;
label_1eb19c:
    // 0x1eb19c: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1eb19cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1eb1a0:
    // 0x1eb1a0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1eb1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1eb1a4:
    // 0x1eb1a4: 0xc078ee6  jal         func_1E3B98
label_1eb1a8:
    if (ctx->pc == 0x1EB1A8u) {
        ctx->pc = 0x1EB1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB1A4u;
        // 0x1eb1a8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB1ACu;
        goto label_1eb1ac;
    }
    ctx->pc = 0x1EB1A4u;
    SET_GPR_U32(ctx, 31, 0x1EB1ACu);
    ctx->pc = 0x1EB1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB1A4u;
    // 0x1eb1a8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EB1A4u, 0x1EB1ACu)) {
        return;
    }
    ctx->pc = 0x1EB1ACu;
label_1eb1ac:
    // 0x1eb1ac: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x1eb1acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1eb1b0:
    // 0x1eb1b0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1eb1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1eb1b4:
    // 0x1eb1b4: 0xc078ee6  jal         func_1E3B98
label_1eb1b8:
    if (ctx->pc == 0x1EB1B8u) {
        ctx->pc = 0x1EB1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB1B4u;
        // 0x1eb1b8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB1BCu;
        goto label_1eb1bc;
    }
    ctx->pc = 0x1EB1B4u;
    SET_GPR_U32(ctx, 31, 0x1EB1BCu);
    ctx->pc = 0x1EB1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB1B4u;
    // 0x1eb1b8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EB1B4u, 0x1EB1BCu)) {
        return;
    }
    ctx->pc = 0x1EB1BCu;
label_1eb1bc:
    // 0x1eb1bc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1eb1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1eb1c0:
    // 0x1eb1c0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1eb1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1eb1c4:
    // 0x1eb1c4: 0xc078ee6  jal         func_1E3B98
label_1eb1c8:
    if (ctx->pc == 0x1EB1C8u) {
        ctx->pc = 0x1EB1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB1C4u;
        // 0x1eb1c8: 0x8fa600e0  lw          $a2, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB1CCu;
        goto label_1eb1cc;
    }
    ctx->pc = 0x1EB1C4u;
    SET_GPR_U32(ctx, 31, 0x1EB1CCu);
    ctx->pc = 0x1EB1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB1C4u;
    // 0x1eb1c8: 0x8fa600e0  lw          $a2, 0xE0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EB1C4u, 0x1EB1CCu)) {
        return;
    }
    ctx->pc = 0x1EB1CCu;
label_1eb1cc:
    // 0x1eb1cc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1eb1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1eb1d0:
    // 0x1eb1d0: 0x184000ce  blez        $v0, . + 4 + (0xCE << 2)
label_1eb1d4:
    if (ctx->pc == 0x1EB1D4u) {
        ctx->pc = 0x1EB1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB1D0u;
        // 0x1eb1d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB1D8u;
        goto label_1eb1d8;
    }
    ctx->pc = 0x1EB1D0u;
    {
        const bool branch_taken_0x1eb1d0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1EB1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB1D0u;
        // 0x1eb1d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb1d0) {
            ctx->pc = 0x1EB50Cu;
            goto label_1eb50c;
        }
    }
    ctx->pc = 0x1EB1D8u;
label_1eb1d8:
    // 0x1eb1d8: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1eb1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_1eb1dc:
    // 0x1eb1dc: 0x0  nop
    ctx->pc = 0x1eb1dcu;
    // NOP
label_1eb1e0:
    // 0x1eb1e0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1eb1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1eb1e4:
    // 0x1eb1e4: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x1eb1e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1eb1e8:
    // 0x1eb1e8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1eb1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1eb1ec:
    // 0x1eb1ec: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
label_1eb1f0:
    if (ctx->pc == 0x1EB1F0u) {
        ctx->pc = 0x1EB1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB1ECu;
        // 0x1eb1f0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB1F4u;
        goto label_1eb1f4;
    }
    ctx->pc = 0x1EB1ECu;
    {
        const bool branch_taken_0x1eb1ec = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1EB1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB1ECu;
        // 0x1eb1f0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb1ec) {
            ctx->pc = 0x1EB210u;
            goto label_1eb210;
        }
    }
    ctx->pc = 0x1EB1F4u;
label_1eb1f4:
    // 0x1eb1f4: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x1eb1f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1eb1f8:
    // 0x1eb1f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1eb1fc:
    if (ctx->pc == 0x1EB1FCu) {
        ctx->pc = 0x1EB1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB1F8u;
        // 0x1eb1fc: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB200u;
        goto label_1eb200;
    }
    ctx->pc = 0x1EB1F8u;
    {
        const bool branch_taken_0x1eb1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB1F8u;
        // 0x1eb1fc: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb1f8) {
            ctx->pc = 0x1EB210u;
            goto label_1eb210;
        }
    }
    ctx->pc = 0x1EB200u;
label_1eb200:
    // 0x1eb200: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1eb200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1eb204:
    // 0x1eb204: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eb208:
    // 0x1eb208: 0x10000005  b           . + 4 + (0x5 << 2)
label_1eb20c:
    if (ctx->pc == 0x1EB20Cu) {
        ctx->pc = 0x1EB20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB208u;
        // 0x1eb20c: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB210u;
        goto label_1eb210;
    }
    ctx->pc = 0x1EB208u;
    {
        const bool branch_taken_0x1eb208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB208u;
        // 0x1eb20c: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb208) {
            ctx->pc = 0x1EB220u;
            goto label_1eb220;
        }
    }
    ctx->pc = 0x1EB210u;
label_1eb210:
    // 0x1eb210: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1eb210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1eb214:
    // 0x1eb214: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1eb214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1eb218:
    // 0x1eb218: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eb21c:
    // 0x1eb21c: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1eb21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb220:
    // 0x1eb220: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_1eb224:
    if (ctx->pc == 0x1EB224u) {
        ctx->pc = 0x1EB224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB220u;
        // 0x1eb224: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB228u;
        goto label_1eb228;
    }
    ctx->pc = 0x1EB220u;
    {
        const bool branch_taken_0x1eb220 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1EB224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB220u;
        // 0x1eb224: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb220) {
            ctx->pc = 0x1EB248u;
            goto label_1eb248;
        }
    }
    ctx->pc = 0x1EB228u;
label_1eb228:
    // 0x1eb228: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1eb228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1eb22c:
    // 0x1eb22c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1eb22cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1eb230:
    // 0x1eb230: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1eb234:
    if (ctx->pc == 0x1EB234u) {
        ctx->pc = 0x1EB234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB230u;
        // 0x1eb234: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB238u;
        goto label_1eb238;
    }
    ctx->pc = 0x1EB230u;
    {
        const bool branch_taken_0x1eb230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB230u;
        // 0x1eb234: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb230) {
            ctx->pc = 0x1EB248u;
            goto label_1eb248;
        }
    }
    ctx->pc = 0x1EB238u;
label_1eb238:
    // 0x1eb238: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1eb238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1eb23c:
    // 0x1eb23c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eb240:
    // 0x1eb240: 0x10000006  b           . + 4 + (0x6 << 2)
label_1eb244:
    if (ctx->pc == 0x1EB244u) {
        ctx->pc = 0x1EB244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB240u;
        // 0x1eb244: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB248u;
        goto label_1eb248;
    }
    ctx->pc = 0x1EB240u;
    {
        const bool branch_taken_0x1eb240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB240u;
        // 0x1eb244: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb240) {
            ctx->pc = 0x1EB25Cu;
            goto label_1eb25c;
        }
    }
    ctx->pc = 0x1EB248u;
label_1eb248:
    // 0x1eb248: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1eb248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1eb24c:
    // 0x1eb24c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1eb24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1eb250:
    // 0x1eb250: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eb250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1eb254:
    // 0x1eb254: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eb258:
    // 0x1eb258: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1eb258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb25c:
    // 0x1eb25c: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_1eb260:
    if (ctx->pc == 0x1EB260u) {
        ctx->pc = 0x1EB260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB25Cu;
        // 0x1eb260: 0xe4c00004  swc1        $f0, 0x4($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB264u;
        goto label_1eb264;
    }
    ctx->pc = 0x1EB25Cu;
    {
        const bool branch_taken_0x1eb25c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1EB260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB25Cu;
        // 0x1eb260: 0xe4c00004  swc1        $f0, 0x4($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb25c) {
            ctx->pc = 0x1EB284u;
            goto label_1eb284;
        }
    }
    ctx->pc = 0x1EB264u;
label_1eb264:
    // 0x1eb264: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1eb264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1eb268:
    // 0x1eb268: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1eb268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1eb26c:
    // 0x1eb26c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1eb270:
    if (ctx->pc == 0x1EB270u) {
        ctx->pc = 0x1EB270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB26Cu;
        // 0x1eb270: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB274u;
        goto label_1eb274;
    }
    ctx->pc = 0x1EB26Cu;
    {
        const bool branch_taken_0x1eb26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB26Cu;
        // 0x1eb270: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb26c) {
            ctx->pc = 0x1EB284u;
            goto label_1eb284;
        }
    }
    ctx->pc = 0x1EB274u;
label_1eb274:
    // 0x1eb274: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1eb274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1eb278:
    // 0x1eb278: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eb27c:
    // 0x1eb27c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1eb280:
    if (ctx->pc == 0x1EB280u) {
        ctx->pc = 0x1EB280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB27Cu;
        // 0x1eb280: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB284u;
        goto label_1eb284;
    }
    ctx->pc = 0x1EB27Cu;
    {
        const bool branch_taken_0x1eb27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB27Cu;
        // 0x1eb280: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb27c) {
            ctx->pc = 0x1EB298u;
            goto label_1eb298;
        }
    }
    ctx->pc = 0x1EB284u;
label_1eb284:
    // 0x1eb284: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1eb284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1eb288:
    // 0x1eb288: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1eb288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1eb28c:
    // 0x1eb28c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eb28cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1eb290:
    // 0x1eb290: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eb294:
    // 0x1eb294: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1eb294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb298:
    // 0x1eb298: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_1eb29c:
    if (ctx->pc == 0x1EB29Cu) {
        ctx->pc = 0x1EB29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB298u;
        // 0x1eb29c: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB2A0u;
        goto label_1eb2a0;
    }
    ctx->pc = 0x1EB298u;
    {
        const bool branch_taken_0x1eb298 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1EB29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB298u;
        // 0x1eb29c: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb298) {
            ctx->pc = 0x1EB2C0u;
            goto label_1eb2c0;
        }
    }
    ctx->pc = 0x1EB2A0u;
label_1eb2a0:
    // 0x1eb2a0: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1eb2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1eb2a4:
    // 0x1eb2a4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1eb2a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1eb2a8:
    // 0x1eb2a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1eb2ac:
    if (ctx->pc == 0x1EB2ACu) {
        ctx->pc = 0x1EB2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB2A8u;
        // 0x1eb2ac: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB2B0u;
        goto label_1eb2b0;
    }
    ctx->pc = 0x1EB2A8u;
    {
        const bool branch_taken_0x1eb2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB2A8u;
        // 0x1eb2ac: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb2a8) {
            ctx->pc = 0x1EB2C0u;
            goto label_1eb2c0;
        }
    }
    ctx->pc = 0x1EB2B0u;
label_1eb2b0:
    // 0x1eb2b0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1eb2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1eb2b4:
    // 0x1eb2b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eb2b8:
    // 0x1eb2b8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1eb2bc:
    if (ctx->pc == 0x1EB2BCu) {
        ctx->pc = 0x1EB2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB2B8u;
        // 0x1eb2bc: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB2C0u;
        goto label_1eb2c0;
    }
    ctx->pc = 0x1EB2B8u;
    {
        const bool branch_taken_0x1eb2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB2B8u;
        // 0x1eb2bc: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb2b8) {
            ctx->pc = 0x1EB2D4u;
            goto label_1eb2d4;
        }
    }
    ctx->pc = 0x1EB2C0u;
label_1eb2c0:
    // 0x1eb2c0: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1eb2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1eb2c4:
    // 0x1eb2c4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1eb2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1eb2c8:
    // 0x1eb2c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eb2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1eb2cc:
    // 0x1eb2cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eb2d0:
    // 0x1eb2d0: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1eb2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb2d4:
    // 0x1eb2d4: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_1eb2d8:
    if (ctx->pc == 0x1EB2D8u) {
        ctx->pc = 0x1EB2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB2D4u;
        // 0x1eb2d8: 0xe4c0000c  swc1        $f0, 0xC($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB2DCu;
        goto label_1eb2dc;
    }
    ctx->pc = 0x1EB2D4u;
    {
        const bool branch_taken_0x1eb2d4 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1EB2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB2D4u;
        // 0x1eb2d8: 0xe4c0000c  swc1        $f0, 0xC($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb2d4) {
            ctx->pc = 0x1EB2FCu;
            goto label_1eb2fc;
        }
    }
    ctx->pc = 0x1EB2DCu;
label_1eb2dc:
    // 0x1eb2dc: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x1eb2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_1eb2e0:
    // 0x1eb2e0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1eb2e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1eb2e4:
    // 0x1eb2e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1eb2e8:
    if (ctx->pc == 0x1EB2E8u) {
        ctx->pc = 0x1EB2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB2E4u;
        // 0x1eb2e8: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB2ECu;
        goto label_1eb2ec;
    }
    ctx->pc = 0x1EB2E4u;
    {
        const bool branch_taken_0x1eb2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB2E4u;
        // 0x1eb2e8: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb2e4) {
            ctx->pc = 0x1EB2FCu;
            goto label_1eb2fc;
        }
    }
    ctx->pc = 0x1EB2ECu;
label_1eb2ec:
    // 0x1eb2ec: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1eb2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1eb2f0:
    // 0x1eb2f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eb2f4:
    // 0x1eb2f4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1eb2f8:
    if (ctx->pc == 0x1EB2F8u) {
        ctx->pc = 0x1EB2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB2F4u;
        // 0x1eb2f8: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB2FCu;
        goto label_1eb2fc;
    }
    ctx->pc = 0x1EB2F4u;
    {
        const bool branch_taken_0x1eb2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB2F4u;
        // 0x1eb2f8: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb2f4) {
            ctx->pc = 0x1EB310u;
            goto label_1eb310;
        }
    }
    ctx->pc = 0x1EB2FCu;
label_1eb2fc:
    // 0x1eb2fc: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x1eb2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_1eb300:
    // 0x1eb300: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1eb300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1eb304:
    // 0x1eb304: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eb304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1eb308:
    // 0x1eb308: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eb30c:
    // 0x1eb30c: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1eb30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb310:
    // 0x1eb310: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_1eb314:
    if (ctx->pc == 0x1EB314u) {
        ctx->pc = 0x1EB314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB310u;
        // 0x1eb314: 0xe4c0000c  swc1        $f0, 0xC($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB318u;
        goto label_1eb318;
    }
    ctx->pc = 0x1EB310u;
    {
        const bool branch_taken_0x1eb310 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1EB314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB310u;
        // 0x1eb314: 0xe4c0000c  swc1        $f0, 0xC($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb310) {
            ctx->pc = 0x1EB338u;
            goto label_1eb338;
        }
    }
    ctx->pc = 0x1EB318u;
label_1eb318:
    // 0x1eb318: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x1eb318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1eb31c:
    // 0x1eb31c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1eb31cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1eb320:
    // 0x1eb320: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1eb324:
    if (ctx->pc == 0x1EB324u) {
        ctx->pc = 0x1EB324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB320u;
        // 0x1eb324: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB328u;
        goto label_1eb328;
    }
    ctx->pc = 0x1EB320u;
    {
        const bool branch_taken_0x1eb320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB320u;
        // 0x1eb324: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb320) {
            ctx->pc = 0x1EB338u;
            goto label_1eb338;
        }
    }
    ctx->pc = 0x1EB328u;
label_1eb328:
    // 0x1eb328: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1eb328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1eb32c:
    // 0x1eb32c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eb330:
    // 0x1eb330: 0x10000006  b           . + 4 + (0x6 << 2)
label_1eb334:
    if (ctx->pc == 0x1EB334u) {
        ctx->pc = 0x1EB334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB330u;
        // 0x1eb334: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB338u;
        goto label_1eb338;
    }
    ctx->pc = 0x1EB330u;
    {
        const bool branch_taken_0x1eb330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB330u;
        // 0x1eb334: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb330) {
            ctx->pc = 0x1EB34Cu;
            goto label_1eb34c;
        }
    }
    ctx->pc = 0x1EB338u;
label_1eb338:
    // 0x1eb338: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x1eb338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1eb33c:
    // 0x1eb33c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1eb33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1eb340:
    // 0x1eb340: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eb340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1eb344:
    // 0x1eb344: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eb348:
    // 0x1eb348: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1eb348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb34c:
    // 0x1eb34c: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_1eb350:
    if (ctx->pc == 0x1EB350u) {
        ctx->pc = 0x1EB350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB34Cu;
        // 0x1eb350: 0xe4c00014  swc1        $f0, 0x14($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB354u;
        goto label_1eb354;
    }
    ctx->pc = 0x1EB34Cu;
    {
        const bool branch_taken_0x1eb34c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1EB350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB34Cu;
        // 0x1eb350: 0xe4c00014  swc1        $f0, 0x14($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb34c) {
            ctx->pc = 0x1EB374u;
            goto label_1eb374;
        }
    }
    ctx->pc = 0x1EB354u;
label_1eb354:
    // 0x1eb354: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x1eb354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1eb358:
    // 0x1eb358: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1eb358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1eb35c:
    // 0x1eb35c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1eb360:
    if (ctx->pc == 0x1EB360u) {
        ctx->pc = 0x1EB360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB35Cu;
        // 0x1eb360: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB364u;
        goto label_1eb364;
    }
    ctx->pc = 0x1EB35Cu;
    {
        const bool branch_taken_0x1eb35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB35Cu;
        // 0x1eb360: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb35c) {
            ctx->pc = 0x1EB374u;
            goto label_1eb374;
        }
    }
    ctx->pc = 0x1EB364u;
label_1eb364:
    // 0x1eb364: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1eb364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1eb368:
    // 0x1eb368: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eb36c:
    // 0x1eb36c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1eb370:
    if (ctx->pc == 0x1EB370u) {
        ctx->pc = 0x1EB370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB36Cu;
        // 0x1eb370: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB374u;
        goto label_1eb374;
    }
    ctx->pc = 0x1EB36Cu;
    {
        const bool branch_taken_0x1eb36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB36Cu;
        // 0x1eb370: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb36c) {
            ctx->pc = 0x1EB388u;
            goto label_1eb388;
        }
    }
    ctx->pc = 0x1EB374u;
label_1eb374:
    // 0x1eb374: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x1eb374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1eb378:
    // 0x1eb378: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1eb378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1eb37c:
    // 0x1eb37c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eb37cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1eb380:
    // 0x1eb380: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eb384:
    // 0x1eb384: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1eb384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb388:
    // 0x1eb388: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_1eb38c:
    if (ctx->pc == 0x1EB38Cu) {
        ctx->pc = 0x1EB38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB388u;
        // 0x1eb38c: 0xe4c00018  swc1        $f0, 0x18($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB390u;
        goto label_1eb390;
    }
    ctx->pc = 0x1EB388u;
    {
        const bool branch_taken_0x1eb388 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1EB38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB388u;
        // 0x1eb38c: 0xe4c00018  swc1        $f0, 0x18($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb388) {
            ctx->pc = 0x1EB3B0u;
            goto label_1eb3b0;
        }
    }
    ctx->pc = 0x1EB390u;
label_1eb390:
    // 0x1eb390: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x1eb390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_1eb394:
    // 0x1eb394: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1eb394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1eb398:
    // 0x1eb398: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1eb39c:
    if (ctx->pc == 0x1EB39Cu) {
        ctx->pc = 0x1EB39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB398u;
        // 0x1eb39c: 0x8fa30070  lw          $v1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB3A0u;
        goto label_1eb3a0;
    }
    ctx->pc = 0x1EB398u;
    {
        const bool branch_taken_0x1eb398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB398u;
        // 0x1eb39c: 0x8fa30070  lw          $v1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb398) {
            ctx->pc = 0x1EB3B0u;
            goto label_1eb3b0;
        }
    }
    ctx->pc = 0x1EB3A0u;
label_1eb3a0:
    // 0x1eb3a0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1eb3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1eb3a4:
    // 0x1eb3a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eb3a8:
    // 0x1eb3a8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1eb3ac:
    if (ctx->pc == 0x1EB3ACu) {
        ctx->pc = 0x1EB3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB3A8u;
        // 0x1eb3ac: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB3B0u;
        goto label_1eb3b0;
    }
    ctx->pc = 0x1EB3A8u;
    {
        const bool branch_taken_0x1eb3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB3A8u;
        // 0x1eb3ac: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb3a8) {
            ctx->pc = 0x1EB3C4u;
            goto label_1eb3c4;
        }
    }
    ctx->pc = 0x1EB3B0u;
label_1eb3b0:
    // 0x1eb3b0: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x1eb3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_1eb3b4:
    // 0x1eb3b4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1eb3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1eb3b8:
    // 0x1eb3b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eb3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1eb3bc:
    // 0x1eb3bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eb3c0:
    // 0x1eb3c0: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1eb3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb3c4:
    // 0x1eb3c4: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_1eb3c8:
    if (ctx->pc == 0x1EB3C8u) {
        ctx->pc = 0x1EB3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB3C4u;
        // 0x1eb3c8: 0xe4c0001c  swc1        $f0, 0x1C($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB3CCu;
        goto label_1eb3cc;
    }
    ctx->pc = 0x1EB3C4u;
    {
        const bool branch_taken_0x1eb3c4 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1EB3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB3C4u;
        // 0x1eb3c8: 0xe4c0001c  swc1        $f0, 0x1C($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb3c4) {
            ctx->pc = 0x1EB3ECu;
            goto label_1eb3ec;
        }
    }
    ctx->pc = 0x1EB3CCu;
label_1eb3cc:
    // 0x1eb3cc: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x1eb3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_1eb3d0:
    // 0x1eb3d0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1eb3d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1eb3d4:
    // 0x1eb3d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1eb3d8:
    if (ctx->pc == 0x1EB3D8u) {
        ctx->pc = 0x1EB3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB3D4u;
        // 0x1eb3d8: 0x8fa30080  lw          $v1, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB3DCu;
        goto label_1eb3dc;
    }
    ctx->pc = 0x1EB3D4u;
    {
        const bool branch_taken_0x1eb3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB3D4u;
        // 0x1eb3d8: 0x8fa30080  lw          $v1, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb3d4) {
            ctx->pc = 0x1EB3ECu;
            goto label_1eb3ec;
        }
    }
    ctx->pc = 0x1EB3DCu;
label_1eb3dc:
    // 0x1eb3dc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1eb3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1eb3e0:
    // 0x1eb3e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eb3e4:
    // 0x1eb3e4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1eb3e8:
    if (ctx->pc == 0x1EB3E8u) {
        ctx->pc = 0x1EB3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB3E4u;
        // 0x1eb3e8: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB3ECu;
        goto label_1eb3ec;
    }
    ctx->pc = 0x1EB3E4u;
    {
        const bool branch_taken_0x1eb3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB3E4u;
        // 0x1eb3e8: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb3e4) {
            ctx->pc = 0x1EB400u;
            goto label_1eb400;
        }
    }
    ctx->pc = 0x1EB3ECu;
label_1eb3ec:
    // 0x1eb3ec: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x1eb3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_1eb3f0:
    // 0x1eb3f0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1eb3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1eb3f4:
    // 0x1eb3f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eb3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1eb3f8:
    // 0x1eb3f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eb3fc:
    // 0x1eb3fc: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1eb3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb400:
    // 0x1eb400: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_1eb404:
    if (ctx->pc == 0x1EB404u) {
        ctx->pc = 0x1EB404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB400u;
        // 0x1eb404: 0xe4c00020  swc1        $f0, 0x20($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB408u;
        goto label_1eb408;
    }
    ctx->pc = 0x1EB400u;
    {
        const bool branch_taken_0x1eb400 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1EB404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB400u;
        // 0x1eb404: 0xe4c00020  swc1        $f0, 0x20($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb400) {
            ctx->pc = 0x1EB428u;
            goto label_1eb428;
        }
    }
    ctx->pc = 0x1EB408u;
label_1eb408:
    // 0x1eb408: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x1eb408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_1eb40c:
    // 0x1eb40c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1eb40cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1eb410:
    // 0x1eb410: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1eb414:
    if (ctx->pc == 0x1EB414u) {
        ctx->pc = 0x1EB414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB410u;
        // 0x1eb414: 0x8fa30090  lw          $v1, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB418u;
        goto label_1eb418;
    }
    ctx->pc = 0x1EB410u;
    {
        const bool branch_taken_0x1eb410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB410u;
        // 0x1eb414: 0x8fa30090  lw          $v1, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb410) {
            ctx->pc = 0x1EB428u;
            goto label_1eb428;
        }
    }
    ctx->pc = 0x1EB418u;
label_1eb418:
    // 0x1eb418: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1eb418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1eb41c:
    // 0x1eb41c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eb420:
    // 0x1eb420: 0x10000006  b           . + 4 + (0x6 << 2)
label_1eb424:
    if (ctx->pc == 0x1EB424u) {
        ctx->pc = 0x1EB424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB420u;
        // 0x1eb424: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB428u;
        goto label_1eb428;
    }
    ctx->pc = 0x1EB420u;
    {
        const bool branch_taken_0x1eb420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB420u;
        // 0x1eb424: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb420) {
            ctx->pc = 0x1EB43Cu;
            goto label_1eb43c;
        }
    }
    ctx->pc = 0x1EB428u;
label_1eb428:
    // 0x1eb428: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x1eb428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_1eb42c:
    // 0x1eb42c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1eb42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1eb430:
    // 0x1eb430: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eb430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1eb434:
    // 0x1eb434: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eb438:
    // 0x1eb438: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1eb438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb43c:
    // 0x1eb43c: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_1eb440:
    if (ctx->pc == 0x1EB440u) {
        ctx->pc = 0x1EB440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB43Cu;
        // 0x1eb440: 0xe4c0002c  swc1        $f0, 0x2C($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB444u;
        goto label_1eb444;
    }
    ctx->pc = 0x1EB43Cu;
    {
        const bool branch_taken_0x1eb43c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1EB440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB43Cu;
        // 0x1eb440: 0xe4c0002c  swc1        $f0, 0x2C($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb43c) {
            ctx->pc = 0x1EB464u;
            goto label_1eb464;
        }
    }
    ctx->pc = 0x1EB444u;
label_1eb444:
    // 0x1eb444: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x1eb444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1eb448:
    // 0x1eb448: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1eb448u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1eb44c:
    // 0x1eb44c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1eb450:
    if (ctx->pc == 0x1EB450u) {
        ctx->pc = 0x1EB450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB44Cu;
        // 0x1eb450: 0x8fa300a0  lw          $v1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB454u;
        goto label_1eb454;
    }
    ctx->pc = 0x1EB44Cu;
    {
        const bool branch_taken_0x1eb44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB44Cu;
        // 0x1eb450: 0x8fa300a0  lw          $v1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb44c) {
            ctx->pc = 0x1EB464u;
            goto label_1eb464;
        }
    }
    ctx->pc = 0x1EB454u;
label_1eb454:
    // 0x1eb454: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1eb454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1eb458:
    // 0x1eb458: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eb45c:
    // 0x1eb45c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1eb460:
    if (ctx->pc == 0x1EB460u) {
        ctx->pc = 0x1EB460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB45Cu;
        // 0x1eb460: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB464u;
        goto label_1eb464;
    }
    ctx->pc = 0x1EB45Cu;
    {
        const bool branch_taken_0x1eb45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB45Cu;
        // 0x1eb460: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb45c) {
            ctx->pc = 0x1EB478u;
            goto label_1eb478;
        }
    }
    ctx->pc = 0x1EB464u;
label_1eb464:
    // 0x1eb464: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x1eb464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1eb468:
    // 0x1eb468: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1eb468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1eb46c:
    // 0x1eb46c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eb46cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1eb470:
    // 0x1eb470: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eb474:
    // 0x1eb474: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1eb474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb478:
    // 0x1eb478: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_1eb47c:
    if (ctx->pc == 0x1EB47Cu) {
        ctx->pc = 0x1EB47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB478u;
        // 0x1eb47c: 0xe4c00030  swc1        $f0, 0x30($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB480u;
        goto label_1eb480;
    }
    ctx->pc = 0x1EB478u;
    {
        const bool branch_taken_0x1eb478 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1EB47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB478u;
        // 0x1eb47c: 0xe4c00030  swc1        $f0, 0x30($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb478) {
            ctx->pc = 0x1EB4A0u;
            goto label_1eb4a0;
        }
    }
    ctx->pc = 0x1EB480u;
label_1eb480:
    // 0x1eb480: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1eb480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_1eb484:
    // 0x1eb484: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1eb484u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1eb488:
    // 0x1eb488: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1eb48c:
    if (ctx->pc == 0x1EB48Cu) {
        ctx->pc = 0x1EB48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB488u;
        // 0x1eb48c: 0x8fa300b0  lw          $v1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB490u;
        goto label_1eb490;
    }
    ctx->pc = 0x1EB488u;
    {
        const bool branch_taken_0x1eb488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB488u;
        // 0x1eb48c: 0x8fa300b0  lw          $v1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb488) {
            ctx->pc = 0x1EB4A0u;
            goto label_1eb4a0;
        }
    }
    ctx->pc = 0x1EB490u;
label_1eb490:
    // 0x1eb490: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1eb490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1eb494:
    // 0x1eb494: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eb498:
    // 0x1eb498: 0x10000006  b           . + 4 + (0x6 << 2)
label_1eb49c:
    if (ctx->pc == 0x1EB49Cu) {
        ctx->pc = 0x1EB49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB498u;
        // 0x1eb49c: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB4A0u;
        goto label_1eb4a0;
    }
    ctx->pc = 0x1EB498u;
    {
        const bool branch_taken_0x1eb498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB498u;
        // 0x1eb49c: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb498) {
            ctx->pc = 0x1EB4B4u;
            goto label_1eb4b4;
        }
    }
    ctx->pc = 0x1EB4A0u;
label_1eb4a0:
    // 0x1eb4a0: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1eb4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_1eb4a4:
    // 0x1eb4a4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1eb4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1eb4a8:
    // 0x1eb4a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eb4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1eb4ac:
    // 0x1eb4ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eb4b0:
    // 0x1eb4b0: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1eb4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb4b4:
    // 0x1eb4b4: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_1eb4b8:
    if (ctx->pc == 0x1EB4B8u) {
        ctx->pc = 0x1EB4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB4B4u;
        // 0x1eb4b8: 0xe4c00024  swc1        $f0, 0x24($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB4BCu;
        goto label_1eb4bc;
    }
    ctx->pc = 0x1EB4B4u;
    {
        const bool branch_taken_0x1eb4b4 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1EB4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB4B4u;
        // 0x1eb4b8: 0xe4c00024  swc1        $f0, 0x24($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb4b4) {
            ctx->pc = 0x1EB4DCu;
            goto label_1eb4dc;
        }
    }
    ctx->pc = 0x1EB4BCu;
label_1eb4bc:
    // 0x1eb4bc: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x1eb4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_1eb4c0:
    // 0x1eb4c0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1eb4c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1eb4c4:
    // 0x1eb4c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1eb4c8:
    if (ctx->pc == 0x1EB4C8u) {
        ctx->pc = 0x1EB4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB4C4u;
        // 0x1eb4c8: 0x8fa300c0  lw          $v1, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB4CCu;
        goto label_1eb4cc;
    }
    ctx->pc = 0x1EB4C4u;
    {
        const bool branch_taken_0x1eb4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB4C4u;
        // 0x1eb4c8: 0x8fa300c0  lw          $v1, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb4c4) {
            ctx->pc = 0x1EB4DCu;
            goto label_1eb4dc;
        }
    }
    ctx->pc = 0x1EB4CCu;
label_1eb4cc:
    // 0x1eb4cc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1eb4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1eb4d0:
    // 0x1eb4d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eb4d4:
    // 0x1eb4d4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1eb4d8:
    if (ctx->pc == 0x1EB4D8u) {
        ctx->pc = 0x1EB4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB4D4u;
        // 0x1eb4d8: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB4DCu;
        goto label_1eb4dc;
    }
    ctx->pc = 0x1EB4D4u;
    {
        const bool branch_taken_0x1eb4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB4D4u;
        // 0x1eb4d8: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb4d4) {
            ctx->pc = 0x1EB4F0u;
            goto label_1eb4f0;
        }
    }
    ctx->pc = 0x1EB4DCu;
label_1eb4dc:
    // 0x1eb4dc: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x1eb4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_1eb4e0:
    // 0x1eb4e0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1eb4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1eb4e4:
    // 0x1eb4e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eb4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1eb4e8:
    // 0x1eb4e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eb4ec:
    // 0x1eb4ec: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1eb4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb4f0:
    // 0x1eb4f0: 0xe4c00028  swc1        $f0, 0x28($a2)
    ctx->pc = 0x1eb4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
label_1eb4f4:
    // 0x1eb4f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1eb4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1eb4f8:
    // 0x1eb4f8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1eb4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1eb4fc:
    // 0x1eb4fc: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1eb4fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1eb500:
    // 0x1eb500: 0x1440ff37  bnez        $v0, . + 4 + (-0xC9 << 2)
label_1eb504:
    if (ctx->pc == 0x1EB504u) {
        ctx->pc = 0x1EB504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB500u;
        // 0x1eb504: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB508u;
        goto label_1eb508;
    }
    ctx->pc = 0x1EB500u;
    {
        const bool branch_taken_0x1eb500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB500u;
        // 0x1eb504: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb500) {
            ctx->pc = 0x1EB1E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb1e0;
        }
    }
    ctx->pc = 0x1EB508u;
label_1eb508:
    // 0x1eb508: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1eb508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1eb50c:
    // 0x1eb50c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1eb50cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb510:
    // 0x1eb510: 0x18400057  blez        $v0, . + 4 + (0x57 << 2)
label_1eb514:
    if (ctx->pc == 0x1EB514u) {
        ctx->pc = 0x1EB514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB510u;
        // 0x1eb514: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB518u;
        goto label_1eb518;
    }
    ctx->pc = 0x1EB510u;
    {
        const bool branch_taken_0x1eb510 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1EB514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB510u;
        // 0x1eb514: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb510) {
            ctx->pc = 0x1EB670u;
            goto label_1eb670;
        }
    }
    ctx->pc = 0x1EB518u;
label_1eb518:
    // 0x1eb518: 0x24120044  addiu       $s2, $zero, 0x44
    ctx->pc = 0x1eb518u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_1eb51c:
    // 0x1eb51c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1eb51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1eb520:
    // 0x1eb520: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1eb520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1eb524:
    // 0x1eb524: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
label_1eb528:
    if (ctx->pc == 0x1EB528u) {
        ctx->pc = 0x1EB528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB524u;
        // 0x1eb528: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB52Cu;
        goto label_1eb52c;
    }
    ctx->pc = 0x1EB524u;
    {
        const bool branch_taken_0x1eb524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eb524) {
            ctx->pc = 0x1EB528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB524u;
            // 0x1eb528: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB574u;
            goto label_1eb574;
        }
    }
    ctx->pc = 0x1EB52Cu;
label_1eb52c:
    // 0x1eb52c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1eb52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1eb530:
    // 0x1eb530: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1eb534:
    if (ctx->pc == 0x1EB534u) {
        ctx->pc = 0x1EB534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB530u;
        // 0x1eb534: 0x2122018  mult        $a0, $s0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB538u;
        goto label_1eb538;
    }
    ctx->pc = 0x1EB530u;
    {
        const bool branch_taken_0x1eb530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB530u;
        // 0x1eb534: 0x2122018  mult        $a0, $s0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb530) {
            ctx->pc = 0x1EB570u;
            goto label_1eb570;
        }
    }
    ctx->pc = 0x1EB538u;
label_1eb538:
    // 0x1eb538: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1eb538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1eb53c:
    // 0x1eb53c: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x1eb53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eb540:
    // 0x1eb540: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1eb540u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1eb544:
    // 0x1eb544: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1eb544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1eb548:
    // 0x1eb548: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x1eb548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb54c:
    // 0x1eb54c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1eb54cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1eb550:
    // 0x1eb550: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1eb550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_1eb554:
    // 0x1eb554: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1eb554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1eb558:
    // 0x1eb558: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x1eb558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eb55c:
    // 0x1eb55c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1eb55cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1eb560:
    // 0x1eb560: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1eb560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1eb564:
    // 0x1eb564: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x1eb564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb568:
    // 0x1eb568: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1eb568u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1eb56c:
    // 0x1eb56c: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x1eb56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_1eb570:
    // 0x1eb570: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1eb570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1eb574:
    // 0x1eb574: 0xc078ec8  jal         func_1E3B20
label_1eb578:
    if (ctx->pc == 0x1EB578u) {
        ctx->pc = 0x1EB578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB574u;
        // 0x1eb578: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB57Cu;
        goto label_1eb57c;
    }
    ctx->pc = 0x1EB574u;
    SET_GPR_U32(ctx, 31, 0x1EB57Cu);
    ctx->pc = 0x1EB578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB574u;
    // 0x1eb578: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EB574u, 0x1EB57Cu)) {
        return;
    }
    ctx->pc = 0x1EB57Cu;
label_1eb57c:
    // 0x1eb57c: 0x2121818  mult        $v1, $s0, $s2
    ctx->pc = 0x1eb57cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1eb580:
    // 0x1eb580: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1eb580u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eb584:
    // 0x1eb584: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1eb584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1eb588:
    // 0x1eb588: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1eb588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1eb58c:
    // 0x1eb58c: 0xac500034  sw          $s0, 0x34($v0)
    ctx->pc = 0x1eb58cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 16));
label_1eb590:
    // 0x1eb590: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x1eb590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1eb594:
    // 0x1eb594: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1eb594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1eb598:
    // 0x1eb598: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1eb598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1eb59c:
    // 0x1eb59c: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x1eb59cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1eb5a0:
    // 0x1eb5a0: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_1eb5a4:
    if (ctx->pc == 0x1EB5A4u) {
        ctx->pc = 0x1EB5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB5A0u;
        // 0x1eb5a4: 0x26080001  addiu       $t0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB5A8u;
        goto label_1eb5a8;
    }
    ctx->pc = 0x1EB5A0u;
    {
        const bool branch_taken_0x1eb5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB5A0u;
        // 0x1eb5a4: 0x26080001  addiu       $t0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb5a0) {
            ctx->pc = 0x1EB638u;
            goto label_1eb638;
        }
    }
    ctx->pc = 0x1EB5A8u;
label_1eb5a8:
    // 0x1eb5a8: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1eb5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_1eb5ac:
    // 0x1eb5ac: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1eb5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1eb5b0:
    // 0x1eb5b0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1eb5b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1eb5b4:
    // 0x1eb5b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1eb5b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1eb5b8:
    // 0x1eb5b8: 0x2023018  mult        $a2, $s0, $v0
    ctx->pc = 0x1eb5b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_1eb5bc:
    // 0x1eb5bc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1eb5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1eb5c0:
    // 0x1eb5c0: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x1eb5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1eb5c4:
    // 0x1eb5c4: 0x0  nop
    ctx->pc = 0x1eb5c4u;
    // NOP
label_1eb5c8:
    // 0x1eb5c8: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x1eb5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1eb5cc:
    // 0x1eb5cc: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x1eb5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_1eb5d0:
    // 0x1eb5d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1eb5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1eb5d4:
    // 0x1eb5d4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1eb5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1eb5d8:
    // 0x1eb5d8: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_1eb5dc:
    if (ctx->pc == 0x1EB5DCu) {
        ctx->pc = 0x1EB5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB5D8u;
        // 0x1eb5dc: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB5E0u;
        goto label_1eb5e0;
    }
    ctx->pc = 0x1EB5D8u;
    {
        const bool branch_taken_0x1eb5d8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1EB5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB5D8u;
        // 0x1eb5dc: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb5d8) {
            ctx->pc = 0x1EB5ECu;
            goto label_1eb5ec;
        }
    }
    ctx->pc = 0x1EB5E0u;
label_1eb5e0:
    // 0x1eb5e0: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1eb5e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1eb5e4:
    // 0x1eb5e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1eb5e8:
    if (ctx->pc == 0x1EB5E8u) {
        ctx->pc = 0x1EB5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB5E4u;
        // 0x1eb5e8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB5ECu;
        goto label_1eb5ec;
    }
    ctx->pc = 0x1EB5E4u;
    {
        const bool branch_taken_0x1eb5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB5E4u;
        // 0x1eb5e8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb5e4) {
            ctx->pc = 0x1EB5F4u;
            goto label_1eb5f4;
        }
    }
    ctx->pc = 0x1EB5ECu;
label_1eb5ec:
    // 0x1eb5ec: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x1eb5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1eb5f0:
    // 0x1eb5f0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1eb5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1eb5f4:
    // 0x1eb5f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1eb5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1eb5f8:
    // 0x1eb5f8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1eb5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb5fc:
    // 0x1eb5fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1eb5fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1eb600:
    // 0x1eb600: 0x0  nop
    ctx->pc = 0x1eb600u;
    // NOP
label_1eb604:
    // 0x1eb604: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_1eb608:
    if (ctx->pc == 0x1EB608u) {
        ctx->pc = 0x1EB608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB604u;
        // 0x1eb608: 0x2122018  mult        $a0, $s0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB60Cu;
        goto label_1eb60c;
    }
    ctx->pc = 0x1EB604u;
    {
        const bool branch_taken_0x1eb604 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EB608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB604u;
        // 0x1eb608: 0x2122018  mult        $a0, $s0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb604) {
            ctx->pc = 0x1EB63Cu;
            goto label_1eb63c;
        }
    }
    ctx->pc = 0x1EB60Cu;
label_1eb60c:
    // 0x1eb60c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1eb60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1eb610:
    // 0x1eb610: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1eb610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1eb614:
    // 0x1eb614: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1eb614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1eb618:
    // 0x1eb618: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1eb618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1eb61c:
    // 0x1eb61c: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x1eb61cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
label_1eb620:
    // 0x1eb620: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x1eb620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1eb624:
    // 0x1eb624: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x1eb624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1eb628:
    // 0x1eb628: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1eb628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1eb62c:
    // 0x1eb62c: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x1eb62cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1eb630:
    // 0x1eb630: 0x5440ffe5  bnel        $v0, $zero, . + 4 + (-0x1B << 2)
label_1eb634:
    if (ctx->pc == 0x1EB634u) {
        ctx->pc = 0x1EB634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB630u;
        // 0x1eb634: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB638u;
        goto label_1eb638;
    }
    ctx->pc = 0x1EB630u;
    {
        const bool branch_taken_0x1eb630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb630) {
            ctx->pc = 0x1EB634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB630u;
            // 0x1eb634: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb5c8;
        }
    }
    ctx->pc = 0x1EB638u;
label_1eb638:
    // 0x1eb638: 0x2122018  mult        $a0, $s0, $s2
    ctx->pc = 0x1eb638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1eb63c:
    // 0x1eb63c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1eb63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1eb640:
    // 0x1eb640: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1eb640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1eb644:
    // 0x1eb644: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x1eb644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1eb648:
    // 0x1eb648: 0x54670004  bnel        $v1, $a3, . + 4 + (0x4 << 2)
label_1eb64c:
    if (ctx->pc == 0x1EB64Cu) {
        ctx->pc = 0x1EB64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB648u;
        // 0x1eb64c: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB650u;
        goto label_1eb650;
    }
    ctx->pc = 0x1EB648u;
    {
        const bool branch_taken_0x1eb648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x1eb648) {
            ctx->pc = 0x1EB64Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB648u;
            // 0x1eb64c: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB65Cu;
            goto label_1eb65c;
        }
    }
    ctx->pc = 0x1EB650u;
label_1eb650:
    // 0x1eb650: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1eb650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1eb654:
    // 0x1eb654: 0xac820034  sw          $v0, 0x34($a0)
    ctx->pc = 0x1eb654u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
label_1eb658:
    // 0x1eb658: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1eb658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1eb65c:
    // 0x1eb65c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1eb65cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1eb660:
    // 0x1eb660: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1eb660u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eb664:
    // 0x1eb664: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1eb664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1eb668:
    // 0x1eb668: 0x5440ffad  bnel        $v0, $zero, . + 4 + (-0x53 << 2)
label_1eb66c:
    if (ctx->pc == 0x1EB66Cu) {
        ctx->pc = 0x1EB66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB668u;
        // 0x1eb66c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB670u;
        goto label_1eb670;
    }
    ctx->pc = 0x1EB668u;
    {
        const bool branch_taken_0x1eb668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb668) {
            ctx->pc = 0x1EB66Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB668u;
            // 0x1eb66c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb520;
        }
    }
    ctx->pc = 0x1EB670u;
label_1eb670:
    // 0x1eb670: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eb670u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1eb674:
    // 0x1eb674: 0x0  nop
    ctx->pc = 0x1eb674u;
    // NOP
label_1eb678:
    // 0x1eb678: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eb678u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1eb67c:
    // 0x1eb67c: 0x3c013d2a  lui         $at, 0x3D2A
    ctx->pc = 0x1eb67cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15658 << 16));
label_1eb680:
    // 0x1eb680: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1eb680u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_1eb684:
    // 0x1eb684: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1eb684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1eb688:
    // 0x1eb688: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x1eb688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_1eb68c:
    // 0x1eb68c: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x1eb68cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_1eb690:
    // 0x1eb690: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1eb690u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1eb694:
    // 0x1eb694: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x1eb694u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1eb698:
    // 0x1eb698: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x1eb698u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1eb69c:
    // 0x1eb69c: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x1eb69cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1eb6a0:
    // 0x1eb6a0: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x1eb6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_1eb6a4:
    // 0x1eb6a4: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x1eb6a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_1eb6a8:
    // 0x1eb6a8: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x1eb6a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1eb6ac:
    // 0x1eb6ac: 0x7bb70110  lq          $s7, 0x110($sp)
    ctx->pc = 0x1eb6acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1eb6b0:
    // 0x1eb6b0: 0x7bbe0100  lq          $fp, 0x100($sp)
    ctx->pc = 0x1eb6b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1eb6b4:
    // 0x1eb6b4: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x1eb6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_1eb6b8:
    // 0x1eb6b8: 0x3e00008  jr          $ra
label_1eb6bc:
    if (ctx->pc == 0x1EB6BCu) {
        ctx->pc = 0x1EB6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB6B8u;
        // 0x1eb6bc: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB6C0u;
        goto label_fallthrough_0x1eb6b8;
    }
    ctx->pc = 0x1EB6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB6B8u;
        // 0x1eb6bc: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1eb6b8:
    ctx->pc = 0x1EB6C0u;
}
