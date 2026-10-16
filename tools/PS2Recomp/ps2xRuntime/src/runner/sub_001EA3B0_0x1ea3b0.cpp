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

// Function: sub_001EA3B0
// Address: 0x1ea3b0 - 0x1eac28
void sub_001EA3B0_0x1ea3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA3B0_0x1ea3b0");
#endif

    switch (ctx->pc) {
        case 0x1ea3b0u: goto label_1ea3b0;
        case 0x1ea3b4u: goto label_1ea3b4;
        case 0x1ea3b8u: goto label_1ea3b8;
        case 0x1ea3bcu: goto label_1ea3bc;
        case 0x1ea3c0u: goto label_1ea3c0;
        case 0x1ea3c4u: goto label_1ea3c4;
        case 0x1ea3c8u: goto label_1ea3c8;
        case 0x1ea3ccu: goto label_1ea3cc;
        case 0x1ea3d0u: goto label_1ea3d0;
        case 0x1ea3d4u: goto label_1ea3d4;
        case 0x1ea3d8u: goto label_1ea3d8;
        case 0x1ea3dcu: goto label_1ea3dc;
        case 0x1ea3e0u: goto label_1ea3e0;
        case 0x1ea3e4u: goto label_1ea3e4;
        case 0x1ea3e8u: goto label_1ea3e8;
        case 0x1ea3ecu: goto label_1ea3ec;
        case 0x1ea3f0u: goto label_1ea3f0;
        case 0x1ea3f4u: goto label_1ea3f4;
        case 0x1ea3f8u: goto label_1ea3f8;
        case 0x1ea3fcu: goto label_1ea3fc;
        case 0x1ea400u: goto label_1ea400;
        case 0x1ea404u: goto label_1ea404;
        case 0x1ea408u: goto label_1ea408;
        case 0x1ea40cu: goto label_1ea40c;
        case 0x1ea410u: goto label_1ea410;
        case 0x1ea414u: goto label_1ea414;
        case 0x1ea418u: goto label_1ea418;
        case 0x1ea41cu: goto label_1ea41c;
        case 0x1ea420u: goto label_1ea420;
        case 0x1ea424u: goto label_1ea424;
        case 0x1ea428u: goto label_1ea428;
        case 0x1ea42cu: goto label_1ea42c;
        case 0x1ea430u: goto label_1ea430;
        case 0x1ea434u: goto label_1ea434;
        case 0x1ea438u: goto label_1ea438;
        case 0x1ea43cu: goto label_1ea43c;
        case 0x1ea440u: goto label_1ea440;
        case 0x1ea444u: goto label_1ea444;
        case 0x1ea448u: goto label_1ea448;
        case 0x1ea44cu: goto label_1ea44c;
        case 0x1ea450u: goto label_1ea450;
        case 0x1ea454u: goto label_1ea454;
        case 0x1ea458u: goto label_1ea458;
        case 0x1ea45cu: goto label_1ea45c;
        case 0x1ea460u: goto label_1ea460;
        case 0x1ea464u: goto label_1ea464;
        case 0x1ea468u: goto label_1ea468;
        case 0x1ea46cu: goto label_1ea46c;
        case 0x1ea470u: goto label_1ea470;
        case 0x1ea474u: goto label_1ea474;
        case 0x1ea478u: goto label_1ea478;
        case 0x1ea47cu: goto label_1ea47c;
        case 0x1ea480u: goto label_1ea480;
        case 0x1ea484u: goto label_1ea484;
        case 0x1ea488u: goto label_1ea488;
        case 0x1ea48cu: goto label_1ea48c;
        case 0x1ea490u: goto label_1ea490;
        case 0x1ea494u: goto label_1ea494;
        case 0x1ea498u: goto label_1ea498;
        case 0x1ea49cu: goto label_1ea49c;
        case 0x1ea4a0u: goto label_1ea4a0;
        case 0x1ea4a4u: goto label_1ea4a4;
        case 0x1ea4a8u: goto label_1ea4a8;
        case 0x1ea4acu: goto label_1ea4ac;
        case 0x1ea4b0u: goto label_1ea4b0;
        case 0x1ea4b4u: goto label_1ea4b4;
        case 0x1ea4b8u: goto label_1ea4b8;
        case 0x1ea4bcu: goto label_1ea4bc;
        case 0x1ea4c0u: goto label_1ea4c0;
        case 0x1ea4c4u: goto label_1ea4c4;
        case 0x1ea4c8u: goto label_1ea4c8;
        case 0x1ea4ccu: goto label_1ea4cc;
        case 0x1ea4d0u: goto label_1ea4d0;
        case 0x1ea4d4u: goto label_1ea4d4;
        case 0x1ea4d8u: goto label_1ea4d8;
        case 0x1ea4dcu: goto label_1ea4dc;
        case 0x1ea4e0u: goto label_1ea4e0;
        case 0x1ea4e4u: goto label_1ea4e4;
        case 0x1ea4e8u: goto label_1ea4e8;
        case 0x1ea4ecu: goto label_1ea4ec;
        case 0x1ea4f0u: goto label_1ea4f0;
        case 0x1ea4f4u: goto label_1ea4f4;
        case 0x1ea4f8u: goto label_1ea4f8;
        case 0x1ea4fcu: goto label_1ea4fc;
        case 0x1ea500u: goto label_1ea500;
        case 0x1ea504u: goto label_1ea504;
        case 0x1ea508u: goto label_1ea508;
        case 0x1ea50cu: goto label_1ea50c;
        case 0x1ea510u: goto label_1ea510;
        case 0x1ea514u: goto label_1ea514;
        case 0x1ea518u: goto label_1ea518;
        case 0x1ea51cu: goto label_1ea51c;
        case 0x1ea520u: goto label_1ea520;
        case 0x1ea524u: goto label_1ea524;
        case 0x1ea528u: goto label_1ea528;
        case 0x1ea52cu: goto label_1ea52c;
        case 0x1ea530u: goto label_1ea530;
        case 0x1ea534u: goto label_1ea534;
        case 0x1ea538u: goto label_1ea538;
        case 0x1ea53cu: goto label_1ea53c;
        case 0x1ea540u: goto label_1ea540;
        case 0x1ea544u: goto label_1ea544;
        case 0x1ea548u: goto label_1ea548;
        case 0x1ea54cu: goto label_1ea54c;
        case 0x1ea550u: goto label_1ea550;
        case 0x1ea554u: goto label_1ea554;
        case 0x1ea558u: goto label_1ea558;
        case 0x1ea55cu: goto label_1ea55c;
        case 0x1ea560u: goto label_1ea560;
        case 0x1ea564u: goto label_1ea564;
        case 0x1ea568u: goto label_1ea568;
        case 0x1ea56cu: goto label_1ea56c;
        case 0x1ea570u: goto label_1ea570;
        case 0x1ea574u: goto label_1ea574;
        case 0x1ea578u: goto label_1ea578;
        case 0x1ea57cu: goto label_1ea57c;
        case 0x1ea580u: goto label_1ea580;
        case 0x1ea584u: goto label_1ea584;
        case 0x1ea588u: goto label_1ea588;
        case 0x1ea58cu: goto label_1ea58c;
        case 0x1ea590u: goto label_1ea590;
        case 0x1ea594u: goto label_1ea594;
        case 0x1ea598u: goto label_1ea598;
        case 0x1ea59cu: goto label_1ea59c;
        case 0x1ea5a0u: goto label_1ea5a0;
        case 0x1ea5a4u: goto label_1ea5a4;
        case 0x1ea5a8u: goto label_1ea5a8;
        case 0x1ea5acu: goto label_1ea5ac;
        case 0x1ea5b0u: goto label_1ea5b0;
        case 0x1ea5b4u: goto label_1ea5b4;
        case 0x1ea5b8u: goto label_1ea5b8;
        case 0x1ea5bcu: goto label_1ea5bc;
        case 0x1ea5c0u: goto label_1ea5c0;
        case 0x1ea5c4u: goto label_1ea5c4;
        case 0x1ea5c8u: goto label_1ea5c8;
        case 0x1ea5ccu: goto label_1ea5cc;
        case 0x1ea5d0u: goto label_1ea5d0;
        case 0x1ea5d4u: goto label_1ea5d4;
        case 0x1ea5d8u: goto label_1ea5d8;
        case 0x1ea5dcu: goto label_1ea5dc;
        case 0x1ea5e0u: goto label_1ea5e0;
        case 0x1ea5e4u: goto label_1ea5e4;
        case 0x1ea5e8u: goto label_1ea5e8;
        case 0x1ea5ecu: goto label_1ea5ec;
        case 0x1ea5f0u: goto label_1ea5f0;
        case 0x1ea5f4u: goto label_1ea5f4;
        case 0x1ea5f8u: goto label_1ea5f8;
        case 0x1ea5fcu: goto label_1ea5fc;
        case 0x1ea600u: goto label_1ea600;
        case 0x1ea604u: goto label_1ea604;
        case 0x1ea608u: goto label_1ea608;
        case 0x1ea60cu: goto label_1ea60c;
        case 0x1ea610u: goto label_1ea610;
        case 0x1ea614u: goto label_1ea614;
        case 0x1ea618u: goto label_1ea618;
        case 0x1ea61cu: goto label_1ea61c;
        case 0x1ea620u: goto label_1ea620;
        case 0x1ea624u: goto label_1ea624;
        case 0x1ea628u: goto label_1ea628;
        case 0x1ea62cu: goto label_1ea62c;
        case 0x1ea630u: goto label_1ea630;
        case 0x1ea634u: goto label_1ea634;
        case 0x1ea638u: goto label_1ea638;
        case 0x1ea63cu: goto label_1ea63c;
        case 0x1ea640u: goto label_1ea640;
        case 0x1ea644u: goto label_1ea644;
        case 0x1ea648u: goto label_1ea648;
        case 0x1ea64cu: goto label_1ea64c;
        case 0x1ea650u: goto label_1ea650;
        case 0x1ea654u: goto label_1ea654;
        case 0x1ea658u: goto label_1ea658;
        case 0x1ea65cu: goto label_1ea65c;
        case 0x1ea660u: goto label_1ea660;
        case 0x1ea664u: goto label_1ea664;
        case 0x1ea668u: goto label_1ea668;
        case 0x1ea66cu: goto label_1ea66c;
        case 0x1ea670u: goto label_1ea670;
        case 0x1ea674u: goto label_1ea674;
        case 0x1ea678u: goto label_1ea678;
        case 0x1ea67cu: goto label_1ea67c;
        case 0x1ea680u: goto label_1ea680;
        case 0x1ea684u: goto label_1ea684;
        case 0x1ea688u: goto label_1ea688;
        case 0x1ea68cu: goto label_1ea68c;
        case 0x1ea690u: goto label_1ea690;
        case 0x1ea694u: goto label_1ea694;
        case 0x1ea698u: goto label_1ea698;
        case 0x1ea69cu: goto label_1ea69c;
        case 0x1ea6a0u: goto label_1ea6a0;
        case 0x1ea6a4u: goto label_1ea6a4;
        case 0x1ea6a8u: goto label_1ea6a8;
        case 0x1ea6acu: goto label_1ea6ac;
        case 0x1ea6b0u: goto label_1ea6b0;
        case 0x1ea6b4u: goto label_1ea6b4;
        case 0x1ea6b8u: goto label_1ea6b8;
        case 0x1ea6bcu: goto label_1ea6bc;
        case 0x1ea6c0u: goto label_1ea6c0;
        case 0x1ea6c4u: goto label_1ea6c4;
        case 0x1ea6c8u: goto label_1ea6c8;
        case 0x1ea6ccu: goto label_1ea6cc;
        case 0x1ea6d0u: goto label_1ea6d0;
        case 0x1ea6d4u: goto label_1ea6d4;
        case 0x1ea6d8u: goto label_1ea6d8;
        case 0x1ea6dcu: goto label_1ea6dc;
        case 0x1ea6e0u: goto label_1ea6e0;
        case 0x1ea6e4u: goto label_1ea6e4;
        case 0x1ea6e8u: goto label_1ea6e8;
        case 0x1ea6ecu: goto label_1ea6ec;
        case 0x1ea6f0u: goto label_1ea6f0;
        case 0x1ea6f4u: goto label_1ea6f4;
        case 0x1ea6f8u: goto label_1ea6f8;
        case 0x1ea6fcu: goto label_1ea6fc;
        case 0x1ea700u: goto label_1ea700;
        case 0x1ea704u: goto label_1ea704;
        case 0x1ea708u: goto label_1ea708;
        case 0x1ea70cu: goto label_1ea70c;
        case 0x1ea710u: goto label_1ea710;
        case 0x1ea714u: goto label_1ea714;
        case 0x1ea718u: goto label_1ea718;
        case 0x1ea71cu: goto label_1ea71c;
        case 0x1ea720u: goto label_1ea720;
        case 0x1ea724u: goto label_1ea724;
        case 0x1ea728u: goto label_1ea728;
        case 0x1ea72cu: goto label_1ea72c;
        case 0x1ea730u: goto label_1ea730;
        case 0x1ea734u: goto label_1ea734;
        case 0x1ea738u: goto label_1ea738;
        case 0x1ea73cu: goto label_1ea73c;
        case 0x1ea740u: goto label_1ea740;
        case 0x1ea744u: goto label_1ea744;
        case 0x1ea748u: goto label_1ea748;
        case 0x1ea74cu: goto label_1ea74c;
        case 0x1ea750u: goto label_1ea750;
        case 0x1ea754u: goto label_1ea754;
        case 0x1ea758u: goto label_1ea758;
        case 0x1ea75cu: goto label_1ea75c;
        case 0x1ea760u: goto label_1ea760;
        case 0x1ea764u: goto label_1ea764;
        case 0x1ea768u: goto label_1ea768;
        case 0x1ea76cu: goto label_1ea76c;
        case 0x1ea770u: goto label_1ea770;
        case 0x1ea774u: goto label_1ea774;
        case 0x1ea778u: goto label_1ea778;
        case 0x1ea77cu: goto label_1ea77c;
        case 0x1ea780u: goto label_1ea780;
        case 0x1ea784u: goto label_1ea784;
        case 0x1ea788u: goto label_1ea788;
        case 0x1ea78cu: goto label_1ea78c;
        case 0x1ea790u: goto label_1ea790;
        case 0x1ea794u: goto label_1ea794;
        case 0x1ea798u: goto label_1ea798;
        case 0x1ea79cu: goto label_1ea79c;
        case 0x1ea7a0u: goto label_1ea7a0;
        case 0x1ea7a4u: goto label_1ea7a4;
        case 0x1ea7a8u: goto label_1ea7a8;
        case 0x1ea7acu: goto label_1ea7ac;
        case 0x1ea7b0u: goto label_1ea7b0;
        case 0x1ea7b4u: goto label_1ea7b4;
        case 0x1ea7b8u: goto label_1ea7b8;
        case 0x1ea7bcu: goto label_1ea7bc;
        case 0x1ea7c0u: goto label_1ea7c0;
        case 0x1ea7c4u: goto label_1ea7c4;
        case 0x1ea7c8u: goto label_1ea7c8;
        case 0x1ea7ccu: goto label_1ea7cc;
        case 0x1ea7d0u: goto label_1ea7d0;
        case 0x1ea7d4u: goto label_1ea7d4;
        case 0x1ea7d8u: goto label_1ea7d8;
        case 0x1ea7dcu: goto label_1ea7dc;
        case 0x1ea7e0u: goto label_1ea7e0;
        case 0x1ea7e4u: goto label_1ea7e4;
        case 0x1ea7e8u: goto label_1ea7e8;
        case 0x1ea7ecu: goto label_1ea7ec;
        case 0x1ea7f0u: goto label_1ea7f0;
        case 0x1ea7f4u: goto label_1ea7f4;
        case 0x1ea7f8u: goto label_1ea7f8;
        case 0x1ea7fcu: goto label_1ea7fc;
        case 0x1ea800u: goto label_1ea800;
        case 0x1ea804u: goto label_1ea804;
        case 0x1ea808u: goto label_1ea808;
        case 0x1ea80cu: goto label_1ea80c;
        case 0x1ea810u: goto label_1ea810;
        case 0x1ea814u: goto label_1ea814;
        case 0x1ea818u: goto label_1ea818;
        case 0x1ea81cu: goto label_1ea81c;
        case 0x1ea820u: goto label_1ea820;
        case 0x1ea824u: goto label_1ea824;
        case 0x1ea828u: goto label_1ea828;
        case 0x1ea82cu: goto label_1ea82c;
        case 0x1ea830u: goto label_1ea830;
        case 0x1ea834u: goto label_1ea834;
        case 0x1ea838u: goto label_1ea838;
        case 0x1ea83cu: goto label_1ea83c;
        case 0x1ea840u: goto label_1ea840;
        case 0x1ea844u: goto label_1ea844;
        case 0x1ea848u: goto label_1ea848;
        case 0x1ea84cu: goto label_1ea84c;
        case 0x1ea850u: goto label_1ea850;
        case 0x1ea854u: goto label_1ea854;
        case 0x1ea858u: goto label_1ea858;
        case 0x1ea85cu: goto label_1ea85c;
        case 0x1ea860u: goto label_1ea860;
        case 0x1ea864u: goto label_1ea864;
        case 0x1ea868u: goto label_1ea868;
        case 0x1ea86cu: goto label_1ea86c;
        case 0x1ea870u: goto label_1ea870;
        case 0x1ea874u: goto label_1ea874;
        case 0x1ea878u: goto label_1ea878;
        case 0x1ea87cu: goto label_1ea87c;
        case 0x1ea880u: goto label_1ea880;
        case 0x1ea884u: goto label_1ea884;
        case 0x1ea888u: goto label_1ea888;
        case 0x1ea88cu: goto label_1ea88c;
        case 0x1ea890u: goto label_1ea890;
        case 0x1ea894u: goto label_1ea894;
        case 0x1ea898u: goto label_1ea898;
        case 0x1ea89cu: goto label_1ea89c;
        case 0x1ea8a0u: goto label_1ea8a0;
        case 0x1ea8a4u: goto label_1ea8a4;
        case 0x1ea8a8u: goto label_1ea8a8;
        case 0x1ea8acu: goto label_1ea8ac;
        case 0x1ea8b0u: goto label_1ea8b0;
        case 0x1ea8b4u: goto label_1ea8b4;
        case 0x1ea8b8u: goto label_1ea8b8;
        case 0x1ea8bcu: goto label_1ea8bc;
        case 0x1ea8c0u: goto label_1ea8c0;
        case 0x1ea8c4u: goto label_1ea8c4;
        case 0x1ea8c8u: goto label_1ea8c8;
        case 0x1ea8ccu: goto label_1ea8cc;
        case 0x1ea8d0u: goto label_1ea8d0;
        case 0x1ea8d4u: goto label_1ea8d4;
        case 0x1ea8d8u: goto label_1ea8d8;
        case 0x1ea8dcu: goto label_1ea8dc;
        case 0x1ea8e0u: goto label_1ea8e0;
        case 0x1ea8e4u: goto label_1ea8e4;
        case 0x1ea8e8u: goto label_1ea8e8;
        case 0x1ea8ecu: goto label_1ea8ec;
        case 0x1ea8f0u: goto label_1ea8f0;
        case 0x1ea8f4u: goto label_1ea8f4;
        case 0x1ea8f8u: goto label_1ea8f8;
        case 0x1ea8fcu: goto label_1ea8fc;
        case 0x1ea900u: goto label_1ea900;
        case 0x1ea904u: goto label_1ea904;
        case 0x1ea908u: goto label_1ea908;
        case 0x1ea90cu: goto label_1ea90c;
        case 0x1ea910u: goto label_1ea910;
        case 0x1ea914u: goto label_1ea914;
        case 0x1ea918u: goto label_1ea918;
        case 0x1ea91cu: goto label_1ea91c;
        case 0x1ea920u: goto label_1ea920;
        case 0x1ea924u: goto label_1ea924;
        case 0x1ea928u: goto label_1ea928;
        case 0x1ea92cu: goto label_1ea92c;
        case 0x1ea930u: goto label_1ea930;
        case 0x1ea934u: goto label_1ea934;
        case 0x1ea938u: goto label_1ea938;
        case 0x1ea93cu: goto label_1ea93c;
        case 0x1ea940u: goto label_1ea940;
        case 0x1ea944u: goto label_1ea944;
        case 0x1ea948u: goto label_1ea948;
        case 0x1ea94cu: goto label_1ea94c;
        case 0x1ea950u: goto label_1ea950;
        case 0x1ea954u: goto label_1ea954;
        case 0x1ea958u: goto label_1ea958;
        case 0x1ea95cu: goto label_1ea95c;
        case 0x1ea960u: goto label_1ea960;
        case 0x1ea964u: goto label_1ea964;
        case 0x1ea968u: goto label_1ea968;
        case 0x1ea96cu: goto label_1ea96c;
        case 0x1ea970u: goto label_1ea970;
        case 0x1ea974u: goto label_1ea974;
        case 0x1ea978u: goto label_1ea978;
        case 0x1ea97cu: goto label_1ea97c;
        case 0x1ea980u: goto label_1ea980;
        case 0x1ea984u: goto label_1ea984;
        case 0x1ea988u: goto label_1ea988;
        case 0x1ea98cu: goto label_1ea98c;
        case 0x1ea990u: goto label_1ea990;
        case 0x1ea994u: goto label_1ea994;
        case 0x1ea998u: goto label_1ea998;
        case 0x1ea99cu: goto label_1ea99c;
        case 0x1ea9a0u: goto label_1ea9a0;
        case 0x1ea9a4u: goto label_1ea9a4;
        case 0x1ea9a8u: goto label_1ea9a8;
        case 0x1ea9acu: goto label_1ea9ac;
        case 0x1ea9b0u: goto label_1ea9b0;
        case 0x1ea9b4u: goto label_1ea9b4;
        case 0x1ea9b8u: goto label_1ea9b8;
        case 0x1ea9bcu: goto label_1ea9bc;
        case 0x1ea9c0u: goto label_1ea9c0;
        case 0x1ea9c4u: goto label_1ea9c4;
        case 0x1ea9c8u: goto label_1ea9c8;
        case 0x1ea9ccu: goto label_1ea9cc;
        case 0x1ea9d0u: goto label_1ea9d0;
        case 0x1ea9d4u: goto label_1ea9d4;
        case 0x1ea9d8u: goto label_1ea9d8;
        case 0x1ea9dcu: goto label_1ea9dc;
        case 0x1ea9e0u: goto label_1ea9e0;
        case 0x1ea9e4u: goto label_1ea9e4;
        case 0x1ea9e8u: goto label_1ea9e8;
        case 0x1ea9ecu: goto label_1ea9ec;
        case 0x1ea9f0u: goto label_1ea9f0;
        case 0x1ea9f4u: goto label_1ea9f4;
        case 0x1ea9f8u: goto label_1ea9f8;
        case 0x1ea9fcu: goto label_1ea9fc;
        case 0x1eaa00u: goto label_1eaa00;
        case 0x1eaa04u: goto label_1eaa04;
        case 0x1eaa08u: goto label_1eaa08;
        case 0x1eaa0cu: goto label_1eaa0c;
        case 0x1eaa10u: goto label_1eaa10;
        case 0x1eaa14u: goto label_1eaa14;
        case 0x1eaa18u: goto label_1eaa18;
        case 0x1eaa1cu: goto label_1eaa1c;
        case 0x1eaa20u: goto label_1eaa20;
        case 0x1eaa24u: goto label_1eaa24;
        case 0x1eaa28u: goto label_1eaa28;
        case 0x1eaa2cu: goto label_1eaa2c;
        case 0x1eaa30u: goto label_1eaa30;
        case 0x1eaa34u: goto label_1eaa34;
        case 0x1eaa38u: goto label_1eaa38;
        case 0x1eaa3cu: goto label_1eaa3c;
        case 0x1eaa40u: goto label_1eaa40;
        case 0x1eaa44u: goto label_1eaa44;
        case 0x1eaa48u: goto label_1eaa48;
        case 0x1eaa4cu: goto label_1eaa4c;
        case 0x1eaa50u: goto label_1eaa50;
        case 0x1eaa54u: goto label_1eaa54;
        case 0x1eaa58u: goto label_1eaa58;
        case 0x1eaa5cu: goto label_1eaa5c;
        case 0x1eaa60u: goto label_1eaa60;
        case 0x1eaa64u: goto label_1eaa64;
        case 0x1eaa68u: goto label_1eaa68;
        case 0x1eaa6cu: goto label_1eaa6c;
        case 0x1eaa70u: goto label_1eaa70;
        case 0x1eaa74u: goto label_1eaa74;
        case 0x1eaa78u: goto label_1eaa78;
        case 0x1eaa7cu: goto label_1eaa7c;
        case 0x1eaa80u: goto label_1eaa80;
        case 0x1eaa84u: goto label_1eaa84;
        case 0x1eaa88u: goto label_1eaa88;
        case 0x1eaa8cu: goto label_1eaa8c;
        case 0x1eaa90u: goto label_1eaa90;
        case 0x1eaa94u: goto label_1eaa94;
        case 0x1eaa98u: goto label_1eaa98;
        case 0x1eaa9cu: goto label_1eaa9c;
        case 0x1eaaa0u: goto label_1eaaa0;
        case 0x1eaaa4u: goto label_1eaaa4;
        case 0x1eaaa8u: goto label_1eaaa8;
        case 0x1eaaacu: goto label_1eaaac;
        case 0x1eaab0u: goto label_1eaab0;
        case 0x1eaab4u: goto label_1eaab4;
        case 0x1eaab8u: goto label_1eaab8;
        case 0x1eaabcu: goto label_1eaabc;
        case 0x1eaac0u: goto label_1eaac0;
        case 0x1eaac4u: goto label_1eaac4;
        case 0x1eaac8u: goto label_1eaac8;
        case 0x1eaaccu: goto label_1eaacc;
        case 0x1eaad0u: goto label_1eaad0;
        case 0x1eaad4u: goto label_1eaad4;
        case 0x1eaad8u: goto label_1eaad8;
        case 0x1eaadcu: goto label_1eaadc;
        case 0x1eaae0u: goto label_1eaae0;
        case 0x1eaae4u: goto label_1eaae4;
        case 0x1eaae8u: goto label_1eaae8;
        case 0x1eaaecu: goto label_1eaaec;
        case 0x1eaaf0u: goto label_1eaaf0;
        case 0x1eaaf4u: goto label_1eaaf4;
        case 0x1eaaf8u: goto label_1eaaf8;
        case 0x1eaafcu: goto label_1eaafc;
        case 0x1eab00u: goto label_1eab00;
        case 0x1eab04u: goto label_1eab04;
        case 0x1eab08u: goto label_1eab08;
        case 0x1eab0cu: goto label_1eab0c;
        case 0x1eab10u: goto label_1eab10;
        case 0x1eab14u: goto label_1eab14;
        case 0x1eab18u: goto label_1eab18;
        case 0x1eab1cu: goto label_1eab1c;
        case 0x1eab20u: goto label_1eab20;
        case 0x1eab24u: goto label_1eab24;
        case 0x1eab28u: goto label_1eab28;
        case 0x1eab2cu: goto label_1eab2c;
        case 0x1eab30u: goto label_1eab30;
        case 0x1eab34u: goto label_1eab34;
        case 0x1eab38u: goto label_1eab38;
        case 0x1eab3cu: goto label_1eab3c;
        case 0x1eab40u: goto label_1eab40;
        case 0x1eab44u: goto label_1eab44;
        case 0x1eab48u: goto label_1eab48;
        case 0x1eab4cu: goto label_1eab4c;
        case 0x1eab50u: goto label_1eab50;
        case 0x1eab54u: goto label_1eab54;
        case 0x1eab58u: goto label_1eab58;
        case 0x1eab5cu: goto label_1eab5c;
        case 0x1eab60u: goto label_1eab60;
        case 0x1eab64u: goto label_1eab64;
        case 0x1eab68u: goto label_1eab68;
        case 0x1eab6cu: goto label_1eab6c;
        case 0x1eab70u: goto label_1eab70;
        case 0x1eab74u: goto label_1eab74;
        case 0x1eab78u: goto label_1eab78;
        case 0x1eab7cu: goto label_1eab7c;
        case 0x1eab80u: goto label_1eab80;
        case 0x1eab84u: goto label_1eab84;
        case 0x1eab88u: goto label_1eab88;
        case 0x1eab8cu: goto label_1eab8c;
        case 0x1eab90u: goto label_1eab90;
        case 0x1eab94u: goto label_1eab94;
        case 0x1eab98u: goto label_1eab98;
        case 0x1eab9cu: goto label_1eab9c;
        case 0x1eaba0u: goto label_1eaba0;
        case 0x1eaba4u: goto label_1eaba4;
        case 0x1eaba8u: goto label_1eaba8;
        case 0x1eabacu: goto label_1eabac;
        case 0x1eabb0u: goto label_1eabb0;
        case 0x1eabb4u: goto label_1eabb4;
        case 0x1eabb8u: goto label_1eabb8;
        case 0x1eabbcu: goto label_1eabbc;
        case 0x1eabc0u: goto label_1eabc0;
        case 0x1eabc4u: goto label_1eabc4;
        case 0x1eabc8u: goto label_1eabc8;
        case 0x1eabccu: goto label_1eabcc;
        case 0x1eabd0u: goto label_1eabd0;
        case 0x1eabd4u: goto label_1eabd4;
        case 0x1eabd8u: goto label_1eabd8;
        case 0x1eabdcu: goto label_1eabdc;
        case 0x1eabe0u: goto label_1eabe0;
        case 0x1eabe4u: goto label_1eabe4;
        case 0x1eabe8u: goto label_1eabe8;
        case 0x1eabecu: goto label_1eabec;
        case 0x1eabf0u: goto label_1eabf0;
        case 0x1eabf4u: goto label_1eabf4;
        case 0x1eabf8u: goto label_1eabf8;
        case 0x1eabfcu: goto label_1eabfc;
        case 0x1eac00u: goto label_1eac00;
        case 0x1eac04u: goto label_1eac04;
        case 0x1eac08u: goto label_1eac08;
        case 0x1eac0cu: goto label_1eac0c;
        case 0x1eac10u: goto label_1eac10;
        case 0x1eac14u: goto label_1eac14;
        case 0x1eac18u: goto label_1eac18;
        case 0x1eac1cu: goto label_1eac1c;
        case 0x1eac20u: goto label_1eac20;
        case 0x1eac24u: goto label_1eac24;
        default: break;
    }

    ctx->pc = 0x1ea3b0u;

label_1ea3b0:
    // 0x1ea3b0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1ea3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_1ea3b4:
    // 0x1ea3b4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ea3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ea3b8:
    // 0x1ea3b8: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1ea3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_1ea3bc:
    // 0x1ea3bc: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x1ea3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_1ea3c0:
    // 0x1ea3c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ea3c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ea3c4:
    // 0x1ea3c4: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x1ea3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_1ea3c8:
    // 0x1ea3c8: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x1ea3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_1ea3cc:
    // 0x1ea3cc: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1ea3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_1ea3d0:
    // 0x1ea3d0: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x1ea3d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1ea3d4:
    // 0x1ea3d4: 0xc078ee0  jal         func_1E3B80
label_1ea3d8:
    if (ctx->pc == 0x1EA3D8u) {
        ctx->pc = 0x1EA3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3D4u;
        // 0x1ea3d8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA3DCu;
        goto label_1ea3dc;
    }
    ctx->pc = 0x1EA3D4u;
    SET_GPR_U32(ctx, 31, 0x1EA3DCu);
    ctx->pc = 0x1EA3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA3D4u;
    // 0x1ea3d8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B80u, 0x1EA3D4u, 0x1EA3DCu)) {
        return;
    }
    ctx->pc = 0x1EA3DCu;
label_1ea3dc:
    // 0x1ea3dc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ea3dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ea3e0:
    // 0x1ea3e0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ea3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ea3e4:
    // 0x1ea3e4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ea3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1ea3e8:
    // 0x1ea3e8: 0xc078ee0  jal         func_1E3B80
label_1ea3ec:
    if (ctx->pc == 0x1EA3ECu) {
        ctx->pc = 0x1EA3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3E8u;
        // 0x1ea3ec: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA3F0u;
        goto label_1ea3f0;
    }
    ctx->pc = 0x1EA3E8u;
    SET_GPR_U32(ctx, 31, 0x1EA3F0u);
    ctx->pc = 0x1EA3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA3E8u;
    // 0x1ea3ec: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B80u, 0x1EA3E8u, 0x1EA3F0u)) {
        return;
    }
    ctx->pc = 0x1EA3F0u;
label_1ea3f0:
    // 0x1ea3f0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ea3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ea3f4:
    // 0x1ea3f4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1ea3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1ea3f8:
    // 0x1ea3f8: 0xc078ee0  jal         func_1E3B80
label_1ea3fc:
    if (ctx->pc == 0x1EA3FCu) {
        ctx->pc = 0x1EA3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3F8u;
        // 0x1ea3fc: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA400u;
        goto label_1ea400;
    }
    ctx->pc = 0x1EA3F8u;
    SET_GPR_U32(ctx, 31, 0x1EA400u);
    ctx->pc = 0x1EA3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA3F8u;
    // 0x1ea3fc: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B80u, 0x1EA3F8u, 0x1EA400u)) {
        return;
    }
    ctx->pc = 0x1EA400u;
label_1ea400:
    // 0x1ea400: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ea400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ea404:
    // 0x1ea404: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1ea404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1ea408:
    // 0x1ea408: 0xc078ee0  jal         func_1E3B80
label_1ea40c:
    if (ctx->pc == 0x1EA40Cu) {
        ctx->pc = 0x1EA40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA408u;
        // 0x1ea40c: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA410u;
        goto label_1ea410;
    }
    ctx->pc = 0x1EA408u;
    SET_GPR_U32(ctx, 31, 0x1EA410u);
    ctx->pc = 0x1EA40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA408u;
    // 0x1ea40c: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B80u, 0x1EA408u, 0x1EA410u)) {
        return;
    }
    ctx->pc = 0x1EA410u;
label_1ea410:
    // 0x1ea410: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1ea410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1ea414:
    // 0x1ea414: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
label_1ea418:
    if (ctx->pc == 0x1EA418u) {
        ctx->pc = 0x1EA418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA414u;
        // 0x1ea418: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA41Cu;
        goto label_1ea41c;
    }
    ctx->pc = 0x1EA414u;
    {
        const bool branch_taken_0x1ea414 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1EA418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA414u;
        // 0x1ea418: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea414) {
            ctx->pc = 0x1EA424u;
            goto label_1ea424;
        }
    }
    ctx->pc = 0x1EA41Cu;
label_1ea41c:
    // 0x1ea41c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ea41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea420:
    // 0x1ea420: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1ea420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_1ea424:
    // 0x1ea424: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1ea424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1ea428:
    // 0x1ea428: 0x5c400004  bgtzl       $v0, . + 4 + (0x4 << 2)
label_1ea42c:
    if (ctx->pc == 0x1EA42Cu) {
        ctx->pc = 0x1EA42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA428u;
        // 0x1ea42c: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA430u;
        goto label_1ea430;
    }
    ctx->pc = 0x1EA428u;
    {
        const bool branch_taken_0x1ea428 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x1ea428) {
            ctx->pc = 0x1EA42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA428u;
            // 0x1ea42c: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA43Cu;
            goto label_1ea43c;
        }
    }
    ctx->pc = 0x1EA430u;
label_1ea430:
    // 0x1ea430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ea430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea434:
    // 0x1ea434: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1ea434u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_1ea438:
    // 0x1ea438: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1ea438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1ea43c:
    // 0x1ea43c: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1ea43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_1ea440:
    // 0x1ea440: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1ea440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1ea444:
    // 0x1ea444: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ea444u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ea448:
    // 0x1ea448: 0x0  nop
    ctx->pc = 0x1ea448u;
    // NOP
label_1ea44c:
    // 0x1ea44c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ea44cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ea450:
    // 0x1ea450: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ea450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ea454:
    // 0x1ea454: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ea454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1ea458:
    // 0x1ea458: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ea458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ea45c:
    // 0x1ea45c: 0x0  nop
    ctx->pc = 0x1ea45cu;
    // NOP
label_1ea460:
    // 0x1ea460: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ea460u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ea464:
    // 0x1ea464: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ea464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ea468:
    // 0x1ea468: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1ea468u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1ea46c:
    // 0x1ea46c: 0x0  nop
    ctx->pc = 0x1ea46cu;
    // NOP
label_1ea470:
    // 0x1ea470: 0x0  nop
    ctx->pc = 0x1ea470u;
    // NOP
label_1ea474:
    // 0x1ea474: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x1ea474u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[0]);
label_1ea478:
    // 0x1ea478: 0x0  nop
    ctx->pc = 0x1ea478u;
    // NOP
label_1ea47c:
    // 0x1ea47c: 0x0  nop
    ctx->pc = 0x1ea47cu;
    // NOP
label_1ea480:
    // 0x1ea480: 0x4601a043  div.s       $f1, $f20, $f1
    ctx->pc = 0x1ea480u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[1]);
label_1ea484:
    // 0x1ea484: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1ea484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_1ea488:
    // 0x1ea488: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x1ea488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_1ea48c:
    // 0x1ea48c: 0xc078ec8  jal         func_1E3B20
label_1ea490:
    if (ctx->pc == 0x1EA490u) {
        ctx->pc = 0x1EA490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA48Cu;
        // 0x1ea490: 0xe6210020  swc1        $f1, 0x20($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA494u;
        goto label_1ea494;
    }
    ctx->pc = 0x1EA48Cu;
    SET_GPR_U32(ctx, 31, 0x1EA494u);
    ctx->pc = 0x1EA490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA48Cu;
    // 0x1ea490: 0xe6210020  swc1        $f1, 0x20($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EA48Cu, 0x1EA494u)) {
        return;
    }
    ctx->pc = 0x1EA494u;
label_1ea494:
    // 0x1ea494: 0x8e26002c  lw          $a2, 0x2C($s1)
    ctx->pc = 0x1ea494u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1ea498:
    // 0x1ea498: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x1ea498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_1ea49c:
    // 0x1ea49c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ea49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ea4a0:
    // 0x1ea4a0: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1ea4a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1ea4a4:
    // 0x1ea4a4: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1ea4a4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_1ea4a8:
    // 0x1ea4a8: 0xc078ec8  jal         func_1E3B20
label_1ea4ac:
    if (ctx->pc == 0x1EA4ACu) {
        ctx->pc = 0x1EA4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4A8u;
        // 0x1ea4ac: 0xae26002c  sw          $a2, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA4B0u;
        goto label_1ea4b0;
    }
    ctx->pc = 0x1EA4A8u;
    SET_GPR_U32(ctx, 31, 0x1EA4B0u);
    ctx->pc = 0x1EA4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA4A8u;
    // 0x1ea4ac: 0xae26002c  sw          $a2, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EA4A8u, 0x1EA4B0u)) {
        return;
    }
    ctx->pc = 0x1EA4B0u;
label_1ea4b0:
    // 0x1ea4b0: 0x8e26002c  lw          $a2, 0x2C($s1)
    ctx->pc = 0x1ea4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1ea4b4:
    // 0x1ea4b4: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1ea4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1ea4b8:
    // 0x1ea4b8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ea4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ea4bc:
    // 0x1ea4bc: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1ea4bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1ea4c0:
    // 0x1ea4c0: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1ea4c0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_1ea4c4:
    // 0x1ea4c4: 0xc078ec8  jal         func_1E3B20
label_1ea4c8:
    if (ctx->pc == 0x1EA4C8u) {
        ctx->pc = 0x1EA4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4C4u;
        // 0x1ea4c8: 0xae26002c  sw          $a2, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA4CCu;
        goto label_1ea4cc;
    }
    ctx->pc = 0x1EA4C4u;
    SET_GPR_U32(ctx, 31, 0x1EA4CCu);
    ctx->pc = 0x1EA4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA4C4u;
    // 0x1ea4c8: 0xae26002c  sw          $a2, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EA4C4u, 0x1EA4CCu)) {
        return;
    }
    ctx->pc = 0x1EA4CCu;
label_1ea4cc:
    // 0x1ea4cc: 0x8e26002c  lw          $a2, 0x2C($s1)
    ctx->pc = 0x1ea4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1ea4d0:
    // 0x1ea4d0: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x1ea4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1ea4d4:
    // 0x1ea4d4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ea4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ea4d8:
    // 0x1ea4d8: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1ea4d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1ea4dc:
    // 0x1ea4dc: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1ea4dcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_1ea4e0:
    // 0x1ea4e0: 0xc078ec8  jal         func_1E3B20
label_1ea4e4:
    if (ctx->pc == 0x1EA4E4u) {
        ctx->pc = 0x1EA4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4E0u;
        // 0x1ea4e4: 0xae26002c  sw          $a2, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA4E8u;
        goto label_1ea4e8;
    }
    ctx->pc = 0x1EA4E0u;
    SET_GPR_U32(ctx, 31, 0x1EA4E8u);
    ctx->pc = 0x1EA4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA4E0u;
    // 0x1ea4e4: 0xae26002c  sw          $a2, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EA4E0u, 0x1EA4E8u)) {
        return;
    }
    ctx->pc = 0x1EA4E8u;
label_1ea4e8:
    // 0x1ea4e8: 0x8e26002c  lw          $a2, 0x2C($s1)
    ctx->pc = 0x1ea4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1ea4ec:
    // 0x1ea4ec: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1ea4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1ea4f0:
    // 0x1ea4f0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ea4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ea4f4:
    // 0x1ea4f4: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1ea4f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1ea4f8:
    // 0x1ea4f8: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1ea4f8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_1ea4fc:
    // 0x1ea4fc: 0xc078ec8  jal         func_1E3B20
label_1ea500:
    if (ctx->pc == 0x1EA500u) {
        ctx->pc = 0x1EA500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4FCu;
        // 0x1ea500: 0xae26002c  sw          $a2, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA504u;
        goto label_1ea504;
    }
    ctx->pc = 0x1EA4FCu;
    SET_GPR_U32(ctx, 31, 0x1EA504u);
    ctx->pc = 0x1EA500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA4FCu;
    // 0x1ea500: 0xae26002c  sw          $a2, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EA4FCu, 0x1EA504u)) {
        return;
    }
    ctx->pc = 0x1EA504u;
label_1ea504:
    // 0x1ea504: 0x8e26002c  lw          $a2, 0x2C($s1)
    ctx->pc = 0x1ea504u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1ea508:
    // 0x1ea508: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1ea508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1ea50c:
    // 0x1ea50c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ea50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ea510:
    // 0x1ea510: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1ea510u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1ea514:
    // 0x1ea514: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1ea514u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_1ea518:
    // 0x1ea518: 0xc078ec8  jal         func_1E3B20
label_1ea51c:
    if (ctx->pc == 0x1EA51Cu) {
        ctx->pc = 0x1EA51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA518u;
        // 0x1ea51c: 0xae26002c  sw          $a2, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA520u;
        goto label_1ea520;
    }
    ctx->pc = 0x1EA518u;
    SET_GPR_U32(ctx, 31, 0x1EA520u);
    ctx->pc = 0x1EA51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA518u;
    // 0x1ea51c: 0xae26002c  sw          $a2, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EA518u, 0x1EA520u)) {
        return;
    }
    ctx->pc = 0x1EA520u;
label_1ea520:
    // 0x1ea520: 0x8e26002c  lw          $a2, 0x2C($s1)
    ctx->pc = 0x1ea520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1ea524:
    // 0x1ea524: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1ea524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_1ea528:
    // 0x1ea528: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ea528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ea52c:
    // 0x1ea52c: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1ea52cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1ea530:
    // 0x1ea530: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1ea530u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_1ea534:
    // 0x1ea534: 0xc078ec8  jal         func_1E3B20
label_1ea538:
    if (ctx->pc == 0x1EA538u) {
        ctx->pc = 0x1EA538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA534u;
        // 0x1ea538: 0xae26002c  sw          $a2, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA53Cu;
        goto label_1ea53c;
    }
    ctx->pc = 0x1EA534u;
    SET_GPR_U32(ctx, 31, 0x1EA53Cu);
    ctx->pc = 0x1EA538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA534u;
    // 0x1ea538: 0xae26002c  sw          $a2, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EA534u, 0x1EA53Cu)) {
        return;
    }
    ctx->pc = 0x1EA53Cu;
label_1ea53c:
    // 0x1ea53c: 0x8e26002c  lw          $a2, 0x2C($s1)
    ctx->pc = 0x1ea53cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1ea540:
    // 0x1ea540: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1ea540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ea544:
    // 0x1ea544: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ea544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ea548:
    // 0x1ea548: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1ea548u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1ea54c:
    // 0x1ea54c: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1ea54cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_1ea550:
    // 0x1ea550: 0xc078ec8  jal         func_1E3B20
label_1ea554:
    if (ctx->pc == 0x1EA554u) {
        ctx->pc = 0x1EA554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA550u;
        // 0x1ea554: 0xae26002c  sw          $a2, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA558u;
        goto label_1ea558;
    }
    ctx->pc = 0x1EA550u;
    SET_GPR_U32(ctx, 31, 0x1EA558u);
    ctx->pc = 0x1EA554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA550u;
    // 0x1ea554: 0xae26002c  sw          $a2, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EA550u, 0x1EA558u)) {
        return;
    }
    ctx->pc = 0x1EA558u;
label_1ea558:
    // 0x1ea558: 0x8e26002c  lw          $a2, 0x2C($s1)
    ctx->pc = 0x1ea558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1ea55c:
    // 0x1ea55c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1ea55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1ea560:
    // 0x1ea560: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ea560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ea564:
    // 0x1ea564: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1ea564u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1ea568:
    // 0x1ea568: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1ea568u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_1ea56c:
    // 0x1ea56c: 0xc078ec8  jal         func_1E3B20
label_1ea570:
    if (ctx->pc == 0x1EA570u) {
        ctx->pc = 0x1EA570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA56Cu;
        // 0x1ea570: 0xae26002c  sw          $a2, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA574u;
        goto label_1ea574;
    }
    ctx->pc = 0x1EA56Cu;
    SET_GPR_U32(ctx, 31, 0x1EA574u);
    ctx->pc = 0x1EA570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA56Cu;
    // 0x1ea570: 0xae26002c  sw          $a2, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EA56Cu, 0x1EA574u)) {
        return;
    }
    ctx->pc = 0x1EA574u;
label_1ea574:
    // 0x1ea574: 0x8e26002c  lw          $a2, 0x2C($s1)
    ctx->pc = 0x1ea574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1ea578:
    // 0x1ea578: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1ea578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1ea57c:
    // 0x1ea57c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ea57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ea580:
    // 0x1ea580: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1ea580u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1ea584:
    // 0x1ea584: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1ea584u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_1ea588:
    // 0x1ea588: 0xc078ec8  jal         func_1E3B20
label_1ea58c:
    if (ctx->pc == 0x1EA58Cu) {
        ctx->pc = 0x1EA58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA588u;
        // 0x1ea58c: 0xae26002c  sw          $a2, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA590u;
        goto label_1ea590;
    }
    ctx->pc = 0x1EA588u;
    SET_GPR_U32(ctx, 31, 0x1EA590u);
    ctx->pc = 0x1EA58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA588u;
    // 0x1ea58c: 0xae26002c  sw          $a2, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EA588u, 0x1EA590u)) {
        return;
    }
    ctx->pc = 0x1EA590u;
label_1ea590:
    // 0x1ea590: 0x8e26002c  lw          $a2, 0x2C($s1)
    ctx->pc = 0x1ea590u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1ea594:
    // 0x1ea594: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1ea594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1ea598:
    // 0x1ea598: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ea598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ea59c:
    // 0x1ea59c: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1ea59cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1ea5a0:
    // 0x1ea5a0: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1ea5a0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_1ea5a4:
    // 0x1ea5a4: 0xc078ec8  jal         func_1E3B20
label_1ea5a8:
    if (ctx->pc == 0x1EA5A8u) {
        ctx->pc = 0x1EA5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA5A4u;
        // 0x1ea5a8: 0xae26002c  sw          $a2, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA5ACu;
        goto label_1ea5ac;
    }
    ctx->pc = 0x1EA5A4u;
    SET_GPR_U32(ctx, 31, 0x1EA5ACu);
    ctx->pc = 0x1EA5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA5A4u;
    // 0x1ea5a8: 0xae26002c  sw          $a2, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EA5A4u, 0x1EA5ACu)) {
        return;
    }
    ctx->pc = 0x1EA5ACu;
label_1ea5ac:
    // 0x1ea5ac: 0x8e26002c  lw          $a2, 0x2C($s1)
    ctx->pc = 0x1ea5acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1ea5b0:
    // 0x1ea5b0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1ea5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ea5b4:
    // 0x1ea5b4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ea5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ea5b8:
    // 0x1ea5b8: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1ea5b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1ea5bc:
    // 0x1ea5bc: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1ea5bcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_1ea5c0:
    // 0x1ea5c0: 0xc078ec8  jal         func_1E3B20
label_1ea5c4:
    if (ctx->pc == 0x1EA5C4u) {
        ctx->pc = 0x1EA5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA5C0u;
        // 0x1ea5c4: 0xae26002c  sw          $a2, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA5C8u;
        goto label_1ea5c8;
    }
    ctx->pc = 0x1EA5C0u;
    SET_GPR_U32(ctx, 31, 0x1EA5C8u);
    ctx->pc = 0x1EA5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA5C0u;
    // 0x1ea5c4: 0xae26002c  sw          $a2, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B20u, 0x1EA5C0u, 0x1EA5C8u)) {
        return;
    }
    ctx->pc = 0x1EA5C8u;
label_1ea5c8:
    // 0x1ea5c8: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x1ea5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1ea5cc:
    // 0x1ea5cc: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x1ea5ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1ea5d0:
    // 0x1ea5d0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1ea5d0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
label_1ea5d4:
    // 0x1ea5d4: 0x28140  sll         $s0, $v0, 5
    ctx->pc = 0x1ea5d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1ea5d8:
    // 0x1ea5d8: 0xc0932d4  jal         func_24CB50
label_1ea5dc:
    if (ctx->pc == 0x1EA5DCu) {
        ctx->pc = 0x1EA5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA5D8u;
        // 0x1ea5dc: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA5E0u;
        goto label_1ea5e0;
    }
    ctx->pc = 0x1EA5D8u;
    SET_GPR_U32(ctx, 31, 0x1EA5E0u);
    ctx->pc = 0x1EA5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA5D8u;
    // 0x1ea5dc: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EA5D8u, 0x1EA5E0u)) {
        return;
    }
    ctx->pc = 0x1EA5E0u;
label_1ea5e0:
    // 0x1ea5e0: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x1ea5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1ea5e4:
    // 0x1ea5e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea5e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea5e8:
    // 0x1ea5e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ea5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea5ec:
    // 0x1ea5ec: 0x40f809  jalr        $v0
label_1ea5f0:
    if (ctx->pc == 0x1EA5F0u) {
        ctx->pc = 0x1EA5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA5ECu;
        // 0x1ea5f0: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA5F4u;
        goto label_1ea5f4;
    }
    ctx->pc = 0x1EA5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EA5F4u);
        ctx->pc = 0x1EA5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA5ECu;
        // 0x1ea5f0: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA5ECu, 0x1EA5F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA5F4u;
label_1ea5f4:
    // 0x1ea5f4: 0xc0932d4  jal         func_24CB50
label_1ea5f8:
    if (ctx->pc == 0x1EA5F8u) {
        ctx->pc = 0x1EA5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA5F4u;
        // 0x1ea5f8: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA5FCu;
        goto label_1ea5fc;
    }
    ctx->pc = 0x1EA5F4u;
    SET_GPR_U32(ctx, 31, 0x1EA5FCu);
    ctx->pc = 0x1EA5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA5F4u;
    // 0x1ea5f8: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EA5F4u, 0x1EA5FCu)) {
        return;
    }
    ctx->pc = 0x1EA5FCu;
label_1ea5fc:
    // 0x1ea5fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ea5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea600:
    // 0x1ea600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ea600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ea604:
    // 0x1ea604: 0x40f809  jalr        $v0
label_1ea608:
    if (ctx->pc == 0x1EA608u) {
        ctx->pc = 0x1EA608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA604u;
        // 0x1ea608: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA60Cu;
        goto label_1ea60c;
    }
    ctx->pc = 0x1EA604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EA60Cu);
        ctx->pc = 0x1EA608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA604u;
        // 0x1ea608: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA604u, 0x1EA60Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA60Cu;
label_1ea60c:
    // 0x1ea60c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ea60cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ea610:
    // 0x1ea610: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea614:
    // 0x1ea614: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea618:
    // 0x1ea618: 0xc0c493d  jal         func_3124F4
label_1ea61c:
    if (ctx->pc == 0x1EA61Cu) {
        ctx->pc = 0x1EA61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA618u;
        // 0x1ea61c: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA620u;
        goto label_1ea620;
    }
    ctx->pc = 0x1EA618u;
    SET_GPR_U32(ctx, 31, 0x1EA620u);
    ctx->pc = 0x1EA61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA618u;
    // 0x1ea61c: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1EA618u, 0x1EA620u)) {
        return;
    }
    ctx->pc = 0x1EA620u;
label_1ea620:
    // 0x1ea620: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ea620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ea624:
    // 0x1ea624: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1ea624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ea628:
    // 0x1ea628: 0xc078ee6  jal         func_1E3B98
label_1ea62c:
    if (ctx->pc == 0x1EA62Cu) {
        ctx->pc = 0x1EA62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA628u;
        // 0x1ea62c: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA630u;
        goto label_1ea630;
    }
    ctx->pc = 0x1EA628u;
    SET_GPR_U32(ctx, 31, 0x1EA630u);
    ctx->pc = 0x1EA62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA628u;
    // 0x1ea62c: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EA628u, 0x1EA630u)) {
        return;
    }
    ctx->pc = 0x1EA630u;
label_1ea630:
    // 0x1ea630: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ea630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ea634:
    // 0x1ea634: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1ea634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1ea638:
    // 0x1ea638: 0xc078ee6  jal         func_1E3B98
label_1ea63c:
    if (ctx->pc == 0x1EA63Cu) {
        ctx->pc = 0x1EA63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA638u;
        // 0x1ea63c: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA640u;
        goto label_1ea640;
    }
    ctx->pc = 0x1EA638u;
    SET_GPR_U32(ctx, 31, 0x1EA640u);
    ctx->pc = 0x1EA63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA638u;
    // 0x1ea63c: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EA638u, 0x1EA640u)) {
        return;
    }
    ctx->pc = 0x1EA640u;
label_1ea640:
    // 0x1ea640: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ea640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ea644:
    // 0x1ea644: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1ea644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1ea648:
    // 0x1ea648: 0xc078ee6  jal         func_1E3B98
label_1ea64c:
    if (ctx->pc == 0x1EA64Cu) {
        ctx->pc = 0x1EA64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA648u;
        // 0x1ea64c: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA650u;
        goto label_1ea650;
    }
    ctx->pc = 0x1EA648u;
    SET_GPR_U32(ctx, 31, 0x1EA650u);
    ctx->pc = 0x1EA64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA648u;
    // 0x1ea64c: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EA648u, 0x1EA650u)) {
        return;
    }
    ctx->pc = 0x1EA650u;
label_1ea650:
    // 0x1ea650: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ea650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ea654:
    // 0x1ea654: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1ea654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1ea658:
    // 0x1ea658: 0xc078ee6  jal         func_1E3B98
label_1ea65c:
    if (ctx->pc == 0x1EA65Cu) {
        ctx->pc = 0x1EA65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA658u;
        // 0x1ea65c: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA660u;
        goto label_1ea660;
    }
    ctx->pc = 0x1EA658u;
    SET_GPR_U32(ctx, 31, 0x1EA660u);
    ctx->pc = 0x1EA65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA658u;
    // 0x1ea65c: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EA658u, 0x1EA660u)) {
        return;
    }
    ctx->pc = 0x1EA660u;
label_1ea660:
    // 0x1ea660: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ea660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ea664:
    // 0x1ea664: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1ea664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1ea668:
    // 0x1ea668: 0xc078ee6  jal         func_1E3B98
label_1ea66c:
    if (ctx->pc == 0x1EA66Cu) {
        ctx->pc = 0x1EA66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA668u;
        // 0x1ea66c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA670u;
        goto label_1ea670;
    }
    ctx->pc = 0x1EA668u;
    SET_GPR_U32(ctx, 31, 0x1EA670u);
    ctx->pc = 0x1EA66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA668u;
    // 0x1ea66c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EA668u, 0x1EA670u)) {
        return;
    }
    ctx->pc = 0x1EA670u;
label_1ea670:
    // 0x1ea670: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ea670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ea674:
    // 0x1ea674: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1ea674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1ea678:
    // 0x1ea678: 0xc078ee6  jal         func_1E3B98
label_1ea67c:
    if (ctx->pc == 0x1EA67Cu) {
        ctx->pc = 0x1EA67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA678u;
        // 0x1ea67c: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA680u;
        goto label_1ea680;
    }
    ctx->pc = 0x1EA678u;
    SET_GPR_U32(ctx, 31, 0x1EA680u);
    ctx->pc = 0x1EA67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA678u;
    // 0x1ea67c: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EA678u, 0x1EA680u)) {
        return;
    }
    ctx->pc = 0x1EA680u;
label_1ea680:
    // 0x1ea680: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ea680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ea684:
    // 0x1ea684: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1ea684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1ea688:
    // 0x1ea688: 0xc078ee6  jal         func_1E3B98
label_1ea68c:
    if (ctx->pc == 0x1EA68Cu) {
        ctx->pc = 0x1EA68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA688u;
        // 0x1ea68c: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA690u;
        goto label_1ea690;
    }
    ctx->pc = 0x1EA688u;
    SET_GPR_U32(ctx, 31, 0x1EA690u);
    ctx->pc = 0x1EA68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA688u;
    // 0x1ea68c: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EA688u, 0x1EA690u)) {
        return;
    }
    ctx->pc = 0x1EA690u;
label_1ea690:
    // 0x1ea690: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ea690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ea694:
    // 0x1ea694: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1ea694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ea698:
    // 0x1ea698: 0xc078ee6  jal         func_1E3B98
label_1ea69c:
    if (ctx->pc == 0x1EA69Cu) {
        ctx->pc = 0x1EA69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA698u;
        // 0x1ea69c: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA6A0u;
        goto label_1ea6a0;
    }
    ctx->pc = 0x1EA698u;
    SET_GPR_U32(ctx, 31, 0x1EA6A0u);
    ctx->pc = 0x1EA69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA698u;
    // 0x1ea69c: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EA698u, 0x1EA6A0u)) {
        return;
    }
    ctx->pc = 0x1EA6A0u;
label_1ea6a0:
    // 0x1ea6a0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ea6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ea6a4:
    // 0x1ea6a4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1ea6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1ea6a8:
    // 0x1ea6a8: 0xc078ee6  jal         func_1E3B98
label_1ea6ac:
    if (ctx->pc == 0x1EA6ACu) {
        ctx->pc = 0x1EA6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA6A8u;
        // 0x1ea6ac: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA6B0u;
        goto label_1ea6b0;
    }
    ctx->pc = 0x1EA6A8u;
    SET_GPR_U32(ctx, 31, 0x1EA6B0u);
    ctx->pc = 0x1EA6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA6A8u;
    // 0x1ea6ac: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EA6A8u, 0x1EA6B0u)) {
        return;
    }
    ctx->pc = 0x1EA6B0u;
label_1ea6b0:
    // 0x1ea6b0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ea6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ea6b4:
    // 0x1ea6b4: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1ea6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1ea6b8:
    // 0x1ea6b8: 0xc078ee6  jal         func_1E3B98
label_1ea6bc:
    if (ctx->pc == 0x1EA6BCu) {
        ctx->pc = 0x1EA6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA6B8u;
        // 0x1ea6bc: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA6C0u;
        goto label_1ea6c0;
    }
    ctx->pc = 0x1EA6B8u;
    SET_GPR_U32(ctx, 31, 0x1EA6C0u);
    ctx->pc = 0x1EA6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA6B8u;
    // 0x1ea6bc: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EA6B8u, 0x1EA6C0u)) {
        return;
    }
    ctx->pc = 0x1EA6C0u;
label_1ea6c0:
    // 0x1ea6c0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ea6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ea6c4:
    // 0x1ea6c4: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1ea6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1ea6c8:
    // 0x1ea6c8: 0xc078ee6  jal         func_1E3B98
label_1ea6cc:
    if (ctx->pc == 0x1EA6CCu) {
        ctx->pc = 0x1EA6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA6C8u;
        // 0x1ea6cc: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA6D0u;
        goto label_1ea6d0;
    }
    ctx->pc = 0x1EA6C8u;
    SET_GPR_U32(ctx, 31, 0x1EA6D0u);
    ctx->pc = 0x1EA6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA6C8u;
    // 0x1ea6cc: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EA6C8u, 0x1EA6D0u)) {
        return;
    }
    ctx->pc = 0x1EA6D0u;
label_1ea6d0:
    // 0x1ea6d0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ea6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ea6d4:
    // 0x1ea6d4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1ea6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ea6d8:
    // 0x1ea6d8: 0xc078ee6  jal         func_1E3B98
label_1ea6dc:
    if (ctx->pc == 0x1EA6DCu) {
        ctx->pc = 0x1EA6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA6D8u;
        // 0x1ea6dc: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA6E0u;
        goto label_1ea6e0;
    }
    ctx->pc = 0x1EA6D8u;
    SET_GPR_U32(ctx, 31, 0x1EA6E0u);
    ctx->pc = 0x1EA6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA6D8u;
    // 0x1ea6dc: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B98u, 0x1EA6D8u, 0x1EA6E0u)) {
        return;
    }
    ctx->pc = 0x1EA6E0u;
label_1ea6e0:
    // 0x1ea6e0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1ea6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1ea6e4:
    // 0x1ea6e4: 0x184000f2  blez        $v0, . + 4 + (0xF2 << 2)
label_1ea6e8:
    if (ctx->pc == 0x1EA6E8u) {
        ctx->pc = 0x1EA6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA6E4u;
        // 0x1ea6e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA6ECu;
        goto label_1ea6ec;
    }
    ctx->pc = 0x1EA6E4u;
    {
        const bool branch_taken_0x1ea6e4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1EA6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA6E4u;
        // 0x1ea6e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea6e4) {
            ctx->pc = 0x1EAAB0u;
            goto label_1eaab0;
        }
    }
    ctx->pc = 0x1EA6ECu;
label_1ea6ec:
    // 0x1ea6ec: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1ea6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_1ea6f0:
    // 0x1ea6f0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ea6f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1ea6f4:
    // 0x1ea6f4: 0x4600a046  mov.s       $f1, $f20
    ctx->pc = 0x1ea6f4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[20]);
label_1ea6f8:
    // 0x1ea6f8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ea6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1ea6fc:
    // 0x1ea6fc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1ea6fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1ea700:
    // 0x1ea700: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ea700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea704:
    // 0x1ea704: 0x0  nop
    ctx->pc = 0x1ea704u;
    // NOP
label_1ea708:
    // 0x1ea708: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1ea708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1ea70c:
    // 0x1ea70c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1ea70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1ea710:
    // 0x1ea710: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
label_1ea714:
    if (ctx->pc == 0x1EA714u) {
        ctx->pc = 0x1EA714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA710u;
        // 0x1ea714: 0xc22821  addu        $a1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA718u;
        goto label_1ea718;
    }
    ctx->pc = 0x1EA710u;
    {
        const bool branch_taken_0x1ea710 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1EA714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA710u;
        // 0x1ea714: 0xc22821  addu        $a1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea710) {
            ctx->pc = 0x1EA734u;
            goto label_1ea734;
        }
    }
    ctx->pc = 0x1EA718u;
label_1ea718:
    // 0x1ea718: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1ea718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ea71c:
    // 0x1ea71c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ea720:
    if (ctx->pc == 0x1EA720u) {
        ctx->pc = 0x1EA720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA71Cu;
        // 0x1ea720: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA724u;
        goto label_1ea724;
    }
    ctx->pc = 0x1EA71Cu;
    {
        const bool branch_taken_0x1ea71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA71Cu;
        // 0x1ea720: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea71c) {
            ctx->pc = 0x1EA734u;
            goto label_1ea734;
        }
    }
    ctx->pc = 0x1EA724u;
label_1ea724:
    // 0x1ea724: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ea724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ea728:
    // 0x1ea728: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ea728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ea72c:
    // 0x1ea72c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ea730:
    if (ctx->pc == 0x1EA730u) {
        ctx->pc = 0x1EA730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA72Cu;
        // 0x1ea730: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA734u;
        goto label_1ea734;
    }
    ctx->pc = 0x1EA72Cu;
    {
        const bool branch_taken_0x1ea72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA72Cu;
        // 0x1ea730: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea72c) {
            ctx->pc = 0x1EA744u;
            goto label_1ea744;
        }
    }
    ctx->pc = 0x1EA734u;
label_1ea734:
    // 0x1ea734: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ea734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1ea738:
    // 0x1ea738: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ea738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ea73c:
    // 0x1ea73c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ea73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ea740:
    // 0x1ea740: 0xc460fffc  lwc1        $f0, -0x4($v1)
    ctx->pc = 0x1ea740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea744:
    // 0x1ea744: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1ea744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1ea748:
    // 0x1ea748: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ea748u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_1ea74c:
    // 0x1ea74c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1ea74cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1ea750:
    // 0x1ea750: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1ea750u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_1ea754:
    // 0x1ea754: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1ea754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1ea758:
    // 0x1ea758: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_1ea75c:
    if (ctx->pc == 0x1EA75Cu) {
        ctx->pc = 0x1EA75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA758u;
        // 0x1ea75c: 0xc22821  addu        $a1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA760u;
        goto label_1ea760;
    }
    ctx->pc = 0x1EA758u;
    {
        const bool branch_taken_0x1ea758 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1EA75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA758u;
        // 0x1ea75c: 0xc22821  addu        $a1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea758) {
            ctx->pc = 0x1EA780u;
            goto label_1ea780;
        }
    }
    ctx->pc = 0x1EA760u;
label_1ea760:
    // 0x1ea760: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1ea760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1ea764:
    // 0x1ea764: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1ea764u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ea768:
    // 0x1ea768: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ea76c:
    if (ctx->pc == 0x1EA76Cu) {
        ctx->pc = 0x1EA76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA768u;
        // 0x1ea76c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA770u;
        goto label_1ea770;
    }
    ctx->pc = 0x1EA768u;
    {
        const bool branch_taken_0x1ea768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA768u;
        // 0x1ea76c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea768) {
            ctx->pc = 0x1EA780u;
            goto label_1ea780;
        }
    }
    ctx->pc = 0x1EA770u;
label_1ea770:
    // 0x1ea770: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ea770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ea774:
    // 0x1ea774: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ea774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ea778:
    // 0x1ea778: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ea77c:
    if (ctx->pc == 0x1EA77Cu) {
        ctx->pc = 0x1EA77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA778u;
        // 0x1ea77c: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA780u;
        goto label_1ea780;
    }
    ctx->pc = 0x1EA778u;
    {
        const bool branch_taken_0x1ea778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA778u;
        // 0x1ea77c: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea778) {
            ctx->pc = 0x1EA794u;
            goto label_1ea794;
        }
    }
    ctx->pc = 0x1EA780u;
label_1ea780:
    // 0x1ea780: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1ea780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1ea784:
    // 0x1ea784: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ea784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1ea788:
    // 0x1ea788: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ea78c:
    // 0x1ea78c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea790:
    // 0x1ea790: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1ea790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea794:
    // 0x1ea794: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1ea794u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1ea798:
    // 0x1ea798: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ea798u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_1ea79c:
    // 0x1ea79c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1ea79cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1ea7a0:
    // 0x1ea7a0: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x1ea7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_1ea7a4:
    // 0x1ea7a4: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1ea7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1ea7a8:
    // 0x1ea7a8: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_1ea7ac:
    if (ctx->pc == 0x1EA7ACu) {
        ctx->pc = 0x1EA7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA7A8u;
        // 0x1ea7ac: 0xc22821  addu        $a1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA7B0u;
        goto label_1ea7b0;
    }
    ctx->pc = 0x1EA7A8u;
    {
        const bool branch_taken_0x1ea7a8 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1EA7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA7A8u;
        // 0x1ea7ac: 0xc22821  addu        $a1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea7a8) {
            ctx->pc = 0x1EA7D0u;
            goto label_1ea7d0;
        }
    }
    ctx->pc = 0x1EA7B0u;
label_1ea7b0:
    // 0x1ea7b0: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1ea7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1ea7b4:
    // 0x1ea7b4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1ea7b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ea7b8:
    // 0x1ea7b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ea7bc:
    if (ctx->pc == 0x1EA7BCu) {
        ctx->pc = 0x1EA7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA7B8u;
        // 0x1ea7bc: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA7C0u;
        goto label_1ea7c0;
    }
    ctx->pc = 0x1EA7B8u;
    {
        const bool branch_taken_0x1ea7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA7B8u;
        // 0x1ea7bc: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea7b8) {
            ctx->pc = 0x1EA7D0u;
            goto label_1ea7d0;
        }
    }
    ctx->pc = 0x1EA7C0u;
label_1ea7c0:
    // 0x1ea7c0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ea7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ea7c4:
    // 0x1ea7c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ea7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ea7c8:
    // 0x1ea7c8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ea7cc:
    if (ctx->pc == 0x1EA7CCu) {
        ctx->pc = 0x1EA7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA7C8u;
        // 0x1ea7cc: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA7D0u;
        goto label_1ea7d0;
    }
    ctx->pc = 0x1EA7C8u;
    {
        const bool branch_taken_0x1ea7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA7C8u;
        // 0x1ea7cc: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea7c8) {
            ctx->pc = 0x1EA7E4u;
            goto label_1ea7e4;
        }
    }
    ctx->pc = 0x1EA7D0u;
label_1ea7d0:
    // 0x1ea7d0: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1ea7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1ea7d4:
    // 0x1ea7d4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ea7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1ea7d8:
    // 0x1ea7d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ea7dc:
    // 0x1ea7dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea7e0:
    // 0x1ea7e0: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1ea7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea7e4:
    // 0x1ea7e4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1ea7e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1ea7e8:
    // 0x1ea7e8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ea7e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_1ea7ec:
    // 0x1ea7ec: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1ea7ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1ea7f0:
    // 0x1ea7f0: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x1ea7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
label_1ea7f4:
    // 0x1ea7f4: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1ea7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1ea7f8:
    // 0x1ea7f8: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_1ea7fc:
    if (ctx->pc == 0x1EA7FCu) {
        ctx->pc = 0x1EA7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA7F8u;
        // 0x1ea7fc: 0xc22821  addu        $a1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA800u;
        goto label_1ea800;
    }
    ctx->pc = 0x1EA7F8u;
    {
        const bool branch_taken_0x1ea7f8 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1EA7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA7F8u;
        // 0x1ea7fc: 0xc22821  addu        $a1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea7f8) {
            ctx->pc = 0x1EA820u;
            goto label_1ea820;
        }
    }
    ctx->pc = 0x1EA800u;
label_1ea800:
    // 0x1ea800: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x1ea800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_1ea804:
    // 0x1ea804: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1ea804u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ea808:
    // 0x1ea808: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ea80c:
    if (ctx->pc == 0x1EA80Cu) {
        ctx->pc = 0x1EA80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA808u;
        // 0x1ea80c: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA810u;
        goto label_1ea810;
    }
    ctx->pc = 0x1EA808u;
    {
        const bool branch_taken_0x1ea808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA808u;
        // 0x1ea80c: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea808) {
            ctx->pc = 0x1EA820u;
            goto label_1ea820;
        }
    }
    ctx->pc = 0x1EA810u;
label_1ea810:
    // 0x1ea810: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ea810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ea814:
    // 0x1ea814: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ea814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ea818:
    // 0x1ea818: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ea81c:
    if (ctx->pc == 0x1EA81Cu) {
        ctx->pc = 0x1EA81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA818u;
        // 0x1ea81c: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA820u;
        goto label_1ea820;
    }
    ctx->pc = 0x1EA818u;
    {
        const bool branch_taken_0x1ea818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA818u;
        // 0x1ea81c: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea818) {
            ctx->pc = 0x1EA834u;
            goto label_1ea834;
        }
    }
    ctx->pc = 0x1EA820u;
label_1ea820:
    // 0x1ea820: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x1ea820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_1ea824:
    // 0x1ea824: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1ea824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1ea828:
    // 0x1ea828: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ea82c:
    // 0x1ea82c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea830:
    // 0x1ea830: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1ea830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea834:
    // 0x1ea834: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ea834u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ea838:
    // 0x1ea838: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1ea838u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1ea83c:
    // 0x1ea83c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ea83cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_1ea840:
    // 0x1ea840: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1ea840u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1ea844:
    // 0x1ea844: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x1ea844u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
label_1ea848:
    // 0x1ea848: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1ea848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1ea84c:
    // 0x1ea84c: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_1ea850:
    if (ctx->pc == 0x1EA850u) {
        ctx->pc = 0x1EA850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA84Cu;
        // 0x1ea850: 0xc22821  addu        $a1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA854u;
        goto label_1ea854;
    }
    ctx->pc = 0x1EA84Cu;
    {
        const bool branch_taken_0x1ea84c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1EA850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA84Cu;
        // 0x1ea850: 0xc22821  addu        $a1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea84c) {
            ctx->pc = 0x1EA874u;
            goto label_1ea874;
        }
    }
    ctx->pc = 0x1EA854u;
label_1ea854:
    // 0x1ea854: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x1ea854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_1ea858:
    // 0x1ea858: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1ea858u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ea85c:
    // 0x1ea85c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ea860:
    if (ctx->pc == 0x1EA860u) {
        ctx->pc = 0x1EA860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA85Cu;
        // 0x1ea860: 0x8fa30070  lw          $v1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA864u;
        goto label_1ea864;
    }
    ctx->pc = 0x1EA85Cu;
    {
        const bool branch_taken_0x1ea85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA85Cu;
        // 0x1ea860: 0x8fa30070  lw          $v1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea85c) {
            ctx->pc = 0x1EA874u;
            goto label_1ea874;
        }
    }
    ctx->pc = 0x1EA864u;
label_1ea864:
    // 0x1ea864: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1ea864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ea868:
    // 0x1ea868: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea86c:
    // 0x1ea86c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ea870:
    if (ctx->pc == 0x1EA870u) {
        ctx->pc = 0x1EA870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA86Cu;
        // 0x1ea870: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA874u;
        goto label_1ea874;
    }
    ctx->pc = 0x1EA86Cu;
    {
        const bool branch_taken_0x1ea86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA86Cu;
        // 0x1ea870: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea86c) {
            ctx->pc = 0x1EA888u;
            goto label_1ea888;
        }
    }
    ctx->pc = 0x1EA874u;
label_1ea874:
    // 0x1ea874: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x1ea874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_1ea878:
    // 0x1ea878: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1ea878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1ea87c:
    // 0x1ea87c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea87cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ea880:
    // 0x1ea880: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea884:
    // 0x1ea884: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1ea884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea888:
    // 0x1ea888: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1ea888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1ea88c:
    // 0x1ea88c: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1ea88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1ea890:
    // 0x1ea890: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_1ea894:
    if (ctx->pc == 0x1EA894u) {
        ctx->pc = 0x1EA894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA890u;
        // 0x1ea894: 0xc22821  addu        $a1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA898u;
        goto label_1ea898;
    }
    ctx->pc = 0x1EA890u;
    {
        const bool branch_taken_0x1ea890 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1EA894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA890u;
        // 0x1ea894: 0xc22821  addu        $a1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea890) {
            ctx->pc = 0x1EA8B8u;
            goto label_1ea8b8;
        }
    }
    ctx->pc = 0x1EA898u;
label_1ea898:
    // 0x1ea898: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x1ea898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1ea89c:
    // 0x1ea89c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1ea89cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ea8a0:
    // 0x1ea8a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ea8a4:
    if (ctx->pc == 0x1EA8A4u) {
        ctx->pc = 0x1EA8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8A0u;
        // 0x1ea8a4: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA8A8u;
        goto label_1ea8a8;
    }
    ctx->pc = 0x1EA8A0u;
    {
        const bool branch_taken_0x1ea8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8A0u;
        // 0x1ea8a4: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea8a0) {
            ctx->pc = 0x1EA8B8u;
            goto label_1ea8b8;
        }
    }
    ctx->pc = 0x1EA8A8u;
label_1ea8a8:
    // 0x1ea8a8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ea8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ea8ac:
    // 0x1ea8ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ea8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ea8b0:
    // 0x1ea8b0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ea8b4:
    if (ctx->pc == 0x1EA8B4u) {
        ctx->pc = 0x1EA8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8B0u;
        // 0x1ea8b4: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA8B8u;
        goto label_1ea8b8;
    }
    ctx->pc = 0x1EA8B0u;
    {
        const bool branch_taken_0x1ea8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8B0u;
        // 0x1ea8b4: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea8b0) {
            ctx->pc = 0x1EA8CCu;
            goto label_1ea8cc;
        }
    }
    ctx->pc = 0x1EA8B8u;
label_1ea8b8:
    // 0x1ea8b8: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x1ea8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1ea8bc:
    // 0x1ea8bc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1ea8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1ea8c0:
    // 0x1ea8c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ea8c4:
    // 0x1ea8c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea8c8:
    // 0x1ea8c8: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1ea8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea8cc:
    // 0x1ea8cc: 0x46040082  mul.s       $f2, $f0, $f4
    ctx->pc = 0x1ea8ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_1ea8d0:
    // 0x1ea8d0: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
label_1ea8d4:
    if (ctx->pc == 0x1EA8D4u) {
        ctx->pc = 0x1EA8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8D0u;
        // 0x1ea8d4: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA8D8u;
        goto label_1ea8d8;
    }
    ctx->pc = 0x1EA8D0u;
    {
        const bool branch_taken_0x1ea8d0 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1EA8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8D0u;
        // 0x1ea8d4: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea8d0) {
            ctx->pc = 0x1EA8F4u;
            goto label_1ea8f4;
        }
    }
    ctx->pc = 0x1EA8D8u;
label_1ea8d8:
    // 0x1ea8d8: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1ea8d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ea8dc:
    // 0x1ea8dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ea8e0:
    if (ctx->pc == 0x1EA8E0u) {
        ctx->pc = 0x1EA8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8DCu;
        // 0x1ea8e0: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA8E4u;
        goto label_1ea8e4;
    }
    ctx->pc = 0x1EA8DCu;
    {
        const bool branch_taken_0x1ea8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8DCu;
        // 0x1ea8e0: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea8dc) {
            ctx->pc = 0x1EA8F4u;
            goto label_1ea8f4;
        }
    }
    ctx->pc = 0x1EA8E4u;
label_1ea8e4:
    // 0x1ea8e4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ea8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ea8e8:
    // 0x1ea8e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ea8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ea8ec:
    // 0x1ea8ec: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ea8f0:
    if (ctx->pc == 0x1EA8F0u) {
        ctx->pc = 0x1EA8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8ECu;
        // 0x1ea8f0: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA8F4u;
        goto label_1ea8f4;
    }
    ctx->pc = 0x1EA8ECu;
    {
        const bool branch_taken_0x1ea8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8ECu;
        // 0x1ea8f0: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea8ec) {
            ctx->pc = 0x1EA904u;
            goto label_1ea904;
        }
    }
    ctx->pc = 0x1EA8F4u;
label_1ea8f4:
    // 0x1ea8f4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1ea8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1ea8f8:
    // 0x1ea8f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ea8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ea8fc:
    // 0x1ea8fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ea8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ea900:
    // 0x1ea900: 0xc460fffc  lwc1        $f0, -0x4($v1)
    ctx->pc = 0x1ea900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea904:
    // 0x1ea904: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1ea904u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1ea908:
    // 0x1ea908: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1ea908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1ea90c:
    // 0x1ea90c: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1ea90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1ea910:
    // 0x1ea910: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_1ea914:
    if (ctx->pc == 0x1EA914u) {
        ctx->pc = 0x1EA914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA910u;
        // 0x1ea914: 0xc22821  addu        $a1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA918u;
        goto label_1ea918;
    }
    ctx->pc = 0x1EA910u;
    {
        const bool branch_taken_0x1ea910 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1EA914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA910u;
        // 0x1ea914: 0xc22821  addu        $a1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea910) {
            ctx->pc = 0x1EA938u;
            goto label_1ea938;
        }
    }
    ctx->pc = 0x1EA918u;
label_1ea918:
    // 0x1ea918: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x1ea918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1ea91c:
    // 0x1ea91c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1ea91cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ea920:
    // 0x1ea920: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ea924:
    if (ctx->pc == 0x1EA924u) {
        ctx->pc = 0x1EA924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA920u;
        // 0x1ea924: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA928u;
        goto label_1ea928;
    }
    ctx->pc = 0x1EA920u;
    {
        const bool branch_taken_0x1ea920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA920u;
        // 0x1ea924: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea920) {
            ctx->pc = 0x1EA938u;
            goto label_1ea938;
        }
    }
    ctx->pc = 0x1EA928u;
label_1ea928:
    // 0x1ea928: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ea928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ea92c:
    // 0x1ea92c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ea92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ea930:
    // 0x1ea930: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ea934:
    if (ctx->pc == 0x1EA934u) {
        ctx->pc = 0x1EA934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA930u;
        // 0x1ea934: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA938u;
        goto label_1ea938;
    }
    ctx->pc = 0x1EA930u;
    {
        const bool branch_taken_0x1ea930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA930u;
        // 0x1ea934: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea930) {
            ctx->pc = 0x1EA94Cu;
            goto label_1ea94c;
        }
    }
    ctx->pc = 0x1EA938u;
label_1ea938:
    // 0x1ea938: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x1ea938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1ea93c:
    // 0x1ea93c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1ea93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1ea940:
    // 0x1ea940: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ea944:
    // 0x1ea944: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea948:
    // 0x1ea948: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1ea948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea94c:
    // 0x1ea94c: 0x46040082  mul.s       $f2, $f0, $f4
    ctx->pc = 0x1ea94cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_1ea950:
    // 0x1ea950: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
label_1ea954:
    if (ctx->pc == 0x1EA954u) {
        ctx->pc = 0x1EA954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA950u;
        // 0x1ea954: 0x8fa30064  lw          $v1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA958u;
        goto label_1ea958;
    }
    ctx->pc = 0x1EA950u;
    {
        const bool branch_taken_0x1ea950 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1EA954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA950u;
        // 0x1ea954: 0x8fa30064  lw          $v1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea950) {
            ctx->pc = 0x1EA974u;
            goto label_1ea974;
        }
    }
    ctx->pc = 0x1EA958u;
label_1ea958:
    // 0x1ea958: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1ea958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ea95c:
    // 0x1ea95c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ea960:
    if (ctx->pc == 0x1EA960u) {
        ctx->pc = 0x1EA960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA95Cu;
        // 0x1ea960: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA964u;
        goto label_1ea964;
    }
    ctx->pc = 0x1EA95Cu;
    {
        const bool branch_taken_0x1ea95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA95Cu;
        // 0x1ea960: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea95c) {
            ctx->pc = 0x1EA974u;
            goto label_1ea974;
        }
    }
    ctx->pc = 0x1EA964u;
label_1ea964:
    // 0x1ea964: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ea964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ea968:
    // 0x1ea968: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ea968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ea96c:
    // 0x1ea96c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ea970:
    if (ctx->pc == 0x1EA970u) {
        ctx->pc = 0x1EA970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA96Cu;
        // 0x1ea970: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA974u;
        goto label_1ea974;
    }
    ctx->pc = 0x1EA96Cu;
    {
        const bool branch_taken_0x1ea96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA96Cu;
        // 0x1ea970: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea96c) {
            ctx->pc = 0x1EA984u;
            goto label_1ea984;
        }
    }
    ctx->pc = 0x1EA974u;
label_1ea974:
    // 0x1ea974: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ea974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1ea978:
    // 0x1ea978: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ea978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ea97c:
    // 0x1ea97c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ea97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ea980:
    // 0x1ea980: 0xc460fffc  lwc1        $f0, -0x4($v1)
    ctx->pc = 0x1ea980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea984:
    // 0x1ea984: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1ea984u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1ea988:
    // 0x1ea988: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1ea988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_1ea98c:
    // 0x1ea98c: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1ea98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1ea990:
    // 0x1ea990: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_1ea994:
    if (ctx->pc == 0x1EA994u) {
        ctx->pc = 0x1EA994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA990u;
        // 0x1ea994: 0xc22821  addu        $a1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA998u;
        goto label_1ea998;
    }
    ctx->pc = 0x1EA990u;
    {
        const bool branch_taken_0x1ea990 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1EA994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA990u;
        // 0x1ea994: 0xc22821  addu        $a1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea990) {
            ctx->pc = 0x1EA9B8u;
            goto label_1ea9b8;
        }
    }
    ctx->pc = 0x1EA998u;
label_1ea998:
    // 0x1ea998: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x1ea998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_1ea99c:
    // 0x1ea99c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1ea99cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ea9a0:
    // 0x1ea9a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ea9a4:
    if (ctx->pc == 0x1EA9A4u) {
        ctx->pc = 0x1EA9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9A0u;
        // 0x1ea9a4: 0x8fa30080  lw          $v1, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA9A8u;
        goto label_1ea9a8;
    }
    ctx->pc = 0x1EA9A0u;
    {
        const bool branch_taken_0x1ea9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9A0u;
        // 0x1ea9a4: 0x8fa30080  lw          $v1, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea9a0) {
            ctx->pc = 0x1EA9B8u;
            goto label_1ea9b8;
        }
    }
    ctx->pc = 0x1EA9A8u;
label_1ea9a8:
    // 0x1ea9a8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1ea9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ea9ac:
    // 0x1ea9ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea9b0:
    // 0x1ea9b0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ea9b4:
    if (ctx->pc == 0x1EA9B4u) {
        ctx->pc = 0x1EA9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9B0u;
        // 0x1ea9b4: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA9B8u;
        goto label_1ea9b8;
    }
    ctx->pc = 0x1EA9B0u;
    {
        const bool branch_taken_0x1ea9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9B0u;
        // 0x1ea9b4: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea9b0) {
            ctx->pc = 0x1EA9CCu;
            goto label_1ea9cc;
        }
    }
    ctx->pc = 0x1EA9B8u;
label_1ea9b8:
    // 0x1ea9b8: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x1ea9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_1ea9bc:
    // 0x1ea9bc: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1ea9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1ea9c0:
    // 0x1ea9c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ea9c4:
    // 0x1ea9c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea9c8:
    // 0x1ea9c8: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1ea9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ea9cc:
    // 0x1ea9cc: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x1ea9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_1ea9d0:
    // 0x1ea9d0: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1ea9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1ea9d4:
    // 0x1ea9d4: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_1ea9d8:
    if (ctx->pc == 0x1EA9D8u) {
        ctx->pc = 0x1EA9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9D4u;
        // 0x1ea9d8: 0xc22821  addu        $a1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA9DCu;
        goto label_1ea9dc;
    }
    ctx->pc = 0x1EA9D4u;
    {
        const bool branch_taken_0x1ea9d4 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1EA9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9D4u;
        // 0x1ea9d8: 0xc22821  addu        $a1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea9d4) {
            ctx->pc = 0x1EA9FCu;
            goto label_1ea9fc;
        }
    }
    ctx->pc = 0x1EA9DCu;
label_1ea9dc:
    // 0x1ea9dc: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x1ea9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_1ea9e0:
    // 0x1ea9e0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1ea9e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ea9e4:
    // 0x1ea9e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ea9e8:
    if (ctx->pc == 0x1EA9E8u) {
        ctx->pc = 0x1EA9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9E4u;
        // 0x1ea9e8: 0x8fa30090  lw          $v1, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA9ECu;
        goto label_1ea9ec;
    }
    ctx->pc = 0x1EA9E4u;
    {
        const bool branch_taken_0x1ea9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9E4u;
        // 0x1ea9e8: 0x8fa30090  lw          $v1, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea9e4) {
            ctx->pc = 0x1EA9FCu;
            goto label_1ea9fc;
        }
    }
    ctx->pc = 0x1EA9ECu;
label_1ea9ec:
    // 0x1ea9ec: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1ea9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ea9f0:
    // 0x1ea9f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea9f4:
    // 0x1ea9f4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ea9f8:
    if (ctx->pc == 0x1EA9F8u) {
        ctx->pc = 0x1EA9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9F4u;
        // 0x1ea9f8: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA9FCu;
        goto label_1ea9fc;
    }
    ctx->pc = 0x1EA9F4u;
    {
        const bool branch_taken_0x1ea9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9F4u;
        // 0x1ea9f8: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea9f4) {
            ctx->pc = 0x1EAA10u;
            goto label_1eaa10;
        }
    }
    ctx->pc = 0x1EA9FCu;
label_1ea9fc:
    // 0x1ea9fc: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x1ea9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_1eaa00:
    // 0x1eaa00: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1eaa00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1eaa04:
    // 0x1eaa04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eaa04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1eaa08:
    // 0x1eaa08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eaa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eaa0c:
    // 0x1eaa0c: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1eaa0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eaa10:
    // 0x1eaa10: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x1eaa10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_1eaa14:
    // 0x1eaa14: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1eaa14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1eaa18:
    // 0x1eaa18: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_1eaa1c:
    if (ctx->pc == 0x1EAA1Cu) {
        ctx->pc = 0x1EAA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA18u;
        // 0x1eaa1c: 0xc22821  addu        $a1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAA20u;
        goto label_1eaa20;
    }
    ctx->pc = 0x1EAA18u;
    {
        const bool branch_taken_0x1eaa18 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1EAA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA18u;
        // 0x1eaa1c: 0xc22821  addu        $a1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaa18) {
            ctx->pc = 0x1EAA40u;
            goto label_1eaa40;
        }
    }
    ctx->pc = 0x1EAA20u;
label_1eaa20:
    // 0x1eaa20: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x1eaa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1eaa24:
    // 0x1eaa24: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1eaa24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1eaa28:
    // 0x1eaa28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1eaa2c:
    if (ctx->pc == 0x1EAA2Cu) {
        ctx->pc = 0x1EAA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA28u;
        // 0x1eaa2c: 0x8fa300a0  lw          $v1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAA30u;
        goto label_1eaa30;
    }
    ctx->pc = 0x1EAA28u;
    {
        const bool branch_taken_0x1eaa28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA28u;
        // 0x1eaa2c: 0x8fa300a0  lw          $v1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaa28) {
            ctx->pc = 0x1EAA40u;
            goto label_1eaa40;
        }
    }
    ctx->pc = 0x1EAA30u;
label_1eaa30:
    // 0x1eaa30: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1eaa30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1eaa34:
    // 0x1eaa34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eaa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eaa38:
    // 0x1eaa38: 0x10000006  b           . + 4 + (0x6 << 2)
label_1eaa3c:
    if (ctx->pc == 0x1EAA3Cu) {
        ctx->pc = 0x1EAA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA38u;
        // 0x1eaa3c: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAA40u;
        goto label_1eaa40;
    }
    ctx->pc = 0x1EAA38u;
    {
        const bool branch_taken_0x1eaa38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA38u;
        // 0x1eaa3c: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaa38) {
            ctx->pc = 0x1EAA54u;
            goto label_1eaa54;
        }
    }
    ctx->pc = 0x1EAA40u;
label_1eaa40:
    // 0x1eaa40: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x1eaa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1eaa44:
    // 0x1eaa44: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1eaa44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1eaa48:
    // 0x1eaa48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eaa48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1eaa4c:
    // 0x1eaa4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eaa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eaa50:
    // 0x1eaa50: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1eaa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eaa54:
    // 0x1eaa54: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x1eaa54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
label_1eaa58:
    // 0x1eaa58: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1eaa58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1eaa5c:
    // 0x1eaa5c: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_1eaa60:
    if (ctx->pc == 0x1EAA60u) {
        ctx->pc = 0x1EAA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA5Cu;
        // 0x1eaa60: 0xc22821  addu        $a1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAA64u;
        goto label_1eaa64;
    }
    ctx->pc = 0x1EAA5Cu;
    {
        const bool branch_taken_0x1eaa5c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1EAA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA5Cu;
        // 0x1eaa60: 0xc22821  addu        $a1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaa5c) {
            ctx->pc = 0x1EAA84u;
            goto label_1eaa84;
        }
    }
    ctx->pc = 0x1EAA64u;
label_1eaa64:
    // 0x1eaa64: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1eaa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_1eaa68:
    // 0x1eaa68: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1eaa68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1eaa6c:
    // 0x1eaa6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1eaa70:
    if (ctx->pc == 0x1EAA70u) {
        ctx->pc = 0x1EAA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA6Cu;
        // 0x1eaa70: 0x8fa300b0  lw          $v1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAA74u;
        goto label_1eaa74;
    }
    ctx->pc = 0x1EAA6Cu;
    {
        const bool branch_taken_0x1eaa6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA6Cu;
        // 0x1eaa70: 0x8fa300b0  lw          $v1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaa6c) {
            ctx->pc = 0x1EAA84u;
            goto label_1eaa84;
        }
    }
    ctx->pc = 0x1EAA74u;
label_1eaa74:
    // 0x1eaa74: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1eaa74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1eaa78:
    // 0x1eaa78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eaa78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eaa7c:
    // 0x1eaa7c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1eaa80:
    if (ctx->pc == 0x1EAA80u) {
        ctx->pc = 0x1EAA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA7Cu;
        // 0x1eaa80: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAA84u;
        goto label_1eaa84;
    }
    ctx->pc = 0x1EAA7Cu;
    {
        const bool branch_taken_0x1eaa7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA7Cu;
        // 0x1eaa80: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaa7c) {
            ctx->pc = 0x1EAA98u;
            goto label_1eaa98;
        }
    }
    ctx->pc = 0x1EAA84u;
label_1eaa84:
    // 0x1eaa84: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1eaa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_1eaa88:
    // 0x1eaa88: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1eaa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1eaa8c:
    // 0x1eaa8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eaa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1eaa90:
    // 0x1eaa90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eaa90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eaa94:
    // 0x1eaa94: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x1eaa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eaa98:
    // 0x1eaa98: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x1eaa98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_1eaa9c:
    // 0x1eaa9c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1eaa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1eaaa0:
    // 0x1eaaa0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1eaaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1eaaa4:
    // 0x1eaaa4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1eaaa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1eaaa8:
    // 0x1eaaa8: 0x1440ff17  bnez        $v0, . + 4 + (-0xE9 << 2)
label_1eaaac:
    if (ctx->pc == 0x1EAAACu) {
        ctx->pc = 0x1EAAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAAA8u;
        // 0x1eaaac: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAAB0u;
        goto label_1eaab0;
    }
    ctx->pc = 0x1EAAA8u;
    {
        const bool branch_taken_0x1eaaa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EAAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAAA8u;
        // 0x1eaaac: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaaa8) {
            ctx->pc = 0x1EA708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ea708;
        }
    }
    ctx->pc = 0x1EAAB0u;
label_1eaab0:
    // 0x1eaab0: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x1eaab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1eaab4:
    // 0x1eaab4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1eaab4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eaab8:
    // 0x1eaab8: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x1eaab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1eaabc:
    // 0x1eaabc: 0x10000026  b           . + 4 + (0x26 << 2)
label_1eaac0:
    if (ctx->pc == 0x1EAAC0u) {
        ctx->pc = 0x1EAAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAABCu;
        // 0x1eaac0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAAC4u;
        goto label_1eaac4;
    }
    ctx->pc = 0x1EAABCu;
    {
        const bool branch_taken_0x1eaabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAABCu;
        // 0x1eaac0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaabc) {
            ctx->pc = 0x1EAB58u;
            goto label_1eab58;
        }
    }
    ctx->pc = 0x1EAAC4u;
label_1eaac4:
    // 0x1eaac4: 0x0  nop
    ctx->pc = 0x1eaac4u;
    // NOP
label_1eaac8:
    // 0x1eaac8: 0x132940  sll         $a1, $s3, 5
    ctx->pc = 0x1eaac8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
label_1eaacc:
    // 0x1eaacc: 0x128140  sll         $s0, $s2, 5
    ctx->pc = 0x1eaaccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
label_1eaad0:
    // 0x1eaad0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1eaad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1eaad4:
    // 0x1eaad4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1eaad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1eaad8:
    // 0x1eaad8: 0xc0c48d9  jal         func_312364
label_1eaadc:
    if (ctx->pc == 0x1EAADCu) {
        ctx->pc = 0x1EAADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAAD8u;
        // 0x1eaadc: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAAE0u;
        goto label_1eaae0;
    }
    ctx->pc = 0x1EAAD8u;
    SET_GPR_U32(ctx, 31, 0x1EAAE0u);
    ctx->pc = 0x1EAADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAAD8u;
    // 0x1eaadc: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312364u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312364u, 0x1EAAD8u, 0x1EAAE0u)) {
        return;
    }
    ctx->pc = 0x1EAAE0u;
label_1eaae0:
    // 0x1eaae0: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_1eaae4:
    if (ctx->pc == 0x1EAAE4u) {
        ctx->pc = 0x1EAAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAAE0u;
        // 0x1eaae4: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAAE8u;
        goto label_1eaae8;
    }
    ctx->pc = 0x1EAAE0u;
    {
        const bool branch_taken_0x1eaae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eaae0) {
            ctx->pc = 0x1EAAE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EAAE0u;
            // 0x1eaae4: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EAB40u;
            goto label_1eab40;
        }
    }
    ctx->pc = 0x1EAAE8u;
label_1eaae8:
    // 0x1eaae8: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1eaae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1eaaec:
    // 0x1eaaec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1eaaecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1eaaf0:
    // 0x1eaaf0: 0x131940  sll         $v1, $s3, 5
    ctx->pc = 0x1eaaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
label_1eaaf4:
    // 0x1eaaf4: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x1eaaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1eaaf8:
    // 0x1eaaf8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1eaaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1eaafc:
    // 0x1eaafc: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x1eaafcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1eab00:
    // 0x1eab00: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x1eab00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1eab04:
    // 0x1eab04: 0x6885000f  ldl         $a1, 0xF($a0)
    ctx->pc = 0x1eab04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1eab08:
    // 0x1eab08: 0x6c850008  ldr         $a1, 0x8($a0)
    ctx->pc = 0x1eab08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1eab0c:
    // 0x1eab0c: 0x68860017  ldl         $a2, 0x17($a0)
    ctx->pc = 0x1eab0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1eab10:
    // 0x1eab10: 0x6c860010  ldr         $a2, 0x10($a0)
    ctx->pc = 0x1eab10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1eab14:
    // 0x1eab14: 0x6887001f  ldl         $a3, 0x1F($a0)
    ctx->pc = 0x1eab14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1eab18:
    // 0x1eab18: 0x6c870018  ldr         $a3, 0x18($a0)
    ctx->pc = 0x1eab18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1eab1c:
    // 0x1eab1c: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x1eab1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eab20:
    // 0x1eab20: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x1eab20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eab24:
    // 0x1eab24: 0xb065000f  sdl         $a1, 0xF($v1)
    ctx->pc = 0x1eab24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eab28:
    // 0x1eab28: 0xb4650008  sdr         $a1, 0x8($v1)
    ctx->pc = 0x1eab28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eab2c:
    // 0x1eab2c: 0xb0660017  sdl         $a2, 0x17($v1)
    ctx->pc = 0x1eab2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eab30:
    // 0x1eab30: 0xb4660010  sdr         $a2, 0x10($v1)
    ctx->pc = 0x1eab30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eab34:
    // 0x1eab34: 0xb067001f  sdl         $a3, 0x1F($v1)
    ctx->pc = 0x1eab34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eab38:
    // 0x1eab38: 0xb4670018  sdr         $a3, 0x18($v1)
    ctx->pc = 0x1eab38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1eab3c:
    // 0x1eab3c: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x1eab3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1eab40:
    // 0x1eab40: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x1eab40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1eab44:
    // 0x1eab44: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x1eab44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1eab48:
    // 0x1eab48: 0x131140  sll         $v0, $s3, 5
    ctx->pc = 0x1eab48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
label_1eab4c:
    // 0x1eab4c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1eab4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1eab50:
    // 0x1eab50: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1eab50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1eab54:
    // 0x1eab54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1eab54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1eab58:
    // 0x1eab58: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1eab58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1eab5c:
    // 0x1eab5c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1eab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1eab60:
    // 0x1eab60: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1eab60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1eab64:
    // 0x1eab64: 0x5440ffd8  bnel        $v0, $zero, . + 4 + (-0x28 << 2)
label_1eab68:
    if (ctx->pc == 0x1EAB68u) {
        ctx->pc = 0x1EAB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB64u;
        // 0x1eab68: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAB6Cu;
        goto label_1eab6c;
    }
    ctx->pc = 0x1EAB64u;
    {
        const bool branch_taken_0x1eab64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eab64) {
            ctx->pc = 0x1EAB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EAB64u;
            // 0x1eab68: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EAAC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eaac8;
        }
    }
    ctx->pc = 0x1EAB6Cu;
label_1eab6c:
    // 0x1eab6c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1eab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1eab70:
    // 0x1eab70: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x1eab70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1eab74:
    // 0x1eab74: 0x10430023  beq         $v0, $v1, . + 4 + (0x23 << 2)
label_1eab78:
    if (ctx->pc == 0x1EAB78u) {
        ctx->pc = 0x1EAB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB74u;
        // 0x1eab78: 0x38140  sll         $s0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAB7Cu;
        goto label_1eab7c;
    }
    ctx->pc = 0x1EAB74u;
    {
        const bool branch_taken_0x1eab74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EAB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB74u;
        // 0x1eab78: 0x38140  sll         $s0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eab74) {
            ctx->pc = 0x1EAC04u;
            goto label_1eac04;
        }
    }
    ctx->pc = 0x1EAB7Cu;
label_1eab7c:
    // 0x1eab7c: 0xc0932d4  jal         func_24CB50
label_1eab80:
    if (ctx->pc == 0x1EAB80u) {
        ctx->pc = 0x1EAB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB7Cu;
        // 0x1eab80: 0x8e330030  lw          $s3, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAB84u;
        goto label_1eab84;
    }
    ctx->pc = 0x1EAB7Cu;
    SET_GPR_U32(ctx, 31, 0x1EAB84u);
    ctx->pc = 0x1EAB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAB7Cu;
    // 0x1eab80: 0x8e330030  lw          $s3, 0x30($s1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EAB7Cu, 0x1EAB84u)) {
        return;
    }
    ctx->pc = 0x1EAB84u;
label_1eab84:
    // 0x1eab84: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1eab84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eab88:
    // 0x1eab88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1eab88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1eab8c:
    // 0x1eab8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eab8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eab90:
    // 0x1eab90: 0x40f809  jalr        $v0
label_1eab94:
    if (ctx->pc == 0x1EAB94u) {
        ctx->pc = 0x1EAB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB90u;
        // 0x1eab94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAB98u;
        goto label_1eab98;
    }
    ctx->pc = 0x1EAB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EAB98u);
        ctx->pc = 0x1EAB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB90u;
        // 0x1eab94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAB90u, 0x1EAB98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EAB98u;
label_1eab98:
    // 0x1eab98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1eab98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eab9c:
    // 0x1eab9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1eab9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eaba0:
    // 0x1eaba0: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x1eaba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_1eaba4:
    // 0x1eaba4: 0xc075fdc  jal         func_1D7F70
label_1eaba8:
    if (ctx->pc == 0x1EABA8u) {
        ctx->pc = 0x1EABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EABA4u;
        // 0x1eaba8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EABACu;
        goto label_1eabac;
    }
    ctx->pc = 0x1EABA4u;
    SET_GPR_U32(ctx, 31, 0x1EABACu);
    ctx->pc = 0x1EABA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EABA4u;
    // 0x1eaba8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x1EABA4u, 0x1EABACu)) {
        return;
    }
    ctx->pc = 0x1EABACu;
label_1eabac:
    // 0x1eabac: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x1eabacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1eabb0:
    // 0x1eabb0: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
label_1eabb4:
    if (ctx->pc == 0x1EABB4u) {
        ctx->pc = 0x1EABB8u;
        goto label_1eabb8;
    }
    ctx->pc = 0x1EABB0u;
    {
        const bool branch_taken_0x1eabb0 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x1eabb0) {
            ctx->pc = 0x1EABF0u;
            goto label_1eabf0;
        }
    }
    ctx->pc = 0x1EABB8u;
label_1eabb8:
    // 0x1eabb8: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x1eabb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1eabbc:
    // 0x1eabbc: 0x0  nop
    ctx->pc = 0x1eabbcu;
    // NOP
label_1eabc0:
    // 0x1eabc0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1eabc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1eabc4:
    // 0x1eabc4: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x1eabc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1eabc8:
    // 0x1eabc8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1eabc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1eabcc:
    // 0x1eabcc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1eabccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1eabd0:
    // 0x1eabd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1eabd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1eabd4:
    // 0x1eabd4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1eabd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1eabd8:
    // 0x1eabd8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1eabd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1eabdc:
    // 0x1eabdc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1eabdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1eabe0:
    // 0x1eabe0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1eabe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1eabe4:
    // 0x1eabe4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1eabe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1eabe8:
    // 0x1eabe8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
label_1eabec:
    if (ctx->pc == 0x1EABECu) {
        ctx->pc = 0x1EABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EABE8u;
        // 0x1eabec: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EABF0u;
        goto label_1eabf0;
    }
    ctx->pc = 0x1EABE8u;
    {
        const bool branch_taken_0x1eabe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eabe8) {
            ctx->pc = 0x1EABECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EABE8u;
            // 0x1eabec: 0x8e250034  lw          $a1, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EABC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eabc0;
        }
    }
    ctx->pc = 0x1EABF0u;
label_1eabf0:
    // 0x1eabf0: 0xc0932d4  jal         func_24CB50
label_1eabf4:
    if (ctx->pc == 0x1EABF4u) {
        ctx->pc = 0x1EABF8u;
        goto label_1eabf8;
    }
    ctx->pc = 0x1EABF0u;
    SET_GPR_U32(ctx, 31, 0x1EABF8u);
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EABF0u, 0x1EABF8u)) {
        return;
    }
    ctx->pc = 0x1EABF8u;
label_1eabf8:
    // 0x1eabf8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1eabf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1eabfc:
    // 0x1eabfc: 0x60f809  jalr        $v1
label_1eac00:
    if (ctx->pc == 0x1EAC00u) {
        ctx->pc = 0x1EAC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EABFCu;
        // 0x1eac00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAC04u;
        goto label_1eac04;
    }
    ctx->pc = 0x1EABFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EAC04u);
        ctx->pc = 0x1EAC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EABFCu;
        // 0x1eac00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EABFCu, 0x1EAC04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EAC04u;
label_1eac04:
    // 0x1eac04: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x1eac04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1eac08:
    // 0x1eac08: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x1eac08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1eac0c:
    // 0x1eac0c: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x1eac0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1eac10:
    // 0x1eac10: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x1eac10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1eac14:
    // 0x1eac14: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1eac14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1eac18:
    // 0x1eac18: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x1eac18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1eac1c:
    // 0x1eac1c: 0x3e00008  jr          $ra
label_1eac20:
    if (ctx->pc == 0x1EAC20u) {
        ctx->pc = 0x1EAC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC1Cu;
        // 0x1eac20: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAC24u;
        goto label_1eac24;
    }
    ctx->pc = 0x1EAC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC1Cu;
        // 0x1eac20: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAC24u;
label_1eac24:
    // 0x1eac24: 0x0  nop
    ctx->pc = 0x1eac24u;
    // NOP
    ctx->pc = 0x1eac28u;
}
