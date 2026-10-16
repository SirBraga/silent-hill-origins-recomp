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

// Function: sub_002CC3E8
// Address: 0x2cc3e8 - 0x2ccd68
void sub_002CC3E8_0x2cc3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC3E8_0x2cc3e8");
#endif

    switch (ctx->pc) {
        case 0x2cc3e8u: goto label_2cc3e8;
        case 0x2cc3ecu: goto label_2cc3ec;
        case 0x2cc3f0u: goto label_2cc3f0;
        case 0x2cc3f4u: goto label_2cc3f4;
        case 0x2cc3f8u: goto label_2cc3f8;
        case 0x2cc3fcu: goto label_2cc3fc;
        case 0x2cc400u: goto label_2cc400;
        case 0x2cc404u: goto label_2cc404;
        case 0x2cc408u: goto label_2cc408;
        case 0x2cc40cu: goto label_2cc40c;
        case 0x2cc410u: goto label_2cc410;
        case 0x2cc414u: goto label_2cc414;
        case 0x2cc418u: goto label_2cc418;
        case 0x2cc41cu: goto label_2cc41c;
        case 0x2cc420u: goto label_2cc420;
        case 0x2cc424u: goto label_2cc424;
        case 0x2cc428u: goto label_2cc428;
        case 0x2cc42cu: goto label_2cc42c;
        case 0x2cc430u: goto label_2cc430;
        case 0x2cc434u: goto label_2cc434;
        case 0x2cc438u: goto label_2cc438;
        case 0x2cc43cu: goto label_2cc43c;
        case 0x2cc440u: goto label_2cc440;
        case 0x2cc444u: goto label_2cc444;
        case 0x2cc448u: goto label_2cc448;
        case 0x2cc44cu: goto label_2cc44c;
        case 0x2cc450u: goto label_2cc450;
        case 0x2cc454u: goto label_2cc454;
        case 0x2cc458u: goto label_2cc458;
        case 0x2cc45cu: goto label_2cc45c;
        case 0x2cc460u: goto label_2cc460;
        case 0x2cc464u: goto label_2cc464;
        case 0x2cc468u: goto label_2cc468;
        case 0x2cc46cu: goto label_2cc46c;
        case 0x2cc470u: goto label_2cc470;
        case 0x2cc474u: goto label_2cc474;
        case 0x2cc478u: goto label_2cc478;
        case 0x2cc47cu: goto label_2cc47c;
        case 0x2cc480u: goto label_2cc480;
        case 0x2cc484u: goto label_2cc484;
        case 0x2cc488u: goto label_2cc488;
        case 0x2cc48cu: goto label_2cc48c;
        case 0x2cc490u: goto label_2cc490;
        case 0x2cc494u: goto label_2cc494;
        case 0x2cc498u: goto label_2cc498;
        case 0x2cc49cu: goto label_2cc49c;
        case 0x2cc4a0u: goto label_2cc4a0;
        case 0x2cc4a4u: goto label_2cc4a4;
        case 0x2cc4a8u: goto label_2cc4a8;
        case 0x2cc4acu: goto label_2cc4ac;
        case 0x2cc4b0u: goto label_2cc4b0;
        case 0x2cc4b4u: goto label_2cc4b4;
        case 0x2cc4b8u: goto label_2cc4b8;
        case 0x2cc4bcu: goto label_2cc4bc;
        case 0x2cc4c0u: goto label_2cc4c0;
        case 0x2cc4c4u: goto label_2cc4c4;
        case 0x2cc4c8u: goto label_2cc4c8;
        case 0x2cc4ccu: goto label_2cc4cc;
        case 0x2cc4d0u: goto label_2cc4d0;
        case 0x2cc4d4u: goto label_2cc4d4;
        case 0x2cc4d8u: goto label_2cc4d8;
        case 0x2cc4dcu: goto label_2cc4dc;
        case 0x2cc4e0u: goto label_2cc4e0;
        case 0x2cc4e4u: goto label_2cc4e4;
        case 0x2cc4e8u: goto label_2cc4e8;
        case 0x2cc4ecu: goto label_2cc4ec;
        case 0x2cc4f0u: goto label_2cc4f0;
        case 0x2cc4f4u: goto label_2cc4f4;
        case 0x2cc4f8u: goto label_2cc4f8;
        case 0x2cc4fcu: goto label_2cc4fc;
        case 0x2cc500u: goto label_2cc500;
        case 0x2cc504u: goto label_2cc504;
        case 0x2cc508u: goto label_2cc508;
        case 0x2cc50cu: goto label_2cc50c;
        case 0x2cc510u: goto label_2cc510;
        case 0x2cc514u: goto label_2cc514;
        case 0x2cc518u: goto label_2cc518;
        case 0x2cc51cu: goto label_2cc51c;
        case 0x2cc520u: goto label_2cc520;
        case 0x2cc524u: goto label_2cc524;
        case 0x2cc528u: goto label_2cc528;
        case 0x2cc52cu: goto label_2cc52c;
        case 0x2cc530u: goto label_2cc530;
        case 0x2cc534u: goto label_2cc534;
        case 0x2cc538u: goto label_2cc538;
        case 0x2cc53cu: goto label_2cc53c;
        case 0x2cc540u: goto label_2cc540;
        case 0x2cc544u: goto label_2cc544;
        case 0x2cc548u: goto label_2cc548;
        case 0x2cc54cu: goto label_2cc54c;
        case 0x2cc550u: goto label_2cc550;
        case 0x2cc554u: goto label_2cc554;
        case 0x2cc558u: goto label_2cc558;
        case 0x2cc55cu: goto label_2cc55c;
        case 0x2cc560u: goto label_2cc560;
        case 0x2cc564u: goto label_2cc564;
        case 0x2cc568u: goto label_2cc568;
        case 0x2cc56cu: goto label_2cc56c;
        case 0x2cc570u: goto label_2cc570;
        case 0x2cc574u: goto label_2cc574;
        case 0x2cc578u: goto label_2cc578;
        case 0x2cc57cu: goto label_2cc57c;
        case 0x2cc580u: goto label_2cc580;
        case 0x2cc584u: goto label_2cc584;
        case 0x2cc588u: goto label_2cc588;
        case 0x2cc58cu: goto label_2cc58c;
        case 0x2cc590u: goto label_2cc590;
        case 0x2cc594u: goto label_2cc594;
        case 0x2cc598u: goto label_2cc598;
        case 0x2cc59cu: goto label_2cc59c;
        case 0x2cc5a0u: goto label_2cc5a0;
        case 0x2cc5a4u: goto label_2cc5a4;
        case 0x2cc5a8u: goto label_2cc5a8;
        case 0x2cc5acu: goto label_2cc5ac;
        case 0x2cc5b0u: goto label_2cc5b0;
        case 0x2cc5b4u: goto label_2cc5b4;
        case 0x2cc5b8u: goto label_2cc5b8;
        case 0x2cc5bcu: goto label_2cc5bc;
        case 0x2cc5c0u: goto label_2cc5c0;
        case 0x2cc5c4u: goto label_2cc5c4;
        case 0x2cc5c8u: goto label_2cc5c8;
        case 0x2cc5ccu: goto label_2cc5cc;
        case 0x2cc5d0u: goto label_2cc5d0;
        case 0x2cc5d4u: goto label_2cc5d4;
        case 0x2cc5d8u: goto label_2cc5d8;
        case 0x2cc5dcu: goto label_2cc5dc;
        case 0x2cc5e0u: goto label_2cc5e0;
        case 0x2cc5e4u: goto label_2cc5e4;
        case 0x2cc5e8u: goto label_2cc5e8;
        case 0x2cc5ecu: goto label_2cc5ec;
        case 0x2cc5f0u: goto label_2cc5f0;
        case 0x2cc5f4u: goto label_2cc5f4;
        case 0x2cc5f8u: goto label_2cc5f8;
        case 0x2cc5fcu: goto label_2cc5fc;
        case 0x2cc600u: goto label_2cc600;
        case 0x2cc604u: goto label_2cc604;
        case 0x2cc608u: goto label_2cc608;
        case 0x2cc60cu: goto label_2cc60c;
        case 0x2cc610u: goto label_2cc610;
        case 0x2cc614u: goto label_2cc614;
        case 0x2cc618u: goto label_2cc618;
        case 0x2cc61cu: goto label_2cc61c;
        case 0x2cc620u: goto label_2cc620;
        case 0x2cc624u: goto label_2cc624;
        case 0x2cc628u: goto label_2cc628;
        case 0x2cc62cu: goto label_2cc62c;
        case 0x2cc630u: goto label_2cc630;
        case 0x2cc634u: goto label_2cc634;
        case 0x2cc638u: goto label_2cc638;
        case 0x2cc63cu: goto label_2cc63c;
        case 0x2cc640u: goto label_2cc640;
        case 0x2cc644u: goto label_2cc644;
        case 0x2cc648u: goto label_2cc648;
        case 0x2cc64cu: goto label_2cc64c;
        case 0x2cc650u: goto label_2cc650;
        case 0x2cc654u: goto label_2cc654;
        case 0x2cc658u: goto label_2cc658;
        case 0x2cc65cu: goto label_2cc65c;
        case 0x2cc660u: goto label_2cc660;
        case 0x2cc664u: goto label_2cc664;
        case 0x2cc668u: goto label_2cc668;
        case 0x2cc66cu: goto label_2cc66c;
        case 0x2cc670u: goto label_2cc670;
        case 0x2cc674u: goto label_2cc674;
        case 0x2cc678u: goto label_2cc678;
        case 0x2cc67cu: goto label_2cc67c;
        case 0x2cc680u: goto label_2cc680;
        case 0x2cc684u: goto label_2cc684;
        case 0x2cc688u: goto label_2cc688;
        case 0x2cc68cu: goto label_2cc68c;
        case 0x2cc690u: goto label_2cc690;
        case 0x2cc694u: goto label_2cc694;
        case 0x2cc698u: goto label_2cc698;
        case 0x2cc69cu: goto label_2cc69c;
        case 0x2cc6a0u: goto label_2cc6a0;
        case 0x2cc6a4u: goto label_2cc6a4;
        case 0x2cc6a8u: goto label_2cc6a8;
        case 0x2cc6acu: goto label_2cc6ac;
        case 0x2cc6b0u: goto label_2cc6b0;
        case 0x2cc6b4u: goto label_2cc6b4;
        case 0x2cc6b8u: goto label_2cc6b8;
        case 0x2cc6bcu: goto label_2cc6bc;
        case 0x2cc6c0u: goto label_2cc6c0;
        case 0x2cc6c4u: goto label_2cc6c4;
        case 0x2cc6c8u: goto label_2cc6c8;
        case 0x2cc6ccu: goto label_2cc6cc;
        case 0x2cc6d0u: goto label_2cc6d0;
        case 0x2cc6d4u: goto label_2cc6d4;
        case 0x2cc6d8u: goto label_2cc6d8;
        case 0x2cc6dcu: goto label_2cc6dc;
        case 0x2cc6e0u: goto label_2cc6e0;
        case 0x2cc6e4u: goto label_2cc6e4;
        case 0x2cc6e8u: goto label_2cc6e8;
        case 0x2cc6ecu: goto label_2cc6ec;
        case 0x2cc6f0u: goto label_2cc6f0;
        case 0x2cc6f4u: goto label_2cc6f4;
        case 0x2cc6f8u: goto label_2cc6f8;
        case 0x2cc6fcu: goto label_2cc6fc;
        case 0x2cc700u: goto label_2cc700;
        case 0x2cc704u: goto label_2cc704;
        case 0x2cc708u: goto label_2cc708;
        case 0x2cc70cu: goto label_2cc70c;
        case 0x2cc710u: goto label_2cc710;
        case 0x2cc714u: goto label_2cc714;
        case 0x2cc718u: goto label_2cc718;
        case 0x2cc71cu: goto label_2cc71c;
        case 0x2cc720u: goto label_2cc720;
        case 0x2cc724u: goto label_2cc724;
        case 0x2cc728u: goto label_2cc728;
        case 0x2cc72cu: goto label_2cc72c;
        case 0x2cc730u: goto label_2cc730;
        case 0x2cc734u: goto label_2cc734;
        case 0x2cc738u: goto label_2cc738;
        case 0x2cc73cu: goto label_2cc73c;
        case 0x2cc740u: goto label_2cc740;
        case 0x2cc744u: goto label_2cc744;
        case 0x2cc748u: goto label_2cc748;
        case 0x2cc74cu: goto label_2cc74c;
        case 0x2cc750u: goto label_2cc750;
        case 0x2cc754u: goto label_2cc754;
        case 0x2cc758u: goto label_2cc758;
        case 0x2cc75cu: goto label_2cc75c;
        case 0x2cc760u: goto label_2cc760;
        case 0x2cc764u: goto label_2cc764;
        case 0x2cc768u: goto label_2cc768;
        case 0x2cc76cu: goto label_2cc76c;
        case 0x2cc770u: goto label_2cc770;
        case 0x2cc774u: goto label_2cc774;
        case 0x2cc778u: goto label_2cc778;
        case 0x2cc77cu: goto label_2cc77c;
        case 0x2cc780u: goto label_2cc780;
        case 0x2cc784u: goto label_2cc784;
        case 0x2cc788u: goto label_2cc788;
        case 0x2cc78cu: goto label_2cc78c;
        case 0x2cc790u: goto label_2cc790;
        case 0x2cc794u: goto label_2cc794;
        case 0x2cc798u: goto label_2cc798;
        case 0x2cc79cu: goto label_2cc79c;
        case 0x2cc7a0u: goto label_2cc7a0;
        case 0x2cc7a4u: goto label_2cc7a4;
        case 0x2cc7a8u: goto label_2cc7a8;
        case 0x2cc7acu: goto label_2cc7ac;
        case 0x2cc7b0u: goto label_2cc7b0;
        case 0x2cc7b4u: goto label_2cc7b4;
        case 0x2cc7b8u: goto label_2cc7b8;
        case 0x2cc7bcu: goto label_2cc7bc;
        case 0x2cc7c0u: goto label_2cc7c0;
        case 0x2cc7c4u: goto label_2cc7c4;
        case 0x2cc7c8u: goto label_2cc7c8;
        case 0x2cc7ccu: goto label_2cc7cc;
        case 0x2cc7d0u: goto label_2cc7d0;
        case 0x2cc7d4u: goto label_2cc7d4;
        case 0x2cc7d8u: goto label_2cc7d8;
        case 0x2cc7dcu: goto label_2cc7dc;
        case 0x2cc7e0u: goto label_2cc7e0;
        case 0x2cc7e4u: goto label_2cc7e4;
        case 0x2cc7e8u: goto label_2cc7e8;
        case 0x2cc7ecu: goto label_2cc7ec;
        case 0x2cc7f0u: goto label_2cc7f0;
        case 0x2cc7f4u: goto label_2cc7f4;
        case 0x2cc7f8u: goto label_2cc7f8;
        case 0x2cc7fcu: goto label_2cc7fc;
        case 0x2cc800u: goto label_2cc800;
        case 0x2cc804u: goto label_2cc804;
        case 0x2cc808u: goto label_2cc808;
        case 0x2cc80cu: goto label_2cc80c;
        case 0x2cc810u: goto label_2cc810;
        case 0x2cc814u: goto label_2cc814;
        case 0x2cc818u: goto label_2cc818;
        case 0x2cc81cu: goto label_2cc81c;
        case 0x2cc820u: goto label_2cc820;
        case 0x2cc824u: goto label_2cc824;
        case 0x2cc828u: goto label_2cc828;
        case 0x2cc82cu: goto label_2cc82c;
        case 0x2cc830u: goto label_2cc830;
        case 0x2cc834u: goto label_2cc834;
        case 0x2cc838u: goto label_2cc838;
        case 0x2cc83cu: goto label_2cc83c;
        case 0x2cc840u: goto label_2cc840;
        case 0x2cc844u: goto label_2cc844;
        case 0x2cc848u: goto label_2cc848;
        case 0x2cc84cu: goto label_2cc84c;
        case 0x2cc850u: goto label_2cc850;
        case 0x2cc854u: goto label_2cc854;
        case 0x2cc858u: goto label_2cc858;
        case 0x2cc85cu: goto label_2cc85c;
        case 0x2cc860u: goto label_2cc860;
        case 0x2cc864u: goto label_2cc864;
        case 0x2cc868u: goto label_2cc868;
        case 0x2cc86cu: goto label_2cc86c;
        case 0x2cc870u: goto label_2cc870;
        case 0x2cc874u: goto label_2cc874;
        case 0x2cc878u: goto label_2cc878;
        case 0x2cc87cu: goto label_2cc87c;
        case 0x2cc880u: goto label_2cc880;
        case 0x2cc884u: goto label_2cc884;
        case 0x2cc888u: goto label_2cc888;
        case 0x2cc88cu: goto label_2cc88c;
        case 0x2cc890u: goto label_2cc890;
        case 0x2cc894u: goto label_2cc894;
        case 0x2cc898u: goto label_2cc898;
        case 0x2cc89cu: goto label_2cc89c;
        case 0x2cc8a0u: goto label_2cc8a0;
        case 0x2cc8a4u: goto label_2cc8a4;
        case 0x2cc8a8u: goto label_2cc8a8;
        case 0x2cc8acu: goto label_2cc8ac;
        case 0x2cc8b0u: goto label_2cc8b0;
        case 0x2cc8b4u: goto label_2cc8b4;
        case 0x2cc8b8u: goto label_2cc8b8;
        case 0x2cc8bcu: goto label_2cc8bc;
        case 0x2cc8c0u: goto label_2cc8c0;
        case 0x2cc8c4u: goto label_2cc8c4;
        case 0x2cc8c8u: goto label_2cc8c8;
        case 0x2cc8ccu: goto label_2cc8cc;
        case 0x2cc8d0u: goto label_2cc8d0;
        case 0x2cc8d4u: goto label_2cc8d4;
        case 0x2cc8d8u: goto label_2cc8d8;
        case 0x2cc8dcu: goto label_2cc8dc;
        case 0x2cc8e0u: goto label_2cc8e0;
        case 0x2cc8e4u: goto label_2cc8e4;
        case 0x2cc8e8u: goto label_2cc8e8;
        case 0x2cc8ecu: goto label_2cc8ec;
        case 0x2cc8f0u: goto label_2cc8f0;
        case 0x2cc8f4u: goto label_2cc8f4;
        case 0x2cc8f8u: goto label_2cc8f8;
        case 0x2cc8fcu: goto label_2cc8fc;
        case 0x2cc900u: goto label_2cc900;
        case 0x2cc904u: goto label_2cc904;
        case 0x2cc908u: goto label_2cc908;
        case 0x2cc90cu: goto label_2cc90c;
        case 0x2cc910u: goto label_2cc910;
        case 0x2cc914u: goto label_2cc914;
        case 0x2cc918u: goto label_2cc918;
        case 0x2cc91cu: goto label_2cc91c;
        case 0x2cc920u: goto label_2cc920;
        case 0x2cc924u: goto label_2cc924;
        case 0x2cc928u: goto label_2cc928;
        case 0x2cc92cu: goto label_2cc92c;
        case 0x2cc930u: goto label_2cc930;
        case 0x2cc934u: goto label_2cc934;
        case 0x2cc938u: goto label_2cc938;
        case 0x2cc93cu: goto label_2cc93c;
        case 0x2cc940u: goto label_2cc940;
        case 0x2cc944u: goto label_2cc944;
        case 0x2cc948u: goto label_2cc948;
        case 0x2cc94cu: goto label_2cc94c;
        case 0x2cc950u: goto label_2cc950;
        case 0x2cc954u: goto label_2cc954;
        case 0x2cc958u: goto label_2cc958;
        case 0x2cc95cu: goto label_2cc95c;
        case 0x2cc960u: goto label_2cc960;
        case 0x2cc964u: goto label_2cc964;
        case 0x2cc968u: goto label_2cc968;
        case 0x2cc96cu: goto label_2cc96c;
        case 0x2cc970u: goto label_2cc970;
        case 0x2cc974u: goto label_2cc974;
        case 0x2cc978u: goto label_2cc978;
        case 0x2cc97cu: goto label_2cc97c;
        case 0x2cc980u: goto label_2cc980;
        case 0x2cc984u: goto label_2cc984;
        case 0x2cc988u: goto label_2cc988;
        case 0x2cc98cu: goto label_2cc98c;
        case 0x2cc990u: goto label_2cc990;
        case 0x2cc994u: goto label_2cc994;
        case 0x2cc998u: goto label_2cc998;
        case 0x2cc99cu: goto label_2cc99c;
        case 0x2cc9a0u: goto label_2cc9a0;
        case 0x2cc9a4u: goto label_2cc9a4;
        case 0x2cc9a8u: goto label_2cc9a8;
        case 0x2cc9acu: goto label_2cc9ac;
        case 0x2cc9b0u: goto label_2cc9b0;
        case 0x2cc9b4u: goto label_2cc9b4;
        case 0x2cc9b8u: goto label_2cc9b8;
        case 0x2cc9bcu: goto label_2cc9bc;
        case 0x2cc9c0u: goto label_2cc9c0;
        case 0x2cc9c4u: goto label_2cc9c4;
        case 0x2cc9c8u: goto label_2cc9c8;
        case 0x2cc9ccu: goto label_2cc9cc;
        case 0x2cc9d0u: goto label_2cc9d0;
        case 0x2cc9d4u: goto label_2cc9d4;
        case 0x2cc9d8u: goto label_2cc9d8;
        case 0x2cc9dcu: goto label_2cc9dc;
        case 0x2cc9e0u: goto label_2cc9e0;
        case 0x2cc9e4u: goto label_2cc9e4;
        case 0x2cc9e8u: goto label_2cc9e8;
        case 0x2cc9ecu: goto label_2cc9ec;
        case 0x2cc9f0u: goto label_2cc9f0;
        case 0x2cc9f4u: goto label_2cc9f4;
        case 0x2cc9f8u: goto label_2cc9f8;
        case 0x2cc9fcu: goto label_2cc9fc;
        case 0x2cca00u: goto label_2cca00;
        case 0x2cca04u: goto label_2cca04;
        case 0x2cca08u: goto label_2cca08;
        case 0x2cca0cu: goto label_2cca0c;
        case 0x2cca10u: goto label_2cca10;
        case 0x2cca14u: goto label_2cca14;
        case 0x2cca18u: goto label_2cca18;
        case 0x2cca1cu: goto label_2cca1c;
        case 0x2cca20u: goto label_2cca20;
        case 0x2cca24u: goto label_2cca24;
        case 0x2cca28u: goto label_2cca28;
        case 0x2cca2cu: goto label_2cca2c;
        case 0x2cca30u: goto label_2cca30;
        case 0x2cca34u: goto label_2cca34;
        case 0x2cca38u: goto label_2cca38;
        case 0x2cca3cu: goto label_2cca3c;
        case 0x2cca40u: goto label_2cca40;
        case 0x2cca44u: goto label_2cca44;
        case 0x2cca48u: goto label_2cca48;
        case 0x2cca4cu: goto label_2cca4c;
        case 0x2cca50u: goto label_2cca50;
        case 0x2cca54u: goto label_2cca54;
        case 0x2cca58u: goto label_2cca58;
        case 0x2cca5cu: goto label_2cca5c;
        case 0x2cca60u: goto label_2cca60;
        case 0x2cca64u: goto label_2cca64;
        case 0x2cca68u: goto label_2cca68;
        case 0x2cca6cu: goto label_2cca6c;
        case 0x2cca70u: goto label_2cca70;
        case 0x2cca74u: goto label_2cca74;
        case 0x2cca78u: goto label_2cca78;
        case 0x2cca7cu: goto label_2cca7c;
        case 0x2cca80u: goto label_2cca80;
        case 0x2cca84u: goto label_2cca84;
        case 0x2cca88u: goto label_2cca88;
        case 0x2cca8cu: goto label_2cca8c;
        case 0x2cca90u: goto label_2cca90;
        case 0x2cca94u: goto label_2cca94;
        case 0x2cca98u: goto label_2cca98;
        case 0x2cca9cu: goto label_2cca9c;
        case 0x2ccaa0u: goto label_2ccaa0;
        case 0x2ccaa4u: goto label_2ccaa4;
        case 0x2ccaa8u: goto label_2ccaa8;
        case 0x2ccaacu: goto label_2ccaac;
        case 0x2ccab0u: goto label_2ccab0;
        case 0x2ccab4u: goto label_2ccab4;
        case 0x2ccab8u: goto label_2ccab8;
        case 0x2ccabcu: goto label_2ccabc;
        case 0x2ccac0u: goto label_2ccac0;
        case 0x2ccac4u: goto label_2ccac4;
        case 0x2ccac8u: goto label_2ccac8;
        case 0x2ccaccu: goto label_2ccacc;
        case 0x2ccad0u: goto label_2ccad0;
        case 0x2ccad4u: goto label_2ccad4;
        case 0x2ccad8u: goto label_2ccad8;
        case 0x2ccadcu: goto label_2ccadc;
        case 0x2ccae0u: goto label_2ccae0;
        case 0x2ccae4u: goto label_2ccae4;
        case 0x2ccae8u: goto label_2ccae8;
        case 0x2ccaecu: goto label_2ccaec;
        case 0x2ccaf0u: goto label_2ccaf0;
        case 0x2ccaf4u: goto label_2ccaf4;
        case 0x2ccaf8u: goto label_2ccaf8;
        case 0x2ccafcu: goto label_2ccafc;
        case 0x2ccb00u: goto label_2ccb00;
        case 0x2ccb04u: goto label_2ccb04;
        case 0x2ccb08u: goto label_2ccb08;
        case 0x2ccb0cu: goto label_2ccb0c;
        case 0x2ccb10u: goto label_2ccb10;
        case 0x2ccb14u: goto label_2ccb14;
        case 0x2ccb18u: goto label_2ccb18;
        case 0x2ccb1cu: goto label_2ccb1c;
        case 0x2ccb20u: goto label_2ccb20;
        case 0x2ccb24u: goto label_2ccb24;
        case 0x2ccb28u: goto label_2ccb28;
        case 0x2ccb2cu: goto label_2ccb2c;
        case 0x2ccb30u: goto label_2ccb30;
        case 0x2ccb34u: goto label_2ccb34;
        case 0x2ccb38u: goto label_2ccb38;
        case 0x2ccb3cu: goto label_2ccb3c;
        case 0x2ccb40u: goto label_2ccb40;
        case 0x2ccb44u: goto label_2ccb44;
        case 0x2ccb48u: goto label_2ccb48;
        case 0x2ccb4cu: goto label_2ccb4c;
        case 0x2ccb50u: goto label_2ccb50;
        case 0x2ccb54u: goto label_2ccb54;
        case 0x2ccb58u: goto label_2ccb58;
        case 0x2ccb5cu: goto label_2ccb5c;
        case 0x2ccb60u: goto label_2ccb60;
        case 0x2ccb64u: goto label_2ccb64;
        case 0x2ccb68u: goto label_2ccb68;
        case 0x2ccb6cu: goto label_2ccb6c;
        case 0x2ccb70u: goto label_2ccb70;
        case 0x2ccb74u: goto label_2ccb74;
        case 0x2ccb78u: goto label_2ccb78;
        case 0x2ccb7cu: goto label_2ccb7c;
        case 0x2ccb80u: goto label_2ccb80;
        case 0x2ccb84u: goto label_2ccb84;
        case 0x2ccb88u: goto label_2ccb88;
        case 0x2ccb8cu: goto label_2ccb8c;
        case 0x2ccb90u: goto label_2ccb90;
        case 0x2ccb94u: goto label_2ccb94;
        case 0x2ccb98u: goto label_2ccb98;
        case 0x2ccb9cu: goto label_2ccb9c;
        case 0x2ccba0u: goto label_2ccba0;
        case 0x2ccba4u: goto label_2ccba4;
        case 0x2ccba8u: goto label_2ccba8;
        case 0x2ccbacu: goto label_2ccbac;
        case 0x2ccbb0u: goto label_2ccbb0;
        case 0x2ccbb4u: goto label_2ccbb4;
        case 0x2ccbb8u: goto label_2ccbb8;
        case 0x2ccbbcu: goto label_2ccbbc;
        case 0x2ccbc0u: goto label_2ccbc0;
        case 0x2ccbc4u: goto label_2ccbc4;
        case 0x2ccbc8u: goto label_2ccbc8;
        case 0x2ccbccu: goto label_2ccbcc;
        case 0x2ccbd0u: goto label_2ccbd0;
        case 0x2ccbd4u: goto label_2ccbd4;
        case 0x2ccbd8u: goto label_2ccbd8;
        case 0x2ccbdcu: goto label_2ccbdc;
        case 0x2ccbe0u: goto label_2ccbe0;
        case 0x2ccbe4u: goto label_2ccbe4;
        case 0x2ccbe8u: goto label_2ccbe8;
        case 0x2ccbecu: goto label_2ccbec;
        case 0x2ccbf0u: goto label_2ccbf0;
        case 0x2ccbf4u: goto label_2ccbf4;
        case 0x2ccbf8u: goto label_2ccbf8;
        case 0x2ccbfcu: goto label_2ccbfc;
        case 0x2ccc00u: goto label_2ccc00;
        case 0x2ccc04u: goto label_2ccc04;
        case 0x2ccc08u: goto label_2ccc08;
        case 0x2ccc0cu: goto label_2ccc0c;
        case 0x2ccc10u: goto label_2ccc10;
        case 0x2ccc14u: goto label_2ccc14;
        case 0x2ccc18u: goto label_2ccc18;
        case 0x2ccc1cu: goto label_2ccc1c;
        case 0x2ccc20u: goto label_2ccc20;
        case 0x2ccc24u: goto label_2ccc24;
        case 0x2ccc28u: goto label_2ccc28;
        case 0x2ccc2cu: goto label_2ccc2c;
        case 0x2ccc30u: goto label_2ccc30;
        case 0x2ccc34u: goto label_2ccc34;
        case 0x2ccc38u: goto label_2ccc38;
        case 0x2ccc3cu: goto label_2ccc3c;
        case 0x2ccc40u: goto label_2ccc40;
        case 0x2ccc44u: goto label_2ccc44;
        case 0x2ccc48u: goto label_2ccc48;
        case 0x2ccc4cu: goto label_2ccc4c;
        case 0x2ccc50u: goto label_2ccc50;
        case 0x2ccc54u: goto label_2ccc54;
        case 0x2ccc58u: goto label_2ccc58;
        case 0x2ccc5cu: goto label_2ccc5c;
        case 0x2ccc60u: goto label_2ccc60;
        case 0x2ccc64u: goto label_2ccc64;
        case 0x2ccc68u: goto label_2ccc68;
        case 0x2ccc6cu: goto label_2ccc6c;
        case 0x2ccc70u: goto label_2ccc70;
        case 0x2ccc74u: goto label_2ccc74;
        case 0x2ccc78u: goto label_2ccc78;
        case 0x2ccc7cu: goto label_2ccc7c;
        case 0x2ccc80u: goto label_2ccc80;
        case 0x2ccc84u: goto label_2ccc84;
        case 0x2ccc88u: goto label_2ccc88;
        case 0x2ccc8cu: goto label_2ccc8c;
        case 0x2ccc90u: goto label_2ccc90;
        case 0x2ccc94u: goto label_2ccc94;
        case 0x2ccc98u: goto label_2ccc98;
        case 0x2ccc9cu: goto label_2ccc9c;
        case 0x2ccca0u: goto label_2ccca0;
        case 0x2ccca4u: goto label_2ccca4;
        case 0x2ccca8u: goto label_2ccca8;
        case 0x2cccacu: goto label_2cccac;
        case 0x2cccb0u: goto label_2cccb0;
        case 0x2cccb4u: goto label_2cccb4;
        case 0x2cccb8u: goto label_2cccb8;
        case 0x2cccbcu: goto label_2cccbc;
        case 0x2cccc0u: goto label_2cccc0;
        case 0x2cccc4u: goto label_2cccc4;
        case 0x2cccc8u: goto label_2cccc8;
        case 0x2cccccu: goto label_2ccccc;
        case 0x2cccd0u: goto label_2cccd0;
        case 0x2cccd4u: goto label_2cccd4;
        case 0x2cccd8u: goto label_2cccd8;
        case 0x2cccdcu: goto label_2cccdc;
        case 0x2ccce0u: goto label_2ccce0;
        case 0x2ccce4u: goto label_2ccce4;
        case 0x2ccce8u: goto label_2ccce8;
        case 0x2cccecu: goto label_2cccec;
        case 0x2cccf0u: goto label_2cccf0;
        case 0x2cccf4u: goto label_2cccf4;
        case 0x2cccf8u: goto label_2cccf8;
        case 0x2cccfcu: goto label_2cccfc;
        case 0x2ccd00u: goto label_2ccd00;
        case 0x2ccd04u: goto label_2ccd04;
        case 0x2ccd08u: goto label_2ccd08;
        case 0x2ccd0cu: goto label_2ccd0c;
        case 0x2ccd10u: goto label_2ccd10;
        case 0x2ccd14u: goto label_2ccd14;
        case 0x2ccd18u: goto label_2ccd18;
        case 0x2ccd1cu: goto label_2ccd1c;
        case 0x2ccd20u: goto label_2ccd20;
        case 0x2ccd24u: goto label_2ccd24;
        case 0x2ccd28u: goto label_2ccd28;
        case 0x2ccd2cu: goto label_2ccd2c;
        case 0x2ccd30u: goto label_2ccd30;
        case 0x2ccd34u: goto label_2ccd34;
        case 0x2ccd38u: goto label_2ccd38;
        case 0x2ccd3cu: goto label_2ccd3c;
        case 0x2ccd40u: goto label_2ccd40;
        case 0x2ccd44u: goto label_2ccd44;
        case 0x2ccd48u: goto label_2ccd48;
        case 0x2ccd4cu: goto label_2ccd4c;
        case 0x2ccd50u: goto label_2ccd50;
        case 0x2ccd54u: goto label_2ccd54;
        case 0x2ccd58u: goto label_2ccd58;
        case 0x2ccd5cu: goto label_2ccd5c;
        case 0x2ccd60u: goto label_2ccd60;
        case 0x2ccd64u: goto label_2ccd64;
        default: break;
    }

    ctx->pc = 0x2cc3e8u;

label_2cc3e8:
    // 0x2cc3e8: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x2cc3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
label_2cc3ec:
    // 0x2cc3ec: 0x7fb00200  sq          $s0, 0x200($sp)
    ctx->pc = 0x2cc3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 16));
label_2cc3f0:
    // 0x2cc3f0: 0x7fb101f0  sq          $s1, 0x1F0($sp)
    ctx->pc = 0x2cc3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 17));
label_2cc3f4:
    // 0x2cc3f4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2cc3f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2cc3f8:
    // 0x2cc3f8: 0x7fb201e0  sq          $s2, 0x1E0($sp)
    ctx->pc = 0x2cc3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 18));
label_2cc3fc:
    // 0x2cc3fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cc3fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2cc400:
    // 0x2cc400: 0x7fb301d0  sq          $s3, 0x1D0($sp)
    ctx->pc = 0x2cc400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 19));
label_2cc404:
    // 0x2cc404: 0x7fb401c0  sq          $s4, 0x1C0($sp)
    ctx->pc = 0x2cc404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 20));
label_2cc408:
    // 0x2cc408: 0x7fb501b0  sq          $s5, 0x1B0($sp)
    ctx->pc = 0x2cc408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 21));
label_2cc40c:
    // 0x2cc40c: 0x27b400c0  addiu       $s4, $sp, 0xC0
    ctx->pc = 0x2cc40cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2cc410:
    // 0x2cc410: 0x7fb601a0  sq          $s6, 0x1A0($sp)
    ctx->pc = 0x2cc410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 22));
label_2cc414:
    // 0x2cc414: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2cc414u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cc418:
    // 0x2cc418: 0x7fb70190  sq          $s7, 0x190($sp)
    ctx->pc = 0x2cc418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 23));
label_2cc41c:
    // 0x2cc41c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2cc41cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2cc420:
    // 0x2cc420: 0x7fbe0180  sq          $fp, 0x180($sp)
    ctx->pc = 0x2cc420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 30));
label_2cc424:
    // 0x2cc424: 0xffbf0170  sd          $ra, 0x170($sp)
    ctx->pc = 0x2cc424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 31));
label_2cc428:
    // 0x2cc428: 0xe7b70228  swc1        $f23, 0x228($sp)
    ctx->pc = 0x2cc428u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
label_2cc42c:
    // 0x2cc42c: 0xe7b60220  swc1        $f22, 0x220($sp)
    ctx->pc = 0x2cc42cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_2cc430:
    // 0x2cc430: 0xe7b50218  swc1        $f21, 0x218($sp)
    ctx->pc = 0x2cc430u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
label_2cc434:
    // 0x2cc434: 0xe7b40210  swc1        $f20, 0x210($sp)
    ctx->pc = 0x2cc434u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_2cc438:
    // 0x2cc438: 0x8ea80000  lw          $t0, 0x0($s5)
    ctx->pc = 0x2cc438u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2cc43c:
    // 0x2cc43c: 0xafa60164  sw          $a2, 0x164($sp)
    ctx->pc = 0x2cc43cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 6));
label_2cc440:
    // 0x2cc440: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2cc440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cc444:
    // 0x2cc444: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2cc444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2cc448:
    // 0x2cc448: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x2cc448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_2cc44c:
    // 0x2cc44c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2cc44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2cc450:
    // 0x2cc450: 0x8c8a005c  lw          $t2, 0x5C($a0)
    ctx->pc = 0x2cc450u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_2cc454:
    // 0x2cc454: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x2cc454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_2cc458:
    // 0x2cc458: 0x25570038  addiu       $s7, $t2, 0x38
    ctx->pc = 0x2cc458u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 10), 56));
label_2cc45c:
    // 0x2cc45c: 0x8d050010  lw          $a1, 0x10($t0)
    ctx->pc = 0x2cc45cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_2cc460:
    // 0x2cc460: 0x24560038  addiu       $s6, $v0, 0x38
    ctx->pc = 0x2cc460u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_2cc464:
    // 0x2cc464: 0x96e80002  lhu         $t0, 0x2($s7)
    ctx->pc = 0x2cc464u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_2cc468:
    // 0x2cc468: 0x96c20002  lhu         $v0, 0x2($s6)
    ctx->pc = 0x2cc468u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
label_2cc46c:
    // 0x2cc46c: 0x96e30004  lhu         $v1, 0x4($s7)
    ctx->pc = 0x2cc46cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 4)));
label_2cc470:
    // 0x2cc470: 0x1024018  mult        $t0, $t0, $v0
    ctx->pc = 0x2cc470u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_2cc474:
    // 0x2cc474: 0x96c90004  lhu         $t1, 0x4($s6)
    ctx->pc = 0x2cc474u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
label_2cc478:
    // 0x2cc478: 0x8d42001c  lw          $v0, 0x1C($t2)
    ctx->pc = 0x2cc478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
label_2cc47c:
    // 0x2cc47c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2cc47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_2cc480:
    // 0x2cc480: 0x40f809  jalr        $v0
label_2cc484:
    if (ctx->pc == 0x2CC484u) {
        ctx->pc = 0x2CC484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC480u;
        // 0x2cc484: 0x689021  addu        $s2, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC488u;
        goto label_2cc488;
    }
    ctx->pc = 0x2CC480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CC488u);
        ctx->pc = 0x2CC484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC480u;
        // 0x2cc484: 0x689021  addu        $s2, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC480u, 0x2CC488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CC488u;
label_2cc488:
    // 0x2cc488: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2cc488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2cc48c:
    // 0x2cc48c: 0x27b300f0  addiu       $s3, $sp, 0xF0
    ctx->pc = 0x2cc48cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2cc490:
    // 0x2cc490: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2cc490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2cc494:
    // 0x2cc494: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2cc494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2cc498:
    // 0x2cc498: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2cc498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2cc49c:
    // 0x2cc49c: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x2cc49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_2cc4a0:
    // 0x2cc4a0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2cc4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_2cc4a4:
    // 0x2cc4a4: 0x40f809  jalr        $v0
label_2cc4a8:
    if (ctx->pc == 0x2CC4A8u) {
        ctx->pc = 0x2CC4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC4A4u;
        // 0x2cc4a8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC4ACu;
        goto label_2cc4ac;
    }
    ctx->pc = 0x2CC4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CC4ACu);
        ctx->pc = 0x2CC4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC4A4u;
        // 0x2cc4a8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC4A4u, 0x2CC4ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CC4ACu;
label_2cc4ac:
    // 0x2cc4ac: 0x164000a2  bnez        $s2, . + 4 + (0xA2 << 2)
label_2cc4b0:
    if (ctx->pc == 0x2CC4B0u) {
        ctx->pc = 0x2CC4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC4ACu;
        // 0x2cc4b0: 0x8fa40164  lw          $a0, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC4B4u;
        goto label_2cc4b4;
    }
    ctx->pc = 0x2CC4ACu;
    {
        const bool branch_taken_0x2cc4ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC4ACu;
        // 0x2cc4b0: 0x8fa40164  lw          $a0, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc4ac) {
            ctx->pc = 0x2CC738u;
            goto label_2cc738;
        }
    }
    ctx->pc = 0x2CC4B4u;
label_2cc4b4:
    // 0x2cc4b4: 0x96e20002  lhu         $v0, 0x2($s7)
    ctx->pc = 0x2cc4b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_2cc4b8:
    // 0x2cc4b8: 0x5040003e  beql        $v0, $zero, . + 4 + (0x3E << 2)
label_2cc4bc:
    if (ctx->pc == 0x2CC4BCu) {
        ctx->pc = 0x2CC4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC4B8u;
        // 0x2cc4bc: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC4C0u;
        goto label_2cc4c0;
    }
    ctx->pc = 0x2CC4B8u;
    {
        const bool branch_taken_0x2cc4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc4b8) {
            ctx->pc = 0x2CC4BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC4B8u;
            // 0x2cc4bc: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC5B4u;
            goto label_2cc5b4;
        }
    }
    ctx->pc = 0x2CC4C0u;
label_2cc4c0:
    // 0x2cc4c0: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x2cc4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2cc4c4:
    // 0x2cc4c4: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x2cc4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2cc4c8:
    // 0x2cc4c8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2cc4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2cc4cc:
    // 0x2cc4cc: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2cc4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2cc4d0:
    // 0x2cc4d0: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x2cc4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_2cc4d4:
    // 0x2cc4d4: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x2cc4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_2cc4d8:
    // 0x2cc4d8: 0xc4460030  lwc1        $f6, 0x30($v0)
    ctx->pc = 0x2cc4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2cc4dc:
    // 0x2cc4dc: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x2cc4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc4e0:
    // 0x2cc4e0: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x2cc4e0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_2cc4e4:
    // 0x2cc4e4: 0xe6260000  swc1        $f6, 0x0($s1)
    ctx->pc = 0x2cc4e4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2cc4e8:
    // 0x2cc4e8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2cc4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc4ec:
    // 0x2cc4ec: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x2cc4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2cc4f0:
    // 0x2cc4f0: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2cc4f0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_2cc4f4:
    // 0x2cc4f4: 0xe6240004  swc1        $f4, 0x4($s1)
    ctx->pc = 0x2cc4f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2cc4f8:
    // 0x2cc4f8: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x2cc4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2cc4fc:
    // 0x2cc4fc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2cc4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc500:
    // 0x2cc500: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x2cc500u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_2cc504:
    // 0x2cc504: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x2cc504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cc508:
    // 0x2cc508: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x2cc508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cc50c:
    // 0x2cc50c: 0x460130c2  mul.s       $f3, $f6, $f1
    ctx->pc = 0x2cc50cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_2cc510:
    // 0x2cc510: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2cc510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc514:
    // 0x2cc514: 0x460221c2  mul.s       $f7, $f4, $f2
    ctx->pc = 0x2cc514u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_2cc518:
    // 0x2cc518: 0x46002a02  mul.s       $f8, $f5, $f0
    ctx->pc = 0x2cc518u;
    ctx->f[8] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_2cc51c:
    // 0x2cc51c: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x2cc51cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
label_2cc520:
    // 0x2cc520: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x2cc520u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
label_2cc524:
    // 0x2cc524: 0x46001d07  neg.s       $f20, $f3
    ctx->pc = 0x2cc524u;
    ctx->f[20] = FPU_NEG_S(ctx->f[3]);
label_2cc528:
    // 0x2cc528: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2cc528u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_2cc52c:
    // 0x2cc52c: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2cc52cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_2cc530:
    // 0x2cc530: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2cc530u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2cc534:
    // 0x2cc534: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x2cc534u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
label_2cc538:
    // 0x2cc538: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x2cc538u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_2cc53c:
    // 0x2cc53c: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2cc53cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_2cc540:
    // 0x2cc540: 0xe6260000  swc1        $f6, 0x0($s1)
    ctx->pc = 0x2cc540u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2cc544:
    // 0x2cc544: 0xe6240004  swc1        $f4, 0x4($s1)
    ctx->pc = 0x2cc544u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2cc548:
    // 0x2cc548: 0xe6250008  swc1        $f5, 0x8($s1)
    ctx->pc = 0x2cc548u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2cc54c:
    // 0x2cc54c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cc54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cc550:
    // 0x2cc550: 0xc0ad20c  jal         func_2B4830
label_2cc554:
    if (ctx->pc == 0x2CC554u) {
        ctx->pc = 0x2CC554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC550u;
        // 0x2cc554: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC558u;
        goto label_2cc558;
    }
    ctx->pc = 0x2CC550u;
    SET_GPR_U32(ctx, 31, 0x2CC558u);
    ctx->pc = 0x2CC554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC550u;
    // 0x2cc554: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x2CC550u, 0x2CC558u)) {
        return;
    }
    ctx->pc = 0x2CC558u;
label_2cc558:
    // 0x2cc558: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cc558u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2cc55c:
    // 0x2cc55c: 0x4600a505  abs.s       $f20, $f20
    ctx->pc = 0x2cc55cu;
    ctx->f[20] = FPU_ABS_S(ctx->f[20]);
label_2cc560:
    // 0x2cc560: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x2cc560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
label_2cc564:
    // 0x2cc564: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cc564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cc568:
    // 0x2cc568: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2cc568u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cc56c:
    // 0x2cc56c: 0x0  nop
    ctx->pc = 0x2cc56cu;
    // NOP
label_2cc570:
    // 0x2cc570: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_2cc574:
    if (ctx->pc == 0x2CC574u) {
        ctx->pc = 0x2CC574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC570u;
        // 0x2cc574: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC578u;
        goto label_2cc578;
    }
    ctx->pc = 0x2CC570u;
    {
        const bool branch_taken_0x2cc570 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cc570) {
            ctx->pc = 0x2CC574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC570u;
            // 0x2cc574: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC598u;
            goto label_2cc598;
        }
    }
    ctx->pc = 0x2CC578u;
label_2cc578:
    // 0x2cc578: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x2cc578u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[20]);
label_2cc57c:
    // 0x2cc57c: 0xc7808230  lwc1        $f0, -0x7DD0($gp)
    ctx->pc = 0x2cc57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc580:
    // 0x2cc580: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2cc580u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cc584:
    // 0x2cc584: 0x0  nop
    ctx->pc = 0x2cc584u;
    // NOP
label_2cc588:
    // 0x2cc588: 0x45030045  bc1tl       . + 4 + (0x45 << 2)
label_2cc58c:
    if (ctx->pc == 0x2CC58Cu) {
        ctx->pc = 0x2CC58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC588u;
        // 0x2cc58c: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC590u;
        goto label_2cc590;
    }
    ctx->pc = 0x2CC588u;
    {
        const bool branch_taken_0x2cc588 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cc588) {
            ctx->pc = 0x2CC58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC588u;
            // 0x2cc58c: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC6A0u;
            goto label_2cc6a0;
        }
    }
    ctx->pc = 0x2CC590u;
label_2cc590:
    // 0x2cc590: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2cc590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2cc594:
    // 0x2cc594: 0x0  nop
    ctx->pc = 0x2cc594u;
    // NOP
label_2cc598:
    // 0x2cc598: 0xc0ad22e  jal         func_2B48B8
label_2cc59c:
    if (ctx->pc == 0x2CC59Cu) {
        ctx->pc = 0x2CC59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC598u;
        // 0x2cc59c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC5A0u;
        goto label_2cc5a0;
    }
    ctx->pc = 0x2CC598u;
    SET_GPR_U32(ctx, 31, 0x2CC5A0u);
    ctx->pc = 0x2CC59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC598u;
    // 0x2cc59c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B48B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B48B8u, 0x2CC598u, 0x2CC5A0u)) {
        return;
    }
    ctx->pc = 0x2CC5A0u;
label_2cc5a0:
    // 0x2cc5a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cc5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cc5a4:
    // 0x2cc5a4: 0xc0ad20c  jal         func_2B4830
label_2cc5a8:
    if (ctx->pc == 0x2CC5A8u) {
        ctx->pc = 0x2CC5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC5A4u;
        // 0x2cc5a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC5ACu;
        goto label_2cc5ac;
    }
    ctx->pc = 0x2CC5A4u;
    SET_GPR_U32(ctx, 31, 0x2CC5ACu);
    ctx->pc = 0x2CC5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC5A4u;
    // 0x2cc5a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x2CC5A4u, 0x2CC5ACu)) {
        return;
    }
    ctx->pc = 0x2CC5ACu;
label_2cc5ac:
    // 0x2cc5ac: 0x1000003c  b           . + 4 + (0x3C << 2)
label_2cc5b0:
    if (ctx->pc == 0x2CC5B0u) {
        ctx->pc = 0x2CC5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC5ACu;
        // 0x2cc5b0: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC5B4u;
        goto label_2cc5b4;
    }
    ctx->pc = 0x2CC5ACu;
    {
        const bool branch_taken_0x2cc5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC5ACu;
        // 0x2cc5b0: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc5ac) {
            ctx->pc = 0x2CC6A0u;
            goto label_2cc6a0;
        }
    }
    ctx->pc = 0x2CC5B4u;
label_2cc5b4:
    // 0x2cc5b4: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x2cc5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2cc5b8:
    // 0x2cc5b8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2cc5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2cc5bc:
    // 0x2cc5bc: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2cc5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2cc5c0:
    // 0x2cc5c0: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x2cc5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_2cc5c4:
    // 0x2cc5c4: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x2cc5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_2cc5c8:
    // 0x2cc5c8: 0xc4460030  lwc1        $f6, 0x30($v0)
    ctx->pc = 0x2cc5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2cc5cc:
    // 0x2cc5cc: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x2cc5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc5d0:
    // 0x2cc5d0: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x2cc5d0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_2cc5d4:
    // 0x2cc5d4: 0xe6260000  swc1        $f6, 0x0($s1)
    ctx->pc = 0x2cc5d4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2cc5d8:
    // 0x2cc5d8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2cc5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc5dc:
    // 0x2cc5dc: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x2cc5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2cc5e0:
    // 0x2cc5e0: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2cc5e0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_2cc5e4:
    // 0x2cc5e4: 0xe6240004  swc1        $f4, 0x4($s1)
    ctx->pc = 0x2cc5e4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2cc5e8:
    // 0x2cc5e8: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x2cc5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2cc5ec:
    // 0x2cc5ec: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2cc5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc5f0:
    // 0x2cc5f0: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x2cc5f0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_2cc5f4:
    // 0x2cc5f4: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x2cc5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cc5f8:
    // 0x2cc5f8: 0xc7a200f4  lwc1        $f2, 0xF4($sp)
    ctx->pc = 0x2cc5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cc5fc:
    // 0x2cc5fc: 0x460130c2  mul.s       $f3, $f6, $f1
    ctx->pc = 0x2cc5fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_2cc600:
    // 0x2cc600: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x2cc600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc604:
    // 0x2cc604: 0x460221c2  mul.s       $f7, $f4, $f2
    ctx->pc = 0x2cc604u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_2cc608:
    // 0x2cc608: 0x46002a02  mul.s       $f8, $f5, $f0
    ctx->pc = 0x2cc608u;
    ctx->f[8] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_2cc60c:
    // 0x2cc60c: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x2cc60cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
label_2cc610:
    // 0x2cc610: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x2cc610u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
label_2cc614:
    // 0x2cc614: 0x46001d07  neg.s       $f20, $f3
    ctx->pc = 0x2cc614u;
    ctx->f[20] = FPU_NEG_S(ctx->f[3]);
label_2cc618:
    // 0x2cc618: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2cc618u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_2cc61c:
    // 0x2cc61c: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2cc61cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_2cc620:
    // 0x2cc620: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2cc620u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2cc624:
    // 0x2cc624: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x2cc624u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
label_2cc628:
    // 0x2cc628: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x2cc628u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_2cc62c:
    // 0x2cc62c: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2cc62cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_2cc630:
    // 0x2cc630: 0xe6260000  swc1        $f6, 0x0($s1)
    ctx->pc = 0x2cc630u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2cc634:
    // 0x2cc634: 0xe6240004  swc1        $f4, 0x4($s1)
    ctx->pc = 0x2cc634u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2cc638:
    // 0x2cc638: 0xe6250008  swc1        $f5, 0x8($s1)
    ctx->pc = 0x2cc638u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2cc63c:
    // 0x2cc63c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cc63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cc640:
    // 0x2cc640: 0xc0ad20c  jal         func_2B4830
label_2cc644:
    if (ctx->pc == 0x2CC644u) {
        ctx->pc = 0x2CC644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC640u;
        // 0x2cc644: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC648u;
        goto label_2cc648;
    }
    ctx->pc = 0x2CC640u;
    SET_GPR_U32(ctx, 31, 0x2CC648u);
    ctx->pc = 0x2CC644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC640u;
    // 0x2cc644: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x2CC640u, 0x2CC648u)) {
        return;
    }
    ctx->pc = 0x2CC648u;
label_2cc648:
    // 0x2cc648: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cc648u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2cc64c:
    // 0x2cc64c: 0x4600a505  abs.s       $f20, $f20
    ctx->pc = 0x2cc64cu;
    ctx->f[20] = FPU_ABS_S(ctx->f[20]);
label_2cc650:
    // 0x2cc650: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x2cc650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
label_2cc654:
    // 0x2cc654: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cc654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cc658:
    // 0x2cc658: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2cc658u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cc65c:
    // 0x2cc65c: 0x0  nop
    ctx->pc = 0x2cc65cu;
    // NOP
label_2cc660:
    // 0x2cc660: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_2cc664:
    if (ctx->pc == 0x2CC664u) {
        ctx->pc = 0x2CC664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC660u;
        // 0x2cc664: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC668u;
        goto label_2cc668;
    }
    ctx->pc = 0x2CC660u;
    {
        const bool branch_taken_0x2cc660 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cc660) {
            ctx->pc = 0x2CC664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC660u;
            // 0x2cc664: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC688u;
            goto label_2cc688;
        }
    }
    ctx->pc = 0x2CC668u;
label_2cc668:
    // 0x2cc668: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x2cc668u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[20]);
label_2cc66c:
    // 0x2cc66c: 0xc7808234  lwc1        $f0, -0x7DCC($gp)
    ctx->pc = 0x2cc66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc670:
    // 0x2cc670: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2cc670u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cc674:
    // 0x2cc674: 0x0  nop
    ctx->pc = 0x2cc674u;
    // NOP
label_2cc678:
    // 0x2cc678: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_2cc67c:
    if (ctx->pc == 0x2CC67Cu) {
        ctx->pc = 0x2CC67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC678u;
        // 0x2cc67c: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC680u;
        goto label_2cc680;
    }
    ctx->pc = 0x2CC678u;
    {
        const bool branch_taken_0x2cc678 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cc678) {
            ctx->pc = 0x2CC67Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC678u;
            // 0x2cc67c: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC6A0u;
            goto label_2cc6a0;
        }
    }
    ctx->pc = 0x2CC680u;
label_2cc680:
    // 0x2cc680: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2cc680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cc684:
    // 0x2cc684: 0x0  nop
    ctx->pc = 0x2cc684u;
    // NOP
label_2cc688:
    // 0x2cc688: 0xc0ad22e  jal         func_2B48B8
label_2cc68c:
    if (ctx->pc == 0x2CC68Cu) {
        ctx->pc = 0x2CC68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC688u;
        // 0x2cc68c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC690u;
        goto label_2cc690;
    }
    ctx->pc = 0x2CC688u;
    SET_GPR_U32(ctx, 31, 0x2CC690u);
    ctx->pc = 0x2CC68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC688u;
    // 0x2cc68c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B48B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B48B8u, 0x2CC688u, 0x2CC690u)) {
        return;
    }
    ctx->pc = 0x2CC690u;
label_2cc690:
    // 0x2cc690: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cc690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cc694:
    // 0x2cc694: 0xc0ad20c  jal         func_2B4830
label_2cc698:
    if (ctx->pc == 0x2CC698u) {
        ctx->pc = 0x2CC698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC694u;
        // 0x2cc698: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC69Cu;
        goto label_2cc69c;
    }
    ctx->pc = 0x2CC694u;
    SET_GPR_U32(ctx, 31, 0x2CC69Cu);
    ctx->pc = 0x2CC698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC694u;
    // 0x2cc698: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x2CC694u, 0x2CC69Cu)) {
        return;
    }
    ctx->pc = 0x2CC69Cu;
label_2cc69c:
    // 0x2cc69c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2cc69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2cc6a0:
    // 0x2cc6a0: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x2cc6a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2cc6a4:
    // 0x2cc6a4: 0x27a80124  addiu       $t0, $sp, 0x124
    ctx->pc = 0x2cc6a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
label_2cc6a8:
    // 0x2cc6a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2cc6a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cc6ac:
    // 0x2cc6ac: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2cc6acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2cc6b0:
    // 0x2cc6b0: 0xc0aa82a  jal         func_2AA0A8
label_2cc6b4:
    if (ctx->pc == 0x2CC6B4u) {
        ctx->pc = 0x2CC6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6B0u;
        // 0x2cc6b4: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC6B8u;
        goto label_2cc6b8;
    }
    ctx->pc = 0x2CC6B0u;
    SET_GPR_U32(ctx, 31, 0x2CC6B8u);
    ctx->pc = 0x2CC6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC6B0u;
    // 0x2cc6b4: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA0A8u, 0x2CC6B0u, 0x2CC6B8u)) {
        return;
    }
    ctx->pc = 0x2CC6B8u;
label_2cc6b8:
    // 0x2cc6b8: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x2cc6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2cc6bc:
    // 0x2cc6bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2cc6bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cc6c0:
    // 0x2cc6c0: 0x27a70128  addiu       $a3, $sp, 0x128
    ctx->pc = 0x2cc6c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_2cc6c4:
    // 0x2cc6c4: 0x27a8012c  addiu       $t0, $sp, 0x12C
    ctx->pc = 0x2cc6c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
label_2cc6c8:
    // 0x2cc6c8: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x2cc6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2cc6cc:
    // 0x2cc6cc: 0xc0aa82a  jal         func_2AA0A8
label_2cc6d0:
    if (ctx->pc == 0x2CC6D0u) {
        ctx->pc = 0x2CC6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6CCu;
        // 0x2cc6d0: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC6D4u;
        goto label_2cc6d4;
    }
    ctx->pc = 0x2CC6CCu;
    SET_GPR_U32(ctx, 31, 0x2CC6D4u);
    ctx->pc = 0x2CC6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC6CCu;
    // 0x2cc6d0: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA0A8u, 0x2CC6CCu, 0x2CC6D4u)) {
        return;
    }
    ctx->pc = 0x2CC6D4u;
label_2cc6d4:
    // 0x2cc6d4: 0xc7a2012c  lwc1        $f2, 0x12C($sp)
    ctx->pc = 0x2cc6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cc6d8:
    // 0x2cc6d8: 0xc7a40128  lwc1        $f4, 0x128($sp)
    ctx->pc = 0x2cc6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2cc6dc:
    // 0x2cc6dc: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x2cc6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc6e0:
    // 0x2cc6e0: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x2cc6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cc6e4:
    // 0x2cc6e4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2cc6e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_2cc6e8:
    // 0x2cc6e8: 0x460120c1  sub.s       $f3, $f4, $f1
    ctx->pc = 0x2cc6e8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
label_2cc6ec:
    // 0x2cc6ec: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2cc6ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cc6f0:
    // 0x2cc6f0: 0x0  nop
    ctx->pc = 0x2cc6f0u;
    // NOP
label_2cc6f4:
    // 0x2cc6f4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2cc6f8:
    if (ctx->pc == 0x2CC6F8u) {
        ctx->pc = 0x2CC6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6F4u;
        // 0x2cc6f8: 0x8fa20164  lw          $v0, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC6FCu;
        goto label_2cc6fc;
    }
    ctx->pc = 0x2CC6F4u;
    {
        const bool branch_taken_0x2cc6f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CC6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6F4u;
        // 0x2cc6f8: 0x8fa20164  lw          $v0, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc6f4) {
            ctx->pc = 0x2CC704u;
            goto label_2cc704;
        }
    }
    ctx->pc = 0x2CC6FCu;
label_2cc6fc:
    // 0x2cc6fc: 0x10000189  b           . + 4 + (0x189 << 2)
label_2cc700:
    if (ctx->pc == 0x2CC700u) {
        ctx->pc = 0x2CC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6FCu;
        // 0x2cc700: 0xe4420000  swc1        $f2, 0x0($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC704u;
        goto label_2cc704;
    }
    ctx->pc = 0x2CC6FCu;
    {
        const bool branch_taken_0x2cc6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6FCu;
        // 0x2cc700: 0xe4420000  swc1        $f2, 0x0($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc6fc) {
            ctx->pc = 0x2CCD24u;
            goto label_2ccd24;
        }
    }
    ctx->pc = 0x2CC704u;
label_2cc704:
    // 0x2cc704: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2cc704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc708:
    // 0x2cc708: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2cc708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cc70c:
    // 0x2cc70c: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x2cc70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cc710:
    // 0x2cc710: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2cc710u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2cc714:
    // 0x2cc714: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2cc714u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2cc718:
    // 0x2cc718: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2cc718u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_2cc71c:
    // 0x2cc71c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2cc71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2cc720:
    // 0x2cc720: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2cc720u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2cc724:
    // 0x2cc724: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x2cc724u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2cc728:
    // 0x2cc728: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x2cc728u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
label_2cc72c:
    // 0x2cc72c: 0x8fa30164  lw          $v1, 0x164($sp)
    ctx->pc = 0x2cc72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_2cc730:
    // 0x2cc730: 0x1000017b  b           . + 4 + (0x17B << 2)
label_2cc734:
    if (ctx->pc == 0x2CC734u) {
        ctx->pc = 0x2CC734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC730u;
        // 0x2cc734: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC738u;
        goto label_2cc738;
    }
    ctx->pc = 0x2CC730u;
    {
        const bool branch_taken_0x2cc730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC730u;
        // 0x2cc734: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc730) {
            ctx->pc = 0x2CCD20u;
            goto label_2ccd20;
        }
    }
    ctx->pc = 0x2CC738u;
label_2cc738:
    // 0x2cc738: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2cc738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2cc73c:
    // 0x2cc73c: 0x96e30004  lhu         $v1, 0x4($s7)
    ctx->pc = 0x2cc73cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 4)));
label_2cc740:
    // 0x2cc740: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2cc740u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cc744:
    // 0x2cc744: 0xc4563b60  lwc1        $f22, 0x3B60($v0)
    ctx->pc = 0x2cc744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 15200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2cc748:
    // 0x2cc748: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
label_2cc74c:
    if (ctx->pc == 0x2CC74Cu) {
        ctx->pc = 0x2CC74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC748u;
        // 0x2cc74c: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC750u;
        goto label_2cc750;
    }
    ctx->pc = 0x2CC748u;
    {
        const bool branch_taken_0x2cc748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC748u;
        // 0x2cc74c: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc748) {
            ctx->pc = 0x2CC874u;
            goto label_2cc874;
        }
    }
    ctx->pc = 0x2CC750u;
label_2cc750:
    // 0x2cc750: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2cc750u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cc754:
    // 0x2cc754: 0x27b40130  addiu       $s4, $sp, 0x130
    ctx->pc = 0x2cc754u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2cc758:
    // 0x2cc758: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2cc758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2cc75c:
    // 0x2cc75c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2cc75cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cc760:
    // 0x2cc760: 0xc6140000  lwc1        $f20, 0x0($s0)
    ctx->pc = 0x2cc760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2cc764:
    // 0x2cc764: 0x27a70134  addiu       $a3, $sp, 0x134
    ctx->pc = 0x2cc764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_2cc768:
    // 0x2cc768: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2cc768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2cc76c:
    // 0x2cc76c: 0x27a80138  addiu       $t0, $sp, 0x138
    ctx->pc = 0x2cc76cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_2cc770:
    // 0x2cc770: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2cc770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cc774:
    // 0x2cc774: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2cc774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc778:
    // 0x2cc778: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x2cc778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cc77c:
    // 0x2cc77c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2cc77cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2cc780:
    // 0x2cc780: 0xc4430038  lwc1        $f3, 0x38($v0)
    ctx->pc = 0x2cc780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2cc784:
    // 0x2cc784: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2cc784u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2cc788:
    // 0x2cc788: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2cc788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc78c:
    // 0x2cc78c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2cc78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2cc790:
    // 0x2cc790: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2cc790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2cc794:
    // 0x2cc794: 0xc615000c  lwc1        $f21, 0xC($s0)
    ctx->pc = 0x2cc794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2cc798:
    // 0x2cc798: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x2cc798u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
label_2cc79c:
    // 0x2cc79c: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2cc79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cc7a0:
    // 0x2cc7a0: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2cc7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2cc7a4:
    // 0x2cc7a4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2cc7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2cc7a8:
    // 0x2cc7a8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2cc7a8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2cc7ac:
    // 0x2cc7ac: 0x4615a540  add.s       $f21, $f20, $f21
    ctx->pc = 0x2cc7acu;
    ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
label_2cc7b0:
    // 0x2cc7b0: 0xc0aa82a  jal         func_2AA0A8
label_2cc7b4:
    if (ctx->pc == 0x2CC7B4u) {
        ctx->pc = 0x2CC7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7B0u;
        // 0x2cc7b4: 0x4601a500  add.s       $f20, $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC7B8u;
        goto label_2cc7b8;
    }
    ctx->pc = 0x2CC7B0u;
    SET_GPR_U32(ctx, 31, 0x2CC7B8u);
    ctx->pc = 0x2CC7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC7B0u;
    // 0x2cc7b4: 0x4601a500  add.s       $f20, $f20, $f1 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA0A8u, 0x2CC7B0u, 0x2CC7B8u)) {
        return;
    }
    ctx->pc = 0x2CC7B8u;
label_2cc7b8:
    // 0x2cc7b8: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x2cc7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc7bc:
    // 0x2cc7bc: 0xc7a20134  lwc1        $f2, 0x134($sp)
    ctx->pc = 0x2cc7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cc7c0:
    // 0x2cc7c0: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x2cc7c0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_2cc7c4:
    // 0x2cc7c4: 0x461410c1  sub.s       $f3, $f2, $f20
    ctx->pc = 0x2cc7c4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
label_2cc7c8:
    // 0x2cc7c8: 0x46151834  c.lt.s      $f3, $f21
    ctx->pc = 0x2cc7c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cc7cc:
    // 0x2cc7cc: 0x0  nop
    ctx->pc = 0x2cc7ccu;
    // NOP
label_2cc7d0:
    // 0x2cc7d0: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_2cc7d4:
    if (ctx->pc == 0x2CC7D4u) {
        ctx->pc = 0x2CC7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7D0u;
        // 0x2cc7d4: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC7D8u;
        goto label_2cc7d8;
    }
    ctx->pc = 0x2CC7D0u;
    {
        const bool branch_taken_0x2cc7d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cc7d0) {
            ctx->pc = 0x2CC7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC7D0u;
            // 0x2cc7d4: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC7FCu;
            goto label_2cc7fc;
        }
    }
    ctx->pc = 0x2CC7D8u;
label_2cc7d8:
    // 0x2cc7d8: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x2cc7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_2cc7dc:
    // 0x2cc7dc: 0x4600a886  mov.s       $f2, $f21
    ctx->pc = 0x2cc7dcu;
    ctx->f[2] = FPU_MOV_S(ctx->f[21]);
label_2cc7e0:
    // 0x2cc7e0: 0x6a050007  ldl         $a1, 0x7($s0)
    ctx->pc = 0x2cc7e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_2cc7e4:
    // 0x2cc7e4: 0x6e050000  ldr         $a1, 0x0($s0)
    ctx->pc = 0x2cc7e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2cc7e8:
    // 0x2cc7e8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2cc7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2cc7ec:
    // 0x2cc7ec: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x2cc7ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cc7f0:
    // 0x2cc7f0: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x2cc7f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cc7f4:
    // 0x2cc7f4: 0x1000000c  b           . + 4 + (0xC << 2)
label_2cc7f8:
    if (ctx->pc == 0x2CC7F8u) {
        ctx->pc = 0x2CC7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7F4u;
        // 0x2cc7f8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC7FCu;
        goto label_2cc7fc;
    }
    ctx->pc = 0x2CC7F4u;
    {
        const bool branch_taken_0x2cc7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7F4u;
        // 0x2cc7f8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc7f4) {
            ctx->pc = 0x2CC828u;
            goto label_2cc828;
        }
    }
    ctx->pc = 0x2CC7FCu;
label_2cc7fc:
    // 0x2cc7fc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2cc7fcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2cc800:
    // 0x2cc800: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2cc800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2cc804:
    // 0x2cc804: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2cc804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cc808:
    // 0x2cc808: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2cc808u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2cc80c:
    // 0x2cc80c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2cc80cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2cc810:
    // 0x2cc810: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2cc810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc814:
    // 0x2cc814: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2cc814u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2cc818:
    // 0x2cc818: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2cc818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2cc81c:
    // 0x2cc81c: 0x46001047  neg.s       $f1, $f2
    ctx->pc = 0x2cc81cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
label_2cc820:
    // 0x2cc820: 0xe6810000  swc1        $f1, 0x0($s4)
    ctx->pc = 0x2cc820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_2cc824:
    // 0x2cc824: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x2cc824u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
label_2cc828:
    // 0x2cc828: 0x4602b034  c.lt.s      $f22, $f2
    ctx->pc = 0x2cc828u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cc82c:
    // 0x2cc82c: 0x0  nop
    ctx->pc = 0x2cc82cu;
    // NOP
label_2cc830:
    // 0x2cc830: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_2cc834:
    if (ctx->pc == 0x2CC834u) {
        ctx->pc = 0x2CC834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC830u;
        // 0x2cc834: 0xc7a00130  lwc1        $f0, 0x130($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC838u;
        goto label_2cc838;
    }
    ctx->pc = 0x2CC830u;
    {
        const bool branch_taken_0x2cc830 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CC834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC830u;
        // 0x2cc834: 0xc7a00130  lwc1        $f0, 0x130($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc830) {
            ctx->pc = 0x2CC85Cu;
            goto label_2cc85c;
        }
    }
    ctx->pc = 0x2CC838u;
label_2cc838:
    // 0x2cc838: 0x46001586  mov.s       $f22, $f2
    ctx->pc = 0x2cc838u;
    ctx->f[22] = FPU_MOV_S(ctx->f[2]);
label_2cc83c:
    // 0x2cc83c: 0x8fa50164  lw          $a1, 0x164($sp)
    ctx->pc = 0x2cc83cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_2cc840:
    // 0x2cc840: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2cc840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_2cc844:
    // 0x2cc844: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2cc844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2cc848:
    // 0x2cc848: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2cc848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2cc84c:
    // 0x2cc84c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2cc84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2cc850:
    // 0x2cc850: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x2cc850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cc854:
    // 0x2cc854: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x2cc854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cc858:
    // 0x2cc858: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2cc858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_2cc85c:
    // 0x2cc85c: 0x96e20004  lhu         $v0, 0x4($s7)
    ctx->pc = 0x2cc85cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 4)));
label_2cc860:
    // 0x2cc860: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2cc860u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2cc864:
    // 0x2cc864: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x2cc864u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_2cc868:
    // 0x2cc868: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2cc868u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2cc86c:
    // 0x2cc86c: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
label_2cc870:
    if (ctx->pc == 0x2CC870u) {
        ctx->pc = 0x2CC870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC86Cu;
        // 0x2cc870: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC874u;
        goto label_2cc874;
    }
    ctx->pc = 0x2CC86Cu;
    {
        const bool branch_taken_0x2cc86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC86Cu;
        // 0x2cc870: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc86c) {
            ctx->pc = 0x2CC758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cc758;
        }
    }
    ctx->pc = 0x2CC874u;
label_2cc874:
    // 0x2cc874: 0x96c20004  lhu         $v0, 0x4($s6)
    ctx->pc = 0x2cc874u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
label_2cc878:
    // 0x2cc878: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
label_2cc87c:
    if (ctx->pc == 0x2CC87Cu) {
        ctx->pc = 0x2CC87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC878u;
        // 0x2cc87c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC880u;
        goto label_2cc880;
    }
    ctx->pc = 0x2CC878u;
    {
        const bool branch_taken_0x2cc878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC878u;
        // 0x2cc87c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc878) {
            ctx->pc = 0x2CC9ACu;
            goto label_2cc9ac;
        }
    }
    ctx->pc = 0x2CC880u;
label_2cc880:
    // 0x2cc880: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x2cc880u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2cc884:
    // 0x2cc884: 0x27b40130  addiu       $s4, $sp, 0x130
    ctx->pc = 0x2cc884u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2cc888:
    // 0x2cc888: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2cc888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cc88c:
    // 0x2cc88c: 0x0  nop
    ctx->pc = 0x2cc88cu;
    // NOP
label_2cc890:
    // 0x2cc890: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2cc890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2cc894:
    // 0x2cc894: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2cc894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cc898:
    // 0x2cc898: 0x27a7013c  addiu       $a3, $sp, 0x13C
    ctx->pc = 0x2cc898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_2cc89c:
    // 0x2cc89c: 0x27a80140  addiu       $t0, $sp, 0x140
    ctx->pc = 0x2cc89cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2cc8a0:
    // 0x2cc8a0: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2cc8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2cc8a4:
    // 0x2cc8a4: 0xc0aa82a  jal         func_2AA0A8
label_2cc8a8:
    if (ctx->pc == 0x2CC8A8u) {
        ctx->pc = 0x2CC8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC8A4u;
        // 0x2cc8a8: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC8ACu;
        goto label_2cc8ac;
    }
    ctx->pc = 0x2CC8A4u;
    SET_GPR_U32(ctx, 31, 0x2CC8ACu);
    ctx->pc = 0x2CC8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC8A4u;
    // 0x2cc8a8: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA0A8u, 0x2CC8A4u, 0x2CC8ACu)) {
        return;
    }
    ctx->pc = 0x2CC8ACu;
label_2cc8ac:
    // 0x2cc8ac: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x2cc8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2cc8b0:
    // 0x2cc8b0: 0xc6070000  lwc1        $f7, 0x0($s0)
    ctx->pc = 0x2cc8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2cc8b4:
    // 0x2cc8b4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2cc8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2cc8b8:
    // 0x2cc8b8: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2cc8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2cc8bc:
    // 0x2cc8bc: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x2cc8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cc8c0:
    // 0x2cc8c0: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2cc8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc8c4:
    // 0x2cc8c4: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2cc8c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_2cc8c8:
    // 0x2cc8c8: 0xc4420038  lwc1        $f2, 0x38($v0)
    ctx->pc = 0x2cc8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cc8cc:
    // 0x2cc8cc: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x2cc8ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_2cc8d0:
    // 0x2cc8d0: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x2cc8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2cc8d4:
    // 0x2cc8d4: 0xc606000c  lwc1        $f6, 0xC($s0)
    ctx->pc = 0x2cc8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2cc8d8:
    // 0x2cc8d8: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x2cc8d8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_2cc8dc:
    // 0x2cc8dc: 0xc6050010  lwc1        $f5, 0x10($s0)
    ctx->pc = 0x2cc8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2cc8e0:
    // 0x2cc8e0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2cc8e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_2cc8e4:
    // 0x2cc8e4: 0xc7a2013c  lwc1        $f2, 0x13C($sp)
    ctx->pc = 0x2cc8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cc8e8:
    // 0x2cc8e8: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x2cc8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cc8ec:
    // 0x2cc8ec: 0x460400c0  add.s       $f3, $f0, $f4
    ctx->pc = 0x2cc8ecu;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_2cc8f0:
    // 0x2cc8f0: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x2cc8f0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_2cc8f4:
    // 0x2cc8f4: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x2cc8f4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
label_2cc8f8:
    // 0x2cc8f8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2cc8f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_2cc8fc:
    // 0x2cc8fc: 0x46011d41  sub.s       $f21, $f3, $f1
    ctx->pc = 0x2cc8fcu;
    ctx->f[21] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_2cc900:
    // 0x2cc900: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2cc900u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2cc904:
    // 0x2cc904: 0x4602a834  c.lt.s      $f21, $f2
    ctx->pc = 0x2cc904u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cc908:
    // 0x2cc908: 0x0  nop
    ctx->pc = 0x2cc908u;
    // NOP
label_2cc90c:
    // 0x2cc90c: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_2cc910:
    if (ctx->pc == 0x2CC910u) {
        ctx->pc = 0x2CC910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC90Cu;
        // 0x2cc910: 0x46003847  neg.s       $f1, $f7 (Delay Slot)
        ctx->f[1] = FPU_NEG_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC914u;
        goto label_2cc914;
    }
    ctx->pc = 0x2CC90Cu;
    {
        const bool branch_taken_0x2cc90c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cc90c) {
            ctx->pc = 0x2CC910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC90Cu;
            // 0x2cc910: 0x46003847  neg.s       $f1, $f7 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[7]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC934u;
            goto label_2cc934;
        }
    }
    ctx->pc = 0x2CC914u;
label_2cc914:
    // 0x2cc914: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x2cc914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_2cc918:
    // 0x2cc918: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x2cc918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2cc91c:
    // 0x2cc91c: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x2cc91cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2cc920:
    // 0x2cc920: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2cc920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2cc924:
    // 0x2cc924: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2cc924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cc928:
    // 0x2cc928: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2cc928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cc92c:
    // 0x2cc92c: 0x1000000c  b           . + 4 + (0xC << 2)
label_2cc930:
    if (ctx->pc == 0x2CC930u) {
        ctx->pc = 0x2CC930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC92Cu;
        // 0x2cc930: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC934u;
        goto label_2cc934;
    }
    ctx->pc = 0x2CC92Cu;
    {
        const bool branch_taken_0x2cc92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC92Cu;
        // 0x2cc930: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc92c) {
            ctx->pc = 0x2CC960u;
            goto label_2cc960;
        }
    }
    ctx->pc = 0x2CC934u;
label_2cc934:
    // 0x2cc934: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2cc934u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2cc938:
    // 0x2cc938: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2cc938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc93c:
    // 0x2cc93c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2cc93cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2cc940:
    // 0x2cc940: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2cc940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2cc944:
    // 0x2cc944: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2cc944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cc948:
    // 0x2cc948: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2cc948u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2cc94c:
    // 0x2cc94c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2cc94cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2cc950:
    // 0x2cc950: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x2cc950u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
label_2cc954:
    // 0x2cc954: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x2cc954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_2cc958:
    // 0x2cc958: 0x4600a886  mov.s       $f2, $f21
    ctx->pc = 0x2cc958u;
    ctx->f[2] = FPU_MOV_S(ctx->f[21]);
label_2cc95c:
    // 0x2cc95c: 0x0  nop
    ctx->pc = 0x2cc95cu;
    // NOP
label_2cc960:
    // 0x2cc960: 0x4602b034  c.lt.s      $f22, $f2
    ctx->pc = 0x2cc960u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cc964:
    // 0x2cc964: 0x0  nop
    ctx->pc = 0x2cc964u;
    // NOP
label_2cc968:
    // 0x2cc968: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_2cc96c:
    if (ctx->pc == 0x2CC96Cu) {
        ctx->pc = 0x2CC96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC968u;
        // 0x2cc96c: 0xc7a00130  lwc1        $f0, 0x130($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC970u;
        goto label_2cc970;
    }
    ctx->pc = 0x2CC968u;
    {
        const bool branch_taken_0x2cc968 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CC96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC968u;
        // 0x2cc96c: 0xc7a00130  lwc1        $f0, 0x130($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc968) {
            ctx->pc = 0x2CC994u;
            goto label_2cc994;
        }
    }
    ctx->pc = 0x2CC970u;
label_2cc970:
    // 0x2cc970: 0x46001586  mov.s       $f22, $f2
    ctx->pc = 0x2cc970u;
    ctx->f[22] = FPU_MOV_S(ctx->f[2]);
label_2cc974:
    // 0x2cc974: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x2cc974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_2cc978:
    // 0x2cc978: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2cc978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2cc97c:
    // 0x2cc97c: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x2cc97cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2cc980:
    // 0x2cc980: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x2cc980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2cc984:
    // 0x2cc984: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2cc984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2cc988:
    // 0x2cc988: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x2cc988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cc98c:
    // 0x2cc98c: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x2cc98cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cc990:
    // 0x2cc990: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x2cc990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
label_2cc994:
    // 0x2cc994: 0x96c20004  lhu         $v0, 0x4($s6)
    ctx->pc = 0x2cc994u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
label_2cc998:
    // 0x2cc998: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2cc998u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2cc99c:
    // 0x2cc99c: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x2cc99cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_2cc9a0:
    // 0x2cc9a0: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2cc9a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2cc9a4:
    // 0x2cc9a4: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
label_2cc9a8:
    if (ctx->pc == 0x2CC9A8u) {
        ctx->pc = 0x2CC9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC9A4u;
        // 0x2cc9a8: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC9ACu;
        goto label_2cc9ac;
    }
    ctx->pc = 0x2CC9A4u;
    {
        const bool branch_taken_0x2cc9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC9A4u;
        // 0x2cc9a8: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc9a4) {
            ctx->pc = 0x2CC890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cc890;
        }
    }
    ctx->pc = 0x2CC9ACu;
label_2cc9ac:
    // 0x2cc9ac: 0x96e20002  lhu         $v0, 0x2($s7)
    ctx->pc = 0x2cc9acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_2cc9b0:
    // 0x2cc9b0: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
label_2cc9b4:
    if (ctx->pc == 0x2CC9B4u) {
        ctx->pc = 0x2CC9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC9B0u;
        // 0x2cc9b4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC9B8u;
        goto label_2cc9b8;
    }
    ctx->pc = 0x2CC9B0u;
    {
        const bool branch_taken_0x2cc9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC9B0u;
        // 0x2cc9b4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc9b0) {
            ctx->pc = 0x2CCB84u;
            goto label_2ccb84;
        }
    }
    ctx->pc = 0x2CC9B8u;
label_2cc9b8:
    // 0x2cc9b8: 0x96c20002  lhu         $v0, 0x2($s6)
    ctx->pc = 0x2cc9b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
label_2cc9bc:
    // 0x2cc9bc: 0x0  nop
    ctx->pc = 0x2cc9bcu;
    // NOP
label_2cc9c0:
    // 0x2cc9c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2cc9c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cc9c4:
    // 0x2cc9c4: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
label_2cc9c8:
    if (ctx->pc == 0x2CC9C8u) {
        ctx->pc = 0x2CC9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC9C4u;
        // 0x2cc9c8: 0x265e0001  addiu       $fp, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC9CCu;
        goto label_2cc9cc;
    }
    ctx->pc = 0x2CC9C4u;
    {
        const bool branch_taken_0x2cc9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC9C4u;
        // 0x2cc9c8: 0x265e0001  addiu       $fp, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc9c4) {
            ctx->pc = 0x2CCB70u;
            goto label_2ccb70;
        }
    }
    ctx->pc = 0x2CC9CCu;
label_2cc9cc:
    // 0x2cc9cc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2cc9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2cc9d0:
    // 0x2cc9d0: 0xc7978238  lwc1        $f23, -0x7DC8($gp)
    ctx->pc = 0x2cc9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2cc9d4:
    // 0x2cc9d4: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x2cc9d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2cc9d8:
    // 0x2cc9d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cc9d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2cc9dc:
    // 0x2cc9dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2cc9dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2cc9e0:
    // 0x2cc9e0: 0x27b000f0  addiu       $s0, $sp, 0xF0
    ctx->pc = 0x2cc9e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2cc9e4:
    // 0x2cc9e4: 0x5d9821  addu        $s3, $v0, $sp
    ctx->pc = 0x2cc9e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2cc9e8:
    // 0x2cc9e8: 0x267200c0  addiu       $s2, $s3, 0xC0
    ctx->pc = 0x2cc9e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
label_2cc9ec:
    // 0x2cc9ec: 0x0  nop
    ctx->pc = 0x2cc9ecu;
    // NOP
label_2cc9f0:
    // 0x2cc9f0: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2cc9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2cc9f4:
    // 0x2cc9f4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2cc9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cc9f8:
    // 0x2cc9f8: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x2cc9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cc9fc:
    // 0x2cc9fc: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2cc9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cca00:
    // 0x2cca00: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2cca00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_2cca04:
    // 0x2cca04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cca04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2cca08:
    // 0x2cca08: 0x46001141  sub.s       $f5, $f2, $f0
    ctx->pc = 0x2cca08u;
    ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2cca0c:
    // 0x2cca0c: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x2cca0cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2cca10:
    // 0x2cca10: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x2cca10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2cca14:
    // 0x2cca14: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2cca14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cca18:
    // 0x2cca18: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x2cca18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cca1c:
    // 0x2cca1c: 0xc66000c0  lwc1        $f0, 0xC0($s3)
    ctx->pc = 0x2cca1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cca20:
    // 0x2cca20: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2cca20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_2cca24:
    // 0x2cca24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cca24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2cca28:
    // 0x2cca28: 0x46001101  sub.s       $f4, $f2, $f0
    ctx->pc = 0x2cca28u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2cca2c:
    // 0x2cca2c: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x2cca2cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2cca30:
    // 0x2cca30: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2cca30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2cca34:
    // 0x2cca34: 0xc66200c0  lwc1        $f2, 0xC0($s3)
    ctx->pc = 0x2cca34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cca38:
    // 0x2cca38: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2cca38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cca3c:
    // 0x2cca3c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2cca3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cca40:
    // 0x2cca40: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2cca40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_2cca44:
    // 0x2cca44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cca44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2cca48:
    // 0x2cca48: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x2cca48u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2cca4c:
    // 0x2cca4c: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x2cca4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_2cca50:
    // 0x2cca50: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x2cca50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_2cca54:
    // 0x2cca54: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x2cca54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_2cca58:
    // 0x2cca58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cca58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2cca5c:
    // 0x2cca5c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cca5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2cca60:
    // 0x2cca60: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x2cca60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cca64:
    // 0x2cca64: 0x0  nop
    ctx->pc = 0x2cca64u;
    // NOP
label_2cca68:
    // 0x2cca68: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
label_2cca6c:
    if (ctx->pc == 0x2CCA6Cu) {
        ctx->pc = 0x2CCA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA68u;
        // 0x2cca6c: 0xe7a30018  swc1        $f3, 0x18($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCA70u;
        goto label_2cca70;
    }
    ctx->pc = 0x2CCA68u;
    {
        const bool branch_taken_0x2cca68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CCA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA68u;
        // 0x2cca6c: 0xe7a30018  swc1        $f3, 0x18($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca68) {
            ctx->pc = 0x2CCB5Cu;
            goto label_2ccb5c;
        }
    }
    ctx->pc = 0x2CCA70u;
label_2cca70:
    // 0x2cca70: 0x4600a016  rsqrt.s     $f0, $f20, $f0
    ctx->pc = 0x2cca70u;
    ctx->f[0] = FPU_RSQRT_S(ctx, ctx->f[20], ctx->f[0]);
label_2cca74:
    // 0x2cca74: 0x46002842  mul.s       $f1, $f5, $f0
    ctx->pc = 0x2cca74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_2cca78:
    // 0x2cca78: 0x46001882  mul.s       $f2, $f3, $f0
    ctx->pc = 0x2cca78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_2cca7c:
    // 0x2cca7c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2cca7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2cca80:
    // 0x2cca80: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2cca80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2cca84:
    // 0x2cca84: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2cca84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2cca88:
    // 0x2cca88: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2cca88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2cca8c:
    // 0x2cca8c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2cca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2cca90:
    // 0x2cca90: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2cca90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2cca94:
    // 0x2cca94: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2cca94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2cca98:
    // 0x2cca98: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2cca98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2cca9c:
    // 0x2cca9c: 0x27a70144  addiu       $a3, $sp, 0x144
    ctx->pc = 0x2cca9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
label_2ccaa0:
    // 0x2ccaa0: 0xc0aa82a  jal         func_2AA0A8
label_2ccaa4:
    if (ctx->pc == 0x2CCAA4u) {
        ctx->pc = 0x2CCAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCAA0u;
        // 0x2ccaa4: 0x27a80148  addiu       $t0, $sp, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCAA8u;
        goto label_2ccaa8;
    }
    ctx->pc = 0x2CCAA0u;
    SET_GPR_U32(ctx, 31, 0x2CCAA8u);
    ctx->pc = 0x2CCAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCAA0u;
    // 0x2ccaa4: 0x27a80148  addiu       $t0, $sp, 0x148 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA0A8u, 0x2CCAA0u, 0x2CCAA8u)) {
        return;
    }
    ctx->pc = 0x2CCAA8u;
label_2ccaa8:
    // 0x2ccaa8: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x2ccaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2ccaac:
    // 0x2ccaac: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2ccaacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2ccab0:
    // 0x2ccab0: 0x27a7014c  addiu       $a3, $sp, 0x14C
    ctx->pc = 0x2ccab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_2ccab4:
    // 0x2ccab4: 0x27a80150  addiu       $t0, $sp, 0x150
    ctx->pc = 0x2ccab4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2ccab8:
    // 0x2ccab8: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x2ccab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2ccabc:
    // 0x2ccabc: 0xc0aa82a  jal         func_2AA0A8
label_2ccac0:
    if (ctx->pc == 0x2CCAC0u) {
        ctx->pc = 0x2CCAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCABCu;
        // 0x2ccac0: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCAC4u;
        goto label_2ccac4;
    }
    ctx->pc = 0x2CCABCu;
    SET_GPR_U32(ctx, 31, 0x2CCAC4u);
    ctx->pc = 0x2CCAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCABCu;
    // 0x2ccac0: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA0A8u, 0x2CCABCu, 0x2CCAC4u)) {
        return;
    }
    ctx->pc = 0x2CCAC4u;
label_2ccac4:
    // 0x2ccac4: 0xc7a20150  lwc1        $f2, 0x150($sp)
    ctx->pc = 0x2ccac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2ccac8:
    // 0x2ccac8: 0xc7a3014c  lwc1        $f3, 0x14C($sp)
    ctx->pc = 0x2ccac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2ccacc:
    // 0x2ccacc: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x2ccaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ccad0:
    // 0x2ccad0: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x2ccad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ccad4:
    // 0x2ccad4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2ccad4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_2ccad8:
    // 0x2ccad8: 0x46011d41  sub.s       $f21, $f3, $f1
    ctx->pc = 0x2ccad8u;
    ctx->f[21] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_2ccadc:
    // 0x2ccadc: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2ccadcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ccae0:
    // 0x2ccae0: 0x0  nop
    ctx->pc = 0x2ccae0u;
    // NOP
label_2ccae4:
    // 0x2ccae4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_2ccae8:
    if (ctx->pc == 0x2CCAE8u) {
        ctx->pc = 0x2CCAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCAE4u;
        // 0x2ccae8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCAECu;
        goto label_2ccaec;
    }
    ctx->pc = 0x2CCAE4u;
    {
        const bool branch_taken_0x2ccae4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ccae4) {
            ctx->pc = 0x2CCAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCAE4u;
            // 0x2ccae8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCAF8u;
            goto label_2ccaf8;
        }
    }
    ctx->pc = 0x2CCAECu;
label_2ccaec:
    // 0x2ccaec: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x2ccaecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_2ccaf0:
    // 0x2ccaf0: 0x1000000d  b           . + 4 + (0xD << 2)
label_2ccaf4:
    if (ctx->pc == 0x2CCAF4u) {
        ctx->pc = 0x2CCAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCAF0u;
        // 0x2ccaf4: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCAF8u;
        goto label_2ccaf8;
    }
    ctx->pc = 0x2CCAF0u;
    {
        const bool branch_taken_0x2ccaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCAF0u;
        // 0x2ccaf4: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccaf0) {
            ctx->pc = 0x2CCB28u;
            goto label_2ccb28;
        }
    }
    ctx->pc = 0x2CCAF8u;
label_2ccaf8:
    // 0x2ccaf8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2ccaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ccafc:
    // 0x2ccafc: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2ccafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2ccb00:
    // 0x2ccb00: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2ccb00u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2ccb04:
    // 0x2ccb04: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2ccb04u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2ccb08:
    // 0x2ccb08: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2ccb08u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_2ccb0c:
    // 0x2ccb0c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2ccb0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2ccb10:
    // 0x2ccb10: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2ccb10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2ccb14:
    // 0x2ccb14: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2ccb14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2ccb18:
    // 0x2ccb18: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x2ccb18u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
label_2ccb1c:
    // 0x2ccb1c: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x2ccb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_2ccb20:
    // 0x2ccb20: 0x4600a886  mov.s       $f2, $f21
    ctx->pc = 0x2ccb20u;
    ctx->f[2] = FPU_MOV_S(ctx->f[21]);
label_2ccb24:
    // 0x2ccb24: 0x0  nop
    ctx->pc = 0x2ccb24u;
    // NOP
label_2ccb28:
    // 0x2ccb28: 0x4602b034  c.lt.s      $f22, $f2
    ctx->pc = 0x2ccb28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ccb2c:
    // 0x2ccb2c: 0x0  nop
    ctx->pc = 0x2ccb2cu;
    // NOP
label_2ccb30:
    // 0x2ccb30: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_2ccb34:
    if (ctx->pc == 0x2CCB34u) {
        ctx->pc = 0x2CCB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB30u;
        // 0x2ccb34: 0xc7a00130  lwc1        $f0, 0x130($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCB38u;
        goto label_2ccb38;
    }
    ctx->pc = 0x2CCB30u;
    {
        const bool branch_taken_0x2ccb30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CCB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB30u;
        // 0x2ccb34: 0xc7a00130  lwc1        $f0, 0x130($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccb30) {
            ctx->pc = 0x2CCB5Cu;
            goto label_2ccb5c;
        }
    }
    ctx->pc = 0x2CCB38u;
label_2ccb38:
    // 0x2ccb38: 0x46001586  mov.s       $f22, $f2
    ctx->pc = 0x2ccb38u;
    ctx->f[22] = FPU_MOV_S(ctx->f[2]);
label_2ccb3c:
    // 0x2ccb3c: 0x8fa30164  lw          $v1, 0x164($sp)
    ctx->pc = 0x2ccb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_2ccb40:
    // 0x2ccb40: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2ccb40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2ccb44:
    // 0x2ccb44: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x2ccb44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2ccb48:
    // 0x2ccb48: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x2ccb48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2ccb4c:
    // 0x2ccb4c: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2ccb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ccb50:
    // 0x2ccb50: 0xb2240007  sdl         $a0, 0x7($s1)
    ctx->pc = 0x2ccb50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2ccb54:
    // 0x2ccb54: 0xb6240000  sdr         $a0, 0x0($s1)
    ctx->pc = 0x2ccb54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2ccb58:
    // 0x2ccb58: 0xae250008  sw          $a1, 0x8($s1)
    ctx->pc = 0x2ccb58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
label_2ccb5c:
    // 0x2ccb5c: 0x96c20002  lhu         $v0, 0x2($s6)
    ctx->pc = 0x2ccb5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
label_2ccb60:
    // 0x2ccb60: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2ccb60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2ccb64:
    // 0x2ccb64: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2ccb64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ccb68:
    // 0x2ccb68: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
label_2ccb6c:
    if (ctx->pc == 0x2CCB6Cu) {
        ctx->pc = 0x2CCB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB68u;
        // 0x2ccb6c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCB70u;
        goto label_2ccb70;
    }
    ctx->pc = 0x2CCB68u;
    {
        const bool branch_taken_0x2ccb68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CCB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB68u;
        // 0x2ccb6c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccb68) {
            ctx->pc = 0x2CC9F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cc9f0;
        }
    }
    ctx->pc = 0x2CCB70u;
label_2ccb70:
    // 0x2ccb70: 0x96e20002  lhu         $v0, 0x2($s7)
    ctx->pc = 0x2ccb70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_2ccb74:
    // 0x2ccb74: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x2ccb74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2ccb78:
    // 0x2ccb78: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2ccb78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ccb7c:
    // 0x2ccb7c: 0x5440ff90  bnel        $v0, $zero, . + 4 + (-0x70 << 2)
label_2ccb80:
    if (ctx->pc == 0x2CCB80u) {
        ctx->pc = 0x2CCB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB7Cu;
        // 0x2ccb80: 0x96c20002  lhu         $v0, 0x2($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCB84u;
        goto label_2ccb84;
    }
    ctx->pc = 0x2CCB7Cu;
    {
        const bool branch_taken_0x2ccb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ccb7c) {
            ctx->pc = 0x2CCB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCB7Cu;
            // 0x2ccb80: 0x96c20002  lhu         $v0, 0x2($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cc9c0;
        }
    }
    ctx->pc = 0x2CCB84u;
label_2ccb84:
    // 0x2ccb84: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2ccb84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_2ccb88:
    // 0x2ccb88: 0xc4803b60  lwc1        $f0, 0x3B60($a0)
    ctx->pc = 0x2ccb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 15200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ccb8c:
    // 0x2ccb8c: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x2ccb8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ccb90:
    // 0x2ccb90: 0x0  nop
    ctx->pc = 0x2ccb90u;
    // NOP
label_2ccb94:
    // 0x2ccb94: 0x45010063  bc1t        . + 4 + (0x63 << 2)
label_2ccb98:
    if (ctx->pc == 0x2CCB98u) {
        ctx->pc = 0x2CCB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB94u;
        // 0x2ccb98: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCB9Cu;
        goto label_2ccb9c;
    }
    ctx->pc = 0x2CCB94u;
    {
        const bool branch_taken_0x2ccb94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CCB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB94u;
        // 0x2ccb98: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccb94) {
            ctx->pc = 0x2CCD24u;
            goto label_2ccd24;
        }
    }
    ctx->pc = 0x2CCB9Cu;
label_2ccb9c:
    // 0x2ccb9c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2ccb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2ccba0:
    // 0x2ccba0: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x2ccba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2ccba4:
    // 0x2ccba4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2ccba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2ccba8:
    // 0x2ccba8: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2ccba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2ccbac:
    // 0x2ccbac: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x2ccbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_2ccbb0:
    // 0x2ccbb0: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x2ccbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_2ccbb4:
    // 0x2ccbb4: 0xc4460030  lwc1        $f6, 0x30($v0)
    ctx->pc = 0x2ccbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2ccbb8:
    // 0x2ccbb8: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x2ccbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ccbbc:
    // 0x2ccbbc: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x2ccbbcu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_2ccbc0:
    // 0x2ccbc0: 0xe6260000  swc1        $f6, 0x0($s1)
    ctx->pc = 0x2ccbc0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2ccbc4:
    // 0x2ccbc4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2ccbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ccbc8:
    // 0x2ccbc8: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x2ccbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2ccbcc:
    // 0x2ccbcc: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2ccbccu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_2ccbd0:
    // 0x2ccbd0: 0xe6240004  swc1        $f4, 0x4($s1)
    ctx->pc = 0x2ccbd0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2ccbd4:
    // 0x2ccbd4: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x2ccbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2ccbd8:
    // 0x2ccbd8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2ccbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ccbdc:
    // 0x2ccbdc: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x2ccbdcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_2ccbe0:
    // 0x2ccbe0: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x2ccbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ccbe4:
    // 0x2ccbe4: 0xc7a200f4  lwc1        $f2, 0xF4($sp)
    ctx->pc = 0x2ccbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2ccbe8:
    // 0x2ccbe8: 0x460130c2  mul.s       $f3, $f6, $f1
    ctx->pc = 0x2ccbe8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_2ccbec:
    // 0x2ccbec: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x2ccbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ccbf0:
    // 0x2ccbf0: 0x460221c2  mul.s       $f7, $f4, $f2
    ctx->pc = 0x2ccbf0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_2ccbf4:
    // 0x2ccbf4: 0x46002a02  mul.s       $f8, $f5, $f0
    ctx->pc = 0x2ccbf4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_2ccbf8:
    // 0x2ccbf8: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x2ccbf8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
label_2ccbfc:
    // 0x2ccbfc: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x2ccbfcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
label_2ccc00:
    // 0x2ccc00: 0x46001d07  neg.s       $f20, $f3
    ctx->pc = 0x2ccc00u;
    ctx->f[20] = FPU_NEG_S(ctx->f[3]);
label_2ccc04:
    // 0x2ccc04: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2ccc04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_2ccc08:
    // 0x2ccc08: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2ccc08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_2ccc0c:
    // 0x2ccc0c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2ccc0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2ccc10:
    // 0x2ccc10: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x2ccc10u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
label_2ccc14:
    // 0x2ccc14: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x2ccc14u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_2ccc18:
    // 0x2ccc18: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2ccc18u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_2ccc1c:
    // 0x2ccc1c: 0xe6260000  swc1        $f6, 0x0($s1)
    ctx->pc = 0x2ccc1cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2ccc20:
    // 0x2ccc20: 0xe6240004  swc1        $f4, 0x4($s1)
    ctx->pc = 0x2ccc20u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2ccc24:
    // 0x2ccc24: 0xe6250008  swc1        $f5, 0x8($s1)
    ctx->pc = 0x2ccc24u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2ccc28:
    // 0x2ccc28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ccc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ccc2c:
    // 0x2ccc2c: 0xc0ad20c  jal         func_2B4830
label_2ccc30:
    if (ctx->pc == 0x2CCC30u) {
        ctx->pc = 0x2CCC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCC2Cu;
        // 0x2ccc30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCC34u;
        goto label_2ccc34;
    }
    ctx->pc = 0x2CCC2Cu;
    SET_GPR_U32(ctx, 31, 0x2CCC34u);
    ctx->pc = 0x2CCC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCC2Cu;
    // 0x2ccc30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x2CCC2Cu, 0x2CCC34u)) {
        return;
    }
    ctx->pc = 0x2CCC34u;
label_2ccc34:
    // 0x2ccc34: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2ccc34u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2ccc38:
    // 0x2ccc38: 0x4600a505  abs.s       $f20, $f20
    ctx->pc = 0x2ccc38u;
    ctx->f[20] = FPU_ABS_S(ctx->f[20]);
label_2ccc3c:
    // 0x2ccc3c: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x2ccc3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
label_2ccc40:
    // 0x2ccc40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ccc40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ccc44:
    // 0x2ccc44: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2ccc44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ccc48:
    // 0x2ccc48: 0x0  nop
    ctx->pc = 0x2ccc48u;
    // NOP
label_2ccc4c:
    // 0x2ccc4c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_2ccc50:
    if (ctx->pc == 0x2CCC50u) {
        ctx->pc = 0x2CCC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCC4Cu;
        // 0x2ccc50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCC54u;
        goto label_2ccc54;
    }
    ctx->pc = 0x2CCC4Cu;
    {
        const bool branch_taken_0x2ccc4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CCC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCC4Cu;
        // 0x2ccc50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccc4c) {
            ctx->pc = 0x2CCC70u;
            goto label_2ccc70;
        }
    }
    ctx->pc = 0x2CCC54u;
label_2ccc54:
    // 0x2ccc54: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x2ccc54u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[20]);
label_2ccc58:
    // 0x2ccc58: 0xc780823c  lwc1        $f0, -0x7DC4($gp)
    ctx->pc = 0x2ccc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ccc5c:
    // 0x2ccc5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ccc5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ccc60:
    // 0x2ccc60: 0x0  nop
    ctx->pc = 0x2ccc60u;
    // NOP
label_2ccc64:
    // 0x2ccc64: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_2ccc68:
    if (ctx->pc == 0x2CCC68u) {
        ctx->pc = 0x2CCC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCC64u;
        // 0x2ccc68: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCC6Cu;
        goto label_2ccc6c;
    }
    ctx->pc = 0x2CCC64u;
    {
        const bool branch_taken_0x2ccc64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ccc64) {
            ctx->pc = 0x2CCC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCC64u;
            // 0x2ccc68: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCC88u;
            goto label_2ccc88;
        }
    }
    ctx->pc = 0x2CCC6Cu;
label_2ccc6c:
    // 0x2ccc6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ccc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ccc70:
    // 0x2ccc70: 0xc0ad22e  jal         func_2B48B8
label_2ccc74:
    if (ctx->pc == 0x2CCC74u) {
        ctx->pc = 0x2CCC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCC70u;
        // 0x2ccc74: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCC78u;
        goto label_2ccc78;
    }
    ctx->pc = 0x2CCC70u;
    SET_GPR_U32(ctx, 31, 0x2CCC78u);
    ctx->pc = 0x2CCC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCC70u;
    // 0x2ccc74: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B48B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B48B8u, 0x2CCC70u, 0x2CCC78u)) {
        return;
    }
    ctx->pc = 0x2CCC78u;
label_2ccc78:
    // 0x2ccc78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ccc78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ccc7c:
    // 0x2ccc7c: 0xc0ad20c  jal         func_2B4830
label_2ccc80:
    if (ctx->pc == 0x2CCC80u) {
        ctx->pc = 0x2CCC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCC7Cu;
        // 0x2ccc80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCC84u;
        goto label_2ccc84;
    }
    ctx->pc = 0x2CCC7Cu;
    SET_GPR_U32(ctx, 31, 0x2CCC84u);
    ctx->pc = 0x2CCC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCC7Cu;
    // 0x2ccc80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x2CCC7Cu, 0x2CCC84u)) {
        return;
    }
    ctx->pc = 0x2CCC84u;
label_2ccc84:
    // 0x2ccc84: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2ccc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2ccc88:
    // 0x2ccc88: 0x27a70154  addiu       $a3, $sp, 0x154
    ctx->pc = 0x2ccc88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
label_2ccc8c:
    // 0x2ccc8c: 0x27a80158  addiu       $t0, $sp, 0x158
    ctx->pc = 0x2ccc8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_2ccc90:
    // 0x2ccc90: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ccc90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ccc94:
    // 0x2ccc94: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2ccc94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2ccc98:
    // 0x2ccc98: 0xc0aa82a  jal         func_2AA0A8
label_2ccc9c:
    if (ctx->pc == 0x2CCC9Cu) {
        ctx->pc = 0x2CCC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCC98u;
        // 0x2ccc9c: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCCA0u;
        goto label_2ccca0;
    }
    ctx->pc = 0x2CCC98u;
    SET_GPR_U32(ctx, 31, 0x2CCCA0u);
    ctx->pc = 0x2CCC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCC98u;
    // 0x2ccc9c: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA0A8u, 0x2CCC98u, 0x2CCCA0u)) {
        return;
    }
    ctx->pc = 0x2CCCA0u;
label_2ccca0:
    // 0x2ccca0: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x2ccca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2ccca4:
    // 0x2ccca4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ccca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ccca8:
    // 0x2ccca8: 0x27a7015c  addiu       $a3, $sp, 0x15C
    ctx->pc = 0x2ccca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
label_2cccac:
    // 0x2cccac: 0x27a80160  addiu       $t0, $sp, 0x160
    ctx->pc = 0x2cccacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_2cccb0:
    // 0x2cccb0: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x2cccb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2cccb4:
    // 0x2cccb4: 0xc0aa82a  jal         func_2AA0A8
label_2cccb8:
    if (ctx->pc == 0x2CCCB8u) {
        ctx->pc = 0x2CCCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCCB4u;
        // 0x2cccb8: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCCBCu;
        goto label_2cccbc;
    }
    ctx->pc = 0x2CCCB4u;
    SET_GPR_U32(ctx, 31, 0x2CCCBCu);
    ctx->pc = 0x2CCCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCCB4u;
    // 0x2cccb8: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA0A8u, 0x2CCCB4u, 0x2CCCBCu)) {
        return;
    }
    ctx->pc = 0x2CCCBCu;
label_2cccbc:
    // 0x2cccbc: 0xc7a20160  lwc1        $f2, 0x160($sp)
    ctx->pc = 0x2cccbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cccc0:
    // 0x2cccc0: 0xc7a4015c  lwc1        $f4, 0x15C($sp)
    ctx->pc = 0x2cccc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2cccc4:
    // 0x2cccc4: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x2cccc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cccc8:
    // 0x2cccc8: 0xc7a10158  lwc1        $f1, 0x158($sp)
    ctx->pc = 0x2cccc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ccccc:
    // 0x2ccccc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2cccccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_2cccd0:
    // 0x2cccd0: 0x460120c1  sub.s       $f3, $f4, $f1
    ctx->pc = 0x2cccd0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
label_2cccd4:
    // 0x2cccd4: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2cccd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cccd8:
    // 0x2cccd8: 0x0  nop
    ctx->pc = 0x2cccd8u;
    // NOP
label_2cccdc:
    // 0x2cccdc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2ccce0:
    if (ctx->pc == 0x2CCCE0u) {
        ctx->pc = 0x2CCCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCCDCu;
        // 0x2ccce0: 0x8fa50164  lw          $a1, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCCE4u;
        goto label_2ccce4;
    }
    ctx->pc = 0x2CCCDCu;
    {
        const bool branch_taken_0x2cccdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CCCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCCDCu;
        // 0x2ccce0: 0x8fa50164  lw          $a1, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cccdc) {
            ctx->pc = 0x2CCCECu;
            goto label_2cccec;
        }
    }
    ctx->pc = 0x2CCCE4u;
label_2ccce4:
    // 0x2ccce4: 0x1000000f  b           . + 4 + (0xF << 2)
label_2ccce8:
    if (ctx->pc == 0x2CCCE8u) {
        ctx->pc = 0x2CCCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCCE4u;
        // 0x2ccce8: 0xe4a20000  swc1        $f2, 0x0($a1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCCECu;
        goto label_2cccec;
    }
    ctx->pc = 0x2CCCE4u;
    {
        const bool branch_taken_0x2ccce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCCE4u;
        // 0x2ccce8: 0xe4a20000  swc1        $f2, 0x0($a1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccce4) {
            ctx->pc = 0x2CCD24u;
            goto label_2ccd24;
        }
    }
    ctx->pc = 0x2CCCECu;
label_2cccec:
    // 0x2cccec: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2cccecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cccf0:
    // 0x2cccf0: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2cccf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cccf4:
    // 0x2cccf4: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x2cccf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cccf8:
    // 0x2cccf8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2cccf8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2cccfc:
    // 0x2cccfc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2cccfcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2ccd00:
    // 0x2ccd00: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2ccd00u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_2ccd04:
    // 0x2ccd04: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2ccd04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2ccd08:
    // 0x2ccd08: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2ccd08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2ccd0c:
    // 0x2ccd0c: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x2ccd0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2ccd10:
    // 0x2ccd10: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x2ccd10u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
label_2ccd14:
    // 0x2ccd14: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x2ccd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_2ccd18:
    // 0x2ccd18: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2ccd18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2ccd1c:
    // 0x2ccd1c: 0x0  nop
    ctx->pc = 0x2ccd1cu;
    // NOP
label_2ccd20:
    // 0x2ccd20: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x2ccd20u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_2ccd24:
    // 0x2ccd24: 0x7bb00200  lq          $s0, 0x200($sp)
    ctx->pc = 0x2ccd24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_2ccd28:
    // 0x2ccd28: 0x7bb101f0  lq          $s1, 0x1F0($sp)
    ctx->pc = 0x2ccd28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_2ccd2c:
    // 0x2ccd2c: 0x7bb201e0  lq          $s2, 0x1E0($sp)
    ctx->pc = 0x2ccd2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_2ccd30:
    // 0x2ccd30: 0x7bb301d0  lq          $s3, 0x1D0($sp)
    ctx->pc = 0x2ccd30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_2ccd34:
    // 0x2ccd34: 0x7bb401c0  lq          $s4, 0x1C0($sp)
    ctx->pc = 0x2ccd34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_2ccd38:
    // 0x2ccd38: 0x7bb501b0  lq          $s5, 0x1B0($sp)
    ctx->pc = 0x2ccd38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_2ccd3c:
    // 0x2ccd3c: 0x7bb601a0  lq          $s6, 0x1A0($sp)
    ctx->pc = 0x2ccd3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_2ccd40:
    // 0x2ccd40: 0x7bb70190  lq          $s7, 0x190($sp)
    ctx->pc = 0x2ccd40u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_2ccd44:
    // 0x2ccd44: 0x7bbe0180  lq          $fp, 0x180($sp)
    ctx->pc = 0x2ccd44u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_2ccd48:
    // 0x2ccd48: 0xdfbf0170  ld          $ra, 0x170($sp)
    ctx->pc = 0x2ccd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_2ccd4c:
    // 0x2ccd4c: 0xc7b70228  lwc1        $f23, 0x228($sp)
    ctx->pc = 0x2ccd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2ccd50:
    // 0x2ccd50: 0xc7b60220  lwc1        $f22, 0x220($sp)
    ctx->pc = 0x2ccd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2ccd54:
    // 0x2ccd54: 0xc7b50218  lwc1        $f21, 0x218($sp)
    ctx->pc = 0x2ccd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2ccd58:
    // 0x2ccd58: 0xc7b40210  lwc1        $f20, 0x210($sp)
    ctx->pc = 0x2ccd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ccd5c:
    // 0x2ccd5c: 0x3e00008  jr          $ra
label_2ccd60:
    if (ctx->pc == 0x2CCD60u) {
        ctx->pc = 0x2CCD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCD5Cu;
        // 0x2ccd60: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCD64u;
        goto label_2ccd64;
    }
    ctx->pc = 0x2CCD5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCD5Cu;
        // 0x2ccd60: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CCD5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CCD64u;
label_2ccd64:
    // 0x2ccd64: 0x0  nop
    ctx->pc = 0x2ccd64u;
    // NOP
    ctx->pc = 0x2ccd68u;
}
