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

// Function: sub_0027B1F0
// Address: 0x27b1f0 - 0x27bb90
void sub_0027B1F0_0x27b1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B1F0_0x27b1f0");
#endif

    switch (ctx->pc) {
        case 0x27b1f0u: goto label_27b1f0;
        case 0x27b1f4u: goto label_27b1f4;
        case 0x27b1f8u: goto label_27b1f8;
        case 0x27b1fcu: goto label_27b1fc;
        case 0x27b200u: goto label_27b200;
        case 0x27b204u: goto label_27b204;
        case 0x27b208u: goto label_27b208;
        case 0x27b20cu: goto label_27b20c;
        case 0x27b210u: goto label_27b210;
        case 0x27b214u: goto label_27b214;
        case 0x27b218u: goto label_27b218;
        case 0x27b21cu: goto label_27b21c;
        case 0x27b220u: goto label_27b220;
        case 0x27b224u: goto label_27b224;
        case 0x27b228u: goto label_27b228;
        case 0x27b22cu: goto label_27b22c;
        case 0x27b230u: goto label_27b230;
        case 0x27b234u: goto label_27b234;
        case 0x27b238u: goto label_27b238;
        case 0x27b23cu: goto label_27b23c;
        case 0x27b240u: goto label_27b240;
        case 0x27b244u: goto label_27b244;
        case 0x27b248u: goto label_27b248;
        case 0x27b24cu: goto label_27b24c;
        case 0x27b250u: goto label_27b250;
        case 0x27b254u: goto label_27b254;
        case 0x27b258u: goto label_27b258;
        case 0x27b25cu: goto label_27b25c;
        case 0x27b260u: goto label_27b260;
        case 0x27b264u: goto label_27b264;
        case 0x27b268u: goto label_27b268;
        case 0x27b26cu: goto label_27b26c;
        case 0x27b270u: goto label_27b270;
        case 0x27b274u: goto label_27b274;
        case 0x27b278u: goto label_27b278;
        case 0x27b27cu: goto label_27b27c;
        case 0x27b280u: goto label_27b280;
        case 0x27b284u: goto label_27b284;
        case 0x27b288u: goto label_27b288;
        case 0x27b28cu: goto label_27b28c;
        case 0x27b290u: goto label_27b290;
        case 0x27b294u: goto label_27b294;
        case 0x27b298u: goto label_27b298;
        case 0x27b29cu: goto label_27b29c;
        case 0x27b2a0u: goto label_27b2a0;
        case 0x27b2a4u: goto label_27b2a4;
        case 0x27b2a8u: goto label_27b2a8;
        case 0x27b2acu: goto label_27b2ac;
        case 0x27b2b0u: goto label_27b2b0;
        case 0x27b2b4u: goto label_27b2b4;
        case 0x27b2b8u: goto label_27b2b8;
        case 0x27b2bcu: goto label_27b2bc;
        case 0x27b2c0u: goto label_27b2c0;
        case 0x27b2c4u: goto label_27b2c4;
        case 0x27b2c8u: goto label_27b2c8;
        case 0x27b2ccu: goto label_27b2cc;
        case 0x27b2d0u: goto label_27b2d0;
        case 0x27b2d4u: goto label_27b2d4;
        case 0x27b2d8u: goto label_27b2d8;
        case 0x27b2dcu: goto label_27b2dc;
        case 0x27b2e0u: goto label_27b2e0;
        case 0x27b2e4u: goto label_27b2e4;
        case 0x27b2e8u: goto label_27b2e8;
        case 0x27b2ecu: goto label_27b2ec;
        case 0x27b2f0u: goto label_27b2f0;
        case 0x27b2f4u: goto label_27b2f4;
        case 0x27b2f8u: goto label_27b2f8;
        case 0x27b2fcu: goto label_27b2fc;
        case 0x27b300u: goto label_27b300;
        case 0x27b304u: goto label_27b304;
        case 0x27b308u: goto label_27b308;
        case 0x27b30cu: goto label_27b30c;
        case 0x27b310u: goto label_27b310;
        case 0x27b314u: goto label_27b314;
        case 0x27b318u: goto label_27b318;
        case 0x27b31cu: goto label_27b31c;
        case 0x27b320u: goto label_27b320;
        case 0x27b324u: goto label_27b324;
        case 0x27b328u: goto label_27b328;
        case 0x27b32cu: goto label_27b32c;
        case 0x27b330u: goto label_27b330;
        case 0x27b334u: goto label_27b334;
        case 0x27b338u: goto label_27b338;
        case 0x27b33cu: goto label_27b33c;
        case 0x27b340u: goto label_27b340;
        case 0x27b344u: goto label_27b344;
        case 0x27b348u: goto label_27b348;
        case 0x27b34cu: goto label_27b34c;
        case 0x27b350u: goto label_27b350;
        case 0x27b354u: goto label_27b354;
        case 0x27b358u: goto label_27b358;
        case 0x27b35cu: goto label_27b35c;
        case 0x27b360u: goto label_27b360;
        case 0x27b364u: goto label_27b364;
        case 0x27b368u: goto label_27b368;
        case 0x27b36cu: goto label_27b36c;
        case 0x27b370u: goto label_27b370;
        case 0x27b374u: goto label_27b374;
        case 0x27b378u: goto label_27b378;
        case 0x27b37cu: goto label_27b37c;
        case 0x27b380u: goto label_27b380;
        case 0x27b384u: goto label_27b384;
        case 0x27b388u: goto label_27b388;
        case 0x27b38cu: goto label_27b38c;
        case 0x27b390u: goto label_27b390;
        case 0x27b394u: goto label_27b394;
        case 0x27b398u: goto label_27b398;
        case 0x27b39cu: goto label_27b39c;
        case 0x27b3a0u: goto label_27b3a0;
        case 0x27b3a4u: goto label_27b3a4;
        case 0x27b3a8u: goto label_27b3a8;
        case 0x27b3acu: goto label_27b3ac;
        case 0x27b3b0u: goto label_27b3b0;
        case 0x27b3b4u: goto label_27b3b4;
        case 0x27b3b8u: goto label_27b3b8;
        case 0x27b3bcu: goto label_27b3bc;
        case 0x27b3c0u: goto label_27b3c0;
        case 0x27b3c4u: goto label_27b3c4;
        case 0x27b3c8u: goto label_27b3c8;
        case 0x27b3ccu: goto label_27b3cc;
        case 0x27b3d0u: goto label_27b3d0;
        case 0x27b3d4u: goto label_27b3d4;
        case 0x27b3d8u: goto label_27b3d8;
        case 0x27b3dcu: goto label_27b3dc;
        case 0x27b3e0u: goto label_27b3e0;
        case 0x27b3e4u: goto label_27b3e4;
        case 0x27b3e8u: goto label_27b3e8;
        case 0x27b3ecu: goto label_27b3ec;
        case 0x27b3f0u: goto label_27b3f0;
        case 0x27b3f4u: goto label_27b3f4;
        case 0x27b3f8u: goto label_27b3f8;
        case 0x27b3fcu: goto label_27b3fc;
        case 0x27b400u: goto label_27b400;
        case 0x27b404u: goto label_27b404;
        case 0x27b408u: goto label_27b408;
        case 0x27b40cu: goto label_27b40c;
        case 0x27b410u: goto label_27b410;
        case 0x27b414u: goto label_27b414;
        case 0x27b418u: goto label_27b418;
        case 0x27b41cu: goto label_27b41c;
        case 0x27b420u: goto label_27b420;
        case 0x27b424u: goto label_27b424;
        case 0x27b428u: goto label_27b428;
        case 0x27b42cu: goto label_27b42c;
        case 0x27b430u: goto label_27b430;
        case 0x27b434u: goto label_27b434;
        case 0x27b438u: goto label_27b438;
        case 0x27b43cu: goto label_27b43c;
        case 0x27b440u: goto label_27b440;
        case 0x27b444u: goto label_27b444;
        case 0x27b448u: goto label_27b448;
        case 0x27b44cu: goto label_27b44c;
        case 0x27b450u: goto label_27b450;
        case 0x27b454u: goto label_27b454;
        case 0x27b458u: goto label_27b458;
        case 0x27b45cu: goto label_27b45c;
        case 0x27b460u: goto label_27b460;
        case 0x27b464u: goto label_27b464;
        case 0x27b468u: goto label_27b468;
        case 0x27b46cu: goto label_27b46c;
        case 0x27b470u: goto label_27b470;
        case 0x27b474u: goto label_27b474;
        case 0x27b478u: goto label_27b478;
        case 0x27b47cu: goto label_27b47c;
        case 0x27b480u: goto label_27b480;
        case 0x27b484u: goto label_27b484;
        case 0x27b488u: goto label_27b488;
        case 0x27b48cu: goto label_27b48c;
        case 0x27b490u: goto label_27b490;
        case 0x27b494u: goto label_27b494;
        case 0x27b498u: goto label_27b498;
        case 0x27b49cu: goto label_27b49c;
        case 0x27b4a0u: goto label_27b4a0;
        case 0x27b4a4u: goto label_27b4a4;
        case 0x27b4a8u: goto label_27b4a8;
        case 0x27b4acu: goto label_27b4ac;
        case 0x27b4b0u: goto label_27b4b0;
        case 0x27b4b4u: goto label_27b4b4;
        case 0x27b4b8u: goto label_27b4b8;
        case 0x27b4bcu: goto label_27b4bc;
        case 0x27b4c0u: goto label_27b4c0;
        case 0x27b4c4u: goto label_27b4c4;
        case 0x27b4c8u: goto label_27b4c8;
        case 0x27b4ccu: goto label_27b4cc;
        case 0x27b4d0u: goto label_27b4d0;
        case 0x27b4d4u: goto label_27b4d4;
        case 0x27b4d8u: goto label_27b4d8;
        case 0x27b4dcu: goto label_27b4dc;
        case 0x27b4e0u: goto label_27b4e0;
        case 0x27b4e4u: goto label_27b4e4;
        case 0x27b4e8u: goto label_27b4e8;
        case 0x27b4ecu: goto label_27b4ec;
        case 0x27b4f0u: goto label_27b4f0;
        case 0x27b4f4u: goto label_27b4f4;
        case 0x27b4f8u: goto label_27b4f8;
        case 0x27b4fcu: goto label_27b4fc;
        case 0x27b500u: goto label_27b500;
        case 0x27b504u: goto label_27b504;
        case 0x27b508u: goto label_27b508;
        case 0x27b50cu: goto label_27b50c;
        case 0x27b510u: goto label_27b510;
        case 0x27b514u: goto label_27b514;
        case 0x27b518u: goto label_27b518;
        case 0x27b51cu: goto label_27b51c;
        case 0x27b520u: goto label_27b520;
        case 0x27b524u: goto label_27b524;
        case 0x27b528u: goto label_27b528;
        case 0x27b52cu: goto label_27b52c;
        case 0x27b530u: goto label_27b530;
        case 0x27b534u: goto label_27b534;
        case 0x27b538u: goto label_27b538;
        case 0x27b53cu: goto label_27b53c;
        case 0x27b540u: goto label_27b540;
        case 0x27b544u: goto label_27b544;
        case 0x27b548u: goto label_27b548;
        case 0x27b54cu: goto label_27b54c;
        case 0x27b550u: goto label_27b550;
        case 0x27b554u: goto label_27b554;
        case 0x27b558u: goto label_27b558;
        case 0x27b55cu: goto label_27b55c;
        case 0x27b560u: goto label_27b560;
        case 0x27b564u: goto label_27b564;
        case 0x27b568u: goto label_27b568;
        case 0x27b56cu: goto label_27b56c;
        case 0x27b570u: goto label_27b570;
        case 0x27b574u: goto label_27b574;
        case 0x27b578u: goto label_27b578;
        case 0x27b57cu: goto label_27b57c;
        case 0x27b580u: goto label_27b580;
        case 0x27b584u: goto label_27b584;
        case 0x27b588u: goto label_27b588;
        case 0x27b58cu: goto label_27b58c;
        case 0x27b590u: goto label_27b590;
        case 0x27b594u: goto label_27b594;
        case 0x27b598u: goto label_27b598;
        case 0x27b59cu: goto label_27b59c;
        case 0x27b5a0u: goto label_27b5a0;
        case 0x27b5a4u: goto label_27b5a4;
        case 0x27b5a8u: goto label_27b5a8;
        case 0x27b5acu: goto label_27b5ac;
        case 0x27b5b0u: goto label_27b5b0;
        case 0x27b5b4u: goto label_27b5b4;
        case 0x27b5b8u: goto label_27b5b8;
        case 0x27b5bcu: goto label_27b5bc;
        case 0x27b5c0u: goto label_27b5c0;
        case 0x27b5c4u: goto label_27b5c4;
        case 0x27b5c8u: goto label_27b5c8;
        case 0x27b5ccu: goto label_27b5cc;
        case 0x27b5d0u: goto label_27b5d0;
        case 0x27b5d4u: goto label_27b5d4;
        case 0x27b5d8u: goto label_27b5d8;
        case 0x27b5dcu: goto label_27b5dc;
        case 0x27b5e0u: goto label_27b5e0;
        case 0x27b5e4u: goto label_27b5e4;
        case 0x27b5e8u: goto label_27b5e8;
        case 0x27b5ecu: goto label_27b5ec;
        case 0x27b5f0u: goto label_27b5f0;
        case 0x27b5f4u: goto label_27b5f4;
        case 0x27b5f8u: goto label_27b5f8;
        case 0x27b5fcu: goto label_27b5fc;
        case 0x27b600u: goto label_27b600;
        case 0x27b604u: goto label_27b604;
        case 0x27b608u: goto label_27b608;
        case 0x27b60cu: goto label_27b60c;
        case 0x27b610u: goto label_27b610;
        case 0x27b614u: goto label_27b614;
        case 0x27b618u: goto label_27b618;
        case 0x27b61cu: goto label_27b61c;
        case 0x27b620u: goto label_27b620;
        case 0x27b624u: goto label_27b624;
        case 0x27b628u: goto label_27b628;
        case 0x27b62cu: goto label_27b62c;
        case 0x27b630u: goto label_27b630;
        case 0x27b634u: goto label_27b634;
        case 0x27b638u: goto label_27b638;
        case 0x27b63cu: goto label_27b63c;
        case 0x27b640u: goto label_27b640;
        case 0x27b644u: goto label_27b644;
        case 0x27b648u: goto label_27b648;
        case 0x27b64cu: goto label_27b64c;
        case 0x27b650u: goto label_27b650;
        case 0x27b654u: goto label_27b654;
        case 0x27b658u: goto label_27b658;
        case 0x27b65cu: goto label_27b65c;
        case 0x27b660u: goto label_27b660;
        case 0x27b664u: goto label_27b664;
        case 0x27b668u: goto label_27b668;
        case 0x27b66cu: goto label_27b66c;
        case 0x27b670u: goto label_27b670;
        case 0x27b674u: goto label_27b674;
        case 0x27b678u: goto label_27b678;
        case 0x27b67cu: goto label_27b67c;
        case 0x27b680u: goto label_27b680;
        case 0x27b684u: goto label_27b684;
        case 0x27b688u: goto label_27b688;
        case 0x27b68cu: goto label_27b68c;
        case 0x27b690u: goto label_27b690;
        case 0x27b694u: goto label_27b694;
        case 0x27b698u: goto label_27b698;
        case 0x27b69cu: goto label_27b69c;
        case 0x27b6a0u: goto label_27b6a0;
        case 0x27b6a4u: goto label_27b6a4;
        case 0x27b6a8u: goto label_27b6a8;
        case 0x27b6acu: goto label_27b6ac;
        case 0x27b6b0u: goto label_27b6b0;
        case 0x27b6b4u: goto label_27b6b4;
        case 0x27b6b8u: goto label_27b6b8;
        case 0x27b6bcu: goto label_27b6bc;
        case 0x27b6c0u: goto label_27b6c0;
        case 0x27b6c4u: goto label_27b6c4;
        case 0x27b6c8u: goto label_27b6c8;
        case 0x27b6ccu: goto label_27b6cc;
        case 0x27b6d0u: goto label_27b6d0;
        case 0x27b6d4u: goto label_27b6d4;
        case 0x27b6d8u: goto label_27b6d8;
        case 0x27b6dcu: goto label_27b6dc;
        case 0x27b6e0u: goto label_27b6e0;
        case 0x27b6e4u: goto label_27b6e4;
        case 0x27b6e8u: goto label_27b6e8;
        case 0x27b6ecu: goto label_27b6ec;
        case 0x27b6f0u: goto label_27b6f0;
        case 0x27b6f4u: goto label_27b6f4;
        case 0x27b6f8u: goto label_27b6f8;
        case 0x27b6fcu: goto label_27b6fc;
        case 0x27b700u: goto label_27b700;
        case 0x27b704u: goto label_27b704;
        case 0x27b708u: goto label_27b708;
        case 0x27b70cu: goto label_27b70c;
        case 0x27b710u: goto label_27b710;
        case 0x27b714u: goto label_27b714;
        case 0x27b718u: goto label_27b718;
        case 0x27b71cu: goto label_27b71c;
        case 0x27b720u: goto label_27b720;
        case 0x27b724u: goto label_27b724;
        case 0x27b728u: goto label_27b728;
        case 0x27b72cu: goto label_27b72c;
        case 0x27b730u: goto label_27b730;
        case 0x27b734u: goto label_27b734;
        case 0x27b738u: goto label_27b738;
        case 0x27b73cu: goto label_27b73c;
        case 0x27b740u: goto label_27b740;
        case 0x27b744u: goto label_27b744;
        case 0x27b748u: goto label_27b748;
        case 0x27b74cu: goto label_27b74c;
        case 0x27b750u: goto label_27b750;
        case 0x27b754u: goto label_27b754;
        case 0x27b758u: goto label_27b758;
        case 0x27b75cu: goto label_27b75c;
        case 0x27b760u: goto label_27b760;
        case 0x27b764u: goto label_27b764;
        case 0x27b768u: goto label_27b768;
        case 0x27b76cu: goto label_27b76c;
        case 0x27b770u: goto label_27b770;
        case 0x27b774u: goto label_27b774;
        case 0x27b778u: goto label_27b778;
        case 0x27b77cu: goto label_27b77c;
        case 0x27b780u: goto label_27b780;
        case 0x27b784u: goto label_27b784;
        case 0x27b788u: goto label_27b788;
        case 0x27b78cu: goto label_27b78c;
        case 0x27b790u: goto label_27b790;
        case 0x27b794u: goto label_27b794;
        case 0x27b798u: goto label_27b798;
        case 0x27b79cu: goto label_27b79c;
        case 0x27b7a0u: goto label_27b7a0;
        case 0x27b7a4u: goto label_27b7a4;
        case 0x27b7a8u: goto label_27b7a8;
        case 0x27b7acu: goto label_27b7ac;
        case 0x27b7b0u: goto label_27b7b0;
        case 0x27b7b4u: goto label_27b7b4;
        case 0x27b7b8u: goto label_27b7b8;
        case 0x27b7bcu: goto label_27b7bc;
        case 0x27b7c0u: goto label_27b7c0;
        case 0x27b7c4u: goto label_27b7c4;
        case 0x27b7c8u: goto label_27b7c8;
        case 0x27b7ccu: goto label_27b7cc;
        case 0x27b7d0u: goto label_27b7d0;
        case 0x27b7d4u: goto label_27b7d4;
        case 0x27b7d8u: goto label_27b7d8;
        case 0x27b7dcu: goto label_27b7dc;
        case 0x27b7e0u: goto label_27b7e0;
        case 0x27b7e4u: goto label_27b7e4;
        case 0x27b7e8u: goto label_27b7e8;
        case 0x27b7ecu: goto label_27b7ec;
        case 0x27b7f0u: goto label_27b7f0;
        case 0x27b7f4u: goto label_27b7f4;
        case 0x27b7f8u: goto label_27b7f8;
        case 0x27b7fcu: goto label_27b7fc;
        case 0x27b800u: goto label_27b800;
        case 0x27b804u: goto label_27b804;
        case 0x27b808u: goto label_27b808;
        case 0x27b80cu: goto label_27b80c;
        case 0x27b810u: goto label_27b810;
        case 0x27b814u: goto label_27b814;
        case 0x27b818u: goto label_27b818;
        case 0x27b81cu: goto label_27b81c;
        case 0x27b820u: goto label_27b820;
        case 0x27b824u: goto label_27b824;
        case 0x27b828u: goto label_27b828;
        case 0x27b82cu: goto label_27b82c;
        case 0x27b830u: goto label_27b830;
        case 0x27b834u: goto label_27b834;
        case 0x27b838u: goto label_27b838;
        case 0x27b83cu: goto label_27b83c;
        case 0x27b840u: goto label_27b840;
        case 0x27b844u: goto label_27b844;
        case 0x27b848u: goto label_27b848;
        case 0x27b84cu: goto label_27b84c;
        case 0x27b850u: goto label_27b850;
        case 0x27b854u: goto label_27b854;
        case 0x27b858u: goto label_27b858;
        case 0x27b85cu: goto label_27b85c;
        case 0x27b860u: goto label_27b860;
        case 0x27b864u: goto label_27b864;
        case 0x27b868u: goto label_27b868;
        case 0x27b86cu: goto label_27b86c;
        case 0x27b870u: goto label_27b870;
        case 0x27b874u: goto label_27b874;
        case 0x27b878u: goto label_27b878;
        case 0x27b87cu: goto label_27b87c;
        case 0x27b880u: goto label_27b880;
        case 0x27b884u: goto label_27b884;
        case 0x27b888u: goto label_27b888;
        case 0x27b88cu: goto label_27b88c;
        case 0x27b890u: goto label_27b890;
        case 0x27b894u: goto label_27b894;
        case 0x27b898u: goto label_27b898;
        case 0x27b89cu: goto label_27b89c;
        case 0x27b8a0u: goto label_27b8a0;
        case 0x27b8a4u: goto label_27b8a4;
        case 0x27b8a8u: goto label_27b8a8;
        case 0x27b8acu: goto label_27b8ac;
        case 0x27b8b0u: goto label_27b8b0;
        case 0x27b8b4u: goto label_27b8b4;
        case 0x27b8b8u: goto label_27b8b8;
        case 0x27b8bcu: goto label_27b8bc;
        case 0x27b8c0u: goto label_27b8c0;
        case 0x27b8c4u: goto label_27b8c4;
        case 0x27b8c8u: goto label_27b8c8;
        case 0x27b8ccu: goto label_27b8cc;
        case 0x27b8d0u: goto label_27b8d0;
        case 0x27b8d4u: goto label_27b8d4;
        case 0x27b8d8u: goto label_27b8d8;
        case 0x27b8dcu: goto label_27b8dc;
        case 0x27b8e0u: goto label_27b8e0;
        case 0x27b8e4u: goto label_27b8e4;
        case 0x27b8e8u: goto label_27b8e8;
        case 0x27b8ecu: goto label_27b8ec;
        case 0x27b8f0u: goto label_27b8f0;
        case 0x27b8f4u: goto label_27b8f4;
        case 0x27b8f8u: goto label_27b8f8;
        case 0x27b8fcu: goto label_27b8fc;
        case 0x27b900u: goto label_27b900;
        case 0x27b904u: goto label_27b904;
        case 0x27b908u: goto label_27b908;
        case 0x27b90cu: goto label_27b90c;
        case 0x27b910u: goto label_27b910;
        case 0x27b914u: goto label_27b914;
        case 0x27b918u: goto label_27b918;
        case 0x27b91cu: goto label_27b91c;
        case 0x27b920u: goto label_27b920;
        case 0x27b924u: goto label_27b924;
        case 0x27b928u: goto label_27b928;
        case 0x27b92cu: goto label_27b92c;
        case 0x27b930u: goto label_27b930;
        case 0x27b934u: goto label_27b934;
        case 0x27b938u: goto label_27b938;
        case 0x27b93cu: goto label_27b93c;
        case 0x27b940u: goto label_27b940;
        case 0x27b944u: goto label_27b944;
        case 0x27b948u: goto label_27b948;
        case 0x27b94cu: goto label_27b94c;
        case 0x27b950u: goto label_27b950;
        case 0x27b954u: goto label_27b954;
        case 0x27b958u: goto label_27b958;
        case 0x27b95cu: goto label_27b95c;
        case 0x27b960u: goto label_27b960;
        case 0x27b964u: goto label_27b964;
        case 0x27b968u: goto label_27b968;
        case 0x27b96cu: goto label_27b96c;
        case 0x27b970u: goto label_27b970;
        case 0x27b974u: goto label_27b974;
        case 0x27b978u: goto label_27b978;
        case 0x27b97cu: goto label_27b97c;
        case 0x27b980u: goto label_27b980;
        case 0x27b984u: goto label_27b984;
        case 0x27b988u: goto label_27b988;
        case 0x27b98cu: goto label_27b98c;
        case 0x27b990u: goto label_27b990;
        case 0x27b994u: goto label_27b994;
        case 0x27b998u: goto label_27b998;
        case 0x27b99cu: goto label_27b99c;
        case 0x27b9a0u: goto label_27b9a0;
        case 0x27b9a4u: goto label_27b9a4;
        case 0x27b9a8u: goto label_27b9a8;
        case 0x27b9acu: goto label_27b9ac;
        case 0x27b9b0u: goto label_27b9b0;
        case 0x27b9b4u: goto label_27b9b4;
        case 0x27b9b8u: goto label_27b9b8;
        case 0x27b9bcu: goto label_27b9bc;
        case 0x27b9c0u: goto label_27b9c0;
        case 0x27b9c4u: goto label_27b9c4;
        case 0x27b9c8u: goto label_27b9c8;
        case 0x27b9ccu: goto label_27b9cc;
        case 0x27b9d0u: goto label_27b9d0;
        case 0x27b9d4u: goto label_27b9d4;
        case 0x27b9d8u: goto label_27b9d8;
        case 0x27b9dcu: goto label_27b9dc;
        case 0x27b9e0u: goto label_27b9e0;
        case 0x27b9e4u: goto label_27b9e4;
        case 0x27b9e8u: goto label_27b9e8;
        case 0x27b9ecu: goto label_27b9ec;
        case 0x27b9f0u: goto label_27b9f0;
        case 0x27b9f4u: goto label_27b9f4;
        case 0x27b9f8u: goto label_27b9f8;
        case 0x27b9fcu: goto label_27b9fc;
        case 0x27ba00u: goto label_27ba00;
        case 0x27ba04u: goto label_27ba04;
        case 0x27ba08u: goto label_27ba08;
        case 0x27ba0cu: goto label_27ba0c;
        case 0x27ba10u: goto label_27ba10;
        case 0x27ba14u: goto label_27ba14;
        case 0x27ba18u: goto label_27ba18;
        case 0x27ba1cu: goto label_27ba1c;
        case 0x27ba20u: goto label_27ba20;
        case 0x27ba24u: goto label_27ba24;
        case 0x27ba28u: goto label_27ba28;
        case 0x27ba2cu: goto label_27ba2c;
        case 0x27ba30u: goto label_27ba30;
        case 0x27ba34u: goto label_27ba34;
        case 0x27ba38u: goto label_27ba38;
        case 0x27ba3cu: goto label_27ba3c;
        case 0x27ba40u: goto label_27ba40;
        case 0x27ba44u: goto label_27ba44;
        case 0x27ba48u: goto label_27ba48;
        case 0x27ba4cu: goto label_27ba4c;
        case 0x27ba50u: goto label_27ba50;
        case 0x27ba54u: goto label_27ba54;
        case 0x27ba58u: goto label_27ba58;
        case 0x27ba5cu: goto label_27ba5c;
        case 0x27ba60u: goto label_27ba60;
        case 0x27ba64u: goto label_27ba64;
        case 0x27ba68u: goto label_27ba68;
        case 0x27ba6cu: goto label_27ba6c;
        case 0x27ba70u: goto label_27ba70;
        case 0x27ba74u: goto label_27ba74;
        case 0x27ba78u: goto label_27ba78;
        case 0x27ba7cu: goto label_27ba7c;
        case 0x27ba80u: goto label_27ba80;
        case 0x27ba84u: goto label_27ba84;
        case 0x27ba88u: goto label_27ba88;
        case 0x27ba8cu: goto label_27ba8c;
        case 0x27ba90u: goto label_27ba90;
        case 0x27ba94u: goto label_27ba94;
        case 0x27ba98u: goto label_27ba98;
        case 0x27ba9cu: goto label_27ba9c;
        case 0x27baa0u: goto label_27baa0;
        case 0x27baa4u: goto label_27baa4;
        case 0x27baa8u: goto label_27baa8;
        case 0x27baacu: goto label_27baac;
        case 0x27bab0u: goto label_27bab0;
        case 0x27bab4u: goto label_27bab4;
        case 0x27bab8u: goto label_27bab8;
        case 0x27babcu: goto label_27babc;
        case 0x27bac0u: goto label_27bac0;
        case 0x27bac4u: goto label_27bac4;
        case 0x27bac8u: goto label_27bac8;
        case 0x27baccu: goto label_27bacc;
        case 0x27bad0u: goto label_27bad0;
        case 0x27bad4u: goto label_27bad4;
        case 0x27bad8u: goto label_27bad8;
        case 0x27badcu: goto label_27badc;
        case 0x27bae0u: goto label_27bae0;
        case 0x27bae4u: goto label_27bae4;
        case 0x27bae8u: goto label_27bae8;
        case 0x27baecu: goto label_27baec;
        case 0x27baf0u: goto label_27baf0;
        case 0x27baf4u: goto label_27baf4;
        case 0x27baf8u: goto label_27baf8;
        case 0x27bafcu: goto label_27bafc;
        case 0x27bb00u: goto label_27bb00;
        case 0x27bb04u: goto label_27bb04;
        case 0x27bb08u: goto label_27bb08;
        case 0x27bb0cu: goto label_27bb0c;
        case 0x27bb10u: goto label_27bb10;
        case 0x27bb14u: goto label_27bb14;
        case 0x27bb18u: goto label_27bb18;
        case 0x27bb1cu: goto label_27bb1c;
        case 0x27bb20u: goto label_27bb20;
        case 0x27bb24u: goto label_27bb24;
        case 0x27bb28u: goto label_27bb28;
        case 0x27bb2cu: goto label_27bb2c;
        case 0x27bb30u: goto label_27bb30;
        case 0x27bb34u: goto label_27bb34;
        case 0x27bb38u: goto label_27bb38;
        case 0x27bb3cu: goto label_27bb3c;
        case 0x27bb40u: goto label_27bb40;
        case 0x27bb44u: goto label_27bb44;
        case 0x27bb48u: goto label_27bb48;
        case 0x27bb4cu: goto label_27bb4c;
        case 0x27bb50u: goto label_27bb50;
        case 0x27bb54u: goto label_27bb54;
        case 0x27bb58u: goto label_27bb58;
        case 0x27bb5cu: goto label_27bb5c;
        case 0x27bb60u: goto label_27bb60;
        case 0x27bb64u: goto label_27bb64;
        case 0x27bb68u: goto label_27bb68;
        case 0x27bb6cu: goto label_27bb6c;
        case 0x27bb70u: goto label_27bb70;
        case 0x27bb74u: goto label_27bb74;
        case 0x27bb78u: goto label_27bb78;
        case 0x27bb7cu: goto label_27bb7c;
        case 0x27bb80u: goto label_27bb80;
        case 0x27bb84u: goto label_27bb84;
        case 0x27bb88u: goto label_27bb88;
        case 0x27bb8cu: goto label_27bb8c;
        default: break;
    }

    ctx->pc = 0x27b1f0u;

label_27b1f0:
    // 0x27b1f0: 0x27bdfcc0  addiu       $sp, $sp, -0x340
    ctx->pc = 0x27b1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966464));
label_27b1f4:
    // 0x27b1f4: 0x8f8287d4  lw          $v0, -0x782C($gp)
    ctx->pc = 0x27b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936532)));
label_27b1f8:
    // 0x27b1f8: 0x7fbe0290  sq          $fp, 0x290($sp)
    ctx->pc = 0x27b1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 30));
label_27b1fc:
    // 0x27b1fc: 0x7fb702a0  sq          $s7, 0x2A0($sp)
    ctx->pc = 0x27b1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 23));
label_27b200:
    // 0x27b200: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x27b200u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27b204:
    // 0x27b204: 0x7fb00310  sq          $s0, 0x310($sp)
    ctx->pc = 0x27b204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 16));
label_27b208:
    // 0x27b208: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x27b208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_27b20c:
    // 0x27b20c: 0x7fb10300  sq          $s1, 0x300($sp)
    ctx->pc = 0x27b20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 17));
label_27b210:
    // 0x27b210: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x27b210u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27b214:
    // 0x27b214: 0x7fb202f0  sq          $s2, 0x2F0($sp)
    ctx->pc = 0x27b214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 18));
label_27b218:
    // 0x27b218: 0x7fb302e0  sq          $s3, 0x2E0($sp)
    ctx->pc = 0x27b218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 19));
label_27b21c:
    // 0x27b21c: 0x7fb502c0  sq          $s5, 0x2C0($sp)
    ctx->pc = 0x27b21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 21));
label_27b220:
    // 0x27b220: 0x7fb602b0  sq          $s6, 0x2B0($sp)
    ctx->pc = 0x27b220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 22));
label_27b224:
    // 0x27b224: 0xffbf0280  sd          $ra, 0x280($sp)
    ctx->pc = 0x27b224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 31));
label_27b228:
    // 0x27b228: 0xe7b60330  swc1        $f22, 0x330($sp)
    ctx->pc = 0x27b228u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 816), bits); }
label_27b22c:
    // 0x27b22c: 0xe7b50328  swc1        $f21, 0x328($sp)
    ctx->pc = 0x27b22cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 808), bits); }
label_27b230:
    // 0x27b230: 0xe7b40320  swc1        $f20, 0x320($sp)
    ctx->pc = 0x27b230u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 800), bits); }
label_27b234:
    // 0x27b234: 0xafa60238  sw          $a2, 0x238($sp)
    ctx->pc = 0x27b234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 6));
label_27b238:
    // 0x27b238: 0xafa7023c  sw          $a3, 0x23C($sp)
    ctx->pc = 0x27b238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 7));
label_27b23c:
    // 0x27b23c: 0x7fb402d0  sq          $s4, 0x2D0($sp)
    ctx->pc = 0x27b23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 20));
label_27b240:
    // 0x27b240: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x27b240u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27b244:
    // 0x27b244: 0x1280020b  beqz        $s4, . + 4 + (0x20B << 2)
label_27b248:
    if (ctx->pc == 0x27B248u) {
        ctx->pc = 0x27B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B244u;
        // 0x27b248: 0xafa80240  sw          $t0, 0x240($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B24Cu;
        goto label_27b24c;
    }
    ctx->pc = 0x27B244u;
    {
        const bool branch_taken_0x27b244 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B244u;
        // 0x27b248: 0xafa80240  sw          $t0, 0x240($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b244) {
            ctx->pc = 0x27BA74u;
            goto label_27ba74;
        }
    }
    ctx->pc = 0x27B24Cu;
label_27b24c:
    // 0x27b24c: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x27b24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b250:
    // 0x27b250: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x27b250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b254:
    // 0x27b254: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27b254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27b258:
    // 0x27b258: 0x0  nop
    ctx->pc = 0x27b258u;
    // NOP
label_27b25c:
    // 0x27b25c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_27b260:
    if (ctx->pc == 0x27B260u) {
        ctx->pc = 0x27B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B25Cu;
        // 0x27b260: 0xc6820004  lwc1        $f2, 0x4($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B264u;
        goto label_27b264;
    }
    ctx->pc = 0x27B25Cu;
    {
        const bool branch_taken_0x27b25c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b25c) {
            ctx->pc = 0x27B260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B25Cu;
            // 0x27b260: 0xc6820004  lwc1        $f2, 0x4($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B270u;
            goto label_27b270;
        }
    }
    ctx->pc = 0x27B264u;
label_27b264:
    // 0x27b264: 0x10000007  b           . + 4 + (0x7 << 2)
label_27b268:
    if (ctx->pc == 0x27B268u) {
        ctx->pc = 0x27B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B264u;
        // 0x27b268: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B26Cu;
        goto label_27b26c;
    }
    ctx->pc = 0x27B264u;
    {
        const bool branch_taken_0x27b264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B264u;
        // 0x27b268: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b264) {
            ctx->pc = 0x27B284u;
            goto label_27b284;
        }
    }
    ctx->pc = 0x27B26Cu;
label_27b26c:
    // 0x27b26c: 0x0  nop
    ctx->pc = 0x27b26cu;
    // NOP
label_27b270:
    // 0x27b270: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27b270u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27b274:
    // 0x27b274: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x27b274u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27b278:
    // 0x27b278: 0x0  nop
    ctx->pc = 0x27b278u;
    // NOP
label_27b27c:
    // 0x27b27c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_27b280:
    if (ctx->pc == 0x27B280u) {
        ctx->pc = 0x27B280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B27Cu;
        // 0x27b280: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B284u;
        goto label_27b284;
    }
    ctx->pc = 0x27B27Cu;
    {
        const bool branch_taken_0x27b27c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b27c) {
            ctx->pc = 0x27B280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B27Cu;
            // 0x27b280: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B284u;
            goto label_27b284;
        }
    }
    ctx->pc = 0x27B284u;
label_27b284:
    // 0x27b284: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x27b284u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_27b288:
    // 0x27b288: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x27b288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b28c:
    // 0x27b28c: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x27b28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b290:
    // 0x27b290: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27b290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27b294:
    // 0x27b294: 0x0  nop
    ctx->pc = 0x27b294u;
    // NOP
label_27b298:
    // 0x27b298: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_27b29c:
    if (ctx->pc == 0x27B29Cu) {
        ctx->pc = 0x27B29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B298u;
        // 0x27b29c: 0xc6820008  lwc1        $f2, 0x8($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B2A0u;
        goto label_27b2a0;
    }
    ctx->pc = 0x27B298u;
    {
        const bool branch_taken_0x27b298 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b298) {
            ctx->pc = 0x27B29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B298u;
            // 0x27b29c: 0xc6820008  lwc1        $f2, 0x8($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B2A8u;
            goto label_27b2a8;
        }
    }
    ctx->pc = 0x27B2A0u;
label_27b2a0:
    // 0x27b2a0: 0x10000006  b           . + 4 + (0x6 << 2)
label_27b2a4:
    if (ctx->pc == 0x27B2A4u) {
        ctx->pc = 0x27B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B2A0u;
        // 0x27b2a4: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B2A8u;
        goto label_27b2a8;
    }
    ctx->pc = 0x27B2A0u;
    {
        const bool branch_taken_0x27b2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B2A0u;
        // 0x27b2a4: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b2a0) {
            ctx->pc = 0x27B2BCu;
            goto label_27b2bc;
        }
    }
    ctx->pc = 0x27B2A8u;
label_27b2a8:
    // 0x27b2a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27b2a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27b2ac:
    // 0x27b2ac: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x27b2acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27b2b0:
    // 0x27b2b0: 0x0  nop
    ctx->pc = 0x27b2b0u;
    // NOP
label_27b2b4:
    // 0x27b2b4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_27b2b8:
    if (ctx->pc == 0x27B2B8u) {
        ctx->pc = 0x27B2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B2B4u;
        // 0x27b2b8: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B2BCu;
        goto label_27b2bc;
    }
    ctx->pc = 0x27B2B4u;
    {
        const bool branch_taken_0x27b2b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b2b4) {
            ctx->pc = 0x27B2B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B2B4u;
            // 0x27b2b8: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B2BCu;
            goto label_27b2bc;
        }
    }
    ctx->pc = 0x27B2BCu;
label_27b2bc:
    // 0x27b2bc: 0xc6e10008  lwc1        $f1, 0x8($s7)
    ctx->pc = 0x27b2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b2c0:
    // 0x27b2c0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x27b2c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_27b2c4:
    // 0x27b2c4: 0xc6820018  lwc1        $f2, 0x18($s4)
    ctx->pc = 0x27b2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27b2c8:
    // 0x27b2c8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x27b2c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27b2cc:
    // 0x27b2cc: 0x0  nop
    ctx->pc = 0x27b2ccu;
    // NOP
label_27b2d0:
    // 0x27b2d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_27b2d4:
    if (ctx->pc == 0x27B2D4u) {
        ctx->pc = 0x27B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B2D0u;
        // 0x27b2d4: 0x460018c0  add.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B2D8u;
        goto label_27b2d8;
    }
    ctx->pc = 0x27B2D0u;
    {
        const bool branch_taken_0x27b2d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B2D0u;
        // 0x27b2d4: 0x460018c0  add.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b2d0) {
            ctx->pc = 0x27B2E0u;
            goto label_27b2e0;
        }
    }
    ctx->pc = 0x27B2D8u;
label_27b2d8:
    // 0x27b2d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_27b2dc:
    if (ctx->pc == 0x27B2DCu) {
        ctx->pc = 0x27B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B2D8u;
        // 0x27b2dc: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B2E0u;
        goto label_27b2e0;
    }
    ctx->pc = 0x27B2D8u;
    {
        const bool branch_taken_0x27b2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B2D8u;
        // 0x27b2dc: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b2d8) {
            ctx->pc = 0x27B2F8u;
            goto label_27b2f8;
        }
    }
    ctx->pc = 0x27B2E0u;
label_27b2e0:
    // 0x27b2e0: 0xc682000c  lwc1        $f2, 0xC($s4)
    ctx->pc = 0x27b2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27b2e4:
    // 0x27b2e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27b2e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27b2e8:
    // 0x27b2e8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x27b2e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27b2ec:
    // 0x27b2ec: 0x0  nop
    ctx->pc = 0x27b2ecu;
    // NOP
label_27b2f0:
    // 0x27b2f0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_27b2f4:
    if (ctx->pc == 0x27B2F4u) {
        ctx->pc = 0x27B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B2F0u;
        // 0x27b2f4: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B2F8u;
        goto label_27b2f8;
    }
    ctx->pc = 0x27B2F0u;
    {
        const bool branch_taken_0x27b2f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b2f0) {
            ctx->pc = 0x27B2F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B2F0u;
            // 0x27b2f4: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B2F8u;
            goto label_27b2f8;
        }
    }
    ctx->pc = 0x27B2F8u;
label_27b2f8:
    // 0x27b2f8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x27b2f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_27b2fc:
    // 0x27b2fc: 0xc6e7000c  lwc1        $f7, 0xC($s7)
    ctx->pc = 0x27b2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_27b300:
    // 0x27b300: 0x46073842  mul.s       $f1, $f7, $f7
    ctx->pc = 0x27b300u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
label_27b304:
    // 0x27b304: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x27b304u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_27b308:
    // 0x27b308: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27b308u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27b30c:
    // 0x27b30c: 0x0  nop
    ctx->pc = 0x27b30cu;
    // NOP
label_27b310:
    // 0x27b310: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_27b314:
    if (ctx->pc == 0x27B314u) {
        ctx->pc = 0x27B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B310u;
        // 0x27b314: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B318u;
        goto label_27b318;
    }
    ctx->pc = 0x27B310u;
    {
        const bool branch_taken_0x27b310 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B310u;
        // 0x27b314: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b310) {
            ctx->pc = 0x27B31Cu;
            goto label_27b31c;
        }
    }
    ctx->pc = 0x27B318u;
label_27b318:
    // 0x27b318: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27b318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b31c:
    // 0x27b31c: 0x1040020e  beqz        $v0, . + 4 + (0x20E << 2)
label_27b320:
    if (ctx->pc == 0x27B320u) {
        ctx->pc = 0x27B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B31Cu;
        // 0x27b320: 0x7bb00310  lq          $s0, 0x310($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 784)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B324u;
        goto label_27b324;
    }
    ctx->pc = 0x27B31Cu;
    {
        const bool branch_taken_0x27b31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B31Cu;
        // 0x27b320: 0x7bb00310  lq          $s0, 0x310($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b31c) {
            ctx->pc = 0x27BB58u;
            goto label_27bb58;
        }
    }
    ctx->pc = 0x27B324u;
label_27b324:
    // 0x27b324: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27b324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_27b328:
    // 0x27b328: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27b328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27b32c:
    // 0x27b32c: 0xc786803c  lwc1        $f6, -0x7FC4($gp)
    ctx->pc = 0x27b32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_27b330:
    // 0x27b330: 0x46070583  div.s       $f22, $f0, $f7
    ctx->pc = 0x27b330u;
    ctx->f[22] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[7]);
label_27b334:
    // 0x27b334: 0x46063982  mul.s       $f6, $f7, $f6
    ctx->pc = 0x27b334u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
label_27b338:
    // 0x27b338: 0x6ae20007  ldl         $v0, 0x7($s7)
    ctx->pc = 0x27b338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_27b33c:
    // 0x27b33c: 0x6ee20000  ldr         $v0, 0x0($s7)
    ctx->pc = 0x27b33cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_27b340:
    // 0x27b340: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x27b340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_27b344:
    // 0x27b344: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x27b344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b348:
    // 0x27b348: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x27b348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b34c:
    // 0x27b34c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x27b34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_27b350:
    // 0x27b350: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x27b350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_27b354:
    // 0x27b354: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x27b354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_27b358:
    // 0x27b358: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x27b358u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_27b35c:
    // 0x27b35c: 0xb3a60013  sdl         $a2, 0x13($sp)
    ctx->pc = 0x27b35cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b360:
    // 0x27b360: 0xb7a6000c  sdr         $a2, 0xC($sp)
    ctx->pc = 0x27b360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b364:
    // 0x27b364: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x27b364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
label_27b368:
    // 0x27b368: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x27b368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27b36c:
    // 0x27b36c: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x27b36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27b370:
    // 0x27b370: 0xc7a50014  lwc1        $f5, 0x14($sp)
    ctx->pc = 0x27b370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_27b374:
    // 0x27b374: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x27b374u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_27b378:
    // 0x27b378: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x27b378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27b37c:
    // 0x27b37c: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x27b37cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
label_27b380:
    // 0x27b380: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x27b380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b384:
    // 0x27b384: 0x46072941  sub.s       $f5, $f5, $f7
    ctx->pc = 0x27b384u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
label_27b388:
    // 0x27b388: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x27b388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b38c:
    // 0x27b38c: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x27b38cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
label_27b390:
    // 0x27b390: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x27b390u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
label_27b394:
    // 0x27b394: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x27b394u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_27b398:
    // 0x27b398: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x27b398u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
label_27b39c:
    // 0x27b39c: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x27b39cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_27b3a0:
    // 0x27b3a0: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x27b3a0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_27b3a4:
    // 0x27b3a4: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x27b3a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_27b3a8:
    // 0x27b3a8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x27b3a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_27b3ac:
    // 0x27b3ac: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x27b3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_27b3b0:
    // 0x27b3b0: 0x6ae30007  ldl         $v1, 0x7($s7)
    ctx->pc = 0x27b3b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_27b3b4:
    // 0x27b3b4: 0x6ee30000  ldr         $v1, 0x0($s7)
    ctx->pc = 0x27b3b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_27b3b8:
    // 0x27b3b8: 0x8ee40008  lw          $a0, 0x8($s7)
    ctx->pc = 0x27b3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_27b3bc:
    // 0x27b3bc: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x27b3bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b3c0:
    // 0x27b3c0: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x27b3c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b3c4:
    // 0x27b3c4: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x27b3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_27b3c8:
    // 0x27b3c8: 0x6ba70027  ldl         $a3, 0x27($sp)
    ctx->pc = 0x27b3c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_27b3cc:
    // 0x27b3cc: 0x6fa70020  ldr         $a3, 0x20($sp)
    ctx->pc = 0x27b3ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_27b3d0:
    // 0x27b3d0: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x27b3d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_27b3d4:
    // 0x27b3d4: 0xb3a70033  sdl         $a3, 0x33($sp)
    ctx->pc = 0x27b3d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b3d8:
    // 0x27b3d8: 0xb7a7002c  sdr         $a3, 0x2C($sp)
    ctx->pc = 0x27b3d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b3dc:
    // 0x27b3dc: 0xafa80034  sw          $t0, 0x34($sp)
    ctx->pc = 0x27b3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 8));
label_27b3e0:
    // 0x27b3e0: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x27b3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27b3e4:
    // 0x27b3e4: 0xc7a40030  lwc1        $f4, 0x30($sp)
    ctx->pc = 0x27b3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27b3e8:
    // 0x27b3e8: 0xc7a50034  lwc1        $f5, 0x34($sp)
    ctx->pc = 0x27b3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_27b3ec:
    // 0x27b3ec: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x27b3ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
label_27b3f0:
    // 0x27b3f0: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x27b3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27b3f4:
    // 0x27b3f4: 0x46062101  sub.s       $f4, $f4, $f6
    ctx->pc = 0x27b3f4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
label_27b3f8:
    // 0x27b3f8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x27b3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b3fc:
    // 0x27b3fc: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x27b3fcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
label_27b400:
    // 0x27b400: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x27b400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b404:
    // 0x27b404: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x27b404u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
label_27b408:
    // 0x27b408: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x27b408u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_27b40c:
    // 0x27b40c: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x27b40cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_27b410:
    // 0x27b410: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x27b410u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_27b414:
    // 0x27b414: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x27b414u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_27b418:
    // 0x27b418: 0xe7a50034  swc1        $f5, 0x34($sp)
    ctx->pc = 0x27b418u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_27b41c:
    // 0x27b41c: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x27b41cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_27b420:
    // 0x27b420: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x27b420u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_27b424:
    // 0x27b424: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x27b424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_27b428:
    // 0x27b428: 0x8fc2005c  lw          $v0, 0x5C($fp)
    ctx->pc = 0x27b428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 92)));
label_27b42c:
    // 0x27b42c: 0x8fde002c  lw          $fp, 0x2C($fp)
    ctx->pc = 0x27b42cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
label_27b430:
    // 0x27b430: 0x8c4b0014  lw          $t3, 0x14($v0)
    ctx->pc = 0x27b430u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_27b434:
    // 0x27b434: 0xafbe0244  sw          $fp, 0x244($sp)
    ctx->pc = 0x27b434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 30));
label_27b438:
    // 0x27b438: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x27b438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b43c:
    // 0x27b43c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x27b43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b440:
    // 0x27b440: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27b440u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27b444:
    // 0x27b444: 0x0  nop
    ctx->pc = 0x27b444u;
    // NOP
label_27b448:
    // 0x27b448: 0x4500006b  bc1f        . + 4 + (0x6B << 2)
label_27b44c:
    if (ctx->pc == 0x27B44Cu) {
        ctx->pc = 0x27B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B448u;
        // 0x27b44c: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B450u;
        goto label_27b450;
    }
    ctx->pc = 0x27B448u;
    {
        const bool branch_taken_0x27b448 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B448u;
        // 0x27b44c: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b448) {
            ctx->pc = 0x27B5F8u;
            goto label_27b5f8;
        }
    }
    ctx->pc = 0x27B450u;
label_27b450:
    // 0x27b450: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x27b450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b454:
    // 0x27b454: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27b454u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27b458:
    // 0x27b458: 0x0  nop
    ctx->pc = 0x27b458u;
    // NOP
label_27b45c:
    // 0x27b45c: 0x45000066  bc1f        . + 4 + (0x66 << 2)
label_27b460:
    if (ctx->pc == 0x27B460u) {
        ctx->pc = 0x27B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B45Cu;
        // 0x27b460: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B464u;
        goto label_27b464;
    }
    ctx->pc = 0x27B45Cu;
    {
        const bool branch_taken_0x27b45c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B45Cu;
        // 0x27b460: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b45c) {
            ctx->pc = 0x27B5F8u;
            goto label_27b5f8;
        }
    }
    ctx->pc = 0x27B464u;
label_27b464:
    // 0x27b464: 0xc6810018  lwc1        $f1, 0x18($s4)
    ctx->pc = 0x27b464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b468:
    // 0x27b468: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27b468u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27b46c:
    // 0x27b46c: 0x0  nop
    ctx->pc = 0x27b46cu;
    // NOP
label_27b470:
    // 0x27b470: 0x45000061  bc1f        . + 4 + (0x61 << 2)
label_27b474:
    if (ctx->pc == 0x27B474u) {
        ctx->pc = 0x27B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B470u;
        // 0x27b474: 0xc7a0000c  lwc1        $f0, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B478u;
        goto label_27b478;
    }
    ctx->pc = 0x27B470u;
    {
        const bool branch_taken_0x27b470 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B470u;
        // 0x27b474: 0xc7a0000c  lwc1        $f0, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b470) {
            ctx->pc = 0x27B5F8u;
            goto label_27b5f8;
        }
    }
    ctx->pc = 0x27B478u;
label_27b478:
    // 0x27b478: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x27b478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b47c:
    // 0x27b47c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27b47cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27b480:
    // 0x27b480: 0x0  nop
    ctx->pc = 0x27b480u;
    // NOP
label_27b484:
    // 0x27b484: 0x4500005c  bc1f        . + 4 + (0x5C << 2)
label_27b488:
    if (ctx->pc == 0x27B488u) {
        ctx->pc = 0x27B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B484u;
        // 0x27b488: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B48Cu;
        goto label_27b48c;
    }
    ctx->pc = 0x27B484u;
    {
        const bool branch_taken_0x27b484 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B484u;
        // 0x27b488: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b484) {
            ctx->pc = 0x27B5F8u;
            goto label_27b5f8;
        }
    }
    ctx->pc = 0x27B48Cu;
label_27b48c:
    // 0x27b48c: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x27b48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b490:
    // 0x27b490: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27b490u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27b494:
    // 0x27b494: 0x0  nop
    ctx->pc = 0x27b494u;
    // NOP
label_27b498:
    // 0x27b498: 0x45000057  bc1f        . + 4 + (0x57 << 2)
label_27b49c:
    if (ctx->pc == 0x27B49Cu) {
        ctx->pc = 0x27B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B498u;
        // 0x27b49c: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B4A0u;
        goto label_27b4a0;
    }
    ctx->pc = 0x27B498u;
    {
        const bool branch_taken_0x27b498 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B498u;
        // 0x27b49c: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b498) {
            ctx->pc = 0x27B5F8u;
            goto label_27b5f8;
        }
    }
    ctx->pc = 0x27B4A0u;
label_27b4a0:
    // 0x27b4a0: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x27b4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b4a4:
    // 0x27b4a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27b4a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27b4a8:
    // 0x27b4a8: 0x0  nop
    ctx->pc = 0x27b4a8u;
    // NOP
label_27b4ac:
    // 0x27b4ac: 0x45000052  bc1f        . + 4 + (0x52 << 2)
label_27b4b0:
    if (ctx->pc == 0x27B4B0u) {
        ctx->pc = 0x27B4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B4ACu;
        // 0x27b4b0: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B4B4u;
        goto label_27b4b4;
    }
    ctx->pc = 0x27B4ACu;
    {
        const bool branch_taken_0x27b4ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27B4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B4ACu;
        // 0x27b4b0: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b4ac) {
            ctx->pc = 0x27B5F8u;
            goto label_27b5f8;
        }
    }
    ctx->pc = 0x27B4B4u;
label_27b4b4:
    // 0x27b4b4: 0xa7a00076  sh          $zero, 0x76($sp)
    ctx->pc = 0x27b4b4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 118), (uint16_t)GPR_U32(ctx, 0));
label_27b4b8:
    // 0x27b4b8: 0xa3a20075  sb          $v0, 0x75($sp)
    ctx->pc = 0x27b4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 117), (uint8_t)GPR_U32(ctx, 2));
label_27b4bc:
    // 0x27b4bc: 0xafb40040  sw          $s4, 0x40($sp)
    ctx->pc = 0x27b4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 20));
label_27b4c0:
    // 0x27b4c0: 0x9682001e  lhu         $v0, 0x1E($s4)
    ctx->pc = 0x27b4c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 30)));
label_27b4c4:
    // 0x27b4c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_27b4c8:
    if (ctx->pc == 0x27B4C8u) {
        ctx->pc = 0x27B4CCu;
        goto label_27b4cc;
    }
    ctx->pc = 0x27B4C4u;
    {
        const bool branch_taken_0x27b4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b4c4) {
            ctx->pc = 0x27B4D8u;
            goto label_27b4d8;
        }
    }
    ctx->pc = 0x27B4CCu;
label_27b4cc:
    // 0x27b4cc: 0x9282001c  lbu         $v0, 0x1C($s4)
    ctx->pc = 0x27b4ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 28)));
label_27b4d0:
    // 0x27b4d0: 0xa3a20075  sb          $v0, 0x75($sp)
    ctx->pc = 0x27b4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 117), (uint8_t)GPR_U32(ctx, 2));
label_27b4d4:
    // 0x27b4d4: 0x0  nop
    ctx->pc = 0x27b4d4u;
    // NOP
label_27b4d8:
    // 0x27b4d8: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x27b4d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_27b4dc:
    // 0x27b4dc: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x27b4dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_27b4e0:
    // 0x27b4e0: 0x6ba5000f  ldl         $a1, 0xF($sp)
    ctx->pc = 0x27b4e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_27b4e4:
    // 0x27b4e4: 0x6fa50008  ldr         $a1, 0x8($sp)
    ctx->pc = 0x27b4e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_27b4e8:
    // 0x27b4e8: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x27b4e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_27b4ec:
    // 0x27b4ec: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x27b4ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_27b4f0:
    // 0x27b4f0: 0xb3a4004b  sdl         $a0, 0x4B($sp)
    ctx->pc = 0x27b4f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b4f4:
    // 0x27b4f4: 0xb7a40044  sdr         $a0, 0x44($sp)
    ctx->pc = 0x27b4f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b4f8:
    // 0x27b4f8: 0xb3a50053  sdl         $a1, 0x53($sp)
    ctx->pc = 0x27b4f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b4fc:
    // 0x27b4fc: 0xb7a5004c  sdr         $a1, 0x4C($sp)
    ctx->pc = 0x27b4fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b500:
    // 0x27b500: 0xb3a6005b  sdl         $a2, 0x5B($sp)
    ctx->pc = 0x27b500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b504:
    // 0x27b504: 0xb7a60054  sdr         $a2, 0x54($sp)
    ctx->pc = 0x27b504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b508:
    // 0x27b508: 0x27a20074  addiu       $v0, $sp, 0x74
    ctx->pc = 0x27b508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_27b50c:
    // 0x27b50c: 0x6ba80027  ldl         $t0, 0x27($sp)
    ctx->pc = 0x27b50cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_27b510:
    // 0x27b510: 0x6fa80020  ldr         $t0, 0x20($sp)
    ctx->pc = 0x27b510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_27b514:
    // 0x27b514: 0x6ba3002f  ldl         $v1, 0x2F($sp)
    ctx->pc = 0x27b514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_27b518:
    // 0x27b518: 0x6fa30028  ldr         $v1, 0x28($sp)
    ctx->pc = 0x27b518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_27b51c:
    // 0x27b51c: 0x6ba40037  ldl         $a0, 0x37($sp)
    ctx->pc = 0x27b51cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_27b520:
    // 0x27b520: 0x6fa40030  ldr         $a0, 0x30($sp)
    ctx->pc = 0x27b520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_27b524:
    // 0x27b524: 0xb3a80063  sdl         $t0, 0x63($sp)
    ctx->pc = 0x27b524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b528:
    // 0x27b528: 0xb7a8005c  sdr         $t0, 0x5C($sp)
    ctx->pc = 0x27b528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b52c:
    // 0x27b52c: 0xb3a3006b  sdl         $v1, 0x6B($sp)
    ctx->pc = 0x27b52cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b530:
    // 0x27b530: 0xb7a30064  sdr         $v1, 0x64($sp)
    ctx->pc = 0x27b530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b534:
    // 0x27b534: 0xb3a40073  sdl         $a0, 0x73($sp)
    ctx->pc = 0x27b534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b538:
    // 0x27b538: 0xb7a4006c  sdr         $a0, 0x6C($sp)
    ctx->pc = 0x27b538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27b53c:
    // 0x27b53c: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x27b53cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_27b540:
    // 0x27b540: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x27b540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b544:
    // 0x27b544: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x27b544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b548:
    // 0x27b548: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27b548u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27b54c:
    // 0x27b54c: 0x0  nop
    ctx->pc = 0x27b54cu;
    // NOP
label_27b550:
    // 0x27b550: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_27b554:
    if (ctx->pc == 0x27B554u) {
        ctx->pc = 0x27B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B550u;
        // 0x27b554: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B558u;
        goto label_27b558;
    }
    ctx->pc = 0x27B550u;
    {
        const bool branch_taken_0x27b550 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B550u;
        // 0x27b554: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b550) {
            ctx->pc = 0x27B560u;
            goto label_27b560;
        }
    }
    ctx->pc = 0x27B558u;
label_27b558:
    // 0x27b558: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x27b558u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b55c:
    // 0x27b55c: 0x0  nop
    ctx->pc = 0x27b55cu;
    // NOP
label_27b560:
    // 0x27b560: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x27b560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b564:
    // 0x27b564: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x27b564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b568:
    // 0x27b568: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27b568u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27b56c:
    // 0x27b56c: 0x0  nop
    ctx->pc = 0x27b56cu;
    // NOP
label_27b570:
    // 0x27b570: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_27b574:
    if (ctx->pc == 0x27B574u) {
        ctx->pc = 0x27B574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B570u;
        // 0x27b574: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B578u;
        goto label_27b578;
    }
    ctx->pc = 0x27B570u;
    {
        const bool branch_taken_0x27b570 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27B574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B570u;
        // 0x27b574: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b570) {
            ctx->pc = 0x27B57Cu;
            goto label_27b57c;
        }
    }
    ctx->pc = 0x27B578u;
label_27b578:
    // 0x27b578: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x27b578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_27b57c:
    // 0x27b57c: 0xc6810018  lwc1        $f1, 0x18($s4)
    ctx->pc = 0x27b57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b580:
    // 0x27b580: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x27b580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b584:
    // 0x27b584: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27b584u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27b588:
    // 0x27b588: 0x0  nop
    ctx->pc = 0x27b588u;
    // NOP
label_27b58c:
    // 0x27b58c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_27b590:
    if (ctx->pc == 0x27B590u) {
        ctx->pc = 0x27B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B58Cu;
        // 0x27b590: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B594u;
        goto label_27b594;
    }
    ctx->pc = 0x27B58Cu;
    {
        const bool branch_taken_0x27b58c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b58c) {
            ctx->pc = 0x27B590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B58Cu;
            // 0x27b590: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B594u;
            goto label_27b594;
        }
    }
    ctx->pc = 0x27B594u;
label_27b594:
    // 0x27b594: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x27b594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b598:
    // 0x27b598: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x27b598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b59c:
    // 0x27b59c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27b59cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27b5a0:
    // 0x27b5a0: 0x0  nop
    ctx->pc = 0x27b5a0u;
    // NOP
label_27b5a4:
    // 0x27b5a4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_27b5a8:
    if (ctx->pc == 0x27B5A8u) {
        ctx->pc = 0x27B5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B5A4u;
        // 0x27b5a8: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B5ACu;
        goto label_27b5ac;
    }
    ctx->pc = 0x27B5A4u;
    {
        const bool branch_taken_0x27b5a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b5a4) {
            ctx->pc = 0x27B5A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B5A4u;
            // 0x27b5a8: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B5ACu;
            goto label_27b5ac;
        }
    }
    ctx->pc = 0x27B5ACu;
label_27b5ac:
    // 0x27b5ac: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x27b5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b5b0:
    // 0x27b5b0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x27b5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b5b4:
    // 0x27b5b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27b5b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27b5b8:
    // 0x27b5b8: 0x0  nop
    ctx->pc = 0x27b5b8u;
    // NOP
label_27b5bc:
    // 0x27b5bc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_27b5c0:
    if (ctx->pc == 0x27B5C0u) {
        ctx->pc = 0x27B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B5BCu;
        // 0x27b5c0: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B5C4u;
        goto label_27b5c4;
    }
    ctx->pc = 0x27B5BCu;
    {
        const bool branch_taken_0x27b5bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b5bc) {
            ctx->pc = 0x27B5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B5BCu;
            // 0x27b5c0: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B5C4u;
            goto label_27b5c4;
        }
    }
    ctx->pc = 0x27B5C4u;
label_27b5c4:
    // 0x27b5c4: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x27b5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b5c8:
    // 0x27b5c8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x27b5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b5cc:
    // 0x27b5cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27b5ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27b5d0:
    // 0x27b5d0: 0x0  nop
    ctx->pc = 0x27b5d0u;
    // NOP
label_27b5d4:
    // 0x27b5d4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_27b5d8:
    if (ctx->pc == 0x27B5D8u) {
        ctx->pc = 0x27B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B5D4u;
        // 0x27b5d8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B5DCu;
        goto label_27b5dc;
    }
    ctx->pc = 0x27B5D4u;
    {
        const bool branch_taken_0x27b5d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B5D4u;
        // 0x27b5d8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b5d4) {
            ctx->pc = 0x27B5E0u;
            goto label_27b5e0;
        }
    }
    ctx->pc = 0x27B5DCu;
label_27b5dc:
    // 0x27b5dc: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x27b5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_27b5e0:
    // 0x27b5e0: 0x27a20084  addiu       $v0, $sp, 0x84
    ctx->pc = 0x27b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_27b5e4:
    // 0x27b5e4: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x27b5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
label_27b5e8:
    // 0x27b5e8: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x27b5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
label_27b5ec:
    // 0x27b5ec: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x27b5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_27b5f0:
    // 0x27b5f0: 0x10000004  b           . + 4 + (0x4 << 2)
label_27b5f4:
    if (ctx->pc == 0x27B5F4u) {
        ctx->pc = 0x27B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B5F0u;
        // 0x27b5f4: 0xafa60258  sw          $a2, 0x258($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B5F8u;
        goto label_27b5f8;
    }
    ctx->pc = 0x27B5F0u;
    {
        const bool branch_taken_0x27b5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B5F0u;
        // 0x27b5f4: 0xafa60258  sw          $a2, 0x258($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b5f0) {
            ctx->pc = 0x27B604u;
            goto label_27b604;
        }
    }
    ctx->pc = 0x27B5F8u;
label_27b5f8:
    // 0x27b5f8: 0x27a2007c  addiu       $v0, $sp, 0x7C
    ctx->pc = 0x27b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_27b5fc:
    // 0x27b5fc: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x27b5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
label_27b600:
    // 0x27b600: 0xafa20258  sw          $v0, 0x258($sp)
    ctx->pc = 0x27b600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 2));
label_27b604:
    // 0x27b604: 0x8fa30184  lw          $v1, 0x184($sp)
    ctx->pc = 0x27b604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
label_27b608:
    // 0x27b608: 0x8fa70258  lw          $a3, 0x258($sp)
    ctx->pc = 0x27b608u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_27b60c:
    // 0x27b60c: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x27b60cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_27b610:
    // 0x27b610: 0x10400150  beqz        $v0, . + 4 + (0x150 << 2)
label_27b614:
    if (ctx->pc == 0x27B614u) {
        ctx->pc = 0x27B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B610u;
        // 0x27b614: 0x27a80044  addiu       $t0, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B618u;
        goto label_27b618;
    }
    ctx->pc = 0x27B610u;
    {
        const bool branch_taken_0x27b610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B610u;
        // 0x27b614: 0x27a80044  addiu       $t0, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b610) {
            ctx->pc = 0x27BB54u;
            goto label_27bb54;
        }
    }
    ctx->pc = 0x27B618u;
label_27b618:
    // 0x27b618: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x27b618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_27b61c:
    // 0x27b61c: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x27b61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_27b620:
    // 0x27b620: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x27b620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_27b624:
    // 0x27b624: 0xafa80248  sw          $t0, 0x248($sp)
    ctx->pc = 0x27b624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 8));
label_27b628:
    // 0x27b628: 0x241e00ff  addiu       $fp, $zero, 0xFF
    ctx->pc = 0x27b628u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_27b62c:
    // 0x27b62c: 0xafa2024c  sw          $v0, 0x24C($sp)
    ctx->pc = 0x27b62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
label_27b630:
    // 0x27b630: 0xafa40250  sw          $a0, 0x250($sp)
    ctx->pc = 0x27b630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 4));
label_27b634:
    // 0x27b634: 0xafa50254  sw          $a1, 0x254($sp)
    ctx->pc = 0x27b634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 5));
label_27b638:
    // 0x27b638: 0x8c64fff8  lw          $a0, -0x8($v1)
    ctx->pc = 0x27b638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_27b63c:
    // 0x27b63c: 0x0  nop
    ctx->pc = 0x27b63cu;
    // NOP
label_27b640:
    // 0x27b640: 0x2465fff8  addiu       $a1, $v1, -0x8
    ctx->pc = 0x27b640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_27b644:
    // 0x27b644: 0x10000067  b           . + 4 + (0x67 << 2)
label_27b648:
    if (ctx->pc == 0x27B648u) {
        ctx->pc = 0x27B648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B644u;
        // 0x27b648: 0xafa50184  sw          $a1, 0x184($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B64Cu;
        goto label_27b64c;
    }
    ctx->pc = 0x27B644u;
    {
        const bool branch_taken_0x27b644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B644u;
        // 0x27b648: 0xafa50184  sw          $a1, 0x184($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b644) {
            ctx->pc = 0x27B7E4u;
            goto label_27b7e4;
        }
    }
    ctx->pc = 0x27B64Cu;
label_27b64c:
    // 0x27b64c: 0x0  nop
    ctx->pc = 0x27b64cu;
    // NOP
label_27b650:
    // 0x27b650: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x27b650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_27b654:
    // 0x27b654: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_27b658:
    if (ctx->pc == 0x27B658u) {
        ctx->pc = 0x27B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B654u;
        // 0x27b658: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B65Cu;
        goto label_27b65c;
    }
    ctx->pc = 0x27B654u;
    {
        const bool branch_taken_0x27b654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B654u;
        // 0x27b658: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b654) {
            ctx->pc = 0x27B704u;
            goto label_27b704;
        }
    }
    ctx->pc = 0x27B65Cu;
label_27b65c:
    // 0x27b65c: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x27b65cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_27b660:
    // 0x27b660: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x27b660u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_27b664:
    // 0x27b664: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x27b664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_27b668:
    // 0x27b668: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x27b668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_27b66c:
    // 0x27b66c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x27b66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27b670:
    // 0x27b670: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x27b670u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_27b674:
    // 0x27b674: 0x145e000b  bne         $v0, $fp, . + 4 + (0xB << 2)
label_27b678:
    if (ctx->pc == 0x27B678u) {
        ctx->pc = 0x27B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B674u;
        // 0x27b678: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B67Cu;
        goto label_27b67c;
    }
    ctx->pc = 0x27B674u;
    {
        const bool branch_taken_0x27b674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x27B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B674u;
        // 0x27b678: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b674) {
            ctx->pc = 0x27B6A4u;
            goto label_27b6a4;
        }
    }
    ctx->pc = 0x27B67Cu;
label_27b67c:
    // 0x27b67c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x27b67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_27b680:
    // 0x27b680: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x27b680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_27b684:
    // 0x27b684: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x27b684u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_27b688:
    // 0x27b688: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x27b688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_27b68c:
    // 0x27b68c: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x27b68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_27b690:
    // 0x27b690: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x27b690u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_27b694:
    // 0x27b694: 0x0  nop
    ctx->pc = 0x27b694u;
    // NOP
label_27b698:
    // 0x27b698: 0x0  nop
    ctx->pc = 0x27b698u;
    // NOP
label_27b69c:
    // 0x27b69c: 0x5066fffa  beql        $v1, $a2, . + 4 + (-0x6 << 2)
label_27b6a0:
    if (ctx->pc == 0x27B6A0u) {
        ctx->pc = 0x27B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B69Cu;
        // 0x27b6a0: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B6A4u;
        goto label_27b6a4;
    }
    ctx->pc = 0x27B69Cu;
    {
        const bool branch_taken_0x27b69c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x27b69c) {
            ctx->pc = 0x27B6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B69Cu;
            // 0x27b6a0: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27b688;
        }
    }
    ctx->pc = 0x27B6A4u;
label_27b6a4:
    // 0x27b6a4: 0x24e50008  addiu       $a1, $a3, 0x8
    ctx->pc = 0x27b6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_27b6a8:
    // 0x27b6a8: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x27b6a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_27b6ac:
    // 0x27b6ac: 0x145e000b  bne         $v0, $fp, . + 4 + (0xB << 2)
label_27b6b0:
    if (ctx->pc == 0x27B6B0u) {
        ctx->pc = 0x27B6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B6ACu;
        // 0x27b6b0: 0x94860002  lhu         $a2, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B6B4u;
        goto label_27b6b4;
    }
    ctx->pc = 0x27B6ACu;
    {
        const bool branch_taken_0x27b6ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x27B6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B6ACu;
        // 0x27b6b0: 0x94860002  lhu         $a2, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b6ac) {
            ctx->pc = 0x27B6DCu;
            goto label_27b6dc;
        }
    }
    ctx->pc = 0x27B6B4u;
label_27b6b4:
    // 0x27b6b4: 0x8d040020  lw          $a0, 0x20($t0)
    ctx->pc = 0x27b6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_27b6b8:
    // 0x27b6b8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x27b6b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_27b6bc:
    // 0x27b6bc: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x27b6bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_27b6c0:
    // 0x27b6c0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x27b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_27b6c4:
    // 0x27b6c4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_27b6c8:
    // 0x27b6c8: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x27b6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_27b6cc:
    // 0x27b6cc: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x27b6ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_27b6d0:
    // 0x27b6d0: 0x0  nop
    ctx->pc = 0x27b6d0u;
    // NOP
label_27b6d4:
    // 0x27b6d4: 0x5067fffa  beql        $v1, $a3, . + 4 + (-0x6 << 2)
label_27b6d8:
    if (ctx->pc == 0x27B6D8u) {
        ctx->pc = 0x27B6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B6D4u;
        // 0x27b6d8: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B6DCu;
        goto label_27b6dc;
    }
    ctx->pc = 0x27B6D4u;
    {
        const bool branch_taken_0x27b6d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x27b6d4) {
            ctx->pc = 0x27B6D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B6D4u;
            // 0x27b6d8: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27b6c0;
        }
    }
    ctx->pc = 0x27B6DCu;
label_27b6dc:
    // 0x27b6dc: 0xa7a60190  sh          $a2, 0x190($sp)
    ctx->pc = 0x27b6dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 400), (uint16_t)GPR_U32(ctx, 6));
label_27b6e0:
    // 0x27b6e0: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x27b6e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_27b6e4:
    // 0x27b6e4: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x27b6e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_27b6e8:
    // 0x27b6e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27b6ec:
    // 0x27b6ec: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x27b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_27b6f0:
    // 0x27b6f0: 0xa7a20192  sh          $v0, 0x192($sp)
    ctx->pc = 0x27b6f0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 402), (uint16_t)GPR_U32(ctx, 2));
label_27b6f4:
    // 0x27b6f4: 0x10000043  b           . + 4 + (0x43 << 2)
label_27b6f8:
    if (ctx->pc == 0x27B6F8u) {
        ctx->pc = 0x27B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B6F4u;
        // 0x27b6f8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B6FCu;
        goto label_27b6fc;
    }
    ctx->pc = 0x27B6F4u;
    {
        const bool branch_taken_0x27b6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B6F4u;
        // 0x27b6f8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b6f4) {
            ctx->pc = 0x27B804u;
            goto label_27b804;
        }
    }
    ctx->pc = 0x27B6FCu;
label_27b6fc:
    // 0x27b6fc: 0x10000037  b           . + 4 + (0x37 << 2)
label_27b700:
    if (ctx->pc == 0x27B700u) {
        ctx->pc = 0x27B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B6FCu;
        // 0x27b700: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B704u;
        goto label_27b704;
    }
    ctx->pc = 0x27B6FCu;
    {
        const bool branch_taken_0x27b6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B6FCu;
        // 0x27b700: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b6fc) {
            ctx->pc = 0x27B7DCu;
            goto label_27b7dc;
        }
    }
    ctx->pc = 0x27B704u;
label_27b704:
    // 0x27b704: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x27b704u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_27b708:
    // 0x27b708: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x27b708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_27b70c:
    // 0x27b70c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x27b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_27b710:
    // 0x27b710: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x27b710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_27b714:
    // 0x27b714: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x27b714u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_27b718:
    // 0x27b718: 0x3065000c  andi        $a1, $v1, 0xC
    ctx->pc = 0x27b718u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
label_27b71c:
    // 0x27b71c: 0x8fa60248  lw          $a2, 0x248($sp)
    ctx->pc = 0x27b71cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
label_27b720:
    // 0x27b720: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x27b720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_27b724:
    // 0x27b724: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x27b724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b728:
    // 0x27b728: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x27b728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b72c:
    // 0x27b72c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27b72cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27b730:
    // 0x27b730: 0x0  nop
    ctx->pc = 0x27b730u;
    // NOP
label_27b734:
    // 0x27b734: 0x4501fff1  bc1t        . + 4 + (-0xF << 2)
label_27b738:
    if (ctx->pc == 0x27B738u) {
        ctx->pc = 0x27B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B734u;
        // 0x27b738: 0x8fa8024c  lw          $t0, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B73Cu;
        goto label_27b73c;
    }
    ctx->pc = 0x27B734u;
    {
        const bool branch_taken_0x27b734 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B734u;
        // 0x27b738: 0x8fa8024c  lw          $t0, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b734) {
            ctx->pc = 0x27B6FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27b6fc;
        }
    }
    ctx->pc = 0x27B73Cu;
label_27b73c:
    // 0x27b73c: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x27b73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_27b740:
    // 0x27b740: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x27b740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b744:
    // 0x27b744: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x27b744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_27b748:
    // 0x27b748: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x27b748u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_27b74c:
    // 0x27b74c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27b74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b750:
    // 0x27b750: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27b750u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27b754:
    // 0x27b754: 0x0  nop
    ctx->pc = 0x27b754u;
    // NOP
label_27b758:
    // 0x27b758: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_27b75c:
    if (ctx->pc == 0x27B75Cu) {
        ctx->pc = 0x27B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B758u;
        // 0x27b75c: 0x8fa30250  lw          $v1, 0x250($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B760u;
        goto label_27b760;
    }
    ctx->pc = 0x27B758u;
    {
        const bool branch_taken_0x27b758 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B758u;
        // 0x27b75c: 0x8fa30250  lw          $v1, 0x250($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b758) {
            ctx->pc = 0x27B7DCu;
            goto label_27b7dc;
        }
    }
    ctx->pc = 0x27B760u;
label_27b760:
    // 0x27b760: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x27b760u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
label_27b764:
    // 0x27b764: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x27b764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_27b768:
    // 0x27b768: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27b768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b76c:
    // 0x27b76c: 0x24e30008  addiu       $v1, $a3, 0x8
    ctx->pc = 0x27b76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_27b770:
    // 0x27b770: 0x8c66fffc  lw          $a2, -0x4($v1)
    ctx->pc = 0x27b770u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_27b774:
    // 0x27b774: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27b774u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27b778:
    // 0x27b778: 0xafa30184  sw          $v1, 0x184($sp)
    ctx->pc = 0x27b778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 3));
label_27b77c:
    // 0x27b77c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_27b780:
    if (ctx->pc == 0x27B780u) {
        ctx->pc = 0x27B780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B77Cu;
        // 0x27b780: 0xac660004  sw          $a2, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B784u;
        goto label_27b784;
    }
    ctx->pc = 0x27B77Cu;
    {
        const bool branch_taken_0x27b77c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27B780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B77Cu;
        // 0x27b780: 0xac660004  sw          $a2, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b77c) {
            ctx->pc = 0x27B7A0u;
            goto label_27b7a0;
        }
    }
    ctx->pc = 0x27B784u;
label_27b784:
    // 0x27b784: 0x51042  srl         $v0, $a1, 1
    ctx->pc = 0x27b784u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_27b788:
    // 0x27b788: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x27b788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27b78c:
    // 0x27b78c: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x27b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_27b790:
    // 0x27b790: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x27b790u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_27b794:
    // 0x27b794: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x27b794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_27b798:
    // 0x27b798: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x27b798u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_27b79c:
    // 0x27b79c: 0x0  nop
    ctx->pc = 0x27b79cu;
    // NOP
label_27b7a0:
    // 0x27b7a0: 0x8fa80254  lw          $t0, 0x254($sp)
    ctx->pc = 0x27b7a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_27b7a4:
    // 0x27b7a4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x27b7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b7a8:
    // 0x27b7a8: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x27b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_27b7ac:
    // 0x27b7ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27b7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b7b0:
    // 0x27b7b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27b7b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27b7b4:
    // 0x27b7b4: 0x0  nop
    ctx->pc = 0x27b7b4u;
    // NOP
label_27b7b8:
    // 0x27b7b8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_27b7bc:
    if (ctx->pc == 0x27B7BCu) {
        ctx->pc = 0x27B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B7B8u;
        // 0x27b7bc: 0x8fa20184  lw          $v0, 0x184($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B7C0u;
        goto label_27b7c0;
    }
    ctx->pc = 0x27B7B8u;
    {
        const bool branch_taken_0x27b7b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B7B8u;
        // 0x27b7bc: 0x8fa20184  lw          $v0, 0x184($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b7b8) {
            ctx->pc = 0x27B7DCu;
            goto label_27b7dc;
        }
    }
    ctx->pc = 0x27B7C0u;
label_27b7c0:
    // 0x27b7c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27b7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27b7c4:
    // 0x27b7c4: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x27b7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_27b7c8:
    // 0x27b7c8: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x27b7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_27b7cc:
    // 0x27b7cc: 0x8c44fffc  lw          $a0, -0x4($v0)
    ctx->pc = 0x27b7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_27b7d0:
    // 0x27b7d0: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x27b7d0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_27b7d4:
    // 0x27b7d4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x27b7d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_27b7d8:
    // 0x27b7d8: 0xac44fffc  sw          $a0, -0x4($v0)
    ctx->pc = 0x27b7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 4));
label_27b7dc:
    // 0x27b7dc: 0x8fa50184  lw          $a1, 0x184($sp)
    ctx->pc = 0x27b7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
label_27b7e0:
    // 0x27b7e0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x27b7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_27b7e4:
    // 0x27b7e4: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x27b7e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_27b7e8:
    // 0x27b7e8: 0x105eff99  beq         $v0, $fp, . + 4 + (-0x67 << 2)
label_27b7ec:
    if (ctx->pc == 0x27B7ECu) {
        ctx->pc = 0x27B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B7E8u;
        // 0x27b7ec: 0x8fa70184  lw          $a3, 0x184($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B7F0u;
        goto label_27b7f0;
    }
    ctx->pc = 0x27B7E8u;
    {
        const bool branch_taken_0x27b7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        ctx->pc = 0x27B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B7E8u;
        // 0x27b7ec: 0x8fa70184  lw          $a3, 0x184($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b7e8) {
            ctx->pc = 0x27B650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27b650;
        }
    }
    ctx->pc = 0x27B7F0u;
label_27b7f0:
    // 0x27b7f0: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x27b7f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_27b7f4:
    // 0x27b7f4: 0x8cb60004  lw          $s6, 0x4($a1)
    ctx->pc = 0x27b7f4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27b7f8:
    // 0x27b7f8: 0xa7a30190  sh          $v1, 0x190($sp)
    ctx->pc = 0x27b7f8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 400), (uint16_t)GPR_U32(ctx, 3));
label_27b7fc:
    // 0x27b7fc: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x27b7fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_27b800:
    // 0x27b800: 0xa7a20192  sh          $v0, 0x192($sp)
    ctx->pc = 0x27b800u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 402), (uint16_t)GPR_U32(ctx, 2));
label_27b804:
    // 0x27b804: 0x97b30190  lhu         $s3, 0x190($sp)
    ctx->pc = 0x27b804u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 400)));
label_27b808:
    // 0x27b808: 0x97a20192  lhu         $v0, 0x192($sp)
    ctx->pc = 0x27b808u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 402)));
label_27b80c:
    // 0x27b80c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x27b80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_27b810:
    // 0x27b810: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x27b810u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_27b814:
    // 0x27b814: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
label_27b818:
    if (ctx->pc == 0x27B818u) {
        ctx->pc = 0x27B818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B814u;
        // 0x27b818: 0x8fa30184  lw          $v1, 0x184($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B81Cu;
        goto label_27b81c;
    }
    ctx->pc = 0x27B814u;
    {
        const bool branch_taken_0x27b814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B814u;
        // 0x27b818: 0x8fa30184  lw          $v1, 0x184($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b814) {
            ctx->pc = 0x27BA5Cu;
            goto label_27ba5c;
        }
    }
    ctx->pc = 0x27B81Cu;
label_27b81c:
    // 0x27b81c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x27b81cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_27b820:
    // 0x27b820: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x27b820u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_27b824:
    // 0x27b824: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27b824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_27b828:
    // 0x27b828: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27b828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_27b82c:
    // 0x27b82c: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x27b82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_27b830:
    // 0x27b830: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_27b834:
    if (ctx->pc == 0x27B834u) {
        ctx->pc = 0x27B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B830u;
        // 0x27b834: 0x131040  sll         $v0, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B838u;
        goto label_27b838;
    }
    ctx->pc = 0x27B830u;
    {
        const bool branch_taken_0x27b830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B830u;
        // 0x27b834: 0x131040  sll         $v0, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b830) {
            ctx->pc = 0x27B844u;
            goto label_27b844;
        }
    }
    ctx->pc = 0x27B838u;
label_27b838:
    // 0x27b838: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27b838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27b83c:
    // 0x27b83c: 0x10000002  b           . + 4 + (0x2 << 2)
label_27b840:
    if (ctx->pc == 0x27B840u) {
        ctx->pc = 0x27B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B83Cu;
        // 0x27b840: 0x94550000  lhu         $s5, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B844u;
        goto label_27b844;
    }
    ctx->pc = 0x27B83Cu;
    {
        const bool branch_taken_0x27b83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B83Cu;
        // 0x27b840: 0x94550000  lhu         $s5, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b83c) {
            ctx->pc = 0x27B848u;
            goto label_27b848;
        }
    }
    ctx->pc = 0x27B844u;
label_27b844:
    // 0x27b844: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x27b844u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27b848:
    // 0x27b848: 0x8fa50244  lw          $a1, 0x244($sp)
    ctx->pc = 0x27b848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
label_27b84c:
    // 0x27b84c: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x27b84cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_27b850:
    // 0x27b850: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x27b850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_27b854:
    // 0x27b854: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x27b854u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_27b858:
    // 0x27b858: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x27b858u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_27b85c:
    // 0x27b85c: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x27b85cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_27b860:
    // 0x27b860: 0x6a1018  mult        $v0, $v1, $t2
    ctx->pc = 0x27b860u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_27b864:
    // 0x27b864: 0x4b9021  addu        $s2, $v0, $t3
    ctx->pc = 0x27b864u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_27b868:
    // 0x27b868: 0x8a1018  mult        $v0, $a0, $t2
    ctx->pc = 0x27b868u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_27b86c:
    // 0x27b86c: 0x4b8021  addu        $s0, $v0, $t3
    ctx->pc = 0x27b86cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_27b870:
    // 0x27b870: 0xaa1018  mult        $v0, $a1, $t2
    ctx->pc = 0x27b870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_27b874:
    // 0x27b874: 0x16c0004c  bnez        $s6, . + 4 + (0x4C << 2)
label_27b878:
    if (ctx->pc == 0x27B878u) {
        ctx->pc = 0x27B878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B874u;
        // 0x27b878: 0x4b8821  addu        $s1, $v0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B87Cu;
        goto label_27b87c;
    }
    ctx->pc = 0x27B874u;
    {
        const bool branch_taken_0x27b874 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B874u;
        // 0x27b878: 0x4b8821  addu        $s1, $v0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b874) {
            ctx->pc = 0x27B9A8u;
            goto label_27b9a8;
        }
    }
    ctx->pc = 0x27B87Cu;
label_27b87c:
    // 0x27b87c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x27b87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b880:
    // 0x27b880: 0xc6270000  lwc1        $f7, 0x0($s1)
    ctx->pc = 0x27b880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_27b884:
    // 0x27b884: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x27b884u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_27b888:
    // 0x27b888: 0xe7a701e0  swc1        $f7, 0x1E0($sp)
    ctx->pc = 0x27b888u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_27b88c:
    // 0x27b88c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x27b88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b890:
    // 0x27b890: 0xc6260004  lwc1        $f6, 0x4($s1)
    ctx->pc = 0x27b890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_27b894:
    // 0x27b894: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x27b894u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_27b898:
    // 0x27b898: 0xe7a601e4  swc1        $f6, 0x1E4($sp)
    ctx->pc = 0x27b898u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
label_27b89c:
    // 0x27b89c: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x27b89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_27b8a0:
    // 0x27b8a0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x27b8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b8a4:
    // 0x27b8a4: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x27b8a4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_27b8a8:
    // 0x27b8a8: 0xe7a501e8  swc1        $f5, 0x1E8($sp)
    ctx->pc = 0x27b8a8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_27b8ac:
    // 0x27b8ac: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x27b8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27b8b0:
    // 0x27b8b0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x27b8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b8b4:
    // 0x27b8b4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x27b8b4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_27b8b8:
    // 0x27b8b8: 0xe7a201f0  swc1        $f2, 0x1F0($sp)
    ctx->pc = 0x27b8b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_27b8bc:
    // 0x27b8bc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x27b8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b8c0:
    // 0x27b8c0: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x27b8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27b8c4:
    // 0x27b8c4: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x27b8c4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_27b8c8:
    // 0x27b8c8: 0xe7a401f4  swc1        $f4, 0x1F4($sp)
    ctx->pc = 0x27b8c8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
label_27b8cc:
    // 0x27b8cc: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x27b8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b8d0:
    // 0x27b8d0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x27b8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b8d4:
    // 0x27b8d4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27b8d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27b8d8:
    // 0x27b8d8: 0xe7a101f8  swc1        $f1, 0x1F8($sp)
    ctx->pc = 0x27b8d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
label_27b8dc:
    // 0x27b8dc: 0x46013002  mul.s       $f0, $f6, $f1
    ctx->pc = 0x27b8dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_27b8e0:
    // 0x27b8e0: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x27b8e0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_27b8e4:
    // 0x27b8e4: 0x460438c2  mul.s       $f3, $f7, $f4
    ctx->pc = 0x27b8e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_27b8e8:
    // 0x27b8e8: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x27b8e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_27b8ec:
    // 0x27b8ec: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x27b8ecu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_27b8f0:
    // 0x27b8f0: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x27b8f0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_27b8f4:
    // 0x27b8f4: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x27b8f4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
label_27b8f8:
    // 0x27b8f8: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x27b8f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_27b8fc:
    // 0x27b8fc: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x27b8fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_27b900:
    // 0x27b900: 0xe7a301a8  swc1        $f3, 0x1A8($sp)
    ctx->pc = 0x27b900u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_27b904:
    // 0x27b904: 0xe7a201a4  swc1        $f2, 0x1A4($sp)
    ctx->pc = 0x27b904u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_27b908:
    // 0x27b908: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x27b908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_27b90c:
    // 0x27b90c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x27b90cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_27b910:
    // 0x27b910: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x27b910u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_27b914:
    // 0x27b914: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x27b914u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_27b918:
    // 0x27b918: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x27b918u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_27b91c:
    // 0x27b91c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x27b91cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_27b920:
    // 0x27b920: 0x46000004  c1          0x4
    ctx->pc = 0x27b920u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_27b924:
    // 0x27b924: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x27b924u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27b928:
    // 0x27b928: 0x0  nop
    ctx->pc = 0x27b928u;
    // NOP
label_27b92c:
    // 0x27b92c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_27b930:
    if (ctx->pc == 0x27B930u) {
        ctx->pc = 0x27B930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B92Cu;
        // 0x27b930: 0xc7a401a0  lwc1        $f4, 0x1A0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B934u;
        goto label_27b934;
    }
    ctx->pc = 0x27B92Cu;
    {
        const bool branch_taken_0x27b92c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27B930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B92Cu;
        // 0x27b930: 0xc7a401a0  lwc1        $f4, 0x1A0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b92c) {
            ctx->pc = 0x27B938u;
            goto label_27b938;
        }
    }
    ctx->pc = 0x27B934u;
label_27b934:
    // 0x27b934: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x27b934u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[0]);
label_27b938:
    // 0x27b938: 0xc7a501a4  lwc1        $f5, 0x1A4($sp)
    ctx->pc = 0x27b938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_27b93c:
    // 0x27b93c: 0xc7a601a8  lwc1        $f6, 0x1A8($sp)
    ctx->pc = 0x27b93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_27b940:
    // 0x27b940: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x27b940u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_27b944:
    // 0x27b944: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x27b944u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_27b948:
    // 0x27b948: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x27b948u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_27b94c:
    // 0x27b94c: 0xe7a401a0  swc1        $f4, 0x1A0($sp)
    ctx->pc = 0x27b94cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_27b950:
    // 0x27b950: 0xe7a501a4  swc1        $f5, 0x1A4($sp)
    ctx->pc = 0x27b950u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_27b954:
    // 0x27b954: 0xe7a601a8  swc1        $f6, 0x1A8($sp)
    ctx->pc = 0x27b954u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_27b958:
    // 0x27b958: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x27b958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b95c:
    // 0x27b95c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x27b95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b960:
    // 0x27b960: 0xc6e30004  lwc1        $f3, 0x4($s7)
    ctx->pc = 0x27b960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27b964:
    // 0x27b964: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27b964u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27b968:
    // 0x27b968: 0xc6e20008  lwc1        $f2, 0x8($s7)
    ctx->pc = 0x27b968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27b96c:
    // 0x27b96c: 0xe7a101d0  swc1        $f1, 0x1D0($sp)
    ctx->pc = 0x27b96cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_27b970:
    // 0x27b970: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x27b970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b974:
    // 0x27b974: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x27b974u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_27b978:
    // 0x27b978: 0xe7a301d4  swc1        $f3, 0x1D4($sp)
    ctx->pc = 0x27b978u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
label_27b97c:
    // 0x27b97c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x27b97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b980:
    // 0x27b980: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x27b980u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_27b984:
    // 0x27b984: 0xe7a201d8  swc1        $f2, 0x1D8($sp)
    ctx->pc = 0x27b984u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_27b988:
    // 0x27b988: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x27b988u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_27b98c:
    // 0x27b98c: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x27b98cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_27b990:
    // 0x27b990: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x27b990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_27b994:
    // 0x27b994: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x27b994u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_27b998:
    // 0x27b998: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x27b998u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_27b99c:
    // 0x27b99c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x27b99cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_27b9a0:
    // 0x27b9a0: 0x1000000e  b           . + 4 + (0xE << 2)
label_27b9a4:
    if (ctx->pc == 0x27B9A4u) {
        ctx->pc = 0x27B9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B9A0u;
        // 0x27b9a4: 0xe7a10230  swc1        $f1, 0x230($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B9A8u;
        goto label_27b9a8;
    }
    ctx->pc = 0x27B9A0u;
    {
        const bool branch_taken_0x27b9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B9A0u;
        // 0x27b9a4: 0xe7a10230  swc1        $f1, 0x230($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b9a0) {
            ctx->pc = 0x27B9DCu;
            goto label_27b9dc;
        }
    }
    ctx->pc = 0x27B9A8u;
label_27b9a8:
    // 0x27b9a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27b9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b9ac:
    // 0x27b9ac: 0x7faa0260  sq          $t2, 0x260($sp)
    ctx->pc = 0x27b9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 10));
label_27b9b0:
    // 0x27b9b0: 0x7fab0270  sq          $t3, 0x270($sp)
    ctx->pc = 0x27b9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 11));
label_27b9b4:
    // 0x27b9b4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x27b9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_27b9b8:
    // 0x27b9b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27b9b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27b9bc:
    // 0x27b9bc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x27b9bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27b9c0:
    // 0x27b9c0: 0x27a801a0  addiu       $t0, $sp, 0x1A0
    ctx->pc = 0x27b9c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_27b9c4:
    // 0x27b9c4: 0xc0a43ea  jal         func_290FA8
label_27b9c8:
    if (ctx->pc == 0x27B9C8u) {
        ctx->pc = 0x27B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B9C4u;
        // 0x27b9c8: 0x27a90230  addiu       $t1, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B9CCu;
        goto label_27b9cc;
    }
    ctx->pc = 0x27B9C4u;
    SET_GPR_U32(ctx, 31, 0x27B9CCu);
    ctx->pc = 0x27B9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B9C4u;
    // 0x27b9c8: 0x27a90230  addiu       $t1, $sp, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x290FA8u, 0x27B9C4u, 0x27B9CCu)) {
        return;
    }
    ctx->pc = 0x27B9CCu;
label_27b9cc:
    // 0x27b9cc: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x27b9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_27b9d0:
    // 0x27b9d0: 0x7baa0260  lq          $t2, 0x260($sp)
    ctx->pc = 0x27b9d0u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_27b9d4:
    // 0x27b9d4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_27b9d8:
    if (ctx->pc == 0x27B9D8u) {
        ctx->pc = 0x27B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B9D4u;
        // 0x27b9d8: 0x7bab0270  lq          $t3, 0x270($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B9DCu;
        goto label_27b9dc;
    }
    ctx->pc = 0x27B9D4u;
    {
        const bool branch_taken_0x27b9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B9D4u;
        // 0x27b9d8: 0x7bab0270  lq          $t3, 0x270($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b9d4) {
            ctx->pc = 0x27BA38u;
            goto label_27ba38;
        }
    }
    ctx->pc = 0x27B9DCu;
label_27b9dc:
    // 0x27b9dc: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x27b9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b9e0:
    // 0x27b9e0: 0x8fa40238  lw          $a0, 0x238($sp)
    ctx->pc = 0x27b9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_27b9e4:
    // 0x27b9e4: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x27b9e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_27b9e8:
    // 0x27b9e8: 0x8fa60240  lw          $a2, 0x240($sp)
    ctx->pc = 0x27b9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_27b9ec:
    // 0x27b9ec: 0xe7a00230  swc1        $f0, 0x230($sp)
    ctx->pc = 0x27b9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
label_27b9f0:
    // 0x27b9f0: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x27b9f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_27b9f4:
    // 0x27b9f4: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x27b9f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_27b9f8:
    // 0x27b9f8: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x27b9f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_27b9fc:
    // 0x27b9fc: 0xb3a301b3  sdl         $v1, 0x1B3($sp)
    ctx->pc = 0x27b9fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 435); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27ba00:
    // 0x27ba00: 0xb7a301ac  sdr         $v1, 0x1AC($sp)
    ctx->pc = 0x27ba00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 428); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27ba04:
    // 0x27ba04: 0xafa701b4  sw          $a3, 0x1B4($sp)
    ctx->pc = 0x27ba04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 7));
label_27ba08:
    // 0x27ba08: 0x8fa3023c  lw          $v1, 0x23C($sp)
    ctx->pc = 0x27ba08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
label_27ba0c:
    // 0x27ba0c: 0xc7ac0230  lwc1        $f12, 0x230($sp)
    ctx->pc = 0x27ba0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27ba10:
    // 0x27ba10: 0x7faa0260  sq          $t2, 0x260($sp)
    ctx->pc = 0x27ba10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 10));
label_27ba14:
    // 0x27ba14: 0x7fab0270  sq          $t3, 0x270($sp)
    ctx->pc = 0x27ba14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 11));
label_27ba18:
    // 0x27ba18: 0xafb501b8  sw          $s5, 0x1B8($sp)
    ctx->pc = 0x27ba18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 21));
label_27ba1c:
    // 0x27ba1c: 0xafb001bc  sw          $s0, 0x1BC($sp)
    ctx->pc = 0x27ba1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 16));
label_27ba20:
    // 0x27ba20: 0xafb101c0  sw          $s1, 0x1C0($sp)
    ctx->pc = 0x27ba20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 17));
label_27ba24:
    // 0x27ba24: 0x60f809  jalr        $v1
label_27ba28:
    if (ctx->pc == 0x27BA28u) {
        ctx->pc = 0x27BA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA24u;
        // 0x27ba28: 0xafb201c4  sw          $s2, 0x1C4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BA2Cu;
        goto label_27ba2c;
    }
    ctx->pc = 0x27BA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x27BA2Cu);
        ctx->pc = 0x27BA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA24u;
        // 0x27ba28: 0xafb201c4  sw          $s2, 0x1C4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BA24u, 0x27BA2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27BA2Cu;
label_27ba2c:
    // 0x27ba2c: 0x7baa0260  lq          $t2, 0x260($sp)
    ctx->pc = 0x27ba2cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_27ba30:
    // 0x27ba30: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_27ba34:
    if (ctx->pc == 0x27BA34u) {
        ctx->pc = 0x27BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA30u;
        // 0x27ba34: 0x7bab0270  lq          $t3, 0x270($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BA38u;
        goto label_27ba38;
    }
    ctx->pc = 0x27BA30u;
    {
        const bool branch_taken_0x27ba30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA30u;
        // 0x27ba34: 0x7bab0270  lq          $t3, 0x270($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ba30) {
            ctx->pc = 0x27BB54u;
            goto label_27bb54;
        }
    }
    ctx->pc = 0x27BA38u;
label_27ba38:
    // 0x27ba38: 0x97a20190  lhu         $v0, 0x190($sp)
    ctx->pc = 0x27ba38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 400)));
label_27ba3c:
    // 0x27ba3c: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x27ba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_27ba40:
    // 0x27ba40: 0x97a40192  lhu         $a0, 0x192($sp)
    ctx->pc = 0x27ba40u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 402)));
label_27ba44:
    // 0x27ba44: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x27ba44u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_27ba48:
    // 0x27ba48: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_27ba4c:
    // 0x27ba4c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x27ba4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_27ba50:
    // 0x27ba50: 0x5440ff77  bnel        $v0, $zero, . + 4 + (-0x89 << 2)
label_27ba54:
    if (ctx->pc == 0x27BA54u) {
        ctx->pc = 0x27BA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA50u;
        // 0x27ba54: 0x8e830024  lw          $v1, 0x24($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BA58u;
        goto label_27ba58;
    }
    ctx->pc = 0x27BA50u;
    {
        const bool branch_taken_0x27ba50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ba50) {
            ctx->pc = 0x27BA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BA50u;
            // 0x27ba54: 0x8e830024  lw          $v1, 0x24($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27b830;
        }
    }
    ctx->pc = 0x27BA58u;
label_27ba58:
    // 0x27ba58: 0x8fa30184  lw          $v1, 0x184($sp)
    ctx->pc = 0x27ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
label_27ba5c:
    // 0x27ba5c: 0x8fa40258  lw          $a0, 0x258($sp)
    ctx->pc = 0x27ba5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_27ba60:
    // 0x27ba60: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x27ba60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_27ba64:
    // 0x27ba64: 0x5440fef6  bnel        $v0, $zero, . + 4 + (-0x10A << 2)
label_27ba68:
    if (ctx->pc == 0x27BA68u) {
        ctx->pc = 0x27BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA64u;
        // 0x27ba68: 0x8c64fff8  lw          $a0, -0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BA6Cu;
        goto label_27ba6c;
    }
    ctx->pc = 0x27BA64u;
    {
        const bool branch_taken_0x27ba64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ba64) {
            ctx->pc = 0x27BA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BA64u;
            // 0x27ba68: 0x8c64fff8  lw          $a0, -0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27b640;
        }
    }
    ctx->pc = 0x27BA6Cu;
label_27ba6c:
    // 0x27ba6c: 0x1000003a  b           . + 4 + (0x3A << 2)
label_27ba70:
    if (ctx->pc == 0x27BA70u) {
        ctx->pc = 0x27BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA6Cu;
        // 0x27ba70: 0x7bb00310  lq          $s0, 0x310($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 784)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BA74u;
        goto label_27ba74;
    }
    ctx->pc = 0x27BA6Cu;
    {
        const bool branch_taken_0x27ba6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA6Cu;
        // 0x27ba70: 0x7bb00310  lq          $s0, 0x310($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ba6c) {
            ctx->pc = 0x27BB58u;
            goto label_27bb58;
        }
    }
    ctx->pc = 0x27BA74u;
label_27ba74:
    // 0x27ba74: 0x8fc2005c  lw          $v0, 0x5C($fp)
    ctx->pc = 0x27ba74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 92)));
label_27ba78:
    // 0x27ba78: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x27ba78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27ba7c:
    // 0x27ba7c: 0xc6e1000c  lwc1        $f1, 0xC($s7)
    ctx->pc = 0x27ba7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ba80:
    // 0x27ba80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27ba80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_27ba84:
    // 0x27ba84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27ba84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27ba88:
    // 0x27ba88: 0x8c550014  lw          $s5, 0x14($v0)
    ctx->pc = 0x27ba88u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_27ba8c:
    // 0x27ba8c: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x27ba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_27ba90:
    // 0x27ba90: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x27ba90u;
    ctx->f[20] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_27ba94:
    // 0x27ba94: 0x1860002f  blez        $v1, . + 4 + (0x2F << 2)
label_27ba98:
    if (ctx->pc == 0x27BA98u) {
        ctx->pc = 0x27BA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA94u;
        // 0x27ba98: 0x8fc2002c  lw          $v0, 0x2C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BA9Cu;
        goto label_27ba9c;
    }
    ctx->pc = 0x27BA94u;
    {
        const bool branch_taken_0x27ba94 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x27BA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA94u;
        // 0x27ba98: 0x8fc2002c  lw          $v0, 0x2C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ba94) {
            ctx->pc = 0x27BB54u;
            goto label_27bb54;
        }
    }
    ctx->pc = 0x27BA9Cu;
label_27ba9c:
    // 0x27ba9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27ba9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27baa0:
    // 0x27baa0: 0x2416000c  addiu       $s6, $zero, 0xC
    ctx->pc = 0x27baa0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_27baa4:
    // 0x27baa4: 0x0  nop
    ctx->pc = 0x27baa4u;
    // NOP
label_27baa8:
    // 0x27baa8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x27baa8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_27baac:
    // 0x27baac: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x27baacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_27bab0:
    // 0x27bab0: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x27bab0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_27bab4:
    // 0x27bab4: 0x27a80200  addiu       $t0, $sp, 0x200
    ctx->pc = 0x27bab4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_27bab8:
    // 0x27bab8: 0x563018  mult        $a2, $v0, $s6
    ctx->pc = 0x27bab8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_27babc:
    // 0x27babc: 0x96250004  lhu         $a1, 0x4($s1)
    ctx->pc = 0x27babcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_27bac0:
    // 0x27bac0: 0x761018  mult        $v0, $v1, $s6
    ctx->pc = 0x27bac0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_27bac4:
    // 0x27bac4: 0x27a90234  addiu       $t1, $sp, 0x234
    ctx->pc = 0x27bac4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 564));
label_27bac8:
    // 0x27bac8: 0xd58021  addu        $s0, $a2, $s5
    ctx->pc = 0x27bac8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
label_27bacc:
    // 0x27bacc: 0x559821  addu        $s3, $v0, $s5
    ctx->pc = 0x27baccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_27bad0:
    // 0x27bad0: 0xb61018  mult        $v0, $a1, $s6
    ctx->pc = 0x27bad0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_27bad4:
    // 0x27bad4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x27bad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27bad8:
    // 0x27bad8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27bad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27badc:
    // 0x27badc: 0x559021  addu        $s2, $v0, $s5
    ctx->pc = 0x27badcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_27bae0:
    // 0x27bae0: 0xc0a43ea  jal         func_290FA8
label_27bae4:
    if (ctx->pc == 0x27BAE4u) {
        ctx->pc = 0x27BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BAE0u;
        // 0x27bae4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BAE8u;
        goto label_27bae8;
    }
    ctx->pc = 0x27BAE0u;
    SET_GPR_U32(ctx, 31, 0x27BAE8u);
    ctx->pc = 0x27BAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BAE0u;
    // 0x27bae4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x290FA8u, 0x27BAE0u, 0x27BAE8u)) {
        return;
    }
    ctx->pc = 0x27BAE8u;
label_27bae8:
    // 0x27bae8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_27baec:
    if (ctx->pc == 0x27BAECu) {
        ctx->pc = 0x27BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BAE8u;
        // 0x27baec: 0xc7a00234  lwc1        $f0, 0x234($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BAF0u;
        goto label_27baf0;
    }
    ctx->pc = 0x27BAE8u;
    {
        const bool branch_taken_0x27bae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BAE8u;
        // 0x27baec: 0xc7a00234  lwc1        $f0, 0x234($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bae8) {
            ctx->pc = 0x27BB40u;
            goto label_27bb40;
        }
    }
    ctx->pc = 0x27BAF0u;
label_27baf0:
    // 0x27baf0: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x27baf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_27baf4:
    // 0x27baf4: 0x8fa40238  lw          $a0, 0x238($sp)
    ctx->pc = 0x27baf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_27baf8:
    // 0x27baf8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x27baf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_27bafc:
    // 0x27bafc: 0x8fa60240  lw          $a2, 0x240($sp)
    ctx->pc = 0x27bafcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_27bb00:
    // 0x27bb00: 0xe7a00234  swc1        $f0, 0x234($sp)
    ctx->pc = 0x27bb00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
label_27bb04:
    // 0x27bb04: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x27bb04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_27bb08:
    // 0x27bb08: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x27bb08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_27bb0c:
    // 0x27bb0c: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x27bb0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_27bb10:
    // 0x27bb10: 0xb3a30213  sdl         $v1, 0x213($sp)
    ctx->pc = 0x27bb10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 531); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27bb14:
    // 0x27bb14: 0xb7a3020c  sdr         $v1, 0x20C($sp)
    ctx->pc = 0x27bb14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 524); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27bb18:
    // 0x27bb18: 0xafa70214  sw          $a3, 0x214($sp)
    ctx->pc = 0x27bb18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 7));
label_27bb1c:
    // 0x27bb1c: 0x8fa3023c  lw          $v1, 0x23C($sp)
    ctx->pc = 0x27bb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
label_27bb20:
    // 0x27bb20: 0xc7ac0234  lwc1        $f12, 0x234($sp)
    ctx->pc = 0x27bb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27bb24:
    // 0x27bb24: 0xafb0021c  sw          $s0, 0x21C($sp)
    ctx->pc = 0x27bb24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 16));
label_27bb28:
    // 0x27bb28: 0xafb30220  sw          $s3, 0x220($sp)
    ctx->pc = 0x27bb28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 19));
label_27bb2c:
    // 0x27bb2c: 0xafb20224  sw          $s2, 0x224($sp)
    ctx->pc = 0x27bb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 18));
label_27bb30:
    // 0x27bb30: 0x60f809  jalr        $v1
label_27bb34:
    if (ctx->pc == 0x27BB34u) {
        ctx->pc = 0x27BB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB30u;
        // 0x27bb34: 0xafb40218  sw          $s4, 0x218($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BB38u;
        goto label_27bb38;
    }
    ctx->pc = 0x27BB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x27BB38u);
        ctx->pc = 0x27BB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB30u;
        // 0x27bb34: 0xafb40218  sw          $s4, 0x218($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BB30u, 0x27BB38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27BB38u;
label_27bb38:
    // 0x27bb38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_27bb3c:
    if (ctx->pc == 0x27BB3Cu) {
        ctx->pc = 0x27BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB38u;
        // 0x27bb3c: 0x7bb00310  lq          $s0, 0x310($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 784)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BB40u;
        goto label_27bb40;
    }
    ctx->pc = 0x27BB38u;
    {
        const bool branch_taken_0x27bb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB38u;
        // 0x27bb3c: 0x7bb00310  lq          $s0, 0x310($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bb38) {
            ctx->pc = 0x27BB58u;
            goto label_27bb58;
        }
    }
    ctx->pc = 0x27BB40u;
label_27bb40:
    // 0x27bb40: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x27bb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_27bb44:
    // 0x27bb44: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x27bb44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_27bb48:
    // 0x27bb48: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x27bb48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_27bb4c:
    // 0x27bb4c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
label_27bb50:
    if (ctx->pc == 0x27BB50u) {
        ctx->pc = 0x27BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB4Cu;
        // 0x27bb50: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BB54u;
        goto label_27bb54;
    }
    ctx->pc = 0x27BB4Cu;
    {
        const bool branch_taken_0x27bb4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB4Cu;
        // 0x27bb50: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bb4c) {
            ctx->pc = 0x27BAA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27baa8;
        }
    }
    ctx->pc = 0x27BB54u;
label_27bb54:
    // 0x27bb54: 0x7bb00310  lq          $s0, 0x310($sp)
    ctx->pc = 0x27bb54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 784)));
label_27bb58:
    // 0x27bb58: 0x7bb10300  lq          $s1, 0x300($sp)
    ctx->pc = 0x27bb58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 768)));
label_27bb5c:
    // 0x27bb5c: 0x7bb202f0  lq          $s2, 0x2F0($sp)
    ctx->pc = 0x27bb5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 752)));
label_27bb60:
    // 0x27bb60: 0x7bb302e0  lq          $s3, 0x2E0($sp)
    ctx->pc = 0x27bb60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 736)));
label_27bb64:
    // 0x27bb64: 0x7bb402d0  lq          $s4, 0x2D0($sp)
    ctx->pc = 0x27bb64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_27bb68:
    // 0x27bb68: 0x7bb502c0  lq          $s5, 0x2C0($sp)
    ctx->pc = 0x27bb68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_27bb6c:
    // 0x27bb6c: 0x7bb602b0  lq          $s6, 0x2B0($sp)
    ctx->pc = 0x27bb6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_27bb70:
    // 0x27bb70: 0x7bb702a0  lq          $s7, 0x2A0($sp)
    ctx->pc = 0x27bb70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_27bb74:
    // 0x27bb74: 0x7bbe0290  lq          $fp, 0x290($sp)
    ctx->pc = 0x27bb74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_27bb78:
    // 0x27bb78: 0xdfbf0280  ld          $ra, 0x280($sp)
    ctx->pc = 0x27bb78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_27bb7c:
    // 0x27bb7c: 0xc7b60330  lwc1        $f22, 0x330($sp)
    ctx->pc = 0x27bb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_27bb80:
    // 0x27bb80: 0xc7b50328  lwc1        $f21, 0x328($sp)
    ctx->pc = 0x27bb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_27bb84:
    // 0x27bb84: 0xc7b40320  lwc1        $f20, 0x320($sp)
    ctx->pc = 0x27bb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27bb88:
    // 0x27bb88: 0x3e00008  jr          $ra
label_27bb8c:
    if (ctx->pc == 0x27BB8Cu) {
        ctx->pc = 0x27BB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB88u;
        // 0x27bb8c: 0x27bd0340  addiu       $sp, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BB90u;
        goto label_fallthrough_0x27bb88;
    }
    ctx->pc = 0x27BB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB88u;
        // 0x27bb8c: 0x27bd0340  addiu       $sp, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x27bb88:
    ctx->pc = 0x27BB90u;
}
