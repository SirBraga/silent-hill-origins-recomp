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

// Function: sub_0012F140
// Address: 0x12f140 - 0x12f858
void sub_0012F140_0x12f140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F140_0x12f140");
#endif

    switch (ctx->pc) {
        case 0x12f140u: goto label_12f140;
        case 0x12f144u: goto label_12f144;
        case 0x12f148u: goto label_12f148;
        case 0x12f14cu: goto label_12f14c;
        case 0x12f150u: goto label_12f150;
        case 0x12f154u: goto label_12f154;
        case 0x12f158u: goto label_12f158;
        case 0x12f15cu: goto label_12f15c;
        case 0x12f160u: goto label_12f160;
        case 0x12f164u: goto label_12f164;
        case 0x12f168u: goto label_12f168;
        case 0x12f16cu: goto label_12f16c;
        case 0x12f170u: goto label_12f170;
        case 0x12f174u: goto label_12f174;
        case 0x12f178u: goto label_12f178;
        case 0x12f17cu: goto label_12f17c;
        case 0x12f180u: goto label_12f180;
        case 0x12f184u: goto label_12f184;
        case 0x12f188u: goto label_12f188;
        case 0x12f18cu: goto label_12f18c;
        case 0x12f190u: goto label_12f190;
        case 0x12f194u: goto label_12f194;
        case 0x12f198u: goto label_12f198;
        case 0x12f19cu: goto label_12f19c;
        case 0x12f1a0u: goto label_12f1a0;
        case 0x12f1a4u: goto label_12f1a4;
        case 0x12f1a8u: goto label_12f1a8;
        case 0x12f1acu: goto label_12f1ac;
        case 0x12f1b0u: goto label_12f1b0;
        case 0x12f1b4u: goto label_12f1b4;
        case 0x12f1b8u: goto label_12f1b8;
        case 0x12f1bcu: goto label_12f1bc;
        case 0x12f1c0u: goto label_12f1c0;
        case 0x12f1c4u: goto label_12f1c4;
        case 0x12f1c8u: goto label_12f1c8;
        case 0x12f1ccu: goto label_12f1cc;
        case 0x12f1d0u: goto label_12f1d0;
        case 0x12f1d4u: goto label_12f1d4;
        case 0x12f1d8u: goto label_12f1d8;
        case 0x12f1dcu: goto label_12f1dc;
        case 0x12f1e0u: goto label_12f1e0;
        case 0x12f1e4u: goto label_12f1e4;
        case 0x12f1e8u: goto label_12f1e8;
        case 0x12f1ecu: goto label_12f1ec;
        case 0x12f1f0u: goto label_12f1f0;
        case 0x12f1f4u: goto label_12f1f4;
        case 0x12f1f8u: goto label_12f1f8;
        case 0x12f1fcu: goto label_12f1fc;
        case 0x12f200u: goto label_12f200;
        case 0x12f204u: goto label_12f204;
        case 0x12f208u: goto label_12f208;
        case 0x12f20cu: goto label_12f20c;
        case 0x12f210u: goto label_12f210;
        case 0x12f214u: goto label_12f214;
        case 0x12f218u: goto label_12f218;
        case 0x12f21cu: goto label_12f21c;
        case 0x12f220u: goto label_12f220;
        case 0x12f224u: goto label_12f224;
        case 0x12f228u: goto label_12f228;
        case 0x12f22cu: goto label_12f22c;
        case 0x12f230u: goto label_12f230;
        case 0x12f234u: goto label_12f234;
        case 0x12f238u: goto label_12f238;
        case 0x12f23cu: goto label_12f23c;
        case 0x12f240u: goto label_12f240;
        case 0x12f244u: goto label_12f244;
        case 0x12f248u: goto label_12f248;
        case 0x12f24cu: goto label_12f24c;
        case 0x12f250u: goto label_12f250;
        case 0x12f254u: goto label_12f254;
        case 0x12f258u: goto label_12f258;
        case 0x12f25cu: goto label_12f25c;
        case 0x12f260u: goto label_12f260;
        case 0x12f264u: goto label_12f264;
        case 0x12f268u: goto label_12f268;
        case 0x12f26cu: goto label_12f26c;
        case 0x12f270u: goto label_12f270;
        case 0x12f274u: goto label_12f274;
        case 0x12f278u: goto label_12f278;
        case 0x12f27cu: goto label_12f27c;
        case 0x12f280u: goto label_12f280;
        case 0x12f284u: goto label_12f284;
        case 0x12f288u: goto label_12f288;
        case 0x12f28cu: goto label_12f28c;
        case 0x12f290u: goto label_12f290;
        case 0x12f294u: goto label_12f294;
        case 0x12f298u: goto label_12f298;
        case 0x12f29cu: goto label_12f29c;
        case 0x12f2a0u: goto label_12f2a0;
        case 0x12f2a4u: goto label_12f2a4;
        case 0x12f2a8u: goto label_12f2a8;
        case 0x12f2acu: goto label_12f2ac;
        case 0x12f2b0u: goto label_12f2b0;
        case 0x12f2b4u: goto label_12f2b4;
        case 0x12f2b8u: goto label_12f2b8;
        case 0x12f2bcu: goto label_12f2bc;
        case 0x12f2c0u: goto label_12f2c0;
        case 0x12f2c4u: goto label_12f2c4;
        case 0x12f2c8u: goto label_12f2c8;
        case 0x12f2ccu: goto label_12f2cc;
        case 0x12f2d0u: goto label_12f2d0;
        case 0x12f2d4u: goto label_12f2d4;
        case 0x12f2d8u: goto label_12f2d8;
        case 0x12f2dcu: goto label_12f2dc;
        case 0x12f2e0u: goto label_12f2e0;
        case 0x12f2e4u: goto label_12f2e4;
        case 0x12f2e8u: goto label_12f2e8;
        case 0x12f2ecu: goto label_12f2ec;
        case 0x12f2f0u: goto label_12f2f0;
        case 0x12f2f4u: goto label_12f2f4;
        case 0x12f2f8u: goto label_12f2f8;
        case 0x12f2fcu: goto label_12f2fc;
        case 0x12f300u: goto label_12f300;
        case 0x12f304u: goto label_12f304;
        case 0x12f308u: goto label_12f308;
        case 0x12f30cu: goto label_12f30c;
        case 0x12f310u: goto label_12f310;
        case 0x12f314u: goto label_12f314;
        case 0x12f318u: goto label_12f318;
        case 0x12f31cu: goto label_12f31c;
        case 0x12f320u: goto label_12f320;
        case 0x12f324u: goto label_12f324;
        case 0x12f328u: goto label_12f328;
        case 0x12f32cu: goto label_12f32c;
        case 0x12f330u: goto label_12f330;
        case 0x12f334u: goto label_12f334;
        case 0x12f338u: goto label_12f338;
        case 0x12f33cu: goto label_12f33c;
        case 0x12f340u: goto label_12f340;
        case 0x12f344u: goto label_12f344;
        case 0x12f348u: goto label_12f348;
        case 0x12f34cu: goto label_12f34c;
        case 0x12f350u: goto label_12f350;
        case 0x12f354u: goto label_12f354;
        case 0x12f358u: goto label_12f358;
        case 0x12f35cu: goto label_12f35c;
        case 0x12f360u: goto label_12f360;
        case 0x12f364u: goto label_12f364;
        case 0x12f368u: goto label_12f368;
        case 0x12f36cu: goto label_12f36c;
        case 0x12f370u: goto label_12f370;
        case 0x12f374u: goto label_12f374;
        case 0x12f378u: goto label_12f378;
        case 0x12f37cu: goto label_12f37c;
        case 0x12f380u: goto label_12f380;
        case 0x12f384u: goto label_12f384;
        case 0x12f388u: goto label_12f388;
        case 0x12f38cu: goto label_12f38c;
        case 0x12f390u: goto label_12f390;
        case 0x12f394u: goto label_12f394;
        case 0x12f398u: goto label_12f398;
        case 0x12f39cu: goto label_12f39c;
        case 0x12f3a0u: goto label_12f3a0;
        case 0x12f3a4u: goto label_12f3a4;
        case 0x12f3a8u: goto label_12f3a8;
        case 0x12f3acu: goto label_12f3ac;
        case 0x12f3b0u: goto label_12f3b0;
        case 0x12f3b4u: goto label_12f3b4;
        case 0x12f3b8u: goto label_12f3b8;
        case 0x12f3bcu: goto label_12f3bc;
        case 0x12f3c0u: goto label_12f3c0;
        case 0x12f3c4u: goto label_12f3c4;
        case 0x12f3c8u: goto label_12f3c8;
        case 0x12f3ccu: goto label_12f3cc;
        case 0x12f3d0u: goto label_12f3d0;
        case 0x12f3d4u: goto label_12f3d4;
        case 0x12f3d8u: goto label_12f3d8;
        case 0x12f3dcu: goto label_12f3dc;
        case 0x12f3e0u: goto label_12f3e0;
        case 0x12f3e4u: goto label_12f3e4;
        case 0x12f3e8u: goto label_12f3e8;
        case 0x12f3ecu: goto label_12f3ec;
        case 0x12f3f0u: goto label_12f3f0;
        case 0x12f3f4u: goto label_12f3f4;
        case 0x12f3f8u: goto label_12f3f8;
        case 0x12f3fcu: goto label_12f3fc;
        case 0x12f400u: goto label_12f400;
        case 0x12f404u: goto label_12f404;
        case 0x12f408u: goto label_12f408;
        case 0x12f40cu: goto label_12f40c;
        case 0x12f410u: goto label_12f410;
        case 0x12f414u: goto label_12f414;
        case 0x12f418u: goto label_12f418;
        case 0x12f41cu: goto label_12f41c;
        case 0x12f420u: goto label_12f420;
        case 0x12f424u: goto label_12f424;
        case 0x12f428u: goto label_12f428;
        case 0x12f42cu: goto label_12f42c;
        case 0x12f430u: goto label_12f430;
        case 0x12f434u: goto label_12f434;
        case 0x12f438u: goto label_12f438;
        case 0x12f43cu: goto label_12f43c;
        case 0x12f440u: goto label_12f440;
        case 0x12f444u: goto label_12f444;
        case 0x12f448u: goto label_12f448;
        case 0x12f44cu: goto label_12f44c;
        case 0x12f450u: goto label_12f450;
        case 0x12f454u: goto label_12f454;
        case 0x12f458u: goto label_12f458;
        case 0x12f45cu: goto label_12f45c;
        case 0x12f460u: goto label_12f460;
        case 0x12f464u: goto label_12f464;
        case 0x12f468u: goto label_12f468;
        case 0x12f46cu: goto label_12f46c;
        case 0x12f470u: goto label_12f470;
        case 0x12f474u: goto label_12f474;
        case 0x12f478u: goto label_12f478;
        case 0x12f47cu: goto label_12f47c;
        case 0x12f480u: goto label_12f480;
        case 0x12f484u: goto label_12f484;
        case 0x12f488u: goto label_12f488;
        case 0x12f48cu: goto label_12f48c;
        case 0x12f490u: goto label_12f490;
        case 0x12f494u: goto label_12f494;
        case 0x12f498u: goto label_12f498;
        case 0x12f49cu: goto label_12f49c;
        case 0x12f4a0u: goto label_12f4a0;
        case 0x12f4a4u: goto label_12f4a4;
        case 0x12f4a8u: goto label_12f4a8;
        case 0x12f4acu: goto label_12f4ac;
        case 0x12f4b0u: goto label_12f4b0;
        case 0x12f4b4u: goto label_12f4b4;
        case 0x12f4b8u: goto label_12f4b8;
        case 0x12f4bcu: goto label_12f4bc;
        case 0x12f4c0u: goto label_12f4c0;
        case 0x12f4c4u: goto label_12f4c4;
        case 0x12f4c8u: goto label_12f4c8;
        case 0x12f4ccu: goto label_12f4cc;
        case 0x12f4d0u: goto label_12f4d0;
        case 0x12f4d4u: goto label_12f4d4;
        case 0x12f4d8u: goto label_12f4d8;
        case 0x12f4dcu: goto label_12f4dc;
        case 0x12f4e0u: goto label_12f4e0;
        case 0x12f4e4u: goto label_12f4e4;
        case 0x12f4e8u: goto label_12f4e8;
        case 0x12f4ecu: goto label_12f4ec;
        case 0x12f4f0u: goto label_12f4f0;
        case 0x12f4f4u: goto label_12f4f4;
        case 0x12f4f8u: goto label_12f4f8;
        case 0x12f4fcu: goto label_12f4fc;
        case 0x12f500u: goto label_12f500;
        case 0x12f504u: goto label_12f504;
        case 0x12f508u: goto label_12f508;
        case 0x12f50cu: goto label_12f50c;
        case 0x12f510u: goto label_12f510;
        case 0x12f514u: goto label_12f514;
        case 0x12f518u: goto label_12f518;
        case 0x12f51cu: goto label_12f51c;
        case 0x12f520u: goto label_12f520;
        case 0x12f524u: goto label_12f524;
        case 0x12f528u: goto label_12f528;
        case 0x12f52cu: goto label_12f52c;
        case 0x12f530u: goto label_12f530;
        case 0x12f534u: goto label_12f534;
        case 0x12f538u: goto label_12f538;
        case 0x12f53cu: goto label_12f53c;
        case 0x12f540u: goto label_12f540;
        case 0x12f544u: goto label_12f544;
        case 0x12f548u: goto label_12f548;
        case 0x12f54cu: goto label_12f54c;
        case 0x12f550u: goto label_12f550;
        case 0x12f554u: goto label_12f554;
        case 0x12f558u: goto label_12f558;
        case 0x12f55cu: goto label_12f55c;
        case 0x12f560u: goto label_12f560;
        case 0x12f564u: goto label_12f564;
        case 0x12f568u: goto label_12f568;
        case 0x12f56cu: goto label_12f56c;
        case 0x12f570u: goto label_12f570;
        case 0x12f574u: goto label_12f574;
        case 0x12f578u: goto label_12f578;
        case 0x12f57cu: goto label_12f57c;
        case 0x12f580u: goto label_12f580;
        case 0x12f584u: goto label_12f584;
        case 0x12f588u: goto label_12f588;
        case 0x12f58cu: goto label_12f58c;
        case 0x12f590u: goto label_12f590;
        case 0x12f594u: goto label_12f594;
        case 0x12f598u: goto label_12f598;
        case 0x12f59cu: goto label_12f59c;
        case 0x12f5a0u: goto label_12f5a0;
        case 0x12f5a4u: goto label_12f5a4;
        case 0x12f5a8u: goto label_12f5a8;
        case 0x12f5acu: goto label_12f5ac;
        case 0x12f5b0u: goto label_12f5b0;
        case 0x12f5b4u: goto label_12f5b4;
        case 0x12f5b8u: goto label_12f5b8;
        case 0x12f5bcu: goto label_12f5bc;
        case 0x12f5c0u: goto label_12f5c0;
        case 0x12f5c4u: goto label_12f5c4;
        case 0x12f5c8u: goto label_12f5c8;
        case 0x12f5ccu: goto label_12f5cc;
        case 0x12f5d0u: goto label_12f5d0;
        case 0x12f5d4u: goto label_12f5d4;
        case 0x12f5d8u: goto label_12f5d8;
        case 0x12f5dcu: goto label_12f5dc;
        case 0x12f5e0u: goto label_12f5e0;
        case 0x12f5e4u: goto label_12f5e4;
        case 0x12f5e8u: goto label_12f5e8;
        case 0x12f5ecu: goto label_12f5ec;
        case 0x12f5f0u: goto label_12f5f0;
        case 0x12f5f4u: goto label_12f5f4;
        case 0x12f5f8u: goto label_12f5f8;
        case 0x12f5fcu: goto label_12f5fc;
        case 0x12f600u: goto label_12f600;
        case 0x12f604u: goto label_12f604;
        case 0x12f608u: goto label_12f608;
        case 0x12f60cu: goto label_12f60c;
        case 0x12f610u: goto label_12f610;
        case 0x12f614u: goto label_12f614;
        case 0x12f618u: goto label_12f618;
        case 0x12f61cu: goto label_12f61c;
        case 0x12f620u: goto label_12f620;
        case 0x12f624u: goto label_12f624;
        case 0x12f628u: goto label_12f628;
        case 0x12f62cu: goto label_12f62c;
        case 0x12f630u: goto label_12f630;
        case 0x12f634u: goto label_12f634;
        case 0x12f638u: goto label_12f638;
        case 0x12f63cu: goto label_12f63c;
        case 0x12f640u: goto label_12f640;
        case 0x12f644u: goto label_12f644;
        case 0x12f648u: goto label_12f648;
        case 0x12f64cu: goto label_12f64c;
        case 0x12f650u: goto label_12f650;
        case 0x12f654u: goto label_12f654;
        case 0x12f658u: goto label_12f658;
        case 0x12f65cu: goto label_12f65c;
        case 0x12f660u: goto label_12f660;
        case 0x12f664u: goto label_12f664;
        case 0x12f668u: goto label_12f668;
        case 0x12f66cu: goto label_12f66c;
        case 0x12f670u: goto label_12f670;
        case 0x12f674u: goto label_12f674;
        case 0x12f678u: goto label_12f678;
        case 0x12f67cu: goto label_12f67c;
        case 0x12f680u: goto label_12f680;
        case 0x12f684u: goto label_12f684;
        case 0x12f688u: goto label_12f688;
        case 0x12f68cu: goto label_12f68c;
        case 0x12f690u: goto label_12f690;
        case 0x12f694u: goto label_12f694;
        case 0x12f698u: goto label_12f698;
        case 0x12f69cu: goto label_12f69c;
        case 0x12f6a0u: goto label_12f6a0;
        case 0x12f6a4u: goto label_12f6a4;
        case 0x12f6a8u: goto label_12f6a8;
        case 0x12f6acu: goto label_12f6ac;
        case 0x12f6b0u: goto label_12f6b0;
        case 0x12f6b4u: goto label_12f6b4;
        case 0x12f6b8u: goto label_12f6b8;
        case 0x12f6bcu: goto label_12f6bc;
        case 0x12f6c0u: goto label_12f6c0;
        case 0x12f6c4u: goto label_12f6c4;
        case 0x12f6c8u: goto label_12f6c8;
        case 0x12f6ccu: goto label_12f6cc;
        case 0x12f6d0u: goto label_12f6d0;
        case 0x12f6d4u: goto label_12f6d4;
        case 0x12f6d8u: goto label_12f6d8;
        case 0x12f6dcu: goto label_12f6dc;
        case 0x12f6e0u: goto label_12f6e0;
        case 0x12f6e4u: goto label_12f6e4;
        case 0x12f6e8u: goto label_12f6e8;
        case 0x12f6ecu: goto label_12f6ec;
        case 0x12f6f0u: goto label_12f6f0;
        case 0x12f6f4u: goto label_12f6f4;
        case 0x12f6f8u: goto label_12f6f8;
        case 0x12f6fcu: goto label_12f6fc;
        case 0x12f700u: goto label_12f700;
        case 0x12f704u: goto label_12f704;
        case 0x12f708u: goto label_12f708;
        case 0x12f70cu: goto label_12f70c;
        case 0x12f710u: goto label_12f710;
        case 0x12f714u: goto label_12f714;
        case 0x12f718u: goto label_12f718;
        case 0x12f71cu: goto label_12f71c;
        case 0x12f720u: goto label_12f720;
        case 0x12f724u: goto label_12f724;
        case 0x12f728u: goto label_12f728;
        case 0x12f72cu: goto label_12f72c;
        case 0x12f730u: goto label_12f730;
        case 0x12f734u: goto label_12f734;
        case 0x12f738u: goto label_12f738;
        case 0x12f73cu: goto label_12f73c;
        case 0x12f740u: goto label_12f740;
        case 0x12f744u: goto label_12f744;
        case 0x12f748u: goto label_12f748;
        case 0x12f74cu: goto label_12f74c;
        case 0x12f750u: goto label_12f750;
        case 0x12f754u: goto label_12f754;
        case 0x12f758u: goto label_12f758;
        case 0x12f75cu: goto label_12f75c;
        case 0x12f760u: goto label_12f760;
        case 0x12f764u: goto label_12f764;
        case 0x12f768u: goto label_12f768;
        case 0x12f76cu: goto label_12f76c;
        case 0x12f770u: goto label_12f770;
        case 0x12f774u: goto label_12f774;
        case 0x12f778u: goto label_12f778;
        case 0x12f77cu: goto label_12f77c;
        case 0x12f780u: goto label_12f780;
        case 0x12f784u: goto label_12f784;
        case 0x12f788u: goto label_12f788;
        case 0x12f78cu: goto label_12f78c;
        case 0x12f790u: goto label_12f790;
        case 0x12f794u: goto label_12f794;
        case 0x12f798u: goto label_12f798;
        case 0x12f79cu: goto label_12f79c;
        case 0x12f7a0u: goto label_12f7a0;
        case 0x12f7a4u: goto label_12f7a4;
        case 0x12f7a8u: goto label_12f7a8;
        case 0x12f7acu: goto label_12f7ac;
        case 0x12f7b0u: goto label_12f7b0;
        case 0x12f7b4u: goto label_12f7b4;
        case 0x12f7b8u: goto label_12f7b8;
        case 0x12f7bcu: goto label_12f7bc;
        case 0x12f7c0u: goto label_12f7c0;
        case 0x12f7c4u: goto label_12f7c4;
        case 0x12f7c8u: goto label_12f7c8;
        case 0x12f7ccu: goto label_12f7cc;
        case 0x12f7d0u: goto label_12f7d0;
        case 0x12f7d4u: goto label_12f7d4;
        case 0x12f7d8u: goto label_12f7d8;
        case 0x12f7dcu: goto label_12f7dc;
        case 0x12f7e0u: goto label_12f7e0;
        case 0x12f7e4u: goto label_12f7e4;
        case 0x12f7e8u: goto label_12f7e8;
        case 0x12f7ecu: goto label_12f7ec;
        case 0x12f7f0u: goto label_12f7f0;
        case 0x12f7f4u: goto label_12f7f4;
        case 0x12f7f8u: goto label_12f7f8;
        case 0x12f7fcu: goto label_12f7fc;
        case 0x12f800u: goto label_12f800;
        case 0x12f804u: goto label_12f804;
        case 0x12f808u: goto label_12f808;
        case 0x12f80cu: goto label_12f80c;
        case 0x12f810u: goto label_12f810;
        case 0x12f814u: goto label_12f814;
        case 0x12f818u: goto label_12f818;
        case 0x12f81cu: goto label_12f81c;
        case 0x12f820u: goto label_12f820;
        case 0x12f824u: goto label_12f824;
        case 0x12f828u: goto label_12f828;
        case 0x12f82cu: goto label_12f82c;
        case 0x12f830u: goto label_12f830;
        case 0x12f834u: goto label_12f834;
        case 0x12f838u: goto label_12f838;
        case 0x12f83cu: goto label_12f83c;
        case 0x12f840u: goto label_12f840;
        case 0x12f844u: goto label_12f844;
        case 0x12f848u: goto label_12f848;
        case 0x12f84cu: goto label_12f84c;
        case 0x12f850u: goto label_12f850;
        case 0x12f854u: goto label_12f854;
        default: break;
    }

    ctx->pc = 0x12f140u;

label_12f140:
    // 0x12f140: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x12f140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_12f144:
    // 0x12f144: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12f144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f148:
    // 0x12f148: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x12f148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_12f14c:
    // 0x12f14c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12f14cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12f150:
    // 0x12f150: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x12f150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_12f154:
    // 0x12f154: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x12f154u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_12f158:
    // 0x12f158: 0x26300320  addiu       $s0, $s1, 0x320
    ctx->pc = 0x12f158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
label_12f15c:
    // 0x12f15c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x12f15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_12f160:
    // 0x12f160: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x12f160u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_12f164:
    // 0x12f164: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x12f164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_12f168:
    // 0x12f168: 0x262515c8  addiu       $a1, $s1, 0x15C8
    ctx->pc = 0x12f168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5576));
label_12f16c:
    // 0x12f16c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x12f16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_12f170:
    // 0x12f170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12f174:
    // 0x12f174: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x12f174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_12f178:
    // 0x12f178: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x12f178u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_12f17c:
    // 0x12f17c: 0xc067fca  jal         func_19FF28
label_12f180:
    if (ctx->pc == 0x12F180u) {
        ctx->pc = 0x12F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F17Cu;
        // 0x12f180: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F184u;
        goto label_12f184;
    }
    ctx->pc = 0x12F17Cu;
    SET_GPR_U32(ctx, 31, 0x12F184u);
    ctx->pc = 0x12F180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F17Cu;
    // 0x12f180: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x12F17Cu, 0x12F184u)) {
        return;
    }
    ctx->pc = 0x12F184u;
label_12f184:
    // 0x12f184: 0xae2018d8  sw          $zero, 0x18D8($s1)
    ctx->pc = 0x12f184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6360), GPR_U32(ctx, 0));
label_12f188:
    // 0x12f188: 0x8e02083c  lw          $v0, 0x83C($s0)
    ctx->pc = 0x12f188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2108)));
label_12f18c:
    // 0x12f18c: 0x21b43  sra         $v1, $v0, 13
    ctx->pc = 0x12f18cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 13));
label_12f190:
    // 0x12f190: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x12f190u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_12f194:
    // 0x12f194: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x12f194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_12f198:
    // 0x12f198: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_12f19c:
    if (ctx->pc == 0x12F19Cu) {
        ctx->pc = 0x12F19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F198u;
        // 0x12f19c: 0x30540001  andi        $s4, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F1A0u;
        goto label_12f1a0;
    }
    ctx->pc = 0x12F198u;
    {
        const bool branch_taken_0x12f198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F198u;
        // 0x12f19c: 0x30540001  andi        $s4, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f198) {
            ctx->pc = 0x12F2B8u;
            goto label_12f2b8;
        }
    }
    ctx->pc = 0x12F1A0u;
label_12f1a0:
    // 0x12f1a0: 0x8e24153c  lw          $a0, 0x153C($s1)
    ctx->pc = 0x12f1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5436)));
label_12f1a4:
    // 0x12f1a4: 0x10800044  beqz        $a0, . + 4 + (0x44 << 2)
label_12f1a8:
    if (ctx->pc == 0x12F1A8u) {
        ctx->pc = 0x12F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F1A4u;
        // 0x12f1a8: 0x26301880  addiu       $s0, $s1, 0x1880 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 6272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F1ACu;
        goto label_12f1ac;
    }
    ctx->pc = 0x12F1A4u;
    {
        const bool branch_taken_0x12f1a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F1A4u;
        // 0x12f1a8: 0x26301880  addiu       $s0, $s1, 0x1880 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 6272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f1a4) {
            ctx->pc = 0x12F2B8u;
            goto label_12f2b8;
        }
    }
    ctx->pc = 0x12F1ACu;
label_12f1ac:
    // 0x12f1ac: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x12f1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_12f1b0:
    // 0x12f1b0: 0xc04f0c2  jal         func_13C308
label_12f1b4:
    if (ctx->pc == 0x12F1B4u) {
        ctx->pc = 0x12F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F1B0u;
        // 0x12f1b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F1B8u;
        goto label_12f1b8;
    }
    ctx->pc = 0x12F1B0u;
    SET_GPR_U32(ctx, 31, 0x12F1B8u);
    ctx->pc = 0x12F1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F1B0u;
    // 0x12f1b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x12F1B0u, 0x12F1B8u)) {
        return;
    }
    ctx->pc = 0x12F1B8u;
label_12f1b8:
    // 0x12f1b8: 0xc04f0cc  jal         func_13C330
label_12f1bc:
    if (ctx->pc == 0x12F1BCu) {
        ctx->pc = 0x12F1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F1B8u;
        // 0x12f1bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F1C0u;
        goto label_12f1c0;
    }
    ctx->pc = 0x12F1B8u;
    SET_GPR_U32(ctx, 31, 0x12F1C0u);
    ctx->pc = 0x12F1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F1B8u;
    // 0x12f1bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x12F1B8u, 0x12F1C0u)) {
        return;
    }
    ctx->pc = 0x12F1C0u;
label_12f1c0:
    // 0x12f1c0: 0xc6201880  lwc1        $f0, 0x1880($s1)
    ctx->pc = 0x12f1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12f1c4:
    // 0x12f1c4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x12f1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12f1c8:
    // 0x12f1c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x12f1c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_12f1cc:
    // 0x12f1cc: 0xe6201880  swc1        $f0, 0x1880($s1)
    ctx->pc = 0x12f1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6272), bits); }
label_12f1d0:
    // 0x12f1d0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12f1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12f1d4:
    // 0x12f1d4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x12f1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12f1d8:
    // 0x12f1d8: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x12f1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12f1dc:
    // 0x12f1dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x12f1dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_12f1e0:
    // 0x12f1e0: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x12f1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_12f1e4:
    // 0x12f1e4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x12f1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12f1e8:
    // 0x12f1e8: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x12f1e8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_12f1ec:
    // 0x12f1ec: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x12f1ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_12f1f0:
    // 0x12f1f0: 0xae201884  sw          $zero, 0x1884($s1)
    ctx->pc = 0x12f1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6276), GPR_U32(ctx, 0));
label_12f1f4:
    // 0x12f1f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12f1f8:
    // 0x12f1f8: 0xc04642c  jal         func_1190B0
label_12f1fc:
    if (ctx->pc == 0x12F1FCu) {
        ctx->pc = 0x12F1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F1F8u;
        // 0x12f1fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F200u;
        goto label_12f200;
    }
    ctx->pc = 0x12F1F8u;
    SET_GPR_U32(ctx, 31, 0x12F200u);
    ctx->pc = 0x12F1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F1F8u;
    // 0x12f1fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x12F1F8u, 0x12F200u)) {
        return;
    }
    ctx->pc = 0x12F200u;
label_12f200:
    // 0x12f200: 0x0  nop
    ctx->pc = 0x12f200u;
    // NOP
label_12f204:
    // 0x12f204: 0x0  nop
    ctx->pc = 0x12f204u;
    // NOP
label_12f208:
    // 0x12f208: 0x46000044  c1          0x44
    ctx->pc = 0x12f208u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_12f20c:
    // 0x12f20c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12f20cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12f210:
    // 0x12f210: 0x0  nop
    ctx->pc = 0x12f210u;
    // NOP
label_12f214:
    // 0x12f214: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12f214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12f218:
    // 0x12f218: 0x0  nop
    ctx->pc = 0x12f218u;
    // NOP
label_12f21c:
    // 0x12f21c: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_12f220:
    if (ctx->pc == 0x12F220u) {
        ctx->pc = 0x12F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F21Cu;
        // 0x12f220: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F224u;
        goto label_12f224;
    }
    ctx->pc = 0x12F21Cu;
    {
        const bool branch_taken_0x12f21c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F21Cu;
        // 0x12f220: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f21c) {
            ctx->pc = 0x12F270u;
            goto label_12f270;
        }
    }
    ctx->pc = 0x12F224u;
label_12f224:
    // 0x12f224: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x12f224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12f228:
    // 0x12f228: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x12f228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12f22c:
    // 0x12f22c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x12f22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12f230:
    // 0x12f230: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x12f230u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_12f234:
    // 0x12f234: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x12f234u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_12f238:
    // 0x12f238: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x12f238u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_12f23c:
    // 0x12f23c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x12f23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_12f240:
    // 0x12f240: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x12f240u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_12f244:
    // 0x12f244: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x12f244u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_12f248:
    // 0x12f248: 0x6a221887  ldl         $v0, 0x1887($s1)
    ctx->pc = 0x12f248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_12f24c:
    // 0x12f24c: 0x6e221880  ldr         $v0, 0x1880($s1)
    ctx->pc = 0x12f24cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_12f250:
    // 0x12f250: 0x8e231888  lw          $v1, 0x1888($s1)
    ctx->pc = 0x12f250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6280)));
label_12f254:
    // 0x12f254: 0xb2220ce7  sdl         $v0, 0xCE7($s1)
    ctx->pc = 0x12f254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12f258:
    // 0x12f258: 0xb6220ce0  sdr         $v0, 0xCE0($s1)
    ctx->pc = 0x12f258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12f25c:
    // 0x12f25c: 0xae230ce8  sw          $v1, 0xCE8($s1)
    ctx->pc = 0x12f25cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3304), GPR_U32(ctx, 3));
label_12f260:
    // 0x12f260: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12f260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12f264:
    // 0x12f264: 0xae2218d8  sw          $v0, 0x18D8($s1)
    ctx->pc = 0x12f264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6360), GPR_U32(ctx, 2));
label_12f268:
    // 0x12f268: 0x1000004d  b           . + 4 + (0x4D << 2)
label_12f26c:
    if (ctx->pc == 0x12F26Cu) {
        ctx->pc = 0x12F26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F268u;
        // 0x12f26c: 0x26320320  addiu       $s2, $s1, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F270u;
        goto label_12f270;
    }
    ctx->pc = 0x12F268u;
    {
        const bool branch_taken_0x12f268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F268u;
        // 0x12f26c: 0x26320320  addiu       $s2, $s1, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f268) {
            ctx->pc = 0x12F3A0u;
            goto label_12f3a0;
        }
    }
    ctx->pc = 0x12F270u;
label_12f270:
    // 0x12f270: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12f270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12f274:
    // 0x12f274: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12f274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12f278:
    // 0x12f278: 0x0  nop
    ctx->pc = 0x12f278u;
    // NOP
label_12f27c:
    // 0x12f27c: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x12f27cu;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_12f280:
    // 0x12f280: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
label_12f284:
    if (ctx->pc == 0x12F284u) {
        ctx->pc = 0x12F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F280u;
        // 0x12f284: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F288u;
        goto label_12f288;
    }
    ctx->pc = 0x12F280u;
    {
        const bool branch_taken_0x12f280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F280u;
        // 0x12f284: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f280) {
            ctx->pc = 0x12F228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f228;
        }
    }
    ctx->pc = 0x12F288u;
label_12f288:
    // 0x12f288: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12f288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12f28c:
    // 0x12f28c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12f28cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12f290:
    // 0x12f290: 0x0  nop
    ctx->pc = 0x12f290u;
    // NOP
label_12f294:
    // 0x12f294: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x12f294u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_12f298:
    // 0x12f298: 0x1000002b  b           . + 4 + (0x2B << 2)
label_12f29c:
    if (ctx->pc == 0x12F29Cu) {
        ctx->pc = 0x12F29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F298u;
        // 0x12f29c: 0xc6020000  lwc1        $f2, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F2A0u;
        goto label_12f2a0;
    }
    ctx->pc = 0x12F298u;
    {
        const bool branch_taken_0x12f298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F298u;
        // 0x12f29c: 0xc6020000  lwc1        $f2, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f298) {
            ctx->pc = 0x12F348u;
            goto label_12f348;
        }
    }
    ctx->pc = 0x12F2A0u;
label_12f2a0:
    // 0x12f2a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12f2a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12f2a4:
    // 0x12f2a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12f2a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12f2a8:
    // 0x12f2a8: 0x0  nop
    ctx->pc = 0x12f2a8u;
    // NOP
label_12f2ac:
    // 0x12f2ac: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x12f2acu;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_12f2b0:
    // 0x12f2b0: 0x10000081  b           . + 4 + (0x81 << 2)
label_12f2b4:
    if (ctx->pc == 0x12F2B4u) {
        ctx->pc = 0x12F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F2B0u;
        // 0x12f2b4: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F2B8u;
        goto label_12f2b8;
    }
    ctx->pc = 0x12F2B0u;
    {
        const bool branch_taken_0x12f2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F2B0u;
        // 0x12f2b4: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f2b0) {
            ctx->pc = 0x12F4B8u;
            goto label_12f4b8;
        }
    }
    ctx->pc = 0x12F2B8u;
label_12f2b8:
    // 0x12f2b8: 0x12800039  beqz        $s4, . + 4 + (0x39 << 2)
label_12f2bc:
    if (ctx->pc == 0x12F2BCu) {
        ctx->pc = 0x12F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F2B8u;
        // 0x12f2bc: 0x26320320  addiu       $s2, $s1, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F2C0u;
        goto label_12f2c0;
    }
    ctx->pc = 0x12F2B8u;
    {
        const bool branch_taken_0x12f2b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F2B8u;
        // 0x12f2bc: 0x26320320  addiu       $s2, $s1, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f2b8) {
            ctx->pc = 0x12F3A0u;
            goto label_12f3a0;
        }
    }
    ctx->pc = 0x12F2C0u;
label_12f2c0:
    // 0x12f2c0: 0x8e241538  lw          $a0, 0x1538($s1)
    ctx->pc = 0x12f2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5432)));
label_12f2c4:
    // 0x12f2c4: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
label_12f2c8:
    if (ctx->pc == 0x12F2C8u) {
        ctx->pc = 0x12F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F2C4u;
        // 0x12f2c8: 0x26301880  addiu       $s0, $s1, 0x1880 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 6272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F2CCu;
        goto label_12f2cc;
    }
    ctx->pc = 0x12F2C4u;
    {
        const bool branch_taken_0x12f2c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F2C4u;
        // 0x12f2c8: 0x26301880  addiu       $s0, $s1, 0x1880 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 6272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f2c4) {
            ctx->pc = 0x12F3A0u;
            goto label_12f3a0;
        }
    }
    ctx->pc = 0x12F2CCu;
label_12f2cc:
    // 0x12f2cc: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x12f2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_12f2d0:
    // 0x12f2d0: 0xc04f0c2  jal         func_13C308
label_12f2d4:
    if (ctx->pc == 0x12F2D4u) {
        ctx->pc = 0x12F2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F2D0u;
        // 0x12f2d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F2D8u;
        goto label_12f2d8;
    }
    ctx->pc = 0x12F2D0u;
    SET_GPR_U32(ctx, 31, 0x12F2D8u);
    ctx->pc = 0x12F2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F2D0u;
    // 0x12f2d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x12F2D0u, 0x12F2D8u)) {
        return;
    }
    ctx->pc = 0x12F2D8u;
label_12f2d8:
    // 0x12f2d8: 0xc04f0cc  jal         func_13C330
label_12f2dc:
    if (ctx->pc == 0x12F2DCu) {
        ctx->pc = 0x12F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F2D8u;
        // 0x12f2dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F2E0u;
        goto label_12f2e0;
    }
    ctx->pc = 0x12F2D8u;
    SET_GPR_U32(ctx, 31, 0x12F2E0u);
    ctx->pc = 0x12F2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F2D8u;
    // 0x12f2dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x12F2D8u, 0x12F2E0u)) {
        return;
    }
    ctx->pc = 0x12F2E0u;
label_12f2e0:
    // 0x12f2e0: 0xc6201880  lwc1        $f0, 0x1880($s1)
    ctx->pc = 0x12f2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12f2e4:
    // 0x12f2e4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x12f2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12f2e8:
    // 0x12f2e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x12f2e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_12f2ec:
    // 0x12f2ec: 0xe6201880  swc1        $f0, 0x1880($s1)
    ctx->pc = 0x12f2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6272), bits); }
label_12f2f0:
    // 0x12f2f0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12f2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12f2f4:
    // 0x12f2f4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x12f2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12f2f8:
    // 0x12f2f8: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x12f2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12f2fc:
    // 0x12f2fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x12f2fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_12f300:
    // 0x12f300: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x12f300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_12f304:
    // 0x12f304: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x12f304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12f308:
    // 0x12f308: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x12f308u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_12f30c:
    // 0x12f30c: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x12f30cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_12f310:
    // 0x12f310: 0xae201884  sw          $zero, 0x1884($s1)
    ctx->pc = 0x12f310u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6276), GPR_U32(ctx, 0));
label_12f314:
    // 0x12f314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12f318:
    // 0x12f318: 0xc04642c  jal         func_1190B0
label_12f31c:
    if (ctx->pc == 0x12F31Cu) {
        ctx->pc = 0x12F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F318u;
        // 0x12f31c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F320u;
        goto label_12f320;
    }
    ctx->pc = 0x12F318u;
    SET_GPR_U32(ctx, 31, 0x12F320u);
    ctx->pc = 0x12F31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F318u;
    // 0x12f31c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x12F318u, 0x12F320u)) {
        return;
    }
    ctx->pc = 0x12F320u;
label_12f320:
    // 0x12f320: 0x0  nop
    ctx->pc = 0x12f320u;
    // NOP
label_12f324:
    // 0x12f324: 0x0  nop
    ctx->pc = 0x12f324u;
    // NOP
label_12f328:
    // 0x12f328: 0x46000044  c1          0x44
    ctx->pc = 0x12f328u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_12f32c:
    // 0x12f32c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12f32cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12f330:
    // 0x12f330: 0x0  nop
    ctx->pc = 0x12f330u;
    // NOP
label_12f334:
    // 0x12f334: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12f334u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12f338:
    // 0x12f338: 0x0  nop
    ctx->pc = 0x12f338u;
    // NOP
label_12f33c:
    // 0x12f33c: 0x4501ffd2  bc1t        . + 4 + (-0x2E << 2)
label_12f340:
    if (ctx->pc == 0x12F340u) {
        ctx->pc = 0x12F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F33Cu;
        // 0x12f340: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F344u;
        goto label_12f344;
    }
    ctx->pc = 0x12F33Cu;
    {
        const bool branch_taken_0x12f33c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F33Cu;
        // 0x12f340: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f33c) {
            ctx->pc = 0x12F288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f288;
        }
    }
    ctx->pc = 0x12F344u;
label_12f344:
    // 0x12f344: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x12f344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12f348:
    // 0x12f348: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x12f348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12f34c:
    // 0x12f34c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x12f34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12f350:
    // 0x12f350: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x12f350u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_12f354:
    // 0x12f354: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x12f354u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_12f358:
    // 0x12f358: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x12f358u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_12f35c:
    // 0x12f35c: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x12f35cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_12f360:
    // 0x12f360: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x12f360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_12f364:
    // 0x12f364: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x12f364u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_12f368:
    // 0x12f368: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12f368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12f36c:
    // 0x12f36c: 0xae2218d8  sw          $v0, 0x18D8($s1)
    ctx->pc = 0x12f36cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6360), GPR_U32(ctx, 2));
label_12f370:
    // 0x12f370: 0x26300320  addiu       $s0, $s1, 0x320
    ctx->pc = 0x12f370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
label_12f374:
    // 0x12f374: 0x6a261887  ldl         $a2, 0x1887($s1)
    ctx->pc = 0x12f374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_12f378:
    // 0x12f378: 0x6e261880  ldr         $a2, 0x1880($s1)
    ctx->pc = 0x12f378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_12f37c:
    // 0x12f37c: 0x8e271888  lw          $a3, 0x1888($s1)
    ctx->pc = 0x12f37cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6280)));
label_12f380:
    // 0x12f380: 0xb2260ce7  sdl         $a2, 0xCE7($s1)
    ctx->pc = 0x12f380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12f384:
    // 0x12f384: 0xb6260ce0  sdr         $a2, 0xCE0($s1)
    ctx->pc = 0x12f384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12f388:
    // 0x12f388: 0xae270ce8  sw          $a3, 0xCE8($s1)
    ctx->pc = 0x12f388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3304), GPR_U32(ctx, 7));
label_12f38c:
    // 0x12f38c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12f390:
    // 0x12f390: 0x262515c8  addiu       $a1, $s1, 0x15C8
    ctx->pc = 0x12f390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5576));
label_12f394:
    // 0x12f394: 0xc067fca  jal         func_19FF28
label_12f398:
    if (ctx->pc == 0x12F398u) {
        ctx->pc = 0x12F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F394u;
        // 0x12f398: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F39Cu;
        goto label_12f39c;
    }
    ctx->pc = 0x12F394u;
    SET_GPR_U32(ctx, 31, 0x12F39Cu);
    ctx->pc = 0x12F398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F394u;
    // 0x12f398: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x12F394u, 0x12F39Cu)) {
        return;
    }
    ctx->pc = 0x12F39Cu;
label_12f39c:
    // 0x12f39c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x12f39cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12f3a0:
    // 0x12f3a0: 0xc6201940  lwc1        $f0, 0x1940($s1)
    ctx->pc = 0x12f3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12f3a4:
    // 0x12f3a4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x12f3a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_12f3a8:
    // 0x12f3a8: 0x0  nop
    ctx->pc = 0x12f3a8u;
    // NOP
label_12f3ac:
    // 0x12f3ac: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x12f3acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12f3b0:
    // 0x12f3b0: 0x0  nop
    ctx->pc = 0x12f3b0u;
    // NOP
label_12f3b4:
    // 0x12f3b4: 0x45000051  bc1f        . + 4 + (0x51 << 2)
label_12f3b8:
    if (ctx->pc == 0x12F3B8u) {
        ctx->pc = 0x12F3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F3B4u;
        // 0x12f3b8: 0x263318a0  addiu       $s3, $s1, 0x18A0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 6304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F3BCu;
        goto label_12f3bc;
    }
    ctx->pc = 0x12F3B4u;
    {
        const bool branch_taken_0x12f3b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F3B4u;
        // 0x12f3b8: 0x263318a0  addiu       $s3, $s1, 0x18A0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 6304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f3b4) {
            ctx->pc = 0x12F4FCu;
            goto label_12f4fc;
        }
    }
    ctx->pc = 0x12F3BCu;
label_12f3bc:
    // 0x12f3bc: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x12f3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_12f3c0:
    // 0x12f3c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12f3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12f3c4:
    // 0x12f3c4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x12f3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_12f3c8:
    // 0x12f3c8: 0x846401f8  lh          $a0, 0x1F8($v1)
    ctx->pc = 0x12f3c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 504)));
label_12f3cc:
    // 0x12f3cc: 0x8c6201fc  lw          $v0, 0x1FC($v1)
    ctx->pc = 0x12f3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_12f3d0:
    // 0x12f3d0: 0x40f809  jalr        $v0
label_12f3d4:
    if (ctx->pc == 0x12F3D4u) {
        ctx->pc = 0x12F3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F3D0u;
        // 0x12f3d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F3D8u;
        goto label_12f3d8;
    }
    ctx->pc = 0x12F3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12F3D8u);
        ctx->pc = 0x12F3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F3D0u;
        // 0x12f3d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F3D0u, 0x12F3D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12F3D8u;
label_12f3d8:
    // 0x12f3d8: 0xc627193c  lwc1        $f7, 0x193C($s1)
    ctx->pc = 0x12f3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_12f3dc:
    // 0x12f3dc: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x12f3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_12f3e0:
    // 0x12f3e0: 0xc7a60004  lwc1        $f6, 0x4($sp)
    ctx->pc = 0x12f3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_12f3e4:
    // 0x12f3e4: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x12f3e4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
label_12f3e8:
    // 0x12f3e8: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x12f3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_12f3ec:
    // 0x12f3ec: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x12f3ecu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
label_12f3f0:
    // 0x12f3f0: 0x46072942  mul.s       $f5, $f5, $f7
    ctx->pc = 0x12f3f0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
label_12f3f4:
    // 0x12f3f4: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x12f3f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_12f3f8:
    // 0x12f3f8: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x12f3f8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_12f3fc:
    // 0x12f3fc: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x12f3fcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_12f400:
    // 0x12f400: 0xc6201938  lwc1        $f0, 0x1938($s1)
    ctx->pc = 0x12f400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12f404:
    // 0x12f404: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x12f404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12f408:
    // 0x12f408: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x12f408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12f40c:
    // 0x12f40c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x12f40cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_12f410:
    // 0x12f410: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x12f410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12f414:
    // 0x12f414: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x12f414u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_12f418:
    // 0x12f418: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x12f418u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_12f41c:
    // 0x12f41c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x12f41cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_12f420:
    // 0x12f420: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x12f420u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_12f424:
    // 0x12f424: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x12f424u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_12f428:
    // 0x12f428: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x12f428u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_12f42c:
    // 0x12f42c: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x12f42cu;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
label_12f430:
    // 0x12f430: 0xe62018c0  swc1        $f0, 0x18C0($s1)
    ctx->pc = 0x12f430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6336), bits); }
label_12f434:
    // 0x12f434: 0xe63418c4  swc1        $f20, 0x18C4($s1)
    ctx->pc = 0x12f434u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6340), bits); }
label_12f438:
    // 0x12f438: 0xe62718c8  swc1        $f7, 0x18C8($s1)
    ctx->pc = 0x12f438u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6344), bits); }
label_12f43c:
    // 0x12f43c: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x12f43cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_12f440:
    // 0x12f440: 0x46023180  add.s       $f6, $f6, $f2
    ctx->pc = 0x12f440u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
label_12f444:
    // 0x12f444: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x12f444u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_12f448:
    // 0x12f448: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x12f448u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
label_12f44c:
    // 0x12f44c: 0xe7a60034  swc1        $f6, 0x34($sp)
    ctx->pc = 0x12f44cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_12f450:
    // 0x12f450: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x12f450u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_12f454:
    // 0x12f454: 0x6ba40037  ldl         $a0, 0x37($sp)
    ctx->pc = 0x12f454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_12f458:
    // 0x12f458: 0x6fa40030  ldr         $a0, 0x30($sp)
    ctx->pc = 0x12f458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_12f45c:
    // 0x12f45c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x12f45cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_12f460:
    // 0x12f460: 0xb3a40027  sdl         $a0, 0x27($sp)
    ctx->pc = 0x12f460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12f464:
    // 0x12f464: 0xb7a40020  sdr         $a0, 0x20($sp)
    ctx->pc = 0x12f464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12f468:
    // 0x12f468: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x12f468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
label_12f46c:
    // 0x12f46c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12f46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12f470:
    // 0x12f470: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12f470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12f474:
    // 0x12f474: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x12f474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_12f478:
    // 0x12f478: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x12f478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_12f47c:
    // 0x12f47c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12f47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_12f480:
    // 0x12f480: 0xb22218a7  sdl         $v0, 0x18A7($s1)
    ctx->pc = 0x12f480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12f484:
    // 0x12f484: 0xb62218a0  sdr         $v0, 0x18A0($s1)
    ctx->pc = 0x12f484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12f488:
    // 0x12f488: 0xae2318a8  sw          $v1, 0x18A8($s1)
    ctx->pc = 0x12f488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6312), GPR_U32(ctx, 3));
label_12f48c:
    // 0x12f48c: 0xc04642c  jal         func_1190B0
label_12f490:
    if (ctx->pc == 0x12F490u) {
        ctx->pc = 0x12F490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F48Cu;
        // 0x12f490: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F494u;
        goto label_12f494;
    }
    ctx->pc = 0x12F48Cu;
    SET_GPR_U32(ctx, 31, 0x12F494u);
    ctx->pc = 0x12F490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F48Cu;
    // 0x12f490: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x12F48Cu, 0x12F494u)) {
        return;
    }
    ctx->pc = 0x12F494u;
label_12f494:
    // 0x12f494: 0x0  nop
    ctx->pc = 0x12f494u;
    // NOP
label_12f498:
    // 0x12f498: 0x0  nop
    ctx->pc = 0x12f498u;
    // NOP
label_12f49c:
    // 0x12f49c: 0x46000044  c1          0x44
    ctx->pc = 0x12f49cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_12f4a0:
    // 0x12f4a0: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x12f4a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12f4a4:
    // 0x12f4a4: 0x0  nop
    ctx->pc = 0x12f4a4u;
    // NOP
label_12f4a8:
    // 0x12f4a8: 0x4501ff7d  bc1t        . + 4 + (-0x83 << 2)
label_12f4ac:
    if (ctx->pc == 0x12F4ACu) {
        ctx->pc = 0x12F4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F4A8u;
        // 0x12f4ac: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F4B0u;
        goto label_12f4b0;
    }
    ctx->pc = 0x12F4A8u;
    {
        const bool branch_taken_0x12f4a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F4A8u;
        // 0x12f4ac: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f4a8) {
            ctx->pc = 0x12F2A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f2a0;
        }
    }
    ctx->pc = 0x12F4B0u;
label_12f4b0:
    // 0x12f4b0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x12f4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12f4b4:
    // 0x12f4b4: 0x0  nop
    ctx->pc = 0x12f4b4u;
    // NOP
label_12f4b8:
    // 0x12f4b8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x12f4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12f4bc:
    // 0x12f4bc: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x12f4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12f4c0:
    // 0x12f4c0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x12f4c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_12f4c4:
    // 0x12f4c4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x12f4c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_12f4c8:
    // 0x12f4c8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x12f4c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_12f4cc:
    // 0x12f4cc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x12f4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_12f4d0:
    // 0x12f4d0: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x12f4d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_12f4d4:
    // 0x12f4d4: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x12f4d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_12f4d8:
    // 0x12f4d8: 0x8e2218d8  lw          $v0, 0x18D8($s1)
    ctx->pc = 0x12f4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6360)));
label_12f4dc:
    // 0x12f4dc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_12f4e0:
    if (ctx->pc == 0x12F4E0u) {
        ctx->pc = 0x12F4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F4DCu;
        // 0x12f4e0: 0xae201a5c  sw          $zero, 0x1A5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6748), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F4E4u;
        goto label_12f4e4;
    }
    ctx->pc = 0x12F4DCu;
    {
        const bool branch_taken_0x12f4dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f4dc) {
            ctx->pc = 0x12F4E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F4DCu;
            // 0x12f4e0: 0xae201a5c  sw          $zero, 0x1A5C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 6748), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F500u;
            goto label_12f500;
        }
    }
    ctx->pc = 0x12F4E4u;
label_12f4e4:
    // 0x12f4e4: 0x6a2218a7  ldl         $v0, 0x18A7($s1)
    ctx->pc = 0x12f4e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_12f4e8:
    // 0x12f4e8: 0x6e2218a0  ldr         $v0, 0x18A0($s1)
    ctx->pc = 0x12f4e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_12f4ec:
    // 0x12f4ec: 0x8e2318a8  lw          $v1, 0x18A8($s1)
    ctx->pc = 0x12f4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6312)));
label_12f4f0:
    // 0x12f4f0: 0xb2221887  sdl         $v0, 0x1887($s1)
    ctx->pc = 0x12f4f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12f4f4:
    // 0x12f4f4: 0xb6221880  sdr         $v0, 0x1880($s1)
    ctx->pc = 0x12f4f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12f4f8:
    // 0x12f4f8: 0xae231888  sw          $v1, 0x1888($s1)
    ctx->pc = 0x12f4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6280), GPR_U32(ctx, 3));
label_12f4fc:
    // 0x12f4fc: 0xae201a5c  sw          $zero, 0x1A5C($s1)
    ctx->pc = 0x12f4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6748), GPR_U32(ctx, 0));
label_12f500:
    // 0x12f500: 0x12800055  beqz        $s4, . + 4 + (0x55 << 2)
label_12f504:
    if (ctx->pc == 0x12F504u) {
        ctx->pc = 0x12F504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F500u;
        // 0x12f504: 0xae201a60  sw          $zero, 0x1A60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6752), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F508u;
        goto label_12f508;
    }
    ctx->pc = 0x12F500u;
    {
        const bool branch_taken_0x12f500 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F500u;
        // 0x12f504: 0xae201a60  sw          $zero, 0x1A60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6752), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f500) {
            ctx->pc = 0x12F658u;
            goto label_12f658;
        }
    }
    ctx->pc = 0x12F508u;
label_12f508:
    // 0x12f508: 0xc6211940  lwc1        $f1, 0x1940($s1)
    ctx->pc = 0x12f508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12f50c:
    // 0x12f50c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x12f50cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_12f510:
    // 0x12f510: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12f510u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_12f514:
    // 0x12f514: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12f514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12f518:
    // 0x12f518: 0x0  nop
    ctx->pc = 0x12f518u;
    // NOP
label_12f51c:
    // 0x12f51c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12f51cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12f520:
    // 0x12f520: 0x0  nop
    ctx->pc = 0x12f520u;
    // NOP
label_12f524:
    // 0x12f524: 0x4500004c  bc1f        . + 4 + (0x4C << 2)
label_12f528:
    if (ctx->pc == 0x12F528u) {
        ctx->pc = 0x12F52Cu;
        goto label_12f52c;
    }
    ctx->pc = 0x12F524u;
    {
        const bool branch_taken_0x12f524 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12f524) {
            ctx->pc = 0x12F658u;
            goto label_12f658;
        }
    }
    ctx->pc = 0x12F52Cu;
label_12f52c:
    // 0x12f52c: 0x8e221538  lw          $v0, 0x1538($s1)
    ctx->pc = 0x12f52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5432)));
label_12f530:
    // 0x12f530: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_12f534:
    if (ctx->pc == 0x12F534u) {
        ctx->pc = 0x12F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F530u;
        // 0x12f534: 0xc6241a5c  lwc1        $f4, 0x1A5C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F538u;
        goto label_12f538;
    }
    ctx->pc = 0x12F530u;
    {
        const bool branch_taken_0x12f530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f530) {
            ctx->pc = 0x12F534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F530u;
            // 0x12f534: 0xc6241a5c  lwc1        $f4, 0x1A5C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F594u;
            goto label_12f594;
        }
    }
    ctx->pc = 0x12F538u;
label_12f538:
    // 0x12f538: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x12f538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_12f53c:
    // 0x12f53c: 0xc62518a0  lwc1        $f5, 0x18A0($s1)
    ctx->pc = 0x12f53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_12f540:
    // 0x12f540: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x12f540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_12f544:
    // 0x12f544: 0xc4440010  lwc1        $f4, 0x10($v0)
    ctx->pc = 0x12f544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_12f548:
    // 0x12f548: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x12f548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_12f54c:
    // 0x12f54c: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x12f54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12f550:
    // 0x12f550: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x12f550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12f554:
    // 0x12f554: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x12f554u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_12f558:
    // 0x12f558: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x12f558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12f55c:
    // 0x12f55c: 0xc4860004  lwc1        $f6, 0x4($a0)
    ctx->pc = 0x12f55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_12f560:
    // 0x12f560: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x12f560u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_12f564:
    // 0x12f564: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x12f564u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_12f568:
    // 0x12f568: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x12f568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12f56c:
    // 0x12f56c: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x12f56cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
label_12f570:
    // 0x12f570: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x12f570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12f574:
    // 0x12f574: 0xc4670008  lwc1        $f7, 0x8($v1)
    ctx->pc = 0x12f574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_12f578:
    // 0x12f578: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x12f578u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_12f57c:
    // 0x12f57c: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x12f57cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_12f580:
    // 0x12f580: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x12f580u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_12f584:
    // 0x12f584: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x12f584u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_12f588:
    // 0x12f588: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x12f588u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_12f58c:
    // 0x12f58c: 0x10000003  b           . + 4 + (0x3 << 2)
label_12f590:
    if (ctx->pc == 0x12F590u) {
        ctx->pc = 0x12F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F58Cu;
        // 0x12f590: 0x46002940  add.s       $f5, $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F594u;
        goto label_12f594;
    }
    ctx->pc = 0x12F58Cu;
    {
        const bool branch_taken_0x12f58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F58Cu;
        // 0x12f590: 0x46002940  add.s       $f5, $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f58c) {
            ctx->pc = 0x12F59Cu;
            goto label_12f59c;
        }
    }
    ctx->pc = 0x12F594u;
label_12f594:
    // 0x12f594: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12f594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12f598:
    // 0x12f598: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x12f598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_12f59c:
    // 0x12f59c: 0x0  nop
    ctx->pc = 0x12f59cu;
    // NOP
label_12f5a0:
    // 0x12f5a0: 0x46002845  abs.s       $f1, $f5
    ctx->pc = 0x12f5a0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[5]);
label_12f5a4:
    // 0x12f5a4: 0x46002005  abs.s       $f0, $f4
    ctx->pc = 0x12f5a4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[4]);
label_12f5a8:
    // 0x12f5a8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12f5a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12f5ac:
    // 0x12f5ac: 0x0  nop
    ctx->pc = 0x12f5acu;
    // NOP
label_12f5b0:
    // 0x12f5b0: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_12f5b4:
    if (ctx->pc == 0x12F5B4u) {
        ctx->pc = 0x12F5B8u;
        goto label_12f5b8;
    }
    ctx->pc = 0x12F5B0u;
    {
        const bool branch_taken_0x12f5b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12f5b0) {
            ctx->pc = 0x12F608u;
            goto label_12f608;
        }
    }
    ctx->pc = 0x12F5B8u;
label_12f5b8:
    // 0x12f5b8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x12f5b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_12f5bc:
    // 0x12f5bc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12f5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_12f5c0:
    // 0x12f5c0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12f5c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_12f5c4:
    // 0x12f5c4: 0x4605a834  c.lt.s      $f21, $f5
    ctx->pc = 0x12f5c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12f5c8:
    // 0x12f5c8: 0x0  nop
    ctx->pc = 0x12f5c8u;
    // NOP
label_12f5cc:
    // 0x12f5cc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_12f5d0:
    if (ctx->pc == 0x12F5D0u) {
        ctx->pc = 0x12F5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5CCu;
        // 0x12f5d0: 0x26301600  addiu       $s0, $s1, 0x1600 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 5632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F5D4u;
        goto label_12f5d4;
    }
    ctx->pc = 0x12F5CCu;
    {
        const bool branch_taken_0x12f5cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5CCu;
        // 0x12f5d0: 0x26301600  addiu       $s0, $s1, 0x1600 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 5632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f5cc) {
            ctx->pc = 0x12F5DCu;
            goto label_12f5dc;
        }
    }
    ctx->pc = 0x12F5D4u;
label_12f5d4:
    // 0x12f5d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12f5d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12f5d8:
    // 0x12f5d8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12f5d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_12f5dc:
    // 0x12f5dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12f5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12f5e0:
    // 0x12f5e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12f5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12f5e4:
    // 0x12f5e4: 0xc06802e  jal         func_1A00B8
label_12f5e8:
    if (ctx->pc == 0x12F5E8u) {
        ctx->pc = 0x12F5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5E4u;
        // 0x12f5e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F5ECu;
        goto label_12f5ec;
    }
    ctx->pc = 0x12F5E4u;
    SET_GPR_U32(ctx, 31, 0x12F5ECu);
    ctx->pc = 0x12F5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F5E4u;
    // 0x12f5e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A00B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A00B8u, 0x12F5E4u, 0x12F5ECu)) {
        return;
    }
    ctx->pc = 0x12F5ECu;
label_12f5ec:
    // 0x12f5ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12f5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12f5f0:
    // 0x12f5f0: 0x26251608  addiu       $a1, $s1, 0x1608
    ctx->pc = 0x12f5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5640));
label_12f5f4:
    // 0x12f5f4: 0xc06802e  jal         func_1A00B8
label_12f5f8:
    if (ctx->pc == 0x12F5F8u) {
        ctx->pc = 0x12F5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5F4u;
        // 0x12f5f8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F5FCu;
        goto label_12f5fc;
    }
    ctx->pc = 0x12F5F4u;
    SET_GPR_U32(ctx, 31, 0x12F5FCu);
    ctx->pc = 0x12F5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F5F4u;
    // 0x12f5f8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A00B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A00B8u, 0x12F5F4u, 0x12F5FCu)) {
        return;
    }
    ctx->pc = 0x12F5FCu;
label_12f5fc:
    // 0x12f5fc: 0xe6341a5c  swc1        $f20, 0x1A5C($s1)
    ctx->pc = 0x12f5fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6748), bits); }
label_12f600:
    // 0x12f600: 0x1000001f  b           . + 4 + (0x1F << 2)
label_12f604:
    if (ctx->pc == 0x12F604u) {
        ctx->pc = 0x12F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F600u;
        // 0x12f604: 0xe6351a60  swc1        $f21, 0x1A60($s1) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6752), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F608u;
        goto label_12f608;
    }
    ctx->pc = 0x12F600u;
    {
        const bool branch_taken_0x12f600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F600u;
        // 0x12f604: 0xe6351a60  swc1        $f21, 0x1A60($s1) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6752), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f600) {
            ctx->pc = 0x12F680u;
            goto label_12f680;
        }
    }
    ctx->pc = 0x12F608u;
label_12f608:
    // 0x12f608: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x12f608u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_12f60c:
    // 0x12f60c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12f60cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12f610:
    // 0x12f610: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12f610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_12f614:
    // 0x12f614: 0x4604a834  c.lt.s      $f21, $f4
    ctx->pc = 0x12f614u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12f618:
    // 0x12f618: 0x0  nop
    ctx->pc = 0x12f618u;
    // NOP
label_12f61c:
    // 0x12f61c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_12f620:
    if (ctx->pc == 0x12F620u) {
        ctx->pc = 0x12F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F61Cu;
        // 0x12f620: 0x26301600  addiu       $s0, $s1, 0x1600 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 5632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F624u;
        goto label_12f624;
    }
    ctx->pc = 0x12F61Cu;
    {
        const bool branch_taken_0x12f61c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F61Cu;
        // 0x12f620: 0x26301600  addiu       $s0, $s1, 0x1600 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 5632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f61c) {
            ctx->pc = 0x12F62Cu;
            goto label_12f62c;
        }
    }
    ctx->pc = 0x12F624u;
label_12f624:
    // 0x12f624: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12f624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_12f628:
    // 0x12f628: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12f628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_12f62c:
    // 0x12f62c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12f62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12f630:
    // 0x12f630: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12f630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12f634:
    // 0x12f634: 0xc06802e  jal         func_1A00B8
label_12f638:
    if (ctx->pc == 0x12F638u) {
        ctx->pc = 0x12F638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F634u;
        // 0x12f638: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F63Cu;
        goto label_12f63c;
    }
    ctx->pc = 0x12F634u;
    SET_GPR_U32(ctx, 31, 0x12F63Cu);
    ctx->pc = 0x12F638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F634u;
    // 0x12f638: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A00B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A00B8u, 0x12F634u, 0x12F63Cu)) {
        return;
    }
    ctx->pc = 0x12F63Cu;
label_12f63c:
    // 0x12f63c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12f63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12f640:
    // 0x12f640: 0x26251608  addiu       $a1, $s1, 0x1608
    ctx->pc = 0x12f640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5640));
label_12f644:
    // 0x12f644: 0xc06802e  jal         func_1A00B8
label_12f648:
    if (ctx->pc == 0x12F648u) {
        ctx->pc = 0x12F648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F644u;
        // 0x12f648: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F64Cu;
        goto label_12f64c;
    }
    ctx->pc = 0x12F644u;
    SET_GPR_U32(ctx, 31, 0x12F64Cu);
    ctx->pc = 0x12F648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F644u;
    // 0x12f648: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A00B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A00B8u, 0x12F644u, 0x12F64Cu)) {
        return;
    }
    ctx->pc = 0x12F64Cu;
label_12f64c:
    // 0x12f64c: 0xe6341a60  swc1        $f20, 0x1A60($s1)
    ctx->pc = 0x12f64cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6752), bits); }
label_12f650:
    // 0x12f650: 0x1000000b  b           . + 4 + (0xB << 2)
label_12f654:
    if (ctx->pc == 0x12F654u) {
        ctx->pc = 0x12F654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F650u;
        // 0x12f654: 0xe6351a5c  swc1        $f21, 0x1A5C($s1) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6748), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F658u;
        goto label_12f658;
    }
    ctx->pc = 0x12F650u;
    {
        const bool branch_taken_0x12f650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F650u;
        // 0x12f654: 0xe6351a5c  swc1        $f21, 0x1A5C($s1) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6748), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f650) {
            ctx->pc = 0x12F680u;
            goto label_12f680;
        }
    }
    ctx->pc = 0x12F658u;
label_12f658:
    // 0x12f658: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x12f658u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_12f65c:
    // 0x12f65c: 0x26301600  addiu       $s0, $s1, 0x1600
    ctx->pc = 0x12f65cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 5632));
label_12f660:
    // 0x12f660: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12f660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12f664:
    // 0x12f664: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12f664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12f668:
    // 0x12f668: 0xc06802e  jal         func_1A00B8
label_12f66c:
    if (ctx->pc == 0x12F66Cu) {
        ctx->pc = 0x12F66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F668u;
        // 0x12f66c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F670u;
        goto label_12f670;
    }
    ctx->pc = 0x12F668u;
    SET_GPR_U32(ctx, 31, 0x12F670u);
    ctx->pc = 0x12F66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F668u;
    // 0x12f66c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A00B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A00B8u, 0x12F668u, 0x12F670u)) {
        return;
    }
    ctx->pc = 0x12F670u;
label_12f670:
    // 0x12f670: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12f670u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_12f674:
    // 0x12f674: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12f674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12f678:
    // 0x12f678: 0xc06802e  jal         func_1A00B8
label_12f67c:
    if (ctx->pc == 0x12F67Cu) {
        ctx->pc = 0x12F67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F678u;
        // 0x12f67c: 0x26251608  addiu       $a1, $s1, 0x1608 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F680u;
        goto label_12f680;
    }
    ctx->pc = 0x12F678u;
    SET_GPR_U32(ctx, 31, 0x12F680u);
    ctx->pc = 0x12F67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F678u;
    // 0x12f67c: 0x26251608  addiu       $a1, $s1, 0x1608 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A00B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A00B8u, 0x12F678u, 0x12F680u)) {
        return;
    }
    ctx->pc = 0x12F680u;
label_12f680:
    // 0x12f680: 0xc04f0f0  jal         func_13C3C0
label_12f684:
    if (ctx->pc == 0x12F684u) {
        ctx->pc = 0x12F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F680u;
        // 0x12f684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F688u;
        goto label_12f688;
    }
    ctx->pc = 0x12F680u;
    SET_GPR_U32(ctx, 31, 0x12F688u);
    ctx->pc = 0x12F684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F680u;
    // 0x12f684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x12F680u, 0x12F688u)) {
        return;
    }
    ctx->pc = 0x12F688u;
label_12f688:
    // 0x12f688: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12f688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12f68c:
    // 0x12f68c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x12f68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12f690:
    // 0x12f690: 0xc62118a0  lwc1        $f1, 0x18A0($s1)
    ctx->pc = 0x12f690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12f694:
    // 0x12f694: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x12f694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12f698:
    // 0x12f698: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x12f698u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_12f69c:
    // 0x12f69c: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x12f69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_12f6a0:
    // 0x12f6a0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x12f6a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_12f6a4:
    // 0x12f6a4: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x12f6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12f6a8:
    // 0x12f6a8: 0xc6251940  lwc1        $f5, 0x1940($s1)
    ctx->pc = 0x12f6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_12f6ac:
    // 0x12f6ac: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x12f6acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_12f6b0:
    // 0x12f6b0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x12f6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_12f6b4:
    // 0x12f6b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12f6b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_12f6b8:
    // 0x12f6b8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x12f6b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_12f6bc:
    // 0x12f6bc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x12f6bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_12f6c0:
    // 0x12f6c0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x12f6c0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_12f6c4:
    // 0x12f6c4: 0x46056302  mul.s       $f12, $f12, $f5
    ctx->pc = 0x12f6c4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
label_12f6c8:
    // 0x12f6c8: 0x460c1834  c.lt.s      $f3, $f12
    ctx->pc = 0x12f6c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12f6cc:
    // 0x12f6cc: 0x0  nop
    ctx->pc = 0x12f6ccu;
    // NOP
label_12f6d0:
    // 0x12f6d0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_12f6d4:
    if (ctx->pc == 0x12F6D4u) {
        ctx->pc = 0x12F6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F6D0u;
        // 0x12f6d4: 0xae201950  sw          $zero, 0x1950($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6480), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F6D8u;
        goto label_12f6d8;
    }
    ctx->pc = 0x12F6D0u;
    {
        const bool branch_taken_0x12f6d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12f6d0) {
            ctx->pc = 0x12F6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F6D0u;
            // 0x12f6d4: 0xae201950  sw          $zero, 0x1950($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 6480), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F6E4u;
            goto label_12f6e4;
        }
    }
    ctx->pc = 0x12F6D8u;
label_12f6d8:
    // 0x12f6d8: 0xc6201950  lwc1        $f0, 0x1950($s1)
    ctx->pc = 0x12f6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12f6dc:
    // 0x12f6dc: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x12f6dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_12f6e0:
    // 0x12f6e0: 0xe6201950  swc1        $f0, 0x1950($s1)
    ctx->pc = 0x12f6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6480), bits); }
label_12f6e4:
    // 0x12f6e4: 0xc6211950  lwc1        $f1, 0x1950($s1)
    ctx->pc = 0x12f6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12f6e8:
    // 0x12f6e8: 0xc6201954  lwc1        $f0, 0x1954($s1)
    ctx->pc = 0x12f6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12f6ec:
    // 0x12f6ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12f6ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12f6f0:
    // 0x12f6f0: 0x0  nop
    ctx->pc = 0x12f6f0u;
    // NOP
label_12f6f4:
    // 0x12f6f4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_12f6f8:
    if (ctx->pc == 0x12F6F8u) {
        ctx->pc = 0x12F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F6F4u;
        // 0x12f6f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F6FCu;
        goto label_12f6fc;
    }
    ctx->pc = 0x12F6F4u;
    {
        const bool branch_taken_0x12f6f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F6F4u;
        // 0x12f6f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f6f4) {
            ctx->pc = 0x12F700u;
            goto label_12f700;
        }
    }
    ctx->pc = 0x12F6FCu;
label_12f6fc:
    // 0x12f6fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x12f6fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12f700:
    // 0x12f700: 0xc06802e  jal         func_1A00B8
label_12f704:
    if (ctx->pc == 0x12F704u) {
        ctx->pc = 0x12F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F700u;
        // 0x12f704: 0x26251618  addiu       $a1, $s1, 0x1618 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F708u;
        goto label_12f708;
    }
    ctx->pc = 0x12F700u;
    SET_GPR_U32(ctx, 31, 0x12F708u);
    ctx->pc = 0x12F704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F700u;
    // 0x12f704: 0x26251618  addiu       $a1, $s1, 0x1618 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A00B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A00B8u, 0x12F700u, 0x12F708u)) {
        return;
    }
    ctx->pc = 0x12F708u;
label_12f708:
    // 0x12f708: 0x8e42083c  lw          $v0, 0x83C($s2)
    ctx->pc = 0x12f708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2108)));
label_12f70c:
    // 0x12f70c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x12f70cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_12f710:
    // 0x12f710: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12f710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_12f714:
    // 0x12f714: 0x50400046  beql        $v0, $zero, . + 4 + (0x46 << 2)
label_12f718:
    if (ctx->pc == 0x12F718u) {
        ctx->pc = 0x12F718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F714u;
        // 0x12f718: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F71Cu;
        goto label_12f71c;
    }
    ctx->pc = 0x12F714u;
    {
        const bool branch_taken_0x12f714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f714) {
            ctx->pc = 0x12F718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F714u;
            // 0x12f718: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F830u;
            goto label_12f830;
        }
    }
    ctx->pc = 0x12F71Cu;
label_12f71c:
    // 0x12f71c: 0xc04f0f0  jal         func_13C3C0
label_12f720:
    if (ctx->pc == 0x12F720u) {
        ctx->pc = 0x12F720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F71Cu;
        // 0x12f720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F724u;
        goto label_12f724;
    }
    ctx->pc = 0x12F71Cu;
    SET_GPR_U32(ctx, 31, 0x12F724u);
    ctx->pc = 0x12F720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F71Cu;
    // 0x12f720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x12F71Cu, 0x12F724u)) {
        return;
    }
    ctx->pc = 0x12F724u;
label_12f724:
    // 0x12f724: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12f724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12f728:
    // 0x12f728: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12f728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12f72c:
    // 0x12f72c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x12f72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12f730:
    // 0x12f730: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12f730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12f734:
    // 0x12f734: 0xc62c18a0  lwc1        $f12, 0x18A0($s1)
    ctx->pc = 0x12f734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12f738:
    // 0x12f738: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x12f738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12f73c:
    // 0x12f73c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x12f73cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_12f740:
    // 0x12f740: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x12f740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12f744:
    // 0x12f744: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x12f744u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_12f748:
    // 0x12f748: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x12f748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12f74c:
    // 0x12f74c: 0xc6221940  lwc1        $f2, 0x1940($s1)
    ctx->pc = 0x12f74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12f750:
    // 0x12f750: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x12f750u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_12f754:
    // 0x12f754: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x12f754u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_12f758:
    // 0x12f758: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x12f758u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_12f75c:
    // 0x12f75c: 0xc06802e  jal         func_1A00B8
label_12f760:
    if (ctx->pc == 0x12F760u) {
        ctx->pc = 0x12F760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F75Cu;
        // 0x12f760: 0x46026302  mul.s       $f12, $f12, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F764u;
        goto label_12f764;
    }
    ctx->pc = 0x12F75Cu;
    SET_GPR_U32(ctx, 31, 0x12F764u);
    ctx->pc = 0x12F760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F75Cu;
    // 0x12f760: 0x46026302  mul.s       $f12, $f12, $f2 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A00B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A00B8u, 0x12F75Cu, 0x12F764u)) {
        return;
    }
    ctx->pc = 0x12F764u;
label_12f764:
    // 0x12f764: 0x6a261897  ldl         $a2, 0x1897($s1)
    ctx->pc = 0x12f764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_12f768:
    // 0x12f768: 0x6e261890  ldr         $a2, 0x1890($s1)
    ctx->pc = 0x12f768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_12f76c:
    // 0x12f76c: 0x8e271898  lw          $a3, 0x1898($s1)
    ctx->pc = 0x12f76cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6296)));
label_12f770:
    // 0x12f770: 0xb2261887  sdl         $a2, 0x1887($s1)
    ctx->pc = 0x12f770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12f774:
    // 0x12f774: 0xb6261880  sdr         $a2, 0x1880($s1)
    ctx->pc = 0x12f774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12f778:
    // 0x12f778: 0xae271888  sw          $a3, 0x1888($s1)
    ctx->pc = 0x12f778u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6280), GPR_U32(ctx, 7));
label_12f77c:
    // 0x12f77c: 0x26221880  addiu       $v0, $s1, 0x1880
    ctx->pc = 0x12f77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 6272));
label_12f780:
    // 0x12f780: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x12f780u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_12f784:
    // 0x12f784: 0xc6261880  lwc1        $f6, 0x1880($s1)
    ctx->pc = 0x12f784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_12f788:
    // 0x12f788: 0xc62118a0  lwc1        $f1, 0x18A0($s1)
    ctx->pc = 0x12f788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12f78c:
    // 0x12f78c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x12f78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12f790:
    // 0x12f790: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x12f790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12f794:
    // 0x12f794: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x12f794u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_12f798:
    // 0x12f798: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x12f798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_12f79c:
    // 0x12f79c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x12f79cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_12f7a0:
    // 0x12f7a0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12f7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12f7a4:
    // 0x12f7a4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x12f7a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_12f7a8:
    // 0x12f7a8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x12f7a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_12f7ac:
    // 0x12f7ac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x12f7acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_12f7b0:
    // 0x12f7b0: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x12f7b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12f7b4:
    // 0x12f7b4: 0x0  nop
    ctx->pc = 0x12f7b4u;
    // NOP
label_12f7b8:
    // 0x12f7b8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_12f7bc:
    if (ctx->pc == 0x12F7BCu) {
        ctx->pc = 0x12F7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F7B8u;
        // 0x12f7bc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F7C0u;
        goto label_12f7c0;
    }
    ctx->pc = 0x12F7B8u;
    {
        const bool branch_taken_0x12f7b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F7B8u;
        // 0x12f7bc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f7b8) {
            ctx->pc = 0x12F7E0u;
            goto label_12f7e0;
        }
    }
    ctx->pc = 0x12F7C0u;
label_12f7c0:
    // 0x12f7c0: 0x6a251887  ldl         $a1, 0x1887($s1)
    ctx->pc = 0x12f7c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_12f7c4:
    // 0x12f7c4: 0x6e251880  ldr         $a1, 0x1880($s1)
    ctx->pc = 0x12f7c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_12f7c8:
    // 0x12f7c8: 0x8e261888  lw          $a2, 0x1888($s1)
    ctx->pc = 0x12f7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6280)));
label_12f7cc:
    // 0x12f7cc: 0xb22518a7  sdl         $a1, 0x18A7($s1)
    ctx->pc = 0x12f7ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12f7d0:
    // 0x12f7d0: 0xb62518a0  sdr         $a1, 0x18A0($s1)
    ctx->pc = 0x12f7d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12f7d4:
    // 0x12f7d4: 0xae2618a8  sw          $a2, 0x18A8($s1)
    ctx->pc = 0x12f7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6312), GPR_U32(ctx, 6));
label_12f7d8:
    // 0x12f7d8: 0x10000016  b           . + 4 + (0x16 << 2)
label_12f7dc:
    if (ctx->pc == 0x12F7DCu) {
        ctx->pc = 0x12F7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F7D8u;
        // 0x12f7dc: 0x7bb10080  lq          $s1, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F7E0u;
        goto label_12f7e0;
    }
    ctx->pc = 0x12F7D8u;
    {
        const bool branch_taken_0x12f7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F7D8u;
        // 0x12f7dc: 0x7bb10080  lq          $s1, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f7d8) {
            ctx->pc = 0x12F834u;
            goto label_12f834;
        }
    }
    ctx->pc = 0x12F7E0u;
label_12f7e0:
    // 0x12f7e0: 0x46003007  neg.s       $f0, $f6
    ctx->pc = 0x12f7e0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[6]);
label_12f7e4:
    // 0x12f7e4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x12f7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_12f7e8:
    // 0x12f7e8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12f7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12f7ec:
    // 0x12f7ec: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x12f7ecu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_12f7f0:
    // 0x12f7f0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x12f7f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_12f7f4:
    // 0x12f7f4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12f7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12f7f8:
    // 0x12f7f8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x12f7f8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_12f7fc:
    // 0x12f7fc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x12f7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_12f800:
    // 0x12f800: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x12f800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_12f804:
    // 0x12f804: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x12f804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_12f808:
    // 0x12f808: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12f808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12f80c:
    // 0x12f80c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x12f80cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12f810:
    // 0x12f810: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x12f810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12f814:
    // 0x12f814: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x12f814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_12f818:
    // 0x12f818: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x12f818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_12f81c:
    // 0x12f81c: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x12f81cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_12f820:
    // 0x12f820: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x12f820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_12f824:
    // 0x12f824: 0xb22718a7  sdl         $a3, 0x18A7($s1)
    ctx->pc = 0x12f824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12f828:
    // 0x12f828: 0xb62718a0  sdr         $a3, 0x18A0($s1)
    ctx->pc = 0x12f828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12f82c:
    // 0x12f82c: 0xae2218a8  sw          $v0, 0x18A8($s1)
    ctx->pc = 0x12f82cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6312), GPR_U32(ctx, 2));
label_12f830:
    // 0x12f830: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x12f830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_12f834:
    // 0x12f834: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x12f834u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_12f838:
    // 0x12f838: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x12f838u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_12f83c:
    // 0x12f83c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x12f83cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_12f840:
    // 0x12f840: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12f840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_12f844:
    // 0x12f844: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x12f844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_12f848:
    // 0x12f848: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x12f848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_12f84c:
    // 0x12f84c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x12f84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12f850:
    // 0x12f850: 0x3e00008  jr          $ra
label_12f854:
    if (ctx->pc == 0x12F854u) {
        ctx->pc = 0x12F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F850u;
        // 0x12f854: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F858u;
        goto label_fallthrough_0x12f850;
    }
    ctx->pc = 0x12F850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F850u;
        // 0x12f854: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12f850:
    ctx->pc = 0x12F858u;
}
