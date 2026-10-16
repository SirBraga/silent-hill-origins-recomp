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

// Function: sub_0028F428
// Address: 0x28f428 - 0x28fbd8
void sub_0028F428_0x28f428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F428_0x28f428");
#endif

    switch (ctx->pc) {
        case 0x28f428u: goto label_28f428;
        case 0x28f42cu: goto label_28f42c;
        case 0x28f430u: goto label_28f430;
        case 0x28f434u: goto label_28f434;
        case 0x28f438u: goto label_28f438;
        case 0x28f43cu: goto label_28f43c;
        case 0x28f440u: goto label_28f440;
        case 0x28f444u: goto label_28f444;
        case 0x28f448u: goto label_28f448;
        case 0x28f44cu: goto label_28f44c;
        case 0x28f450u: goto label_28f450;
        case 0x28f454u: goto label_28f454;
        case 0x28f458u: goto label_28f458;
        case 0x28f45cu: goto label_28f45c;
        case 0x28f460u: goto label_28f460;
        case 0x28f464u: goto label_28f464;
        case 0x28f468u: goto label_28f468;
        case 0x28f46cu: goto label_28f46c;
        case 0x28f470u: goto label_28f470;
        case 0x28f474u: goto label_28f474;
        case 0x28f478u: goto label_28f478;
        case 0x28f47cu: goto label_28f47c;
        case 0x28f480u: goto label_28f480;
        case 0x28f484u: goto label_28f484;
        case 0x28f488u: goto label_28f488;
        case 0x28f48cu: goto label_28f48c;
        case 0x28f490u: goto label_28f490;
        case 0x28f494u: goto label_28f494;
        case 0x28f498u: goto label_28f498;
        case 0x28f49cu: goto label_28f49c;
        case 0x28f4a0u: goto label_28f4a0;
        case 0x28f4a4u: goto label_28f4a4;
        case 0x28f4a8u: goto label_28f4a8;
        case 0x28f4acu: goto label_28f4ac;
        case 0x28f4b0u: goto label_28f4b0;
        case 0x28f4b4u: goto label_28f4b4;
        case 0x28f4b8u: goto label_28f4b8;
        case 0x28f4bcu: goto label_28f4bc;
        case 0x28f4c0u: goto label_28f4c0;
        case 0x28f4c4u: goto label_28f4c4;
        case 0x28f4c8u: goto label_28f4c8;
        case 0x28f4ccu: goto label_28f4cc;
        case 0x28f4d0u: goto label_28f4d0;
        case 0x28f4d4u: goto label_28f4d4;
        case 0x28f4d8u: goto label_28f4d8;
        case 0x28f4dcu: goto label_28f4dc;
        case 0x28f4e0u: goto label_28f4e0;
        case 0x28f4e4u: goto label_28f4e4;
        case 0x28f4e8u: goto label_28f4e8;
        case 0x28f4ecu: goto label_28f4ec;
        case 0x28f4f0u: goto label_28f4f0;
        case 0x28f4f4u: goto label_28f4f4;
        case 0x28f4f8u: goto label_28f4f8;
        case 0x28f4fcu: goto label_28f4fc;
        case 0x28f500u: goto label_28f500;
        case 0x28f504u: goto label_28f504;
        case 0x28f508u: goto label_28f508;
        case 0x28f50cu: goto label_28f50c;
        case 0x28f510u: goto label_28f510;
        case 0x28f514u: goto label_28f514;
        case 0x28f518u: goto label_28f518;
        case 0x28f51cu: goto label_28f51c;
        case 0x28f520u: goto label_28f520;
        case 0x28f524u: goto label_28f524;
        case 0x28f528u: goto label_28f528;
        case 0x28f52cu: goto label_28f52c;
        case 0x28f530u: goto label_28f530;
        case 0x28f534u: goto label_28f534;
        case 0x28f538u: goto label_28f538;
        case 0x28f53cu: goto label_28f53c;
        case 0x28f540u: goto label_28f540;
        case 0x28f544u: goto label_28f544;
        case 0x28f548u: goto label_28f548;
        case 0x28f54cu: goto label_28f54c;
        case 0x28f550u: goto label_28f550;
        case 0x28f554u: goto label_28f554;
        case 0x28f558u: goto label_28f558;
        case 0x28f55cu: goto label_28f55c;
        case 0x28f560u: goto label_28f560;
        case 0x28f564u: goto label_28f564;
        case 0x28f568u: goto label_28f568;
        case 0x28f56cu: goto label_28f56c;
        case 0x28f570u: goto label_28f570;
        case 0x28f574u: goto label_28f574;
        case 0x28f578u: goto label_28f578;
        case 0x28f57cu: goto label_28f57c;
        case 0x28f580u: goto label_28f580;
        case 0x28f584u: goto label_28f584;
        case 0x28f588u: goto label_28f588;
        case 0x28f58cu: goto label_28f58c;
        case 0x28f590u: goto label_28f590;
        case 0x28f594u: goto label_28f594;
        case 0x28f598u: goto label_28f598;
        case 0x28f59cu: goto label_28f59c;
        case 0x28f5a0u: goto label_28f5a0;
        case 0x28f5a4u: goto label_28f5a4;
        case 0x28f5a8u: goto label_28f5a8;
        case 0x28f5acu: goto label_28f5ac;
        case 0x28f5b0u: goto label_28f5b0;
        case 0x28f5b4u: goto label_28f5b4;
        case 0x28f5b8u: goto label_28f5b8;
        case 0x28f5bcu: goto label_28f5bc;
        case 0x28f5c0u: goto label_28f5c0;
        case 0x28f5c4u: goto label_28f5c4;
        case 0x28f5c8u: goto label_28f5c8;
        case 0x28f5ccu: goto label_28f5cc;
        case 0x28f5d0u: goto label_28f5d0;
        case 0x28f5d4u: goto label_28f5d4;
        case 0x28f5d8u: goto label_28f5d8;
        case 0x28f5dcu: goto label_28f5dc;
        case 0x28f5e0u: goto label_28f5e0;
        case 0x28f5e4u: goto label_28f5e4;
        case 0x28f5e8u: goto label_28f5e8;
        case 0x28f5ecu: goto label_28f5ec;
        case 0x28f5f0u: goto label_28f5f0;
        case 0x28f5f4u: goto label_28f5f4;
        case 0x28f5f8u: goto label_28f5f8;
        case 0x28f5fcu: goto label_28f5fc;
        case 0x28f600u: goto label_28f600;
        case 0x28f604u: goto label_28f604;
        case 0x28f608u: goto label_28f608;
        case 0x28f60cu: goto label_28f60c;
        case 0x28f610u: goto label_28f610;
        case 0x28f614u: goto label_28f614;
        case 0x28f618u: goto label_28f618;
        case 0x28f61cu: goto label_28f61c;
        case 0x28f620u: goto label_28f620;
        case 0x28f624u: goto label_28f624;
        case 0x28f628u: goto label_28f628;
        case 0x28f62cu: goto label_28f62c;
        case 0x28f630u: goto label_28f630;
        case 0x28f634u: goto label_28f634;
        case 0x28f638u: goto label_28f638;
        case 0x28f63cu: goto label_28f63c;
        case 0x28f640u: goto label_28f640;
        case 0x28f644u: goto label_28f644;
        case 0x28f648u: goto label_28f648;
        case 0x28f64cu: goto label_28f64c;
        case 0x28f650u: goto label_28f650;
        case 0x28f654u: goto label_28f654;
        case 0x28f658u: goto label_28f658;
        case 0x28f65cu: goto label_28f65c;
        case 0x28f660u: goto label_28f660;
        case 0x28f664u: goto label_28f664;
        case 0x28f668u: goto label_28f668;
        case 0x28f66cu: goto label_28f66c;
        case 0x28f670u: goto label_28f670;
        case 0x28f674u: goto label_28f674;
        case 0x28f678u: goto label_28f678;
        case 0x28f67cu: goto label_28f67c;
        case 0x28f680u: goto label_28f680;
        case 0x28f684u: goto label_28f684;
        case 0x28f688u: goto label_28f688;
        case 0x28f68cu: goto label_28f68c;
        case 0x28f690u: goto label_28f690;
        case 0x28f694u: goto label_28f694;
        case 0x28f698u: goto label_28f698;
        case 0x28f69cu: goto label_28f69c;
        case 0x28f6a0u: goto label_28f6a0;
        case 0x28f6a4u: goto label_28f6a4;
        case 0x28f6a8u: goto label_28f6a8;
        case 0x28f6acu: goto label_28f6ac;
        case 0x28f6b0u: goto label_28f6b0;
        case 0x28f6b4u: goto label_28f6b4;
        case 0x28f6b8u: goto label_28f6b8;
        case 0x28f6bcu: goto label_28f6bc;
        case 0x28f6c0u: goto label_28f6c0;
        case 0x28f6c4u: goto label_28f6c4;
        case 0x28f6c8u: goto label_28f6c8;
        case 0x28f6ccu: goto label_28f6cc;
        case 0x28f6d0u: goto label_28f6d0;
        case 0x28f6d4u: goto label_28f6d4;
        case 0x28f6d8u: goto label_28f6d8;
        case 0x28f6dcu: goto label_28f6dc;
        case 0x28f6e0u: goto label_28f6e0;
        case 0x28f6e4u: goto label_28f6e4;
        case 0x28f6e8u: goto label_28f6e8;
        case 0x28f6ecu: goto label_28f6ec;
        case 0x28f6f0u: goto label_28f6f0;
        case 0x28f6f4u: goto label_28f6f4;
        case 0x28f6f8u: goto label_28f6f8;
        case 0x28f6fcu: goto label_28f6fc;
        case 0x28f700u: goto label_28f700;
        case 0x28f704u: goto label_28f704;
        case 0x28f708u: goto label_28f708;
        case 0x28f70cu: goto label_28f70c;
        case 0x28f710u: goto label_28f710;
        case 0x28f714u: goto label_28f714;
        case 0x28f718u: goto label_28f718;
        case 0x28f71cu: goto label_28f71c;
        case 0x28f720u: goto label_28f720;
        case 0x28f724u: goto label_28f724;
        case 0x28f728u: goto label_28f728;
        case 0x28f72cu: goto label_28f72c;
        case 0x28f730u: goto label_28f730;
        case 0x28f734u: goto label_28f734;
        case 0x28f738u: goto label_28f738;
        case 0x28f73cu: goto label_28f73c;
        case 0x28f740u: goto label_28f740;
        case 0x28f744u: goto label_28f744;
        case 0x28f748u: goto label_28f748;
        case 0x28f74cu: goto label_28f74c;
        case 0x28f750u: goto label_28f750;
        case 0x28f754u: goto label_28f754;
        case 0x28f758u: goto label_28f758;
        case 0x28f75cu: goto label_28f75c;
        case 0x28f760u: goto label_28f760;
        case 0x28f764u: goto label_28f764;
        case 0x28f768u: goto label_28f768;
        case 0x28f76cu: goto label_28f76c;
        case 0x28f770u: goto label_28f770;
        case 0x28f774u: goto label_28f774;
        case 0x28f778u: goto label_28f778;
        case 0x28f77cu: goto label_28f77c;
        case 0x28f780u: goto label_28f780;
        case 0x28f784u: goto label_28f784;
        case 0x28f788u: goto label_28f788;
        case 0x28f78cu: goto label_28f78c;
        case 0x28f790u: goto label_28f790;
        case 0x28f794u: goto label_28f794;
        case 0x28f798u: goto label_28f798;
        case 0x28f79cu: goto label_28f79c;
        case 0x28f7a0u: goto label_28f7a0;
        case 0x28f7a4u: goto label_28f7a4;
        case 0x28f7a8u: goto label_28f7a8;
        case 0x28f7acu: goto label_28f7ac;
        case 0x28f7b0u: goto label_28f7b0;
        case 0x28f7b4u: goto label_28f7b4;
        case 0x28f7b8u: goto label_28f7b8;
        case 0x28f7bcu: goto label_28f7bc;
        case 0x28f7c0u: goto label_28f7c0;
        case 0x28f7c4u: goto label_28f7c4;
        case 0x28f7c8u: goto label_28f7c8;
        case 0x28f7ccu: goto label_28f7cc;
        case 0x28f7d0u: goto label_28f7d0;
        case 0x28f7d4u: goto label_28f7d4;
        case 0x28f7d8u: goto label_28f7d8;
        case 0x28f7dcu: goto label_28f7dc;
        case 0x28f7e0u: goto label_28f7e0;
        case 0x28f7e4u: goto label_28f7e4;
        case 0x28f7e8u: goto label_28f7e8;
        case 0x28f7ecu: goto label_28f7ec;
        case 0x28f7f0u: goto label_28f7f0;
        case 0x28f7f4u: goto label_28f7f4;
        case 0x28f7f8u: goto label_28f7f8;
        case 0x28f7fcu: goto label_28f7fc;
        case 0x28f800u: goto label_28f800;
        case 0x28f804u: goto label_28f804;
        case 0x28f808u: goto label_28f808;
        case 0x28f80cu: goto label_28f80c;
        case 0x28f810u: goto label_28f810;
        case 0x28f814u: goto label_28f814;
        case 0x28f818u: goto label_28f818;
        case 0x28f81cu: goto label_28f81c;
        case 0x28f820u: goto label_28f820;
        case 0x28f824u: goto label_28f824;
        case 0x28f828u: goto label_28f828;
        case 0x28f82cu: goto label_28f82c;
        case 0x28f830u: goto label_28f830;
        case 0x28f834u: goto label_28f834;
        case 0x28f838u: goto label_28f838;
        case 0x28f83cu: goto label_28f83c;
        case 0x28f840u: goto label_28f840;
        case 0x28f844u: goto label_28f844;
        case 0x28f848u: goto label_28f848;
        case 0x28f84cu: goto label_28f84c;
        case 0x28f850u: goto label_28f850;
        case 0x28f854u: goto label_28f854;
        case 0x28f858u: goto label_28f858;
        case 0x28f85cu: goto label_28f85c;
        case 0x28f860u: goto label_28f860;
        case 0x28f864u: goto label_28f864;
        case 0x28f868u: goto label_28f868;
        case 0x28f86cu: goto label_28f86c;
        case 0x28f870u: goto label_28f870;
        case 0x28f874u: goto label_28f874;
        case 0x28f878u: goto label_28f878;
        case 0x28f87cu: goto label_28f87c;
        case 0x28f880u: goto label_28f880;
        case 0x28f884u: goto label_28f884;
        case 0x28f888u: goto label_28f888;
        case 0x28f88cu: goto label_28f88c;
        case 0x28f890u: goto label_28f890;
        case 0x28f894u: goto label_28f894;
        case 0x28f898u: goto label_28f898;
        case 0x28f89cu: goto label_28f89c;
        case 0x28f8a0u: goto label_28f8a0;
        case 0x28f8a4u: goto label_28f8a4;
        case 0x28f8a8u: goto label_28f8a8;
        case 0x28f8acu: goto label_28f8ac;
        case 0x28f8b0u: goto label_28f8b0;
        case 0x28f8b4u: goto label_28f8b4;
        case 0x28f8b8u: goto label_28f8b8;
        case 0x28f8bcu: goto label_28f8bc;
        case 0x28f8c0u: goto label_28f8c0;
        case 0x28f8c4u: goto label_28f8c4;
        case 0x28f8c8u: goto label_28f8c8;
        case 0x28f8ccu: goto label_28f8cc;
        case 0x28f8d0u: goto label_28f8d0;
        case 0x28f8d4u: goto label_28f8d4;
        case 0x28f8d8u: goto label_28f8d8;
        case 0x28f8dcu: goto label_28f8dc;
        case 0x28f8e0u: goto label_28f8e0;
        case 0x28f8e4u: goto label_28f8e4;
        case 0x28f8e8u: goto label_28f8e8;
        case 0x28f8ecu: goto label_28f8ec;
        case 0x28f8f0u: goto label_28f8f0;
        case 0x28f8f4u: goto label_28f8f4;
        case 0x28f8f8u: goto label_28f8f8;
        case 0x28f8fcu: goto label_28f8fc;
        case 0x28f900u: goto label_28f900;
        case 0x28f904u: goto label_28f904;
        case 0x28f908u: goto label_28f908;
        case 0x28f90cu: goto label_28f90c;
        case 0x28f910u: goto label_28f910;
        case 0x28f914u: goto label_28f914;
        case 0x28f918u: goto label_28f918;
        case 0x28f91cu: goto label_28f91c;
        case 0x28f920u: goto label_28f920;
        case 0x28f924u: goto label_28f924;
        case 0x28f928u: goto label_28f928;
        case 0x28f92cu: goto label_28f92c;
        case 0x28f930u: goto label_28f930;
        case 0x28f934u: goto label_28f934;
        case 0x28f938u: goto label_28f938;
        case 0x28f93cu: goto label_28f93c;
        case 0x28f940u: goto label_28f940;
        case 0x28f944u: goto label_28f944;
        case 0x28f948u: goto label_28f948;
        case 0x28f94cu: goto label_28f94c;
        case 0x28f950u: goto label_28f950;
        case 0x28f954u: goto label_28f954;
        case 0x28f958u: goto label_28f958;
        case 0x28f95cu: goto label_28f95c;
        case 0x28f960u: goto label_28f960;
        case 0x28f964u: goto label_28f964;
        case 0x28f968u: goto label_28f968;
        case 0x28f96cu: goto label_28f96c;
        case 0x28f970u: goto label_28f970;
        case 0x28f974u: goto label_28f974;
        case 0x28f978u: goto label_28f978;
        case 0x28f97cu: goto label_28f97c;
        case 0x28f980u: goto label_28f980;
        case 0x28f984u: goto label_28f984;
        case 0x28f988u: goto label_28f988;
        case 0x28f98cu: goto label_28f98c;
        case 0x28f990u: goto label_28f990;
        case 0x28f994u: goto label_28f994;
        case 0x28f998u: goto label_28f998;
        case 0x28f99cu: goto label_28f99c;
        case 0x28f9a0u: goto label_28f9a0;
        case 0x28f9a4u: goto label_28f9a4;
        case 0x28f9a8u: goto label_28f9a8;
        case 0x28f9acu: goto label_28f9ac;
        case 0x28f9b0u: goto label_28f9b0;
        case 0x28f9b4u: goto label_28f9b4;
        case 0x28f9b8u: goto label_28f9b8;
        case 0x28f9bcu: goto label_28f9bc;
        case 0x28f9c0u: goto label_28f9c0;
        case 0x28f9c4u: goto label_28f9c4;
        case 0x28f9c8u: goto label_28f9c8;
        case 0x28f9ccu: goto label_28f9cc;
        case 0x28f9d0u: goto label_28f9d0;
        case 0x28f9d4u: goto label_28f9d4;
        case 0x28f9d8u: goto label_28f9d8;
        case 0x28f9dcu: goto label_28f9dc;
        case 0x28f9e0u: goto label_28f9e0;
        case 0x28f9e4u: goto label_28f9e4;
        case 0x28f9e8u: goto label_28f9e8;
        case 0x28f9ecu: goto label_28f9ec;
        case 0x28f9f0u: goto label_28f9f0;
        case 0x28f9f4u: goto label_28f9f4;
        case 0x28f9f8u: goto label_28f9f8;
        case 0x28f9fcu: goto label_28f9fc;
        case 0x28fa00u: goto label_28fa00;
        case 0x28fa04u: goto label_28fa04;
        case 0x28fa08u: goto label_28fa08;
        case 0x28fa0cu: goto label_28fa0c;
        case 0x28fa10u: goto label_28fa10;
        case 0x28fa14u: goto label_28fa14;
        case 0x28fa18u: goto label_28fa18;
        case 0x28fa1cu: goto label_28fa1c;
        case 0x28fa20u: goto label_28fa20;
        case 0x28fa24u: goto label_28fa24;
        case 0x28fa28u: goto label_28fa28;
        case 0x28fa2cu: goto label_28fa2c;
        case 0x28fa30u: goto label_28fa30;
        case 0x28fa34u: goto label_28fa34;
        case 0x28fa38u: goto label_28fa38;
        case 0x28fa3cu: goto label_28fa3c;
        case 0x28fa40u: goto label_28fa40;
        case 0x28fa44u: goto label_28fa44;
        case 0x28fa48u: goto label_28fa48;
        case 0x28fa4cu: goto label_28fa4c;
        case 0x28fa50u: goto label_28fa50;
        case 0x28fa54u: goto label_28fa54;
        case 0x28fa58u: goto label_28fa58;
        case 0x28fa5cu: goto label_28fa5c;
        case 0x28fa60u: goto label_28fa60;
        case 0x28fa64u: goto label_28fa64;
        case 0x28fa68u: goto label_28fa68;
        case 0x28fa6cu: goto label_28fa6c;
        case 0x28fa70u: goto label_28fa70;
        case 0x28fa74u: goto label_28fa74;
        case 0x28fa78u: goto label_28fa78;
        case 0x28fa7cu: goto label_28fa7c;
        case 0x28fa80u: goto label_28fa80;
        case 0x28fa84u: goto label_28fa84;
        case 0x28fa88u: goto label_28fa88;
        case 0x28fa8cu: goto label_28fa8c;
        case 0x28fa90u: goto label_28fa90;
        case 0x28fa94u: goto label_28fa94;
        case 0x28fa98u: goto label_28fa98;
        case 0x28fa9cu: goto label_28fa9c;
        case 0x28faa0u: goto label_28faa0;
        case 0x28faa4u: goto label_28faa4;
        case 0x28faa8u: goto label_28faa8;
        case 0x28faacu: goto label_28faac;
        case 0x28fab0u: goto label_28fab0;
        case 0x28fab4u: goto label_28fab4;
        case 0x28fab8u: goto label_28fab8;
        case 0x28fabcu: goto label_28fabc;
        case 0x28fac0u: goto label_28fac0;
        case 0x28fac4u: goto label_28fac4;
        case 0x28fac8u: goto label_28fac8;
        case 0x28faccu: goto label_28facc;
        case 0x28fad0u: goto label_28fad0;
        case 0x28fad4u: goto label_28fad4;
        case 0x28fad8u: goto label_28fad8;
        case 0x28fadcu: goto label_28fadc;
        case 0x28fae0u: goto label_28fae0;
        case 0x28fae4u: goto label_28fae4;
        case 0x28fae8u: goto label_28fae8;
        case 0x28faecu: goto label_28faec;
        case 0x28faf0u: goto label_28faf0;
        case 0x28faf4u: goto label_28faf4;
        case 0x28faf8u: goto label_28faf8;
        case 0x28fafcu: goto label_28fafc;
        case 0x28fb00u: goto label_28fb00;
        case 0x28fb04u: goto label_28fb04;
        case 0x28fb08u: goto label_28fb08;
        case 0x28fb0cu: goto label_28fb0c;
        case 0x28fb10u: goto label_28fb10;
        case 0x28fb14u: goto label_28fb14;
        case 0x28fb18u: goto label_28fb18;
        case 0x28fb1cu: goto label_28fb1c;
        case 0x28fb20u: goto label_28fb20;
        case 0x28fb24u: goto label_28fb24;
        case 0x28fb28u: goto label_28fb28;
        case 0x28fb2cu: goto label_28fb2c;
        case 0x28fb30u: goto label_28fb30;
        case 0x28fb34u: goto label_28fb34;
        case 0x28fb38u: goto label_28fb38;
        case 0x28fb3cu: goto label_28fb3c;
        case 0x28fb40u: goto label_28fb40;
        case 0x28fb44u: goto label_28fb44;
        case 0x28fb48u: goto label_28fb48;
        case 0x28fb4cu: goto label_28fb4c;
        case 0x28fb50u: goto label_28fb50;
        case 0x28fb54u: goto label_28fb54;
        case 0x28fb58u: goto label_28fb58;
        case 0x28fb5cu: goto label_28fb5c;
        case 0x28fb60u: goto label_28fb60;
        case 0x28fb64u: goto label_28fb64;
        case 0x28fb68u: goto label_28fb68;
        case 0x28fb6cu: goto label_28fb6c;
        case 0x28fb70u: goto label_28fb70;
        case 0x28fb74u: goto label_28fb74;
        case 0x28fb78u: goto label_28fb78;
        case 0x28fb7cu: goto label_28fb7c;
        case 0x28fb80u: goto label_28fb80;
        case 0x28fb84u: goto label_28fb84;
        case 0x28fb88u: goto label_28fb88;
        case 0x28fb8cu: goto label_28fb8c;
        case 0x28fb90u: goto label_28fb90;
        case 0x28fb94u: goto label_28fb94;
        case 0x28fb98u: goto label_28fb98;
        case 0x28fb9cu: goto label_28fb9c;
        case 0x28fba0u: goto label_28fba0;
        case 0x28fba4u: goto label_28fba4;
        case 0x28fba8u: goto label_28fba8;
        case 0x28fbacu: goto label_28fbac;
        case 0x28fbb0u: goto label_28fbb0;
        case 0x28fbb4u: goto label_28fbb4;
        case 0x28fbb8u: goto label_28fbb8;
        case 0x28fbbcu: goto label_28fbbc;
        case 0x28fbc0u: goto label_28fbc0;
        case 0x28fbc4u: goto label_28fbc4;
        case 0x28fbc8u: goto label_28fbc8;
        case 0x28fbccu: goto label_28fbcc;
        case 0x28fbd0u: goto label_28fbd0;
        case 0x28fbd4u: goto label_28fbd4;
        default: break;
    }

    ctx->pc = 0x28f428u;

label_28f428:
    // 0x28f428: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x28f428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_28f42c:
    // 0x28f42c: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x28f42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
label_28f430:
    // 0x28f430: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x28f430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
label_28f434:
    // 0x28f434: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28f434u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28f438:
    // 0x28f438: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x28f438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
label_28f43c:
    // 0x28f43c: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x28f43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
label_28f440:
    // 0x28f440: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x28f440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
label_28f444:
    // 0x28f444: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x28f444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
label_28f448:
    // 0x28f448: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x28f448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
label_28f44c:
    // 0x28f44c: 0x7fb70110  sq          $s7, 0x110($sp)
    ctx->pc = 0x28f44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 23));
label_28f450:
    // 0x28f450: 0x7fbe0100  sq          $fp, 0x100($sp)
    ctx->pc = 0x28f450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 30));
label_28f454:
    // 0x28f454: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x28f454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
label_28f458:
    // 0x28f458: 0xe7b601a0  swc1        $f22, 0x1A0($sp)
    ctx->pc = 0x28f458u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_28f45c:
    // 0x28f45c: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x28f45cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_28f460:
    // 0x28f460: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x28f460u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_28f464:
    // 0x28f464: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x28f464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
label_28f468:
    // 0x28f468: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x28f468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_28f46c:
    // 0x28f46c: 0xafa600b8  sw          $a2, 0xB8($sp)
    ctx->pc = 0x28f46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 6));
label_28f470:
    // 0x28f470: 0xafa700bc  sw          $a3, 0xBC($sp)
    ctx->pc = 0x28f470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 7));
label_28f474:
    // 0x28f474: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_28f478:
    if (ctx->pc == 0x28F478u) {
        ctx->pc = 0x28F478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F474u;
        // 0x28f478: 0xafa800c0  sw          $t0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F47Cu;
        goto label_28f47c;
    }
    ctx->pc = 0x28F474u;
    {
        const bool branch_taken_0x28f474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F474u;
        // 0x28f478: 0xafa800c0  sw          $t0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f474) {
            ctx->pc = 0x28F4F8u;
            goto label_28f4f8;
        }
    }
    ctx->pc = 0x28F47Cu;
label_28f47c:
    // 0x28f47c: 0xc095f18  jal         func_257C60
label_28f480:
    if (ctx->pc == 0x28F480u) {
        ctx->pc = 0x28F484u;
        goto label_28f484;
    }
    ctx->pc = 0x28F47Cu;
    SET_GPR_U32(ctx, 31, 0x28F484u);
    ctx->pc = 0x257C60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257C60u, 0x28F47Cu, 0x28F484u)) {
        return;
    }
    ctx->pc = 0x28F484u;
label_28f484:
    // 0x28f484: 0x8e450068  lw          $a1, 0x68($s2)
    ctx->pc = 0x28f484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_28f488:
    // 0x28f488: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_28f48c:
    if (ctx->pc == 0x28F48Cu) {
        ctx->pc = 0x28F48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F488u;
        // 0x28f48c: 0xafa200c4  sw          $v0, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F490u;
        goto label_28f490;
    }
    ctx->pc = 0x28F488u;
    {
        const bool branch_taken_0x28f488 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F488u;
        // 0x28f48c: 0xafa200c4  sw          $v0, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f488) {
            ctx->pc = 0x28F498u;
            goto label_28f498;
        }
    }
    ctx->pc = 0x28F490u;
label_28f490:
    // 0x28f490: 0xc095f6a  jal         func_257DA8
label_28f494:
    if (ctx->pc == 0x28F494u) {
        ctx->pc = 0x28F494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F490u;
        // 0x28f494: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F498u;
        goto label_28f498;
    }
    ctx->pc = 0x28F490u;
    SET_GPR_U32(ctx, 31, 0x28F498u);
    ctx->pc = 0x28F494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F490u;
    // 0x28f494: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257DA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257DA8u, 0x28F490u, 0x28F498u)) {
        return;
    }
    ctx->pc = 0x28F498u;
label_28f498:
    // 0x28f498: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x28f498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_28f49c:
    // 0x28f49c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28f49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28f4a0:
    // 0x28f4a0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_28f4a4:
    if (ctx->pc == 0x28F4A4u) {
        ctx->pc = 0x28F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F4A0u;
        // 0x28f4a4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F4A8u;
        goto label_28f4a8;
    }
    ctx->pc = 0x28F4A0u;
    {
        const bool branch_taken_0x28f4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F4A0u;
        // 0x28f4a4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f4a0) {
            ctx->pc = 0x28F4D8u;
            goto label_28f4d8;
        }
    }
    ctx->pc = 0x28F4A8u;
label_28f4a8:
    // 0x28f4a8: 0x24463990  addiu       $a2, $v0, 0x3990
    ctx->pc = 0x28f4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 14736));
label_28f4ac:
    // 0x28f4ac: 0x88c30003  lwl         $v1, 0x3($a2)
    ctx->pc = 0x28f4acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_28f4b0:
    // 0x28f4b0: 0x98c30000  lwr         $v1, 0x0($a2)
    ctx->pc = 0x28f4b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_28f4b4:
    // 0x28f4b4: 0xaba300a3  swl         $v1, 0xA3($sp)
    ctx->pc = 0x28f4b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 163); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_28f4b8:
    // 0x28f4b8: 0xbba300a0  swr         $v1, 0xA0($sp)
    ctx->pc = 0x28f4b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_28f4bc:
    // 0x28f4bc: 0x8fa800c4  lw          $t0, 0xC4($sp)
    ctx->pc = 0x28f4bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_28f4c0:
    // 0x28f4c0: 0x8bab00a3  lwl         $t3, 0xA3($sp)
    ctx->pc = 0x28f4c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 163); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 11) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 11, (int32_t)merged); }
label_28f4c4:
    // 0x28f4c4: 0x9bab00a0  lwr         $t3, 0xA0($sp)
    ctx->pc = 0x28f4c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 11) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 11) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 11, merged64); }
label_28f4c8:
    // 0x28f4c8: 0xa90b0007  swl         $t3, 0x7($t0)
    ctx->pc = 0x28f4c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_28f4cc:
    // 0x28f4cc: 0xb90b0004  swr         $t3, 0x4($t0)
    ctx->pc = 0x28f4ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_28f4d0:
    // 0x28f4d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_28f4d4:
    if (ctx->pc == 0x28F4D4u) {
        ctx->pc = 0x28F4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F4D0u;
        // 0x28f4d4: 0x8fa300c4  lw          $v1, 0xC4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F4D8u;
        goto label_28f4d8;
    }
    ctx->pc = 0x28F4D0u;
    {
        const bool branch_taken_0x28f4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F4D0u;
        // 0x28f4d4: 0x8fa300c4  lw          $v1, 0xC4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f4d0) {
            ctx->pc = 0x28F4F0u;
            goto label_28f4f0;
        }
    }
    ctx->pc = 0x28F4D8u;
label_28f4d8:
    // 0x28f4d8: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x28f4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_28f4dc:
    // 0x28f4dc: 0x8a460063  lwl         $a2, 0x63($s2)
    ctx->pc = 0x28f4dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 99); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
label_28f4e0:
    // 0x28f4e0: 0x9a460060  lwr         $a2, 0x60($s2)
    ctx->pc = 0x28f4e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 96); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
label_28f4e4:
    // 0x28f4e4: 0xa8a60007  swl         $a2, 0x7($a1)
    ctx->pc = 0x28f4e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_28f4e8:
    // 0x28f4e8: 0xb8a60004  swr         $a2, 0x4($a1)
    ctx->pc = 0x28f4e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_28f4ec:
    // 0x28f4ec: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x28f4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_28f4f0:
    // 0x28f4f0: 0x10000006  b           . + 4 + (0x6 << 2)
label_28f4f4:
    if (ctx->pc == 0x28F4F4u) {
        ctx->pc = 0x28F4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F4F0u;
        // 0x28f4f4: 0xae43006c  sw          $v1, 0x6C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F4F8u;
        goto label_28f4f8;
    }
    ctx->pc = 0x28F4F0u;
    {
        const bool branch_taken_0x28f4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F4F0u;
        // 0x28f4f4: 0xae43006c  sw          $v1, 0x6C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f4f0) {
            ctx->pc = 0x28F50Cu;
            goto label_28f50c;
        }
    }
    ctx->pc = 0x28F4F8u;
label_28f4f8:
    // 0x28f4f8: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x28f4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_28f4fc:
    // 0x28f4fc: 0x94420018  lhu         $v0, 0x18($v0)
    ctx->pc = 0x28f4fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_28f500:
    // 0x28f500: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x28f500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_28f504:
    // 0x28f504: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28f504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28f508:
    // 0x28f508: 0xa4820018  sh          $v0, 0x18($a0)
    ctx->pc = 0x28f508u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 2));
label_28f50c:
    // 0x28f50c: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x28f50cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_28f510:
    // 0x28f510: 0x3c130070  lui         $s3, 0x70
    ctx->pc = 0x28f510u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)112 << 16));
label_28f514:
    // 0x28f514: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x28f514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_28f518:
    // 0x28f518: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x28f518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28f51c:
    // 0x28f51c: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x28f51cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_28f520:
    // 0x28f520: 0x8cb50014  lw          $s5, 0x14($a1)
    ctx->pc = 0x28f520u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_28f524:
    // 0x28f524: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x28f524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_28f528:
    // 0x28f528: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x28f528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_28f52c:
    // 0x28f52c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x28f52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_28f530:
    // 0x28f530: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
label_28f534:
    if (ctx->pc == 0x28F534u) {
        ctx->pc = 0x28F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F530u;
        // 0x28f534: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F538u;
        goto label_28f538;
    }
    ctx->pc = 0x28F530u;
    {
        const bool branch_taken_0x28f530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x28F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F530u;
        // 0x28f534: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f530) {
            ctx->pc = 0x28F544u;
            goto label_28f544;
        }
    }
    ctx->pc = 0x28F538u;
label_28f538:
    // 0x28f538: 0xc09294c  jal         func_24A530
label_28f53c:
    if (ctx->pc == 0x28F53Cu) {
        ctx->pc = 0x28F53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F538u;
        // 0x28f53c: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F540u;
        goto label_28f540;
    }
    ctx->pc = 0x28F538u;
    SET_GPR_U32(ctx, 31, 0x28F540u);
    ctx->pc = 0x28F53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F538u;
    // 0x28f53c: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x28F538u, 0x28F540u)) {
        return;
    }
    ctx->pc = 0x28F540u;
label_28f540:
    // 0x28f540: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28f540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28f544:
    // 0x28f544: 0x8fa600cc  lw          $a2, 0xCC($sp)
    ctx->pc = 0x28f544u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_28f548:
    // 0x28f548: 0x8fa800c8  lw          $t0, 0xC8($sp)
    ctx->pc = 0x28f548u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_28f54c:
    // 0x28f54c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x28f54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_28f550:
    // 0x28f550: 0x24c2fffd  addiu       $v0, $a2, -0x3
    ctx->pc = 0x28f550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
label_28f554:
    // 0x28f554: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x28f554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_28f558:
    // 0x28f558: 0x1114021  addu        $t0, $t0, $s1
    ctx->pc = 0x28f558u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
label_28f55c:
    // 0x28f55c: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x28f55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_28f560:
    // 0x28f560: 0x71182b  sltu        $v1, $v1, $s1
    ctx->pc = 0x28f560u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_28f564:
    // 0x28f564: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_28f568:
    if (ctx->pc == 0x28F568u) {
        ctx->pc = 0x28F568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F564u;
        // 0x28f568: 0xafa800c8  sw          $t0, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F56Cu;
        goto label_28f56c;
    }
    ctx->pc = 0x28F564u;
    {
        const bool branch_taken_0x28f564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F564u;
        // 0x28f568: 0xafa800c8  sw          $t0, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f564) {
            ctx->pc = 0x28F574u;
            goto label_28f574;
        }
    }
    ctx->pc = 0x28F56Cu;
label_28f56c:
    // 0x28f56c: 0x2622fffd  addiu       $v0, $s1, -0x3
    ctx->pc = 0x28f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967293));
label_28f570:
    // 0x28f570: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x28f570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_28f574:
    // 0x28f574: 0x8fab00b4  lw          $t3, 0xB4($sp)
    ctx->pc = 0x28f574u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_28f578:
    // 0x28f578: 0x8eb50014  lw          $s5, 0x14($s5)
    ctx->pc = 0x28f578u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_28f57c:
    // 0x28f57c: 0x8d620014  lw          $v0, 0x14($t3)
    ctx->pc = 0x28f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
label_28f580:
    // 0x28f580: 0x56a2ffeb  bnel        $s5, $v0, . + 4 + (-0x15 << 2)
label_28f584:
    if (ctx->pc == 0x28F584u) {
        ctx->pc = 0x28F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F580u;
        // 0x28f584: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F588u;
        goto label_28f588;
    }
    ctx->pc = 0x28F580u;
    {
        const bool branch_taken_0x28f580 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x28f580) {
            ctx->pc = 0x28F584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F580u;
            // 0x28f584: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f530;
        }
    }
    ctx->pc = 0x28F588u;
label_28f588:
    // 0x28f588: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x28f588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_28f58c:
    // 0x28f58c: 0x1080002a  beqz        $a0, . + 4 + (0x2A << 2)
label_28f590:
    if (ctx->pc == 0x28F590u) {
        ctx->pc = 0x28F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F58Cu;
        // 0x28f590: 0x267163b0  addiu       $s1, $s3, 0x63B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 25520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F594u;
        goto label_28f594;
    }
    ctx->pc = 0x28F58Cu;
    {
        const bool branch_taken_0x28f58c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F58Cu;
        // 0x28f590: 0x267163b0  addiu       $s1, $s3, 0x63B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 25520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f58c) {
            ctx->pc = 0x28F638u;
            goto label_28f638;
        }
    }
    ctx->pc = 0x28F594u;
label_28f594:
    // 0x28f594: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x28f594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_28f598:
    // 0x28f598: 0x8e230d20  lw          $v1, 0xD20($s1)
    ctx->pc = 0x28f598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3360)));
label_28f59c:
    // 0x28f59c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x28f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_28f5a0:
    // 0x28f5a0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x28f5a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_28f5a4:
    // 0x28f5a4: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_28f5a8:
    if (ctx->pc == 0x28F5A8u) {
        ctx->pc = 0x28F5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F5A4u;
        // 0x28f5a8: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F5ACu;
        goto label_28f5ac;
    }
    ctx->pc = 0x28F5A4u;
    {
        const bool branch_taken_0x28f5a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F5A4u;
        // 0x28f5a8: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f5a4) {
            ctx->pc = 0x28F614u;
            goto label_28f614;
        }
    }
    ctx->pc = 0x28F5ACu;
label_28f5ac:
    // 0x28f5ac: 0x8e240d1c  lw          $a0, 0xD1C($s1)
    ctx->pc = 0x28f5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3356)));
label_28f5b0:
    // 0x28f5b0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_28f5b4:
    if (ctx->pc == 0x28F5B4u) {
        ctx->pc = 0x28F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F5B0u;
        // 0x28f5b4: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F5B8u;
        goto label_28f5b8;
    }
    ctx->pc = 0x28F5B0u;
    {
        const bool branch_taken_0x28f5b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F5B0u;
        // 0x28f5b4: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f5b0) {
            ctx->pc = 0x28F5CCu;
            goto label_28f5cc;
        }
    }
    ctx->pc = 0x28F5B8u;
label_28f5b8:
    // 0x28f5b8: 0x26020fc8  addiu       $v0, $s0, 0xFC8
    ctx->pc = 0x28f5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
label_28f5bc:
    // 0x28f5bc: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x28f5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_28f5c0:
    // 0x28f5c0: 0x60f809  jalr        $v1
label_28f5c4:
    if (ctx->pc == 0x28F5C4u) {
        ctx->pc = 0x28F5C8u;
        goto label_28f5c8;
    }
    ctx->pc = 0x28F5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x28F5C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F5C0u, 0x28F5C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28F5C8u;
label_28f5c8:
    // 0x28f5c8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x28f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_28f5cc:
    // 0x28f5cc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x28f5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_28f5d0:
    // 0x28f5d0: 0x26030fc8  addiu       $v1, $s0, 0xFC8
    ctx->pc = 0x28f5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
label_28f5d4:
    // 0x28f5d4: 0xae200d20  sw          $zero, 0xD20($s1)
    ctx->pc = 0x28f5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3360), GPR_U32(ctx, 0));
label_28f5d8:
    // 0x28f5d8: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x28f5d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28f5dc:
    // 0x28f5dc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x28f5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_28f5e0:
    // 0x28f5e0: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x28f5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_28f5e4:
    // 0x28f5e4: 0x2012  mflo        $a0
    ctx->pc = 0x28f5e4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_28f5e8:
    // 0x28f5e8: 0x40f809  jalr        $v0
label_28f5ec:
    if (ctx->pc == 0x28F5ECu) {
        ctx->pc = 0x28F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F5E8u;
        // 0x28f5ec: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F5F0u;
        goto label_28f5f0;
    }
    ctx->pc = 0x28F5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28F5F0u);
        ctx->pc = 0x28F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F5E8u;
        // 0x28f5ec: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F5E8u, 0x28F5F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28F5F0u;
label_28f5f0:
    // 0x28f5f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_28f5f4:
    if (ctx->pc == 0x28F5F4u) {
        ctx->pc = 0x28F5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F5F0u;
        // 0x28f5f4: 0xae220d1c  sw          $v0, 0xD1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F5F8u;
        goto label_28f5f8;
    }
    ctx->pc = 0x28F5F0u;
    {
        const bool branch_taken_0x28f5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F5F0u;
        // 0x28f5f4: 0xae220d1c  sw          $v0, 0xD1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f5f0) {
            ctx->pc = 0x28F600u;
            goto label_28f600;
        }
    }
    ctx->pc = 0x28F5F8u;
label_28f5f8:
    // 0x28f5f8: 0x10000168  b           . + 4 + (0x168 << 2)
label_28f5fc:
    if (ctx->pc == 0x28F5FCu) {
        ctx->pc = 0x28F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F5F8u;
        // 0x28f5fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F600u;
        goto label_28f600;
    }
    ctx->pc = 0x28F5F8u;
    {
        const bool branch_taken_0x28f5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F5F8u;
        // 0x28f5fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f5f8) {
            ctx->pc = 0x28FB9Cu;
            goto label_28fb9c;
        }
    }
    ctx->pc = 0x28F600u;
label_28f600:
    // 0x28f600: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x28f600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_28f604:
    // 0x28f604: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x28f604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_28f608:
    // 0x28f608: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28f608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28f60c:
    // 0x28f60c: 0xae220d20  sw          $v0, 0xD20($s1)
    ctx->pc = 0x28f60cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3360), GPR_U32(ctx, 2));
label_28f610:
    // 0x28f610: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x28f610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_28f614:
    // 0x28f614: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x28f614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_28f618:
    // 0x28f618: 0x266363b0  addiu       $v1, $s3, 0x63B0
    ctx->pc = 0x28f618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 25520));
label_28f61c:
    // 0x28f61c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28f61cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f620:
    // 0x28f620: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x28f620u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28f624:
    // 0x28f624: 0x8c630d1c  lw          $v1, 0xD1C($v1)
    ctx->pc = 0x28f624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3356)));
label_28f628:
    // 0x28f628: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x28f628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
label_28f62c:
    // 0x28f62c: 0x3012  mflo        $a2
    ctx->pc = 0x28f62cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_28f630:
    // 0x28f630: 0xc0c493d  jal         func_3124F4
label_28f634:
    if (ctx->pc == 0x28F634u) {
        ctx->pc = 0x28F634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F630u;
        // 0x28f634: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F638u;
        goto label_28f638;
    }
    ctx->pc = 0x28F630u;
    SET_GPR_U32(ctx, 31, 0x28F638u);
    ctx->pc = 0x28F634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F630u;
    // 0x28f634: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x28F630u, 0x28F638u)) {
        return;
    }
    ctx->pc = 0x28F638u;
label_28f638:
    // 0x28f638: 0x266263b0  addiu       $v0, $s3, 0x63B0
    ctx->pc = 0x28f638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 25520));
label_28f63c:
    // 0x28f63c: 0xc45506f8  lwc1        $f21, 0x6F8($v0)
    ctx->pc = 0x28f63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_28f640:
    // 0x28f640: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x28f640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_28f644:
    // 0x28f644: 0x10400148  beqz        $v0, . + 4 + (0x148 << 2)
label_28f648:
    if (ctx->pc == 0x28F648u) {
        ctx->pc = 0x28F648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F644u;
        // 0x28f648: 0x8fa300c8  lw          $v1, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F64Cu;
        goto label_28f64c;
    }
    ctx->pc = 0x28F644u;
    {
        const bool branch_taken_0x28f644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F644u;
        // 0x28f648: 0x8fa300c8  lw          $v1, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f644) {
            ctx->pc = 0x28FB68u;
            goto label_28fb68;
        }
    }
    ctx->pc = 0x28F64Cu;
label_28f64c:
    // 0x28f64c: 0x10600146  beqz        $v1, . + 4 + (0x146 << 2)
label_28f650:
    if (ctx->pc == 0x28F650u) {
        ctx->pc = 0x28F650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F64Cu;
        // 0x28f650: 0x8fa500bc  lw          $a1, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F654u;
        goto label_28f654;
    }
    ctx->pc = 0x28F64Cu;
    {
        const bool branch_taken_0x28f64c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F64Cu;
        // 0x28f650: 0x8fa500bc  lw          $a1, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f64c) {
            ctx->pc = 0x28FB68u;
            goto label_28fb68;
        }
    }
    ctx->pc = 0x28F654u;
label_28f654:
    // 0x28f654: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x28f654u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_28f658:
    // 0x28f658: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x28f658u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_28f65c:
    // 0x28f65c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x28f65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_28f660:
    // 0x28f660: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x28f660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_28f664:
    // 0x28f664: 0x8cc5005c  lw          $a1, 0x5C($a2)
    ctx->pc = 0x28f664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
label_28f668:
    // 0x28f668: 0xafa800e8  sw          $t0, 0xE8($sp)
    ctx->pc = 0x28f668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 8));
label_28f66c:
    // 0x28f66c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x28f66cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_28f670:
    // 0x28f670: 0x8fab00c0  lw          $t3, 0xC0($sp)
    ctx->pc = 0x28f670u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_28f674:
    // 0x28f674: 0x45080  sll         $t2, $a0, 2
    ctx->pc = 0x28f674u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_28f678:
    // 0x28f678: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x28f678u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_28f67c:
    // 0x28f67c: 0x448c0  sll         $t1, $a0, 3
    ctx->pc = 0x28f67cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_28f680:
    // 0x28f680: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x28f680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_28f684:
    // 0x28f684: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x28f684u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28f688:
    // 0x28f688: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x28f688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_28f68c:
    // 0x28f68c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x28f68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_28f690:
    // 0x28f690: 0x8ca7002c  lw          $a3, 0x2C($a1)
    ctx->pc = 0x28f690u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_28f694:
    // 0x28f694: 0x8ca80030  lw          $t0, 0x30($a1)
    ctx->pc = 0x28f694u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_28f698:
    // 0x28f698: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28f698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_28f69c:
    // 0x28f69c: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x28f69cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_28f6a0:
    // 0x28f6a0: 0xe2f021  addu        $fp, $a3, $v0
    ctx->pc = 0x28f6a0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_28f6a4:
    // 0x28f6a4: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x28f6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
label_28f6a8:
    // 0x28f6a8: 0x10a4021  addu        $t0, $t0, $t2
    ctx->pc = 0x28f6a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
label_28f6ac:
    // 0x28f6ac: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x28f6acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_28f6b0:
    // 0x28f6b0: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x28f6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_28f6b4:
    // 0x28f6b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28f6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_28f6b8:
    // 0x28f6b8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x28f6b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_28f6bc:
    // 0x28f6bc: 0x8cd50014  lw          $s5, 0x14($a2)
    ctx->pc = 0x28f6bcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_28f6c0:
    // 0x28f6c0: 0xafa800d4  sw          $t0, 0xD4($sp)
    ctx->pc = 0x28f6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 8));
label_28f6c4:
    // 0x28f6c4: 0xafa500d8  sw          $a1, 0xD8($sp)
    ctx->pc = 0x28f6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 5));
label_28f6c8:
    // 0x28f6c8: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x28f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_28f6cc:
    // 0x28f6cc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x28f6ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28f6d0:
    // 0x28f6d0: 0x14480005  bne         $v0, $t0, . + 4 + (0x5 << 2)
label_28f6d4:
    if (ctx->pc == 0x28F6D4u) {
        ctx->pc = 0x28F6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F6D0u;
        // 0x28f6d4: 0xc6b40010  lwc1        $f20, 0x10($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F6D8u;
        goto label_28f6d8;
    }
    ctx->pc = 0x28F6D0u;
    {
        const bool branch_taken_0x28f6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x28F6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F6D0u;
        // 0x28f6d4: 0xc6b40010  lwc1        $f20, 0x10($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f6d0) {
            ctx->pc = 0x28F6E8u;
            goto label_28f6e8;
        }
    }
    ctx->pc = 0x28F6D8u;
label_28f6d8:
    // 0x28f6d8: 0xc09292a  jal         func_24A4A8
label_28f6dc:
    if (ctx->pc == 0x28F6DCu) {
        ctx->pc = 0x28F6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F6D8u;
        // 0x28f6dc: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F6E0u;
        goto label_28f6e0;
    }
    ctx->pc = 0x28F6D8u;
    SET_GPR_U32(ctx, 31, 0x28F6E0u);
    ctx->pc = 0x28F6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F6D8u;
    // 0x28f6dc: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x28F6D8u, 0x28F6E0u)) {
        return;
    }
    ctx->pc = 0x28F6E0u;
label_28f6e0:
    // 0x28f6e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_28f6e4:
    if (ctx->pc == 0x28F6E4u) {
        ctx->pc = 0x28F6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F6E0u;
        // 0x28f6e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F6E8u;
        goto label_28f6e8;
    }
    ctx->pc = 0x28F6E0u;
    {
        const bool branch_taken_0x28f6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F6E0u;
        // 0x28f6e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f6e0) {
            ctx->pc = 0x28F6ECu;
            goto label_28f6ec;
        }
    }
    ctx->pc = 0x28F6E8u;
label_28f6e8:
    // 0x28f6e8: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x28f6e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_28f6ec:
    // 0x28f6ec: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x28f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_28f6f0:
    // 0x28f6f0: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x28f6f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28f6f4:
    // 0x28f6f4: 0x144b0004  bne         $v0, $t3, . + 4 + (0x4 << 2)
label_28f6f8:
    if (ctx->pc == 0x28F6F8u) {
        ctx->pc = 0x28F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F6F4u;
        // 0x28f6f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F6FCu;
        goto label_28f6fc;
    }
    ctx->pc = 0x28F6F4u;
    {
        const bool branch_taken_0x28f6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        ctx->pc = 0x28F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F6F4u;
        // 0x28f6f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f6f4) {
            ctx->pc = 0x28F708u;
            goto label_28f708;
        }
    }
    ctx->pc = 0x28F6FCu;
label_28f6fc:
    // 0x28f6fc: 0xc09294c  jal         func_24A530
label_28f700:
    if (ctx->pc == 0x28F700u) {
        ctx->pc = 0x28F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F6FCu;
        // 0x28f700: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F704u;
        goto label_28f704;
    }
    ctx->pc = 0x28F6FCu;
    SET_GPR_U32(ctx, 31, 0x28F704u);
    ctx->pc = 0x28F700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F6FCu;
    // 0x28f700: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x28F6FCu, 0x28F704u)) {
        return;
    }
    ctx->pc = 0x28F704u;
label_28f704:
    // 0x28f704: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28f704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28f708:
    // 0x28f708: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x28f708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28f70c:
    // 0x28f70c: 0x2623fffd  addiu       $v1, $s1, -0x3
    ctx->pc = 0x28f70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967293));
label_28f710:
    // 0x28f710: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x28f710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_28f714:
    // 0x28f714: 0x2f11021  addu        $v0, $s7, $s1
    ctx->pc = 0x28f714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
label_28f718:
    // 0x28f718: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x28f718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_28f71c:
    // 0x28f71c: 0x2453ffff  addiu       $s3, $v0, -0x1
    ctx->pc = 0x28f71cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_28f720:
    // 0x28f720: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x28f720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_28f724:
    // 0x28f724: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28f724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28f728:
    // 0x28f728: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x28f728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_28f72c:
    // 0x28f72c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28f72cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28f730:
    // 0x28f730: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x28f730u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f734:
    // 0x28f734: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x28f734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28f738:
    // 0x28f738: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x28f738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_28f73c:
    // 0x28f73c: 0xc0a236a  jal         func_288DA8
label_28f740:
    if (ctx->pc == 0x28F740u) {
        ctx->pc = 0x28F740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F73Cu;
        // 0x28f740: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F744u;
        goto label_28f744;
    }
    ctx->pc = 0x28F73Cu;
    SET_GPR_U32(ctx, 31, 0x28F744u);
    ctx->pc = 0x28F740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F73Cu;
    // 0x28f740: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x288DA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288DA8u, 0x28F73Cu, 0x28F744u)) {
        return;
    }
    ctx->pc = 0x28F744u;
label_28f744:
    // 0x28f744: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x28f744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28f748:
    // 0x28f748: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x28f748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28f74c:
    // 0x28f74c: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x28f74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28f750:
    // 0x28f750: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x28f750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28f754:
    // 0x28f754: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x28f754u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_28f758:
    // 0x28f758: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x28f758u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_28f75c:
    // 0x28f75c: 0x4601b043  div.s       $f1, $f22, $f1
    ctx->pc = 0x28f75cu;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[22], ctx->f[1]);
label_28f760:
    // 0x28f760: 0x4600b003  div.s       $f0, $f22, $f0
    ctx->pc = 0x28f760u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[22], ctx->f[0]);
label_28f764:
    // 0x28f764: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x28f764u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_28f768:
    // 0x28f768: 0x122000a7  beqz        $s1, . + 4 + (0xA7 << 2)
label_28f76c:
    if (ctx->pc == 0x28F76Cu) {
        ctx->pc = 0x28F76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F768u;
        // 0x28f76c: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F770u;
        goto label_28f770;
    }
    ctx->pc = 0x28F768u;
    {
        const bool branch_taken_0x28f768 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F768u;
        // 0x28f76c: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f768) {
            ctx->pc = 0x28FA08u;
            goto label_28fa08;
        }
    }
    ctx->pc = 0x28F770u;
label_28f770:
    // 0x28f770: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x28f770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_28f774:
    // 0x28f774: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x28f774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_28f778:
    // 0x28f778: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x28f778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_28f77c:
    // 0x28f77c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28f77cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_28f780:
    // 0x28f780: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x28f780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_28f784:
    // 0x28f784: 0x0  nop
    ctx->pc = 0x28f784u;
    // NOP
label_28f788:
    // 0x28f788: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x28f788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28f78c:
    // 0x28f78c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x28f78cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_28f790:
    // 0x28f790: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x28f790u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_28f794:
    // 0x28f794: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x28f794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28f798:
    // 0x28f798: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x28f798u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_28f79c:
    // 0x28f79c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x28f79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_28f7a0:
    // 0x28f7a0: 0xc482fffc  lwc1        $f2, -0x4($a0)
    ctx->pc = 0x28f7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28f7a4:
    // 0x28f7a4: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x28f7a4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_28f7a8:
    // 0x28f7a8: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x28f7a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_28f7ac:
    // 0x28f7ac: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x28f7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28f7b0:
    // 0x28f7b0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x28f7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28f7b4:
    // 0x28f7b4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x28f7b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_28f7b8:
    // 0x28f7b8: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x28f7b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_28f7bc:
    // 0x28f7bc: 0xe4b50008  swc1        $f21, 0x8($a1)
    ctx->pc = 0x28f7bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_28f7c0:
    // 0x28f7c0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x28f7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28f7c4:
    // 0x28f7c4: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x28f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_28f7c8:
    // 0x28f7c8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x28f7c8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_28f7cc:
    // 0x28f7cc: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x28f7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_28f7d0:
    // 0x28f7d0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x28f7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28f7d4:
    // 0x28f7d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28f7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28f7d8:
    // 0x28f7d8: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x28f7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28f7dc:
    // 0x28f7dc: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x28f7dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_28f7e0:
    // 0x28f7e0: 0x460112c2  mul.s       $f11, $f2, $f1
    ctx->pc = 0x28f7e0u;
    ctx->f[11] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_28f7e4:
    // 0x28f7e4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x28f7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28f7e8:
    // 0x28f7e8: 0xe7ab0030  swc1        $f11, 0x30($sp)
    ctx->pc = 0x28f7e8u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_28f7ec:
    // 0x28f7ec: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x28f7ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_28f7f0:
    // 0x28f7f0: 0x46030302  mul.s       $f12, $f0, $f3
    ctx->pc = 0x28f7f0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_28f7f4:
    // 0x28f7f4: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
label_28f7f8:
    if (ctx->pc == 0x28F7F8u) {
        ctx->pc = 0x28F7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F7F4u;
        // 0x28f7f8: 0xe7ac0034  swc1        $f12, 0x34($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F7FCu;
        goto label_28f7fc;
    }
    ctx->pc = 0x28F7F4u;
    {
        const bool branch_taken_0x28f7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F7F4u;
        // 0x28f7f8: 0xe7ac0034  swc1        $f12, 0x34($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f7f4) {
            ctx->pc = 0x28F928u;
            goto label_28f928;
        }
    }
    ctx->pc = 0x28F7FCu;
label_28f7fc:
    // 0x28f7fc: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x28f7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28f800:
    // 0x28f800: 0xc641004c  lwc1        $f1, 0x4C($s2)
    ctx->pc = 0x28f800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28f804:
    // 0x28f804: 0xc6420050  lwc1        $f2, 0x50($s2)
    ctx->pc = 0x28f804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28f808:
    // 0x28f808: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x28f808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
label_28f80c:
    // 0x28f80c: 0xc6430054  lwc1        $f3, 0x54($s2)
    ctx->pc = 0x28f80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28f810:
    // 0x28f810: 0x460b0842  mul.s       $f1, $f1, $f11
    ctx->pc = 0x28f810u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
label_28f814:
    // 0x28f814: 0x460b1082  mul.s       $f2, $f2, $f11
    ctx->pc = 0x28f814u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
label_28f818:
    // 0x28f818: 0x460b18c2  mul.s       $f3, $f3, $f11
    ctx->pc = 0x28f818u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[11]);
label_28f81c:
    // 0x28f81c: 0xc6490030  lwc1        $f9, 0x30($s2)
    ctx->pc = 0x28f81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_28f820:
    // 0x28f820: 0xc64a0034  lwc1        $f10, 0x34($s2)
    ctx->pc = 0x28f820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_28f824:
    // 0x28f824: 0x46004a40  add.s       $f9, $f9, $f0
    ctx->pc = 0x28f824u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_28f828:
    // 0x28f828: 0xc6470038  lwc1        $f7, 0x38($s2)
    ctx->pc = 0x28f828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_28f82c:
    // 0x28f82c: 0xc648003c  lwc1        $f8, 0x3C($s2)
    ctx->pc = 0x28f82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_28f830:
    // 0x28f830: 0x46015280  add.s       $f10, $f10, $f1
    ctx->pc = 0x28f830u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[1]);
label_28f834:
    // 0x28f834: 0x460239c0  add.s       $f7, $f7, $f2
    ctx->pc = 0x28f834u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
label_28f838:
    // 0x28f838: 0xe7a90060  swc1        $f9, 0x60($sp)
    ctx->pc = 0x28f838u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_28f83c:
    // 0x28f83c: 0x46034200  add.s       $f8, $f8, $f3
    ctx->pc = 0x28f83cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[3]);
label_28f840:
    // 0x28f840: 0xe7aa0064  swc1        $f10, 0x64($sp)
    ctx->pc = 0x28f840u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_28f844:
    // 0x28f844: 0xe7a70068  swc1        $f7, 0x68($sp)
    ctx->pc = 0x28f844u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_28f848:
    // 0x28f848: 0xe7a8006c  swc1        $f8, 0x6C($sp)
    ctx->pc = 0x28f848u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_28f84c:
    // 0x28f84c: 0xc6430018  lwc1        $f3, 0x18($s2)
    ctx->pc = 0x28f84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28f850:
    // 0x28f850: 0xc645001c  lwc1        $f5, 0x1C($s2)
    ctx->pc = 0x28f850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_28f854:
    // 0x28f854: 0x460b18c2  mul.s       $f3, $f3, $f11
    ctx->pc = 0x28f854u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[11]);
label_28f858:
    // 0x28f858: 0xc6440020  lwc1        $f4, 0x20($s2)
    ctx->pc = 0x28f858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_28f85c:
    // 0x28f85c: 0xc6460024  lwc1        $f6, 0x24($s2)
    ctx->pc = 0x28f85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_28f860:
    // 0x28f860: 0x460b2942  mul.s       $f5, $f5, $f11
    ctx->pc = 0x28f860u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[11]);
label_28f864:
    // 0x28f864: 0x460b2102  mul.s       $f4, $f4, $f11
    ctx->pc = 0x28f864u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[11]);
label_28f868:
    // 0x28f868: 0x460b3182  mul.s       $f6, $f6, $f11
    ctx->pc = 0x28f868u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[11]);
label_28f86c:
    // 0x28f86c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x28f86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28f870:
    // 0x28f870: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x28f870u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_28f874:
    // 0x28f874: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x28f874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28f878:
    // 0x28f878: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x28f878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28f87c:
    // 0x28f87c: 0xc643000c  lwc1        $f3, 0xC($s2)
    ctx->pc = 0x28f87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28f880:
    // 0x28f880: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x28f880u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_28f884:
    // 0x28f884: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x28f884u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_28f888:
    // 0x28f888: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x28f888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_28f88c:
    // 0x28f88c: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x28f88cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
label_28f890:
    // 0x28f890: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x28f890u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_28f894:
    // 0x28f894: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x28f894u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_28f898:
    // 0x28f898: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x28f898u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_28f89c:
    // 0x28f89c: 0x46090001  sub.s       $f0, $f0, $f9
    ctx->pc = 0x28f89cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
label_28f8a0:
    // 0x28f8a0: 0x460a0841  sub.s       $f1, $f1, $f10
    ctx->pc = 0x28f8a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[10]);
label_28f8a4:
    // 0x28f8a4: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x28f8a4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_28f8a8:
    // 0x28f8a8: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x28f8a8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
label_28f8ac:
    // 0x28f8ac: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x28f8acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_28f8b0:
    // 0x28f8b0: 0x460c18c2  mul.s       $f3, $f3, $f12
    ctx->pc = 0x28f8b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
label_28f8b4:
    // 0x28f8b4: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x28f8b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
label_28f8b8:
    // 0x28f8b8: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x28f8b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
label_28f8bc:
    // 0x28f8bc: 0x46004a40  add.s       $f9, $f9, $f0
    ctx->pc = 0x28f8bcu;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_28f8c0:
    // 0x28f8c0: 0x46015280  add.s       $f10, $f10, $f1
    ctx->pc = 0x28f8c0u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[1]);
label_28f8c4:
    // 0x28f8c4: 0xe7a90080  swc1        $f9, 0x80($sp)
    ctx->pc = 0x28f8c4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_28f8c8:
    // 0x28f8c8: 0x460239c0  add.s       $f7, $f7, $f2
    ctx->pc = 0x28f8c8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
label_28f8cc:
    // 0x28f8cc: 0x46034200  add.s       $f8, $f8, $f3
    ctx->pc = 0x28f8ccu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[3]);
label_28f8d0:
    // 0x28f8d0: 0xe7aa0084  swc1        $f10, 0x84($sp)
    ctx->pc = 0x28f8d0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_28f8d4:
    // 0x28f8d4: 0xe7a70088  swc1        $f7, 0x88($sp)
    ctx->pc = 0x28f8d4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_28f8d8:
    // 0x28f8d8: 0xe7a8008c  swc1        $f8, 0x8C($sp)
    ctx->pc = 0x28f8d8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_28f8dc:
    // 0x28f8dc: 0x46004824  .word       0x46004824                   # cvt.w.s     $f0, $f9 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28f8dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[9]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_28f8e0:
    // 0x28f8e0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x28f8e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_28f8e4:
    // 0x28f8e4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x28f8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_28f8e8:
    // 0x28f8e8: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x28f8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_28f8ec:
    // 0x28f8ec: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x28f8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28f8f0:
    // 0x28f8f0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x28f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_28f8f4:
    // 0x28f8f4: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x28f8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_28f8f8:
    // 0x28f8f8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28f8f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_28f8fc:
    // 0x28f8fc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x28f8fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_28f900:
    // 0x28f900: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x28f900u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_28f904:
    // 0x28f904: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x28f904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28f908:
    // 0x28f908: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28f908u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_28f90c:
    // 0x28f90c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x28f90cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_28f910:
    // 0x28f910: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x28f910u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_28f914:
    // 0x28f914: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x28f914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28f918:
    // 0x28f918: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28f918u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_28f91c:
    // 0x28f91c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x28f91cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_28f920:
    // 0x28f920: 0x10000008  b           . + 4 + (0x8 << 2)
label_28f924:
    if (ctx->pc == 0x28F924u) {
        ctx->pc = 0x28F924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F920u;
        // 0x28f924: 0xa0620003  sb          $v0, 0x3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F928u;
        goto label_28f928;
    }
    ctx->pc = 0x28F920u;
    {
        const bool branch_taken_0x28f920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F920u;
        // 0x28f924: 0xa0620003  sb          $v0, 0x3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f920) {
            ctx->pc = 0x28F944u;
            goto label_28f944;
        }
    }
    ctx->pc = 0x28F928u;
label_28f928:
    // 0x28f928: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x28f928u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
label_28f92c:
    // 0x28f92c: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x28f92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_28f930:
    // 0x28f930: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x28f930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_28f934:
    // 0x28f934: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x28f934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_28f938:
    // 0x28f938: 0xa0670001  sb          $a3, 0x1($v1)
    ctx->pc = 0x28f938u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 7));
label_28f93c:
    // 0x28f93c: 0xa0670002  sb          $a3, 0x2($v1)
    ctx->pc = 0x28f93cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 7));
label_28f940:
    // 0x28f940: 0xa0670003  sb          $a3, 0x3($v1)
    ctx->pc = 0x28f940u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 7));
label_28f944:
    // 0x28f944: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x28f944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_28f948:
    // 0x28f948: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_28f94c:
    if (ctx->pc == 0x28F94Cu) {
        ctx->pc = 0x28F94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F948u;
        // 0x28f94c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F950u;
        goto label_28f950;
    }
    ctx->pc = 0x28F948u;
    {
        const bool branch_taken_0x28f948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F948u;
        // 0x28f94c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f948) {
            ctx->pc = 0x28F9E8u;
            goto label_28f9e8;
        }
    }
    ctx->pc = 0x28F950u;
label_28f950:
    // 0x28f950: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x28f950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28f954:
    // 0x28f954: 0xc6400058  lwc1        $f0, 0x58($s2)
    ctx->pc = 0x28f954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28f958:
    // 0x28f958: 0xc641005c  lwc1        $f1, 0x5C($s2)
    ctx->pc = 0x28f958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28f95c:
    // 0x28f95c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x28f95cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_28f960:
    // 0x28f960: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x28f960u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_28f964:
    // 0x28f964: 0xc6440040  lwc1        $f4, 0x40($s2)
    ctx->pc = 0x28f964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_28f968:
    // 0x28f968: 0xc6450044  lwc1        $f5, 0x44($s2)
    ctx->pc = 0x28f968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_28f96c:
    // 0x28f96c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x28f96cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_28f970:
    // 0x28f970: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x28f970u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_28f974:
    // 0x28f974: 0xe7a40070  swc1        $f4, 0x70($sp)
    ctx->pc = 0x28f974u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_28f978:
    // 0x28f978: 0xe7a50074  swc1        $f5, 0x74($sp)
    ctx->pc = 0x28f978u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_28f97c:
    // 0x28f97c: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x28f97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28f980:
    // 0x28f980: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x28f980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28f984:
    // 0x28f984: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x28f984u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_28f988:
    // 0x28f988: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x28f988u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_28f98c:
    // 0x28f98c: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x28f98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28f990:
    // 0x28f990: 0xc6420014  lwc1        $f2, 0x14($s2)
    ctx->pc = 0x28f990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28f994:
    // 0x28f994: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x28f994u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28f998:
    // 0x28f998: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x28f998u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_28f99c:
    // 0x28f99c: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x28f99cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_28f9a0:
    // 0x28f9a0: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x28f9a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_28f9a4:
    // 0x28f9a4: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x28f9a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_28f9a8:
    // 0x28f9a8: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x28f9a8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
label_28f9ac:
    // 0x28f9ac: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x28f9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28f9b0:
    // 0x28f9b0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x28f9b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_28f9b4:
    // 0x28f9b4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28f9b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_28f9b8:
    // 0x28f9b8: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x28f9b8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_28f9bc:
    // 0x28f9bc: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x28f9bcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_28f9c0:
    // 0x28f9c0: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x28f9c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_28f9c4:
    // 0x28f9c4: 0xe7a50094  swc1        $f5, 0x94($sp)
    ctx->pc = 0x28f9c4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_28f9c8:
    // 0x28f9c8: 0xe4c40000  swc1        $f4, 0x0($a2)
    ctx->pc = 0x28f9c8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_28f9cc:
    // 0x28f9cc: 0x8fa800d8  lw          $t0, 0xD8($sp)
    ctx->pc = 0x28f9ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_28f9d0:
    // 0x28f9d0: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x28f9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28f9d4:
    // 0x28f9d4: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x28f9d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_28f9d8:
    // 0x28f9d8: 0xafa800d8  sw          $t0, 0xD8($sp)
    ctx->pc = 0x28f9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 8));
label_28f9dc:
    // 0x28f9dc: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x28f9dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_28f9e0:
    // 0x28f9e0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x28f9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_28f9e4:
    // 0x28f9e4: 0x0  nop
    ctx->pc = 0x28f9e4u;
    // NOP
label_28f9e8:
    // 0x28f9e8: 0x8fab00d0  lw          $t3, 0xD0($sp)
    ctx->pc = 0x28f9e8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_28f9ec:
    // 0x28f9ec: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x28f9ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_28f9f0:
    // 0x28f9f0: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x28f9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_28f9f4:
    // 0x28f9f4: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x28f9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_28f9f8:
    // 0x28f9f8: 0x256b000c  addiu       $t3, $t3, 0xC
    ctx->pc = 0x28f9f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12));
label_28f9fc:
    // 0x28f9fc: 0x2d1102b  sltu        $v0, $s6, $s1
    ctx->pc = 0x28f9fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_28fa00:
    // 0x28fa00: 0x1440ff61  bnez        $v0, . + 4 + (-0x9F << 2)
label_28fa04:
    if (ctx->pc == 0x28FA04u) {
        ctx->pc = 0x28FA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA00u;
        // 0x28fa04: 0xafab00d0  sw          $t3, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FA08u;
        goto label_28fa08;
    }
    ctx->pc = 0x28FA00u;
    {
        const bool branch_taken_0x28fa00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA00u;
        // 0x28fa04: 0xafab00d0  sw          $t3, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa00) {
            ctx->pc = 0x28F788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f788;
        }
    }
    ctx->pc = 0x28FA08u;
label_28fa08:
    // 0x28fa08: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x28fa08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_28fa0c:
    // 0x28fa0c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x28fa0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_28fa10:
    // 0x28fa10: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x28fa10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_28fa14:
    // 0x28fa14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28fa14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28fa18:
    // 0x28fa18: 0xafb300e4  sw          $s3, 0xE4($sp)
    ctx->pc = 0x28fa18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 19));
label_28fa1c:
    // 0x28fa1c: 0xc0a3a16  jal         func_28E858
label_28fa20:
    if (ctx->pc == 0x28FA20u) {
        ctx->pc = 0x28FA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA1Cu;
        // 0x28fa20: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FA24u;
        goto label_28fa24;
    }
    ctx->pc = 0x28FA1Cu;
    SET_GPR_U32(ctx, 31, 0x28FA24u);
    ctx->pc = 0x28FA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FA1Cu;
    // 0x28fa20: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28E858u, 0x28FA1Cu, 0x28FA24u)) {
        return;
    }
    ctx->pc = 0x28FA24u;
label_28fa24:
    // 0x28fa24: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x28fa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_28fa28:
    // 0x28fa28: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_28fa2c:
    if (ctx->pc == 0x28FA2Cu) {
        ctx->pc = 0x28FA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA28u;
        // 0x28fa2c: 0x8fb000dc  lw          $s0, 0xDC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FA30u;
        goto label_28fa30;
    }
    ctx->pc = 0x28FA28u;
    {
        const bool branch_taken_0x28fa28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA28u;
        // 0x28fa2c: 0x8fb000dc  lw          $s0, 0xDC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa28) {
            ctx->pc = 0x28FB54u;
            goto label_28fb54;
        }
    }
    ctx->pc = 0x28FA30u;
label_28fa30:
    // 0x28fa30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28fa30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28fa34:
    // 0x28fa34: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x28fa34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_28fa38:
    // 0x28fa38: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
label_28fa3c:
    if (ctx->pc == 0x28FA3Cu) {
        ctx->pc = 0x28FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA38u;
        // 0x28fa3c: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FA40u;
        goto label_28fa40;
    }
    ctx->pc = 0x28FA38u;
    {
        const bool branch_taken_0x28fa38 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x28FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA38u;
        // 0x28fa3c: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa38) {
            ctx->pc = 0x28FA48u;
            goto label_28fa48;
        }
    }
    ctx->pc = 0x28FA40u;
label_28fa40:
    // 0x28fa40: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_28fa44:
    if (ctx->pc == 0x28FA44u) {
        ctx->pc = 0x28FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA40u;
        // 0x28fa44: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FA48u;
        goto label_28fa48;
    }
    ctx->pc = 0x28FA40u;
    {
        const bool branch_taken_0x28fa40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fa40) {
            ctx->pc = 0x28FA44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28FA40u;
            // 0x28fa44: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FAA4u;
            goto label_28faa4;
        }
    }
    ctx->pc = 0x28FA48u;
label_28fa48:
    // 0x28fa48: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x28fa48u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_28fa4c:
    // 0x28fa4c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x28fa4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_28fa50:
    // 0x28fa50: 0x96070004  lhu         $a3, 0x4($s0)
    ctx->pc = 0x28fa50u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_28fa54:
    // 0x28fa54: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x28fa54u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28fa58:
    // 0x28fa58: 0x96080008  lhu         $t0, 0x8($s0)
    ctx->pc = 0x28fa58u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_28fa5c:
    // 0x28fa5c: 0xd73021  addu        $a2, $a2, $s7
    ctx->pc = 0x28fa5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
label_28fa60:
    // 0x28fa60: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x28fa60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_28fa64:
    // 0x28fa64: 0xf73821  addu        $a3, $a3, $s7
    ctx->pc = 0x28fa64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 23)));
label_28fa68:
    // 0x28fa68: 0x1174021  addu        $t0, $t0, $s7
    ctx->pc = 0x28fa68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 23)));
label_28fa6c:
    // 0x28fa6c: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x28fa6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_28fa70:
    // 0x28fa70: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x28fa70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_28fa74:
    // 0x28fa74: 0xc095930  jal         func_2564C0
label_28fa78:
    if (ctx->pc == 0x28FA78u) {
        ctx->pc = 0x28FA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA74u;
        // 0x28fa78: 0x3108ffff  andi        $t0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FA7Cu;
        goto label_28fa7c;
    }
    ctx->pc = 0x28FA74u;
    SET_GPR_U32(ctx, 31, 0x28FA7Cu);
    ctx->pc = 0x28FA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FA74u;
    // 0x28fa78: 0x3108ffff  andi        $t0, $t0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2564C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2564C0u, 0x28FA74u, 0x28FA7Cu)) {
        return;
    }
    ctx->pc = 0x28FA7Cu;
label_28fa7c:
    // 0x28fa7c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x28fa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_28fa80:
    // 0x28fa80: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x28fa80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_28fa84:
    // 0x28fa84: 0x8fa600c4  lw          $a2, 0xC4($sp)
    ctx->pc = 0x28fa84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_28fa88:
    // 0x28fa88: 0xc095936  jal         func_2564D8
label_28fa8c:
    if (ctx->pc == 0x28FA8Cu) {
        ctx->pc = 0x28FA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA88u;
        // 0x28fa8c: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FA90u;
        goto label_28fa90;
    }
    ctx->pc = 0x28FA88u;
    SET_GPR_U32(ctx, 31, 0x28FA90u);
    ctx->pc = 0x28FA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FA88u;
    // 0x28fa8c: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2564D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2564D8u, 0x28FA88u, 0x28FA90u)) {
        return;
    }
    ctx->pc = 0x28FA90u;
label_28fa90:
    // 0x28fa90: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x28fa90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_28fa94:
    // 0x28fa94: 0x2c5102b  sltu        $v0, $s6, $a1
    ctx->pc = 0x28fa94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_28fa98:
    // 0x28fa98: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_28fa9c:
    if (ctx->pc == 0x28FA9Cu) {
        ctx->pc = 0x28FA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA98u;
        // 0x28fa9c: 0x2603000c  addiu       $v1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FAA0u;
        goto label_28faa0;
    }
    ctx->pc = 0x28FA98u;
    {
        const bool branch_taken_0x28fa98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA98u;
        // 0x28fa9c: 0x2603000c  addiu       $v1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa98) {
            ctx->pc = 0x28FB54u;
            goto label_28fb54;
        }
    }
    ctx->pc = 0x28FAA0u;
label_28faa0:
    // 0x28faa0: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x28faa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28faa4:
    // 0x28faa4: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x28faa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28faa8:
    // 0x28faa8: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x28faa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28faac:
    // 0x28faac: 0x96660000  lhu         $a2, 0x0($s3)
    ctx->pc = 0x28faacu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_28fab0:
    // 0x28fab0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x28fab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_28fab4:
    // 0x28fab4: 0x96870004  lhu         $a3, 0x4($s4)
    ctx->pc = 0x28fab4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_28fab8:
    // 0x28fab8: 0x27d00008  addiu       $s0, $fp, 0x8
    ctx->pc = 0x28fab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_28fabc:
    // 0x28fabc: 0x96280008  lhu         $t0, 0x8($s1)
    ctx->pc = 0x28fabcu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_28fac0:
    // 0x28fac0: 0xd73021  addu        $a2, $a2, $s7
    ctx->pc = 0x28fac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
label_28fac4:
    // 0x28fac4: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x28fac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_28fac8:
    // 0x28fac8: 0xf73821  addu        $a3, $a3, $s7
    ctx->pc = 0x28fac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 23)));
label_28facc:
    // 0x28facc: 0x1174021  addu        $t0, $t0, $s7
    ctx->pc = 0x28faccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 23)));
label_28fad0:
    // 0x28fad0: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x28fad0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_28fad4:
    // 0x28fad4: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x28fad4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_28fad8:
    // 0x28fad8: 0xc095930  jal         func_2564C0
label_28fadc:
    if (ctx->pc == 0x28FADCu) {
        ctx->pc = 0x28FADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FAD8u;
        // 0x28fadc: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FAE0u;
        goto label_28fae0;
    }
    ctx->pc = 0x28FAD8u;
    SET_GPR_U32(ctx, 31, 0x28FAE0u);
    ctx->pc = 0x28FADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FAD8u;
    // 0x28fadc: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2564C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2564C0u, 0x28FAD8u, 0x28FAE0u)) {
        return;
    }
    ctx->pc = 0x28FAE0u;
label_28fae0:
    // 0x28fae0: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x28fae0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
label_28fae4:
    // 0x28fae4: 0x8fa600c4  lw          $a2, 0xC4($sp)
    ctx->pc = 0x28fae4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_28fae8:
    // 0x28fae8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x28fae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_28faec:
    // 0x28faec: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x28faecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_28faf0:
    // 0x28faf0: 0xc095936  jal         func_2564D8
label_28faf4:
    if (ctx->pc == 0x28FAF4u) {
        ctx->pc = 0x28FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FAF0u;
        // 0x28faf4: 0x27de0010  addiu       $fp, $fp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FAF8u;
        goto label_28faf8;
    }
    ctx->pc = 0x28FAF0u;
    SET_GPR_U32(ctx, 31, 0x28FAF8u);
    ctx->pc = 0x28FAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FAF0u;
    // 0x28faf4: 0x27de0010  addiu       $fp, $fp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2564D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2564D8u, 0x28FAF0u, 0x28FAF8u)) {
        return;
    }
    ctx->pc = 0x28FAF8u;
label_28faf8:
    // 0x28faf8: 0x9666000c  lhu         $a2, 0xC($s3)
    ctx->pc = 0x28faf8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
label_28fafc:
    // 0x28fafc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28fafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28fb00:
    // 0x28fb00: 0x96870010  lhu         $a3, 0x10($s4)
    ctx->pc = 0x28fb00u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
label_28fb04:
    // 0x28fb04: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x28fb04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_28fb08:
    // 0x28fb08: 0x96280014  lhu         $t0, 0x14($s1)
    ctx->pc = 0x28fb08u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_28fb0c:
    // 0x28fb0c: 0xd73021  addu        $a2, $a2, $s7
    ctx->pc = 0x28fb0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
label_28fb10:
    // 0x28fb10: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x28fb10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_28fb14:
    // 0x28fb14: 0xf73821  addu        $a3, $a3, $s7
    ctx->pc = 0x28fb14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 23)));
label_28fb18:
    // 0x28fb18: 0x1174021  addu        $t0, $t0, $s7
    ctx->pc = 0x28fb18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 23)));
label_28fb1c:
    // 0x28fb1c: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x28fb1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_28fb20:
    // 0x28fb20: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x28fb20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_28fb24:
    // 0x28fb24: 0xc095930  jal         func_2564C0
label_28fb28:
    if (ctx->pc == 0x28FB28u) {
        ctx->pc = 0x28FB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB24u;
        // 0x28fb28: 0x3108ffff  andi        $t0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FB2Cu;
        goto label_28fb2c;
    }
    ctx->pc = 0x28FB24u;
    SET_GPR_U32(ctx, 31, 0x28FB2Cu);
    ctx->pc = 0x28FB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FB24u;
    // 0x28fb28: 0x3108ffff  andi        $t0, $t0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2564C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2564C0u, 0x28FB24u, 0x28FB2Cu)) {
        return;
    }
    ctx->pc = 0x28FB2Cu;
label_28fb2c:
    // 0x28fb2c: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x28fb2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_28fb30:
    // 0x28fb30: 0x8fa600c4  lw          $a2, 0xC4($sp)
    ctx->pc = 0x28fb30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_28fb34:
    // 0x28fb34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28fb34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28fb38:
    // 0x28fb38: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x28fb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_28fb3c:
    // 0x28fb3c: 0xc095936  jal         func_2564D8
label_28fb40:
    if (ctx->pc == 0x28FB40u) {
        ctx->pc = 0x28FB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB3Cu;
        // 0x28fb40: 0x26940018  addiu       $s4, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FB44u;
        goto label_28fb44;
    }
    ctx->pc = 0x28FB3Cu;
    SET_GPR_U32(ctx, 31, 0x28FB44u);
    ctx->pc = 0x28FB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FB3Cu;
    // 0x28fb40: 0x26940018  addiu       $s4, $s4, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2564D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2564D8u, 0x28FB3Cu, 0x28FB44u)) {
        return;
    }
    ctx->pc = 0x28FB44u;
label_28fb44:
    // 0x28fb44: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x28fb44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_28fb48:
    // 0x28fb48: 0x2c6102b  sltu        $v0, $s6, $a2
    ctx->pc = 0x28fb48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_28fb4c:
    // 0x28fb4c: 0x5440ffd8  bnel        $v0, $zero, . + 4 + (-0x28 << 2)
label_28fb50:
    if (ctx->pc == 0x28FB50u) {
        ctx->pc = 0x28FB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB4Cu;
        // 0x28fb50: 0x96660000  lhu         $a2, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FB54u;
        goto label_28fb54;
    }
    ctx->pc = 0x28FB4Cu;
    {
        const bool branch_taken_0x28fb4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28fb4c) {
            ctx->pc = 0x28FB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28FB4Cu;
            // 0x28fb50: 0x96660000  lhu         $a2, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28fab0;
        }
    }
    ctx->pc = 0x28FB54u;
label_28fb54:
    // 0x28fb54: 0x8fa800b4  lw          $t0, 0xB4($sp)
    ctx->pc = 0x28fb54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_28fb58:
    // 0x28fb58: 0x8eb50014  lw          $s5, 0x14($s5)
    ctx->pc = 0x28fb58u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_28fb5c:
    // 0x28fb5c: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x28fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_28fb60:
    // 0x28fb60: 0x16a2fed9  bne         $s5, $v0, . + 4 + (-0x127 << 2)
label_28fb64:
    if (ctx->pc == 0x28FB64u) {
        ctx->pc = 0x28FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB60u;
        // 0x28fb64: 0x8fb700e4  lw          $s7, 0xE4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FB68u;
        goto label_28fb68;
    }
    ctx->pc = 0x28FB60u;
    {
        const bool branch_taken_0x28fb60 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x28FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB60u;
        // 0x28fb64: 0x8fb700e4  lw          $s7, 0xE4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fb60) {
            ctx->pc = 0x28F6C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f6c8;
        }
    }
    ctx->pc = 0x28FB68u;
label_28fb68:
    // 0x28fb68: 0xc095f48  jal         func_257D20
label_28fb6c:
    if (ctx->pc == 0x28FB6Cu) {
        ctx->pc = 0x28FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB68u;
        // 0x28fb6c: 0x8fa400c4  lw          $a0, 0xC4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FB70u;
        goto label_28fb70;
    }
    ctx->pc = 0x28FB68u;
    SET_GPR_U32(ctx, 31, 0x28FB70u);
    ctx->pc = 0x28FB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FB68u;
    // 0x28fb6c: 0x8fa400c4  lw          $a0, 0xC4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257D20u, 0x28FB68u, 0x28FB70u)) {
        return;
    }
    ctx->pc = 0x28FB70u;
label_28fb70:
    // 0x28fb70: 0x8fab00bc  lw          $t3, 0xBC($sp)
    ctx->pc = 0x28fb70u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_28fb74:
    // 0x28fb74: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x28fb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_28fb78:
    // 0x28fb78: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x28fb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_28fb7c:
    // 0x28fb7c: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x28fb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_28fb80:
    // 0x28fb80: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x28fb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_28fb84:
    // 0x28fb84: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x28fb84u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
label_28fb88:
    // 0x28fb88: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x28fb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_28fb8c:
    // 0x28fb8c: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x28fb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_28fb90:
    // 0x28fb90: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x28fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28fb94:
    // 0x28fb94: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x28fb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_28fb98:
    // 0x28fb98: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x28fb98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_28fb9c:
    // 0x28fb9c: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x28fb9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_28fba0:
    // 0x28fba0: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x28fba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_28fba4:
    // 0x28fba4: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x28fba4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_28fba8:
    // 0x28fba8: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x28fba8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_28fbac:
    // 0x28fbac: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x28fbacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_28fbb0:
    // 0x28fbb0: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x28fbb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_28fbb4:
    // 0x28fbb4: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x28fbb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_28fbb8:
    // 0x28fbb8: 0x7bb70110  lq          $s7, 0x110($sp)
    ctx->pc = 0x28fbb8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_28fbbc:
    // 0x28fbbc: 0x7bbe0100  lq          $fp, 0x100($sp)
    ctx->pc = 0x28fbbcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_28fbc0:
    // 0x28fbc0: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x28fbc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_28fbc4:
    // 0x28fbc4: 0xc7b601a0  lwc1        $f22, 0x1A0($sp)
    ctx->pc = 0x28fbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_28fbc8:
    // 0x28fbc8: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x28fbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_28fbcc:
    // 0x28fbcc: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x28fbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_28fbd0:
    // 0x28fbd0: 0x3e00008  jr          $ra
label_28fbd4:
    if (ctx->pc == 0x28FBD4u) {
        ctx->pc = 0x28FBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FBD0u;
        // 0x28fbd4: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FBD8u;
        goto label_fallthrough_0x28fbd0;
    }
    ctx->pc = 0x28FBD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FBD0u;
        // 0x28fbd4: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FBD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28fbd0:
    ctx->pc = 0x28FBD8u;
}
