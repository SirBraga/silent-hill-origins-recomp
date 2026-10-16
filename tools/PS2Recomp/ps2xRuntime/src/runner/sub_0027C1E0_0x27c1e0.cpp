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

// Function: sub_0027C1E0
// Address: 0x27c1e0 - 0x27c858
void sub_0027C1E0_0x27c1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027C1E0_0x27c1e0");
#endif

    switch (ctx->pc) {
        case 0x27c1e0u: goto label_27c1e0;
        case 0x27c1e4u: goto label_27c1e4;
        case 0x27c1e8u: goto label_27c1e8;
        case 0x27c1ecu: goto label_27c1ec;
        case 0x27c1f0u: goto label_27c1f0;
        case 0x27c1f4u: goto label_27c1f4;
        case 0x27c1f8u: goto label_27c1f8;
        case 0x27c1fcu: goto label_27c1fc;
        case 0x27c200u: goto label_27c200;
        case 0x27c204u: goto label_27c204;
        case 0x27c208u: goto label_27c208;
        case 0x27c20cu: goto label_27c20c;
        case 0x27c210u: goto label_27c210;
        case 0x27c214u: goto label_27c214;
        case 0x27c218u: goto label_27c218;
        case 0x27c21cu: goto label_27c21c;
        case 0x27c220u: goto label_27c220;
        case 0x27c224u: goto label_27c224;
        case 0x27c228u: goto label_27c228;
        case 0x27c22cu: goto label_27c22c;
        case 0x27c230u: goto label_27c230;
        case 0x27c234u: goto label_27c234;
        case 0x27c238u: goto label_27c238;
        case 0x27c23cu: goto label_27c23c;
        case 0x27c240u: goto label_27c240;
        case 0x27c244u: goto label_27c244;
        case 0x27c248u: goto label_27c248;
        case 0x27c24cu: goto label_27c24c;
        case 0x27c250u: goto label_27c250;
        case 0x27c254u: goto label_27c254;
        case 0x27c258u: goto label_27c258;
        case 0x27c25cu: goto label_27c25c;
        case 0x27c260u: goto label_27c260;
        case 0x27c264u: goto label_27c264;
        case 0x27c268u: goto label_27c268;
        case 0x27c26cu: goto label_27c26c;
        case 0x27c270u: goto label_27c270;
        case 0x27c274u: goto label_27c274;
        case 0x27c278u: goto label_27c278;
        case 0x27c27cu: goto label_27c27c;
        case 0x27c280u: goto label_27c280;
        case 0x27c284u: goto label_27c284;
        case 0x27c288u: goto label_27c288;
        case 0x27c28cu: goto label_27c28c;
        case 0x27c290u: goto label_27c290;
        case 0x27c294u: goto label_27c294;
        case 0x27c298u: goto label_27c298;
        case 0x27c29cu: goto label_27c29c;
        case 0x27c2a0u: goto label_27c2a0;
        case 0x27c2a4u: goto label_27c2a4;
        case 0x27c2a8u: goto label_27c2a8;
        case 0x27c2acu: goto label_27c2ac;
        case 0x27c2b0u: goto label_27c2b0;
        case 0x27c2b4u: goto label_27c2b4;
        case 0x27c2b8u: goto label_27c2b8;
        case 0x27c2bcu: goto label_27c2bc;
        case 0x27c2c0u: goto label_27c2c0;
        case 0x27c2c4u: goto label_27c2c4;
        case 0x27c2c8u: goto label_27c2c8;
        case 0x27c2ccu: goto label_27c2cc;
        case 0x27c2d0u: goto label_27c2d0;
        case 0x27c2d4u: goto label_27c2d4;
        case 0x27c2d8u: goto label_27c2d8;
        case 0x27c2dcu: goto label_27c2dc;
        case 0x27c2e0u: goto label_27c2e0;
        case 0x27c2e4u: goto label_27c2e4;
        case 0x27c2e8u: goto label_27c2e8;
        case 0x27c2ecu: goto label_27c2ec;
        case 0x27c2f0u: goto label_27c2f0;
        case 0x27c2f4u: goto label_27c2f4;
        case 0x27c2f8u: goto label_27c2f8;
        case 0x27c2fcu: goto label_27c2fc;
        case 0x27c300u: goto label_27c300;
        case 0x27c304u: goto label_27c304;
        case 0x27c308u: goto label_27c308;
        case 0x27c30cu: goto label_27c30c;
        case 0x27c310u: goto label_27c310;
        case 0x27c314u: goto label_27c314;
        case 0x27c318u: goto label_27c318;
        case 0x27c31cu: goto label_27c31c;
        case 0x27c320u: goto label_27c320;
        case 0x27c324u: goto label_27c324;
        case 0x27c328u: goto label_27c328;
        case 0x27c32cu: goto label_27c32c;
        case 0x27c330u: goto label_27c330;
        case 0x27c334u: goto label_27c334;
        case 0x27c338u: goto label_27c338;
        case 0x27c33cu: goto label_27c33c;
        case 0x27c340u: goto label_27c340;
        case 0x27c344u: goto label_27c344;
        case 0x27c348u: goto label_27c348;
        case 0x27c34cu: goto label_27c34c;
        case 0x27c350u: goto label_27c350;
        case 0x27c354u: goto label_27c354;
        case 0x27c358u: goto label_27c358;
        case 0x27c35cu: goto label_27c35c;
        case 0x27c360u: goto label_27c360;
        case 0x27c364u: goto label_27c364;
        case 0x27c368u: goto label_27c368;
        case 0x27c36cu: goto label_27c36c;
        case 0x27c370u: goto label_27c370;
        case 0x27c374u: goto label_27c374;
        case 0x27c378u: goto label_27c378;
        case 0x27c37cu: goto label_27c37c;
        case 0x27c380u: goto label_27c380;
        case 0x27c384u: goto label_27c384;
        case 0x27c388u: goto label_27c388;
        case 0x27c38cu: goto label_27c38c;
        case 0x27c390u: goto label_27c390;
        case 0x27c394u: goto label_27c394;
        case 0x27c398u: goto label_27c398;
        case 0x27c39cu: goto label_27c39c;
        case 0x27c3a0u: goto label_27c3a0;
        case 0x27c3a4u: goto label_27c3a4;
        case 0x27c3a8u: goto label_27c3a8;
        case 0x27c3acu: goto label_27c3ac;
        case 0x27c3b0u: goto label_27c3b0;
        case 0x27c3b4u: goto label_27c3b4;
        case 0x27c3b8u: goto label_27c3b8;
        case 0x27c3bcu: goto label_27c3bc;
        case 0x27c3c0u: goto label_27c3c0;
        case 0x27c3c4u: goto label_27c3c4;
        case 0x27c3c8u: goto label_27c3c8;
        case 0x27c3ccu: goto label_27c3cc;
        case 0x27c3d0u: goto label_27c3d0;
        case 0x27c3d4u: goto label_27c3d4;
        case 0x27c3d8u: goto label_27c3d8;
        case 0x27c3dcu: goto label_27c3dc;
        case 0x27c3e0u: goto label_27c3e0;
        case 0x27c3e4u: goto label_27c3e4;
        case 0x27c3e8u: goto label_27c3e8;
        case 0x27c3ecu: goto label_27c3ec;
        case 0x27c3f0u: goto label_27c3f0;
        case 0x27c3f4u: goto label_27c3f4;
        case 0x27c3f8u: goto label_27c3f8;
        case 0x27c3fcu: goto label_27c3fc;
        case 0x27c400u: goto label_27c400;
        case 0x27c404u: goto label_27c404;
        case 0x27c408u: goto label_27c408;
        case 0x27c40cu: goto label_27c40c;
        case 0x27c410u: goto label_27c410;
        case 0x27c414u: goto label_27c414;
        case 0x27c418u: goto label_27c418;
        case 0x27c41cu: goto label_27c41c;
        case 0x27c420u: goto label_27c420;
        case 0x27c424u: goto label_27c424;
        case 0x27c428u: goto label_27c428;
        case 0x27c42cu: goto label_27c42c;
        case 0x27c430u: goto label_27c430;
        case 0x27c434u: goto label_27c434;
        case 0x27c438u: goto label_27c438;
        case 0x27c43cu: goto label_27c43c;
        case 0x27c440u: goto label_27c440;
        case 0x27c444u: goto label_27c444;
        case 0x27c448u: goto label_27c448;
        case 0x27c44cu: goto label_27c44c;
        case 0x27c450u: goto label_27c450;
        case 0x27c454u: goto label_27c454;
        case 0x27c458u: goto label_27c458;
        case 0x27c45cu: goto label_27c45c;
        case 0x27c460u: goto label_27c460;
        case 0x27c464u: goto label_27c464;
        case 0x27c468u: goto label_27c468;
        case 0x27c46cu: goto label_27c46c;
        case 0x27c470u: goto label_27c470;
        case 0x27c474u: goto label_27c474;
        case 0x27c478u: goto label_27c478;
        case 0x27c47cu: goto label_27c47c;
        case 0x27c480u: goto label_27c480;
        case 0x27c484u: goto label_27c484;
        case 0x27c488u: goto label_27c488;
        case 0x27c48cu: goto label_27c48c;
        case 0x27c490u: goto label_27c490;
        case 0x27c494u: goto label_27c494;
        case 0x27c498u: goto label_27c498;
        case 0x27c49cu: goto label_27c49c;
        case 0x27c4a0u: goto label_27c4a0;
        case 0x27c4a4u: goto label_27c4a4;
        case 0x27c4a8u: goto label_27c4a8;
        case 0x27c4acu: goto label_27c4ac;
        case 0x27c4b0u: goto label_27c4b0;
        case 0x27c4b4u: goto label_27c4b4;
        case 0x27c4b8u: goto label_27c4b8;
        case 0x27c4bcu: goto label_27c4bc;
        case 0x27c4c0u: goto label_27c4c0;
        case 0x27c4c4u: goto label_27c4c4;
        case 0x27c4c8u: goto label_27c4c8;
        case 0x27c4ccu: goto label_27c4cc;
        case 0x27c4d0u: goto label_27c4d0;
        case 0x27c4d4u: goto label_27c4d4;
        case 0x27c4d8u: goto label_27c4d8;
        case 0x27c4dcu: goto label_27c4dc;
        case 0x27c4e0u: goto label_27c4e0;
        case 0x27c4e4u: goto label_27c4e4;
        case 0x27c4e8u: goto label_27c4e8;
        case 0x27c4ecu: goto label_27c4ec;
        case 0x27c4f0u: goto label_27c4f0;
        case 0x27c4f4u: goto label_27c4f4;
        case 0x27c4f8u: goto label_27c4f8;
        case 0x27c4fcu: goto label_27c4fc;
        case 0x27c500u: goto label_27c500;
        case 0x27c504u: goto label_27c504;
        case 0x27c508u: goto label_27c508;
        case 0x27c50cu: goto label_27c50c;
        case 0x27c510u: goto label_27c510;
        case 0x27c514u: goto label_27c514;
        case 0x27c518u: goto label_27c518;
        case 0x27c51cu: goto label_27c51c;
        case 0x27c520u: goto label_27c520;
        case 0x27c524u: goto label_27c524;
        case 0x27c528u: goto label_27c528;
        case 0x27c52cu: goto label_27c52c;
        case 0x27c530u: goto label_27c530;
        case 0x27c534u: goto label_27c534;
        case 0x27c538u: goto label_27c538;
        case 0x27c53cu: goto label_27c53c;
        case 0x27c540u: goto label_27c540;
        case 0x27c544u: goto label_27c544;
        case 0x27c548u: goto label_27c548;
        case 0x27c54cu: goto label_27c54c;
        case 0x27c550u: goto label_27c550;
        case 0x27c554u: goto label_27c554;
        case 0x27c558u: goto label_27c558;
        case 0x27c55cu: goto label_27c55c;
        case 0x27c560u: goto label_27c560;
        case 0x27c564u: goto label_27c564;
        case 0x27c568u: goto label_27c568;
        case 0x27c56cu: goto label_27c56c;
        case 0x27c570u: goto label_27c570;
        case 0x27c574u: goto label_27c574;
        case 0x27c578u: goto label_27c578;
        case 0x27c57cu: goto label_27c57c;
        case 0x27c580u: goto label_27c580;
        case 0x27c584u: goto label_27c584;
        case 0x27c588u: goto label_27c588;
        case 0x27c58cu: goto label_27c58c;
        case 0x27c590u: goto label_27c590;
        case 0x27c594u: goto label_27c594;
        case 0x27c598u: goto label_27c598;
        case 0x27c59cu: goto label_27c59c;
        case 0x27c5a0u: goto label_27c5a0;
        case 0x27c5a4u: goto label_27c5a4;
        case 0x27c5a8u: goto label_27c5a8;
        case 0x27c5acu: goto label_27c5ac;
        case 0x27c5b0u: goto label_27c5b0;
        case 0x27c5b4u: goto label_27c5b4;
        case 0x27c5b8u: goto label_27c5b8;
        case 0x27c5bcu: goto label_27c5bc;
        case 0x27c5c0u: goto label_27c5c0;
        case 0x27c5c4u: goto label_27c5c4;
        case 0x27c5c8u: goto label_27c5c8;
        case 0x27c5ccu: goto label_27c5cc;
        case 0x27c5d0u: goto label_27c5d0;
        case 0x27c5d4u: goto label_27c5d4;
        case 0x27c5d8u: goto label_27c5d8;
        case 0x27c5dcu: goto label_27c5dc;
        case 0x27c5e0u: goto label_27c5e0;
        case 0x27c5e4u: goto label_27c5e4;
        case 0x27c5e8u: goto label_27c5e8;
        case 0x27c5ecu: goto label_27c5ec;
        case 0x27c5f0u: goto label_27c5f0;
        case 0x27c5f4u: goto label_27c5f4;
        case 0x27c5f8u: goto label_27c5f8;
        case 0x27c5fcu: goto label_27c5fc;
        case 0x27c600u: goto label_27c600;
        case 0x27c604u: goto label_27c604;
        case 0x27c608u: goto label_27c608;
        case 0x27c60cu: goto label_27c60c;
        case 0x27c610u: goto label_27c610;
        case 0x27c614u: goto label_27c614;
        case 0x27c618u: goto label_27c618;
        case 0x27c61cu: goto label_27c61c;
        case 0x27c620u: goto label_27c620;
        case 0x27c624u: goto label_27c624;
        case 0x27c628u: goto label_27c628;
        case 0x27c62cu: goto label_27c62c;
        case 0x27c630u: goto label_27c630;
        case 0x27c634u: goto label_27c634;
        case 0x27c638u: goto label_27c638;
        case 0x27c63cu: goto label_27c63c;
        case 0x27c640u: goto label_27c640;
        case 0x27c644u: goto label_27c644;
        case 0x27c648u: goto label_27c648;
        case 0x27c64cu: goto label_27c64c;
        case 0x27c650u: goto label_27c650;
        case 0x27c654u: goto label_27c654;
        case 0x27c658u: goto label_27c658;
        case 0x27c65cu: goto label_27c65c;
        case 0x27c660u: goto label_27c660;
        case 0x27c664u: goto label_27c664;
        case 0x27c668u: goto label_27c668;
        case 0x27c66cu: goto label_27c66c;
        case 0x27c670u: goto label_27c670;
        case 0x27c674u: goto label_27c674;
        case 0x27c678u: goto label_27c678;
        case 0x27c67cu: goto label_27c67c;
        case 0x27c680u: goto label_27c680;
        case 0x27c684u: goto label_27c684;
        case 0x27c688u: goto label_27c688;
        case 0x27c68cu: goto label_27c68c;
        case 0x27c690u: goto label_27c690;
        case 0x27c694u: goto label_27c694;
        case 0x27c698u: goto label_27c698;
        case 0x27c69cu: goto label_27c69c;
        case 0x27c6a0u: goto label_27c6a0;
        case 0x27c6a4u: goto label_27c6a4;
        case 0x27c6a8u: goto label_27c6a8;
        case 0x27c6acu: goto label_27c6ac;
        case 0x27c6b0u: goto label_27c6b0;
        case 0x27c6b4u: goto label_27c6b4;
        case 0x27c6b8u: goto label_27c6b8;
        case 0x27c6bcu: goto label_27c6bc;
        case 0x27c6c0u: goto label_27c6c0;
        case 0x27c6c4u: goto label_27c6c4;
        case 0x27c6c8u: goto label_27c6c8;
        case 0x27c6ccu: goto label_27c6cc;
        case 0x27c6d0u: goto label_27c6d0;
        case 0x27c6d4u: goto label_27c6d4;
        case 0x27c6d8u: goto label_27c6d8;
        case 0x27c6dcu: goto label_27c6dc;
        case 0x27c6e0u: goto label_27c6e0;
        case 0x27c6e4u: goto label_27c6e4;
        case 0x27c6e8u: goto label_27c6e8;
        case 0x27c6ecu: goto label_27c6ec;
        case 0x27c6f0u: goto label_27c6f0;
        case 0x27c6f4u: goto label_27c6f4;
        case 0x27c6f8u: goto label_27c6f8;
        case 0x27c6fcu: goto label_27c6fc;
        case 0x27c700u: goto label_27c700;
        case 0x27c704u: goto label_27c704;
        case 0x27c708u: goto label_27c708;
        case 0x27c70cu: goto label_27c70c;
        case 0x27c710u: goto label_27c710;
        case 0x27c714u: goto label_27c714;
        case 0x27c718u: goto label_27c718;
        case 0x27c71cu: goto label_27c71c;
        case 0x27c720u: goto label_27c720;
        case 0x27c724u: goto label_27c724;
        case 0x27c728u: goto label_27c728;
        case 0x27c72cu: goto label_27c72c;
        case 0x27c730u: goto label_27c730;
        case 0x27c734u: goto label_27c734;
        case 0x27c738u: goto label_27c738;
        case 0x27c73cu: goto label_27c73c;
        case 0x27c740u: goto label_27c740;
        case 0x27c744u: goto label_27c744;
        case 0x27c748u: goto label_27c748;
        case 0x27c74cu: goto label_27c74c;
        case 0x27c750u: goto label_27c750;
        case 0x27c754u: goto label_27c754;
        case 0x27c758u: goto label_27c758;
        case 0x27c75cu: goto label_27c75c;
        case 0x27c760u: goto label_27c760;
        case 0x27c764u: goto label_27c764;
        case 0x27c768u: goto label_27c768;
        case 0x27c76cu: goto label_27c76c;
        case 0x27c770u: goto label_27c770;
        case 0x27c774u: goto label_27c774;
        case 0x27c778u: goto label_27c778;
        case 0x27c77cu: goto label_27c77c;
        case 0x27c780u: goto label_27c780;
        case 0x27c784u: goto label_27c784;
        case 0x27c788u: goto label_27c788;
        case 0x27c78cu: goto label_27c78c;
        case 0x27c790u: goto label_27c790;
        case 0x27c794u: goto label_27c794;
        case 0x27c798u: goto label_27c798;
        case 0x27c79cu: goto label_27c79c;
        case 0x27c7a0u: goto label_27c7a0;
        case 0x27c7a4u: goto label_27c7a4;
        case 0x27c7a8u: goto label_27c7a8;
        case 0x27c7acu: goto label_27c7ac;
        case 0x27c7b0u: goto label_27c7b0;
        case 0x27c7b4u: goto label_27c7b4;
        case 0x27c7b8u: goto label_27c7b8;
        case 0x27c7bcu: goto label_27c7bc;
        case 0x27c7c0u: goto label_27c7c0;
        case 0x27c7c4u: goto label_27c7c4;
        case 0x27c7c8u: goto label_27c7c8;
        case 0x27c7ccu: goto label_27c7cc;
        case 0x27c7d0u: goto label_27c7d0;
        case 0x27c7d4u: goto label_27c7d4;
        case 0x27c7d8u: goto label_27c7d8;
        case 0x27c7dcu: goto label_27c7dc;
        case 0x27c7e0u: goto label_27c7e0;
        case 0x27c7e4u: goto label_27c7e4;
        case 0x27c7e8u: goto label_27c7e8;
        case 0x27c7ecu: goto label_27c7ec;
        case 0x27c7f0u: goto label_27c7f0;
        case 0x27c7f4u: goto label_27c7f4;
        case 0x27c7f8u: goto label_27c7f8;
        case 0x27c7fcu: goto label_27c7fc;
        case 0x27c800u: goto label_27c800;
        case 0x27c804u: goto label_27c804;
        case 0x27c808u: goto label_27c808;
        case 0x27c80cu: goto label_27c80c;
        case 0x27c810u: goto label_27c810;
        case 0x27c814u: goto label_27c814;
        case 0x27c818u: goto label_27c818;
        case 0x27c81cu: goto label_27c81c;
        case 0x27c820u: goto label_27c820;
        case 0x27c824u: goto label_27c824;
        case 0x27c828u: goto label_27c828;
        case 0x27c82cu: goto label_27c82c;
        case 0x27c830u: goto label_27c830;
        case 0x27c834u: goto label_27c834;
        case 0x27c838u: goto label_27c838;
        case 0x27c83cu: goto label_27c83c;
        case 0x27c840u: goto label_27c840;
        case 0x27c844u: goto label_27c844;
        case 0x27c848u: goto label_27c848;
        case 0x27c84cu: goto label_27c84c;
        case 0x27c850u: goto label_27c850;
        case 0x27c854u: goto label_27c854;
        default: break;
    }

    ctx->pc = 0x27c1e0u;

label_27c1e0:
    // 0x27c1e0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x27c1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_27c1e4:
    // 0x27c1e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27c1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_27c1e8:
    // 0x27c1e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27c1e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27c1ec:
    // 0x27c1ec: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x27c1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_27c1f0:
    // 0x27c1f0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x27c1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_27c1f4:
    // 0x27c1f4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x27c1f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27c1f8:
    // 0x27c1f8: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x27c1f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_27c1fc:
    // 0x27c1fc: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x27c1fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_27c200:
    // 0x27c200: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x27c200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_27c204:
    // 0x27c204: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x27c204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_27c208:
    // 0x27c208: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x27c208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_27c20c:
    // 0x27c20c: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x27c20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_27c210:
    // 0x27c210: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x27c210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_27c214:
    // 0x27c214: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x27c214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_27c218:
    // 0x27c218: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x27c218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_27c21c:
    // 0x27c21c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x27c21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_27c220:
    // 0x27c220: 0xc7c0000c  lwc1        $f0, 0xC($fp)
    ctx->pc = 0x27c220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c224:
    // 0x27c224: 0xafa70064  sw          $a3, 0x64($sp)
    ctx->pc = 0x27c224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 7));
label_27c228:
    // 0x27c228: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x27c228u;
    ctx->f[20] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
label_27c22c:
    // 0x27c22c: 0xafa80068  sw          $t0, 0x68($sp)
    ctx->pc = 0x27c22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 8));
label_27c230:
    // 0x27c230: 0xafa9006c  sw          $t1, 0x6C($sp)
    ctx->pc = 0x27c230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 9));
label_27c234:
    // 0x27c234: 0x84a30004  lh          $v1, 0x4($a1)
    ctx->pc = 0x27c234u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_27c238:
    // 0x27c238: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x27c238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_27c23c:
    // 0x27c23c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x27c23cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_27c240:
    // 0x27c240: 0x8ee6005c  lw          $a2, 0x5C($s7)
    ctx->pc = 0x27c240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 92)));
label_27c244:
    // 0x27c244: 0x84a40006  lh          $a0, 0x6($a1)
    ctx->pc = 0x27c244u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
label_27c248:
    // 0x27c248: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x27c248u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27c24c:
    // 0x27c24c: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x27c24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c250:
    // 0x27c250: 0x27b6000c  addiu       $s6, $sp, 0xC
    ctx->pc = 0x27c250u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_27c254:
    // 0x27c254: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x27c254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c258:
    // 0x27c258: 0x823818  mult        $a3, $a0, $v0
    ctx->pc = 0x27c258u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_27c25c:
    // 0x27c25c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x27c25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_27c260:
    // 0x27c260: 0x27b50018  addiu       $s5, $sp, 0x18
    ctx->pc = 0x27c260u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_27c264:
    // 0x27c264: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27c264u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_27c268:
    // 0x27c268: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x27c268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_27c26c:
    // 0x27c26c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x27c26cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_27c270:
    // 0x27c270: 0xe62021  addu        $a0, $a3, $a2
    ctx->pc = 0x27c270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_27c274:
    // 0x27c274: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x27c274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_27c278:
    // 0x27c278: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x27c278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_27c27c:
    // 0x27c27c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x27c27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_27c280:
    // 0x27c280: 0x8ee3002c  lw          $v1, 0x2C($s7)
    ctx->pc = 0x27c280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 44)));
label_27c284:
    // 0x27c284: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x27c284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_27c288:
    // 0x27c288: 0x1840008f  blez        $v0, . + 4 + (0x8F << 2)
label_27c28c:
    if (ctx->pc == 0x27C28Cu) {
        ctx->pc = 0x27C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C288u;
        // 0x27c28c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C290u;
        goto label_27c290;
    }
    ctx->pc = 0x27C288u;
    {
        const bool branch_taken_0x27c288 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x27C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C288u;
        // 0x27c28c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c288) {
            ctx->pc = 0x27C4C8u;
            goto label_27c4c8;
        }
    }
    ctx->pc = 0x27C290u;
label_27c290:
    // 0x27c290: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x27c290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_27c294:
    // 0x27c294: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x27c294u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_27c298:
    // 0x27c298: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x27c298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_27c29c:
    // 0x27c29c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x27c29cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_27c2a0:
    // 0x27c2a0: 0x1485000b  bne         $a0, $a1, . + 4 + (0xB << 2)
label_27c2a4:
    if (ctx->pc == 0x27C2A4u) {
        ctx->pc = 0x27C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C2A0u;
        // 0x27c2a4: 0x96220000  lhu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C2A8u;
        goto label_27c2a8;
    }
    ctx->pc = 0x27C2A0u;
    {
        const bool branch_taken_0x27c2a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x27C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C2A0u;
        // 0x27c2a4: 0x96220000  lhu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c2a0) {
            ctx->pc = 0x27C2D0u;
            goto label_27c2d0;
        }
    }
    ctx->pc = 0x27C2A8u;
label_27c2a8:
    // 0x27c2a8: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x27c2a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_27c2ac:
    // 0x27c2ac: 0x523018  mult        $a2, $v0, $s2
    ctx->pc = 0x27c2acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_27c2b0:
    // 0x27c2b0: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x27c2b0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_27c2b4:
    // 0x27c2b4: 0x721018  mult        $v0, $v1, $s2
    ctx->pc = 0x27c2b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_27c2b8:
    // 0x27c2b8: 0xc59821  addu        $s3, $a2, $a1
    ctx->pc = 0x27c2b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_27c2bc:
    // 0x27c2bc: 0x45b021  addu        $s6, $v0, $a1
    ctx->pc = 0x27c2bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_27c2c0:
    // 0x27c2c0: 0x921018  mult        $v0, $a0, $s2
    ctx->pc = 0x27c2c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_27c2c4:
    // 0x27c2c4: 0x1000005c  b           . + 4 + (0x5C << 2)
label_27c2c8:
    if (ctx->pc == 0x27C2C8u) {
        ctx->pc = 0x27C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C2C4u;
        // 0x27c2c8: 0x45a821  addu        $s5, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C2CCu;
        goto label_27c2cc;
    }
    ctx->pc = 0x27C2C4u;
    {
        const bool branch_taken_0x27c2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C2C4u;
        // 0x27c2c8: 0x45a821  addu        $s5, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c2c4) {
            ctx->pc = 0x27C438u;
            goto label_27c438;
        }
    }
    ctx->pc = 0x27C2CCu;
label_27c2cc:
    // 0x27c2cc: 0x0  nop
    ctx->pc = 0x27c2ccu;
    // NOP
label_27c2d0:
    // 0x27c2d0: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x27c2d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_27c2d4:
    // 0x27c2d4: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x27c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_27c2d8:
    // 0x27c2d8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_27c2dc:
    // 0x27c2dc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x27c2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27c2e0:
    // 0x27c2e0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27c2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c2e4:
    // 0x27c2e4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x27c2e4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_27c2e8:
    // 0x27c2e8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x27c2e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_27c2ec:
    // 0x27c2ec: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x27c2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c2f0:
    // 0x27c2f0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x27c2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c2f4:
    // 0x27c2f4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27c2f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27c2f8:
    // 0x27c2f8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x27c2f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_27c2fc:
    // 0x27c2fc: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x27c2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27c300:
    // 0x27c300: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27c300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c304:
    // 0x27c304: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x27c304u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_27c308:
    // 0x27c308: 0xc7a4002c  lwc1        $f4, 0x2C($sp)
    ctx->pc = 0x27c308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27c30c:
    // 0x27c30c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x27c30cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_27c310:
    // 0x27c310: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x27c310u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_27c314:
    // 0x27c314: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x27c314u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_27c318:
    // 0x27c318: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x27c318u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_27c31c:
    // 0x27c31c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x27c31cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_27c320:
    // 0x27c320: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x27c320u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_27c324:
    // 0x27c324: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27c324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c328:
    // 0x27c328: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x27c328u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27c32c:
    // 0x27c32c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x27c32cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_27c330:
    // 0x27c330: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x27c330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c334:
    // 0x27c334: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27c334u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27c338:
    // 0x27c338: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x27c338u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_27c33c:
    // 0x27c33c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27c33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c340:
    // 0x27c340: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x27c340u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_27c344:
    // 0x27c344: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x27c344u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_27c348:
    // 0x27c348: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x27c348u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_27c34c:
    // 0x27c34c: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x27c34cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_27c350:
    // 0x27c350: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x27c350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_27c354:
    // 0x27c354: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27c354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_27c358:
    // 0x27c358: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x27c358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27c35c:
    // 0x27c35c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27c35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c360:
    // 0x27c360: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x27c360u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_27c364:
    // 0x27c364: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x27c364u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_27c368:
    // 0x27c368: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x27c368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c36c:
    // 0x27c36c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x27c36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c370:
    // 0x27c370: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27c370u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27c374:
    // 0x27c374: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x27c374u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_27c378:
    // 0x27c378: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x27c378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27c37c:
    // 0x27c37c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27c37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c380:
    // 0x27c380: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x27c380u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_27c384:
    // 0x27c384: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x27c384u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_27c388:
    // 0x27c388: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x27c388u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_27c38c:
    // 0x27c38c: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x27c38cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_27c390:
    // 0x27c390: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x27c390u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_27c394:
    // 0x27c394: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x27c394u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_27c398:
    // 0x27c398: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x27c398u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_27c39c:
    // 0x27c39c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27c39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c3a0:
    // 0x27c3a0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x27c3a0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_27c3a4:
    // 0x27c3a4: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x27c3a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_27c3a8:
    // 0x27c3a8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x27c3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c3ac:
    // 0x27c3ac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27c3acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27c3b0:
    // 0x27c3b0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x27c3b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_27c3b4:
    // 0x27c3b4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27c3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c3b8:
    // 0x27c3b8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x27c3b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27c3bc:
    // 0x27c3bc: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x27c3bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_27c3c0:
    // 0x27c3c0: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x27c3c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_27c3c4:
    // 0x27c3c4: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x27c3c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_27c3c8:
    // 0x27c3c8: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x27c3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_27c3cc:
    // 0x27c3cc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27c3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_27c3d0:
    // 0x27c3d0: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x27c3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27c3d4:
    // 0x27c3d4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27c3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c3d8:
    // 0x27c3d8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x27c3d8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_27c3dc:
    // 0x27c3dc: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x27c3dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_27c3e0:
    // 0x27c3e0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x27c3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c3e4:
    // 0x27c3e4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x27c3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c3e8:
    // 0x27c3e8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27c3e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27c3ec:
    // 0x27c3ec: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x27c3ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_27c3f0:
    // 0x27c3f0: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x27c3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27c3f4:
    // 0x27c3f4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27c3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c3f8:
    // 0x27c3f8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x27c3f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_27c3fc:
    // 0x27c3fc: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x27c3fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_27c400:
    // 0x27c400: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x27c400u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_27c404:
    // 0x27c404: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x27c404u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_27c408:
    // 0x27c408: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x27c408u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_27c40c:
    // 0x27c40c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x27c40cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_27c410:
    // 0x27c410: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x27c410u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_27c414:
    // 0x27c414: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27c414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c418:
    // 0x27c418: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x27c418u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_27c41c:
    // 0x27c41c: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x27c41cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_27c420:
    // 0x27c420: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x27c420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c424:
    // 0x27c424: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27c424u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27c428:
    // 0x27c428: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x27c428u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_27c42c:
    // 0x27c42c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27c42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c430:
    // 0x27c430: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x27c430u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27c434:
    // 0x27c434: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x27c434u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_27c438:
    // 0x27c438: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x27c438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_27c43c:
    // 0x27c43c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x27c43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_27c440:
    // 0x27c440: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27c440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27c444:
    // 0x27c444: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x27c444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_27c448:
    // 0x27c448: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x27c448u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27c44c:
    // 0x27c44c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x27c44cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27c450:
    // 0x27c450: 0xc0a43ea  jal         func_290FA8
label_27c454:
    if (ctx->pc == 0x27C454u) {
        ctx->pc = 0x27C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C450u;
        // 0x27c454: 0x27a90060  addiu       $t1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C458u;
        goto label_27c458;
    }
    ctx->pc = 0x27C450u;
    SET_GPR_U32(ctx, 31, 0x27C458u);
    ctx->pc = 0x27C454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C450u;
    // 0x27c454: 0x27a90060  addiu       $t1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x290FA8u, 0x27C450u, 0x27C458u)) {
        return;
    }
    ctx->pc = 0x27C458u;
label_27c458:
    // 0x27c458: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_27c45c:
    if (ctx->pc == 0x27C45Cu) {
        ctx->pc = 0x27C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C458u;
        // 0x27c45c: 0x8ee20010  lw          $v0, 0x10($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C460u;
        goto label_27c460;
    }
    ctx->pc = 0x27C458u;
    {
        const bool branch_taken_0x27c458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c458) {
            ctx->pc = 0x27C45Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C458u;
            // 0x27c45c: 0x8ee20010  lw          $v0, 0x10($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C4B8u;
            goto label_27c4b8;
        }
    }
    ctx->pc = 0x27C460u;
label_27c460:
    // 0x27c460: 0x6a630007  ldl         $v1, 0x7($s3)
    ctx->pc = 0x27c460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_27c464:
    // 0x27c464: 0x6e630000  ldr         $v1, 0x0($s3)
    ctx->pc = 0x27c464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_27c468:
    // 0x27c468: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x27c468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_27c46c:
    // 0x27c46c: 0xb3a30043  sdl         $v1, 0x43($sp)
    ctx->pc = 0x27c46cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27c470:
    // 0x27c470: 0xb7a3003c  sdr         $v1, 0x3C($sp)
    ctx->pc = 0x27c470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27c474:
    // 0x27c474: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x27c474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
label_27c478:
    // 0x27c478: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x27c478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_27c47c:
    // 0x27c47c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27c47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27c480:
    // 0x27c480: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x27c480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c484:
    // 0x27c484: 0x8fa6006c  lw          $a2, 0x6C($sp)
    ctx->pc = 0x27c484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_27c488:
    // 0x27c488: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x27c488u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_27c48c:
    // 0x27c48c: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x27c48cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_27c490:
    // 0x27c490: 0xafb40048  sw          $s4, 0x48($sp)
    ctx->pc = 0x27c490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 20));
label_27c494:
    // 0x27c494: 0xafb3004c  sw          $s3, 0x4C($sp)
    ctx->pc = 0x27c494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 19));
label_27c498:
    // 0x27c498: 0xafb60050  sw          $s6, 0x50($sp)
    ctx->pc = 0x27c498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 22));
label_27c49c:
    // 0x27c49c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x27c49cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_27c4a0:
    // 0x27c4a0: 0xafb50054  sw          $s5, 0x54($sp)
    ctx->pc = 0x27c4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 21));
label_27c4a4:
    // 0x27c4a4: 0xe0f809  jalr        $a3
label_27c4a8:
    if (ctx->pc == 0x27C4A8u) {
        ctx->pc = 0x27C4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C4A4u;
        // 0x27c4a8: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C4ACu;
        goto label_27c4ac;
    }
    ctx->pc = 0x27C4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x27C4ACu);
        ctx->pc = 0x27C4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C4A4u;
        // 0x27c4a8: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C4A4u, 0x27C4ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27C4ACu;
label_27c4ac:
    // 0x27c4ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_27c4b0:
    if (ctx->pc == 0x27C4B0u) {
        ctx->pc = 0x27C4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C4ACu;
        // 0x27c4b0: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C4B4u;
        goto label_27c4b4;
    }
    ctx->pc = 0x27C4ACu;
    {
        const bool branch_taken_0x27c4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C4ACu;
        // 0x27c4b0: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c4ac) {
            ctx->pc = 0x27C4CCu;
            goto label_27c4cc;
        }
    }
    ctx->pc = 0x27C4B4u;
label_27c4b4:
    // 0x27c4b4: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x27c4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_27c4b8:
    // 0x27c4b8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x27c4b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_27c4bc:
    // 0x27c4bc: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x27c4bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_27c4c0:
    // 0x27c4c0: 0x1440ff75  bnez        $v0, . + 4 + (-0x8B << 2)
label_27c4c4:
    if (ctx->pc == 0x27C4C4u) {
        ctx->pc = 0x27C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C4C0u;
        // 0x27c4c4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C4C8u;
        goto label_27c4c8;
    }
    ctx->pc = 0x27C4C0u;
    {
        const bool branch_taken_0x27c4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C4C0u;
        // 0x27c4c4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c4c0) {
            ctx->pc = 0x27C298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c298;
        }
    }
    ctx->pc = 0x27C4C8u;
label_27c4c8:
    // 0x27c4c8: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x27c4c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_27c4cc:
    // 0x27c4cc: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x27c4ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_27c4d0:
    // 0x27c4d0: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x27c4d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_27c4d4:
    // 0x27c4d4: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x27c4d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_27c4d8:
    // 0x27c4d8: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x27c4d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_27c4dc:
    // 0x27c4dc: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x27c4dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_27c4e0:
    // 0x27c4e0: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x27c4e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_27c4e4:
    // 0x27c4e4: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x27c4e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_27c4e8:
    // 0x27c4e8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x27c4e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27c4ec:
    // 0x27c4ec: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x27c4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_27c4f0:
    // 0x27c4f0: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x27c4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27c4f4:
    // 0x27c4f4: 0x3e00008  jr          $ra
label_27c4f8:
    if (ctx->pc == 0x27C4F8u) {
        ctx->pc = 0x27C4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C4F4u;
        // 0x27c4f8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C4FCu;
        goto label_27c4fc;
    }
    ctx->pc = 0x27C4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C4F4u;
        // 0x27c4f8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C4F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C4FCu;
label_27c4fc:
    // 0x27c4fc: 0x0  nop
    ctx->pc = 0x27c4fcu;
    // NOP
label_27c500:
    // 0x27c500: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x27c500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
label_27c504:
    // 0x27c504: 0x7fb102c0  sq          $s1, 0x2C0($sp)
    ctx->pc = 0x27c504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 17));
label_27c508:
    // 0x27c508: 0x7fb202b0  sq          $s2, 0x2B0($sp)
    ctx->pc = 0x27c508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 18));
label_27c50c:
    // 0x27c50c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27c50cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27c510:
    // 0x27c510: 0x7fb302a0  sq          $s3, 0x2A0($sp)
    ctx->pc = 0x27c510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 19));
label_27c514:
    // 0x27c514: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27c514u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27c518:
    // 0x27c518: 0x7fb40290  sq          $s4, 0x290($sp)
    ctx->pc = 0x27c518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 20));
label_27c51c:
    // 0x27c51c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x27c51cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_27c520:
    // 0x27c520: 0x7fb002d0  sq          $s0, 0x2D0($sp)
    ctx->pc = 0x27c520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 16));
label_27c524:
    // 0x27c524: 0x7fb50280  sq          $s5, 0x280($sp)
    ctx->pc = 0x27c524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 21));
label_27c528:
    // 0x27c528: 0xffbf0270  sd          $ra, 0x270($sp)
    ctx->pc = 0x27c528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
label_27c52c:
    // 0x27c52c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x27c52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_27c530:
    // 0x27c530: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27c530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_27c534:
    // 0x27c534: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x27c534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_27c538:
    // 0x27c538: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
label_27c53c:
    if (ctx->pc == 0x27C53Cu) {
        ctx->pc = 0x27C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C538u;
        // 0x27c53c: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C540u;
        goto label_27c540;
    }
    ctx->pc = 0x27C538u;
    {
        const bool branch_taken_0x27c538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C538u;
        // 0x27c53c: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c538) {
            ctx->pc = 0x27C830u;
            goto label_27c830;
        }
    }
    ctx->pc = 0x27C540u;
label_27c540:
    // 0x27c540: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x27c540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_27c544:
    // 0x27c544: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27c544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_27c548:
    // 0x27c548: 0x2442cbe0  addiu       $v0, $v0, -0x3420
    ctx->pc = 0x27c548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953952));
label_27c54c:
    // 0x27c54c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27c54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27c550:
    // 0x27c550: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27c550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27c554:
    // 0x27c554: 0x800008  jr          $a0
label_27c558:
    if (ctx->pc == 0x27C558u) {
        ctx->pc = 0x27C55Cu;
        goto label_27c55c;
    }
    ctx->pc = 0x27C554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27C55Cu: goto label_27c55c;
            case 0x27C6A4u: goto label_27c6a4;
            case 0x27C6C0u: goto label_27c6c0;
            case 0x27C6D8u: goto label_27c6d8;
            case 0x27C7ECu: goto label_27c7ec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C554u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27C55Cu;
label_27c55c:
    // 0x27c55c: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x27c55cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_27c560:
    // 0x27c560: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x27c560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_27c564:
    // 0x27c564: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x27c564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_27c568:
    // 0x27c568: 0xb3a20013  sdl         $v0, 0x13($sp)
    ctx->pc = 0x27c568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27c56c:
    // 0x27c56c: 0xb7a2000c  sdr         $v0, 0xC($sp)
    ctx->pc = 0x27c56cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27c570:
    // 0x27c570: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x27c570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_27c574:
    // 0x27c574: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x27c574u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_27c578:
    // 0x27c578: 0x6a290007  ldl         $t1, 0x7($s1)
    ctx->pc = 0x27c578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_27c57c:
    // 0x27c57c: 0x6e290000  ldr         $t1, 0x0($s1)
    ctx->pc = 0x27c57cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_27c580:
    // 0x27c580: 0x8e2a0008  lw          $t2, 0x8($s1)
    ctx->pc = 0x27c580u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_27c584:
    // 0x27c584: 0xb3a90007  sdl         $t1, 0x7($sp)
    ctx->pc = 0x27c584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27c588:
    // 0x27c588: 0xb7a90000  sdr         $t1, 0x0($sp)
    ctx->pc = 0x27c588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27c58c:
    // 0x27c58c: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x27c58cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
label_27c590:
    // 0x27c590: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x27c590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_27c594:
    // 0x27c594: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x27c594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_27c598:
    // 0x27c598: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x27c598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_27c59c:
    // 0x27c59c: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x27c59cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_27c5a0:
    // 0x27c5a0: 0x6ba50017  ldl         $a1, 0x17($sp)
    ctx->pc = 0x27c5a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_27c5a4:
    // 0x27c5a4: 0x6fa50010  ldr         $a1, 0x10($sp)
    ctx->pc = 0x27c5a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_27c5a8:
    // 0x27c5a8: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x27c5a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27c5ac:
    // 0x27c5ac: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x27c5acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27c5b0:
    // 0x27c5b0: 0xb3a4002f  sdl         $a0, 0x2F($sp)
    ctx->pc = 0x27c5b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27c5b4:
    // 0x27c5b4: 0xb7a40028  sdr         $a0, 0x28($sp)
    ctx->pc = 0x27c5b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27c5b8:
    // 0x27c5b8: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x27c5b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27c5bc:
    // 0x27c5bc: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x27c5bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27c5c0:
    // 0x27c5c0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x27c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_27c5c4:
    // 0x27c5c4: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x27c5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_27c5c8:
    // 0x27c5c8: 0xae03011c  sw          $v1, 0x11C($s0)
    ctx->pc = 0x27c5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 3));
label_27c5cc:
    // 0x27c5cc: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x27c5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_27c5d0:
    // 0x27c5d0: 0x27a30038  addiu       $v1, $sp, 0x38
    ctx->pc = 0x27c5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_27c5d4:
    // 0x27c5d4: 0x8fa4013c  lw          $a0, 0x13C($sp)
    ctx->pc = 0x27c5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_27c5d8:
    // 0x27c5d8: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x27c5d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_27c5dc:
    // 0x27c5dc: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x27c5dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_27c5e0:
    // 0x27c5e0: 0x10600094  beqz        $v1, . + 4 + (0x94 << 2)
label_27c5e4:
    if (ctx->pc == 0x27C5E4u) {
        ctx->pc = 0x27C5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C5E0u;
        // 0x27c5e4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C5E8u;
        goto label_27c5e8;
    }
    ctx->pc = 0x27C5E0u;
    {
        const bool branch_taken_0x27c5e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C5E0u;
        // 0x27c5e4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c5e0) {
            ctx->pc = 0x27C834u;
            goto label_27c834;
        }
    }
    ctx->pc = 0x27C5E8u;
label_27c5e8:
    // 0x27c5e8: 0x8c82fffc  lw          $v0, -0x4($a0)
    ctx->pc = 0x27c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
label_27c5ec:
    // 0x27c5ec: 0x0  nop
    ctx->pc = 0x27c5ecu;
    // NOP
label_27c5f0:
    // 0x27c5f0: 0x2483fffc  addiu       $v1, $a0, -0x4
    ctx->pc = 0x27c5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_27c5f4:
    // 0x27c5f4: 0xafa3013c  sw          $v1, 0x13C($sp)
    ctx->pc = 0x27c5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 3));
label_27c5f8:
    // 0x27c5f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27c5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27c5fc:
    // 0x27c5fc: 0x480001e  bltz        $a0, . + 4 + (0x1E << 2)
label_27c600:
    if (ctx->pc == 0x27C600u) {
        ctx->pc = 0x27C600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C5FCu;
        // 0x27c600: 0x8fa2013c  lw          $v0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C604u;
        goto label_27c604;
    }
    ctx->pc = 0x27C5FCu;
    {
        const bool branch_taken_0x27c5fc = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x27C600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C5FCu;
        // 0x27c600: 0x8fa2013c  lw          $v0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c5fc) {
            ctx->pc = 0x27C678u;
            goto label_27c678;
        }
    }
    ctx->pc = 0x27C604u;
label_27c604:
    // 0x27c604: 0x8fa4013c  lw          $a0, 0x13C($sp)
    ctx->pc = 0x27c604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_27c608:
    // 0x27c608: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x27c608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27c60c:
    // 0x27c60c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27c60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27c610:
    // 0x27c610: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x27c610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_27c614:
    // 0x27c614: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x27c614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c618:
    // 0x27c618: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27c618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c61c:
    // 0x27c61c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27c61cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c620:
    // 0x27c620: 0x0  nop
    ctx->pc = 0x27c620u;
    // NOP
label_27c624:
    // 0x27c624: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_27c628:
    if (ctx->pc == 0x27C628u) {
        ctx->pc = 0x27C628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C624u;
        // 0x27c628: 0xc440000c  lwc1        $f0, 0xC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C62Cu;
        goto label_27c62c;
    }
    ctx->pc = 0x27C624u;
    {
        const bool branch_taken_0x27c624 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c624) {
            ctx->pc = 0x27C628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C624u;
            // 0x27c628: 0xc440000c  lwc1        $f0, 0xC($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C638u;
            goto label_27c638;
        }
    }
    ctx->pc = 0x27C62Cu;
label_27c62c:
    // 0x27c62c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x27c62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_27c630:
    // 0x27c630: 0x1000000b  b           . + 4 + (0xB << 2)
label_27c634:
    if (ctx->pc == 0x27C634u) {
        ctx->pc = 0x27C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C630u;
        // 0x27c634: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C638u;
        goto label_27c638;
    }
    ctx->pc = 0x27C630u;
    {
        const bool branch_taken_0x27c630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C630u;
        // 0x27c634: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c630) {
            ctx->pc = 0x27C660u;
            goto label_27c660;
        }
    }
    ctx->pc = 0x27C638u;
label_27c638:
    // 0x27c638: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x27c638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c63c:
    // 0x27c63c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x27c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_27c640:
    // 0x27c640: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27c640u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c644:
    // 0x27c644: 0x0  nop
    ctx->pc = 0x27c644u;
    // NOP
label_27c648:
    // 0x27c648: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_27c64c:
    if (ctx->pc == 0x27C64Cu) {
        ctx->pc = 0x27C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C648u;
        // 0x27c64c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C650u;
        goto label_27c650;
    }
    ctx->pc = 0x27C648u;
    {
        const bool branch_taken_0x27c648 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C648u;
        // 0x27c64c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c648) {
            ctx->pc = 0x27C660u;
            goto label_27c660;
        }
    }
    ctx->pc = 0x27C650u;
label_27c650:
    // 0x27c650: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x27c650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_27c654:
    // 0x27c654: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x27c654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_27c658:
    // 0x27c658: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x27c658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
label_27c65c:
    // 0x27c65c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x27c65cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_27c660:
    // 0x27c660: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x27c660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_27c664:
    // 0x27c664: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27c664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27c668:
    // 0x27c668: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27c668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27c66c:
    // 0x27c66c: 0x481ffe6  bgez        $a0, . + 4 + (-0x1A << 2)
label_27c670:
    if (ctx->pc == 0x27C670u) {
        ctx->pc = 0x27C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C66Cu;
        // 0x27c670: 0x8fa4013c  lw          $a0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C674u;
        goto label_27c674;
    }
    ctx->pc = 0x27C66Cu;
    {
        const bool branch_taken_0x27c66c = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x27C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C66Cu;
        // 0x27c670: 0x8fa4013c  lw          $a0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c66c) {
            ctx->pc = 0x27C608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c608;
        }
    }
    ctx->pc = 0x27C674u;
label_27c674:
    // 0x27c674: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x27c674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_27c678:
    // 0x27c678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27c678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27c67c:
    // 0x27c67c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x27c67cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27c680:
    // 0x27c680: 0x260f809  jalr        $s3
label_27c684:
    if (ctx->pc == 0x27C684u) {
        ctx->pc = 0x27C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C680u;
        // 0x27c684: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C688u;
        goto label_27c688;
    }
    ctx->pc = 0x27C680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x27C688u);
        ctx->pc = 0x27C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C680u;
        // 0x27c684: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C680u, 0x27C688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27C688u;
label_27c688:
    // 0x27c688: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
label_27c68c:
    if (ctx->pc == 0x27C68Cu) {
        ctx->pc = 0x27C68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C688u;
        // 0x27c68c: 0x8fa4013c  lw          $a0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C690u;
        goto label_27c690;
    }
    ctx->pc = 0x27C688u;
    {
        const bool branch_taken_0x27c688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C688u;
        // 0x27c68c: 0x8fa4013c  lw          $a0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c688) {
            ctx->pc = 0x27C830u;
            goto label_27c830;
        }
    }
    ctx->pc = 0x27C690u;
label_27c690:
    // 0x27c690: 0x2a4102b  sltu        $v0, $s5, $a0
    ctx->pc = 0x27c690u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_27c694:
    // 0x27c694: 0x5440ffd6  bnel        $v0, $zero, . + 4 + (-0x2A << 2)
label_27c698:
    if (ctx->pc == 0x27C698u) {
        ctx->pc = 0x27C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C694u;
        // 0x27c698: 0x8c82fffc  lw          $v0, -0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C69Cu;
        goto label_27c69c;
    }
    ctx->pc = 0x27C694u;
    {
        const bool branch_taken_0x27c694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c694) {
            ctx->pc = 0x27C698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C694u;
            // 0x27c698: 0x8c82fffc  lw          $v0, -0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C5F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c5f0;
        }
    }
    ctx->pc = 0x27C69Cu;
label_27c69c:
    // 0x27c69c: 0x10000065  b           . + 4 + (0x65 << 2)
label_27c6a0:
    if (ctx->pc == 0x27C6A0u) {
        ctx->pc = 0x27C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C69Cu;
        // 0x27c6a0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C6A4u;
        goto label_27c6a4;
    }
    ctx->pc = 0x27C69Cu;
    {
        const bool branch_taken_0x27c69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C69Cu;
        // 0x27c6a0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c69c) {
            ctx->pc = 0x27C834u;
            goto label_27c834;
        }
    }
    ctx->pc = 0x27C6A4u;
label_27c6a4:
    // 0x27c6a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27c6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27c6a8:
    // 0x27c6a8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x27c6a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27c6ac:
    // 0x27c6ac: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x27c6acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27c6b0:
    // 0x27c6b0: 0xc09dadc  jal         func_276B70
label_27c6b4:
    if (ctx->pc == 0x27C6B4u) {
        ctx->pc = 0x27C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C6B0u;
        // 0x27c6b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C6B8u;
        goto label_27c6b8;
    }
    ctx->pc = 0x27C6B0u;
    SET_GPR_U32(ctx, 31, 0x27C6B8u);
    ctx->pc = 0x27C6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C6B0u;
    // 0x27c6b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276B70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276B70u, 0x27C6B0u, 0x27C6B8u)) {
        return;
    }
    ctx->pc = 0x27C6B8u;
label_27c6b8:
    // 0x27c6b8: 0x1000005e  b           . + 4 + (0x5E << 2)
label_27c6bc:
    if (ctx->pc == 0x27C6BCu) {
        ctx->pc = 0x27C6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C6B8u;
        // 0x27c6bc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C6C0u;
        goto label_27c6c0;
    }
    ctx->pc = 0x27C6B8u;
    {
        const bool branch_taken_0x27c6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C6B8u;
        // 0x27c6bc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c6b8) {
            ctx->pc = 0x27C834u;
            goto label_27c834;
        }
    }
    ctx->pc = 0x27C6C0u;
label_27c6c0:
    // 0x27c6c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27c6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27c6c4:
    // 0x27c6c4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x27c6c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27c6c8:
    // 0x27c6c8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x27c6c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27c6cc:
    // 0x27c6cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27c6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27c6d0:
    // 0x27c6d0: 0x10000055  b           . + 4 + (0x55 << 2)
label_27c6d4:
    if (ctx->pc == 0x27C6D4u) {
        ctx->pc = 0x27C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C6D0u;
        // 0x27c6d4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C6D8u;
        goto label_27c6d8;
    }
    ctx->pc = 0x27C6D0u;
    {
        const bool branch_taken_0x27c6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C6D0u;
        // 0x27c6d4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c6d0) {
            ctx->pc = 0x27C828u;
            goto label_27c828;
        }
    }
    ctx->pc = 0x27C6D8u;
label_27c6d8:
    // 0x27c6d8: 0x27b00140  addiu       $s0, $sp, 0x140
    ctx->pc = 0x27c6d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_27c6dc:
    // 0x27c6dc: 0x6a2a0007  ldl         $t2, 0x7($s1)
    ctx->pc = 0x27c6dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_27c6e0:
    // 0x27c6e0: 0x6e2a0000  ldr         $t2, 0x0($s1)
    ctx->pc = 0x27c6e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_27c6e4:
    // 0x27c6e4: 0x6a2b000f  ldl         $t3, 0xF($s1)
    ctx->pc = 0x27c6e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_27c6e8:
    // 0x27c6e8: 0x6e2b0008  ldr         $t3, 0x8($s1)
    ctx->pc = 0x27c6e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_27c6ec:
    // 0x27c6ec: 0x6a220017  ldl         $v0, 0x17($s1)
    ctx->pc = 0x27c6ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_27c6f0:
    // 0x27c6f0: 0x6e220010  ldr         $v0, 0x10($s1)
    ctx->pc = 0x27c6f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_27c6f4:
    // 0x27c6f4: 0xb3aa0147  sdl         $t2, 0x147($sp)
    ctx->pc = 0x27c6f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27c6f8:
    // 0x27c6f8: 0xb7aa0140  sdr         $t2, 0x140($sp)
    ctx->pc = 0x27c6f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27c6fc:
    // 0x27c6fc: 0xb3ab014f  sdl         $t3, 0x14F($sp)
    ctx->pc = 0x27c6fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27c700:
    // 0x27c700: 0xb7ab0148  sdr         $t3, 0x148($sp)
    ctx->pc = 0x27c700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27c704:
    // 0x27c704: 0xb3a20157  sdl         $v0, 0x157($sp)
    ctx->pc = 0x27c704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 343); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27c708:
    // 0x27c708: 0xb7a20150  sdr         $v0, 0x150($sp)
    ctx->pc = 0x27c708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 336); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27c70c:
    // 0x27c70c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x27c70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_27c710:
    // 0x27c710: 0x27a3015c  addiu       $v1, $sp, 0x15C
    ctx->pc = 0x27c710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
label_27c714:
    // 0x27c714: 0xae03011c  sw          $v1, 0x11C($s0)
    ctx->pc = 0x27c714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 3));
label_27c718:
    // 0x27c718: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x27c718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
label_27c71c:
    // 0x27c71c: 0x27a30158  addiu       $v1, $sp, 0x158
    ctx->pc = 0x27c71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_27c720:
    // 0x27c720: 0x8fa4025c  lw          $a0, 0x25C($sp)
    ctx->pc = 0x27c720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_27c724:
    // 0x27c724: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x27c724u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_27c728:
    // 0x27c728: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x27c728u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_27c72c:
    // 0x27c72c: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
label_27c730:
    if (ctx->pc == 0x27C730u) {
        ctx->pc = 0x27C730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C72Cu;
        // 0x27c730: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C734u;
        goto label_27c734;
    }
    ctx->pc = 0x27C72Cu;
    {
        const bool branch_taken_0x27c72c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C72Cu;
        // 0x27c730: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c72c) {
            ctx->pc = 0x27C834u;
            goto label_27c834;
        }
    }
    ctx->pc = 0x27C734u;
label_27c734:
    // 0x27c734: 0x8c82fffc  lw          $v0, -0x4($a0)
    ctx->pc = 0x27c734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
label_27c738:
    // 0x27c738: 0x2483fffc  addiu       $v1, $a0, -0x4
    ctx->pc = 0x27c738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_27c73c:
    // 0x27c73c: 0xafa3025c  sw          $v1, 0x25C($sp)
    ctx->pc = 0x27c73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 3));
label_27c740:
    // 0x27c740: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27c740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27c744:
    // 0x27c744: 0x480001e  bltz        $a0, . + 4 + (0x1E << 2)
label_27c748:
    if (ctx->pc == 0x27C748u) {
        ctx->pc = 0x27C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C744u;
        // 0x27c748: 0x8fa2025c  lw          $v0, 0x25C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C74Cu;
        goto label_27c74c;
    }
    ctx->pc = 0x27C744u;
    {
        const bool branch_taken_0x27c744 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x27C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C744u;
        // 0x27c748: 0x8fa2025c  lw          $v0, 0x25C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c744) {
            ctx->pc = 0x27C7C0u;
            goto label_27c7c0;
        }
    }
    ctx->pc = 0x27C74Cu;
label_27c74c:
    // 0x27c74c: 0x8fa4025c  lw          $a0, 0x25C($sp)
    ctx->pc = 0x27c74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_27c750:
    // 0x27c750: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x27c750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27c754:
    // 0x27c754: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27c754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27c758:
    // 0x27c758: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x27c758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_27c75c:
    // 0x27c75c: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x27c75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c760:
    // 0x27c760: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27c760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c764:
    // 0x27c764: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27c764u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c768:
    // 0x27c768: 0x0  nop
    ctx->pc = 0x27c768u;
    // NOP
label_27c76c:
    // 0x27c76c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_27c770:
    if (ctx->pc == 0x27C770u) {
        ctx->pc = 0x27C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C76Cu;
        // 0x27c770: 0xc440000c  lwc1        $f0, 0xC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C774u;
        goto label_27c774;
    }
    ctx->pc = 0x27C76Cu;
    {
        const bool branch_taken_0x27c76c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c76c) {
            ctx->pc = 0x27C770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C76Cu;
            // 0x27c770: 0xc440000c  lwc1        $f0, 0xC($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C780u;
            goto label_27c780;
        }
    }
    ctx->pc = 0x27C774u;
label_27c774:
    // 0x27c774: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x27c774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_27c778:
    // 0x27c778: 0x1000000b  b           . + 4 + (0xB << 2)
label_27c77c:
    if (ctx->pc == 0x27C77Cu) {
        ctx->pc = 0x27C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C778u;
        // 0x27c77c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C780u;
        goto label_27c780;
    }
    ctx->pc = 0x27C778u;
    {
        const bool branch_taken_0x27c778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C778u;
        // 0x27c77c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c778) {
            ctx->pc = 0x27C7A8u;
            goto label_27c7a8;
        }
    }
    ctx->pc = 0x27C780u;
label_27c780:
    // 0x27c780: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x27c780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c784:
    // 0x27c784: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x27c784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_27c788:
    // 0x27c788: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27c788u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c78c:
    // 0x27c78c: 0x0  nop
    ctx->pc = 0x27c78cu;
    // NOP
label_27c790:
    // 0x27c790: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_27c794:
    if (ctx->pc == 0x27C794u) {
        ctx->pc = 0x27C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C790u;
        // 0x27c794: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C798u;
        goto label_27c798;
    }
    ctx->pc = 0x27C790u;
    {
        const bool branch_taken_0x27c790 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C790u;
        // 0x27c794: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c790) {
            ctx->pc = 0x27C7A8u;
            goto label_27c7a8;
        }
    }
    ctx->pc = 0x27C798u;
label_27c798:
    // 0x27c798: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x27c798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_27c79c:
    // 0x27c79c: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x27c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_27c7a0:
    // 0x27c7a0: 0xafa2025c  sw          $v0, 0x25C($sp)
    ctx->pc = 0x27c7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 2));
label_27c7a4:
    // 0x27c7a4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x27c7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_27c7a8:
    // 0x27c7a8: 0x8fa2025c  lw          $v0, 0x25C($sp)
    ctx->pc = 0x27c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_27c7ac:
    // 0x27c7ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27c7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27c7b0:
    // 0x27c7b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27c7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27c7b4:
    // 0x27c7b4: 0x481ffe6  bgez        $a0, . + 4 + (-0x1A << 2)
label_27c7b8:
    if (ctx->pc == 0x27C7B8u) {
        ctx->pc = 0x27C7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C7B4u;
        // 0x27c7b8: 0x8fa4025c  lw          $a0, 0x25C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C7BCu;
        goto label_27c7bc;
    }
    ctx->pc = 0x27C7B4u;
    {
        const bool branch_taken_0x27c7b4 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x27C7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C7B4u;
        // 0x27c7b8: 0x8fa4025c  lw          $a0, 0x25C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c7b4) {
            ctx->pc = 0x27C750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c750;
        }
    }
    ctx->pc = 0x27C7BCu;
label_27c7bc:
    // 0x27c7bc: 0x8fa2025c  lw          $v0, 0x25C($sp)
    ctx->pc = 0x27c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_27c7c0:
    // 0x27c7c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27c7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27c7c4:
    // 0x27c7c4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x27c7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27c7c8:
    // 0x27c7c8: 0x260f809  jalr        $s3
label_27c7cc:
    if (ctx->pc == 0x27C7CCu) {
        ctx->pc = 0x27C7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C7C8u;
        // 0x27c7cc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C7D0u;
        goto label_27c7d0;
    }
    ctx->pc = 0x27C7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x27C7D0u);
        ctx->pc = 0x27C7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C7C8u;
        // 0x27c7cc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C7C8u, 0x27C7D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27C7D0u;
label_27c7d0:
    // 0x27c7d0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_27c7d4:
    if (ctx->pc == 0x27C7D4u) {
        ctx->pc = 0x27C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C7D0u;
        // 0x27c7d4: 0x8fa4025c  lw          $a0, 0x25C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C7D8u;
        goto label_27c7d8;
    }
    ctx->pc = 0x27C7D0u;
    {
        const bool branch_taken_0x27c7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C7D0u;
        // 0x27c7d4: 0x8fa4025c  lw          $a0, 0x25C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c7d0) {
            ctx->pc = 0x27C830u;
            goto label_27c830;
        }
    }
    ctx->pc = 0x27C7D8u;
label_27c7d8:
    // 0x27c7d8: 0x2a4102b  sltu        $v0, $s5, $a0
    ctx->pc = 0x27c7d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_27c7dc:
    // 0x27c7dc: 0x5440ffd6  bnel        $v0, $zero, . + 4 + (-0x2A << 2)
label_27c7e0:
    if (ctx->pc == 0x27C7E0u) {
        ctx->pc = 0x27C7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C7DCu;
        // 0x27c7e0: 0x8c82fffc  lw          $v0, -0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C7E4u;
        goto label_27c7e4;
    }
    ctx->pc = 0x27C7DCu;
    {
        const bool branch_taken_0x27c7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c7dc) {
            ctx->pc = 0x27C7E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C7DCu;
            // 0x27c7e0: 0x8c82fffc  lw          $v0, -0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c738;
        }
    }
    ctx->pc = 0x27C7E4u;
label_27c7e4:
    // 0x27c7e4: 0x10000013  b           . + 4 + (0x13 << 2)
label_27c7e8:
    if (ctx->pc == 0x27C7E8u) {
        ctx->pc = 0x27C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C7E4u;
        // 0x27c7e8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C7ECu;
        goto label_27c7ec;
    }
    ctx->pc = 0x27C7E4u;
    {
        const bool branch_taken_0x27c7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C7E4u;
        // 0x27c7e8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c7e4) {
            ctx->pc = 0x27C834u;
            goto label_27c834;
        }
    }
    ctx->pc = 0x27C7ECu;
label_27c7ec:
    // 0x27c7ec: 0xc09533c  jal         func_254CF0
label_27c7f0:
    if (ctx->pc == 0x27C7F0u) {
        ctx->pc = 0x27C7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C7ECu;
        // 0x27c7f0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C7F4u;
        goto label_27c7f4;
    }
    ctx->pc = 0x27C7ECu;
    SET_GPR_U32(ctx, 31, 0x27C7F4u);
    ctx->pc = 0x27C7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C7ECu;
    // 0x27c7f0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254CF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x254CF0u, 0x27C7ECu, 0x27C7F4u)) {
        return;
    }
    ctx->pc = 0x27C7F4u;
label_27c7f4:
    // 0x27c7f4: 0x68490007  ldl         $t1, 0x7($v0)
    ctx->pc = 0x27c7f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_27c7f8:
    // 0x27c7f8: 0x6c490000  ldr         $t1, 0x0($v0)
    ctx->pc = 0x27c7f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_27c7fc:
    // 0x27c7fc: 0x684a000f  ldl         $t2, 0xF($v0)
    ctx->pc = 0x27c7fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_27c800:
    // 0x27c800: 0x6c4a0008  ldr         $t2, 0x8($v0)
    ctx->pc = 0x27c800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_27c804:
    // 0x27c804: 0xb3a90267  sdl         $t1, 0x267($sp)
    ctx->pc = 0x27c804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 615); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27c808:
    // 0x27c808: 0xb7a90260  sdr         $t1, 0x260($sp)
    ctx->pc = 0x27c808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 608); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27c80c:
    // 0x27c80c: 0xb3aa026f  sdl         $t2, 0x26F($sp)
    ctx->pc = 0x27c80cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 623); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27c810:
    // 0x27c810: 0xb7aa0268  sdr         $t2, 0x268($sp)
    ctx->pc = 0x27c810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 616); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27c814:
    // 0x27c814: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27c814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27c818:
    // 0x27c818: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x27c818u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27c81c:
    // 0x27c81c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x27c81cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27c820:
    // 0x27c820: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27c820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27c824:
    // 0x27c824: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x27c824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_27c828:
    // 0x27c828: 0xc09dbb0  jal         func_276EC0
label_27c82c:
    if (ctx->pc == 0x27C82Cu) {
        ctx->pc = 0x27C830u;
        goto label_27c830;
    }
    ctx->pc = 0x27C828u;
    SET_GPR_U32(ctx, 31, 0x27C830u);
    ctx->pc = 0x276EC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276EC0u, 0x27C828u, 0x27C830u)) {
        return;
    }
    ctx->pc = 0x27C830u;
label_27c830:
    // 0x27c830: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x27c830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27c834:
    // 0x27c834: 0x7bb002d0  lq          $s0, 0x2D0($sp)
    ctx->pc = 0x27c834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_27c838:
    // 0x27c838: 0x7bb102c0  lq          $s1, 0x2C0($sp)
    ctx->pc = 0x27c838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_27c83c:
    // 0x27c83c: 0x7bb202b0  lq          $s2, 0x2B0($sp)
    ctx->pc = 0x27c83cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_27c840:
    // 0x27c840: 0x7bb302a0  lq          $s3, 0x2A0($sp)
    ctx->pc = 0x27c840u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_27c844:
    // 0x27c844: 0x7bb40290  lq          $s4, 0x290($sp)
    ctx->pc = 0x27c844u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_27c848:
    // 0x27c848: 0x7bb50280  lq          $s5, 0x280($sp)
    ctx->pc = 0x27c848u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_27c84c:
    // 0x27c84c: 0xdfbf0270  ld          $ra, 0x270($sp)
    ctx->pc = 0x27c84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_27c850:
    // 0x27c850: 0x3e00008  jr          $ra
label_27c854:
    if (ctx->pc == 0x27C854u) {
        ctx->pc = 0x27C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C850u;
        // 0x27c854: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C858u;
        goto label_fallthrough_0x27c850;
    }
    ctx->pc = 0x27C850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C850u;
        // 0x27c854: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x27c850:
    ctx->pc = 0x27C858u;
}
