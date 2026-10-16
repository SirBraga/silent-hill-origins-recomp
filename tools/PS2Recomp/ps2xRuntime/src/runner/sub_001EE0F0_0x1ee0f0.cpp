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

// Function: sub_001EE0F0
// Address: 0x1ee0f0 - 0x1ee828
void sub_001EE0F0_0x1ee0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE0F0_0x1ee0f0");
#endif

    switch (ctx->pc) {
        case 0x1ee0f0u: goto label_1ee0f0;
        case 0x1ee0f4u: goto label_1ee0f4;
        case 0x1ee0f8u: goto label_1ee0f8;
        case 0x1ee0fcu: goto label_1ee0fc;
        case 0x1ee100u: goto label_1ee100;
        case 0x1ee104u: goto label_1ee104;
        case 0x1ee108u: goto label_1ee108;
        case 0x1ee10cu: goto label_1ee10c;
        case 0x1ee110u: goto label_1ee110;
        case 0x1ee114u: goto label_1ee114;
        case 0x1ee118u: goto label_1ee118;
        case 0x1ee11cu: goto label_1ee11c;
        case 0x1ee120u: goto label_1ee120;
        case 0x1ee124u: goto label_1ee124;
        case 0x1ee128u: goto label_1ee128;
        case 0x1ee12cu: goto label_1ee12c;
        case 0x1ee130u: goto label_1ee130;
        case 0x1ee134u: goto label_1ee134;
        case 0x1ee138u: goto label_1ee138;
        case 0x1ee13cu: goto label_1ee13c;
        case 0x1ee140u: goto label_1ee140;
        case 0x1ee144u: goto label_1ee144;
        case 0x1ee148u: goto label_1ee148;
        case 0x1ee14cu: goto label_1ee14c;
        case 0x1ee150u: goto label_1ee150;
        case 0x1ee154u: goto label_1ee154;
        case 0x1ee158u: goto label_1ee158;
        case 0x1ee15cu: goto label_1ee15c;
        case 0x1ee160u: goto label_1ee160;
        case 0x1ee164u: goto label_1ee164;
        case 0x1ee168u: goto label_1ee168;
        case 0x1ee16cu: goto label_1ee16c;
        case 0x1ee170u: goto label_1ee170;
        case 0x1ee174u: goto label_1ee174;
        case 0x1ee178u: goto label_1ee178;
        case 0x1ee17cu: goto label_1ee17c;
        case 0x1ee180u: goto label_1ee180;
        case 0x1ee184u: goto label_1ee184;
        case 0x1ee188u: goto label_1ee188;
        case 0x1ee18cu: goto label_1ee18c;
        case 0x1ee190u: goto label_1ee190;
        case 0x1ee194u: goto label_1ee194;
        case 0x1ee198u: goto label_1ee198;
        case 0x1ee19cu: goto label_1ee19c;
        case 0x1ee1a0u: goto label_1ee1a0;
        case 0x1ee1a4u: goto label_1ee1a4;
        case 0x1ee1a8u: goto label_1ee1a8;
        case 0x1ee1acu: goto label_1ee1ac;
        case 0x1ee1b0u: goto label_1ee1b0;
        case 0x1ee1b4u: goto label_1ee1b4;
        case 0x1ee1b8u: goto label_1ee1b8;
        case 0x1ee1bcu: goto label_1ee1bc;
        case 0x1ee1c0u: goto label_1ee1c0;
        case 0x1ee1c4u: goto label_1ee1c4;
        case 0x1ee1c8u: goto label_1ee1c8;
        case 0x1ee1ccu: goto label_1ee1cc;
        case 0x1ee1d0u: goto label_1ee1d0;
        case 0x1ee1d4u: goto label_1ee1d4;
        case 0x1ee1d8u: goto label_1ee1d8;
        case 0x1ee1dcu: goto label_1ee1dc;
        case 0x1ee1e0u: goto label_1ee1e0;
        case 0x1ee1e4u: goto label_1ee1e4;
        case 0x1ee1e8u: goto label_1ee1e8;
        case 0x1ee1ecu: goto label_1ee1ec;
        case 0x1ee1f0u: goto label_1ee1f0;
        case 0x1ee1f4u: goto label_1ee1f4;
        case 0x1ee1f8u: goto label_1ee1f8;
        case 0x1ee1fcu: goto label_1ee1fc;
        case 0x1ee200u: goto label_1ee200;
        case 0x1ee204u: goto label_1ee204;
        case 0x1ee208u: goto label_1ee208;
        case 0x1ee20cu: goto label_1ee20c;
        case 0x1ee210u: goto label_1ee210;
        case 0x1ee214u: goto label_1ee214;
        case 0x1ee218u: goto label_1ee218;
        case 0x1ee21cu: goto label_1ee21c;
        case 0x1ee220u: goto label_1ee220;
        case 0x1ee224u: goto label_1ee224;
        case 0x1ee228u: goto label_1ee228;
        case 0x1ee22cu: goto label_1ee22c;
        case 0x1ee230u: goto label_1ee230;
        case 0x1ee234u: goto label_1ee234;
        case 0x1ee238u: goto label_1ee238;
        case 0x1ee23cu: goto label_1ee23c;
        case 0x1ee240u: goto label_1ee240;
        case 0x1ee244u: goto label_1ee244;
        case 0x1ee248u: goto label_1ee248;
        case 0x1ee24cu: goto label_1ee24c;
        case 0x1ee250u: goto label_1ee250;
        case 0x1ee254u: goto label_1ee254;
        case 0x1ee258u: goto label_1ee258;
        case 0x1ee25cu: goto label_1ee25c;
        case 0x1ee260u: goto label_1ee260;
        case 0x1ee264u: goto label_1ee264;
        case 0x1ee268u: goto label_1ee268;
        case 0x1ee26cu: goto label_1ee26c;
        case 0x1ee270u: goto label_1ee270;
        case 0x1ee274u: goto label_1ee274;
        case 0x1ee278u: goto label_1ee278;
        case 0x1ee27cu: goto label_1ee27c;
        case 0x1ee280u: goto label_1ee280;
        case 0x1ee284u: goto label_1ee284;
        case 0x1ee288u: goto label_1ee288;
        case 0x1ee28cu: goto label_1ee28c;
        case 0x1ee290u: goto label_1ee290;
        case 0x1ee294u: goto label_1ee294;
        case 0x1ee298u: goto label_1ee298;
        case 0x1ee29cu: goto label_1ee29c;
        case 0x1ee2a0u: goto label_1ee2a0;
        case 0x1ee2a4u: goto label_1ee2a4;
        case 0x1ee2a8u: goto label_1ee2a8;
        case 0x1ee2acu: goto label_1ee2ac;
        case 0x1ee2b0u: goto label_1ee2b0;
        case 0x1ee2b4u: goto label_1ee2b4;
        case 0x1ee2b8u: goto label_1ee2b8;
        case 0x1ee2bcu: goto label_1ee2bc;
        case 0x1ee2c0u: goto label_1ee2c0;
        case 0x1ee2c4u: goto label_1ee2c4;
        case 0x1ee2c8u: goto label_1ee2c8;
        case 0x1ee2ccu: goto label_1ee2cc;
        case 0x1ee2d0u: goto label_1ee2d0;
        case 0x1ee2d4u: goto label_1ee2d4;
        case 0x1ee2d8u: goto label_1ee2d8;
        case 0x1ee2dcu: goto label_1ee2dc;
        case 0x1ee2e0u: goto label_1ee2e0;
        case 0x1ee2e4u: goto label_1ee2e4;
        case 0x1ee2e8u: goto label_1ee2e8;
        case 0x1ee2ecu: goto label_1ee2ec;
        case 0x1ee2f0u: goto label_1ee2f0;
        case 0x1ee2f4u: goto label_1ee2f4;
        case 0x1ee2f8u: goto label_1ee2f8;
        case 0x1ee2fcu: goto label_1ee2fc;
        case 0x1ee300u: goto label_1ee300;
        case 0x1ee304u: goto label_1ee304;
        case 0x1ee308u: goto label_1ee308;
        case 0x1ee30cu: goto label_1ee30c;
        case 0x1ee310u: goto label_1ee310;
        case 0x1ee314u: goto label_1ee314;
        case 0x1ee318u: goto label_1ee318;
        case 0x1ee31cu: goto label_1ee31c;
        case 0x1ee320u: goto label_1ee320;
        case 0x1ee324u: goto label_1ee324;
        case 0x1ee328u: goto label_1ee328;
        case 0x1ee32cu: goto label_1ee32c;
        case 0x1ee330u: goto label_1ee330;
        case 0x1ee334u: goto label_1ee334;
        case 0x1ee338u: goto label_1ee338;
        case 0x1ee33cu: goto label_1ee33c;
        case 0x1ee340u: goto label_1ee340;
        case 0x1ee344u: goto label_1ee344;
        case 0x1ee348u: goto label_1ee348;
        case 0x1ee34cu: goto label_1ee34c;
        case 0x1ee350u: goto label_1ee350;
        case 0x1ee354u: goto label_1ee354;
        case 0x1ee358u: goto label_1ee358;
        case 0x1ee35cu: goto label_1ee35c;
        case 0x1ee360u: goto label_1ee360;
        case 0x1ee364u: goto label_1ee364;
        case 0x1ee368u: goto label_1ee368;
        case 0x1ee36cu: goto label_1ee36c;
        case 0x1ee370u: goto label_1ee370;
        case 0x1ee374u: goto label_1ee374;
        case 0x1ee378u: goto label_1ee378;
        case 0x1ee37cu: goto label_1ee37c;
        case 0x1ee380u: goto label_1ee380;
        case 0x1ee384u: goto label_1ee384;
        case 0x1ee388u: goto label_1ee388;
        case 0x1ee38cu: goto label_1ee38c;
        case 0x1ee390u: goto label_1ee390;
        case 0x1ee394u: goto label_1ee394;
        case 0x1ee398u: goto label_1ee398;
        case 0x1ee39cu: goto label_1ee39c;
        case 0x1ee3a0u: goto label_1ee3a0;
        case 0x1ee3a4u: goto label_1ee3a4;
        case 0x1ee3a8u: goto label_1ee3a8;
        case 0x1ee3acu: goto label_1ee3ac;
        case 0x1ee3b0u: goto label_1ee3b0;
        case 0x1ee3b4u: goto label_1ee3b4;
        case 0x1ee3b8u: goto label_1ee3b8;
        case 0x1ee3bcu: goto label_1ee3bc;
        case 0x1ee3c0u: goto label_1ee3c0;
        case 0x1ee3c4u: goto label_1ee3c4;
        case 0x1ee3c8u: goto label_1ee3c8;
        case 0x1ee3ccu: goto label_1ee3cc;
        case 0x1ee3d0u: goto label_1ee3d0;
        case 0x1ee3d4u: goto label_1ee3d4;
        case 0x1ee3d8u: goto label_1ee3d8;
        case 0x1ee3dcu: goto label_1ee3dc;
        case 0x1ee3e0u: goto label_1ee3e0;
        case 0x1ee3e4u: goto label_1ee3e4;
        case 0x1ee3e8u: goto label_1ee3e8;
        case 0x1ee3ecu: goto label_1ee3ec;
        case 0x1ee3f0u: goto label_1ee3f0;
        case 0x1ee3f4u: goto label_1ee3f4;
        case 0x1ee3f8u: goto label_1ee3f8;
        case 0x1ee3fcu: goto label_1ee3fc;
        case 0x1ee400u: goto label_1ee400;
        case 0x1ee404u: goto label_1ee404;
        case 0x1ee408u: goto label_1ee408;
        case 0x1ee40cu: goto label_1ee40c;
        case 0x1ee410u: goto label_1ee410;
        case 0x1ee414u: goto label_1ee414;
        case 0x1ee418u: goto label_1ee418;
        case 0x1ee41cu: goto label_1ee41c;
        case 0x1ee420u: goto label_1ee420;
        case 0x1ee424u: goto label_1ee424;
        case 0x1ee428u: goto label_1ee428;
        case 0x1ee42cu: goto label_1ee42c;
        case 0x1ee430u: goto label_1ee430;
        case 0x1ee434u: goto label_1ee434;
        case 0x1ee438u: goto label_1ee438;
        case 0x1ee43cu: goto label_1ee43c;
        case 0x1ee440u: goto label_1ee440;
        case 0x1ee444u: goto label_1ee444;
        case 0x1ee448u: goto label_1ee448;
        case 0x1ee44cu: goto label_1ee44c;
        case 0x1ee450u: goto label_1ee450;
        case 0x1ee454u: goto label_1ee454;
        case 0x1ee458u: goto label_1ee458;
        case 0x1ee45cu: goto label_1ee45c;
        case 0x1ee460u: goto label_1ee460;
        case 0x1ee464u: goto label_1ee464;
        case 0x1ee468u: goto label_1ee468;
        case 0x1ee46cu: goto label_1ee46c;
        case 0x1ee470u: goto label_1ee470;
        case 0x1ee474u: goto label_1ee474;
        case 0x1ee478u: goto label_1ee478;
        case 0x1ee47cu: goto label_1ee47c;
        case 0x1ee480u: goto label_1ee480;
        case 0x1ee484u: goto label_1ee484;
        case 0x1ee488u: goto label_1ee488;
        case 0x1ee48cu: goto label_1ee48c;
        case 0x1ee490u: goto label_1ee490;
        case 0x1ee494u: goto label_1ee494;
        case 0x1ee498u: goto label_1ee498;
        case 0x1ee49cu: goto label_1ee49c;
        case 0x1ee4a0u: goto label_1ee4a0;
        case 0x1ee4a4u: goto label_1ee4a4;
        case 0x1ee4a8u: goto label_1ee4a8;
        case 0x1ee4acu: goto label_1ee4ac;
        case 0x1ee4b0u: goto label_1ee4b0;
        case 0x1ee4b4u: goto label_1ee4b4;
        case 0x1ee4b8u: goto label_1ee4b8;
        case 0x1ee4bcu: goto label_1ee4bc;
        case 0x1ee4c0u: goto label_1ee4c0;
        case 0x1ee4c4u: goto label_1ee4c4;
        case 0x1ee4c8u: goto label_1ee4c8;
        case 0x1ee4ccu: goto label_1ee4cc;
        case 0x1ee4d0u: goto label_1ee4d0;
        case 0x1ee4d4u: goto label_1ee4d4;
        case 0x1ee4d8u: goto label_1ee4d8;
        case 0x1ee4dcu: goto label_1ee4dc;
        case 0x1ee4e0u: goto label_1ee4e0;
        case 0x1ee4e4u: goto label_1ee4e4;
        case 0x1ee4e8u: goto label_1ee4e8;
        case 0x1ee4ecu: goto label_1ee4ec;
        case 0x1ee4f0u: goto label_1ee4f0;
        case 0x1ee4f4u: goto label_1ee4f4;
        case 0x1ee4f8u: goto label_1ee4f8;
        case 0x1ee4fcu: goto label_1ee4fc;
        case 0x1ee500u: goto label_1ee500;
        case 0x1ee504u: goto label_1ee504;
        case 0x1ee508u: goto label_1ee508;
        case 0x1ee50cu: goto label_1ee50c;
        case 0x1ee510u: goto label_1ee510;
        case 0x1ee514u: goto label_1ee514;
        case 0x1ee518u: goto label_1ee518;
        case 0x1ee51cu: goto label_1ee51c;
        case 0x1ee520u: goto label_1ee520;
        case 0x1ee524u: goto label_1ee524;
        case 0x1ee528u: goto label_1ee528;
        case 0x1ee52cu: goto label_1ee52c;
        case 0x1ee530u: goto label_1ee530;
        case 0x1ee534u: goto label_1ee534;
        case 0x1ee538u: goto label_1ee538;
        case 0x1ee53cu: goto label_1ee53c;
        case 0x1ee540u: goto label_1ee540;
        case 0x1ee544u: goto label_1ee544;
        case 0x1ee548u: goto label_1ee548;
        case 0x1ee54cu: goto label_1ee54c;
        case 0x1ee550u: goto label_1ee550;
        case 0x1ee554u: goto label_1ee554;
        case 0x1ee558u: goto label_1ee558;
        case 0x1ee55cu: goto label_1ee55c;
        case 0x1ee560u: goto label_1ee560;
        case 0x1ee564u: goto label_1ee564;
        case 0x1ee568u: goto label_1ee568;
        case 0x1ee56cu: goto label_1ee56c;
        case 0x1ee570u: goto label_1ee570;
        case 0x1ee574u: goto label_1ee574;
        case 0x1ee578u: goto label_1ee578;
        case 0x1ee57cu: goto label_1ee57c;
        case 0x1ee580u: goto label_1ee580;
        case 0x1ee584u: goto label_1ee584;
        case 0x1ee588u: goto label_1ee588;
        case 0x1ee58cu: goto label_1ee58c;
        case 0x1ee590u: goto label_1ee590;
        case 0x1ee594u: goto label_1ee594;
        case 0x1ee598u: goto label_1ee598;
        case 0x1ee59cu: goto label_1ee59c;
        case 0x1ee5a0u: goto label_1ee5a0;
        case 0x1ee5a4u: goto label_1ee5a4;
        case 0x1ee5a8u: goto label_1ee5a8;
        case 0x1ee5acu: goto label_1ee5ac;
        case 0x1ee5b0u: goto label_1ee5b0;
        case 0x1ee5b4u: goto label_1ee5b4;
        case 0x1ee5b8u: goto label_1ee5b8;
        case 0x1ee5bcu: goto label_1ee5bc;
        case 0x1ee5c0u: goto label_1ee5c0;
        case 0x1ee5c4u: goto label_1ee5c4;
        case 0x1ee5c8u: goto label_1ee5c8;
        case 0x1ee5ccu: goto label_1ee5cc;
        case 0x1ee5d0u: goto label_1ee5d0;
        case 0x1ee5d4u: goto label_1ee5d4;
        case 0x1ee5d8u: goto label_1ee5d8;
        case 0x1ee5dcu: goto label_1ee5dc;
        case 0x1ee5e0u: goto label_1ee5e0;
        case 0x1ee5e4u: goto label_1ee5e4;
        case 0x1ee5e8u: goto label_1ee5e8;
        case 0x1ee5ecu: goto label_1ee5ec;
        case 0x1ee5f0u: goto label_1ee5f0;
        case 0x1ee5f4u: goto label_1ee5f4;
        case 0x1ee5f8u: goto label_1ee5f8;
        case 0x1ee5fcu: goto label_1ee5fc;
        case 0x1ee600u: goto label_1ee600;
        case 0x1ee604u: goto label_1ee604;
        case 0x1ee608u: goto label_1ee608;
        case 0x1ee60cu: goto label_1ee60c;
        case 0x1ee610u: goto label_1ee610;
        case 0x1ee614u: goto label_1ee614;
        case 0x1ee618u: goto label_1ee618;
        case 0x1ee61cu: goto label_1ee61c;
        case 0x1ee620u: goto label_1ee620;
        case 0x1ee624u: goto label_1ee624;
        case 0x1ee628u: goto label_1ee628;
        case 0x1ee62cu: goto label_1ee62c;
        case 0x1ee630u: goto label_1ee630;
        case 0x1ee634u: goto label_1ee634;
        case 0x1ee638u: goto label_1ee638;
        case 0x1ee63cu: goto label_1ee63c;
        case 0x1ee640u: goto label_1ee640;
        case 0x1ee644u: goto label_1ee644;
        case 0x1ee648u: goto label_1ee648;
        case 0x1ee64cu: goto label_1ee64c;
        case 0x1ee650u: goto label_1ee650;
        case 0x1ee654u: goto label_1ee654;
        case 0x1ee658u: goto label_1ee658;
        case 0x1ee65cu: goto label_1ee65c;
        case 0x1ee660u: goto label_1ee660;
        case 0x1ee664u: goto label_1ee664;
        case 0x1ee668u: goto label_1ee668;
        case 0x1ee66cu: goto label_1ee66c;
        case 0x1ee670u: goto label_1ee670;
        case 0x1ee674u: goto label_1ee674;
        case 0x1ee678u: goto label_1ee678;
        case 0x1ee67cu: goto label_1ee67c;
        case 0x1ee680u: goto label_1ee680;
        case 0x1ee684u: goto label_1ee684;
        case 0x1ee688u: goto label_1ee688;
        case 0x1ee68cu: goto label_1ee68c;
        case 0x1ee690u: goto label_1ee690;
        case 0x1ee694u: goto label_1ee694;
        case 0x1ee698u: goto label_1ee698;
        case 0x1ee69cu: goto label_1ee69c;
        case 0x1ee6a0u: goto label_1ee6a0;
        case 0x1ee6a4u: goto label_1ee6a4;
        case 0x1ee6a8u: goto label_1ee6a8;
        case 0x1ee6acu: goto label_1ee6ac;
        case 0x1ee6b0u: goto label_1ee6b0;
        case 0x1ee6b4u: goto label_1ee6b4;
        case 0x1ee6b8u: goto label_1ee6b8;
        case 0x1ee6bcu: goto label_1ee6bc;
        case 0x1ee6c0u: goto label_1ee6c0;
        case 0x1ee6c4u: goto label_1ee6c4;
        case 0x1ee6c8u: goto label_1ee6c8;
        case 0x1ee6ccu: goto label_1ee6cc;
        case 0x1ee6d0u: goto label_1ee6d0;
        case 0x1ee6d4u: goto label_1ee6d4;
        case 0x1ee6d8u: goto label_1ee6d8;
        case 0x1ee6dcu: goto label_1ee6dc;
        case 0x1ee6e0u: goto label_1ee6e0;
        case 0x1ee6e4u: goto label_1ee6e4;
        case 0x1ee6e8u: goto label_1ee6e8;
        case 0x1ee6ecu: goto label_1ee6ec;
        case 0x1ee6f0u: goto label_1ee6f0;
        case 0x1ee6f4u: goto label_1ee6f4;
        case 0x1ee6f8u: goto label_1ee6f8;
        case 0x1ee6fcu: goto label_1ee6fc;
        case 0x1ee700u: goto label_1ee700;
        case 0x1ee704u: goto label_1ee704;
        case 0x1ee708u: goto label_1ee708;
        case 0x1ee70cu: goto label_1ee70c;
        case 0x1ee710u: goto label_1ee710;
        case 0x1ee714u: goto label_1ee714;
        case 0x1ee718u: goto label_1ee718;
        case 0x1ee71cu: goto label_1ee71c;
        case 0x1ee720u: goto label_1ee720;
        case 0x1ee724u: goto label_1ee724;
        case 0x1ee728u: goto label_1ee728;
        case 0x1ee72cu: goto label_1ee72c;
        case 0x1ee730u: goto label_1ee730;
        case 0x1ee734u: goto label_1ee734;
        case 0x1ee738u: goto label_1ee738;
        case 0x1ee73cu: goto label_1ee73c;
        case 0x1ee740u: goto label_1ee740;
        case 0x1ee744u: goto label_1ee744;
        case 0x1ee748u: goto label_1ee748;
        case 0x1ee74cu: goto label_1ee74c;
        case 0x1ee750u: goto label_1ee750;
        case 0x1ee754u: goto label_1ee754;
        case 0x1ee758u: goto label_1ee758;
        case 0x1ee75cu: goto label_1ee75c;
        case 0x1ee760u: goto label_1ee760;
        case 0x1ee764u: goto label_1ee764;
        case 0x1ee768u: goto label_1ee768;
        case 0x1ee76cu: goto label_1ee76c;
        case 0x1ee770u: goto label_1ee770;
        case 0x1ee774u: goto label_1ee774;
        case 0x1ee778u: goto label_1ee778;
        case 0x1ee77cu: goto label_1ee77c;
        case 0x1ee780u: goto label_1ee780;
        case 0x1ee784u: goto label_1ee784;
        case 0x1ee788u: goto label_1ee788;
        case 0x1ee78cu: goto label_1ee78c;
        case 0x1ee790u: goto label_1ee790;
        case 0x1ee794u: goto label_1ee794;
        case 0x1ee798u: goto label_1ee798;
        case 0x1ee79cu: goto label_1ee79c;
        case 0x1ee7a0u: goto label_1ee7a0;
        case 0x1ee7a4u: goto label_1ee7a4;
        case 0x1ee7a8u: goto label_1ee7a8;
        case 0x1ee7acu: goto label_1ee7ac;
        case 0x1ee7b0u: goto label_1ee7b0;
        case 0x1ee7b4u: goto label_1ee7b4;
        case 0x1ee7b8u: goto label_1ee7b8;
        case 0x1ee7bcu: goto label_1ee7bc;
        case 0x1ee7c0u: goto label_1ee7c0;
        case 0x1ee7c4u: goto label_1ee7c4;
        case 0x1ee7c8u: goto label_1ee7c8;
        case 0x1ee7ccu: goto label_1ee7cc;
        case 0x1ee7d0u: goto label_1ee7d0;
        case 0x1ee7d4u: goto label_1ee7d4;
        case 0x1ee7d8u: goto label_1ee7d8;
        case 0x1ee7dcu: goto label_1ee7dc;
        case 0x1ee7e0u: goto label_1ee7e0;
        case 0x1ee7e4u: goto label_1ee7e4;
        case 0x1ee7e8u: goto label_1ee7e8;
        case 0x1ee7ecu: goto label_1ee7ec;
        case 0x1ee7f0u: goto label_1ee7f0;
        case 0x1ee7f4u: goto label_1ee7f4;
        case 0x1ee7f8u: goto label_1ee7f8;
        case 0x1ee7fcu: goto label_1ee7fc;
        case 0x1ee800u: goto label_1ee800;
        case 0x1ee804u: goto label_1ee804;
        case 0x1ee808u: goto label_1ee808;
        case 0x1ee80cu: goto label_1ee80c;
        case 0x1ee810u: goto label_1ee810;
        case 0x1ee814u: goto label_1ee814;
        case 0x1ee818u: goto label_1ee818;
        case 0x1ee81cu: goto label_1ee81c;
        case 0x1ee820u: goto label_1ee820;
        case 0x1ee824u: goto label_1ee824;
        default: break;
    }

    ctx->pc = 0x1ee0f0u;

label_1ee0f0:
    // 0x1ee0f0: 0x27bdd810  addiu       $sp, $sp, -0x27F0
    ctx->pc = 0x1ee0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294957072));
label_1ee0f4:
    // 0x1ee0f4: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x1ee0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
label_1ee0f8:
    // 0x1ee0f8: 0x7fb127d0  sq          $s1, 0x27D0($sp)
    ctx->pc = 0x1ee0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10192), GPR_VEC(ctx, 17));
label_1ee0fc:
    // 0x1ee0fc: 0x7fb327b0  sq          $s3, 0x27B0($sp)
    ctx->pc = 0x1ee0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10160), GPR_VEC(ctx, 19));
label_1ee100:
    // 0x1ee100: 0x7fb72770  sq          $s7, 0x2770($sp)
    ctx->pc = 0x1ee100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10096), GPR_VEC(ctx, 23));
label_1ee104:
    // 0x1ee104: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ee104u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ee108:
    // 0x1ee108: 0x7fbe2760  sq          $fp, 0x2760($sp)
    ctx->pc = 0x1ee108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10080), GPR_VEC(ctx, 30));
label_1ee10c:
    // 0x1ee10c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1ee10cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee110:
    // 0x1ee110: 0x7fb027e0  sq          $s0, 0x27E0($sp)
    ctx->pc = 0x1ee110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10208), GPR_VEC(ctx, 16));
label_1ee114:
    // 0x1ee114: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1ee114u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee118:
    // 0x1ee118: 0x7fb227c0  sq          $s2, 0x27C0($sp)
    ctx->pc = 0x1ee118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10176), GPR_VEC(ctx, 18));
label_1ee11c:
    // 0x1ee11c: 0x7fb427a0  sq          $s4, 0x27A0($sp)
    ctx->pc = 0x1ee11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10144), GPR_VEC(ctx, 20));
label_1ee120:
    // 0x1ee120: 0x7fb52790  sq          $s5, 0x2790($sp)
    ctx->pc = 0x1ee120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10128), GPR_VEC(ctx, 21));
label_1ee124:
    // 0x1ee124: 0x7fb62780  sq          $s6, 0x2780($sp)
    ctx->pc = 0x1ee124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10112), GPR_VEC(ctx, 22));
label_1ee128:
    // 0x1ee128: 0xffbf2750  sd          $ra, 0x2750($sp)
    ctx->pc = 0x1ee128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 10064), GPR_U64(ctx, 31));
label_1ee12c:
    // 0x1ee12c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1ee12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1ee130:
    // 0x1ee130: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1ee130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1ee134:
    // 0x1ee134: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ee134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1ee138:
    // 0x1ee138: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ee138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ee13c:
    // 0x1ee13c: 0x8ca30fc8  lw          $v1, 0xFC8($a1)
    ctx->pc = 0x1ee13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4040)));
label_1ee140:
    // 0x1ee140: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ee140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ee144:
    // 0x1ee144: 0x8e740000  lw          $s4, 0x0($s3)
    ctx->pc = 0x1ee144u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ee148:
    // 0x1ee148: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1ee148u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ee14c:
    // 0x1ee14c: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x1ee14cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1ee150:
    // 0x1ee150: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1ee150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1ee154:
    // 0x1ee154: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1ee158:
    if (ctx->pc == 0x1EE158u) {
        ctx->pc = 0x1EE158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE154u;
        // 0x1ee158: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE15Cu;
        goto label_1ee15c;
    }
    ctx->pc = 0x1EE154u;
    {
        const bool branch_taken_0x1ee154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE154u;
        // 0x1ee158: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee154) {
            ctx->pc = 0x1EE1A0u;
            goto label_1ee1a0;
        }
    }
    ctx->pc = 0x1EE15Cu;
label_1ee15c:
    // 0x1ee15c: 0xc07b020  jal         func_1EC080
label_1ee160:
    if (ctx->pc == 0x1EE160u) {
        ctx->pc = 0x1EE160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE15Cu;
        // 0x1ee160: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE164u;
        goto label_1ee164;
    }
    ctx->pc = 0x1EE15Cu;
    SET_GPR_U32(ctx, 31, 0x1EE164u);
    ctx->pc = 0x1EE160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE15Cu;
    // 0x1ee160: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC080u, 0x1EE15Cu, 0x1EE164u)) {
        return;
    }
    ctx->pc = 0x1EE164u;
label_1ee164:
    // 0x1ee164: 0x8e660024  lw          $a2, 0x24($s3)
    ctx->pc = 0x1ee164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1ee168:
    // 0x1ee168: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ee168u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ee16c:
    // 0x1ee16c: 0x8cc20050  lw          $v0, 0x50($a2)
    ctx->pc = 0x1ee16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
label_1ee170:
    // 0x1ee170: 0x104001a1  beqz        $v0, . + 4 + (0x1A1 << 2)
label_1ee174:
    if (ctx->pc == 0x1EE174u) {
        ctx->pc = 0x1EE174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE170u;
        // 0x1ee174: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE178u;
        goto label_1ee178;
    }
    ctx->pc = 0x1EE170u;
    {
        const bool branch_taken_0x1ee170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE170u;
        // 0x1ee174: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee170) {
            ctx->pc = 0x1EE7F8u;
            goto label_1ee7f8;
        }
    }
    ctx->pc = 0x1EE178u;
label_1ee178:
    // 0x1ee178: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ee178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ee17c:
    // 0x1ee17c: 0xc093b0a  jal         func_24EC28
label_1ee180:
    if (ctx->pc == 0x1EE180u) {
        ctx->pc = 0x1EE180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE17Cu;
        // 0x1ee180: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE184u;
        goto label_1ee184;
    }
    ctx->pc = 0x1EE17Cu;
    SET_GPR_U32(ctx, 31, 0x1EE184u);
    ctx->pc = 0x1EE180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE17Cu;
    // 0x1ee180: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EC28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EC28u, 0x1EE17Cu, 0x1EE184u)) {
        return;
    }
    ctx->pc = 0x1EE184u;
label_1ee184:
    // 0x1ee184: 0x8e660024  lw          $a2, 0x24($s3)
    ctx->pc = 0x1ee184u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1ee188:
    // 0x1ee188: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1ee188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1ee18c:
    // 0x1ee18c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1ee18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1ee190:
    // 0x1ee190: 0xc093b0a  jal         func_24EC28
label_1ee194:
    if (ctx->pc == 0x1EE194u) {
        ctx->pc = 0x1EE194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE190u;
        // 0x1ee194: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE198u;
        goto label_1ee198;
    }
    ctx->pc = 0x1EE190u;
    SET_GPR_U32(ctx, 31, 0x1EE198u);
    ctx->pc = 0x1EE194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE190u;
    // 0x1ee194: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EC28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EC28u, 0x1EE190u, 0x1EE198u)) {
        return;
    }
    ctx->pc = 0x1EE198u;
label_1ee198:
    // 0x1ee198: 0x1000000f  b           . + 4 + (0xF << 2)
label_1ee19c:
    if (ctx->pc == 0x1EE19Cu) {
        ctx->pc = 0x1EE19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE198u;
        // 0x1ee19c: 0x8e830008  lw          $v1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE1A0u;
        goto label_1ee1a0;
    }
    ctx->pc = 0x1EE198u;
    {
        const bool branch_taken_0x1ee198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE198u;
        // 0x1ee19c: 0x8e830008  lw          $v1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee198) {
            ctx->pc = 0x1EE1D8u;
            goto label_1ee1d8;
        }
    }
    ctx->pc = 0x1EE1A0u;
label_1ee1a0:
    // 0x1ee1a0: 0x6a020017  ldl         $v0, 0x17($s0)
    ctx->pc = 0x1ee1a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1ee1a4:
    // 0x1ee1a4: 0x6e020010  ldr         $v0, 0x10($s0)
    ctx->pc = 0x1ee1a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1ee1a8:
    // 0x1ee1a8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1ee1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1ee1ac:
    // 0x1ee1ac: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1ee1acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ee1b0:
    // 0x1ee1b0: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1ee1b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ee1b4:
    // 0x1ee1b4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1ee1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_1ee1b8:
    // 0x1ee1b8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1ee1b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee1bc:
    // 0x1ee1bc: 0x6a0c0027  ldl         $t4, 0x27($s0)
    ctx->pc = 0x1ee1bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_1ee1c0:
    // 0x1ee1c0: 0x6e0c0020  ldr         $t4, 0x20($s0)
    ctx->pc = 0x1ee1c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_1ee1c4:
    // 0x1ee1c4: 0x8e0d0028  lw          $t5, 0x28($s0)
    ctx->pc = 0x1ee1c4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1ee1c8:
    // 0x1ee1c8: 0xb3ac0017  sdl         $t4, 0x17($sp)
    ctx->pc = 0x1ee1c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ee1cc:
    // 0x1ee1cc: 0xb7ac0010  sdr         $t4, 0x10($sp)
    ctx->pc = 0x1ee1ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ee1d0:
    // 0x1ee1d0: 0xafad0018  sw          $t5, 0x18($sp)
    ctx->pc = 0x1ee1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 13));
label_1ee1d4:
    // 0x1ee1d4: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1ee1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1ee1d8:
    // 0x1ee1d8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1ee1d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee1dc:
    // 0x1ee1dc: 0x8e860014  lw          $a2, 0x14($s4)
    ctx->pc = 0x1ee1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_1ee1e0:
    // 0x1ee1e0: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x1ee1e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1ee1e4:
    // 0x1ee1e4: 0x8e47001c  lw          $a3, 0x1C($s2)
    ctx->pc = 0x1ee1e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1ee1e8:
    // 0x1ee1e8: 0x8e480028  lw          $t0, 0x28($s2)
    ctx->pc = 0x1ee1e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_1ee1ec:
    // 0x1ee1ec: 0xc6500020  lwc1        $f16, 0x20($s2)
    ctx->pc = 0x1ee1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1ee1f0:
    // 0x1ee1f0: 0x1860012b  blez        $v1, . + 4 + (0x12B << 2)
label_1ee1f4:
    if (ctx->pc == 0x1EE1F4u) {
        ctx->pc = 0x1EE1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1F0u;
        // 0x1ee1f4: 0xc64f0024  lwc1        $f15, 0x24($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE1F8u;
        goto label_1ee1f8;
    }
    ctx->pc = 0x1EE1F0u;
    {
        const bool branch_taken_0x1ee1f0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1EE1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1F0u;
        // 0x1ee1f4: 0xc64f0024  lwc1        $f15, 0x24($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee1f0) {
            ctx->pc = 0x1EE6A0u;
            goto label_1ee6a0;
        }
    }
    ctx->pc = 0x1EE1F8u;
label_1ee1f8:
    // 0x1ee1f8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1ee1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1ee1fc:
    // 0x1ee1fc: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x1ee1fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1ee200:
    // 0x1ee200: 0x244b9e30  addiu       $t3, $v0, -0x61D0
    ctx->pc = 0x1ee200u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942256));
label_1ee204:
    // 0x1ee204: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ee204u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee208:
    // 0x1ee208: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x1ee208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1ee20c:
    // 0x1ee20c: 0x0  nop
    ctx->pc = 0x1ee20cu;
    // NOP
label_1ee210:
    // 0x1ee210: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x1ee210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee214:
    // 0x1ee214: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ee214u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1ee218:
    // 0x1ee218: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1ee218u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1ee21c:
    // 0x1ee21c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_1ee220:
    if (ctx->pc == 0x1EE220u) {
        ctx->pc = 0x1EE220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE21Cu;
        // 0x1ee220: 0x8e44002c  lw          $a0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE224u;
        goto label_1ee224;
    }
    ctx->pc = 0x1EE21Cu;
    {
        const bool branch_taken_0x1ee21c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x1EE220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE21Cu;
        // 0x1ee220: 0x8e44002c  lw          $a0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee21c) {
            ctx->pc = 0x1EE234u;
            goto label_1ee234;
        }
    }
    ctx->pc = 0x1EE224u;
label_1ee224:
    // 0x1ee224: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x1ee224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1ee228:
    // 0x1ee228: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ee228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ee22c:
    // 0x1ee22c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_1ee230:
    if (ctx->pc == 0x1EE230u) {
        ctx->pc = 0x1EE230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE22Cu;
        // 0x1ee230: 0x8e420034  lw          $v0, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE234u;
        goto label_1ee234;
    }
    ctx->pc = 0x1EE22Cu;
    {
        const bool branch_taken_0x1ee22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee22c) {
            ctx->pc = 0x1EE230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE22Cu;
            // 0x1ee230: 0x8e420034  lw          $v0, 0x34($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE23Cu;
            goto label_1ee23c;
        }
    }
    ctx->pc = 0x1EE234u;
label_1ee234:
    // 0x1ee234: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1ee234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1ee238:
    // 0x1ee238: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x1ee238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_1ee23c:
    // 0x1ee23c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ee23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ee240:
    // 0x1ee240: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ee240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ee244:
    // 0x1ee244: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ee244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ee248:
    // 0x1ee248: 0x88620003  lwl         $v0, 0x3($v1)
    ctx->pc = 0x1ee248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_1ee24c:
    // 0x1ee24c: 0x98620000  lwr         $v0, 0x0($v1)
    ctx->pc = 0x1ee24cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_1ee250:
    // 0x1ee250: 0xaba22433  swl         $v0, 0x2433($sp)
    ctx->pc = 0x1ee250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 9267); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1ee254:
    // 0x1ee254: 0xbba22430  swr         $v0, 0x2430($sp)
    ctx->pc = 0x1ee254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 9264); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1ee258:
    // 0x1ee258: 0x93a22433  lbu         $v0, 0x2433($sp)
    ctx->pc = 0x1ee258u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 9267)));
label_1ee25c:
    // 0x1ee25c: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x1ee25cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1ee260:
    // 0x1ee260: 0x5440010d  bnel        $v0, $zero, . + 4 + (0x10D << 2)
label_1ee264:
    if (ctx->pc == 0x1EE264u) {
        ctx->pc = 0x1EE264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE260u;
        // 0x1ee264: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE268u;
        goto label_1ee268;
    }
    ctx->pc = 0x1EE260u;
    {
        const bool branch_taken_0x1ee260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee260) {
            ctx->pc = 0x1EE264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE260u;
            // 0x1ee264: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE698u;
            goto label_1ee698;
        }
    }
    ctx->pc = 0x1EE268u;
label_1ee268:
    // 0x1ee268: 0x510a0001  beql        $t0, $t2, . + 4 + (0x1 << 2)
label_1ee26c:
    if (ctx->pc == 0x1EE26Cu) {
        ctx->pc = 0x1EE26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE268u;
        // 0x1ee26c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE270u;
        goto label_1ee270;
    }
    ctx->pc = 0x1EE268u;
    {
        const bool branch_taken_0x1ee268 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 10));
        if (branch_taken_0x1ee268) {
            ctx->pc = 0x1EE26Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE268u;
            // 0x1ee26c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE270u;
            goto label_1ee270;
        }
    }
    ctx->pc = 0x1EE270u;
label_1ee270:
    // 0x1ee270: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x1ee270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ee274:
    // 0x1ee274: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x1ee274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee278:
    // 0x1ee278: 0x50ea0001  beql        $a3, $t2, . + 4 + (0x1 << 2)
label_1ee27c:
    if (ctx->pc == 0x1EE27Cu) {
        ctx->pc = 0x1EE27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE278u;
        // 0x1ee27c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE280u;
        goto label_1ee280;
    }
    ctx->pc = 0x1EE278u;
    {
        const bool branch_taken_0x1ee278 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        if (branch_taken_0x1ee278) {
            ctx->pc = 0x1EE27Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE278u;
            // 0x1ee27c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE280u;
            goto label_1ee280;
        }
    }
    ctx->pc = 0x1EE280u;
label_1ee280:
    // 0x1ee280: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1ee280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ee284:
    // 0x1ee284: 0x50ea0001  beql        $a3, $t2, . + 4 + (0x1 << 2)
label_1ee288:
    if (ctx->pc == 0x1EE288u) {
        ctx->pc = 0x1EE288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE284u;
        // 0x1ee288: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE28Cu;
        goto label_1ee28c;
    }
    ctx->pc = 0x1EE284u;
    {
        const bool branch_taken_0x1ee284 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        if (branch_taken_0x1ee284) {
            ctx->pc = 0x1EE288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE284u;
            // 0x1ee288: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE28Cu;
            goto label_1ee28c;
        }
    }
    ctx->pc = 0x1EE28Cu;
label_1ee28c:
    // 0x1ee28c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1ee28cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1ee290:
    // 0x1ee290: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1ee290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_1ee294:
    // 0x1ee294: 0x34218a72  ori         $at, $at, 0x8A72
    ctx->pc = 0x1ee294u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35442);
label_1ee298:
    // 0x1ee298: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ee298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ee29c:
    // 0x1ee29c: 0xc4c0002c  lwc1        $f0, 0x2C($a2)
    ctx->pc = 0x1ee29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee2a0:
    // 0x1ee2a0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1ee2a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1ee2a4:
    // 0x1ee2a4: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1ee2a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1ee2a8:
    // 0x1ee2a8: 0x3c014222  lui         $at, 0x4222
    ctx->pc = 0x1ee2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16930 << 16));
label_1ee2ac:
    // 0x1ee2ac: 0x3421f983  ori         $at, $at, 0xF983
    ctx->pc = 0x1ee2acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63875);
label_1ee2b0:
    // 0x1ee2b0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1ee2b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1ee2b4:
    // 0x1ee2b4: 0x46001864  .word       0x46001864                   # cvt.w.s     $f1, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ee2b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1ee2b8:
    // 0x1ee2b8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1ee2b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1ee2bc:
    // 0x1ee2bc: 0xc4c4000c  lwc1        $f4, 0xC($a2)
    ctx->pc = 0x1ee2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1ee2c0:
    // 0x1ee2c0: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x1ee2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ee2c4:
    // 0x1ee2c4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1ee2c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1ee2c8:
    // 0x1ee2c8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1ee2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ee2cc:
    // 0x1ee2cc: 0x48001a  div         $zero, $v0, $t0
    ctx->pc = 0x1ee2ccu;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ee2d0:
    // 0x1ee2d0: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1ee2d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_1ee2d4:
    // 0x1ee2d4: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x1ee2d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1ee2d8:
    // 0x1ee2d8: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x1ee2d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1ee2dc:
    // 0x1ee2dc: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1ee2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1ee2e0:
    // 0x1ee2e0: 0xb3a22427  sdl         $v0, 0x2427($sp)
    ctx->pc = 0x1ee2e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 9255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ee2e4:
    // 0x1ee2e4: 0xb7a22420  sdr         $v0, 0x2420($sp)
    ctx->pc = 0x1ee2e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 9248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ee2e8:
    // 0x1ee2e8: 0xafa32428  sw          $v1, 0x2428($sp)
    ctx->pc = 0x1ee2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 9256), GPR_U32(ctx, 3));
label_1ee2ec:
    // 0x1ee2ec: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1ee2ecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_1ee2f0:
    // 0x1ee2f0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1ee2f0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1ee2f4:
    // 0x1ee2f4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1ee2f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_1ee2f8:
    // 0x1ee2f8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ee2f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1ee2fc:
    // 0x1ee2fc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1ee2fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1ee300:
    // 0x1ee300: 0x244300c0  addiu       $v1, $v0, 0xC0
    ctx->pc = 0x1ee300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_1ee304:
    // 0x1ee304: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ee304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ee308:
    // 0x1ee308: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ee308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1ee30c:
    // 0x1ee30c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ee30cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ee310:
    // 0x1ee310: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ee310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ee314:
    // 0x1ee314: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1ee314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_1ee318:
    // 0x1ee318: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x1ee318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_1ee31c:
    // 0x1ee31c: 0xc4470000  lwc1        $f7, 0x0($v0)
    ctx->pc = 0x1ee31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1ee320:
    // 0x1ee320: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1ee320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee324:
    // 0x1ee324: 0x46043842  mul.s       $f1, $f7, $f4
    ctx->pc = 0x1ee324u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_1ee328:
    // 0x1ee328: 0x46030202  mul.s       $f8, $f0, $f3
    ctx->pc = 0x1ee328u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1ee32c:
    // 0x1ee32c: 0x460339c2  mul.s       $f7, $f7, $f3
    ctx->pc = 0x1ee32cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
label_1ee330:
    // 0x1ee330: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1ee330u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_1ee334:
    // 0x1ee334: 0x460142c1  sub.s       $f11, $f8, $f1
    ctx->pc = 0x1ee334u;
    ctx->f[11] = FPU_SUB_S(ctx->f[8], ctx->f[1]);
label_1ee338:
    // 0x1ee338: 0x46014200  add.s       $f8, $f8, $f1
    ctx->pc = 0x1ee338u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
label_1ee33c:
    // 0x1ee33c: 0x46003a80  add.s       $f10, $f7, $f0
    ctx->pc = 0x1ee33cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
label_1ee340:
    // 0x1ee340: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x1ee340u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_1ee344:
    // 0x1ee344: 0x2010  mfhi        $a0
    ctx->pc = 0x1ee344u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1ee348:
    // 0x1ee348: 0x87001a  div         $zero, $a0, $a3
    ctx->pc = 0x1ee348u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ee34c:
    // 0x1ee34c: 0x1812  mflo        $v1
    ctx->pc = 0x1ee34cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_1ee350:
    // 0x1ee350: 0x1010  mfhi        $v0
    ctx->pc = 0x1ee350u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ee354:
    // 0x1ee354: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ee354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ee358:
    // 0x1ee358: 0x0  nop
    ctx->pc = 0x1ee358u;
    // NOP
label_1ee35c:
    // 0x1ee35c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1ee35cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1ee360:
    // 0x1ee360: 0x44834800  mtc1        $v1, $f9
    ctx->pc = 0x1ee360u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1ee364:
    // 0x1ee364: 0x0  nop
    ctx->pc = 0x1ee364u;
    // NOP
label_1ee368:
    // 0x1ee368: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x1ee368u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
label_1ee36c:
    // 0x1ee36c: 0x460f6302  mul.s       $f12, $f12, $f15
    ctx->pc = 0x1ee36cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[15]);
label_1ee370:
    // 0x1ee370: 0x46104a42  mul.s       $f9, $f9, $f16
    ctx->pc = 0x1ee370u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[16]);
label_1ee374:
    // 0x1ee374: 0x460f6340  add.s       $f13, $f12, $f15
    ctx->pc = 0x1ee374u;
    ctx->f[13] = FPU_ADD_S(ctx->f[12], ctx->f[15]);
label_1ee378:
    // 0x1ee378: 0x46104b80  add.s       $f14, $f9, $f16
    ctx->pc = 0x1ee378u;
    ctx->f[14] = FPU_ADD_S(ctx->f[9], ctx->f[16]);
label_1ee37c:
    // 0x1ee37c: 0x46005007  neg.s       $f0, $f10
    ctx->pc = 0x1ee37cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[10]);
label_1ee380:
    // 0x1ee380: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1ee380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ee384:
    // 0x1ee384: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1ee384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ee388:
    // 0x1ee388: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1ee388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ee38c:
    // 0x1ee38c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ee38cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ee390:
    // 0x1ee390: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1ee390u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1ee394:
    // 0x1ee394: 0xc7a62420  lwc1        $f6, 0x2420($sp)
    ctx->pc = 0x1ee394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 9248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1ee398:
    // 0x1ee398: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1ee398u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1ee39c:
    // 0x1ee39c: 0xc7a42424  lwc1        $f4, 0x2424($sp)
    ctx->pc = 0x1ee39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 9252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1ee3a0:
    // 0x1ee3a0: 0xc7a52428  lwc1        $f5, 0x2428($sp)
    ctx->pc = 0x1ee3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 9256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1ee3a4:
    // 0x1ee3a4: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x1ee3a4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
label_1ee3a8:
    // 0x1ee3a8: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x1ee3a8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_1ee3ac:
    // 0x1ee3ac: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x1ee3acu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
label_1ee3b0:
    // 0x1ee3b0: 0x46005807  neg.s       $f0, $f11
    ctx->pc = 0x1ee3b0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[11]);
label_1ee3b4:
    // 0x1ee3b4: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1ee3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ee3b8:
    // 0x1ee3b8: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1ee3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ee3bc:
    // 0x1ee3bc: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x1ee3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ee3c0:
    // 0x1ee3c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ee3c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ee3c4:
    // 0x1ee3c4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1ee3c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1ee3c8:
    // 0x1ee3c8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1ee3c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1ee3cc:
    // 0x1ee3cc: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x1ee3ccu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
label_1ee3d0:
    // 0x1ee3d0: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x1ee3d0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_1ee3d4:
    // 0x1ee3d4: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x1ee3d4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
label_1ee3d8:
    // 0x1ee3d8: 0xe7a62420  swc1        $f6, 0x2420($sp)
    ctx->pc = 0x1ee3d8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 9248), bits); }
label_1ee3dc:
    // 0x1ee3dc: 0xe7a42424  swc1        $f4, 0x2424($sp)
    ctx->pc = 0x1ee3dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 9252), bits); }
label_1ee3e0:
    // 0x1ee3e0: 0xe7a52428  swc1        $f5, 0x2428($sp)
    ctx->pc = 0x1ee3e0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 9256), bits); }
label_1ee3e4:
    // 0x1ee3e4: 0xe7a62740  swc1        $f6, 0x2740($sp)
    ctx->pc = 0x1ee3e4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10048), bits); }
label_1ee3e8:
    // 0x1ee3e8: 0xe7a42744  swc1        $f4, 0x2744($sp)
    ctx->pc = 0x1ee3e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10052), bits); }
label_1ee3ec:
    // 0x1ee3ec: 0xe7a52748  swc1        $f5, 0x2748($sp)
    ctx->pc = 0x1ee3ecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10056), bits); }
label_1ee3f0:
    // 0x1ee3f0: 0x6ba22747  ldl         $v0, 0x2747($sp)
    ctx->pc = 0x1ee3f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 10055); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1ee3f4:
    // 0x1ee3f4: 0x6fa22740  ldr         $v0, 0x2740($sp)
    ctx->pc = 0x1ee3f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 10048); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1ee3f8:
    // 0x1ee3f8: 0x8fa32748  lw          $v1, 0x2748($sp)
    ctx->pc = 0x1ee3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10056)));
label_1ee3fc:
    // 0x1ee3fc: 0xb0a2fffb  sdl         $v0, -0x5($a1)
    ctx->pc = 0x1ee3fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294967291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ee400:
    // 0x1ee400: 0xb4a2fff4  sdr         $v0, -0xC($a1)
    ctx->pc = 0x1ee400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294967284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ee404:
    // 0x1ee404: 0xaca3fffc  sw          $v1, -0x4($a1)
    ctx->pc = 0x1ee404u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), GPR_U32(ctx, 3));
label_1ee408:
    // 0x1ee408: 0xe4ac0010  swc1        $f12, 0x10($a1)
    ctx->pc = 0x1ee408u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_1ee40c:
    // 0x1ee40c: 0xe4a90014  swc1        $f9, 0x14($a1)
    ctx->pc = 0x1ee40cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_1ee410:
    // 0x1ee410: 0x93a22430  lbu         $v0, 0x2430($sp)
    ctx->pc = 0x1ee410u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 9264)));
label_1ee414:
    // 0x1ee414: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1ee414u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_1ee418:
    // 0x1ee418: 0x93a32431  lbu         $v1, 0x2431($sp)
    ctx->pc = 0x1ee418u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 9265)));
label_1ee41c:
    // 0x1ee41c: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x1ee41cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
label_1ee420:
    // 0x1ee420: 0x93a22432  lbu         $v0, 0x2432($sp)
    ctx->pc = 0x1ee420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 9266)));
label_1ee424:
    // 0x1ee424: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x1ee424u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
label_1ee428:
    // 0x1ee428: 0x93a32433  lbu         $v1, 0x2433($sp)
    ctx->pc = 0x1ee428u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 9267)));
label_1ee42c:
    // 0x1ee42c: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x1ee42cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
label_1ee430:
    // 0x1ee430: 0x24a50024  addiu       $a1, $a1, 0x24
    ctx->pc = 0x1ee430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
label_1ee434:
    // 0x1ee434: 0x68cd0007  ldl         $t5, 0x7($a2)
    ctx->pc = 0x1ee434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
label_1ee438:
    // 0x1ee438: 0x6ccd0000  ldr         $t5, 0x0($a2)
    ctx->pc = 0x1ee438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_1ee43c:
    // 0x1ee43c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1ee43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1ee440:
    // 0x1ee440: 0xb3ad2427  sdl         $t5, 0x2427($sp)
    ctx->pc = 0x1ee440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 9255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ee444:
    // 0x1ee444: 0xb7ad2420  sdr         $t5, 0x2420($sp)
    ctx->pc = 0x1ee444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 9248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ee448:
    // 0x1ee448: 0xafa22428  sw          $v0, 0x2428($sp)
    ctx->pc = 0x1ee448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 9256), GPR_U32(ctx, 2));
label_1ee44c:
    // 0x1ee44c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1ee44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ee450:
    // 0x1ee450: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1ee450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ee454:
    // 0x1ee454: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x1ee454u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
label_1ee458:
    // 0x1ee458: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1ee458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee45c:
    // 0x1ee45c: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x1ee45cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_1ee460:
    // 0x1ee460: 0xc7a52420  lwc1        $f5, 0x2420($sp)
    ctx->pc = 0x1ee460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 9248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1ee464:
    // 0x1ee464: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x1ee464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_1ee468:
    // 0x1ee468: 0xc7a32424  lwc1        $f3, 0x2424($sp)
    ctx->pc = 0x1ee468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 9252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ee46c:
    // 0x1ee46c: 0xc7a42428  lwc1        $f4, 0x2428($sp)
    ctx->pc = 0x1ee46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 9256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1ee470:
    // 0x1ee470: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x1ee470u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_1ee474:
    // 0x1ee474: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x1ee474u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1ee478:
    // 0x1ee478: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x1ee478u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_1ee47c:
    // 0x1ee47c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1ee47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ee480:
    // 0x1ee480: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1ee480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ee484:
    // 0x1ee484: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x1ee484u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
label_1ee488:
    // 0x1ee488: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1ee488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee48c:
    // 0x1ee48c: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x1ee48cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
label_1ee490:
    // 0x1ee490: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x1ee490u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
label_1ee494:
    // 0x1ee494: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x1ee494u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_1ee498:
    // 0x1ee498: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x1ee498u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1ee49c:
    // 0x1ee49c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x1ee49cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_1ee4a0:
    // 0x1ee4a0: 0xe7a52420  swc1        $f5, 0x2420($sp)
    ctx->pc = 0x1ee4a0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 9248), bits); }
label_1ee4a4:
    // 0x1ee4a4: 0xe7a32424  swc1        $f3, 0x2424($sp)
    ctx->pc = 0x1ee4a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 9252), bits); }
label_1ee4a8:
    // 0x1ee4a8: 0xe7a42428  swc1        $f4, 0x2428($sp)
    ctx->pc = 0x1ee4a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 9256), bits); }
label_1ee4ac:
    // 0x1ee4ac: 0xe7a52740  swc1        $f5, 0x2740($sp)
    ctx->pc = 0x1ee4acu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10048), bits); }
label_1ee4b0:
    // 0x1ee4b0: 0xe7a32744  swc1        $f3, 0x2744($sp)
    ctx->pc = 0x1ee4b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10052), bits); }
label_1ee4b4:
    // 0x1ee4b4: 0xe7a42748  swc1        $f4, 0x2748($sp)
    ctx->pc = 0x1ee4b4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10056), bits); }
label_1ee4b8:
    // 0x1ee4b8: 0x6bac2747  ldl         $t4, 0x2747($sp)
    ctx->pc = 0x1ee4b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 10055); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_1ee4bc:
    // 0x1ee4bc: 0x6fac2740  ldr         $t4, 0x2740($sp)
    ctx->pc = 0x1ee4bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 10048); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_1ee4c0:
    // 0x1ee4c0: 0x8fad2748  lw          $t5, 0x2748($sp)
    ctx->pc = 0x1ee4c0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10056)));
label_1ee4c4:
    // 0x1ee4c4: 0xb0acfffb  sdl         $t4, -0x5($a1)
    ctx->pc = 0x1ee4c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294967291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ee4c8:
    // 0x1ee4c8: 0xb4acfff4  sdr         $t4, -0xC($a1)
    ctx->pc = 0x1ee4c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294967284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ee4cc:
    // 0x1ee4cc: 0xacadfffc  sw          $t5, -0x4($a1)
    ctx->pc = 0x1ee4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), GPR_U32(ctx, 13));
label_1ee4d0:
    // 0x1ee4d0: 0xe4ad0010  swc1        $f13, 0x10($a1)
    ctx->pc = 0x1ee4d0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_1ee4d4:
    // 0x1ee4d4: 0xe4a90014  swc1        $f9, 0x14($a1)
    ctx->pc = 0x1ee4d4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_1ee4d8:
    // 0x1ee4d8: 0x93a22430  lbu         $v0, 0x2430($sp)
    ctx->pc = 0x1ee4d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 9264)));
label_1ee4dc:
    // 0x1ee4dc: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1ee4dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_1ee4e0:
    // 0x1ee4e0: 0x93a32431  lbu         $v1, 0x2431($sp)
    ctx->pc = 0x1ee4e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 9265)));
label_1ee4e4:
    // 0x1ee4e4: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x1ee4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
label_1ee4e8:
    // 0x1ee4e8: 0x93a22432  lbu         $v0, 0x2432($sp)
    ctx->pc = 0x1ee4e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 9266)));
label_1ee4ec:
    // 0x1ee4ec: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x1ee4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
label_1ee4f0:
    // 0x1ee4f0: 0x93a32433  lbu         $v1, 0x2433($sp)
    ctx->pc = 0x1ee4f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 9267)));
label_1ee4f4:
    // 0x1ee4f4: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x1ee4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
label_1ee4f8:
    // 0x1ee4f8: 0x24a50024  addiu       $a1, $a1, 0x24
    ctx->pc = 0x1ee4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
label_1ee4fc:
    // 0x1ee4fc: 0x68c40007  ldl         $a0, 0x7($a2)
    ctx->pc = 0x1ee4fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1ee500:
    // 0x1ee500: 0x6cc40000  ldr         $a0, 0x0($a2)
    ctx->pc = 0x1ee500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1ee504:
    // 0x1ee504: 0x8ccc0008  lw          $t4, 0x8($a2)
    ctx->pc = 0x1ee504u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1ee508:
    // 0x1ee508: 0xb3a42427  sdl         $a0, 0x2427($sp)
    ctx->pc = 0x1ee508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 9255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ee50c:
    // 0x1ee50c: 0xb7a42420  sdr         $a0, 0x2420($sp)
    ctx->pc = 0x1ee50cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 9248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ee510:
    // 0x1ee510: 0xafac2428  sw          $t4, 0x2428($sp)
    ctx->pc = 0x1ee510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 9256), GPR_U32(ctx, 12));
label_1ee514:
    // 0x1ee514: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1ee514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ee518:
    // 0x1ee518: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1ee518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ee51c:
    // 0x1ee51c: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x1ee51cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
label_1ee520:
    // 0x1ee520: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1ee520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee524:
    // 0x1ee524: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x1ee524u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
label_1ee528:
    // 0x1ee528: 0xc7a52420  lwc1        $f5, 0x2420($sp)
    ctx->pc = 0x1ee528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 9248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1ee52c:
    // 0x1ee52c: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x1ee52cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
label_1ee530:
    // 0x1ee530: 0xc7a32424  lwc1        $f3, 0x2424($sp)
    ctx->pc = 0x1ee530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 9252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ee534:
    // 0x1ee534: 0xc7a42428  lwc1        $f4, 0x2428($sp)
    ctx->pc = 0x1ee534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 9256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1ee538:
    // 0x1ee538: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x1ee538u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_1ee53c:
    // 0x1ee53c: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x1ee53cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1ee540:
    // 0x1ee540: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x1ee540u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_1ee544:
    // 0x1ee544: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1ee544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ee548:
    // 0x1ee548: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1ee548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ee54c:
    // 0x1ee54c: 0x460b0842  mul.s       $f1, $f1, $f11
    ctx->pc = 0x1ee54cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
label_1ee550:
    // 0x1ee550: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1ee550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee554:
    // 0x1ee554: 0x460b1082  mul.s       $f2, $f2, $f11
    ctx->pc = 0x1ee554u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
label_1ee558:
    // 0x1ee558: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x1ee558u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
label_1ee55c:
    // 0x1ee55c: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x1ee55cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_1ee560:
    // 0x1ee560: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x1ee560u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1ee564:
    // 0x1ee564: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x1ee564u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_1ee568:
    // 0x1ee568: 0xe7a52420  swc1        $f5, 0x2420($sp)
    ctx->pc = 0x1ee568u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 9248), bits); }
label_1ee56c:
    // 0x1ee56c: 0xe7a32424  swc1        $f3, 0x2424($sp)
    ctx->pc = 0x1ee56cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 9252), bits); }
label_1ee570:
    // 0x1ee570: 0xe7a42428  swc1        $f4, 0x2428($sp)
    ctx->pc = 0x1ee570u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 9256), bits); }
label_1ee574:
    // 0x1ee574: 0xe7a52740  swc1        $f5, 0x2740($sp)
    ctx->pc = 0x1ee574u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10048), bits); }
label_1ee578:
    // 0x1ee578: 0xe7a32744  swc1        $f3, 0x2744($sp)
    ctx->pc = 0x1ee578u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10052), bits); }
label_1ee57c:
    // 0x1ee57c: 0xe7a42748  swc1        $f4, 0x2748($sp)
    ctx->pc = 0x1ee57cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10056), bits); }
label_1ee580:
    // 0x1ee580: 0x6ba32747  ldl         $v1, 0x2747($sp)
    ctx->pc = 0x1ee580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 10055); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1ee584:
    // 0x1ee584: 0x6fa32740  ldr         $v1, 0x2740($sp)
    ctx->pc = 0x1ee584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 10048); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1ee588:
    // 0x1ee588: 0x8fa42748  lw          $a0, 0x2748($sp)
    ctx->pc = 0x1ee588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10056)));
label_1ee58c:
    // 0x1ee58c: 0xb0a3fffb  sdl         $v1, -0x5($a1)
    ctx->pc = 0x1ee58cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294967291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ee590:
    // 0x1ee590: 0xb4a3fff4  sdr         $v1, -0xC($a1)
    ctx->pc = 0x1ee590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294967284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ee594:
    // 0x1ee594: 0xaca4fffc  sw          $a0, -0x4($a1)
    ctx->pc = 0x1ee594u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), GPR_U32(ctx, 4));
label_1ee598:
    // 0x1ee598: 0xe4ad0010  swc1        $f13, 0x10($a1)
    ctx->pc = 0x1ee598u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_1ee59c:
    // 0x1ee59c: 0xe4ae0014  swc1        $f14, 0x14($a1)
    ctx->pc = 0x1ee59cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_1ee5a0:
    // 0x1ee5a0: 0x93a22430  lbu         $v0, 0x2430($sp)
    ctx->pc = 0x1ee5a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 9264)));
label_1ee5a4:
    // 0x1ee5a4: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1ee5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_1ee5a8:
    // 0x1ee5a8: 0x93a32431  lbu         $v1, 0x2431($sp)
    ctx->pc = 0x1ee5a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 9265)));
label_1ee5ac:
    // 0x1ee5ac: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x1ee5acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
label_1ee5b0:
    // 0x1ee5b0: 0x93a22432  lbu         $v0, 0x2432($sp)
    ctx->pc = 0x1ee5b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 9266)));
label_1ee5b4:
    // 0x1ee5b4: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x1ee5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
label_1ee5b8:
    // 0x1ee5b8: 0x93a32433  lbu         $v1, 0x2433($sp)
    ctx->pc = 0x1ee5b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 9267)));
label_1ee5bc:
    // 0x1ee5bc: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x1ee5bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
label_1ee5c0:
    // 0x1ee5c0: 0x24a50024  addiu       $a1, $a1, 0x24
    ctx->pc = 0x1ee5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
label_1ee5c4:
    // 0x1ee5c4: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x1ee5c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1ee5c8:
    // 0x1ee5c8: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x1ee5c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1ee5cc:
    // 0x1ee5cc: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1ee5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1ee5d0:
    // 0x1ee5d0: 0xb3a22427  sdl         $v0, 0x2427($sp)
    ctx->pc = 0x1ee5d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 9255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ee5d4:
    // 0x1ee5d4: 0xb7a22420  sdr         $v0, 0x2420($sp)
    ctx->pc = 0x1ee5d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 9248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ee5d8:
    // 0x1ee5d8: 0xafa32428  sw          $v1, 0x2428($sp)
    ctx->pc = 0x1ee5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 9256), GPR_U32(ctx, 3));
label_1ee5dc:
    // 0x1ee5dc: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x1ee5dcu;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
label_1ee5e0:
    // 0x1ee5e0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1ee5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee5e4:
    // 0x1ee5e4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1ee5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ee5e8:
    // 0x1ee5e8: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1ee5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ee5ec:
    // 0x1ee5ec: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x1ee5ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_1ee5f0:
    // 0x1ee5f0: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x1ee5f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
label_1ee5f4:
    // 0x1ee5f4: 0xc7a52420  lwc1        $f5, 0x2420($sp)
    ctx->pc = 0x1ee5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 9248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1ee5f8:
    // 0x1ee5f8: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x1ee5f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_1ee5fc:
    // 0x1ee5fc: 0xc7a32424  lwc1        $f3, 0x2424($sp)
    ctx->pc = 0x1ee5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 9252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ee600:
    // 0x1ee600: 0xc7a42428  lwc1        $f4, 0x2428($sp)
    ctx->pc = 0x1ee600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 9256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1ee604:
    // 0x1ee604: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x1ee604u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_1ee608:
    // 0x1ee608: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x1ee608u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_1ee60c:
    // 0x1ee60c: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x1ee60cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_1ee610:
    // 0x1ee610: 0x46004207  neg.s       $f8, $f8
    ctx->pc = 0x1ee610u;
    ctx->f[8] = FPU_NEG_S(ctx->f[8]);
label_1ee614:
    // 0x1ee614: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1ee614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee618:
    // 0x1ee618: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1ee618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ee61c:
    // 0x1ee61c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1ee61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ee620:
    // 0x1ee620: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x1ee620u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
label_1ee624:
    // 0x1ee624: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x1ee624u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
label_1ee628:
    // 0x1ee628: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x1ee628u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
label_1ee62c:
    // 0x1ee62c: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x1ee62cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_1ee630:
    // 0x1ee630: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x1ee630u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_1ee634:
    // 0x1ee634: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x1ee634u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_1ee638:
    // 0x1ee638: 0xe7a52420  swc1        $f5, 0x2420($sp)
    ctx->pc = 0x1ee638u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 9248), bits); }
label_1ee63c:
    // 0x1ee63c: 0xe7a32424  swc1        $f3, 0x2424($sp)
    ctx->pc = 0x1ee63cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 9252), bits); }
label_1ee640:
    // 0x1ee640: 0xe7a42428  swc1        $f4, 0x2428($sp)
    ctx->pc = 0x1ee640u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 9256), bits); }
label_1ee644:
    // 0x1ee644: 0xe7a52740  swc1        $f5, 0x2740($sp)
    ctx->pc = 0x1ee644u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10048), bits); }
label_1ee648:
    // 0x1ee648: 0xe7a32744  swc1        $f3, 0x2744($sp)
    ctx->pc = 0x1ee648u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10052), bits); }
label_1ee64c:
    // 0x1ee64c: 0xe7a42748  swc1        $f4, 0x2748($sp)
    ctx->pc = 0x1ee64cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10056), bits); }
label_1ee650:
    // 0x1ee650: 0x6bad2747  ldl         $t5, 0x2747($sp)
    ctx->pc = 0x1ee650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 10055); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
label_1ee654:
    // 0x1ee654: 0x6fad2740  ldr         $t5, 0x2740($sp)
    ctx->pc = 0x1ee654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 10048); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_1ee658:
    // 0x1ee658: 0x8fa22748  lw          $v0, 0x2748($sp)
    ctx->pc = 0x1ee658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10056)));
label_1ee65c:
    // 0x1ee65c: 0xb0adfffb  sdl         $t5, -0x5($a1)
    ctx->pc = 0x1ee65cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294967291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ee660:
    // 0x1ee660: 0xb4adfff4  sdr         $t5, -0xC($a1)
    ctx->pc = 0x1ee660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294967284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ee664:
    // 0x1ee664: 0xaca2fffc  sw          $v0, -0x4($a1)
    ctx->pc = 0x1ee664u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), GPR_U32(ctx, 2));
label_1ee668:
    // 0x1ee668: 0xe4ac0010  swc1        $f12, 0x10($a1)
    ctx->pc = 0x1ee668u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_1ee66c:
    // 0x1ee66c: 0xe4ae0014  swc1        $f14, 0x14($a1)
    ctx->pc = 0x1ee66cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_1ee670:
    // 0x1ee670: 0x93a22430  lbu         $v0, 0x2430($sp)
    ctx->pc = 0x1ee670u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 9264)));
label_1ee674:
    // 0x1ee674: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1ee674u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_1ee678:
    // 0x1ee678: 0x93a32431  lbu         $v1, 0x2431($sp)
    ctx->pc = 0x1ee678u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 9265)));
label_1ee67c:
    // 0x1ee67c: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x1ee67cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
label_1ee680:
    // 0x1ee680: 0x93a22432  lbu         $v0, 0x2432($sp)
    ctx->pc = 0x1ee680u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 9266)));
label_1ee684:
    // 0x1ee684: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x1ee684u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
label_1ee688:
    // 0x1ee688: 0x93a32433  lbu         $v1, 0x2433($sp)
    ctx->pc = 0x1ee688u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 9267)));
label_1ee68c:
    // 0x1ee68c: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x1ee68cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
label_1ee690:
    // 0x1ee690: 0x24a50024  addiu       $a1, $a1, 0x24
    ctx->pc = 0x1ee690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
label_1ee694:
    // 0x1ee694: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1ee694u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_1ee698:
    // 0x1ee698: 0x1520fedd  bnez        $t1, . + 4 + (-0x123 << 2)
label_1ee69c:
    if (ctx->pc == 0x1EE69Cu) {
        ctx->pc = 0x1EE69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE698u;
        // 0x1ee69c: 0x8cc6003c  lw          $a2, 0x3C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE6A0u;
        goto label_1ee6a0;
    }
    ctx->pc = 0x1EE698u;
    {
        const bool branch_taken_0x1ee698 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE698u;
        // 0x1ee69c: 0x8cc6003c  lw          $a2, 0x3C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee698) {
            ctx->pc = 0x1EE210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ee210;
        }
    }
    ctx->pc = 0x1EE6A0u;
label_1ee6a0:
    // 0x1ee6a0: 0x1aa00056  blez        $s5, . + 4 + (0x56 << 2)
label_1ee6a4:
    if (ctx->pc == 0x1EE6A4u) {
        ctx->pc = 0x1EE6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE6A0u;
        // 0x1ee6a4: 0x7bb027e0  lq          $s0, 0x27E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 10208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE6A8u;
        goto label_1ee6a8;
    }
    ctx->pc = 0x1EE6A0u;
    {
        const bool branch_taken_0x1ee6a0 = (GPR_S64(ctx, 21) <= 0);
        ctx->pc = 0x1EE6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE6A0u;
        // 0x1ee6a4: 0x7bb027e0  lq          $s0, 0x27E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 10208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee6a0) {
            ctx->pc = 0x1EE7FCu;
            goto label_1ee7fc;
        }
    }
    ctx->pc = 0x1EE6A8u;
label_1ee6a8:
    // 0x1ee6a8: 0xc07b02e  jal         func_1EC0B8
label_1ee6ac:
    if (ctx->pc == 0x1EE6ACu) {
        ctx->pc = 0x1EE6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE6A8u;
        // 0x1ee6ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE6B0u;
        goto label_1ee6b0;
    }
    ctx->pc = 0x1EE6A8u;
    SET_GPR_U32(ctx, 31, 0x1EE6B0u);
    ctx->pc = 0x1EE6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE6A8u;
    // 0x1ee6ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC0B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC0B8u, 0x1EE6A8u, 0x1EE6B0u)) {
        return;
    }
    ctx->pc = 0x1EE6B0u;
label_1ee6b0:
    // 0x1ee6b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ee6b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ee6b4:
    // 0x1ee6b4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_1ee6b8:
    if (ctx->pc == 0x1EE6B8u) {
        ctx->pc = 0x1EE6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE6B4u;
        // 0x1ee6b8: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE6BCu;
        goto label_1ee6bc;
    }
    ctx->pc = 0x1EE6B4u;
    {
        const bool branch_taken_0x1ee6b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE6B4u;
        // 0x1ee6b8: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee6b4) {
            ctx->pc = 0x1EE6CCu;
            goto label_1ee6cc;
        }
    }
    ctx->pc = 0x1EE6BCu;
label_1ee6bc:
    // 0x1ee6bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ee6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ee6c0:
    // 0x1ee6c0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1ee6c4:
    if (ctx->pc == 0x1EE6C4u) {
        ctx->pc = 0x1EE6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE6C0u;
        // 0x1ee6c4: 0x8c570000  lw          $s7, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE6C8u;
        goto label_1ee6c8;
    }
    ctx->pc = 0x1EE6C0u;
    {
        const bool branch_taken_0x1ee6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee6c0) {
            ctx->pc = 0x1EE6C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE6C0u;
            // 0x1ee6c4: 0x8c570000  lw          $s7, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE6C8u;
            goto label_1ee6c8;
        }
    }
    ctx->pc = 0x1EE6C8u;
label_1ee6c8:
    // 0x1ee6c8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1ee6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_1ee6cc:
    // 0x1ee6cc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1ee6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1ee6d0:
    // 0x1ee6d0: 0x24510fd8  addiu       $s1, $v0, 0xFD8
    ctx->pc = 0x1ee6d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4056));
label_1ee6d4:
    // 0x1ee6d4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1ee6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1ee6d8:
    // 0x1ee6d8: 0x40f809  jalr        $v0
label_1ee6dc:
    if (ctx->pc == 0x1EE6DCu) {
        ctx->pc = 0x1EE6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE6D8u;
        // 0x1ee6dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE6E0u;
        goto label_1ee6e0;
    }
    ctx->pc = 0x1EE6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EE6E0u);
        ctx->pc = 0x1EE6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE6D8u;
        // 0x1ee6dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE6D8u, 0x1EE6E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE6E0u;
label_1ee6e0:
    // 0x1ee6e0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1ee6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1ee6e4:
    // 0x1ee6e4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1ee6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ee6e8:
    // 0x1ee6e8: 0x40f809  jalr        $v0
label_1ee6ec:
    if (ctx->pc == 0x1EE6ECu) {
        ctx->pc = 0x1EE6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE6E8u;
        // 0x1ee6ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE6F0u;
        goto label_1ee6f0;
    }
    ctx->pc = 0x1EE6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EE6F0u);
        ctx->pc = 0x1EE6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE6E8u;
        // 0x1ee6ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE6E8u, 0x1EE6F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE6F0u;
label_1ee6f0:
    // 0x1ee6f0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1ee6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1ee6f4:
    // 0x1ee6f4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1ee6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1ee6f8:
    // 0x1ee6f8: 0x40f809  jalr        $v0
label_1ee6fc:
    if (ctx->pc == 0x1EE6FCu) {
        ctx->pc = 0x1EE6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE6F8u;
        // 0x1ee6fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE700u;
        goto label_1ee700;
    }
    ctx->pc = 0x1EE6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EE700u);
        ctx->pc = 0x1EE6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE6F8u;
        // 0x1ee6fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE6F8u, 0x1EE700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE700u;
label_1ee700:
    // 0x1ee700: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1ee700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1ee704:
    // 0x1ee704: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1ee704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1ee708:
    // 0x1ee708: 0x40f809  jalr        $v0
label_1ee70c:
    if (ctx->pc == 0x1EE70Cu) {
        ctx->pc = 0x1EE70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE708u;
        // 0x1ee70c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE710u;
        goto label_1ee710;
    }
    ctx->pc = 0x1EE708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EE710u);
        ctx->pc = 0x1EE70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE708u;
        // 0x1ee70c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE708u, 0x1EE710u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE710u;
label_1ee710:
    // 0x1ee710: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_1ee714:
    if (ctx->pc == 0x1EE714u) {
        ctx->pc = 0x1EE714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE710u;
        // 0x1ee714: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE718u;
        goto label_1ee718;
    }
    ctx->pc = 0x1EE710u;
    {
        const bool branch_taken_0x1ee710 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee710) {
            ctx->pc = 0x1EE714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE710u;
            // 0x1ee714: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE74Cu;
            goto label_1ee74c;
        }
    }
    ctx->pc = 0x1EE718u;
label_1ee718:
    // 0x1ee718: 0xc078114  jal         func_1E0450
label_1ee71c:
    if (ctx->pc == 0x1EE71Cu) {
        ctx->pc = 0x1EE71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE718u;
        // 0x1ee71c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE720u;
        goto label_1ee720;
    }
    ctx->pc = 0x1EE718u;
    SET_GPR_U32(ctx, 31, 0x1EE720u);
    ctx->pc = 0x1EE71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE718u;
    // 0x1ee71c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E0450u, 0x1EE718u, 0x1EE720u)) {
        return;
    }
    ctx->pc = 0x1EE720u;
label_1ee720:
    // 0x1ee720: 0x2c440003  sltiu       $a0, $v0, 0x3
    ctx->pc = 0x1ee720u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1ee724:
    // 0x1ee724: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1ee724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1ee728:
    // 0x1ee728: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x1ee728u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
label_1ee72c:
    // 0x1ee72c: 0x2463e818  addiu       $v1, $v1, -0x17E8
    ctx->pc = 0x1ee72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961176));
label_1ee730:
    // 0x1ee730: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ee730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ee734:
    // 0x1ee734: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ee734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ee738:
    // 0x1ee738: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ee738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ee73c:
    // 0x1ee73c: 0x40f809  jalr        $v0
label_1ee740:
    if (ctx->pc == 0x1EE740u) {
        ctx->pc = 0x1EE744u;
        goto label_1ee744;
    }
    ctx->pc = 0x1EE73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EE744u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE73Cu, 0x1EE744u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE744u;
label_1ee744:
    // 0x1ee744: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ee748:
    if (ctx->pc == 0x1EE748u) {
        ctx->pc = 0x1EE748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE744u;
        // 0x1ee748: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE74Cu;
        goto label_1ee74c;
    }
    ctx->pc = 0x1EE744u;
    {
        const bool branch_taken_0x1ee744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE744u;
        // 0x1ee748: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee744) {
            ctx->pc = 0x1EE768u;
            goto label_1ee768;
        }
    }
    ctx->pc = 0x1EE74Cu;
label_1ee74c:
    // 0x1ee74c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1ee74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1ee750:
    // 0x1ee750: 0x40f809  jalr        $v0
label_1ee754:
    if (ctx->pc == 0x1EE754u) {
        ctx->pc = 0x1EE754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE750u;
        // 0x1ee754: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE758u;
        goto label_1ee758;
    }
    ctx->pc = 0x1EE750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EE758u);
        ctx->pc = 0x1EE754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE750u;
        // 0x1ee754: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE750u, 0x1EE758u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE758u;
label_1ee758:
    // 0x1ee758: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1ee758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1ee75c:
    // 0x1ee75c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1ee75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1ee760:
    // 0x1ee760: 0x40f809  jalr        $v0
label_1ee764:
    if (ctx->pc == 0x1EE764u) {
        ctx->pc = 0x1EE764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE760u;
        // 0x1ee764: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE768u;
        goto label_1ee768;
    }
    ctx->pc = 0x1EE760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EE768u);
        ctx->pc = 0x1EE764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE760u;
        // 0x1ee764: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE760u, 0x1EE768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE768u;
label_1ee768:
    // 0x1ee768: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ee768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ee76c:
    // 0x1ee76c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1ee76cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1ee770:
    // 0x1ee770: 0x152880  sll         $a1, $s5, 2
    ctx->pc = 0x1ee770u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_1ee774:
    // 0x1ee774: 0xc091fea  jal         func_247FA8
label_1ee778:
    if (ctx->pc == 0x1EE778u) {
        ctx->pc = 0x1EE778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE774u;
        // 0x1ee778: 0x24070019  addiu       $a3, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE77Cu;
        goto label_1ee77c;
    }
    ctx->pc = 0x1EE774u;
    SET_GPR_U32(ctx, 31, 0x1EE77Cu);
    ctx->pc = 0x1EE778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE774u;
    // 0x1ee778: 0x24070019  addiu       $a3, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247FA8u, 0x1EE774u, 0x1EE77Cu)) {
        return;
    }
    ctx->pc = 0x1EE77Cu;
label_1ee77c:
    // 0x1ee77c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1ee780:
    if (ctx->pc == 0x1EE780u) {
        ctx->pc = 0x1EE780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE77Cu;
        // 0x1ee780: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE784u;
        goto label_1ee784;
    }
    ctx->pc = 0x1EE77Cu;
    {
        const bool branch_taken_0x1ee77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE77Cu;
        // 0x1ee780: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee77c) {
            ctx->pc = 0x1EE7E8u;
            goto label_1ee7e8;
        }
    }
    ctx->pc = 0x1EE784u;
label_1ee784:
    // 0x1ee784: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ee784u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee788:
    // 0x1ee788: 0x2a23018  mult        $a2, $s5, $v0
    ctx->pc = 0x1ee788u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_1ee78c:
    // 0x1ee78c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ee78cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee790:
    // 0x1ee790: 0x18c00011  blez        $a2, . + 4 + (0x11 << 2)
label_1ee794:
    if (ctx->pc == 0x1EE794u) {
        ctx->pc = 0x1EE794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE790u;
        // 0x1ee794: 0x27a52440  addiu       $a1, $sp, 0x2440 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 9280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE798u;
        goto label_1ee798;
    }
    ctx->pc = 0x1EE790u;
    {
        const bool branch_taken_0x1ee790 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x1EE794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE790u;
        // 0x1ee794: 0x27a52440  addiu       $a1, $sp, 0x2440 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 9280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee790) {
            ctx->pc = 0x1EE7D8u;
            goto label_1ee7d8;
        }
    }
    ctx->pc = 0x1EE798u;
label_1ee798:
    // 0x1ee798: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ee798u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ee79c:
    // 0x1ee79c: 0x0  nop
    ctx->pc = 0x1ee79cu;
    // NOP
label_1ee7a0:
    // 0x1ee7a0: 0x25040002  addiu       $a0, $t0, 0x2
    ctx->pc = 0x1ee7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_1ee7a4:
    // 0x1ee7a4: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x1ee7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ee7a8:
    // 0x1ee7a8: 0x25030003  addiu       $v1, $t0, 0x3
    ctx->pc = 0x1ee7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_1ee7ac:
    // 0x1ee7ac: 0xa4e20002  sh          $v0, 0x2($a3)
    ctx->pc = 0x1ee7acu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
label_1ee7b0:
    // 0x1ee7b0: 0xa4e80000  sh          $t0, 0x0($a3)
    ctx->pc = 0x1ee7b0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 8));
label_1ee7b4:
    // 0x1ee7b4: 0x25290006  addiu       $t1, $t1, 0x6
    ctx->pc = 0x1ee7b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6));
label_1ee7b8:
    // 0x1ee7b8: 0xa4e8000a  sh          $t0, 0xA($a3)
    ctx->pc = 0x1ee7b8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 8));
label_1ee7bc:
    // 0x1ee7bc: 0x126102a  slt         $v0, $t1, $a2
    ctx->pc = 0x1ee7bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1ee7c0:
    // 0x1ee7c0: 0xa4e40006  sh          $a0, 0x6($a3)
    ctx->pc = 0x1ee7c0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 6), (uint16_t)GPR_U32(ctx, 4));
label_1ee7c4:
    // 0x1ee7c4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1ee7c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_1ee7c8:
    // 0x1ee7c8: 0xa4e30008  sh          $v1, 0x8($a3)
    ctx->pc = 0x1ee7c8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 8), (uint16_t)GPR_U32(ctx, 3));
label_1ee7cc:
    // 0x1ee7cc: 0xa4e40004  sh          $a0, 0x4($a3)
    ctx->pc = 0x1ee7ccu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 4));
label_1ee7d0:
    // 0x1ee7d0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1ee7d4:
    if (ctx->pc == 0x1EE7D4u) {
        ctx->pc = 0x1EE7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE7D0u;
        // 0x1ee7d4: 0x24e7000c  addiu       $a3, $a3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE7D8u;
        goto label_1ee7d8;
    }
    ctx->pc = 0x1EE7D0u;
    {
        const bool branch_taken_0x1ee7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE7D0u;
        // 0x1ee7d4: 0x24e7000c  addiu       $a3, $a3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee7d0) {
            ctx->pc = 0x1EE7A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ee7a0;
        }
    }
    ctx->pc = 0x1EE7D8u;
label_1ee7d8:
    // 0x1ee7d8: 0xc09202a  jal         func_2480A8
label_1ee7dc:
    if (ctx->pc == 0x1EE7DCu) {
        ctx->pc = 0x1EE7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE7D8u;
        // 0x1ee7dc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE7E0u;
        goto label_1ee7e0;
    }
    ctx->pc = 0x1EE7D8u;
    SET_GPR_U32(ctx, 31, 0x1EE7E0u);
    ctx->pc = 0x1EE7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE7D8u;
    // 0x1ee7dc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2480A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2480A8u, 0x1EE7D8u, 0x1EE7E0u)) {
        return;
    }
    ctx->pc = 0x1EE7E0u;
label_1ee7e0:
    // 0x1ee7e0: 0xc092016  jal         func_248058
label_1ee7e4:
    if (ctx->pc == 0x1EE7E4u) {
        ctx->pc = 0x1EE7E8u;
        goto label_1ee7e8;
    }
    ctx->pc = 0x1EE7E0u;
    SET_GPR_U32(ctx, 31, 0x1EE7E8u);
    ctx->pc = 0x248058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248058u, 0x1EE7E0u, 0x1EE7E8u)) {
        return;
    }
    ctx->pc = 0x1EE7E8u;
label_1ee7e8:
    // 0x1ee7e8: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
label_1ee7ec:
    if (ctx->pc == 0x1EE7ECu) {
        ctx->pc = 0x1EE7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE7E8u;
        // 0x1ee7ec: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE7F0u;
        goto label_1ee7f0;
    }
    ctx->pc = 0x1EE7E8u;
    {
        const bool branch_taken_0x1ee7e8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE7E8u;
        // 0x1ee7ec: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee7e8) {
            ctx->pc = 0x1EE7F8u;
            goto label_1ee7f8;
        }
    }
    ctx->pc = 0x1EE7F0u;
label_1ee7f0:
    // 0x1ee7f0: 0xc08c4aa  jal         func_2312A8
label_1ee7f4:
    if (ctx->pc == 0x1EE7F4u) {
        ctx->pc = 0x1EE7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE7F0u;
        // 0x1ee7f4: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE7F8u;
        goto label_1ee7f8;
    }
    ctx->pc = 0x1EE7F0u;
    SET_GPR_U32(ctx, 31, 0x1EE7F8u);
    ctx->pc = 0x1EE7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE7F0u;
    // 0x1ee7f4: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2312A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2312A8u, 0x1EE7F0u, 0x1EE7F8u)) {
        return;
    }
    ctx->pc = 0x1EE7F8u;
label_1ee7f8:
    // 0x1ee7f8: 0x7bb027e0  lq          $s0, 0x27E0($sp)
    ctx->pc = 0x1ee7f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 10208)));
label_1ee7fc:
    // 0x1ee7fc: 0x7bb127d0  lq          $s1, 0x27D0($sp)
    ctx->pc = 0x1ee7fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 10192)));
label_1ee800:
    // 0x1ee800: 0x7bb227c0  lq          $s2, 0x27C0($sp)
    ctx->pc = 0x1ee800u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 10176)));
label_1ee804:
    // 0x1ee804: 0x7bb327b0  lq          $s3, 0x27B0($sp)
    ctx->pc = 0x1ee804u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 10160)));
label_1ee808:
    // 0x1ee808: 0x7bb427a0  lq          $s4, 0x27A0($sp)
    ctx->pc = 0x1ee808u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 10144)));
label_1ee80c:
    // 0x1ee80c: 0x7bb52790  lq          $s5, 0x2790($sp)
    ctx->pc = 0x1ee80cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 10128)));
label_1ee810:
    // 0x1ee810: 0x7bb62780  lq          $s6, 0x2780($sp)
    ctx->pc = 0x1ee810u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 10112)));
label_1ee814:
    // 0x1ee814: 0x7bb72770  lq          $s7, 0x2770($sp)
    ctx->pc = 0x1ee814u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 10096)));
label_1ee818:
    // 0x1ee818: 0x7bbe2760  lq          $fp, 0x2760($sp)
    ctx->pc = 0x1ee818u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 10080)));
label_1ee81c:
    // 0x1ee81c: 0xdfbf2750  ld          $ra, 0x2750($sp)
    ctx->pc = 0x1ee81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 10064)));
label_1ee820:
    // 0x1ee820: 0x3e00008  jr          $ra
label_1ee824:
    if (ctx->pc == 0x1EE824u) {
        ctx->pc = 0x1EE824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE820u;
        // 0x1ee824: 0x27bd27f0  addiu       $sp, $sp, 0x27F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE828u;
        goto label_fallthrough_0x1ee820;
    }
    ctx->pc = 0x1EE820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE820u;
        // 0x1ee824: 0x27bd27f0  addiu       $sp, $sp, 0x27F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ee820:
    ctx->pc = 0x1EE828u;
}
