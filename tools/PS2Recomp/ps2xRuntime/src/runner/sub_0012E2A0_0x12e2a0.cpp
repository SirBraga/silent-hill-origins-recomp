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

// Function: sub_0012E2A0
// Address: 0x12e2a0 - 0x12f020
void sub_0012E2A0_0x12e2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E2A0_0x12e2a0");
#endif

    switch (ctx->pc) {
        case 0x12e2a0u: goto label_12e2a0;
        case 0x12e2a4u: goto label_12e2a4;
        case 0x12e2a8u: goto label_12e2a8;
        case 0x12e2acu: goto label_12e2ac;
        case 0x12e2b0u: goto label_12e2b0;
        case 0x12e2b4u: goto label_12e2b4;
        case 0x12e2b8u: goto label_12e2b8;
        case 0x12e2bcu: goto label_12e2bc;
        case 0x12e2c0u: goto label_12e2c0;
        case 0x12e2c4u: goto label_12e2c4;
        case 0x12e2c8u: goto label_12e2c8;
        case 0x12e2ccu: goto label_12e2cc;
        case 0x12e2d0u: goto label_12e2d0;
        case 0x12e2d4u: goto label_12e2d4;
        case 0x12e2d8u: goto label_12e2d8;
        case 0x12e2dcu: goto label_12e2dc;
        case 0x12e2e0u: goto label_12e2e0;
        case 0x12e2e4u: goto label_12e2e4;
        case 0x12e2e8u: goto label_12e2e8;
        case 0x12e2ecu: goto label_12e2ec;
        case 0x12e2f0u: goto label_12e2f0;
        case 0x12e2f4u: goto label_12e2f4;
        case 0x12e2f8u: goto label_12e2f8;
        case 0x12e2fcu: goto label_12e2fc;
        case 0x12e300u: goto label_12e300;
        case 0x12e304u: goto label_12e304;
        case 0x12e308u: goto label_12e308;
        case 0x12e30cu: goto label_12e30c;
        case 0x12e310u: goto label_12e310;
        case 0x12e314u: goto label_12e314;
        case 0x12e318u: goto label_12e318;
        case 0x12e31cu: goto label_12e31c;
        case 0x12e320u: goto label_12e320;
        case 0x12e324u: goto label_12e324;
        case 0x12e328u: goto label_12e328;
        case 0x12e32cu: goto label_12e32c;
        case 0x12e330u: goto label_12e330;
        case 0x12e334u: goto label_12e334;
        case 0x12e338u: goto label_12e338;
        case 0x12e33cu: goto label_12e33c;
        case 0x12e340u: goto label_12e340;
        case 0x12e344u: goto label_12e344;
        case 0x12e348u: goto label_12e348;
        case 0x12e34cu: goto label_12e34c;
        case 0x12e350u: goto label_12e350;
        case 0x12e354u: goto label_12e354;
        case 0x12e358u: goto label_12e358;
        case 0x12e35cu: goto label_12e35c;
        case 0x12e360u: goto label_12e360;
        case 0x12e364u: goto label_12e364;
        case 0x12e368u: goto label_12e368;
        case 0x12e36cu: goto label_12e36c;
        case 0x12e370u: goto label_12e370;
        case 0x12e374u: goto label_12e374;
        case 0x12e378u: goto label_12e378;
        case 0x12e37cu: goto label_12e37c;
        case 0x12e380u: goto label_12e380;
        case 0x12e384u: goto label_12e384;
        case 0x12e388u: goto label_12e388;
        case 0x12e38cu: goto label_12e38c;
        case 0x12e390u: goto label_12e390;
        case 0x12e394u: goto label_12e394;
        case 0x12e398u: goto label_12e398;
        case 0x12e39cu: goto label_12e39c;
        case 0x12e3a0u: goto label_12e3a0;
        case 0x12e3a4u: goto label_12e3a4;
        case 0x12e3a8u: goto label_12e3a8;
        case 0x12e3acu: goto label_12e3ac;
        case 0x12e3b0u: goto label_12e3b0;
        case 0x12e3b4u: goto label_12e3b4;
        case 0x12e3b8u: goto label_12e3b8;
        case 0x12e3bcu: goto label_12e3bc;
        case 0x12e3c0u: goto label_12e3c0;
        case 0x12e3c4u: goto label_12e3c4;
        case 0x12e3c8u: goto label_12e3c8;
        case 0x12e3ccu: goto label_12e3cc;
        case 0x12e3d0u: goto label_12e3d0;
        case 0x12e3d4u: goto label_12e3d4;
        case 0x12e3d8u: goto label_12e3d8;
        case 0x12e3dcu: goto label_12e3dc;
        case 0x12e3e0u: goto label_12e3e0;
        case 0x12e3e4u: goto label_12e3e4;
        case 0x12e3e8u: goto label_12e3e8;
        case 0x12e3ecu: goto label_12e3ec;
        case 0x12e3f0u: goto label_12e3f0;
        case 0x12e3f4u: goto label_12e3f4;
        case 0x12e3f8u: goto label_12e3f8;
        case 0x12e3fcu: goto label_12e3fc;
        case 0x12e400u: goto label_12e400;
        case 0x12e404u: goto label_12e404;
        case 0x12e408u: goto label_12e408;
        case 0x12e40cu: goto label_12e40c;
        case 0x12e410u: goto label_12e410;
        case 0x12e414u: goto label_12e414;
        case 0x12e418u: goto label_12e418;
        case 0x12e41cu: goto label_12e41c;
        case 0x12e420u: goto label_12e420;
        case 0x12e424u: goto label_12e424;
        case 0x12e428u: goto label_12e428;
        case 0x12e42cu: goto label_12e42c;
        case 0x12e430u: goto label_12e430;
        case 0x12e434u: goto label_12e434;
        case 0x12e438u: goto label_12e438;
        case 0x12e43cu: goto label_12e43c;
        case 0x12e440u: goto label_12e440;
        case 0x12e444u: goto label_12e444;
        case 0x12e448u: goto label_12e448;
        case 0x12e44cu: goto label_12e44c;
        case 0x12e450u: goto label_12e450;
        case 0x12e454u: goto label_12e454;
        case 0x12e458u: goto label_12e458;
        case 0x12e45cu: goto label_12e45c;
        case 0x12e460u: goto label_12e460;
        case 0x12e464u: goto label_12e464;
        case 0x12e468u: goto label_12e468;
        case 0x12e46cu: goto label_12e46c;
        case 0x12e470u: goto label_12e470;
        case 0x12e474u: goto label_12e474;
        case 0x12e478u: goto label_12e478;
        case 0x12e47cu: goto label_12e47c;
        case 0x12e480u: goto label_12e480;
        case 0x12e484u: goto label_12e484;
        case 0x12e488u: goto label_12e488;
        case 0x12e48cu: goto label_12e48c;
        case 0x12e490u: goto label_12e490;
        case 0x12e494u: goto label_12e494;
        case 0x12e498u: goto label_12e498;
        case 0x12e49cu: goto label_12e49c;
        case 0x12e4a0u: goto label_12e4a0;
        case 0x12e4a4u: goto label_12e4a4;
        case 0x12e4a8u: goto label_12e4a8;
        case 0x12e4acu: goto label_12e4ac;
        case 0x12e4b0u: goto label_12e4b0;
        case 0x12e4b4u: goto label_12e4b4;
        case 0x12e4b8u: goto label_12e4b8;
        case 0x12e4bcu: goto label_12e4bc;
        case 0x12e4c0u: goto label_12e4c0;
        case 0x12e4c4u: goto label_12e4c4;
        case 0x12e4c8u: goto label_12e4c8;
        case 0x12e4ccu: goto label_12e4cc;
        case 0x12e4d0u: goto label_12e4d0;
        case 0x12e4d4u: goto label_12e4d4;
        case 0x12e4d8u: goto label_12e4d8;
        case 0x12e4dcu: goto label_12e4dc;
        case 0x12e4e0u: goto label_12e4e0;
        case 0x12e4e4u: goto label_12e4e4;
        case 0x12e4e8u: goto label_12e4e8;
        case 0x12e4ecu: goto label_12e4ec;
        case 0x12e4f0u: goto label_12e4f0;
        case 0x12e4f4u: goto label_12e4f4;
        case 0x12e4f8u: goto label_12e4f8;
        case 0x12e4fcu: goto label_12e4fc;
        case 0x12e500u: goto label_12e500;
        case 0x12e504u: goto label_12e504;
        case 0x12e508u: goto label_12e508;
        case 0x12e50cu: goto label_12e50c;
        case 0x12e510u: goto label_12e510;
        case 0x12e514u: goto label_12e514;
        case 0x12e518u: goto label_12e518;
        case 0x12e51cu: goto label_12e51c;
        case 0x12e520u: goto label_12e520;
        case 0x12e524u: goto label_12e524;
        case 0x12e528u: goto label_12e528;
        case 0x12e52cu: goto label_12e52c;
        case 0x12e530u: goto label_12e530;
        case 0x12e534u: goto label_12e534;
        case 0x12e538u: goto label_12e538;
        case 0x12e53cu: goto label_12e53c;
        case 0x12e540u: goto label_12e540;
        case 0x12e544u: goto label_12e544;
        case 0x12e548u: goto label_12e548;
        case 0x12e54cu: goto label_12e54c;
        case 0x12e550u: goto label_12e550;
        case 0x12e554u: goto label_12e554;
        case 0x12e558u: goto label_12e558;
        case 0x12e55cu: goto label_12e55c;
        case 0x12e560u: goto label_12e560;
        case 0x12e564u: goto label_12e564;
        case 0x12e568u: goto label_12e568;
        case 0x12e56cu: goto label_12e56c;
        case 0x12e570u: goto label_12e570;
        case 0x12e574u: goto label_12e574;
        case 0x12e578u: goto label_12e578;
        case 0x12e57cu: goto label_12e57c;
        case 0x12e580u: goto label_12e580;
        case 0x12e584u: goto label_12e584;
        case 0x12e588u: goto label_12e588;
        case 0x12e58cu: goto label_12e58c;
        case 0x12e590u: goto label_12e590;
        case 0x12e594u: goto label_12e594;
        case 0x12e598u: goto label_12e598;
        case 0x12e59cu: goto label_12e59c;
        case 0x12e5a0u: goto label_12e5a0;
        case 0x12e5a4u: goto label_12e5a4;
        case 0x12e5a8u: goto label_12e5a8;
        case 0x12e5acu: goto label_12e5ac;
        case 0x12e5b0u: goto label_12e5b0;
        case 0x12e5b4u: goto label_12e5b4;
        case 0x12e5b8u: goto label_12e5b8;
        case 0x12e5bcu: goto label_12e5bc;
        case 0x12e5c0u: goto label_12e5c0;
        case 0x12e5c4u: goto label_12e5c4;
        case 0x12e5c8u: goto label_12e5c8;
        case 0x12e5ccu: goto label_12e5cc;
        case 0x12e5d0u: goto label_12e5d0;
        case 0x12e5d4u: goto label_12e5d4;
        case 0x12e5d8u: goto label_12e5d8;
        case 0x12e5dcu: goto label_12e5dc;
        case 0x12e5e0u: goto label_12e5e0;
        case 0x12e5e4u: goto label_12e5e4;
        case 0x12e5e8u: goto label_12e5e8;
        case 0x12e5ecu: goto label_12e5ec;
        case 0x12e5f0u: goto label_12e5f0;
        case 0x12e5f4u: goto label_12e5f4;
        case 0x12e5f8u: goto label_12e5f8;
        case 0x12e5fcu: goto label_12e5fc;
        case 0x12e600u: goto label_12e600;
        case 0x12e604u: goto label_12e604;
        case 0x12e608u: goto label_12e608;
        case 0x12e60cu: goto label_12e60c;
        case 0x12e610u: goto label_12e610;
        case 0x12e614u: goto label_12e614;
        case 0x12e618u: goto label_12e618;
        case 0x12e61cu: goto label_12e61c;
        case 0x12e620u: goto label_12e620;
        case 0x12e624u: goto label_12e624;
        case 0x12e628u: goto label_12e628;
        case 0x12e62cu: goto label_12e62c;
        case 0x12e630u: goto label_12e630;
        case 0x12e634u: goto label_12e634;
        case 0x12e638u: goto label_12e638;
        case 0x12e63cu: goto label_12e63c;
        case 0x12e640u: goto label_12e640;
        case 0x12e644u: goto label_12e644;
        case 0x12e648u: goto label_12e648;
        case 0x12e64cu: goto label_12e64c;
        case 0x12e650u: goto label_12e650;
        case 0x12e654u: goto label_12e654;
        case 0x12e658u: goto label_12e658;
        case 0x12e65cu: goto label_12e65c;
        case 0x12e660u: goto label_12e660;
        case 0x12e664u: goto label_12e664;
        case 0x12e668u: goto label_12e668;
        case 0x12e66cu: goto label_12e66c;
        case 0x12e670u: goto label_12e670;
        case 0x12e674u: goto label_12e674;
        case 0x12e678u: goto label_12e678;
        case 0x12e67cu: goto label_12e67c;
        case 0x12e680u: goto label_12e680;
        case 0x12e684u: goto label_12e684;
        case 0x12e688u: goto label_12e688;
        case 0x12e68cu: goto label_12e68c;
        case 0x12e690u: goto label_12e690;
        case 0x12e694u: goto label_12e694;
        case 0x12e698u: goto label_12e698;
        case 0x12e69cu: goto label_12e69c;
        case 0x12e6a0u: goto label_12e6a0;
        case 0x12e6a4u: goto label_12e6a4;
        case 0x12e6a8u: goto label_12e6a8;
        case 0x12e6acu: goto label_12e6ac;
        case 0x12e6b0u: goto label_12e6b0;
        case 0x12e6b4u: goto label_12e6b4;
        case 0x12e6b8u: goto label_12e6b8;
        case 0x12e6bcu: goto label_12e6bc;
        case 0x12e6c0u: goto label_12e6c0;
        case 0x12e6c4u: goto label_12e6c4;
        case 0x12e6c8u: goto label_12e6c8;
        case 0x12e6ccu: goto label_12e6cc;
        case 0x12e6d0u: goto label_12e6d0;
        case 0x12e6d4u: goto label_12e6d4;
        case 0x12e6d8u: goto label_12e6d8;
        case 0x12e6dcu: goto label_12e6dc;
        case 0x12e6e0u: goto label_12e6e0;
        case 0x12e6e4u: goto label_12e6e4;
        case 0x12e6e8u: goto label_12e6e8;
        case 0x12e6ecu: goto label_12e6ec;
        case 0x12e6f0u: goto label_12e6f0;
        case 0x12e6f4u: goto label_12e6f4;
        case 0x12e6f8u: goto label_12e6f8;
        case 0x12e6fcu: goto label_12e6fc;
        case 0x12e700u: goto label_12e700;
        case 0x12e704u: goto label_12e704;
        case 0x12e708u: goto label_12e708;
        case 0x12e70cu: goto label_12e70c;
        case 0x12e710u: goto label_12e710;
        case 0x12e714u: goto label_12e714;
        case 0x12e718u: goto label_12e718;
        case 0x12e71cu: goto label_12e71c;
        case 0x12e720u: goto label_12e720;
        case 0x12e724u: goto label_12e724;
        case 0x12e728u: goto label_12e728;
        case 0x12e72cu: goto label_12e72c;
        case 0x12e730u: goto label_12e730;
        case 0x12e734u: goto label_12e734;
        case 0x12e738u: goto label_12e738;
        case 0x12e73cu: goto label_12e73c;
        case 0x12e740u: goto label_12e740;
        case 0x12e744u: goto label_12e744;
        case 0x12e748u: goto label_12e748;
        case 0x12e74cu: goto label_12e74c;
        case 0x12e750u: goto label_12e750;
        case 0x12e754u: goto label_12e754;
        case 0x12e758u: goto label_12e758;
        case 0x12e75cu: goto label_12e75c;
        case 0x12e760u: goto label_12e760;
        case 0x12e764u: goto label_12e764;
        case 0x12e768u: goto label_12e768;
        case 0x12e76cu: goto label_12e76c;
        case 0x12e770u: goto label_12e770;
        case 0x12e774u: goto label_12e774;
        case 0x12e778u: goto label_12e778;
        case 0x12e77cu: goto label_12e77c;
        case 0x12e780u: goto label_12e780;
        case 0x12e784u: goto label_12e784;
        case 0x12e788u: goto label_12e788;
        case 0x12e78cu: goto label_12e78c;
        case 0x12e790u: goto label_12e790;
        case 0x12e794u: goto label_12e794;
        case 0x12e798u: goto label_12e798;
        case 0x12e79cu: goto label_12e79c;
        case 0x12e7a0u: goto label_12e7a0;
        case 0x12e7a4u: goto label_12e7a4;
        case 0x12e7a8u: goto label_12e7a8;
        case 0x12e7acu: goto label_12e7ac;
        case 0x12e7b0u: goto label_12e7b0;
        case 0x12e7b4u: goto label_12e7b4;
        case 0x12e7b8u: goto label_12e7b8;
        case 0x12e7bcu: goto label_12e7bc;
        case 0x12e7c0u: goto label_12e7c0;
        case 0x12e7c4u: goto label_12e7c4;
        case 0x12e7c8u: goto label_12e7c8;
        case 0x12e7ccu: goto label_12e7cc;
        case 0x12e7d0u: goto label_12e7d0;
        case 0x12e7d4u: goto label_12e7d4;
        case 0x12e7d8u: goto label_12e7d8;
        case 0x12e7dcu: goto label_12e7dc;
        case 0x12e7e0u: goto label_12e7e0;
        case 0x12e7e4u: goto label_12e7e4;
        case 0x12e7e8u: goto label_12e7e8;
        case 0x12e7ecu: goto label_12e7ec;
        case 0x12e7f0u: goto label_12e7f0;
        case 0x12e7f4u: goto label_12e7f4;
        case 0x12e7f8u: goto label_12e7f8;
        case 0x12e7fcu: goto label_12e7fc;
        case 0x12e800u: goto label_12e800;
        case 0x12e804u: goto label_12e804;
        case 0x12e808u: goto label_12e808;
        case 0x12e80cu: goto label_12e80c;
        case 0x12e810u: goto label_12e810;
        case 0x12e814u: goto label_12e814;
        case 0x12e818u: goto label_12e818;
        case 0x12e81cu: goto label_12e81c;
        case 0x12e820u: goto label_12e820;
        case 0x12e824u: goto label_12e824;
        case 0x12e828u: goto label_12e828;
        case 0x12e82cu: goto label_12e82c;
        case 0x12e830u: goto label_12e830;
        case 0x12e834u: goto label_12e834;
        case 0x12e838u: goto label_12e838;
        case 0x12e83cu: goto label_12e83c;
        case 0x12e840u: goto label_12e840;
        case 0x12e844u: goto label_12e844;
        case 0x12e848u: goto label_12e848;
        case 0x12e84cu: goto label_12e84c;
        case 0x12e850u: goto label_12e850;
        case 0x12e854u: goto label_12e854;
        case 0x12e858u: goto label_12e858;
        case 0x12e85cu: goto label_12e85c;
        case 0x12e860u: goto label_12e860;
        case 0x12e864u: goto label_12e864;
        case 0x12e868u: goto label_12e868;
        case 0x12e86cu: goto label_12e86c;
        case 0x12e870u: goto label_12e870;
        case 0x12e874u: goto label_12e874;
        case 0x12e878u: goto label_12e878;
        case 0x12e87cu: goto label_12e87c;
        case 0x12e880u: goto label_12e880;
        case 0x12e884u: goto label_12e884;
        case 0x12e888u: goto label_12e888;
        case 0x12e88cu: goto label_12e88c;
        case 0x12e890u: goto label_12e890;
        case 0x12e894u: goto label_12e894;
        case 0x12e898u: goto label_12e898;
        case 0x12e89cu: goto label_12e89c;
        case 0x12e8a0u: goto label_12e8a0;
        case 0x12e8a4u: goto label_12e8a4;
        case 0x12e8a8u: goto label_12e8a8;
        case 0x12e8acu: goto label_12e8ac;
        case 0x12e8b0u: goto label_12e8b0;
        case 0x12e8b4u: goto label_12e8b4;
        case 0x12e8b8u: goto label_12e8b8;
        case 0x12e8bcu: goto label_12e8bc;
        case 0x12e8c0u: goto label_12e8c0;
        case 0x12e8c4u: goto label_12e8c4;
        case 0x12e8c8u: goto label_12e8c8;
        case 0x12e8ccu: goto label_12e8cc;
        case 0x12e8d0u: goto label_12e8d0;
        case 0x12e8d4u: goto label_12e8d4;
        case 0x12e8d8u: goto label_12e8d8;
        case 0x12e8dcu: goto label_12e8dc;
        case 0x12e8e0u: goto label_12e8e0;
        case 0x12e8e4u: goto label_12e8e4;
        case 0x12e8e8u: goto label_12e8e8;
        case 0x12e8ecu: goto label_12e8ec;
        case 0x12e8f0u: goto label_12e8f0;
        case 0x12e8f4u: goto label_12e8f4;
        case 0x12e8f8u: goto label_12e8f8;
        case 0x12e8fcu: goto label_12e8fc;
        case 0x12e900u: goto label_12e900;
        case 0x12e904u: goto label_12e904;
        case 0x12e908u: goto label_12e908;
        case 0x12e90cu: goto label_12e90c;
        case 0x12e910u: goto label_12e910;
        case 0x12e914u: goto label_12e914;
        case 0x12e918u: goto label_12e918;
        case 0x12e91cu: goto label_12e91c;
        case 0x12e920u: goto label_12e920;
        case 0x12e924u: goto label_12e924;
        case 0x12e928u: goto label_12e928;
        case 0x12e92cu: goto label_12e92c;
        case 0x12e930u: goto label_12e930;
        case 0x12e934u: goto label_12e934;
        case 0x12e938u: goto label_12e938;
        case 0x12e93cu: goto label_12e93c;
        case 0x12e940u: goto label_12e940;
        case 0x12e944u: goto label_12e944;
        case 0x12e948u: goto label_12e948;
        case 0x12e94cu: goto label_12e94c;
        case 0x12e950u: goto label_12e950;
        case 0x12e954u: goto label_12e954;
        case 0x12e958u: goto label_12e958;
        case 0x12e95cu: goto label_12e95c;
        case 0x12e960u: goto label_12e960;
        case 0x12e964u: goto label_12e964;
        case 0x12e968u: goto label_12e968;
        case 0x12e96cu: goto label_12e96c;
        case 0x12e970u: goto label_12e970;
        case 0x12e974u: goto label_12e974;
        case 0x12e978u: goto label_12e978;
        case 0x12e97cu: goto label_12e97c;
        case 0x12e980u: goto label_12e980;
        case 0x12e984u: goto label_12e984;
        case 0x12e988u: goto label_12e988;
        case 0x12e98cu: goto label_12e98c;
        case 0x12e990u: goto label_12e990;
        case 0x12e994u: goto label_12e994;
        case 0x12e998u: goto label_12e998;
        case 0x12e99cu: goto label_12e99c;
        case 0x12e9a0u: goto label_12e9a0;
        case 0x12e9a4u: goto label_12e9a4;
        case 0x12e9a8u: goto label_12e9a8;
        case 0x12e9acu: goto label_12e9ac;
        case 0x12e9b0u: goto label_12e9b0;
        case 0x12e9b4u: goto label_12e9b4;
        case 0x12e9b8u: goto label_12e9b8;
        case 0x12e9bcu: goto label_12e9bc;
        case 0x12e9c0u: goto label_12e9c0;
        case 0x12e9c4u: goto label_12e9c4;
        case 0x12e9c8u: goto label_12e9c8;
        case 0x12e9ccu: goto label_12e9cc;
        case 0x12e9d0u: goto label_12e9d0;
        case 0x12e9d4u: goto label_12e9d4;
        case 0x12e9d8u: goto label_12e9d8;
        case 0x12e9dcu: goto label_12e9dc;
        case 0x12e9e0u: goto label_12e9e0;
        case 0x12e9e4u: goto label_12e9e4;
        case 0x12e9e8u: goto label_12e9e8;
        case 0x12e9ecu: goto label_12e9ec;
        case 0x12e9f0u: goto label_12e9f0;
        case 0x12e9f4u: goto label_12e9f4;
        case 0x12e9f8u: goto label_12e9f8;
        case 0x12e9fcu: goto label_12e9fc;
        case 0x12ea00u: goto label_12ea00;
        case 0x12ea04u: goto label_12ea04;
        case 0x12ea08u: goto label_12ea08;
        case 0x12ea0cu: goto label_12ea0c;
        case 0x12ea10u: goto label_12ea10;
        case 0x12ea14u: goto label_12ea14;
        case 0x12ea18u: goto label_12ea18;
        case 0x12ea1cu: goto label_12ea1c;
        case 0x12ea20u: goto label_12ea20;
        case 0x12ea24u: goto label_12ea24;
        case 0x12ea28u: goto label_12ea28;
        case 0x12ea2cu: goto label_12ea2c;
        case 0x12ea30u: goto label_12ea30;
        case 0x12ea34u: goto label_12ea34;
        case 0x12ea38u: goto label_12ea38;
        case 0x12ea3cu: goto label_12ea3c;
        case 0x12ea40u: goto label_12ea40;
        case 0x12ea44u: goto label_12ea44;
        case 0x12ea48u: goto label_12ea48;
        case 0x12ea4cu: goto label_12ea4c;
        case 0x12ea50u: goto label_12ea50;
        case 0x12ea54u: goto label_12ea54;
        case 0x12ea58u: goto label_12ea58;
        case 0x12ea5cu: goto label_12ea5c;
        case 0x12ea60u: goto label_12ea60;
        case 0x12ea64u: goto label_12ea64;
        case 0x12ea68u: goto label_12ea68;
        case 0x12ea6cu: goto label_12ea6c;
        case 0x12ea70u: goto label_12ea70;
        case 0x12ea74u: goto label_12ea74;
        case 0x12ea78u: goto label_12ea78;
        case 0x12ea7cu: goto label_12ea7c;
        case 0x12ea80u: goto label_12ea80;
        case 0x12ea84u: goto label_12ea84;
        case 0x12ea88u: goto label_12ea88;
        case 0x12ea8cu: goto label_12ea8c;
        case 0x12ea90u: goto label_12ea90;
        case 0x12ea94u: goto label_12ea94;
        case 0x12ea98u: goto label_12ea98;
        case 0x12ea9cu: goto label_12ea9c;
        case 0x12eaa0u: goto label_12eaa0;
        case 0x12eaa4u: goto label_12eaa4;
        case 0x12eaa8u: goto label_12eaa8;
        case 0x12eaacu: goto label_12eaac;
        case 0x12eab0u: goto label_12eab0;
        case 0x12eab4u: goto label_12eab4;
        case 0x12eab8u: goto label_12eab8;
        case 0x12eabcu: goto label_12eabc;
        case 0x12eac0u: goto label_12eac0;
        case 0x12eac4u: goto label_12eac4;
        case 0x12eac8u: goto label_12eac8;
        case 0x12eaccu: goto label_12eacc;
        case 0x12ead0u: goto label_12ead0;
        case 0x12ead4u: goto label_12ead4;
        case 0x12ead8u: goto label_12ead8;
        case 0x12eadcu: goto label_12eadc;
        case 0x12eae0u: goto label_12eae0;
        case 0x12eae4u: goto label_12eae4;
        case 0x12eae8u: goto label_12eae8;
        case 0x12eaecu: goto label_12eaec;
        case 0x12eaf0u: goto label_12eaf0;
        case 0x12eaf4u: goto label_12eaf4;
        case 0x12eaf8u: goto label_12eaf8;
        case 0x12eafcu: goto label_12eafc;
        case 0x12eb00u: goto label_12eb00;
        case 0x12eb04u: goto label_12eb04;
        case 0x12eb08u: goto label_12eb08;
        case 0x12eb0cu: goto label_12eb0c;
        case 0x12eb10u: goto label_12eb10;
        case 0x12eb14u: goto label_12eb14;
        case 0x12eb18u: goto label_12eb18;
        case 0x12eb1cu: goto label_12eb1c;
        case 0x12eb20u: goto label_12eb20;
        case 0x12eb24u: goto label_12eb24;
        case 0x12eb28u: goto label_12eb28;
        case 0x12eb2cu: goto label_12eb2c;
        case 0x12eb30u: goto label_12eb30;
        case 0x12eb34u: goto label_12eb34;
        case 0x12eb38u: goto label_12eb38;
        case 0x12eb3cu: goto label_12eb3c;
        case 0x12eb40u: goto label_12eb40;
        case 0x12eb44u: goto label_12eb44;
        case 0x12eb48u: goto label_12eb48;
        case 0x12eb4cu: goto label_12eb4c;
        case 0x12eb50u: goto label_12eb50;
        case 0x12eb54u: goto label_12eb54;
        case 0x12eb58u: goto label_12eb58;
        case 0x12eb5cu: goto label_12eb5c;
        case 0x12eb60u: goto label_12eb60;
        case 0x12eb64u: goto label_12eb64;
        case 0x12eb68u: goto label_12eb68;
        case 0x12eb6cu: goto label_12eb6c;
        case 0x12eb70u: goto label_12eb70;
        case 0x12eb74u: goto label_12eb74;
        case 0x12eb78u: goto label_12eb78;
        case 0x12eb7cu: goto label_12eb7c;
        case 0x12eb80u: goto label_12eb80;
        case 0x12eb84u: goto label_12eb84;
        case 0x12eb88u: goto label_12eb88;
        case 0x12eb8cu: goto label_12eb8c;
        case 0x12eb90u: goto label_12eb90;
        case 0x12eb94u: goto label_12eb94;
        case 0x12eb98u: goto label_12eb98;
        case 0x12eb9cu: goto label_12eb9c;
        case 0x12eba0u: goto label_12eba0;
        case 0x12eba4u: goto label_12eba4;
        case 0x12eba8u: goto label_12eba8;
        case 0x12ebacu: goto label_12ebac;
        case 0x12ebb0u: goto label_12ebb0;
        case 0x12ebb4u: goto label_12ebb4;
        case 0x12ebb8u: goto label_12ebb8;
        case 0x12ebbcu: goto label_12ebbc;
        case 0x12ebc0u: goto label_12ebc0;
        case 0x12ebc4u: goto label_12ebc4;
        case 0x12ebc8u: goto label_12ebc8;
        case 0x12ebccu: goto label_12ebcc;
        case 0x12ebd0u: goto label_12ebd0;
        case 0x12ebd4u: goto label_12ebd4;
        case 0x12ebd8u: goto label_12ebd8;
        case 0x12ebdcu: goto label_12ebdc;
        case 0x12ebe0u: goto label_12ebe0;
        case 0x12ebe4u: goto label_12ebe4;
        case 0x12ebe8u: goto label_12ebe8;
        case 0x12ebecu: goto label_12ebec;
        case 0x12ebf0u: goto label_12ebf0;
        case 0x12ebf4u: goto label_12ebf4;
        case 0x12ebf8u: goto label_12ebf8;
        case 0x12ebfcu: goto label_12ebfc;
        case 0x12ec00u: goto label_12ec00;
        case 0x12ec04u: goto label_12ec04;
        case 0x12ec08u: goto label_12ec08;
        case 0x12ec0cu: goto label_12ec0c;
        case 0x12ec10u: goto label_12ec10;
        case 0x12ec14u: goto label_12ec14;
        case 0x12ec18u: goto label_12ec18;
        case 0x12ec1cu: goto label_12ec1c;
        case 0x12ec20u: goto label_12ec20;
        case 0x12ec24u: goto label_12ec24;
        case 0x12ec28u: goto label_12ec28;
        case 0x12ec2cu: goto label_12ec2c;
        case 0x12ec30u: goto label_12ec30;
        case 0x12ec34u: goto label_12ec34;
        case 0x12ec38u: goto label_12ec38;
        case 0x12ec3cu: goto label_12ec3c;
        case 0x12ec40u: goto label_12ec40;
        case 0x12ec44u: goto label_12ec44;
        case 0x12ec48u: goto label_12ec48;
        case 0x12ec4cu: goto label_12ec4c;
        case 0x12ec50u: goto label_12ec50;
        case 0x12ec54u: goto label_12ec54;
        case 0x12ec58u: goto label_12ec58;
        case 0x12ec5cu: goto label_12ec5c;
        case 0x12ec60u: goto label_12ec60;
        case 0x12ec64u: goto label_12ec64;
        case 0x12ec68u: goto label_12ec68;
        case 0x12ec6cu: goto label_12ec6c;
        case 0x12ec70u: goto label_12ec70;
        case 0x12ec74u: goto label_12ec74;
        case 0x12ec78u: goto label_12ec78;
        case 0x12ec7cu: goto label_12ec7c;
        case 0x12ec80u: goto label_12ec80;
        case 0x12ec84u: goto label_12ec84;
        case 0x12ec88u: goto label_12ec88;
        case 0x12ec8cu: goto label_12ec8c;
        case 0x12ec90u: goto label_12ec90;
        case 0x12ec94u: goto label_12ec94;
        case 0x12ec98u: goto label_12ec98;
        case 0x12ec9cu: goto label_12ec9c;
        case 0x12eca0u: goto label_12eca0;
        case 0x12eca4u: goto label_12eca4;
        case 0x12eca8u: goto label_12eca8;
        case 0x12ecacu: goto label_12ecac;
        case 0x12ecb0u: goto label_12ecb0;
        case 0x12ecb4u: goto label_12ecb4;
        case 0x12ecb8u: goto label_12ecb8;
        case 0x12ecbcu: goto label_12ecbc;
        case 0x12ecc0u: goto label_12ecc0;
        case 0x12ecc4u: goto label_12ecc4;
        case 0x12ecc8u: goto label_12ecc8;
        case 0x12ecccu: goto label_12eccc;
        case 0x12ecd0u: goto label_12ecd0;
        case 0x12ecd4u: goto label_12ecd4;
        case 0x12ecd8u: goto label_12ecd8;
        case 0x12ecdcu: goto label_12ecdc;
        case 0x12ece0u: goto label_12ece0;
        case 0x12ece4u: goto label_12ece4;
        case 0x12ece8u: goto label_12ece8;
        case 0x12ececu: goto label_12ecec;
        case 0x12ecf0u: goto label_12ecf0;
        case 0x12ecf4u: goto label_12ecf4;
        case 0x12ecf8u: goto label_12ecf8;
        case 0x12ecfcu: goto label_12ecfc;
        case 0x12ed00u: goto label_12ed00;
        case 0x12ed04u: goto label_12ed04;
        case 0x12ed08u: goto label_12ed08;
        case 0x12ed0cu: goto label_12ed0c;
        case 0x12ed10u: goto label_12ed10;
        case 0x12ed14u: goto label_12ed14;
        case 0x12ed18u: goto label_12ed18;
        case 0x12ed1cu: goto label_12ed1c;
        case 0x12ed20u: goto label_12ed20;
        case 0x12ed24u: goto label_12ed24;
        case 0x12ed28u: goto label_12ed28;
        case 0x12ed2cu: goto label_12ed2c;
        case 0x12ed30u: goto label_12ed30;
        case 0x12ed34u: goto label_12ed34;
        case 0x12ed38u: goto label_12ed38;
        case 0x12ed3cu: goto label_12ed3c;
        case 0x12ed40u: goto label_12ed40;
        case 0x12ed44u: goto label_12ed44;
        case 0x12ed48u: goto label_12ed48;
        case 0x12ed4cu: goto label_12ed4c;
        case 0x12ed50u: goto label_12ed50;
        case 0x12ed54u: goto label_12ed54;
        case 0x12ed58u: goto label_12ed58;
        case 0x12ed5cu: goto label_12ed5c;
        case 0x12ed60u: goto label_12ed60;
        case 0x12ed64u: goto label_12ed64;
        case 0x12ed68u: goto label_12ed68;
        case 0x12ed6cu: goto label_12ed6c;
        case 0x12ed70u: goto label_12ed70;
        case 0x12ed74u: goto label_12ed74;
        case 0x12ed78u: goto label_12ed78;
        case 0x12ed7cu: goto label_12ed7c;
        case 0x12ed80u: goto label_12ed80;
        case 0x12ed84u: goto label_12ed84;
        case 0x12ed88u: goto label_12ed88;
        case 0x12ed8cu: goto label_12ed8c;
        case 0x12ed90u: goto label_12ed90;
        case 0x12ed94u: goto label_12ed94;
        case 0x12ed98u: goto label_12ed98;
        case 0x12ed9cu: goto label_12ed9c;
        case 0x12eda0u: goto label_12eda0;
        case 0x12eda4u: goto label_12eda4;
        case 0x12eda8u: goto label_12eda8;
        case 0x12edacu: goto label_12edac;
        case 0x12edb0u: goto label_12edb0;
        case 0x12edb4u: goto label_12edb4;
        case 0x12edb8u: goto label_12edb8;
        case 0x12edbcu: goto label_12edbc;
        case 0x12edc0u: goto label_12edc0;
        case 0x12edc4u: goto label_12edc4;
        case 0x12edc8u: goto label_12edc8;
        case 0x12edccu: goto label_12edcc;
        case 0x12edd0u: goto label_12edd0;
        case 0x12edd4u: goto label_12edd4;
        case 0x12edd8u: goto label_12edd8;
        case 0x12eddcu: goto label_12eddc;
        case 0x12ede0u: goto label_12ede0;
        case 0x12ede4u: goto label_12ede4;
        case 0x12ede8u: goto label_12ede8;
        case 0x12edecu: goto label_12edec;
        case 0x12edf0u: goto label_12edf0;
        case 0x12edf4u: goto label_12edf4;
        case 0x12edf8u: goto label_12edf8;
        case 0x12edfcu: goto label_12edfc;
        case 0x12ee00u: goto label_12ee00;
        case 0x12ee04u: goto label_12ee04;
        case 0x12ee08u: goto label_12ee08;
        case 0x12ee0cu: goto label_12ee0c;
        case 0x12ee10u: goto label_12ee10;
        case 0x12ee14u: goto label_12ee14;
        case 0x12ee18u: goto label_12ee18;
        case 0x12ee1cu: goto label_12ee1c;
        case 0x12ee20u: goto label_12ee20;
        case 0x12ee24u: goto label_12ee24;
        case 0x12ee28u: goto label_12ee28;
        case 0x12ee2cu: goto label_12ee2c;
        case 0x12ee30u: goto label_12ee30;
        case 0x12ee34u: goto label_12ee34;
        case 0x12ee38u: goto label_12ee38;
        case 0x12ee3cu: goto label_12ee3c;
        case 0x12ee40u: goto label_12ee40;
        case 0x12ee44u: goto label_12ee44;
        case 0x12ee48u: goto label_12ee48;
        case 0x12ee4cu: goto label_12ee4c;
        case 0x12ee50u: goto label_12ee50;
        case 0x12ee54u: goto label_12ee54;
        case 0x12ee58u: goto label_12ee58;
        case 0x12ee5cu: goto label_12ee5c;
        case 0x12ee60u: goto label_12ee60;
        case 0x12ee64u: goto label_12ee64;
        case 0x12ee68u: goto label_12ee68;
        case 0x12ee6cu: goto label_12ee6c;
        case 0x12ee70u: goto label_12ee70;
        case 0x12ee74u: goto label_12ee74;
        case 0x12ee78u: goto label_12ee78;
        case 0x12ee7cu: goto label_12ee7c;
        case 0x12ee80u: goto label_12ee80;
        case 0x12ee84u: goto label_12ee84;
        case 0x12ee88u: goto label_12ee88;
        case 0x12ee8cu: goto label_12ee8c;
        case 0x12ee90u: goto label_12ee90;
        case 0x12ee94u: goto label_12ee94;
        case 0x12ee98u: goto label_12ee98;
        case 0x12ee9cu: goto label_12ee9c;
        case 0x12eea0u: goto label_12eea0;
        case 0x12eea4u: goto label_12eea4;
        case 0x12eea8u: goto label_12eea8;
        case 0x12eeacu: goto label_12eeac;
        case 0x12eeb0u: goto label_12eeb0;
        case 0x12eeb4u: goto label_12eeb4;
        case 0x12eeb8u: goto label_12eeb8;
        case 0x12eebcu: goto label_12eebc;
        case 0x12eec0u: goto label_12eec0;
        case 0x12eec4u: goto label_12eec4;
        case 0x12eec8u: goto label_12eec8;
        case 0x12eeccu: goto label_12eecc;
        case 0x12eed0u: goto label_12eed0;
        case 0x12eed4u: goto label_12eed4;
        case 0x12eed8u: goto label_12eed8;
        case 0x12eedcu: goto label_12eedc;
        case 0x12eee0u: goto label_12eee0;
        case 0x12eee4u: goto label_12eee4;
        case 0x12eee8u: goto label_12eee8;
        case 0x12eeecu: goto label_12eeec;
        case 0x12eef0u: goto label_12eef0;
        case 0x12eef4u: goto label_12eef4;
        case 0x12eef8u: goto label_12eef8;
        case 0x12eefcu: goto label_12eefc;
        case 0x12ef00u: goto label_12ef00;
        case 0x12ef04u: goto label_12ef04;
        case 0x12ef08u: goto label_12ef08;
        case 0x12ef0cu: goto label_12ef0c;
        case 0x12ef10u: goto label_12ef10;
        case 0x12ef14u: goto label_12ef14;
        case 0x12ef18u: goto label_12ef18;
        case 0x12ef1cu: goto label_12ef1c;
        case 0x12ef20u: goto label_12ef20;
        case 0x12ef24u: goto label_12ef24;
        case 0x12ef28u: goto label_12ef28;
        case 0x12ef2cu: goto label_12ef2c;
        case 0x12ef30u: goto label_12ef30;
        case 0x12ef34u: goto label_12ef34;
        case 0x12ef38u: goto label_12ef38;
        case 0x12ef3cu: goto label_12ef3c;
        case 0x12ef40u: goto label_12ef40;
        case 0x12ef44u: goto label_12ef44;
        case 0x12ef48u: goto label_12ef48;
        case 0x12ef4cu: goto label_12ef4c;
        case 0x12ef50u: goto label_12ef50;
        case 0x12ef54u: goto label_12ef54;
        case 0x12ef58u: goto label_12ef58;
        case 0x12ef5cu: goto label_12ef5c;
        case 0x12ef60u: goto label_12ef60;
        case 0x12ef64u: goto label_12ef64;
        case 0x12ef68u: goto label_12ef68;
        case 0x12ef6cu: goto label_12ef6c;
        case 0x12ef70u: goto label_12ef70;
        case 0x12ef74u: goto label_12ef74;
        case 0x12ef78u: goto label_12ef78;
        case 0x12ef7cu: goto label_12ef7c;
        case 0x12ef80u: goto label_12ef80;
        case 0x12ef84u: goto label_12ef84;
        case 0x12ef88u: goto label_12ef88;
        case 0x12ef8cu: goto label_12ef8c;
        case 0x12ef90u: goto label_12ef90;
        case 0x12ef94u: goto label_12ef94;
        case 0x12ef98u: goto label_12ef98;
        case 0x12ef9cu: goto label_12ef9c;
        case 0x12efa0u: goto label_12efa0;
        case 0x12efa4u: goto label_12efa4;
        case 0x12efa8u: goto label_12efa8;
        case 0x12efacu: goto label_12efac;
        case 0x12efb0u: goto label_12efb0;
        case 0x12efb4u: goto label_12efb4;
        case 0x12efb8u: goto label_12efb8;
        case 0x12efbcu: goto label_12efbc;
        case 0x12efc0u: goto label_12efc0;
        case 0x12efc4u: goto label_12efc4;
        case 0x12efc8u: goto label_12efc8;
        case 0x12efccu: goto label_12efcc;
        case 0x12efd0u: goto label_12efd0;
        case 0x12efd4u: goto label_12efd4;
        case 0x12efd8u: goto label_12efd8;
        case 0x12efdcu: goto label_12efdc;
        case 0x12efe0u: goto label_12efe0;
        case 0x12efe4u: goto label_12efe4;
        case 0x12efe8u: goto label_12efe8;
        case 0x12efecu: goto label_12efec;
        case 0x12eff0u: goto label_12eff0;
        case 0x12eff4u: goto label_12eff4;
        case 0x12eff8u: goto label_12eff8;
        case 0x12effcu: goto label_12effc;
        case 0x12f000u: goto label_12f000;
        case 0x12f004u: goto label_12f004;
        case 0x12f008u: goto label_12f008;
        case 0x12f00cu: goto label_12f00c;
        case 0x12f010u: goto label_12f010;
        case 0x12f014u: goto label_12f014;
        case 0x12f018u: goto label_12f018;
        case 0x12f01cu: goto label_12f01c;
        default: break;
    }

    ctx->pc = 0x12e2a0u;

label_12e2a0:
    // 0x12e2a0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x12e2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_12e2a4:
    // 0x12e2a4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x12e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_12e2a8:
    // 0x12e2a8: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x12e2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_12e2ac:
    // 0x12e2ac: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x12e2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
label_12e2b0:
    // 0x12e2b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12e2b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12e2b4:
    // 0x12e2b4: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x12e2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
label_12e2b8:
    // 0x12e2b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12e2b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e2bc:
    // 0x12e2bc: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x12e2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_12e2c0:
    // 0x12e2c0: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x12e2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
label_12e2c4:
    // 0x12e2c4: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x12e2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
label_12e2c8:
    // 0x12e2c8: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x12e2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_12e2cc:
    // 0x12e2cc: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x12e2ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_12e2d0:
    // 0x12e2d0: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x12e2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
label_12e2d4:
    // 0x12e2d4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x12e2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12e2d8:
    // 0x12e2d8: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
label_12e2dc:
    if (ctx->pc == 0x12E2DCu) {
        ctx->pc = 0x12E2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2D8u;
        // 0x12e2dc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E2E0u;
        goto label_12e2e0;
    }
    ctx->pc = 0x12E2D8u;
    {
        const bool branch_taken_0x12e2d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x12E2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2D8u;
        // 0x12e2dc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2d8) {
            ctx->pc = 0x12E2F0u;
            goto label_12e2f0;
        }
    }
    ctx->pc = 0x12E2E0u;
label_12e2e0:
    // 0x12e2e0: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x12e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_12e2e4:
    // 0x12e2e4: 0x8c438898  lw          $v1, -0x7768($v0)
    ctx->pc = 0x12e2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936728)));
label_12e2e8:
    // 0x12e2e8: 0x14a3001f  bne         $a1, $v1, . + 4 + (0x1F << 2)
label_12e2ec:
    if (ctx->pc == 0x12E2ECu) {
        ctx->pc = 0x12E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2E8u;
        // 0x12e2ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E2F0u;
        goto label_12e2f0;
    }
    ctx->pc = 0x12E2E8u;
    {
        const bool branch_taken_0x12e2e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x12E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2E8u;
        // 0x12e2ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2e8) {
            ctx->pc = 0x12E368u;
            goto label_12e368;
        }
    }
    ctx->pc = 0x12E2F0u;
label_12e2f0:
    // 0x12e2f0: 0xc0603e4  jal         func_180F90
label_12e2f4:
    if (ctx->pc == 0x12E2F4u) {
        ctx->pc = 0x12E2F8u;
        goto label_12e2f8;
    }
    ctx->pc = 0x12E2F0u;
    SET_GPR_U32(ctx, 31, 0x12E2F8u);
    ctx->pc = 0x180F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180F90u, 0x12E2F0u, 0x12E2F8u)) {
        return;
    }
    ctx->pc = 0x12E2F8u;
label_12e2f8:
    // 0x12e2f8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_12e2fc:
    if (ctx->pc == 0x12E2FCu) {
        ctx->pc = 0x12E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2F8u;
        // 0x12e2fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E300u;
        goto label_12e300;
    }
    ctx->pc = 0x12E2F8u;
    {
        const bool branch_taken_0x12e2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2F8u;
        // 0x12e2fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2f8) {
            ctx->pc = 0x12E368u;
            goto label_12e368;
        }
    }
    ctx->pc = 0x12E300u;
label_12e300:
    // 0x12e300: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x12e300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_12e304:
    // 0x12e304: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x12e304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_12e308:
    // 0x12e308: 0x8c42bd10  lw          $v0, -0x42F0($v0)
    ctx->pc = 0x12e308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950160)));
label_12e30c:
    // 0x12e30c: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x12e30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
label_12e310:
    // 0x12e310: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x12e310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_12e314:
    // 0x12e314: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
label_12e318:
    if (ctx->pc == 0x12E318u) {
        ctx->pc = 0x12E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E314u;
        // 0x12e318: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E31Cu;
        goto label_12e31c;
    }
    ctx->pc = 0x12E314u;
    {
        const bool branch_taken_0x12e314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x12E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E314u;
        // 0x12e318: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e314) {
            ctx->pc = 0x12E330u;
            goto label_12e330;
        }
    }
    ctx->pc = 0x12E31Cu;
label_12e31c:
    // 0x12e31c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12e31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12e320:
    // 0x12e320: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_12e324:
    if (ctx->pc == 0x12E324u) {
        ctx->pc = 0x12E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E320u;
        // 0x12e324: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E328u;
        goto label_12e328;
    }
    ctx->pc = 0x12E320u;
    {
        const bool branch_taken_0x12e320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E320u;
        // 0x12e324: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e320) {
            ctx->pc = 0x12E334u;
            goto label_12e334;
        }
    }
    ctx->pc = 0x12E328u;
label_12e328:
    // 0x12e328: 0xc07fd18  jal         func_1FF460
label_12e32c:
    if (ctx->pc == 0x12E32Cu) {
        ctx->pc = 0x12E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E328u;
        // 0x12e32c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E330u;
        goto label_12e330;
    }
    ctx->pc = 0x12E328u;
    SET_GPR_U32(ctx, 31, 0x12E330u);
    ctx->pc = 0x12E32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E328u;
    // 0x12e32c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x12E328u, 0x12E330u)) {
        return;
    }
    ctx->pc = 0x12E330u;
label_12e330:
    // 0x12e330: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x12e330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_12e334:
    // 0x12e334: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_12e338:
    if (ctx->pc == 0x12E338u) {
        ctx->pc = 0x12E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E334u;
        // 0x12e338: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E33Cu;
        goto label_12e33c;
    }
    ctx->pc = 0x12E334u;
    {
        const bool branch_taken_0x12e334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E334u;
        // 0x12e338: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e334) {
            ctx->pc = 0x12E368u;
            goto label_12e368;
        }
    }
    ctx->pc = 0x12E33Cu;
label_12e33c:
    // 0x12e33c: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x12e33cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12e340:
    // 0x12e340: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12e340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12e344:
    // 0x12e344: 0xc04d852  jal         func_136148
label_12e348:
    if (ctx->pc == 0x12E348u) {
        ctx->pc = 0x12E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E344u;
        // 0x12e348: 0xc60c0008  lwc1        $f12, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E34Cu;
        goto label_12e34c;
    }
    ctx->pc = 0x12E344u;
    SET_GPR_U32(ctx, 31, 0x12E34Cu);
    ctx->pc = 0x12E348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E344u;
    // 0x12e348: 0xc60c0008  lwc1        $f12, 0x8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x136148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x136148u, 0x12E344u, 0x12E34Cu)) {
        return;
    }
    ctx->pc = 0x12E34Cu;
label_12e34c:
    // 0x12e34c: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x12e34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12e350:
    // 0x12e350: 0xc04ca24  jal         func_132890
label_12e354:
    if (ctx->pc == 0x12E354u) {
        ctx->pc = 0x12E354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E350u;
        // 0x12e354: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E358u;
        goto label_12e358;
    }
    ctx->pc = 0x12E350u;
    SET_GPR_U32(ctx, 31, 0x12E358u);
    ctx->pc = 0x12E354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E350u;
    // 0x12e354: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x132890u, 0x12E350u, 0x12E358u)) {
        return;
    }
    ctx->pc = 0x12E358u;
label_12e358:
    // 0x12e358: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x12e358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12e35c:
    // 0x12e35c: 0xc04cc1a  jal         func_133068
label_12e360:
    if (ctx->pc == 0x12E360u) {
        ctx->pc = 0x12E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E35Cu;
        // 0x12e360: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E364u;
        goto label_12e364;
    }
    ctx->pc = 0x12E35Cu;
    SET_GPR_U32(ctx, 31, 0x12E364u);
    ctx->pc = 0x12E360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E35Cu;
    // 0x12e360: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x133068u, 0x12E35Cu, 0x12E364u)) {
        return;
    }
    ctx->pc = 0x12E364u;
label_12e364:
    // 0x12e364: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12e364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12e368:
    // 0x12e368: 0xc0483e6  jal         func_120F98
label_12e36c:
    if (ctx->pc == 0x12E36Cu) {
        ctx->pc = 0x12E36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E368u;
        // 0x12e36c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E370u;
        goto label_12e370;
    }
    ctx->pc = 0x12E368u;
    SET_GPR_U32(ctx, 31, 0x12E370u);
    ctx->pc = 0x12E36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E368u;
    // 0x12e36c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120F98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x120F98u, 0x12E368u, 0x12E370u)) {
        return;
    }
    ctx->pc = 0x12E370u;
label_12e370:
    // 0x12e370: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x12e370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_12e374:
    // 0x12e374: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x12e374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12e378:
    // 0x12e378: 0x8c4345e0  lw          $v1, 0x45E0($v0)
    ctx->pc = 0x12e378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17888)));
label_12e37c:
    // 0x12e37c: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
label_12e380:
    if (ctx->pc == 0x12E380u) {
        ctx->pc = 0x12E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E37Cu;
        // 0x12e380: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E384u;
        goto label_12e384;
    }
    ctx->pc = 0x12E37Cu;
    {
        const bool branch_taken_0x12e37c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x12E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E37Cu;
        // 0x12e380: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e37c) {
            ctx->pc = 0x12E38Cu;
            goto label_12e38c;
        }
    }
    ctx->pc = 0x12E384u;
label_12e384:
    // 0x12e384: 0x1000031c  b           . + 4 + (0x31C << 2)
label_12e388:
    if (ctx->pc == 0x12E388u) {
        ctx->pc = 0x12E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E384u;
        // 0x12e388: 0xae330004  sw          $s3, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E38Cu;
        goto label_12e38c;
    }
    ctx->pc = 0x12E384u;
    {
        const bool branch_taken_0x12e384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E384u;
        // 0x12e388: 0xae330004  sw          $s3, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e384) {
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12E38Cu;
label_12e38c:
    // 0x12e38c: 0x8c464710  lw          $a2, 0x4710($v0)
    ctx->pc = 0x12e38cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18192)));
label_12e390:
    // 0x12e390: 0x10a60004  beq         $a1, $a2, . + 4 + (0x4 << 2)
label_12e394:
    if (ctx->pc == 0x12E394u) {
        ctx->pc = 0x12E394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E390u;
        // 0x12e394: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E398u;
        goto label_12e398;
    }
    ctx->pc = 0x12E390u;
    {
        const bool branch_taken_0x12e390 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x12E394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E390u;
        // 0x12e394: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e390) {
            ctx->pc = 0x12E3A4u;
            goto label_12e3a4;
        }
    }
    ctx->pc = 0x12E398u;
label_12e398:
    // 0x12e398: 0x8c434718  lw          $v1, 0x4718($v0)
    ctx->pc = 0x12e398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18200)));
label_12e39c:
    // 0x12e39c: 0x14a30079  bne         $a1, $v1, . + 4 + (0x79 << 2)
label_12e3a0:
    if (ctx->pc == 0x12E3A0u) {
        ctx->pc = 0x12E3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E39Cu;
        // 0x12e3a0: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E3A4u;
        goto label_12e3a4;
    }
    ctx->pc = 0x12E39Cu;
    {
        const bool branch_taken_0x12e39c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x12E3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E39Cu;
        // 0x12e3a0: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e39c) {
            ctx->pc = 0x12E584u;
            goto label_12e584;
        }
    }
    ctx->pc = 0x12E3A4u;
label_12e3a4:
    // 0x12e3a4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x12e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_12e3a8:
    // 0x12e3a8: 0x8c43870c  lw          $v1, -0x78F4($v0)
    ctx->pc = 0x12e3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
label_12e3ac:
    // 0x12e3ac: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x12e3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_12e3b0:
    // 0x12e3b0: 0x10800311  beqz        $a0, . + 4 + (0x311 << 2)
label_12e3b4:
    if (ctx->pc == 0x12E3B4u) {
        ctx->pc = 0x12E3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3B0u;
        // 0x12e3b4: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E3B8u;
        goto label_12e3b8;
    }
    ctx->pc = 0x12E3B0u;
    {
        const bool branch_taken_0x12e3b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3B0u;
        // 0x12e3b4: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e3b0) {
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12E3B8u;
label_12e3b8:
    // 0x12e3b8: 0x8c439168  lw          $v1, -0x6E98($v0)
    ctx->pc = 0x12e3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
label_12e3bc:
    // 0x12e3bc: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x12e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_12e3c0:
    // 0x12e3c0: 0x3862001b  xori        $v0, $v1, 0x1B
    ctx->pc = 0x12e3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)27);
label_12e3c4:
    // 0x12e3c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_12e3c8:
    if (ctx->pc == 0x12E3C8u) {
        ctx->pc = 0x12E3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3C4u;
        // 0x12e3c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E3CCu;
        goto label_12e3cc;
    }
    ctx->pc = 0x12E3C4u;
    {
        const bool branch_taken_0x12e3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3C4u;
        // 0x12e3c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e3c4) {
            ctx->pc = 0x12E3D4u;
            goto label_12e3d4;
        }
    }
    ctx->pc = 0x12E3CCu;
label_12e3cc:
    // 0x12e3cc: 0x1462030b  bne         $v1, $v0, . + 4 + (0x30B << 2)
label_12e3d0:
    if (ctx->pc == 0x12E3D0u) {
        ctx->pc = 0x12E3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3CCu;
        // 0x12e3d0: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E3D4u;
        goto label_12e3d4;
    }
    ctx->pc = 0x12E3CCu;
    {
        const bool branch_taken_0x12e3cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12E3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3CCu;
        // 0x12e3d0: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e3cc) {
            ctx->pc = 0x12EFFCu;
            goto label_12effc;
        }
    }
    ctx->pc = 0x12E3D4u;
label_12e3d4:
    // 0x12e3d4: 0xc6610bdc  lwc1        $f1, 0xBDC($s3)
    ctx->pc = 0x12e3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12e3d8:
    // 0x12e3d8: 0xc6600bd8  lwc1        $f0, 0xBD8($s3)
    ctx->pc = 0x12e3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e3dc:
    // 0x12e3dc: 0xc6631aec  lwc1        $f3, 0x1AEC($s3)
    ctx->pc = 0x12e3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 6892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12e3e0:
    // 0x12e3e0: 0x0  nop
    ctx->pc = 0x12e3e0u;
    // NOP
label_12e3e4:
    // 0x12e3e4: 0x0  nop
    ctx->pc = 0x12e3e4u;
    // NOP
label_12e3e8:
    // 0x12e3e8: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x12e3e8u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
label_12e3ec:
    // 0x12e3ec: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x12e3ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e3f0:
    // 0x12e3f0: 0x0  nop
    ctx->pc = 0x12e3f0u;
    // NOP
label_12e3f4:
    // 0x12e3f4: 0x45000300  bc1f        . + 4 + (0x300 << 2)
label_12e3f8:
    if (ctx->pc == 0x12E3F8u) {
        ctx->pc = 0x12E3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3F4u;
        // 0x12e3f8: 0xa61826  xor         $v1, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E3FCu;
        goto label_12e3fc;
    }
    ctx->pc = 0x12E3F4u;
    {
        const bool branch_taken_0x12e3f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12E3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3F4u;
        // 0x12e3f8: 0xa61826  xor         $v1, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e3f4) {
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12E3FCu;
label_12e3fc:
    // 0x12e3fc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12e3fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12e400:
    // 0x12e400: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x12e400u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_12e404:
    // 0x12e404: 0xc6641af0  lwc1        $f4, 0x1AF0($s3)
    ctx->pc = 0x12e404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 6896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_12e408:
    // 0x12e408: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x12e408u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_12e40c:
    // 0x12e40c: 0x2c720001  sltiu       $s2, $v1, 0x1
    ctx->pc = 0x12e40cu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_12e410:
    // 0x12e410: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12e410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12e414:
    // 0x12e414: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x12e414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_12e418:
    // 0x12e418: 0x26621af8  addiu       $v0, $s3, 0x1AF8
    ctx->pc = 0x12e418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 6904));
label_12e41c:
    // 0x12e41c: 0x26711af4  addiu       $s1, $s3, 0x1AF4
    ctx->pc = 0x12e41cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 6900));
label_12e420:
    // 0x12e420: 0x0  nop
    ctx->pc = 0x12e420u;
    // NOP
label_12e424:
    // 0x12e424: 0x0  nop
    ctx->pc = 0x12e424u;
    // NOP
label_12e428:
    // 0x12e428: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x12e428u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[1]);
label_12e42c:
    // 0x12e42c: 0x46041801  sub.s       $f0, $f3, $f4
    ctx->pc = 0x12e42cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_12e430:
    // 0x12e430: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x12e430u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_12e434:
    // 0x12e434: 0x46002300  add.s       $f12, $f4, $f0
    ctx->pc = 0x12e434u;
    ctx->f[12] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_12e438:
    // 0x12e438: 0x46046036  c.le.s      $f12, $f4
    ctx->pc = 0x12e438u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e43c:
    // 0x12e43c: 0x0  nop
    ctx->pc = 0x12e43cu;
    // NOP
label_12e440:
    // 0x12e440: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_12e444:
    if (ctx->pc == 0x12E444u) {
        ctx->pc = 0x12E444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E440u;
        // 0x12e444: 0x52880a  movz        $s1, $v0, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E448u;
        goto label_12e448;
    }
    ctx->pc = 0x12E440u;
    {
        const bool branch_taken_0x12e440 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12E444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E440u;
        // 0x12e444: 0x52880a  movz        $s1, $v0, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e440) {
            ctx->pc = 0x12E450u;
            goto label_12e450;
        }
    }
    ctx->pc = 0x12E448u;
label_12e448:
    // 0x12e448: 0x10000006  b           . + 4 + (0x6 << 2)
label_12e44c:
    if (ctx->pc == 0x12E44Cu) {
        ctx->pc = 0x12E44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E448u;
        // 0x12e44c: 0x46002506  mov.s       $f20, $f4 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E450u;
        goto label_12e450;
    }
    ctx->pc = 0x12E448u;
    {
        const bool branch_taken_0x12e448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E448u;
        // 0x12e44c: 0x46002506  mov.s       $f20, $f4 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e448) {
            ctx->pc = 0x12E464u;
            goto label_12e464;
        }
    }
    ctx->pc = 0x12E450u;
label_12e450:
    // 0x12e450: 0x460c1836  c.le.s      $f3, $f12
    ctx->pc = 0x12e450u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e454:
    // 0x12e454: 0x0  nop
    ctx->pc = 0x12e454u;
    // NOP
label_12e458:
    // 0x12e458: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_12e45c:
    if (ctx->pc == 0x12E45Cu) {
        ctx->pc = 0x12E45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E458u;
        // 0x12e45c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E460u;
        goto label_12e460;
    }
    ctx->pc = 0x12E458u;
    {
        const bool branch_taken_0x12e458 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12E45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E458u;
        // 0x12e45c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e458) {
            ctx->pc = 0x12E464u;
            goto label_12e464;
        }
    }
    ctx->pc = 0x12E460u;
label_12e460:
    // 0x12e460: 0x46001d06  mov.s       $f20, $f3
    ctx->pc = 0x12e460u;
    ctx->f[20] = FPU_MOV_S(ctx->f[3]);
label_12e464:
    // 0x12e464: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12e464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12e468:
    // 0x12e468: 0xc04f0cc  jal         func_13C330
label_12e46c:
    if (ctx->pc == 0x12E46Cu) {
        ctx->pc = 0x12E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E468u;
        // 0x12e46c: 0x26700310  addiu       $s0, $s3, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E470u;
        goto label_12e470;
    }
    ctx->pc = 0x12E468u;
    SET_GPR_U32(ctx, 31, 0x12E470u);
    ctx->pc = 0x12E46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E468u;
    // 0x12e46c: 0x26700310  addiu       $s0, $s3, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x12E468u, 0x12E470u)) {
        return;
    }
    ctx->pc = 0x12E470u;
label_12e470:
    // 0x12e470: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x12e470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12e474:
    // 0x12e474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12e478:
    // 0x12e478: 0xc043c7c  jal         func_10F1F0
label_12e47c:
    if (ctx->pc == 0x12E47Cu) {
        ctx->pc = 0x12E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E478u;
        // 0x12e47c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E480u;
        goto label_12e480;
    }
    ctx->pc = 0x12E478u;
    SET_GPR_U32(ctx, 31, 0x12E480u);
    ctx->pc = 0x12E47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E478u;
    // 0x12e47c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F1F0u, 0x12E478u, 0x12E480u)) {
        return;
    }
    ctx->pc = 0x12E480u;
label_12e480:
    // 0x12e480: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x12e480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12e484:
    // 0x12e484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12e488:
    // 0x12e488: 0xc043caa  jal         func_10F2A8
label_12e48c:
    if (ctx->pc == 0x12E48Cu) {
        ctx->pc = 0x12E48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E488u;
        // 0x12e48c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E490u;
        goto label_12e490;
    }
    ctx->pc = 0x12E488u;
    SET_GPR_U32(ctx, 31, 0x12E490u);
    ctx->pc = 0x12E48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E488u;
    // 0x12e48c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F2A8u, 0x12E488u, 0x12E490u)) {
        return;
    }
    ctx->pc = 0x12E490u;
label_12e490:
    // 0x12e490: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
label_12e494:
    if (ctx->pc == 0x12E494u) {
        ctx->pc = 0x12E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E490u;
        // 0x12e494: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E498u;
        goto label_12e498;
    }
    ctx->pc = 0x12E490u;
    {
        const bool branch_taken_0x12e490 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E490u;
        // 0x12e494: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e490) {
            ctx->pc = 0x12E4F0u;
            goto label_12e4f0;
        }
    }
    ctx->pc = 0x12E498u;
label_12e498:
    // 0x12e498: 0xc6601b0c  lwc1        $f0, 0x1B0C($s3)
    ctx->pc = 0x12e498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 6924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e49c:
    // 0x12e49c: 0xc6621b14  lwc1        $f2, 0x1B14($s3)
    ctx->pc = 0x12e49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 6932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12e4a0:
    // 0x12e4a0: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x12e4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_12e4a4:
    // 0x12e4a4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x12e4a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_12e4a8:
    // 0x12e4a8: 0xc6611b10  lwc1        $f1, 0x1B10($s3)
    ctx->pc = 0x12e4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 6928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12e4ac:
    // 0x12e4ac: 0x8c44bdb8  lw          $a0, -0x4248($v0)
    ctx->pc = 0x12e4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950328)));
label_12e4b0:
    // 0x12e4b0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x12e4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_12e4b4:
    // 0x12e4b4: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x12e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
label_12e4b8:
    // 0x12e4b8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x12e4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_12e4bc:
    // 0x12e4bc: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x12e4bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_12e4c0:
    // 0x12e4c0: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x12e4c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_12e4c4:
    // 0x12e4c4: 0x108202cc  beq         $a0, $v0, . + 4 + (0x2CC << 2)
label_12e4c8:
    if (ctx->pc == 0x12E4C8u) {
        ctx->pc = 0x12E4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4C4u;
        // 0x12e4c8: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E4CCu;
        goto label_12e4cc;
    }
    ctx->pc = 0x12E4C4u;
    {
        const bool branch_taken_0x12e4c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x12E4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4C4u;
        // 0x12e4c8: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e4c4) {
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12E4CCu;
label_12e4cc:
    // 0x12e4cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x12e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12e4d0:
    // 0x12e4d0: 0x104002ca  beqz        $v0, . + 4 + (0x2CA << 2)
label_12e4d4:
    if (ctx->pc == 0x12E4D4u) {
        ctx->pc = 0x12E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4D0u;
        // 0x12e4d4: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E4D8u;
        goto label_12e4d8;
    }
    ctx->pc = 0x12E4D0u;
    {
        const bool branch_taken_0x12e4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4D0u;
        // 0x12e4d4: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e4d0) {
            ctx->pc = 0x12EFFCu;
            goto label_12effc;
        }
    }
    ctx->pc = 0x12E4D8u;
label_12e4d8:
    // 0x12e4d8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x12e4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_12e4dc:
    // 0x12e4dc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12e4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_12e4e0:
    // 0x12e4e0: 0xc07fd18  jal         func_1FF460
label_12e4e4:
    if (ctx->pc == 0x12E4E4u) {
        ctx->pc = 0x12E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4E0u;
        // 0x12e4e4: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E4E8u;
        goto label_12e4e8;
    }
    ctx->pc = 0x12E4E0u;
    SET_GPR_U32(ctx, 31, 0x12E4E8u);
    ctx->pc = 0x12E4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E4E0u;
    // 0x12e4e4: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x12E4E0u, 0x12E4E8u)) {
        return;
    }
    ctx->pc = 0x12E4E8u;
label_12e4e8:
    // 0x12e4e8: 0x100002c4  b           . + 4 + (0x2C4 << 2)
label_12e4ec:
    if (ctx->pc == 0x12E4ECu) {
        ctx->pc = 0x12E4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4E8u;
        // 0x12e4ec: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E4F0u;
        goto label_12e4f0;
    }
    ctx->pc = 0x12E4E8u;
    {
        const bool branch_taken_0x12e4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4E8u;
        // 0x12e4ec: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e4e8) {
            ctx->pc = 0x12EFFCu;
            goto label_12effc;
        }
    }
    ctx->pc = 0x12E4F0u;
label_12e4f0:
    // 0x12e4f0: 0xc6601b0c  lwc1        $f0, 0x1B0C($s3)
    ctx->pc = 0x12e4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 6924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e4f4:
    // 0x12e4f4: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x12e4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_12e4f8:
    // 0x12e4f8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12e4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_12e4fc:
    // 0x12e4fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12e4fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12e500:
    // 0x12e500: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x12e500u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_12e504:
    // 0x12e504: 0x8c44bdb8  lw          $a0, -0x4248($v0)
    ctx->pc = 0x12e504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950328)));
label_12e508:
    // 0x12e508: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x12e508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
label_12e50c:
    // 0x12e50c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x12e50cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_12e510:
    // 0x12e510: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x12e510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_12e514:
    // 0x12e514: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x12e514u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_12e518:
    // 0x12e518: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x12e518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_12e51c:
    // 0x12e51c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x12e51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_12e520:
    // 0x12e520: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
label_12e524:
    if (ctx->pc == 0x12E524u) {
        ctx->pc = 0x12E524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E520u;
        // 0x12e524: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E528u;
        goto label_12e528;
    }
    ctx->pc = 0x12E520u;
    {
        const bool branch_taken_0x12e520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x12E524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E520u;
        // 0x12e524: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e520) {
            ctx->pc = 0x12E544u;
            goto label_12e544;
        }
    }
    ctx->pc = 0x12E528u;
label_12e528:
    // 0x12e528: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x12e528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12e52c:
    // 0x12e52c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_12e530:
    if (ctx->pc == 0x12E530u) {
        ctx->pc = 0x12E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E52Cu;
        // 0x12e530: 0xc6601b18  lwc1        $f0, 0x1B18($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 6936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E534u;
        goto label_12e534;
    }
    ctx->pc = 0x12E52Cu;
    {
        const bool branch_taken_0x12e52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e52c) {
            ctx->pc = 0x12E530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E52Cu;
            // 0x12e530: 0xc6601b18  lwc1        $f0, 0x1B18($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 6936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E548u;
            goto label_12e548;
        }
    }
    ctx->pc = 0x12E534u;
label_12e534:
    // 0x12e534: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x12e534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_12e538:
    // 0x12e538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12e53c:
    // 0x12e53c: 0xc07fd18  jal         func_1FF460
label_12e540:
    if (ctx->pc == 0x12E540u) {
        ctx->pc = 0x12E540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E53Cu;
        // 0x12e540: 0xae1d0004  sw          $sp, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E544u;
        goto label_12e544;
    }
    ctx->pc = 0x12E53Cu;
    SET_GPR_U32(ctx, 31, 0x12E544u);
    ctx->pc = 0x12E540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E53Cu;
    // 0x12e540: 0xae1d0004  sw          $sp, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x12E53Cu, 0x12E544u)) {
        return;
    }
    ctx->pc = 0x12E544u;
label_12e544:
    // 0x12e544: 0xc6601b18  lwc1        $f0, 0x1B18($s3)
    ctx->pc = 0x12e544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 6936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e548:
    // 0x12e548: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x12e548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_12e54c:
    // 0x12e54c: 0x8c44bdc8  lw          $a0, -0x4238($v0)
    ctx->pc = 0x12e54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950344)));
label_12e550:
    // 0x12e550: 0x8e231a70  lw          $v1, 0x1A70($s1)
    ctx->pc = 0x12e550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6768)));
label_12e554:
    // 0x12e554: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x12e554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_12e558:
    // 0x12e558: 0x108302a7  beq         $a0, $v1, . + 4 + (0x2A7 << 2)
label_12e55c:
    if (ctx->pc == 0x12E55Cu) {
        ctx->pc = 0x12E55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E558u;
        // 0x12e55c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E560u;
        goto label_12e560;
    }
    ctx->pc = 0x12E558u;
    {
        const bool branch_taken_0x12e558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x12E55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E558u;
        // 0x12e55c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e558) {
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12E560u;
label_12e560:
    // 0x12e560: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x12e560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12e564:
    // 0x12e564: 0x504002a5  beql        $v0, $zero, . + 4 + (0x2A5 << 2)
label_12e568:
    if (ctx->pc == 0x12E568u) {
        ctx->pc = 0x12E568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E564u;
        // 0x12e568: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E56Cu;
        goto label_12e56c;
    }
    ctx->pc = 0x12E564u;
    {
        const bool branch_taken_0x12e564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e564) {
            ctx->pc = 0x12E568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E564u;
            // 0x12e568: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EFFCu;
            goto label_12effc;
        }
    }
    ctx->pc = 0x12E56Cu;
label_12e56c:
    // 0x12e56c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x12e56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_12e570:
    // 0x12e570: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12e570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12e574:
    // 0x12e574: 0xc07fd18  jal         func_1FF460
label_12e578:
    if (ctx->pc == 0x12E578u) {
        ctx->pc = 0x12E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E574u;
        // 0x12e578: 0xac900004  sw          $s0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E57Cu;
        goto label_12e57c;
    }
    ctx->pc = 0x12E574u;
    SET_GPR_U32(ctx, 31, 0x12E57Cu);
    ctx->pc = 0x12E578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E574u;
    // 0x12e578: 0xac900004  sw          $s0, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x12E574u, 0x12E57Cu)) {
        return;
    }
    ctx->pc = 0x12E57Cu;
label_12e57c:
    // 0x12e57c: 0x1000029f  b           . + 4 + (0x29F << 2)
label_12e580:
    if (ctx->pc == 0x12E580u) {
        ctx->pc = 0x12E580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E57Cu;
        // 0x12e580: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E584u;
        goto label_12e584;
    }
    ctx->pc = 0x12E57Cu;
    {
        const bool branch_taken_0x12e57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E57Cu;
        // 0x12e580: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e57c) {
            ctx->pc = 0x12EFFCu;
            goto label_12effc;
        }
    }
    ctx->pc = 0x12E584u;
label_12e584:
    // 0x12e584: 0x8c434600  lw          $v1, 0x4600($v0)
    ctx->pc = 0x12e584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17920)));
label_12e588:
    // 0x12e588: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
label_12e58c:
    if (ctx->pc == 0x12E58Cu) {
        ctx->pc = 0x12E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E588u;
        // 0x12e58c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E590u;
        goto label_12e590;
    }
    ctx->pc = 0x12E588u;
    {
        const bool branch_taken_0x12e588 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x12E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E588u;
        // 0x12e58c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e588) {
            ctx->pc = 0x12E5A0u;
            goto label_12e5a0;
        }
    }
    ctx->pc = 0x12E590u;
label_12e590:
    // 0x12e590: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12e590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12e594:
    // 0x12e594: 0xae601874  sw          $zero, 0x1874($s3)
    ctx->pc = 0x12e594u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6260), GPR_U32(ctx, 0));
label_12e598:
    // 0x12e598: 0x10000297  b           . + 4 + (0x297 << 2)
label_12e59c:
    if (ctx->pc == 0x12E59Cu) {
        ctx->pc = 0x12E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E598u;
        // 0x12e59c: 0xae621b70  sw          $v0, 0x1B70($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 7024), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E5A0u;
        goto label_12e5a0;
    }
    ctx->pc = 0x12E598u;
    {
        const bool branch_taken_0x12e598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E598u;
        // 0x12e59c: 0xae621b70  sw          $v0, 0x1B70($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 7024), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e598) {
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12E5A0u;
label_12e5a0:
    // 0x12e5a0: 0x8c434608  lw          $v1, 0x4608($v0)
    ctx->pc = 0x12e5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17928)));
label_12e5a4:
    // 0x12e5a4: 0x14a30019  bne         $a1, $v1, . + 4 + (0x19 << 2)
label_12e5a8:
    if (ctx->pc == 0x12E5A8u) {
        ctx->pc = 0x12E5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E5A4u;
        // 0x12e5a8: 0x8e428880  lw          $v0, -0x7780($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E5ACu;
        goto label_12e5ac;
    }
    ctx->pc = 0x12E5A4u;
    {
        const bool branch_taken_0x12e5a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x12E5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E5A4u;
        // 0x12e5a8: 0x8e428880  lw          $v0, -0x7780($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e5a4) {
            ctx->pc = 0x12E60Cu;
            goto label_12e60c;
        }
    }
    ctx->pc = 0x12E5ACu;
label_12e5ac:
    // 0x12e5ac: 0x8e621b70  lw          $v0, 0x1B70($s3)
    ctx->pc = 0x12e5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7024)));
label_12e5b0:
    // 0x12e5b0: 0x10400292  beqz        $v0, . + 4 + (0x292 << 2)
label_12e5b4:
    if (ctx->pc == 0x12E5B4u) {
        ctx->pc = 0x12E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E5B0u;
        // 0x12e5b4: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E5B8u;
        goto label_12e5b8;
    }
    ctx->pc = 0x12E5B0u;
    {
        const bool branch_taken_0x12e5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E5B0u;
        // 0x12e5b4: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e5b0) {
            ctx->pc = 0x12EFFCu;
            goto label_12effc;
        }
    }
    ctx->pc = 0x12E5B8u;
label_12e5b8:
    // 0x12e5b8: 0x8e621874  lw          $v0, 0x1874($s3)
    ctx->pc = 0x12e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6260)));
label_12e5bc:
    // 0x12e5bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_12e5c0:
    if (ctx->pc == 0x12E5C0u) {
        ctx->pc = 0x12E5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E5BCu;
        // 0x12e5c0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E5C4u;
        goto label_12e5c4;
    }
    ctx->pc = 0x12E5BCu;
    {
        const bool branch_taken_0x12e5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E5BCu;
        // 0x12e5c0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e5bc) {
            ctx->pc = 0x12E5CCu;
            goto label_12e5cc;
        }
    }
    ctx->pc = 0x12E5C4u;
label_12e5c4:
    // 0x12e5c4: 0xae701864  sw          $s0, 0x1864($s3)
    ctx->pc = 0x12e5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6244), GPR_U32(ctx, 16));
label_12e5c8:
    // 0x12e5c8: 0xae701860  sw          $s0, 0x1860($s3)
    ctx->pc = 0x12e5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6240), GPR_U32(ctx, 16));
label_12e5cc:
    // 0x12e5cc: 0xae701874  sw          $s0, 0x1874($s3)
    ctx->pc = 0x12e5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6260), GPR_U32(ctx, 16));
label_12e5d0:
    // 0x12e5d0: 0xae601b70  sw          $zero, 0x1B70($s3)
    ctx->pc = 0x12e5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 7024), GPR_U32(ctx, 0));
label_12e5d4:
    // 0x12e5d4: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x12e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_12e5d8:
    // 0x12e5d8: 0xc66c1b7c  lwc1        $f12, 0x1B7C($s3)
    ctx->pc = 0x12e5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 7036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12e5dc:
    // 0x12e5dc: 0x844402a0  lh          $a0, 0x2A0($v0)
    ctx->pc = 0x12e5dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 672)));
label_12e5e0:
    // 0x12e5e0: 0x8c4302a4  lw          $v1, 0x2A4($v0)
    ctx->pc = 0x12e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 676)));
label_12e5e4:
    // 0x12e5e4: 0x60f809  jalr        $v1
label_12e5e8:
    if (ctx->pc == 0x12E5E8u) {
        ctx->pc = 0x12E5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E5E4u;
        // 0x12e5e8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E5ECu;
        goto label_12e5ec;
    }
    ctx->pc = 0x12E5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12E5ECu);
        ctx->pc = 0x12E5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E5E4u;
        // 0x12e5e8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E5E4u, 0x12E5ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12E5ECu;
label_12e5ec:
    // 0x12e5ec: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12e5ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12e5f0:
    // 0x12e5f0: 0xc6600bdc  lwc1        $f0, 0xBDC($s3)
    ctx->pc = 0x12e5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e5f4:
    // 0x12e5f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x12e5f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e5f8:
    // 0x12e5f8: 0x0  nop
    ctx->pc = 0x12e5f8u;
    // NOP
label_12e5fc:
    // 0x12e5fc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_12e600:
    if (ctx->pc == 0x12E600u) {
        ctx->pc = 0x12E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E5FCu;
        // 0x12e600: 0xae701b74  sw          $s0, 0x1B74($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 7028), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E604u;
        goto label_12e604;
    }
    ctx->pc = 0x12E5FCu;
    {
        const bool branch_taken_0x12e5fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12e5fc) {
            ctx->pc = 0x12E600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E5FCu;
            // 0x12e600: 0xae701b74  sw          $s0, 0x1B74($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 7028), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E604u;
            goto label_12e604;
        }
    }
    ctx->pc = 0x12E604u;
label_12e604:
    // 0x12e604: 0x1000027c  b           . + 4 + (0x27C << 2)
label_12e608:
    if (ctx->pc == 0x12E608u) {
        ctx->pc = 0x12E608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E604u;
        // 0x12e608: 0xe6611b7c  swc1        $f1, 0x1B7C($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 7036), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E60Cu;
        goto label_12e60c;
    }
    ctx->pc = 0x12E604u;
    {
        const bool branch_taken_0x12e604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E604u;
        // 0x12e608: 0xe6611b7c  swc1        $f1, 0x1B7C($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 7036), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e604) {
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12E60Cu;
label_12e60c:
    // 0x12e60c: 0x14a20027  bne         $a1, $v0, . + 4 + (0x27 << 2)
label_12e610:
    if (ctx->pc == 0x12E610u) {
        ctx->pc = 0x12E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E60Cu;
        // 0x12e610: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E614u;
        goto label_12e614;
    }
    ctx->pc = 0x12E60Cu;
    {
        const bool branch_taken_0x12e60c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x12E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E60Cu;
        // 0x12e610: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e60c) {
            ctx->pc = 0x12E6ACu;
            goto label_12e6ac;
        }
    }
    ctx->pc = 0x12E614u;
label_12e614:
    // 0x12e614: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x12e614u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12e618:
    // 0x12e618: 0xc04dbac  jal         func_136EB0
label_12e61c:
    if (ctx->pc == 0x12E61Cu) {
        ctx->pc = 0x12E61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E618u;
        // 0x12e61c: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E620u;
        goto label_12e620;
    }
    ctx->pc = 0x12E618u;
    SET_GPR_U32(ctx, 31, 0x12E620u);
    ctx->pc = 0x12E61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E618u;
    // 0x12e61c: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x136EB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x136EB0u, 0x12E618u, 0x12E620u)) {
        return;
    }
    ctx->pc = 0x12E620u;
label_12e620:
    // 0x12e620: 0x8e621988  lw          $v0, 0x1988($s3)
    ctx->pc = 0x12e620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6536)));
label_12e624:
    // 0x12e624: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_12e628:
    if (ctx->pc == 0x12E628u) {
        ctx->pc = 0x12E628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E624u;
        // 0x12e628: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E62Cu;
        goto label_12e62c;
    }
    ctx->pc = 0x12E624u;
    {
        const bool branch_taken_0x12e624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E624u;
        // 0x12e628: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e624) {
            ctx->pc = 0x12E664u;
            goto label_12e664;
        }
    }
    ctx->pc = 0x12E62Cu;
label_12e62c:
    // 0x12e62c: 0x8c438474  lw          $v1, -0x7B8C($v0)
    ctx->pc = 0x12e62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935668)));
label_12e630:
    // 0x12e630: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_12e634:
    if (ctx->pc == 0x12E634u) {
        ctx->pc = 0x12E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E630u;
        // 0x12e634: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E638u;
        goto label_12e638;
    }
    ctx->pc = 0x12E630u;
    {
        const bool branch_taken_0x12e630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E630u;
        // 0x12e634: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e630) {
            ctx->pc = 0x12E644u;
            goto label_12e644;
        }
    }
    ctx->pc = 0x12E638u;
label_12e638:
    // 0x12e638: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x12e638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_12e63c:
    // 0x12e63c: 0x8c438478  lw          $v1, -0x7B88($v0)
    ctx->pc = 0x12e63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935672)));
label_12e640:
    // 0x12e640: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x12e640u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_12e644:
    // 0x12e644: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_12e648:
    if (ctx->pc == 0x12E648u) {
        ctx->pc = 0x12E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E644u;
        // 0x12e648: 0x8e630034  lw          $v1, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E64Cu;
        goto label_12e64c;
    }
    ctx->pc = 0x12E644u;
    {
        const bool branch_taken_0x12e644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e644) {
            ctx->pc = 0x12E648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E644u;
            // 0x12e648: 0x8e630034  lw          $v1, 0x34($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E668u;
            goto label_12e668;
        }
    }
    ctx->pc = 0x12E64Cu;
label_12e64c:
    // 0x12e64c: 0xc05f90a  jal         func_17E428
label_12e650:
    if (ctx->pc == 0x12E650u) {
        ctx->pc = 0x12E650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E64Cu;
        // 0x12e650: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E654u;
        goto label_12e654;
    }
    ctx->pc = 0x12E64Cu;
    SET_GPR_U32(ctx, 31, 0x12E654u);
    ctx->pc = 0x12E650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E64Cu;
    // 0x12e650: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x12E64Cu, 0x12E654u)) {
        return;
    }
    ctx->pc = 0x12E654u;
label_12e654:
    // 0x12e654: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x12e654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12e658:
    // 0x12e658: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x12e658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_12e65c:
    // 0x12e65c: 0xc05f910  jal         func_17E440
label_12e660:
    if (ctx->pc == 0x12E660u) {
        ctx->pc = 0x12E660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E65Cu;
        // 0x12e660: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E664u;
        goto label_12e664;
    }
    ctx->pc = 0x12E65Cu;
    SET_GPR_U32(ctx, 31, 0x12E664u);
    ctx->pc = 0x12E660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E65Cu;
    // 0x12e660: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E440u, 0x12E65Cu, 0x12E664u)) {
        return;
    }
    ctx->pc = 0x12E664u;
label_12e664:
    // 0x12e664: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x12e664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_12e668:
    // 0x12e668: 0x84640160  lh          $a0, 0x160($v1)
    ctx->pc = 0x12e668u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 352)));
label_12e66c:
    // 0x12e66c: 0x8c620164  lw          $v0, 0x164($v1)
    ctx->pc = 0x12e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 356)));
label_12e670:
    // 0x12e670: 0x40f809  jalr        $v0
label_12e674:
    if (ctx->pc == 0x12E674u) {
        ctx->pc = 0x12E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E670u;
        // 0x12e674: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E678u;
        goto label_12e678;
    }
    ctx->pc = 0x12E670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12E678u);
        ctx->pc = 0x12E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E670u;
        // 0x12e674: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E670u, 0x12E678u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12E678u;
label_12e678:
    // 0x12e678: 0x10400260  beqz        $v0, . + 4 + (0x260 << 2)
label_12e67c:
    if (ctx->pc == 0x12E67Cu) {
        ctx->pc = 0x12E67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E678u;
        // 0x12e67c: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E680u;
        goto label_12e680;
    }
    ctx->pc = 0x12E678u;
    {
        const bool branch_taken_0x12e678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E678u;
        // 0x12e67c: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e678) {
            ctx->pc = 0x12EFFCu;
            goto label_12effc;
        }
    }
    ctx->pc = 0x12E680u;
label_12e680:
    // 0x12e680: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x12e680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_12e684:
    // 0x12e684: 0x3c01c43b  lui         $at, 0xC43B
    ctx->pc = 0x12e684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50235 << 16));
label_12e688:
    // 0x12e688: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x12e688u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
label_12e68c:
    // 0x12e68c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12e68cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12e690:
    // 0x12e690: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x12e690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e694:
    // 0x12e694: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12e694u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e698:
    // 0x12e698: 0x0  nop
    ctx->pc = 0x12e698u;
    // NOP
label_12e69c:
    // 0x12e69c: 0x45000258  bc1f        . + 4 + (0x258 << 2)
label_12e6a0:
    if (ctx->pc == 0x12E6A0u) {
        ctx->pc = 0x12E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E69Cu;
        // 0x12e6a0: 0x7bb10130  lq          $s1, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E6A4u;
        goto label_12e6a4;
    }
    ctx->pc = 0x12E69Cu;
    {
        const bool branch_taken_0x12e69c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E69Cu;
        // 0x12e6a0: 0x7bb10130  lq          $s1, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e69c) {
            ctx->pc = 0x12F000u;
            goto label_12f000;
        }
    }
    ctx->pc = 0x12E6A4u;
label_12e6a4:
    // 0x12e6a4: 0x10000243  b           . + 4 + (0x243 << 2)
label_12e6a8:
    if (ctx->pc == 0x12E6A8u) {
        ctx->pc = 0x12E6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6A4u;
        // 0x12e6a8: 0x8e620034  lw          $v0, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E6ACu;
        goto label_12e6ac;
    }
    ctx->pc = 0x12E6A4u;
    {
        const bool branch_taken_0x12e6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6A4u;
        // 0x12e6a8: 0x8e620034  lw          $v0, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6a4) {
            ctx->pc = 0x12EFB4u;
            goto label_12efb4;
        }
    }
    ctx->pc = 0x12E6ACu;
label_12e6ac:
    // 0x12e6ac: 0x8c43eea8  lw          $v1, -0x1158($v0)
    ctx->pc = 0x12e6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962856)));
label_12e6b0:
    // 0x12e6b0: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
label_12e6b4:
    if (ctx->pc == 0x12E6B4u) {
        ctx->pc = 0x12E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6B0u;
        // 0x12e6b4: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E6B8u;
        goto label_12e6b8;
    }
    ctx->pc = 0x12E6B0u;
    {
        const bool branch_taken_0x12e6b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x12E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6B0u;
        // 0x12e6b4: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6b0) {
            ctx->pc = 0x12E6C4u;
            goto label_12e6c4;
        }
    }
    ctx->pc = 0x12E6B8u;
label_12e6b8:
    // 0x12e6b8: 0x8c43f950  lw          $v1, -0x6B0($v0)
    ctx->pc = 0x12e6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965584)));
label_12e6bc:
    // 0x12e6bc: 0x14a30009  bne         $a1, $v1, . + 4 + (0x9 << 2)
label_12e6c0:
    if (ctx->pc == 0x12E6C0u) {
        ctx->pc = 0x12E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6BCu;
        // 0x12e6c0: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E6C4u;
        goto label_12e6c4;
    }
    ctx->pc = 0x12E6BCu;
    {
        const bool branch_taken_0x12e6bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x12E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6BCu;
        // 0x12e6c0: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6bc) {
            ctx->pc = 0x12E6E4u;
            goto label_12e6e4;
        }
    }
    ctx->pc = 0x12E6C4u;
label_12e6c4:
    // 0x12e6c4: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x12e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_12e6c8:
    // 0x12e6c8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x12e6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12e6cc:
    // 0x12e6cc: 0x844401c0  lh          $a0, 0x1C0($v0)
    ctx->pc = 0x12e6ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 448)));
label_12e6d0:
    // 0x12e6d0: 0x8c4301c4  lw          $v1, 0x1C4($v0)
    ctx->pc = 0x12e6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
label_12e6d4:
    // 0x12e6d4: 0x60f809  jalr        $v1
label_12e6d8:
    if (ctx->pc == 0x12E6D8u) {
        ctx->pc = 0x12E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6D4u;
        // 0x12e6d8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E6DCu;
        goto label_12e6dc;
    }
    ctx->pc = 0x12E6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12E6DCu);
        ctx->pc = 0x12E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6D4u;
        // 0x12e6d8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E6D4u, 0x12E6DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12E6DCu;
label_12e6dc:
    // 0x12e6dc: 0x10000247  b           . + 4 + (0x247 << 2)
label_12e6e0:
    if (ctx->pc == 0x12E6E0u) {
        ctx->pc = 0x12E6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6DCu;
        // 0x12e6e0: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E6E4u;
        goto label_12e6e4;
    }
    ctx->pc = 0x12E6DCu;
    {
        const bool branch_taken_0x12e6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6DCu;
        // 0x12e6e0: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6dc) {
            ctx->pc = 0x12EFFCu;
            goto label_12effc;
        }
    }
    ctx->pc = 0x12E6E4u;
label_12e6e4:
    // 0x12e6e4: 0x8c4346b0  lw          $v1, 0x46B0($v0)
    ctx->pc = 0x12e6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18096)));
label_12e6e8:
    // 0x12e6e8: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
label_12e6ec:
    if (ctx->pc == 0x12E6ECu) {
        ctx->pc = 0x12E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6E8u;
        // 0x12e6ec: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E6F0u;
        goto label_12e6f0;
    }
    ctx->pc = 0x12E6E8u;
    {
        const bool branch_taken_0x12e6e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x12E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6E8u;
        // 0x12e6ec: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6e8) {
            ctx->pc = 0x12E6FCu;
            goto label_12e6fc;
        }
    }
    ctx->pc = 0x12E6F0u;
label_12e6f0:
    // 0x12e6f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12e6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12e6f4:
    // 0x12e6f4: 0x10000240  b           . + 4 + (0x240 << 2)
label_12e6f8:
    if (ctx->pc == 0x12E6F8u) {
        ctx->pc = 0x12E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6F4u;
        // 0x12e6f8: 0xae621870  sw          $v0, 0x1870($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 6256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E6FCu;
        goto label_12e6fc;
    }
    ctx->pc = 0x12E6F4u;
    {
        const bool branch_taken_0x12e6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6F4u;
        // 0x12e6f8: 0xae621870  sw          $v0, 0x1870($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 6256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6f4) {
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12E6FCu;
label_12e6fc:
    // 0x12e6fc: 0x8c4346b8  lw          $v1, 0x46B8($v0)
    ctx->pc = 0x12e6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18104)));
label_12e700:
    // 0x12e700: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
label_12e704:
    if (ctx->pc == 0x12E704u) {
        ctx->pc = 0x12E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E700u;
        // 0x12e704: 0x3c03006b  lui         $v1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E708u;
        goto label_12e708;
    }
    ctx->pc = 0x12E700u;
    {
        const bool branch_taken_0x12e700 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x12E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E700u;
        // 0x12e704: 0x3c03006b  lui         $v1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e700) {
            ctx->pc = 0x12E710u;
            goto label_12e710;
        }
    }
    ctx->pc = 0x12E708u;
label_12e708:
    // 0x12e708: 0x1000023b  b           . + 4 + (0x23B << 2)
label_12e70c:
    if (ctx->pc == 0x12E70Cu) {
        ctx->pc = 0x12E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E708u;
        // 0x12e70c: 0xae601870  sw          $zero, 0x1870($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 6256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E710u;
        goto label_12e710;
    }
    ctx->pc = 0x12E708u;
    {
        const bool branch_taken_0x12e708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E708u;
        // 0x12e70c: 0xae601870  sw          $zero, 0x1870($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 6256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e708) {
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12E710u;
label_12e710:
    // 0x12e710: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x12e710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12e714:
    // 0x12e714: 0x8c6246c8  lw          $v0, 0x46C8($v1)
    ctx->pc = 0x12e714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18120)));
label_12e718:
    // 0x12e718: 0x5482000f  bnel        $a0, $v0, . + 4 + (0xF << 2)
label_12e71c:
    if (ctx->pc == 0x12E71Cu) {
        ctx->pc = 0x12E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E718u;
        // 0x12e71c: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E720u;
        goto label_12e720;
    }
    ctx->pc = 0x12E718u;
    {
        const bool branch_taken_0x12e718 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x12e718) {
            ctx->pc = 0x12E71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E718u;
            // 0x12e71c: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E758u;
            goto label_12e758;
        }
    }
    ctx->pc = 0x12E720u;
label_12e720:
    // 0x12e720: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x12e720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12e724:
    // 0x12e724: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_12e728:
    if (ctx->pc == 0x12E728u) {
        ctx->pc = 0x12E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E724u;
        // 0x12e728: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E72Cu;
        goto label_12e72c;
    }
    ctx->pc = 0x12E724u;
    {
        const bool branch_taken_0x12e724 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E724u;
        // 0x12e728: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e724) {
            ctx->pc = 0x12E730u;
            goto label_12e730;
        }
    }
    ctx->pc = 0x12E72Cu;
label_12e72c:
    // 0x12e72c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x12e72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_12e730:
    // 0x12e730: 0x50600231  beql        $v1, $zero, . + 4 + (0x231 << 2)
label_12e734:
    if (ctx->pc == 0x12E734u) {
        ctx->pc = 0x12E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E730u;
        // 0x12e734: 0xae631874  sw          $v1, 0x1874($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 6260), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E738u;
        goto label_12e738;
    }
    ctx->pc = 0x12E730u;
    {
        const bool branch_taken_0x12e730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e730) {
            ctx->pc = 0x12E734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E730u;
            // 0x12e734: 0xae631874  sw          $v1, 0x1874($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 6260), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12E738u;
label_12e738:
    // 0x12e738: 0x8e621874  lw          $v0, 0x1874($s3)
    ctx->pc = 0x12e738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6260)));
label_12e73c:
    // 0x12e73c: 0x5440022e  bnel        $v0, $zero, . + 4 + (0x22E << 2)
label_12e740:
    if (ctx->pc == 0x12E740u) {
        ctx->pc = 0x12E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E73Cu;
        // 0x12e740: 0xae631874  sw          $v1, 0x1874($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 6260), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E744u;
        goto label_12e744;
    }
    ctx->pc = 0x12E73Cu;
    {
        const bool branch_taken_0x12e73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e73c) {
            ctx->pc = 0x12E740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E73Cu;
            // 0x12e740: 0xae631874  sw          $v1, 0x1874($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 6260), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12E744u;
label_12e744:
    // 0x12e744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12e744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12e748:
    // 0x12e748: 0xae621860  sw          $v0, 0x1860($s3)
    ctx->pc = 0x12e748u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6240), GPR_U32(ctx, 2));
label_12e74c:
    // 0x12e74c: 0xae621864  sw          $v0, 0x1864($s3)
    ctx->pc = 0x12e74cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6244), GPR_U32(ctx, 2));
label_12e750:
    // 0x12e750: 0x10000229  b           . + 4 + (0x229 << 2)
label_12e754:
    if (ctx->pc == 0x12E754u) {
        ctx->pc = 0x12E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E750u;
        // 0x12e754: 0xae631874  sw          $v1, 0x1874($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 6260), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E758u;
        goto label_12e758;
    }
    ctx->pc = 0x12E750u;
    {
        const bool branch_taken_0x12e750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E750u;
        // 0x12e754: 0xae631874  sw          $v1, 0x1874($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 6260), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e750) {
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12E758u;
label_12e758:
    // 0x12e758: 0x8c43f948  lw          $v1, -0x6B8($v0)
    ctx->pc = 0x12e758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965576)));
label_12e75c:
    // 0x12e75c: 0x10830226  beq         $a0, $v1, . + 4 + (0x226 << 2)
label_12e760:
    if (ctx->pc == 0x12E760u) {
        ctx->pc = 0x12E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E75Cu;
        // 0x12e760: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E764u;
        goto label_12e764;
    }
    ctx->pc = 0x12E75Cu;
    {
        const bool branch_taken_0x12e75c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x12E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E75Cu;
        // 0x12e760: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e75c) {
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12E764u;
label_12e764:
    // 0x12e764: 0x8c4346c0  lw          $v1, 0x46C0($v0)
    ctx->pc = 0x12e764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18112)));
label_12e768:
    // 0x12e768: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
label_12e76c:
    if (ctx->pc == 0x12E76Cu) {
        ctx->pc = 0x12E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E768u;
        // 0x12e76c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E770u;
        goto label_12e770;
    }
    ctx->pc = 0x12E768u;
    {
        const bool branch_taken_0x12e768 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x12E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E768u;
        // 0x12e76c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e768) {
            ctx->pc = 0x12E7B4u;
            goto label_12e7b4;
        }
    }
    ctx->pc = 0x12E770u;
label_12e770:
    // 0x12e770: 0x8e6200c4  lw          $v0, 0xC4($s3)
    ctx->pc = 0x12e770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_12e774:
    // 0x12e774: 0x10400221  beqz        $v0, . + 4 + (0x221 << 2)
label_12e778:
    if (ctx->pc == 0x12E778u) {
        ctx->pc = 0x12E778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E774u;
        // 0x12e778: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E77Cu;
        goto label_12e77c;
    }
    ctx->pc = 0x12E774u;
    {
        const bool branch_taken_0x12e774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E774u;
        // 0x12e778: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e774) {
            ctx->pc = 0x12EFFCu;
            goto label_12effc;
        }
    }
    ctx->pc = 0x12E77Cu;
label_12e77c:
    // 0x12e77c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x12e77cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12e780:
    // 0x12e780: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_12e784:
    if (ctx->pc == 0x12E784u) {
        ctx->pc = 0x12E784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E780u;
        // 0x12e784: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E788u;
        goto label_12e788;
    }
    ctx->pc = 0x12E780u;
    {
        const bool branch_taken_0x12e780 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E780u;
        // 0x12e784: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e780) {
            ctx->pc = 0x12E78Cu;
            goto label_12e78c;
        }
    }
    ctx->pc = 0x12E788u;
label_12e788:
    // 0x12e788: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x12e788u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_12e78c:
    // 0x12e78c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e78cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e790:
    // 0x12e790: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12e790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12e794:
    // 0x12e794: 0xc04eef0  jal         func_13BBC0
label_12e798:
    if (ctx->pc == 0x12E798u) {
        ctx->pc = 0x12E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E794u;
        // 0x12e798: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E79Cu;
        goto label_12e79c;
    }
    ctx->pc = 0x12E794u;
    SET_GPR_U32(ctx, 31, 0x12E79Cu);
    ctx->pc = 0x12E798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E794u;
    // 0x12e798: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BBC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BBC0u, 0x12E794u, 0x12E79Cu)) {
        return;
    }
    ctx->pc = 0x12E79Cu;
label_12e79c:
    // 0x12e79c: 0x266416c0  addiu       $a0, $s3, 0x16C0
    ctx->pc = 0x12e79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 5824));
label_12e7a0:
    // 0x12e7a0: 0xc053426  jal         func_14D098
label_12e7a4:
    if (ctx->pc == 0x12E7A4u) {
        ctx->pc = 0x12E7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E7A0u;
        // 0x12e7a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E7A8u;
        goto label_12e7a8;
    }
    ctx->pc = 0x12E7A0u;
    SET_GPR_U32(ctx, 31, 0x12E7A8u);
    ctx->pc = 0x12E7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E7A0u;
    // 0x12e7a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D098u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14D098u, 0x12E7A0u, 0x12E7A8u)) {
        return;
    }
    ctx->pc = 0x12E7A8u;
label_12e7a8:
    // 0x12e7a8: 0x3a020001  xori        $v0, $s0, 0x1
    ctx->pc = 0x12e7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
label_12e7ac:
    // 0x12e7ac: 0x10000212  b           . + 4 + (0x212 << 2)
label_12e7b0:
    if (ctx->pc == 0x12E7B0u) {
        ctx->pc = 0x12E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E7ACu;
        // 0x12e7b0: 0xae62198c  sw          $v0, 0x198C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 6540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E7B4u;
        goto label_12e7b4;
    }
    ctx->pc = 0x12E7ACu;
    {
        const bool branch_taken_0x12e7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E7ACu;
        // 0x12e7b0: 0xae62198c  sw          $v0, 0x198C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 6540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e7ac) {
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12E7B4u;
label_12e7b4:
    // 0x12e7b4: 0x8c4346f0  lw          $v1, 0x46F0($v0)
    ctx->pc = 0x12e7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18160)));
label_12e7b8:
    // 0x12e7b8: 0x14830027  bne         $a0, $v1, . + 4 + (0x27 << 2)
label_12e7bc:
    if (ctx->pc == 0x12E7BCu) {
        ctx->pc = 0x12E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E7B8u;
        // 0x12e7bc: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E7C0u;
        goto label_12e7c0;
    }
    ctx->pc = 0x12E7B8u;
    {
        const bool branch_taken_0x12e7b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x12E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E7B8u;
        // 0x12e7bc: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e7b8) {
            ctx->pc = 0x12E858u;
            goto label_12e858;
        }
    }
    ctx->pc = 0x12E7C0u;
label_12e7c0:
    // 0x12e7c0: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x12e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_12e7c4:
    // 0x12e7c4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x12e7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_12e7c8:
    // 0x12e7c8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x12e7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_12e7cc:
    // 0x12e7cc: 0xc04f0cc  jal         func_13C330
label_12e7d0:
    if (ctx->pc == 0x12E7D0u) {
        ctx->pc = 0x12E7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E7CCu;
        // 0x12e7d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E7D4u;
        goto label_12e7d4;
    }
    ctx->pc = 0x12E7CCu;
    SET_GPR_U32(ctx, 31, 0x12E7D4u);
    ctx->pc = 0x12E7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E7CCu;
    // 0x12e7d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x12E7CCu, 0x12E7D4u)) {
        return;
    }
    ctx->pc = 0x12E7D4u;
label_12e7d4:
    // 0x12e7d4: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x12e7d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_12e7d8:
    // 0x12e7d8: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x12e7d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_12e7dc:
    // 0x12e7dc: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x12e7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_12e7e0:
    // 0x12e7e0: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x12e7e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12e7e4:
    // 0x12e7e4: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x12e7e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12e7e8:
    // 0x12e7e8: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x12e7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
label_12e7ec:
    // 0x12e7ec: 0xc04f0f0  jal         func_13C3C0
label_12e7f0:
    if (ctx->pc == 0x12E7F0u) {
        ctx->pc = 0x12E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E7ECu;
        // 0x12e7f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E7F4u;
        goto label_12e7f4;
    }
    ctx->pc = 0x12E7ECu;
    SET_GPR_U32(ctx, 31, 0x12E7F4u);
    ctx->pc = 0x12E7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E7ECu;
    // 0x12e7f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x12E7ECu, 0x12E7F4u)) {
        return;
    }
    ctx->pc = 0x12E7F4u;
label_12e7f4:
    // 0x12e7f4: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x12e7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12e7f8:
    // 0x12e7f8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12e7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e7fc:
    // 0x12e7fc: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x12e7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12e800:
    // 0x12e800: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x12e800u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_12e804:
    // 0x12e804: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x12e804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12e808:
    // 0x12e808: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x12e808u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_12e80c:
    // 0x12e80c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x12e80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e810:
    // 0x12e810: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x12e810u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_12e814:
    // 0x12e814: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x12e814u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_12e818:
    // 0x12e818: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12e818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12e81c:
    // 0x12e81c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x12e81cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_12e820:
    // 0x12e820: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x12e820u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_12e824:
    // 0x12e824: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12e824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12e828:
    // 0x12e828: 0x3c014b18  lui         $at, 0x4B18
    ctx->pc = 0x12e828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19224 << 16));
label_12e82c:
    // 0x12e82c: 0x34219680  ori         $at, $at, 0x9680
    ctx->pc = 0x12e82cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38528);
label_12e830:
    // 0x12e830: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12e830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12e834:
    // 0x12e834: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12e834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12e838:
    // 0x12e838: 0xae621980  sw          $v0, 0x1980($s3)
    ctx->pc = 0x12e838u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6528), GPR_U32(ctx, 2));
label_12e83c:
    // 0x12e83c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12e83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12e840:
    // 0x12e840: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x12e840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_12e844:
    // 0x12e844: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x12e844u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12e848:
    // 0x12e848: 0xc048fc0  jal         func_123F00
label_12e84c:
    if (ctx->pc == 0x12E84Cu) {
        ctx->pc = 0x12E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E848u;
        // 0x12e84c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E850u;
        goto label_12e850;
    }
    ctx->pc = 0x12E848u;
    SET_GPR_U32(ctx, 31, 0x12E850u);
    ctx->pc = 0x12E84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E848u;
    // 0x12e84c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123F00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x123F00u, 0x12E848u, 0x12E850u)) {
        return;
    }
    ctx->pc = 0x12E850u;
label_12e850:
    // 0x12e850: 0x100001ea  b           . + 4 + (0x1EA << 2)
label_12e854:
    if (ctx->pc == 0x12E854u) {
        ctx->pc = 0x12E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E850u;
        // 0x12e854: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E858u;
        goto label_12e858;
    }
    ctx->pc = 0x12E850u;
    {
        const bool branch_taken_0x12e850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E850u;
        // 0x12e854: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e850) {
            ctx->pc = 0x12EFFCu;
            goto label_12effc;
        }
    }
    ctx->pc = 0x12E858u;
label_12e858:
    // 0x12e858: 0x8c4346f8  lw          $v1, 0x46F8($v0)
    ctx->pc = 0x12e858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18168)));
label_12e85c:
    // 0x12e85c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e85cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e860:
    // 0x12e860: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_12e864:
    if (ctx->pc == 0x12E864u) {
        ctx->pc = 0x12E864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E860u;
        // 0x12e864: 0x244646f8  addiu       $a2, $v0, 0x46F8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 18168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E868u;
        goto label_12e868;
    }
    ctx->pc = 0x12E860u;
    {
        const bool branch_taken_0x12e860 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x12E864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E860u;
        // 0x12e864: 0x244646f8  addiu       $a2, $v0, 0x46F8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 18168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e860) {
            ctx->pc = 0x12E874u;
            goto label_12e874;
        }
    }
    ctx->pc = 0x12E868u;
label_12e868:
    // 0x12e868: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12e868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12e86c:
    // 0x12e86c: 0x100001e2  b           . + 4 + (0x1E2 << 2)
label_12e870:
    if (ctx->pc == 0x12E870u) {
        ctx->pc = 0x12E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E86Cu;
        // 0x12e870: 0xae621988  sw          $v0, 0x1988($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 6536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E874u;
        goto label_12e874;
    }
    ctx->pc = 0x12E86Cu;
    {
        const bool branch_taken_0x12e86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E86Cu;
        // 0x12e870: 0xae621988  sw          $v0, 0x1988($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 6536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e86c) {
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12E874u;
label_12e874:
    // 0x12e874: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x12e874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_12e878:
    // 0x12e878: 0x8c624700  lw          $v0, 0x4700($v1)
    ctx->pc = 0x12e878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18176)));
label_12e87c:
    // 0x12e87c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_12e880:
    if (ctx->pc == 0x12E880u) {
        ctx->pc = 0x12E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E87Cu;
        // 0x12e880: 0x24654700  addiu       $a1, $v1, 0x4700 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 18176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E884u;
        goto label_12e884;
    }
    ctx->pc = 0x12E87Cu;
    {
        const bool branch_taken_0x12e87c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x12E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E87Cu;
        // 0x12e880: 0x24654700  addiu       $a1, $v1, 0x4700 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 18176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e87c) {
            ctx->pc = 0x12E88Cu;
            goto label_12e88c;
        }
    }
    ctx->pc = 0x12E884u;
label_12e884:
    // 0x12e884: 0x100001dc  b           . + 4 + (0x1DC << 2)
label_12e888:
    if (ctx->pc == 0x12E888u) {
        ctx->pc = 0x12E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E884u;
        // 0x12e888: 0xae601988  sw          $zero, 0x1988($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 6536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E88Cu;
        goto label_12e88c;
    }
    ctx->pc = 0x12E884u;
    {
        const bool branch_taken_0x12e884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E884u;
        // 0x12e888: 0xae601988  sw          $zero, 0x1988($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 6536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e884) {
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12E88Cu;
label_12e88c:
    // 0x12e88c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x12e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_12e890:
    // 0x12e890: 0x8c434708  lw          $v1, 0x4708($v0)
    ctx->pc = 0x12e890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18184)));
label_12e894:
    // 0x12e894: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
label_12e898:
    if (ctx->pc == 0x12E898u) {
        ctx->pc = 0x12E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E894u;
        // 0x12e898: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E89Cu;
        goto label_12e89c;
    }
    ctx->pc = 0x12E894u;
    {
        const bool branch_taken_0x12e894 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x12E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E894u;
        // 0x12e898: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e894) {
            ctx->pc = 0x12E8C8u;
            goto label_12e8c8;
        }
    }
    ctx->pc = 0x12E89Cu;
label_12e89c:
    // 0x12e89c: 0x8e621988  lw          $v0, 0x1988($s3)
    ctx->pc = 0x12e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6536)));
label_12e8a0:
    // 0x12e8a0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_12e8a4:
    if (ctx->pc == 0x12E8A4u) {
        ctx->pc = 0x12E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8A0u;
        // 0x12e8a4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E8A8u;
        goto label_12e8a8;
    }
    ctx->pc = 0x12E8A0u;
    {
        const bool branch_taken_0x12e8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8A0u;
        // 0x12e8a4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8a0) {
            ctx->pc = 0x12E8ACu;
            goto label_12e8ac;
        }
    }
    ctx->pc = 0x12E8A8u;
label_12e8a8:
    // 0x12e8a8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x12e8a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12e8ac:
    // 0x12e8ac: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x12e8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_12e8b0:
    // 0x12e8b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x12e8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12e8b4:
    // 0x12e8b4: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x12e8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
label_12e8b8:
    // 0x12e8b8: 0x108201d0  beq         $a0, $v0, . + 4 + (0x1D0 << 2)
label_12e8bc:
    if (ctx->pc == 0x12E8BCu) {
        ctx->pc = 0x12E8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8B8u;
        // 0x12e8bc: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E8C0u;
        goto label_12e8c0;
    }
    ctx->pc = 0x12E8B8u;
    {
        const bool branch_taken_0x12e8b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x12E8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8B8u;
        // 0x12e8bc: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8b8) {
            ctx->pc = 0x12EFFCu;
            goto label_12effc;
        }
    }
    ctx->pc = 0x12E8C0u;
label_12e8c0:
    // 0x12e8c0: 0x100000ce  b           . + 4 + (0xCE << 2)
label_12e8c4:
    if (ctx->pc == 0x12E8C4u) {
        ctx->pc = 0x12E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8C0u;
        // 0x12e8c4: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E8C8u;
        goto label_12e8c8;
    }
    ctx->pc = 0x12E8C0u;
    {
        const bool branch_taken_0x12e8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8C0u;
        // 0x12e8c4: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8c0) {
            ctx->pc = 0x12EBFCu;
            goto label_12ebfc;
        }
    }
    ctx->pc = 0x12E8C8u;
label_12e8c8:
    // 0x12e8c8: 0x8c434720  lw          $v1, 0x4720($v0)
    ctx->pc = 0x12e8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18208)));
label_12e8cc:
    // 0x12e8cc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_12e8d0:
    if (ctx->pc == 0x12E8D0u) {
        ctx->pc = 0x12E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8CCu;
        // 0x12e8d0: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E8D4u;
        goto label_12e8d4;
    }
    ctx->pc = 0x12E8CCu;
    {
        const bool branch_taken_0x12e8cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x12E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8CCu;
        // 0x12e8d0: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8cc) {
            ctx->pc = 0x12E8E0u;
            goto label_12e8e0;
        }
    }
    ctx->pc = 0x12E8D4u;
label_12e8d4:
    // 0x12e8d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12e8d8:
    // 0x12e8d8: 0x100001c7  b           . + 4 + (0x1C7 << 2)
label_12e8dc:
    if (ctx->pc == 0x12E8DCu) {
        ctx->pc = 0x12E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8D8u;
        // 0x12e8dc: 0xae621524  sw          $v0, 0x1524($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 5412), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E8E0u;
        goto label_12e8e0;
    }
    ctx->pc = 0x12E8D8u;
    {
        const bool branch_taken_0x12e8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8D8u;
        // 0x12e8dc: 0xae621524  sw          $v0, 0x1524($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 5412), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8d8) {
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12E8E0u;
label_12e8e0:
    // 0x12e8e0: 0x8c434728  lw          $v1, 0x4728($v0)
    ctx->pc = 0x12e8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18216)));
label_12e8e4:
    // 0x12e8e4: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_12e8e8:
    if (ctx->pc == 0x12E8E8u) {
        ctx->pc = 0x12E8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8E4u;
        // 0x12e8e8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E8ECu;
        goto label_12e8ec;
    }
    ctx->pc = 0x12E8E4u;
    {
        const bool branch_taken_0x12e8e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x12E8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8E4u;
        // 0x12e8e8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8e4) {
            ctx->pc = 0x12E8F4u;
            goto label_12e8f4;
        }
    }
    ctx->pc = 0x12E8ECu;
label_12e8ec:
    // 0x12e8ec: 0x100001c2  b           . + 4 + (0x1C2 << 2)
label_12e8f0:
    if (ctx->pc == 0x12E8F0u) {
        ctx->pc = 0x12E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8ECu;
        // 0x12e8f0: 0xae601524  sw          $zero, 0x1524($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 5412), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E8F4u;
        goto label_12e8f4;
    }
    ctx->pc = 0x12E8ECu;
    {
        const bool branch_taken_0x12e8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8ECu;
        // 0x12e8f0: 0xae601524  sw          $zero, 0x1524($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 5412), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8ec) {
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12E8F4u;
label_12e8f4:
    // 0x12e8f4: 0x8c434730  lw          $v1, 0x4730($v0)
    ctx->pc = 0x12e8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18224)));
label_12e8f8:
    // 0x12e8f8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_12e8fc:
    if (ctx->pc == 0x12E8FCu) {
        ctx->pc = 0x12E8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8F8u;
        // 0x12e8fc: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E900u;
        goto label_12e900;
    }
    ctx->pc = 0x12E8F8u;
    {
        const bool branch_taken_0x12e8f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x12E8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8F8u;
        // 0x12e8fc: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8f8) {
            ctx->pc = 0x12E90Cu;
            goto label_12e90c;
        }
    }
    ctx->pc = 0x12E900u;
label_12e900:
    // 0x12e900: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12e900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12e904:
    // 0x12e904: 0x100001bc  b           . + 4 + (0x1BC << 2)
label_12e908:
    if (ctx->pc == 0x12E908u) {
        ctx->pc = 0x12E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E904u;
        // 0x12e908: 0xae621528  sw          $v0, 0x1528($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 5416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E90Cu;
        goto label_12e90c;
    }
    ctx->pc = 0x12E904u;
    {
        const bool branch_taken_0x12e904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E904u;
        // 0x12e908: 0xae621528  sw          $v0, 0x1528($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 5416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e904) {
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12E90Cu;
label_12e90c:
    // 0x12e90c: 0x8c434738  lw          $v1, 0x4738($v0)
    ctx->pc = 0x12e90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18232)));
label_12e910:
    // 0x12e910: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_12e914:
    if (ctx->pc == 0x12E914u) {
        ctx->pc = 0x12E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E910u;
        // 0x12e914: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E918u;
        goto label_12e918;
    }
    ctx->pc = 0x12E910u;
    {
        const bool branch_taken_0x12e910 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x12E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E910u;
        // 0x12e914: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e910) {
            ctx->pc = 0x12E920u;
            goto label_12e920;
        }
    }
    ctx->pc = 0x12E918u;
label_12e918:
    // 0x12e918: 0x100001b7  b           . + 4 + (0x1B7 << 2)
label_12e91c:
    if (ctx->pc == 0x12E91Cu) {
        ctx->pc = 0x12E91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E918u;
        // 0x12e91c: 0xae601528  sw          $zero, 0x1528($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 5416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E920u;
        goto label_12e920;
    }
    ctx->pc = 0x12E918u;
    {
        const bool branch_taken_0x12e918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E918u;
        // 0x12e91c: 0xae601528  sw          $zero, 0x1528($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 5416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e918) {
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12E920u;
label_12e920:
    // 0x12e920: 0x8c43bd80  lw          $v1, -0x4280($v0)
    ctx->pc = 0x12e920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950272)));
label_12e924:
    // 0x12e924: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
label_12e928:
    if (ctx->pc == 0x12E928u) {
        ctx->pc = 0x12E928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E924u;
        // 0x12e928: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E92Cu;
        goto label_12e92c;
    }
    ctx->pc = 0x12E924u;
    {
        const bool branch_taken_0x12e924 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x12E928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E924u;
        // 0x12e928: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e924) {
            ctx->pc = 0x12E968u;
            goto label_12e968;
        }
    }
    ctx->pc = 0x12E92Cu;
label_12e92c:
    // 0x12e92c: 0x267016c0  addiu       $s0, $s3, 0x16C0
    ctx->pc = 0x12e92cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 5824));
label_12e930:
    // 0x12e930: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x12e930u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12e934:
    // 0x12e934: 0xc0534c2  jal         func_14D308
label_12e938:
    if (ctx->pc == 0x12E938u) {
        ctx->pc = 0x12E938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E934u;
        // 0x12e938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E93Cu;
        goto label_12e93c;
    }
    ctx->pc = 0x12E934u;
    SET_GPR_U32(ctx, 31, 0x12E93Cu);
    ctx->pc = 0x12E938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E934u;
    // 0x12e938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14D308u, 0x12E934u, 0x12E93Cu)) {
        return;
    }
    ctx->pc = 0x12E93Cu;
label_12e93c:
    // 0x12e93c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12e940:
    // 0x12e940: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12e940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12e944:
    // 0x12e944: 0xc0534b0  jal         func_14D2C0
label_12e948:
    if (ctx->pc == 0x12E948u) {
        ctx->pc = 0x12E948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E944u;
        // 0x12e948: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E94Cu;
        goto label_12e94c;
    }
    ctx->pc = 0x12E944u;
    SET_GPR_U32(ctx, 31, 0x12E94Cu);
    ctx->pc = 0x12E948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E944u;
    // 0x12e948: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D2C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14D2C0u, 0x12E944u, 0x12E94Cu)) {
        return;
    }
    ctx->pc = 0x12E94Cu;
label_12e94c:
    // 0x12e94c: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x12e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_12e950:
    // 0x12e950: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x12e950u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_12e954:
    // 0x12e954: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x12e954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_12e958:
    // 0x12e958: 0x60f809  jalr        $v1
label_12e95c:
    if (ctx->pc == 0x12E95Cu) {
        ctx->pc = 0x12E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E958u;
        // 0x12e95c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E960u;
        goto label_12e960;
    }
    ctx->pc = 0x12E958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12E960u);
        ctx->pc = 0x12E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E958u;
        // 0x12e95c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E958u, 0x12E960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12E960u;
label_12e960:
    // 0x12e960: 0x100001a6  b           . + 4 + (0x1A6 << 2)
label_12e964:
    if (ctx->pc == 0x12E964u) {
        ctx->pc = 0x12E964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E960u;
        // 0x12e964: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E968u;
        goto label_12e968;
    }
    ctx->pc = 0x12E960u;
    {
        const bool branch_taken_0x12e960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E960u;
        // 0x12e964: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e960) {
            ctx->pc = 0x12EFFCu;
            goto label_12effc;
        }
    }
    ctx->pc = 0x12E968u;
label_12e968:
    // 0x12e968: 0x8c43bd88  lw          $v1, -0x4278($v0)
    ctx->pc = 0x12e968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950280)));
label_12e96c:
    // 0x12e96c: 0x1483004d  bne         $a0, $v1, . + 4 + (0x4D << 2)
label_12e970:
    if (ctx->pc == 0x12E970u) {
        ctx->pc = 0x12E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E96Cu;
        // 0x12e970: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E974u;
        goto label_12e974;
    }
    ctx->pc = 0x12E96Cu;
    {
        const bool branch_taken_0x12e96c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x12E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E96Cu;
        // 0x12e970: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e96c) {
            ctx->pc = 0x12EAA4u;
            goto label_12eaa4;
        }
    }
    ctx->pc = 0x12E974u;
label_12e974:
    // 0x12e974: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x12e974u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12e978:
    // 0x12e978: 0x1240001f  beqz        $s2, . + 4 + (0x1F << 2)
label_12e97c:
    if (ctx->pc == 0x12E97Cu) {
        ctx->pc = 0x12E97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E978u;
        // 0x12e97c: 0x267516c0  addiu       $s5, $s3, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 5824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E980u;
        goto label_12e980;
    }
    ctx->pc = 0x12E978u;
    {
        const bool branch_taken_0x12e978 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E978u;
        // 0x12e97c: 0x267516c0  addiu       $s5, $s3, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 5824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e978) {
            ctx->pc = 0x12E9F8u;
            goto label_12e9f8;
        }
    }
    ctx->pc = 0x12E980u;
label_12e980:
    // 0x12e980: 0xc053450  jal         func_14D140
label_12e984:
    if (ctx->pc == 0x12E984u) {
        ctx->pc = 0x12E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E980u;
        // 0x12e984: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E988u;
        goto label_12e988;
    }
    ctx->pc = 0x12E980u;
    SET_GPR_U32(ctx, 31, 0x12E988u);
    ctx->pc = 0x12E984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E980u;
    // 0x12e984: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14D140u, 0x12E980u, 0x12E988u)) {
        return;
    }
    ctx->pc = 0x12E988u;
label_12e988:
    // 0x12e988: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_12e98c:
    if (ctx->pc == 0x12E98Cu) {
        ctx->pc = 0x12E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E988u;
        // 0x12e98c: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E990u;
        goto label_12e990;
    }
    ctx->pc = 0x12E988u;
    {
        const bool branch_taken_0x12e988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e988) {
            ctx->pc = 0x12E98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E988u;
            // 0x12e98c: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E9FCu;
            goto label_12e9fc;
        }
    }
    ctx->pc = 0x12E990u;
label_12e990:
    // 0x12e990: 0xc053450  jal         func_14D140
label_12e994:
    if (ctx->pc == 0x12E994u) {
        ctx->pc = 0x12E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E990u;
        // 0x12e994: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E998u;
        goto label_12e998;
    }
    ctx->pc = 0x12E990u;
    SET_GPR_U32(ctx, 31, 0x12E998u);
    ctx->pc = 0x12E994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E990u;
    // 0x12e994: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14D140u, 0x12E990u, 0x12E998u)) {
        return;
    }
    ctx->pc = 0x12E998u;
label_12e998:
    // 0x12e998: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_12e99c:
    if (ctx->pc == 0x12E99Cu) {
        ctx->pc = 0x12E9A0u;
        goto label_12e9a0;
    }
    ctx->pc = 0x12E998u;
    {
        const bool branch_taken_0x12e998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e998) {
            ctx->pc = 0x12E9B0u;
            goto label_12e9b0;
        }
    }
    ctx->pc = 0x12E9A0u;
label_12e9a0:
    // 0x12e9a0: 0xc053450  jal         func_14D140
label_12e9a4:
    if (ctx->pc == 0x12E9A4u) {
        ctx->pc = 0x12E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9A0u;
        // 0x12e9a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E9A8u;
        goto label_12e9a8;
    }
    ctx->pc = 0x12E9A0u;
    SET_GPR_U32(ctx, 31, 0x12E9A8u);
    ctx->pc = 0x12E9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E9A0u;
    // 0x12e9a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14D140u, 0x12E9A0u, 0x12E9A8u)) {
        return;
    }
    ctx->pc = 0x12E9A8u;
label_12e9a8:
    // 0x12e9a8: 0x10000004  b           . + 4 + (0x4 << 2)
label_12e9ac:
    if (ctx->pc == 0x12E9ACu) {
        ctx->pc = 0x12E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9A8u;
        // 0x12e9ac: 0x24540030  addiu       $s4, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E9B0u;
        goto label_12e9b0;
    }
    ctx->pc = 0x12E9A8u;
    {
        const bool branch_taken_0x12e9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9A8u;
        // 0x12e9ac: 0x24540030  addiu       $s4, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e9a8) {
            ctx->pc = 0x12E9BCu;
            goto label_12e9bc;
        }
    }
    ctx->pc = 0x12E9B0u;
label_12e9b0:
    // 0x12e9b0: 0xc04f0cc  jal         func_13C330
label_12e9b4:
    if (ctx->pc == 0x12E9B4u) {
        ctx->pc = 0x12E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9B0u;
        // 0x12e9b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E9B8u;
        goto label_12e9b8;
    }
    ctx->pc = 0x12E9B0u;
    SET_GPR_U32(ctx, 31, 0x12E9B8u);
    ctx->pc = 0x12E9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E9B0u;
    // 0x12e9b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x12E9B0u, 0x12E9B8u)) {
        return;
    }
    ctx->pc = 0x12E9B8u;
label_12e9b8:
    // 0x12e9b8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12e9b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e9bc:
    // 0x12e9bc: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x12e9bcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
label_12e9c0:
    // 0x12e9c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12e9c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12e9c4:
    // 0x12e9c4: 0x8e248b2c  lw          $a0, -0x74D4($s1)
    ctx->pc = 0x12e9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937388)));
label_12e9c8:
    // 0x12e9c8: 0xc0640b8  jal         func_1902E0
label_12e9cc:
    if (ctx->pc == 0x12E9CCu) {
        ctx->pc = 0x12E9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9C8u;
        // 0x12e9cc: 0x26700310  addiu       $s0, $s3, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E9D0u;
        goto label_12e9d0;
    }
    ctx->pc = 0x12E9C8u;
    SET_GPR_U32(ctx, 31, 0x12E9D0u);
    ctx->pc = 0x12E9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E9C8u;
    // 0x12e9cc: 0x26700310  addiu       $s0, $s3, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1902E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1902E0u, 0x12E9C8u, 0x12E9D0u)) {
        return;
    }
    ctx->pc = 0x12E9D0u;
label_12e9d0:
    // 0x12e9d0: 0x8c4500a4  lw          $a1, 0xA4($v0)
    ctx->pc = 0x12e9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_12e9d4:
    // 0x12e9d4: 0xc043ce6  jal         func_10F398
label_12e9d8:
    if (ctx->pc == 0x12E9D8u) {
        ctx->pc = 0x12E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9D4u;
        // 0x12e9d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E9DCu;
        goto label_12e9dc;
    }
    ctx->pc = 0x12E9D4u;
    SET_GPR_U32(ctx, 31, 0x12E9DCu);
    ctx->pc = 0x12E9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E9D4u;
    // 0x12e9d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x12E9D4u, 0x12E9DCu)) {
        return;
    }
    ctx->pc = 0x12E9DCu;
label_12e9dc:
    // 0x12e9dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12e9e0:
    // 0x12e9e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e9e4:
    // 0x12e9e4: 0xc043c7c  jal         func_10F1F0
label_12e9e8:
    if (ctx->pc == 0x12E9E8u) {
        ctx->pc = 0x12E9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9E4u;
        // 0x12e9e8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E9ECu;
        goto label_12e9ec;
    }
    ctx->pc = 0x12E9E4u;
    SET_GPR_U32(ctx, 31, 0x12E9ECu);
    ctx->pc = 0x12E9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E9E4u;
    // 0x12e9e8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F1F0u, 0x12E9E4u, 0x12E9ECu)) {
        return;
    }
    ctx->pc = 0x12E9ECu;
label_12e9ec:
    // 0x12e9ec: 0x8e248b2c  lw          $a0, -0x74D4($s1)
    ctx->pc = 0x12e9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937388)));
label_12e9f0:
    // 0x12e9f0: 0xc0640c6  jal         func_190318
label_12e9f4:
    if (ctx->pc == 0x12E9F4u) {
        ctx->pc = 0x12E9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9F0u;
        // 0x12e9f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E9F8u;
        goto label_12e9f8;
    }
    ctx->pc = 0x12E9F0u;
    SET_GPR_U32(ctx, 31, 0x12E9F8u);
    ctx->pc = 0x12E9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E9F0u;
    // 0x12e9f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190318u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190318u, 0x12E9F0u, 0x12E9F8u)) {
        return;
    }
    ctx->pc = 0x12E9F8u;
label_12e9f8:
    // 0x12e9f8: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x12e9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_12e9fc:
    // 0x12e9fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12e9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12ea00:
    // 0x12ea00: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_12ea04:
    if (ctx->pc == 0x12EA04u) {
        ctx->pc = 0x12EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA00u;
        // 0x12ea04: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EA08u;
        goto label_12ea08;
    }
    ctx->pc = 0x12EA00u;
    {
        const bool branch_taken_0x12ea00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA00u;
        // 0x12ea04: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea00) {
            ctx->pc = 0x12EA18u;
            goto label_12ea18;
        }
    }
    ctx->pc = 0x12EA08u;
label_12ea08:
    // 0x12ea08: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x12ea08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_12ea0c:
    // 0x12ea0c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x12ea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_12ea10:
    // 0x12ea10: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_12ea14:
    if (ctx->pc == 0x12EA14u) {
        ctx->pc = 0x12EA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA10u;
        // 0x12ea14: 0x26621b60  addiu       $v0, $s3, 0x1B60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 7008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EA18u;
        goto label_12ea18;
    }
    ctx->pc = 0x12EA10u;
    {
        const bool branch_taken_0x12ea10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12EA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA10u;
        // 0x12ea14: 0x26621b60  addiu       $v0, $s3, 0x1B60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 7008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea10) {
            ctx->pc = 0x12EA48u;
            goto label_12ea48;
        }
    }
    ctx->pc = 0x12EA18u;
label_12ea18:
    // 0x12ea18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12ea18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12ea1c:
    // 0x12ea1c: 0xc04e40c  jal         func_139030
label_12ea20:
    if (ctx->pc == 0x12EA20u) {
        ctx->pc = 0x12EA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA1Cu;
        // 0x12ea20: 0x26701b60  addiu       $s0, $s3, 0x1B60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 7008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EA24u;
        goto label_12ea24;
    }
    ctx->pc = 0x12EA1Cu;
    SET_GPR_U32(ctx, 31, 0x12EA24u);
    ctx->pc = 0x12EA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EA1Cu;
    // 0x12ea20: 0x26701b60  addiu       $s0, $s3, 0x1B60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 7008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139030u, 0x12EA1Cu, 0x12EA24u)) {
        return;
    }
    ctx->pc = 0x12EA24u;
label_12ea24:
    // 0x12ea24: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x12ea24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_12ea28:
    // 0x12ea28: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x12ea28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_12ea2c:
    // 0x12ea2c: 0x24a5dc70  addiu       $a1, $a1, -0x2390
    ctx->pc = 0x12ea2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958192));
label_12ea30:
    // 0x12ea30: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x12ea30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_12ea34:
    // 0x12ea34: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x12ea34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_12ea38:
    // 0x12ea38: 0x40f809  jalr        $v0
label_12ea3c:
    if (ctx->pc == 0x12EA3Cu) {
        ctx->pc = 0x12EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA38u;
        // 0x12ea3c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EA40u;
        goto label_12ea40;
    }
    ctx->pc = 0x12EA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12EA40u);
        ctx->pc = 0x12EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA38u;
        // 0x12ea3c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EA38u, 0x12EA40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12EA40u;
label_12ea40:
    // 0x12ea40: 0x10000012  b           . + 4 + (0x12 << 2)
label_12ea44:
    if (ctx->pc == 0x12EA44u) {
        ctx->pc = 0x12EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA40u;
        // 0x12ea44: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EA48u;
        goto label_12ea48;
    }
    ctx->pc = 0x12EA40u;
    {
        const bool branch_taken_0x12ea40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA40u;
        // 0x12ea44: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea40) {
            ctx->pc = 0x12EA8Cu;
            goto label_12ea8c;
        }
    }
    ctx->pc = 0x12EA48u;
label_12ea48:
    // 0x12ea48: 0xc6601b60  lwc1        $f0, 0x1B60($s3)
    ctx->pc = 0x12ea48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 7008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ea4c:
    // 0x12ea4c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x12ea4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12ea50:
    // 0x12ea50: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x12ea50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_12ea54:
    // 0x12ea54: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x12ea54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12ea58:
    // 0x12ea58: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x12ea58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_12ea5c:
    // 0x12ea5c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x12ea5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_12ea60:
    // 0x12ea60: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x12ea60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_12ea64:
    // 0x12ea64: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x12ea64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_12ea68:
    // 0x12ea68: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x12ea68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_12ea6c:
    // 0x12ea6c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x12ea6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_12ea70:
    // 0x12ea70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12ea70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_12ea74:
    // 0x12ea74: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x12ea74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12ea78:
    // 0x12ea78: 0x0  nop
    ctx->pc = 0x12ea78u;
    // NOP
label_12ea7c:
    // 0x12ea7c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_12ea80:
    if (ctx->pc == 0x12EA80u) {
        ctx->pc = 0x12EA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA7Cu;
        // 0x12ea80: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EA84u;
        goto label_12ea84;
    }
    ctx->pc = 0x12EA7Cu;
    {
        const bool branch_taken_0x12ea7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12EA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA7Cu;
        // 0x12ea80: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea7c) {
            ctx->pc = 0x12EA88u;
            goto label_12ea88;
        }
    }
    ctx->pc = 0x12EA84u;
label_12ea84:
    // 0x12ea84: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x12ea84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12ea88:
    // 0x12ea88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12ea88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12ea8c:
    // 0x12ea8c: 0xc053044  jal         func_14C110
label_12ea90:
    if (ctx->pc == 0x12EA90u) {
        ctx->pc = 0x12EA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA8Cu;
        // 0x12ea90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EA94u;
        goto label_12ea94;
    }
    ctx->pc = 0x12EA8Cu;
    SET_GPR_U32(ctx, 31, 0x12EA94u);
    ctx->pc = 0x12EA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EA8Cu;
    // 0x12ea90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C110u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14C110u, 0x12EA8Cu, 0x12EA94u)) {
        return;
    }
    ctx->pc = 0x12EA94u;
label_12ea94:
    // 0x12ea94: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x12ea94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_12ea98:
    // 0x12ea98: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x12ea98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_12ea9c:
    // 0x12ea9c: 0x10000156  b           . + 4 + (0x156 << 2)
label_12eaa0:
    if (ctx->pc == 0x12EAA0u) {
        ctx->pc = 0x12EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA9Cu;
        // 0x12eaa0: 0xae601b60  sw          $zero, 0x1B60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 7008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EAA4u;
        goto label_12eaa4;
    }
    ctx->pc = 0x12EA9Cu;
    {
        const bool branch_taken_0x12ea9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA9Cu;
        // 0x12eaa0: 0xae601b60  sw          $zero, 0x1B60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 7008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea9c) {
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12EAA4u;
label_12eaa4:
    // 0x12eaa4: 0x8c434740  lw          $v1, 0x4740($v0)
    ctx->pc = 0x12eaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18240)));
label_12eaa8:
    // 0x12eaa8: 0x1483002d  bne         $a0, $v1, . + 4 + (0x2D << 2)
label_12eaac:
    if (ctx->pc == 0x12EAACu) {
        ctx->pc = 0x12EAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EAA8u;
        // 0x12eaac: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EAB0u;
        goto label_12eab0;
    }
    ctx->pc = 0x12EAA8u;
    {
        const bool branch_taken_0x12eaa8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x12EAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EAA8u;
        // 0x12eaac: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eaa8) {
            ctx->pc = 0x12EB60u;
            goto label_12eb60;
        }
    }
    ctx->pc = 0x12EAB0u;
label_12eab0:
    // 0x12eab0: 0xae601b5c  sw          $zero, 0x1B5C($s3)
    ctx->pc = 0x12eab0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 7004), GPR_U32(ctx, 0));
label_12eab4:
    // 0x12eab4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x12eab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_12eab8:
    // 0x12eab8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12eab8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12eabc:
    // 0x12eabc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x12eabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12eac0:
    // 0x12eac0: 0x8c528b2c  lw          $s2, -0x74D4($v0)
    ctx->pc = 0x12eac0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
label_12eac4:
    // 0x12eac4: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_12eac8:
    if (ctx->pc == 0x12EAC8u) {
        ctx->pc = 0x12EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EAC4u;
        // 0x12eac8: 0xafa300d0  sw          $v1, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EACCu;
        goto label_12eacc;
    }
    ctx->pc = 0x12EAC4u;
    {
        const bool branch_taken_0x12eac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EAC4u;
        // 0x12eac8: 0xafa300d0  sw          $v1, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eac4) {
            ctx->pc = 0x12EB34u;
            goto label_12eb34;
        }
    }
    ctx->pc = 0x12EACCu;
label_12eacc:
    // 0x12eacc: 0x267016c0  addiu       $s0, $s3, 0x16C0
    ctx->pc = 0x12eaccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 5824));
label_12ead0:
    // 0x12ead0: 0xc053458  jal         func_14D160
label_12ead4:
    if (ctx->pc == 0x12EAD4u) {
        ctx->pc = 0x12EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EAD0u;
        // 0x12ead4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EAD8u;
        goto label_12ead8;
    }
    ctx->pc = 0x12EAD0u;
    SET_GPR_U32(ctx, 31, 0x12EAD8u);
    ctx->pc = 0x12EAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EAD0u;
    // 0x12ead4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14D160u, 0x12EAD0u, 0x12EAD8u)) {
        return;
    }
    ctx->pc = 0x12EAD8u;
label_12ead8:
    // 0x12ead8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_12eadc:
    if (ctx->pc == 0x12EADCu) {
        ctx->pc = 0x12EAE0u;
        goto label_12eae0;
    }
    ctx->pc = 0x12EAD8u;
    {
        const bool branch_taken_0x12ead8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ead8) {
            ctx->pc = 0x12EAF0u;
            goto label_12eaf0;
        }
    }
    ctx->pc = 0x12EAE0u;
label_12eae0:
    // 0x12eae0: 0xc053458  jal         func_14D160
label_12eae4:
    if (ctx->pc == 0x12EAE4u) {
        ctx->pc = 0x12EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EAE0u;
        // 0x12eae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EAE8u;
        goto label_12eae8;
    }
    ctx->pc = 0x12EAE0u;
    SET_GPR_U32(ctx, 31, 0x12EAE8u);
    ctx->pc = 0x12EAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EAE0u;
    // 0x12eae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14D160u, 0x12EAE0u, 0x12EAE8u)) {
        return;
    }
    ctx->pc = 0x12EAE8u;
label_12eae8:
    // 0x12eae8: 0x10000004  b           . + 4 + (0x4 << 2)
label_12eaec:
    if (ctx->pc == 0x12EAECu) {
        ctx->pc = 0x12EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EAE8u;
        // 0x12eaec: 0x24510030  addiu       $s1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EAF0u;
        goto label_12eaf0;
    }
    ctx->pc = 0x12EAE8u;
    {
        const bool branch_taken_0x12eae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EAE8u;
        // 0x12eaec: 0x24510030  addiu       $s1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eae8) {
            ctx->pc = 0x12EAFCu;
            goto label_12eafc;
        }
    }
    ctx->pc = 0x12EAF0u;
label_12eaf0:
    // 0x12eaf0: 0xc04f0cc  jal         func_13C330
label_12eaf4:
    if (ctx->pc == 0x12EAF4u) {
        ctx->pc = 0x12EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EAF0u;
        // 0x12eaf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EAF8u;
        goto label_12eaf8;
    }
    ctx->pc = 0x12EAF0u;
    SET_GPR_U32(ctx, 31, 0x12EAF8u);
    ctx->pc = 0x12EAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EAF0u;
    // 0x12eaf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x12EAF0u, 0x12EAF8u)) {
        return;
    }
    ctx->pc = 0x12EAF8u;
label_12eaf8:
    // 0x12eaf8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12eaf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12eafc:
    // 0x12eafc: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x12eafcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_12eb00:
    // 0x12eb00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12eb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12eb04:
    // 0x12eb04: 0xc0640b8  jal         func_1902E0
label_12eb08:
    if (ctx->pc == 0x12EB08u) {
        ctx->pc = 0x12EB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB04u;
        // 0x12eb08: 0x26700310  addiu       $s0, $s3, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EB0Cu;
        goto label_12eb0c;
    }
    ctx->pc = 0x12EB04u;
    SET_GPR_U32(ctx, 31, 0x12EB0Cu);
    ctx->pc = 0x12EB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EB04u;
    // 0x12eb08: 0x26700310  addiu       $s0, $s3, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1902E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1902E0u, 0x12EB04u, 0x12EB0Cu)) {
        return;
    }
    ctx->pc = 0x12EB0Cu;
label_12eb0c:
    // 0x12eb0c: 0x8c4500a4  lw          $a1, 0xA4($v0)
    ctx->pc = 0x12eb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_12eb10:
    // 0x12eb10: 0xc043ce6  jal         func_10F398
label_12eb14:
    if (ctx->pc == 0x12EB14u) {
        ctx->pc = 0x12EB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB10u;
        // 0x12eb14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EB18u;
        goto label_12eb18;
    }
    ctx->pc = 0x12EB10u;
    SET_GPR_U32(ctx, 31, 0x12EB18u);
    ctx->pc = 0x12EB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EB10u;
    // 0x12eb14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x12EB10u, 0x12EB18u)) {
        return;
    }
    ctx->pc = 0x12EB18u;
label_12eb18:
    // 0x12eb18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12eb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12eb1c:
    // 0x12eb1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12eb1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12eb20:
    // 0x12eb20: 0xc043c7c  jal         func_10F1F0
label_12eb24:
    if (ctx->pc == 0x12EB24u) {
        ctx->pc = 0x12EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB20u;
        // 0x12eb24: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EB28u;
        goto label_12eb28;
    }
    ctx->pc = 0x12EB20u;
    SET_GPR_U32(ctx, 31, 0x12EB28u);
    ctx->pc = 0x12EB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EB20u;
    // 0x12eb24: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F1F0u, 0x12EB20u, 0x12EB28u)) {
        return;
    }
    ctx->pc = 0x12EB28u;
label_12eb28:
    // 0x12eb28: 0x8e848b2c  lw          $a0, -0x74D4($s4)
    ctx->pc = 0x12eb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294937388)));
label_12eb2c:
    // 0x12eb2c: 0xc0640c6  jal         func_190318
label_12eb30:
    if (ctx->pc == 0x12EB30u) {
        ctx->pc = 0x12EB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB2Cu;
        // 0x12eb30: 0x8fa500d0  lw          $a1, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EB34u;
        goto label_12eb34;
    }
    ctx->pc = 0x12EB2Cu;
    SET_GPR_U32(ctx, 31, 0x12EB34u);
    ctx->pc = 0x12EB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EB2Cu;
    // 0x12eb30: 0x8fa500d0  lw          $a1, 0xD0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190318u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190318u, 0x12EB2Cu, 0x12EB34u)) {
        return;
    }
    ctx->pc = 0x12EB34u;
label_12eb34:
    // 0x12eb34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12eb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12eb38:
    // 0x12eb38: 0xc063d48  jal         func_18F520
label_12eb3c:
    if (ctx->pc == 0x12EB3Cu) {
        ctx->pc = 0x12EB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB38u;
        // 0x12eb3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EB40u;
        goto label_12eb40;
    }
    ctx->pc = 0x12EB38u;
    SET_GPR_U32(ctx, 31, 0x12EB40u);
    ctx->pc = 0x12EB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EB38u;
    // 0x12eb3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18F520u, 0x12EB38u, 0x12EB40u)) {
        return;
    }
    ctx->pc = 0x12EB40u;
label_12eb40:
    // 0x12eb40: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x12eb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_12eb44:
    // 0x12eb44: 0x1060012c  beqz        $v1, . + 4 + (0x12C << 2)
label_12eb48:
    if (ctx->pc == 0x12EB48u) {
        ctx->pc = 0x12EB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB44u;
        // 0x12eb48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EB4Cu;
        goto label_12eb4c;
    }
    ctx->pc = 0x12EB44u;
    {
        const bool branch_taken_0x12eb44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB44u;
        // 0x12eb48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb44) {
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12EB4Cu;
label_12eb4c:
    // 0x12eb4c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x12eb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_12eb50:
    // 0x12eb50: 0xc06420a  jal         func_190828
label_12eb54:
    if (ctx->pc == 0x12EB54u) {
        ctx->pc = 0x12EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB50u;
        // 0x12eb54: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EB58u;
        goto label_12eb58;
    }
    ctx->pc = 0x12EB50u;
    SET_GPR_U32(ctx, 31, 0x12EB58u);
    ctx->pc = 0x12EB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EB50u;
    // 0x12eb54: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190828u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190828u, 0x12EB50u, 0x12EB58u)) {
        return;
    }
    ctx->pc = 0x12EB58u;
label_12eb58:
    // 0x12eb58: 0x10000128  b           . + 4 + (0x128 << 2)
label_12eb5c:
    if (ctx->pc == 0x12EB5Cu) {
        ctx->pc = 0x12EB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB58u;
        // 0x12eb5c: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EB60u;
        goto label_12eb60;
    }
    ctx->pc = 0x12EB58u;
    {
        const bool branch_taken_0x12eb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB58u;
        // 0x12eb5c: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb58) {
            ctx->pc = 0x12EFFCu;
            goto label_12effc;
        }
    }
    ctx->pc = 0x12EB60u;
label_12eb60:
    // 0x12eb60: 0x8c4346e8  lw          $v1, 0x46E8($v0)
    ctx->pc = 0x12eb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18152)));
label_12eb64:
    // 0x12eb64: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
label_12eb68:
    if (ctx->pc == 0x12EB68u) {
        ctx->pc = 0x12EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB64u;
        // 0x12eb68: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EB6Cu;
        goto label_12eb6c;
    }
    ctx->pc = 0x12EB64u;
    {
        const bool branch_taken_0x12eb64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x12EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB64u;
        // 0x12eb68: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb64) {
            ctx->pc = 0x12EBACu;
            goto label_12ebac;
        }
    }
    ctx->pc = 0x12EB6Cu;
label_12eb6c:
    // 0x12eb6c: 0x26650320  addiu       $a1, $s3, 0x320
    ctx->pc = 0x12eb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 800));
label_12eb70:
    // 0x12eb70: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x12eb70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_12eb74:
    // 0x12eb74: 0x8ca2083c  lw          $v0, 0x83C($a1)
    ctx->pc = 0x12eb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2108)));
label_12eb78:
    // 0x12eb78: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x12eb78u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
label_12eb7c:
    // 0x12eb7c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12eb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_12eb80:
    // 0x12eb80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12eb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_12eb84:
    // 0x12eb84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_12eb88:
    if (ctx->pc == 0x12EB88u) {
        ctx->pc = 0x12EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB84u;
        // 0x12eb88: 0x3484ffff  ori         $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EB8Cu;
        goto label_12eb8c;
    }
    ctx->pc = 0x12EB84u;
    {
        const bool branch_taken_0x12eb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB84u;
        // 0x12eb88: 0x3484ffff  ori         $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb84) {
            ctx->pc = 0x12EBA0u;
            goto label_12eba0;
        }
    }
    ctx->pc = 0x12EB8Cu;
label_12eb8c:
    // 0x12eb8c: 0x8ca2080c  lw          $v0, 0x80C($a1)
    ctx->pc = 0x12eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2060)));
label_12eb90:
    // 0x12eb90: 0x8ca30848  lw          $v1, 0x848($a1)
    ctx->pc = 0x12eb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2120)));
label_12eb94:
    // 0x12eb94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12eb94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_12eb98:
    // 0x12eb98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_12eb9c:
    // 0x12eb9c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x12eb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12eba0:
    // 0x12eba0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x12eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12eba4:
    // 0x12eba4: 0x10000114  b           . + 4 + (0x114 << 2)
label_12eba8:
    if (ctx->pc == 0x12EBA8u) {
        ctx->pc = 0x12EBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EBA4u;
        // 0x12eba8: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EBACu;
        goto label_12ebac;
    }
    ctx->pc = 0x12EBA4u;
    {
        const bool branch_taken_0x12eba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EBA4u;
        // 0x12eba8: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eba4) {
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12EBACu;
label_12ebac:
    // 0x12ebac: 0x8c43bcf0  lw          $v1, -0x4310($v0)
    ctx->pc = 0x12ebacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950128)));
label_12ebb0:
    // 0x12ebb0: 0x1483001a  bne         $a0, $v1, . + 4 + (0x1A << 2)
label_12ebb4:
    if (ctx->pc == 0x12EBB4u) {
        ctx->pc = 0x12EBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EBB0u;
        // 0x12ebb4: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EBB8u;
        goto label_12ebb8;
    }
    ctx->pc = 0x12EBB0u;
    {
        const bool branch_taken_0x12ebb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x12EBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EBB0u;
        // 0x12ebb4: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ebb0) {
            ctx->pc = 0x12EC1Cu;
            goto label_12ec1c;
        }
    }
    ctx->pc = 0x12EBB8u;
label_12ebb8:
    // 0x12ebb8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x12ebb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12ebbc:
    // 0x12ebbc: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_12ebc0:
    if (ctx->pc == 0x12EBC0u) {
        ctx->pc = 0x12EBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EBBCu;
        // 0x12ebc0: 0xae601870  sw          $zero, 0x1870($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 6256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EBC4u;
        goto label_12ebc4;
    }
    ctx->pc = 0x12EBBCu;
    {
        const bool branch_taken_0x12ebbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ebbc) {
            ctx->pc = 0x12EBC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EBBCu;
            // 0x12ebc0: 0xae601870  sw          $zero, 0x1870($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 6256), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EBD0u;
            goto label_12ebd0;
        }
    }
    ctx->pc = 0x12EBC4u;
label_12ebc4:
    // 0x12ebc4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x12ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_12ebc8:
    // 0x12ebc8: 0xae621878  sw          $v0, 0x1878($s3)
    ctx->pc = 0x12ebc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6264), GPR_U32(ctx, 2));
label_12ebcc:
    // 0x12ebcc: 0xae601870  sw          $zero, 0x1870($s3)
    ctx->pc = 0x12ebccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6256), GPR_U32(ctx, 0));
label_12ebd0:
    // 0x12ebd0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x12ebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_12ebd4:
    // 0x12ebd4: 0xae601874  sw          $zero, 0x1874($s3)
    ctx->pc = 0x12ebd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6260), GPR_U32(ctx, 0));
label_12ebd8:
    // 0x12ebd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12ebd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12ebdc:
    // 0x12ebdc: 0xc063d48  jal         func_18F520
label_12ebe0:
    if (ctx->pc == 0x12EBE0u) {
        ctx->pc = 0x12EBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EBDCu;
        // 0x12ebe0: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EBE4u;
        goto label_12ebe4;
    }
    ctx->pc = 0x12EBDCu;
    SET_GPR_U32(ctx, 31, 0x12EBE4u);
    ctx->pc = 0x12EBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EBDCu;
    // 0x12ebe0: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18F520u, 0x12EBDCu, 0x12EBE4u)) {
        return;
    }
    ctx->pc = 0x12EBE4u;
label_12ebe4:
    // 0x12ebe4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x12ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_12ebe8:
    // 0x12ebe8: 0x8e0446f8  lw          $a0, 0x46F8($s0)
    ctx->pc = 0x12ebe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18168)));
label_12ebec:
    // 0x12ebec: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x12ebecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6768)));
label_12ebf0:
    // 0x12ebf0: 0x10830102  beq         $a0, $v1, . + 4 + (0x102 << 2)
label_12ebf4:
    if (ctx->pc == 0x12EBF4u) {
        ctx->pc = 0x12EBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EBF0u;
        // 0x12ebf4: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EBF8u;
        goto label_12ebf8;
    }
    ctx->pc = 0x12EBF0u;
    {
        const bool branch_taken_0x12ebf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x12EBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EBF0u;
        // 0x12ebf4: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ebf0) {
            ctx->pc = 0x12EFFCu;
            goto label_12effc;
        }
    }
    ctx->pc = 0x12EBF8u;
label_12ebf8:
    // 0x12ebf8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x12ebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12ebfc:
    // 0x12ebfc: 0x104000ff  beqz        $v0, . + 4 + (0xFF << 2)
label_12ec00:
    if (ctx->pc == 0x12EC00u) {
        ctx->pc = 0x12EC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EBFCu;
        // 0x12ec00: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EC04u;
        goto label_12ec04;
    }
    ctx->pc = 0x12EBFCu;
    {
        const bool branch_taken_0x12ebfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EBFCu;
        // 0x12ec00: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ebfc) {
            ctx->pc = 0x12EFFCu;
            goto label_12effc;
        }
    }
    ctx->pc = 0x12EC04u;
label_12ec04:
    // 0x12ec04: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x12ec04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_12ec08:
    // 0x12ec08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12ec08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12ec0c:
    // 0x12ec0c: 0xc07fd18  jal         func_1FF460
label_12ec10:
    if (ctx->pc == 0x12EC10u) {
        ctx->pc = 0x12EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC0Cu;
        // 0x12ec10: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EC14u;
        goto label_12ec14;
    }
    ctx->pc = 0x12EC0Cu;
    SET_GPR_U32(ctx, 31, 0x12EC14u);
    ctx->pc = 0x12EC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EC0Cu;
    // 0x12ec10: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x12EC0Cu, 0x12EC14u)) {
        return;
    }
    ctx->pc = 0x12EC14u;
label_12ec14:
    // 0x12ec14: 0x100000f9  b           . + 4 + (0xF9 << 2)
label_12ec18:
    if (ctx->pc == 0x12EC18u) {
        ctx->pc = 0x12EC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC14u;
        // 0x12ec18: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EC1Cu;
        goto label_12ec1c;
    }
    ctx->pc = 0x12EC14u;
    {
        const bool branch_taken_0x12ec14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC14u;
        // 0x12ec18: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec14) {
            ctx->pc = 0x12EFFCu;
            goto label_12effc;
        }
    }
    ctx->pc = 0x12EC1Cu;
label_12ec1c:
    // 0x12ec1c: 0x8c43bcf8  lw          $v1, -0x4308($v0)
    ctx->pc = 0x12ec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
label_12ec20:
    // 0x12ec20: 0x148300b0  bne         $a0, $v1, . + 4 + (0xB0 << 2)
label_12ec24:
    if (ctx->pc == 0x12EC24u) {
        ctx->pc = 0x12EC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC20u;
        // 0x12ec24: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EC28u;
        goto label_12ec28;
    }
    ctx->pc = 0x12EC20u;
    {
        const bool branch_taken_0x12ec20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x12EC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC20u;
        // 0x12ec24: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec20) {
            ctx->pc = 0x12EEE4u;
            goto label_12eee4;
        }
    }
    ctx->pc = 0x12EC28u;
label_12ec28:
    // 0x12ec28: 0x26640320  addiu       $a0, $s3, 0x320
    ctx->pc = 0x12ec28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 800));
label_12ec2c:
    // 0x12ec2c: 0xc068218  jal         func_1A0860
label_12ec30:
    if (ctx->pc == 0x12EC30u) {
        ctx->pc = 0x12EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC2Cu;
        // 0x12ec30: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EC34u;
        goto label_12ec34;
    }
    ctx->pc = 0x12EC2Cu;
    SET_GPR_U32(ctx, 31, 0x12EC34u);
    ctx->pc = 0x12EC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EC2Cu;
    // 0x12ec30: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0860u, 0x12EC2Cu, 0x12EC34u)) {
        return;
    }
    ctx->pc = 0x12EC34u;
label_12ec34:
    // 0x12ec34: 0x8e048358  lw          $a0, -0x7CA8($s0)
    ctx->pc = 0x12ec34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935384)));
label_12ec38:
    // 0x12ec38: 0xc065c68  jal         func_1971A0
label_12ec3c:
    if (ctx->pc == 0x12EC3Cu) {
        ctx->pc = 0x12EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC38u;
        // 0x12ec3c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EC40u;
        goto label_12ec40;
    }
    ctx->pc = 0x12EC38u;
    SET_GPR_U32(ctx, 31, 0x12EC40u);
    ctx->pc = 0x12EC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EC38u;
    // 0x12ec3c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x12EC38u, 0x12EC40u)) {
        return;
    }
    ctx->pc = 0x12EC40u;
label_12ec40:
    // 0x12ec40: 0x1040009a  beqz        $v0, . + 4 + (0x9A << 2)
label_12ec44:
    if (ctx->pc == 0x12EC44u) {
        ctx->pc = 0x12EC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC40u;
        // 0x12ec44: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EC48u;
        goto label_12ec48;
    }
    ctx->pc = 0x12EC40u;
    {
        const bool branch_taken_0x12ec40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC40u;
        // 0x12ec44: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec40) {
            ctx->pc = 0x12EEACu;
            goto label_12eeac;
        }
    }
    ctx->pc = 0x12EC48u;
label_12ec48:
    // 0x12ec48: 0x8e620198  lw          $v0, 0x198($s3)
    ctx->pc = 0x12ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 408)));
label_12ec4c:
    // 0x12ec4c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_12ec50:
    if (ctx->pc == 0x12EC50u) {
        ctx->pc = 0x12EC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC4Cu;
        // 0x12ec50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EC54u;
        goto label_12ec54;
    }
    ctx->pc = 0x12EC4Cu;
    {
        const bool branch_taken_0x12ec4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC4Cu;
        // 0x12ec50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec4c) {
            ctx->pc = 0x12EC9Cu;
            goto label_12ec9c;
        }
    }
    ctx->pc = 0x12EC54u;
label_12ec54:
    // 0x12ec54: 0xc040688  jal         func_101A20
label_12ec58:
    if (ctx->pc == 0x12EC58u) {
        ctx->pc = 0x12EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC54u;
        // 0x12ec58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EC5Cu;
        goto label_12ec5c;
    }
    ctx->pc = 0x12EC54u;
    SET_GPR_U32(ctx, 31, 0x12EC5Cu);
    ctx->pc = 0x12EC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EC54u;
    // 0x12ec58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A20u, 0x12EC54u, 0x12EC5Cu)) {
        return;
    }
    ctx->pc = 0x12EC5Cu;
label_12ec5c:
    // 0x12ec5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12ec5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12ec60:
    // 0x12ec60: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x12ec60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_12ec64:
    // 0x12ec64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12ec64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_12ec68:
    // 0x12ec68: 0x5082000d  beql        $a0, $v0, . + 4 + (0xD << 2)
label_12ec6c:
    if (ctx->pc == 0x12EC6Cu) {
        ctx->pc = 0x12EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC68u;
        // 0x12ec6c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EC70u;
        goto label_12ec70;
    }
    ctx->pc = 0x12EC68u;
    {
        const bool branch_taken_0x12ec68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x12ec68) {
            ctx->pc = 0x12EC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EC68u;
            // 0x12ec6c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12ECA0u;
            goto label_12eca0;
        }
    }
    ctx->pc = 0x12EC70u;
label_12ec70:
    // 0x12ec70: 0x8e630198  lw          $v1, 0x198($s3)
    ctx->pc = 0x12ec70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 408)));
label_12ec74:
    // 0x12ec74: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x12ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_12ec78:
    // 0x12ec78: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x12ec78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_12ec7c:
    // 0x12ec7c: 0x2442004c  addiu       $v0, $v0, 0x4C
    ctx->pc = 0x12ec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
label_12ec80:
    // 0x12ec80: 0x10000007  b           . + 4 + (0x7 << 2)
label_12ec84:
    if (ctx->pc == 0x12EC84u) {
        ctx->pc = 0x12EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC80u;
        // 0x12ec84: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EC88u;
        goto label_12ec88;
    }
    ctx->pc = 0x12EC80u;
    {
        const bool branch_taken_0x12ec80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC80u;
        // 0x12ec84: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec80) {
            ctx->pc = 0x12ECA0u;
            goto label_12eca0;
        }
    }
    ctx->pc = 0x12EC88u;
label_12ec88:
    // 0x12ec88: 0x0  nop
    ctx->pc = 0x12ec88u;
    // NOP
label_12ec8c:
    // 0x12ec8c: 0x0  nop
    ctx->pc = 0x12ec8cu;
    // NOP
label_12ec90:
    // 0x12ec90: 0x4602a103  div.s       $f4, $f20, $f2
    ctx->pc = 0x12ec90u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[2]);
label_12ec94:
    // 0x12ec94: 0x1000006e  b           . + 4 + (0x6E << 2)
label_12ec98:
    if (ctx->pc == 0x12EC98u) {
        ctx->pc = 0x12EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC94u;
        // 0x12ec98: 0xc6400000  lwc1        $f0, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EC9Cu;
        goto label_12ec9c;
    }
    ctx->pc = 0x12EC94u;
    {
        const bool branch_taken_0x12ec94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC94u;
        // 0x12ec98: 0xc6400000  lwc1        $f0, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec94) {
            ctx->pc = 0x12EE50u;
            goto label_12ee50;
        }
    }
    ctx->pc = 0x12EC9Cu;
label_12ec9c:
    // 0x12ec9c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x12ec9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12eca0:
    // 0x12eca0: 0x10600081  beqz        $v1, . + 4 + (0x81 << 2)
label_12eca4:
    if (ctx->pc == 0x12ECA4u) {
        ctx->pc = 0x12ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECA0u;
        // 0x12eca4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ECA8u;
        goto label_12eca8;
    }
    ctx->pc = 0x12ECA0u;
    {
        const bool branch_taken_0x12eca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECA0u;
        // 0x12eca4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eca0) {
            ctx->pc = 0x12EEA8u;
            goto label_12eea8;
        }
    }
    ctx->pc = 0x12ECA8u;
label_12eca8:
    // 0x12eca8: 0xc4690008  lwc1        $f9, 0x8($v1)
    ctx->pc = 0x12eca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_12ecac:
    // 0x12ecac: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x12ecacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12ecb0:
    // 0x12ecb0: 0x46094882  mul.s       $f2, $f9, $f9
    ctx->pc = 0x12ecb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
label_12ecb4:
    // 0x12ecb4: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x12ecb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12ecb8:
    // 0x12ecb8: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x12ecb8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_12ecbc:
    // 0x12ecbc: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x12ecbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ecc0:
    // 0x12ecc0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x12ecc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_12ecc4:
    // 0x12ecc4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x12ecc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_12ecc8:
    // 0x12ecc8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x12ecc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_12eccc:
    // 0x12eccc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x12ecccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_12ecd0:
    // 0x12ecd0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x12ecd0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_12ecd4:
    // 0x12ecd4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x12ecd4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_12ecd8:
    // 0x12ecd8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x12ecd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_12ecdc:
    // 0x12ecdc: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x12ecdcu;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[4], ctx->f[0]);
label_12ece0:
    // 0x12ece0: 0x46044a42  mul.s       $f9, $f9, $f4
    ctx->pc = 0x12ece0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[4]);
label_12ece4:
    // 0x12ece4: 0xe7a90000  swc1        $f9, 0x0($sp)
    ctx->pc = 0x12ece4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_12ece8:
    // 0x12ece8: 0xc468000c  lwc1        $f8, 0xC($v1)
    ctx->pc = 0x12ece8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_12ecec:
    // 0x12ecec: 0x46044202  mul.s       $f8, $f8, $f4
    ctx->pc = 0x12ececu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
label_12ecf0:
    // 0x12ecf0: 0xe7a80004  swc1        $f8, 0x4($sp)
    ctx->pc = 0x12ecf0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_12ecf4:
    // 0x12ecf4: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x12ecf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12ecf8:
    // 0x12ecf8: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x12ecf8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_12ecfc:
    // 0x12ecfc: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x12ecfcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_12ed00:
    // 0x12ed00: 0xc4650014  lwc1        $f5, 0x14($v1)
    ctx->pc = 0x12ed00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_12ed04:
    // 0x12ed04: 0x46054942  mul.s       $f5, $f9, $f5
    ctx->pc = 0x12ed04u;
    ctx->f[5] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
label_12ed08:
    // 0x12ed08: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x12ed08u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_12ed0c:
    // 0x12ed0c: 0xc4660014  lwc1        $f6, 0x14($v1)
    ctx->pc = 0x12ed0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_12ed10:
    // 0x12ed10: 0x46064182  mul.s       $f6, $f8, $f6
    ctx->pc = 0x12ed10u;
    ctx->f[6] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
label_12ed14:
    // 0x12ed14: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x12ed14u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_12ed18:
    // 0x12ed18: 0xc4670014  lwc1        $f7, 0x14($v1)
    ctx->pc = 0x12ed18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_12ed1c:
    // 0x12ed1c: 0x460719c2  mul.s       $f7, $f3, $f7
    ctx->pc = 0x12ed1cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
label_12ed20:
    // 0x12ed20: 0xe7a70018  swc1        $f7, 0x18($sp)
    ctx->pc = 0x12ed20u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_12ed24:
    // 0x12ed24: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x12ed24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_12ed28:
    // 0x12ed28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12ed28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12ed2c:
    // 0x12ed2c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12ed2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_12ed30:
    // 0x12ed30: 0x46092102  mul.s       $f4, $f4, $f9
    ctx->pc = 0x12ed30u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
label_12ed34:
    // 0x12ed34: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x12ed34u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_12ed38:
    // 0x12ed38: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x12ed38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12ed3c:
    // 0x12ed3c: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x12ed3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
label_12ed40:
    // 0x12ed40: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x12ed40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_12ed44:
    // 0x12ed44: 0x46022280  add.s       $f10, $f4, $f2
    ctx->pc = 0x12ed44u;
    ctx->f[10] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_12ed48:
    // 0x12ed48: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x12ed48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ed4c:
    // 0x12ed4c: 0x460aa281  sub.s       $f10, $f20, $f10
    ctx->pc = 0x12ed4cu;
    ctx->f[10] = FPU_SUB_S(ctx->f[20], ctx->f[10]);
label_12ed50:
    // 0x12ed50: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x12ed50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_12ed54:
    // 0x12ed54: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x12ed54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_12ed58:
    // 0x12ed58: 0x46040100  add.s       $f4, $f0, $f4
    ctx->pc = 0x12ed58u;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_12ed5c:
    // 0x12ed5c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x12ed5cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_12ed60:
    // 0x12ed60: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x12ed60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12ed64:
    // 0x12ed64: 0x4604a101  sub.s       $f4, $f20, $f4
    ctx->pc = 0x12ed64u;
    ctx->f[4] = FPU_SUB_S(ctx->f[20], ctx->f[4]);
label_12ed68:
    // 0x12ed68: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x12ed68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_12ed6c:
    // 0x12ed6c: 0x4602a081  sub.s       $f2, $f20, $f2
    ctx->pc = 0x12ed6cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
label_12ed70:
    // 0x12ed70: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x12ed70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_12ed74:
    // 0x12ed74: 0x46050ac1  sub.s       $f11, $f1, $f5
    ctx->pc = 0x12ed74u;
    ctx->f[11] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_12ed78:
    // 0x12ed78: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x12ed78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_12ed7c:
    // 0x12ed7c: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x12ed7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ed80:
    // 0x12ed80: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x12ed80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
label_12ed84:
    // 0x12ed84: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x12ed84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_12ed88:
    // 0x12ed88: 0x46060140  add.s       $f5, $f0, $f6
    ctx->pc = 0x12ed88u;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_12ed8c:
    // 0x12ed8c: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x12ed8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
label_12ed90:
    // 0x12ed90: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x12ed90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12ed94:
    // 0x12ed94: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x12ed94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_12ed98:
    // 0x12ed98: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x12ed98u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
label_12ed9c:
    // 0x12ed9c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x12ed9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_12eda0:
    // 0x12eda0: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x12eda0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_12eda4:
    // 0x12eda4: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x12eda4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_12eda8:
    // 0x12eda8: 0x46071801  sub.s       $f0, $f3, $f7
    ctx->pc = 0x12eda8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
label_12edac:
    // 0x12edac: 0xe7a50060  swc1        $f5, 0x60($sp)
    ctx->pc = 0x12edacu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_12edb0:
    // 0x12edb0: 0x460719c0  add.s       $f7, $f3, $f7
    ctx->pc = 0x12edb0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
label_12edb4:
    // 0x12edb4: 0xe7ab0064  swc1        $f11, 0x64($sp)
    ctx->pc = 0x12edb4u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_12edb8:
    // 0x12edb8: 0xe7aa0068  swc1        $f10, 0x68($sp)
    ctx->pc = 0x12edb8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_12edbc:
    // 0x12edbc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x12edbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_12edc0:
    // 0x12edc0: 0xe7a70044  swc1        $f7, 0x44($sp)
    ctx->pc = 0x12edc0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_12edc4:
    // 0x12edc4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x12edc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_12edc8:
    // 0x12edc8: 0xe7a300c8  swc1        $f3, 0xC8($sp)
    ctx->pc = 0x12edc8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_12edcc:
    // 0x12edcc: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x12edccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_12edd0:
    // 0x12edd0: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x12edd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_12edd4:
    // 0x12edd4: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x12edd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_12edd8:
    // 0x12edd8: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x12edd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_12eddc:
    // 0x12eddc: 0x8e650210  lw          $a1, 0x210($s3)
    ctx->pc = 0x12eddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
label_12ede0:
    // 0x12ede0: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x12ede0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_12ede4:
    // 0x12ede4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12ede4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12ede8:
    // 0x12ede8: 0xc040698  jal         func_101A60
label_12edec:
    if (ctx->pc == 0x12EDECu) {
        ctx->pc = 0x12EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDE8u;
        // 0x12edec: 0x26721880  addiu       $s2, $s3, 0x1880 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 6272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EDF0u;
        goto label_12edf0;
    }
    ctx->pc = 0x12EDE8u;
    SET_GPR_U32(ctx, 31, 0x12EDF0u);
    ctx->pc = 0x12EDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EDE8u;
    // 0x12edec: 0x26721880  addiu       $s2, $s3, 0x1880 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 6272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A60u, 0x12EDE8u, 0x12EDF0u)) {
        return;
    }
    ctx->pc = 0x12EDF0u;
label_12edf0:
    // 0x12edf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12edf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12edf4:
    // 0x12edf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12edf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12edf8:
    // 0x12edf8: 0xc092d9c  jal         func_24B670
label_12edfc:
    if (ctx->pc == 0x12EDFCu) {
        ctx->pc = 0x12EDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDF8u;
        // 0x12edfc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EE00u;
        goto label_12ee00;
    }
    ctx->pc = 0x12EDF8u;
    SET_GPR_U32(ctx, 31, 0x12EE00u);
    ctx->pc = 0x12EDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EDF8u;
    // 0x12edfc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x12EDF8u, 0x12EE00u)) {
        return;
    }
    ctx->pc = 0x12EE00u;
label_12ee00:
    // 0x12ee00: 0x6ba200a7  ldl         $v0, 0xA7($sp)
    ctx->pc = 0x12ee00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_12ee04:
    // 0x12ee04: 0x6fa200a0  ldr         $v0, 0xA0($sp)
    ctx->pc = 0x12ee04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_12ee08:
    // 0x12ee08: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x12ee08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_12ee0c:
    // 0x12ee0c: 0xb2621887  sdl         $v0, 0x1887($s3)
    ctx->pc = 0x12ee0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 6279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12ee10:
    // 0x12ee10: 0xb6621880  sdr         $v0, 0x1880($s3)
    ctx->pc = 0x12ee10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 6272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12ee14:
    // 0x12ee14: 0xae631888  sw          $v1, 0x1888($s3)
    ctx->pc = 0x12ee14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6280), GPR_U32(ctx, 3));
label_12ee18:
    // 0x12ee18: 0xae601884  sw          $zero, 0x1884($s3)
    ctx->pc = 0x12ee18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6276), GPR_U32(ctx, 0));
label_12ee1c:
    // 0x12ee1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12ee1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12ee20:
    // 0x12ee20: 0xc04642c  jal         func_1190B0
label_12ee24:
    if (ctx->pc == 0x12EE24u) {
        ctx->pc = 0x12EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE20u;
        // 0x12ee24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EE28u;
        goto label_12ee28;
    }
    ctx->pc = 0x12EE20u;
    SET_GPR_U32(ctx, 31, 0x12EE28u);
    ctx->pc = 0x12EE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EE20u;
    // 0x12ee24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x12EE20u, 0x12EE28u)) {
        return;
    }
    ctx->pc = 0x12EE28u;
label_12ee28:
    // 0x12ee28: 0x0  nop
    ctx->pc = 0x12ee28u;
    // NOP
label_12ee2c:
    // 0x12ee2c: 0x0  nop
    ctx->pc = 0x12ee2cu;
    // NOP
label_12ee30:
    // 0x12ee30: 0x46000084  c1          0x84
    ctx->pc = 0x12ee30u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
label_12ee34:
    // 0x12ee34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12ee34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12ee38:
    // 0x12ee38: 0x0  nop
    ctx->pc = 0x12ee38u;
    // NOP
label_12ee3c:
    // 0x12ee3c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x12ee3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12ee40:
    // 0x12ee40: 0x0  nop
    ctx->pc = 0x12ee40u;
    // NOP
label_12ee44:
    // 0x12ee44: 0x4501ff90  bc1t        . + 4 + (-0x70 << 2)
label_12ee48:
    if (ctx->pc == 0x12EE48u) {
        ctx->pc = 0x12EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE44u;
        // 0x12ee48: 0x46001106  mov.s       $f4, $f2 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EE4Cu;
        goto label_12ee4c;
    }
    ctx->pc = 0x12EE44u;
    {
        const bool branch_taken_0x12ee44 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE44u;
        // 0x12ee48: 0x46001106  mov.s       $f4, $f2 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee44) {
            ctx->pc = 0x12EC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ec88;
        }
    }
    ctx->pc = 0x12EE4Cu;
label_12ee4c:
    // 0x12ee4c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x12ee4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ee50:
    // 0x12ee50: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x12ee50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12ee54:
    // 0x12ee54: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x12ee54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12ee58:
    // 0x12ee58: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x12ee58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_12ee5c:
    // 0x12ee5c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x12ee5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_12ee60:
    // 0x12ee60: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x12ee60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_12ee64:
    // 0x12ee64: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x12ee64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_12ee68:
    // 0x12ee68: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x12ee68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_12ee6c:
    // 0x12ee6c: 0xe6420008  swc1        $f2, 0x8($s2)
    ctx->pc = 0x12ee6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_12ee70:
    // 0x12ee70: 0x6a661887  ldl         $a2, 0x1887($s3)
    ctx->pc = 0x12ee70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 6279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_12ee74:
    // 0x12ee74: 0x6e661880  ldr         $a2, 0x1880($s3)
    ctx->pc = 0x12ee74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 6272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_12ee78:
    // 0x12ee78: 0x8e671888  lw          $a3, 0x1888($s3)
    ctx->pc = 0x12ee78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6280)));
label_12ee7c:
    // 0x12ee7c: 0xb2661897  sdl         $a2, 0x1897($s3)
    ctx->pc = 0x12ee7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 6295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12ee80:
    // 0x12ee80: 0xb6661890  sdr         $a2, 0x1890($s3)
    ctx->pc = 0x12ee80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 6288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12ee84:
    // 0x12ee84: 0xae671898  sw          $a3, 0x1898($s3)
    ctx->pc = 0x12ee84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6296), GPR_U32(ctx, 7));
label_12ee88:
    // 0x12ee88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12ee88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12ee8c:
    // 0x12ee8c: 0x6a641897  ldl         $a0, 0x1897($s3)
    ctx->pc = 0x12ee8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 6295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_12ee90:
    // 0x12ee90: 0x6e641890  ldr         $a0, 0x1890($s3)
    ctx->pc = 0x12ee90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 6288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_12ee94:
    // 0x12ee94: 0x8e651898  lw          $a1, 0x1898($s3)
    ctx->pc = 0x12ee94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6296)));
label_12ee98:
    // 0x12ee98: 0xb26418a7  sdl         $a0, 0x18A7($s3)
    ctx->pc = 0x12ee98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 6311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12ee9c:
    // 0x12ee9c: 0xb66418a0  sdr         $a0, 0x18A0($s3)
    ctx->pc = 0x12ee9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 6304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12eea0:
    // 0x12eea0: 0xae6518a8  sw          $a1, 0x18A8($s3)
    ctx->pc = 0x12eea0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6312), GPR_U32(ctx, 5));
label_12eea4:
    // 0x12eea4: 0xae6218d0  sw          $v0, 0x18D0($s3)
    ctx->pc = 0x12eea4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6352), GPR_U32(ctx, 2));
label_12eea8:
    // 0x12eea8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x12eea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_12eeac:
    // 0x12eeac: 0x8c448b2c  lw          $a0, -0x74D4($v0)
    ctx->pc = 0x12eeacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
label_12eeb0:
    // 0x12eeb0: 0xc063d48  jal         func_18F520
label_12eeb4:
    if (ctx->pc == 0x12EEB4u) {
        ctx->pc = 0x12EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EEB0u;
        // 0x12eeb4: 0x8c850070  lw          $a1, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EEB8u;
        goto label_12eeb8;
    }
    ctx->pc = 0x12EEB0u;
    SET_GPR_U32(ctx, 31, 0x12EEB8u);
    ctx->pc = 0x12EEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EEB0u;
    // 0x12eeb4: 0x8c850070  lw          $a1, 0x70($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18F520u, 0x12EEB0u, 0x12EEB8u)) {
        return;
    }
    ctx->pc = 0x12EEB8u;
label_12eeb8:
    // 0x12eeb8: 0x8e621874  lw          $v0, 0x1874($s3)
    ctx->pc = 0x12eeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6260)));
label_12eebc:
    // 0x12eebc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_12eec0:
    if (ctx->pc == 0x12EEC0u) {
        ctx->pc = 0x12EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EEBCu;
        // 0x12eec0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EEC4u;
        goto label_12eec4;
    }
    ctx->pc = 0x12EEBCu;
    {
        const bool branch_taken_0x12eebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EEBCu;
        // 0x12eec0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eebc) {
            ctx->pc = 0x12EECCu;
            goto label_12eecc;
        }
    }
    ctx->pc = 0x12EEC4u;
label_12eec4:
    // 0x12eec4: 0xae631864  sw          $v1, 0x1864($s3)
    ctx->pc = 0x12eec4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6244), GPR_U32(ctx, 3));
label_12eec8:
    // 0x12eec8: 0xae631860  sw          $v1, 0x1860($s3)
    ctx->pc = 0x12eec8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6240), GPR_U32(ctx, 3));
label_12eecc:
    // 0x12eecc: 0xae631864  sw          $v1, 0x1864($s3)
    ctx->pc = 0x12eeccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6244), GPR_U32(ctx, 3));
label_12eed0:
    // 0x12eed0: 0xae631874  sw          $v1, 0x1874($s3)
    ctx->pc = 0x12eed0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6260), GPR_U32(ctx, 3));
label_12eed4:
    // 0x12eed4: 0xae631870  sw          $v1, 0x1870($s3)
    ctx->pc = 0x12eed4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6256), GPR_U32(ctx, 3));
label_12eed8:
    // 0x12eed8: 0xae631878  sw          $v1, 0x1878($s3)
    ctx->pc = 0x12eed8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6264), GPR_U32(ctx, 3));
label_12eedc:
    // 0x12eedc: 0x10000046  b           . + 4 + (0x46 << 2)
label_12eee0:
    if (ctx->pc == 0x12EEE0u) {
        ctx->pc = 0x12EEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EEDCu;
        // 0x12eee0: 0xae631860  sw          $v1, 0x1860($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 6240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EEE4u;
        goto label_12eee4;
    }
    ctx->pc = 0x12EEDCu;
    {
        const bool branch_taken_0x12eedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EEDCu;
        // 0x12eee0: 0xae631860  sw          $v1, 0x1860($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 6240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eedc) {
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12EEE4u;
label_12eee4:
    // 0x12eee4: 0x8c43f8e8  lw          $v1, -0x718($v0)
    ctx->pc = 0x12eee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965480)));
label_12eee8:
    // 0x12eee8: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
label_12eeec:
    if (ctx->pc == 0x12EEECu) {
        ctx->pc = 0x12EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EEE8u;
        // 0x12eeec: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EEF0u;
        goto label_12eef0;
    }
    ctx->pc = 0x12EEE8u;
    {
        const bool branch_taken_0x12eee8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x12EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EEE8u;
        // 0x12eeec: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eee8) {
            ctx->pc = 0x12EF20u;
            goto label_12ef20;
        }
    }
    ctx->pc = 0x12EEF0u;
label_12eef0:
    // 0x12eef0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x12eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12eef4:
    // 0x12eef4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_12eef8:
    if (ctx->pc == 0x12EEF8u) {
        ctx->pc = 0x12EEFCu;
        goto label_12eefc;
    }
    ctx->pc = 0x12EEF4u;
    {
        const bool branch_taken_0x12eef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eef4) {
            ctx->pc = 0x12EF10u;
            goto label_12ef10;
        }
    }
    ctx->pc = 0x12EEFCu;
label_12eefc:
    // 0x12eefc: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x12eefcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
label_12ef00:
    // 0x12ef00: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x12ef00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_12ef04:
    // 0x12ef04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12ef04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12ef08:
    // 0x12ef08: 0x1000003b  b           . + 4 + (0x3B << 2)
label_12ef0c:
    if (ctx->pc == 0x12EF0Cu) {
        ctx->pc = 0x12EF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF08u;
        // 0x12ef0c: 0xe6600f5c  swc1        $f0, 0xF5C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3932), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EF10u;
        goto label_12ef10;
    }
    ctx->pc = 0x12EF08u;
    {
        const bool branch_taken_0x12ef08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF08u;
        // 0x12ef0c: 0xe6600f5c  swc1        $f0, 0xF5C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3932), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef08) {
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12EF10u;
label_12ef10:
    // 0x12ef10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12ef10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12ef14:
    // 0x12ef14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12ef14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12ef18:
    // 0x12ef18: 0x10000037  b           . + 4 + (0x37 << 2)
label_12ef1c:
    if (ctx->pc == 0x12EF1Cu) {
        ctx->pc = 0x12EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF18u;
        // 0x12ef1c: 0xe6600f5c  swc1        $f0, 0xF5C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3932), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EF20u;
        goto label_12ef20;
    }
    ctx->pc = 0x12EF18u;
    {
        const bool branch_taken_0x12ef18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF18u;
        // 0x12ef1c: 0xe6600f5c  swc1        $f0, 0xF5C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3932), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef18) {
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12EF20u;
label_12ef20:
    // 0x12ef20: 0x8c43f8f0  lw          $v1, -0x710($v0)
    ctx->pc = 0x12ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965488)));
label_12ef24:
    // 0x12ef24: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_12ef28:
    if (ctx->pc == 0x12EF28u) {
        ctx->pc = 0x12EF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF24u;
        // 0x12ef28: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EF2Cu;
        goto label_12ef2c;
    }
    ctx->pc = 0x12EF24u;
    {
        const bool branch_taken_0x12ef24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x12EF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF24u;
        // 0x12ef28: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef24) {
            ctx->pc = 0x12EF48u;
            goto label_12ef48;
        }
    }
    ctx->pc = 0x12EF2Cu;
label_12ef2c:
    // 0x12ef2c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x12ef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12ef30:
    // 0x12ef30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_12ef34:
    if (ctx->pc == 0x12EF34u) {
        ctx->pc = 0x12EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF30u;
        // 0x12ef34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EF38u;
        goto label_12ef38;
    }
    ctx->pc = 0x12EF30u;
    {
        const bool branch_taken_0x12ef30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF30u;
        // 0x12ef34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef30) {
            ctx->pc = 0x12EF40u;
            goto label_12ef40;
        }
    }
    ctx->pc = 0x12EF38u;
label_12ef38:
    // 0x12ef38: 0x1000002f  b           . + 4 + (0x2F << 2)
label_12ef3c:
    if (ctx->pc == 0x12EF3Cu) {
        ctx->pc = 0x12EF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF38u;
        // 0x12ef3c: 0xae620f64  sw          $v0, 0xF64($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3940), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EF40u;
        goto label_12ef40;
    }
    ctx->pc = 0x12EF38u;
    {
        const bool branch_taken_0x12ef38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF38u;
        // 0x12ef3c: 0xae620f64  sw          $v0, 0xF64($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3940), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef38) {
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12EF40u;
label_12ef40:
    // 0x12ef40: 0x1000002d  b           . + 4 + (0x2D << 2)
label_12ef44:
    if (ctx->pc == 0x12EF44u) {
        ctx->pc = 0x12EF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF40u;
        // 0x12ef44: 0xae600f64  sw          $zero, 0xF64($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3940), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EF48u;
        goto label_12ef48;
    }
    ctx->pc = 0x12EF40u;
    {
        const bool branch_taken_0x12ef40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF40u;
        // 0x12ef44: 0xae600f64  sw          $zero, 0xF64($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3940), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef40) {
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12EF48u;
label_12ef48:
    // 0x12ef48: 0x8c43f8f8  lw          $v1, -0x708($v0)
    ctx->pc = 0x12ef48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965496)));
label_12ef4c:
    // 0x12ef4c: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
label_12ef50:
    if (ctx->pc == 0x12EF50u) {
        ctx->pc = 0x12EF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF4Cu;
        // 0x12ef50: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EF54u;
        goto label_12ef54;
    }
    ctx->pc = 0x12EF4Cu;
    {
        const bool branch_taken_0x12ef4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x12EF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF4Cu;
        // 0x12ef50: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef4c) {
            ctx->pc = 0x12EF80u;
            goto label_12ef80;
        }
    }
    ctx->pc = 0x12EF54u;
label_12ef54:
    // 0x12ef54: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x12ef54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12ef58:
    // 0x12ef58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_12ef5c:
    if (ctx->pc == 0x12EF5Cu) {
        ctx->pc = 0x12EF60u;
        goto label_12ef60;
    }
    ctx->pc = 0x12EF58u;
    {
        const bool branch_taken_0x12ef58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ef58) {
            ctx->pc = 0x12EF70u;
            goto label_12ef70;
        }
    }
    ctx->pc = 0x12EF60u;
label_12ef60:
    // 0x12ef60: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x12ef60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_12ef64:
    // 0x12ef64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12ef64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12ef68:
    // 0x12ef68: 0x10000023  b           . + 4 + (0x23 << 2)
label_12ef6c:
    if (ctx->pc == 0x12EF6Cu) {
        ctx->pc = 0x12EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF68u;
        // 0x12ef6c: 0xe6600e80  swc1        $f0, 0xE80($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3712), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EF70u;
        goto label_12ef70;
    }
    ctx->pc = 0x12EF68u;
    {
        const bool branch_taken_0x12ef68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF68u;
        // 0x12ef6c: 0xe6600e80  swc1        $f0, 0xE80($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3712), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef68) {
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12EF70u;
label_12ef70:
    // 0x12ef70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12ef70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12ef74:
    // 0x12ef74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12ef74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12ef78:
    // 0x12ef78: 0x1000001f  b           . + 4 + (0x1F << 2)
label_12ef7c:
    if (ctx->pc == 0x12EF7Cu) {
        ctx->pc = 0x12EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF78u;
        // 0x12ef7c: 0xe6600e80  swc1        $f0, 0xE80($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3712), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EF80u;
        goto label_12ef80;
    }
    ctx->pc = 0x12EF78u;
    {
        const bool branch_taken_0x12ef78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF78u;
        // 0x12ef7c: 0xe6600e80  swc1        $f0, 0xE80($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3712), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef78) {
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12EF80u;
label_12ef80:
    // 0x12ef80: 0x8c43f900  lw          $v1, -0x700($v0)
    ctx->pc = 0x12ef80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965504)));
label_12ef84:
    // 0x12ef84: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_12ef88:
    if (ctx->pc == 0x12EF88u) {
        ctx->pc = 0x12EF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF84u;
        // 0x12ef88: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EF8Cu;
        goto label_12ef8c;
    }
    ctx->pc = 0x12EF84u;
    {
        const bool branch_taken_0x12ef84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x12EF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF84u;
        // 0x12ef88: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef84) {
            ctx->pc = 0x12EFA4u;
            goto label_12efa4;
        }
    }
    ctx->pc = 0x12EF8Cu;
label_12ef8c:
    // 0x12ef8c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x12ef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12ef90:
    // 0x12ef90: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_12ef94:
    if (ctx->pc == 0x12EF94u) {
        ctx->pc = 0x12EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF90u;
        // 0x12ef94: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EF98u;
        goto label_12ef98;
    }
    ctx->pc = 0x12EF90u;
    {
        const bool branch_taken_0x12ef90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF90u;
        // 0x12ef94: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef90) {
            ctx->pc = 0x12EFFCu;
            goto label_12effc;
        }
    }
    ctx->pc = 0x12EF98u;
label_12ef98:
    // 0x12ef98: 0xc6600bd8  lwc1        $f0, 0xBD8($s3)
    ctx->pc = 0x12ef98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ef9c:
    // 0x12ef9c: 0x10000017  b           . + 4 + (0x17 << 2)
label_12efa0:
    if (ctx->pc == 0x12EFA0u) {
        ctx->pc = 0x12EFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF9Cu;
        // 0x12efa0: 0xe6600bdc  swc1        $f0, 0xBDC($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3036), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EFA4u;
        goto label_12efa4;
    }
    ctx->pc = 0x12EF9Cu;
    {
        const bool branch_taken_0x12ef9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF9Cu;
        // 0x12efa0: 0xe6600bdc  swc1        $f0, 0xBDC($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3036), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef9c) {
            ctx->pc = 0x12EFFCu;
            goto label_12effc;
        }
    }
    ctx->pc = 0x12EFA4u;
label_12efa4:
    // 0x12efa4: 0x8c43f910  lw          $v1, -0x6F0($v0)
    ctx->pc = 0x12efa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965520)));
label_12efa8:
    // 0x12efa8: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
label_12efac:
    if (ctx->pc == 0x12EFACu) {
        ctx->pc = 0x12EFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EFA8u;
        // 0x12efac: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EFB0u;
        goto label_12efb0;
    }
    ctx->pc = 0x12EFA8u;
    {
        const bool branch_taken_0x12efa8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x12EFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EFA8u;
        // 0x12efac: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12efa8) {
            ctx->pc = 0x12EFD4u;
            goto label_12efd4;
        }
    }
    ctx->pc = 0x12EFB0u;
label_12efb0:
    // 0x12efb0: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x12efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_12efb4:
    // 0x12efb4: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x12efb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
label_12efb8:
    // 0x12efb8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12efb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12efbc:
    // 0x12efbc: 0x844402a0  lh          $a0, 0x2A0($v0)
    ctx->pc = 0x12efbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 672)));
label_12efc0:
    // 0x12efc0: 0x8c4302a4  lw          $v1, 0x2A4($v0)
    ctx->pc = 0x12efc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 676)));
label_12efc4:
    // 0x12efc4: 0x60f809  jalr        $v1
label_12efc8:
    if (ctx->pc == 0x12EFC8u) {
        ctx->pc = 0x12EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EFC4u;
        // 0x12efc8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EFCCu;
        goto label_12efcc;
    }
    ctx->pc = 0x12EFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12EFCCu);
        ctx->pc = 0x12EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EFC4u;
        // 0x12efc8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EFC4u, 0x12EFCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12EFCCu;
label_12efcc:
    // 0x12efcc: 0x1000000b  b           . + 4 + (0xB << 2)
label_12efd0:
    if (ctx->pc == 0x12EFD0u) {
        ctx->pc = 0x12EFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EFCCu;
        // 0x12efd0: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EFD4u;
        goto label_12efd4;
    }
    ctx->pc = 0x12EFCCu;
    {
        const bool branch_taken_0x12efcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EFCCu;
        // 0x12efd0: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12efcc) {
            ctx->pc = 0x12EFFCu;
            goto label_12effc;
        }
    }
    ctx->pc = 0x12EFD4u;
label_12efd4:
    // 0x12efd4: 0x8c43f888  lw          $v1, -0x778($v0)
    ctx->pc = 0x12efd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965384)));
label_12efd8:
    // 0x12efd8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_12efdc:
    if (ctx->pc == 0x12EFDCu) {
        ctx->pc = 0x12EFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EFD8u;
        // 0x12efdc: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EFE0u;
        goto label_12efe0;
    }
    ctx->pc = 0x12EFD8u;
    {
        const bool branch_taken_0x12efd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x12EFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EFD8u;
        // 0x12efdc: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12efd8) {
            ctx->pc = 0x12EFF8u;
            goto label_12eff8;
        }
    }
    ctx->pc = 0x12EFE0u;
label_12efe0:
    // 0x12efe0: 0x8c438868  lw          $v1, -0x7798($v0)
    ctx->pc = 0x12efe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936680)));
label_12efe4:
    // 0x12efe4: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_12efe8:
    if (ctx->pc == 0x12EFE8u) {
        ctx->pc = 0x12EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EFE4u;
        // 0x12efe8: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EFECu;
        goto label_12efec;
    }
    ctx->pc = 0x12EFE4u;
    {
        const bool branch_taken_0x12efe4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x12EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EFE4u;
        // 0x12efe8: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12efe4) {
            ctx->pc = 0x12EFFCu;
            goto label_12effc;
        }
    }
    ctx->pc = 0x12EFECu;
label_12efec:
    // 0x12efec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12efecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12eff0:
    // 0x12eff0: 0xae621864  sw          $v0, 0x1864($s3)
    ctx->pc = 0x12eff0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6244), GPR_U32(ctx, 2));
label_12eff4:
    // 0x12eff4: 0xae621860  sw          $v0, 0x1860($s3)
    ctx->pc = 0x12eff4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6240), GPR_U32(ctx, 2));
label_12eff8:
    // 0x12eff8: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x12eff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_12effc:
    // 0x12effc: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x12effcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_12f000:
    // 0x12f000: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x12f000u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_12f004:
    // 0x12f004: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x12f004u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_12f008:
    // 0x12f008: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x12f008u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_12f00c:
    // 0x12f00c: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x12f00cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_12f010:
    // 0x12f010: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x12f010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_12f014:
    // 0x12f014: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x12f014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12f018:
    // 0x12f018: 0x3e00008  jr          $ra
label_12f01c:
    if (ctx->pc == 0x12F01Cu) {
        ctx->pc = 0x12F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F018u;
        // 0x12f01c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F020u;
        goto label_fallthrough_0x12f018;
    }
    ctx->pc = 0x12F018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F018u;
        // 0x12f01c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12f018:
    ctx->pc = 0x12F020u;
}
