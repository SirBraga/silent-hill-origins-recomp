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

// Function: sub_0014E4B0
// Address: 0x14e4b0 - 0x14eda0
void sub_0014E4B0_0x14e4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E4B0_0x14e4b0");
#endif

    switch (ctx->pc) {
        case 0x14e4b0u: goto label_14e4b0;
        case 0x14e4b4u: goto label_14e4b4;
        case 0x14e4b8u: goto label_14e4b8;
        case 0x14e4bcu: goto label_14e4bc;
        case 0x14e4c0u: goto label_14e4c0;
        case 0x14e4c4u: goto label_14e4c4;
        case 0x14e4c8u: goto label_14e4c8;
        case 0x14e4ccu: goto label_14e4cc;
        case 0x14e4d0u: goto label_14e4d0;
        case 0x14e4d4u: goto label_14e4d4;
        case 0x14e4d8u: goto label_14e4d8;
        case 0x14e4dcu: goto label_14e4dc;
        case 0x14e4e0u: goto label_14e4e0;
        case 0x14e4e4u: goto label_14e4e4;
        case 0x14e4e8u: goto label_14e4e8;
        case 0x14e4ecu: goto label_14e4ec;
        case 0x14e4f0u: goto label_14e4f0;
        case 0x14e4f4u: goto label_14e4f4;
        case 0x14e4f8u: goto label_14e4f8;
        case 0x14e4fcu: goto label_14e4fc;
        case 0x14e500u: goto label_14e500;
        case 0x14e504u: goto label_14e504;
        case 0x14e508u: goto label_14e508;
        case 0x14e50cu: goto label_14e50c;
        case 0x14e510u: goto label_14e510;
        case 0x14e514u: goto label_14e514;
        case 0x14e518u: goto label_14e518;
        case 0x14e51cu: goto label_14e51c;
        case 0x14e520u: goto label_14e520;
        case 0x14e524u: goto label_14e524;
        case 0x14e528u: goto label_14e528;
        case 0x14e52cu: goto label_14e52c;
        case 0x14e530u: goto label_14e530;
        case 0x14e534u: goto label_14e534;
        case 0x14e538u: goto label_14e538;
        case 0x14e53cu: goto label_14e53c;
        case 0x14e540u: goto label_14e540;
        case 0x14e544u: goto label_14e544;
        case 0x14e548u: goto label_14e548;
        case 0x14e54cu: goto label_14e54c;
        case 0x14e550u: goto label_14e550;
        case 0x14e554u: goto label_14e554;
        case 0x14e558u: goto label_14e558;
        case 0x14e55cu: goto label_14e55c;
        case 0x14e560u: goto label_14e560;
        case 0x14e564u: goto label_14e564;
        case 0x14e568u: goto label_14e568;
        case 0x14e56cu: goto label_14e56c;
        case 0x14e570u: goto label_14e570;
        case 0x14e574u: goto label_14e574;
        case 0x14e578u: goto label_14e578;
        case 0x14e57cu: goto label_14e57c;
        case 0x14e580u: goto label_14e580;
        case 0x14e584u: goto label_14e584;
        case 0x14e588u: goto label_14e588;
        case 0x14e58cu: goto label_14e58c;
        case 0x14e590u: goto label_14e590;
        case 0x14e594u: goto label_14e594;
        case 0x14e598u: goto label_14e598;
        case 0x14e59cu: goto label_14e59c;
        case 0x14e5a0u: goto label_14e5a0;
        case 0x14e5a4u: goto label_14e5a4;
        case 0x14e5a8u: goto label_14e5a8;
        case 0x14e5acu: goto label_14e5ac;
        case 0x14e5b0u: goto label_14e5b0;
        case 0x14e5b4u: goto label_14e5b4;
        case 0x14e5b8u: goto label_14e5b8;
        case 0x14e5bcu: goto label_14e5bc;
        case 0x14e5c0u: goto label_14e5c0;
        case 0x14e5c4u: goto label_14e5c4;
        case 0x14e5c8u: goto label_14e5c8;
        case 0x14e5ccu: goto label_14e5cc;
        case 0x14e5d0u: goto label_14e5d0;
        case 0x14e5d4u: goto label_14e5d4;
        case 0x14e5d8u: goto label_14e5d8;
        case 0x14e5dcu: goto label_14e5dc;
        case 0x14e5e0u: goto label_14e5e0;
        case 0x14e5e4u: goto label_14e5e4;
        case 0x14e5e8u: goto label_14e5e8;
        case 0x14e5ecu: goto label_14e5ec;
        case 0x14e5f0u: goto label_14e5f0;
        case 0x14e5f4u: goto label_14e5f4;
        case 0x14e5f8u: goto label_14e5f8;
        case 0x14e5fcu: goto label_14e5fc;
        case 0x14e600u: goto label_14e600;
        case 0x14e604u: goto label_14e604;
        case 0x14e608u: goto label_14e608;
        case 0x14e60cu: goto label_14e60c;
        case 0x14e610u: goto label_14e610;
        case 0x14e614u: goto label_14e614;
        case 0x14e618u: goto label_14e618;
        case 0x14e61cu: goto label_14e61c;
        case 0x14e620u: goto label_14e620;
        case 0x14e624u: goto label_14e624;
        case 0x14e628u: goto label_14e628;
        case 0x14e62cu: goto label_14e62c;
        case 0x14e630u: goto label_14e630;
        case 0x14e634u: goto label_14e634;
        case 0x14e638u: goto label_14e638;
        case 0x14e63cu: goto label_14e63c;
        case 0x14e640u: goto label_14e640;
        case 0x14e644u: goto label_14e644;
        case 0x14e648u: goto label_14e648;
        case 0x14e64cu: goto label_14e64c;
        case 0x14e650u: goto label_14e650;
        case 0x14e654u: goto label_14e654;
        case 0x14e658u: goto label_14e658;
        case 0x14e65cu: goto label_14e65c;
        case 0x14e660u: goto label_14e660;
        case 0x14e664u: goto label_14e664;
        case 0x14e668u: goto label_14e668;
        case 0x14e66cu: goto label_14e66c;
        case 0x14e670u: goto label_14e670;
        case 0x14e674u: goto label_14e674;
        case 0x14e678u: goto label_14e678;
        case 0x14e67cu: goto label_14e67c;
        case 0x14e680u: goto label_14e680;
        case 0x14e684u: goto label_14e684;
        case 0x14e688u: goto label_14e688;
        case 0x14e68cu: goto label_14e68c;
        case 0x14e690u: goto label_14e690;
        case 0x14e694u: goto label_14e694;
        case 0x14e698u: goto label_14e698;
        case 0x14e69cu: goto label_14e69c;
        case 0x14e6a0u: goto label_14e6a0;
        case 0x14e6a4u: goto label_14e6a4;
        case 0x14e6a8u: goto label_14e6a8;
        case 0x14e6acu: goto label_14e6ac;
        case 0x14e6b0u: goto label_14e6b0;
        case 0x14e6b4u: goto label_14e6b4;
        case 0x14e6b8u: goto label_14e6b8;
        case 0x14e6bcu: goto label_14e6bc;
        case 0x14e6c0u: goto label_14e6c0;
        case 0x14e6c4u: goto label_14e6c4;
        case 0x14e6c8u: goto label_14e6c8;
        case 0x14e6ccu: goto label_14e6cc;
        case 0x14e6d0u: goto label_14e6d0;
        case 0x14e6d4u: goto label_14e6d4;
        case 0x14e6d8u: goto label_14e6d8;
        case 0x14e6dcu: goto label_14e6dc;
        case 0x14e6e0u: goto label_14e6e0;
        case 0x14e6e4u: goto label_14e6e4;
        case 0x14e6e8u: goto label_14e6e8;
        case 0x14e6ecu: goto label_14e6ec;
        case 0x14e6f0u: goto label_14e6f0;
        case 0x14e6f4u: goto label_14e6f4;
        case 0x14e6f8u: goto label_14e6f8;
        case 0x14e6fcu: goto label_14e6fc;
        case 0x14e700u: goto label_14e700;
        case 0x14e704u: goto label_14e704;
        case 0x14e708u: goto label_14e708;
        case 0x14e70cu: goto label_14e70c;
        case 0x14e710u: goto label_14e710;
        case 0x14e714u: goto label_14e714;
        case 0x14e718u: goto label_14e718;
        case 0x14e71cu: goto label_14e71c;
        case 0x14e720u: goto label_14e720;
        case 0x14e724u: goto label_14e724;
        case 0x14e728u: goto label_14e728;
        case 0x14e72cu: goto label_14e72c;
        case 0x14e730u: goto label_14e730;
        case 0x14e734u: goto label_14e734;
        case 0x14e738u: goto label_14e738;
        case 0x14e73cu: goto label_14e73c;
        case 0x14e740u: goto label_14e740;
        case 0x14e744u: goto label_14e744;
        case 0x14e748u: goto label_14e748;
        case 0x14e74cu: goto label_14e74c;
        case 0x14e750u: goto label_14e750;
        case 0x14e754u: goto label_14e754;
        case 0x14e758u: goto label_14e758;
        case 0x14e75cu: goto label_14e75c;
        case 0x14e760u: goto label_14e760;
        case 0x14e764u: goto label_14e764;
        case 0x14e768u: goto label_14e768;
        case 0x14e76cu: goto label_14e76c;
        case 0x14e770u: goto label_14e770;
        case 0x14e774u: goto label_14e774;
        case 0x14e778u: goto label_14e778;
        case 0x14e77cu: goto label_14e77c;
        case 0x14e780u: goto label_14e780;
        case 0x14e784u: goto label_14e784;
        case 0x14e788u: goto label_14e788;
        case 0x14e78cu: goto label_14e78c;
        case 0x14e790u: goto label_14e790;
        case 0x14e794u: goto label_14e794;
        case 0x14e798u: goto label_14e798;
        case 0x14e79cu: goto label_14e79c;
        case 0x14e7a0u: goto label_14e7a0;
        case 0x14e7a4u: goto label_14e7a4;
        case 0x14e7a8u: goto label_14e7a8;
        case 0x14e7acu: goto label_14e7ac;
        case 0x14e7b0u: goto label_14e7b0;
        case 0x14e7b4u: goto label_14e7b4;
        case 0x14e7b8u: goto label_14e7b8;
        case 0x14e7bcu: goto label_14e7bc;
        case 0x14e7c0u: goto label_14e7c0;
        case 0x14e7c4u: goto label_14e7c4;
        case 0x14e7c8u: goto label_14e7c8;
        case 0x14e7ccu: goto label_14e7cc;
        case 0x14e7d0u: goto label_14e7d0;
        case 0x14e7d4u: goto label_14e7d4;
        case 0x14e7d8u: goto label_14e7d8;
        case 0x14e7dcu: goto label_14e7dc;
        case 0x14e7e0u: goto label_14e7e0;
        case 0x14e7e4u: goto label_14e7e4;
        case 0x14e7e8u: goto label_14e7e8;
        case 0x14e7ecu: goto label_14e7ec;
        case 0x14e7f0u: goto label_14e7f0;
        case 0x14e7f4u: goto label_14e7f4;
        case 0x14e7f8u: goto label_14e7f8;
        case 0x14e7fcu: goto label_14e7fc;
        case 0x14e800u: goto label_14e800;
        case 0x14e804u: goto label_14e804;
        case 0x14e808u: goto label_14e808;
        case 0x14e80cu: goto label_14e80c;
        case 0x14e810u: goto label_14e810;
        case 0x14e814u: goto label_14e814;
        case 0x14e818u: goto label_14e818;
        case 0x14e81cu: goto label_14e81c;
        case 0x14e820u: goto label_14e820;
        case 0x14e824u: goto label_14e824;
        case 0x14e828u: goto label_14e828;
        case 0x14e82cu: goto label_14e82c;
        case 0x14e830u: goto label_14e830;
        case 0x14e834u: goto label_14e834;
        case 0x14e838u: goto label_14e838;
        case 0x14e83cu: goto label_14e83c;
        case 0x14e840u: goto label_14e840;
        case 0x14e844u: goto label_14e844;
        case 0x14e848u: goto label_14e848;
        case 0x14e84cu: goto label_14e84c;
        case 0x14e850u: goto label_14e850;
        case 0x14e854u: goto label_14e854;
        case 0x14e858u: goto label_14e858;
        case 0x14e85cu: goto label_14e85c;
        case 0x14e860u: goto label_14e860;
        case 0x14e864u: goto label_14e864;
        case 0x14e868u: goto label_14e868;
        case 0x14e86cu: goto label_14e86c;
        case 0x14e870u: goto label_14e870;
        case 0x14e874u: goto label_14e874;
        case 0x14e878u: goto label_14e878;
        case 0x14e87cu: goto label_14e87c;
        case 0x14e880u: goto label_14e880;
        case 0x14e884u: goto label_14e884;
        case 0x14e888u: goto label_14e888;
        case 0x14e88cu: goto label_14e88c;
        case 0x14e890u: goto label_14e890;
        case 0x14e894u: goto label_14e894;
        case 0x14e898u: goto label_14e898;
        case 0x14e89cu: goto label_14e89c;
        case 0x14e8a0u: goto label_14e8a0;
        case 0x14e8a4u: goto label_14e8a4;
        case 0x14e8a8u: goto label_14e8a8;
        case 0x14e8acu: goto label_14e8ac;
        case 0x14e8b0u: goto label_14e8b0;
        case 0x14e8b4u: goto label_14e8b4;
        case 0x14e8b8u: goto label_14e8b8;
        case 0x14e8bcu: goto label_14e8bc;
        case 0x14e8c0u: goto label_14e8c0;
        case 0x14e8c4u: goto label_14e8c4;
        case 0x14e8c8u: goto label_14e8c8;
        case 0x14e8ccu: goto label_14e8cc;
        case 0x14e8d0u: goto label_14e8d0;
        case 0x14e8d4u: goto label_14e8d4;
        case 0x14e8d8u: goto label_14e8d8;
        case 0x14e8dcu: goto label_14e8dc;
        case 0x14e8e0u: goto label_14e8e0;
        case 0x14e8e4u: goto label_14e8e4;
        case 0x14e8e8u: goto label_14e8e8;
        case 0x14e8ecu: goto label_14e8ec;
        case 0x14e8f0u: goto label_14e8f0;
        case 0x14e8f4u: goto label_14e8f4;
        case 0x14e8f8u: goto label_14e8f8;
        case 0x14e8fcu: goto label_14e8fc;
        case 0x14e900u: goto label_14e900;
        case 0x14e904u: goto label_14e904;
        case 0x14e908u: goto label_14e908;
        case 0x14e90cu: goto label_14e90c;
        case 0x14e910u: goto label_14e910;
        case 0x14e914u: goto label_14e914;
        case 0x14e918u: goto label_14e918;
        case 0x14e91cu: goto label_14e91c;
        case 0x14e920u: goto label_14e920;
        case 0x14e924u: goto label_14e924;
        case 0x14e928u: goto label_14e928;
        case 0x14e92cu: goto label_14e92c;
        case 0x14e930u: goto label_14e930;
        case 0x14e934u: goto label_14e934;
        case 0x14e938u: goto label_14e938;
        case 0x14e93cu: goto label_14e93c;
        case 0x14e940u: goto label_14e940;
        case 0x14e944u: goto label_14e944;
        case 0x14e948u: goto label_14e948;
        case 0x14e94cu: goto label_14e94c;
        case 0x14e950u: goto label_14e950;
        case 0x14e954u: goto label_14e954;
        case 0x14e958u: goto label_14e958;
        case 0x14e95cu: goto label_14e95c;
        case 0x14e960u: goto label_14e960;
        case 0x14e964u: goto label_14e964;
        case 0x14e968u: goto label_14e968;
        case 0x14e96cu: goto label_14e96c;
        case 0x14e970u: goto label_14e970;
        case 0x14e974u: goto label_14e974;
        case 0x14e978u: goto label_14e978;
        case 0x14e97cu: goto label_14e97c;
        case 0x14e980u: goto label_14e980;
        case 0x14e984u: goto label_14e984;
        case 0x14e988u: goto label_14e988;
        case 0x14e98cu: goto label_14e98c;
        case 0x14e990u: goto label_14e990;
        case 0x14e994u: goto label_14e994;
        case 0x14e998u: goto label_14e998;
        case 0x14e99cu: goto label_14e99c;
        case 0x14e9a0u: goto label_14e9a0;
        case 0x14e9a4u: goto label_14e9a4;
        case 0x14e9a8u: goto label_14e9a8;
        case 0x14e9acu: goto label_14e9ac;
        case 0x14e9b0u: goto label_14e9b0;
        case 0x14e9b4u: goto label_14e9b4;
        case 0x14e9b8u: goto label_14e9b8;
        case 0x14e9bcu: goto label_14e9bc;
        case 0x14e9c0u: goto label_14e9c0;
        case 0x14e9c4u: goto label_14e9c4;
        case 0x14e9c8u: goto label_14e9c8;
        case 0x14e9ccu: goto label_14e9cc;
        case 0x14e9d0u: goto label_14e9d0;
        case 0x14e9d4u: goto label_14e9d4;
        case 0x14e9d8u: goto label_14e9d8;
        case 0x14e9dcu: goto label_14e9dc;
        case 0x14e9e0u: goto label_14e9e0;
        case 0x14e9e4u: goto label_14e9e4;
        case 0x14e9e8u: goto label_14e9e8;
        case 0x14e9ecu: goto label_14e9ec;
        case 0x14e9f0u: goto label_14e9f0;
        case 0x14e9f4u: goto label_14e9f4;
        case 0x14e9f8u: goto label_14e9f8;
        case 0x14e9fcu: goto label_14e9fc;
        case 0x14ea00u: goto label_14ea00;
        case 0x14ea04u: goto label_14ea04;
        case 0x14ea08u: goto label_14ea08;
        case 0x14ea0cu: goto label_14ea0c;
        case 0x14ea10u: goto label_14ea10;
        case 0x14ea14u: goto label_14ea14;
        case 0x14ea18u: goto label_14ea18;
        case 0x14ea1cu: goto label_14ea1c;
        case 0x14ea20u: goto label_14ea20;
        case 0x14ea24u: goto label_14ea24;
        case 0x14ea28u: goto label_14ea28;
        case 0x14ea2cu: goto label_14ea2c;
        case 0x14ea30u: goto label_14ea30;
        case 0x14ea34u: goto label_14ea34;
        case 0x14ea38u: goto label_14ea38;
        case 0x14ea3cu: goto label_14ea3c;
        case 0x14ea40u: goto label_14ea40;
        case 0x14ea44u: goto label_14ea44;
        case 0x14ea48u: goto label_14ea48;
        case 0x14ea4cu: goto label_14ea4c;
        case 0x14ea50u: goto label_14ea50;
        case 0x14ea54u: goto label_14ea54;
        case 0x14ea58u: goto label_14ea58;
        case 0x14ea5cu: goto label_14ea5c;
        case 0x14ea60u: goto label_14ea60;
        case 0x14ea64u: goto label_14ea64;
        case 0x14ea68u: goto label_14ea68;
        case 0x14ea6cu: goto label_14ea6c;
        case 0x14ea70u: goto label_14ea70;
        case 0x14ea74u: goto label_14ea74;
        case 0x14ea78u: goto label_14ea78;
        case 0x14ea7cu: goto label_14ea7c;
        case 0x14ea80u: goto label_14ea80;
        case 0x14ea84u: goto label_14ea84;
        case 0x14ea88u: goto label_14ea88;
        case 0x14ea8cu: goto label_14ea8c;
        case 0x14ea90u: goto label_14ea90;
        case 0x14ea94u: goto label_14ea94;
        case 0x14ea98u: goto label_14ea98;
        case 0x14ea9cu: goto label_14ea9c;
        case 0x14eaa0u: goto label_14eaa0;
        case 0x14eaa4u: goto label_14eaa4;
        case 0x14eaa8u: goto label_14eaa8;
        case 0x14eaacu: goto label_14eaac;
        case 0x14eab0u: goto label_14eab0;
        case 0x14eab4u: goto label_14eab4;
        case 0x14eab8u: goto label_14eab8;
        case 0x14eabcu: goto label_14eabc;
        case 0x14eac0u: goto label_14eac0;
        case 0x14eac4u: goto label_14eac4;
        case 0x14eac8u: goto label_14eac8;
        case 0x14eaccu: goto label_14eacc;
        case 0x14ead0u: goto label_14ead0;
        case 0x14ead4u: goto label_14ead4;
        case 0x14ead8u: goto label_14ead8;
        case 0x14eadcu: goto label_14eadc;
        case 0x14eae0u: goto label_14eae0;
        case 0x14eae4u: goto label_14eae4;
        case 0x14eae8u: goto label_14eae8;
        case 0x14eaecu: goto label_14eaec;
        case 0x14eaf0u: goto label_14eaf0;
        case 0x14eaf4u: goto label_14eaf4;
        case 0x14eaf8u: goto label_14eaf8;
        case 0x14eafcu: goto label_14eafc;
        case 0x14eb00u: goto label_14eb00;
        case 0x14eb04u: goto label_14eb04;
        case 0x14eb08u: goto label_14eb08;
        case 0x14eb0cu: goto label_14eb0c;
        case 0x14eb10u: goto label_14eb10;
        case 0x14eb14u: goto label_14eb14;
        case 0x14eb18u: goto label_14eb18;
        case 0x14eb1cu: goto label_14eb1c;
        case 0x14eb20u: goto label_14eb20;
        case 0x14eb24u: goto label_14eb24;
        case 0x14eb28u: goto label_14eb28;
        case 0x14eb2cu: goto label_14eb2c;
        case 0x14eb30u: goto label_14eb30;
        case 0x14eb34u: goto label_14eb34;
        case 0x14eb38u: goto label_14eb38;
        case 0x14eb3cu: goto label_14eb3c;
        case 0x14eb40u: goto label_14eb40;
        case 0x14eb44u: goto label_14eb44;
        case 0x14eb48u: goto label_14eb48;
        case 0x14eb4cu: goto label_14eb4c;
        case 0x14eb50u: goto label_14eb50;
        case 0x14eb54u: goto label_14eb54;
        case 0x14eb58u: goto label_14eb58;
        case 0x14eb5cu: goto label_14eb5c;
        case 0x14eb60u: goto label_14eb60;
        case 0x14eb64u: goto label_14eb64;
        case 0x14eb68u: goto label_14eb68;
        case 0x14eb6cu: goto label_14eb6c;
        case 0x14eb70u: goto label_14eb70;
        case 0x14eb74u: goto label_14eb74;
        case 0x14eb78u: goto label_14eb78;
        case 0x14eb7cu: goto label_14eb7c;
        case 0x14eb80u: goto label_14eb80;
        case 0x14eb84u: goto label_14eb84;
        case 0x14eb88u: goto label_14eb88;
        case 0x14eb8cu: goto label_14eb8c;
        case 0x14eb90u: goto label_14eb90;
        case 0x14eb94u: goto label_14eb94;
        case 0x14eb98u: goto label_14eb98;
        case 0x14eb9cu: goto label_14eb9c;
        case 0x14eba0u: goto label_14eba0;
        case 0x14eba4u: goto label_14eba4;
        case 0x14eba8u: goto label_14eba8;
        case 0x14ebacu: goto label_14ebac;
        case 0x14ebb0u: goto label_14ebb0;
        case 0x14ebb4u: goto label_14ebb4;
        case 0x14ebb8u: goto label_14ebb8;
        case 0x14ebbcu: goto label_14ebbc;
        case 0x14ebc0u: goto label_14ebc0;
        case 0x14ebc4u: goto label_14ebc4;
        case 0x14ebc8u: goto label_14ebc8;
        case 0x14ebccu: goto label_14ebcc;
        case 0x14ebd0u: goto label_14ebd0;
        case 0x14ebd4u: goto label_14ebd4;
        case 0x14ebd8u: goto label_14ebd8;
        case 0x14ebdcu: goto label_14ebdc;
        case 0x14ebe0u: goto label_14ebe0;
        case 0x14ebe4u: goto label_14ebe4;
        case 0x14ebe8u: goto label_14ebe8;
        case 0x14ebecu: goto label_14ebec;
        case 0x14ebf0u: goto label_14ebf0;
        case 0x14ebf4u: goto label_14ebf4;
        case 0x14ebf8u: goto label_14ebf8;
        case 0x14ebfcu: goto label_14ebfc;
        case 0x14ec00u: goto label_14ec00;
        case 0x14ec04u: goto label_14ec04;
        case 0x14ec08u: goto label_14ec08;
        case 0x14ec0cu: goto label_14ec0c;
        case 0x14ec10u: goto label_14ec10;
        case 0x14ec14u: goto label_14ec14;
        case 0x14ec18u: goto label_14ec18;
        case 0x14ec1cu: goto label_14ec1c;
        case 0x14ec20u: goto label_14ec20;
        case 0x14ec24u: goto label_14ec24;
        case 0x14ec28u: goto label_14ec28;
        case 0x14ec2cu: goto label_14ec2c;
        case 0x14ec30u: goto label_14ec30;
        case 0x14ec34u: goto label_14ec34;
        case 0x14ec38u: goto label_14ec38;
        case 0x14ec3cu: goto label_14ec3c;
        case 0x14ec40u: goto label_14ec40;
        case 0x14ec44u: goto label_14ec44;
        case 0x14ec48u: goto label_14ec48;
        case 0x14ec4cu: goto label_14ec4c;
        case 0x14ec50u: goto label_14ec50;
        case 0x14ec54u: goto label_14ec54;
        case 0x14ec58u: goto label_14ec58;
        case 0x14ec5cu: goto label_14ec5c;
        case 0x14ec60u: goto label_14ec60;
        case 0x14ec64u: goto label_14ec64;
        case 0x14ec68u: goto label_14ec68;
        case 0x14ec6cu: goto label_14ec6c;
        case 0x14ec70u: goto label_14ec70;
        case 0x14ec74u: goto label_14ec74;
        case 0x14ec78u: goto label_14ec78;
        case 0x14ec7cu: goto label_14ec7c;
        case 0x14ec80u: goto label_14ec80;
        case 0x14ec84u: goto label_14ec84;
        case 0x14ec88u: goto label_14ec88;
        case 0x14ec8cu: goto label_14ec8c;
        case 0x14ec90u: goto label_14ec90;
        case 0x14ec94u: goto label_14ec94;
        case 0x14ec98u: goto label_14ec98;
        case 0x14ec9cu: goto label_14ec9c;
        case 0x14eca0u: goto label_14eca0;
        case 0x14eca4u: goto label_14eca4;
        case 0x14eca8u: goto label_14eca8;
        case 0x14ecacu: goto label_14ecac;
        case 0x14ecb0u: goto label_14ecb0;
        case 0x14ecb4u: goto label_14ecb4;
        case 0x14ecb8u: goto label_14ecb8;
        case 0x14ecbcu: goto label_14ecbc;
        case 0x14ecc0u: goto label_14ecc0;
        case 0x14ecc4u: goto label_14ecc4;
        case 0x14ecc8u: goto label_14ecc8;
        case 0x14ecccu: goto label_14eccc;
        case 0x14ecd0u: goto label_14ecd0;
        case 0x14ecd4u: goto label_14ecd4;
        case 0x14ecd8u: goto label_14ecd8;
        case 0x14ecdcu: goto label_14ecdc;
        case 0x14ece0u: goto label_14ece0;
        case 0x14ece4u: goto label_14ece4;
        case 0x14ece8u: goto label_14ece8;
        case 0x14ececu: goto label_14ecec;
        case 0x14ecf0u: goto label_14ecf0;
        case 0x14ecf4u: goto label_14ecf4;
        case 0x14ecf8u: goto label_14ecf8;
        case 0x14ecfcu: goto label_14ecfc;
        case 0x14ed00u: goto label_14ed00;
        case 0x14ed04u: goto label_14ed04;
        case 0x14ed08u: goto label_14ed08;
        case 0x14ed0cu: goto label_14ed0c;
        case 0x14ed10u: goto label_14ed10;
        case 0x14ed14u: goto label_14ed14;
        case 0x14ed18u: goto label_14ed18;
        case 0x14ed1cu: goto label_14ed1c;
        case 0x14ed20u: goto label_14ed20;
        case 0x14ed24u: goto label_14ed24;
        case 0x14ed28u: goto label_14ed28;
        case 0x14ed2cu: goto label_14ed2c;
        case 0x14ed30u: goto label_14ed30;
        case 0x14ed34u: goto label_14ed34;
        case 0x14ed38u: goto label_14ed38;
        case 0x14ed3cu: goto label_14ed3c;
        case 0x14ed40u: goto label_14ed40;
        case 0x14ed44u: goto label_14ed44;
        case 0x14ed48u: goto label_14ed48;
        case 0x14ed4cu: goto label_14ed4c;
        case 0x14ed50u: goto label_14ed50;
        case 0x14ed54u: goto label_14ed54;
        case 0x14ed58u: goto label_14ed58;
        case 0x14ed5cu: goto label_14ed5c;
        case 0x14ed60u: goto label_14ed60;
        case 0x14ed64u: goto label_14ed64;
        case 0x14ed68u: goto label_14ed68;
        case 0x14ed6cu: goto label_14ed6c;
        case 0x14ed70u: goto label_14ed70;
        case 0x14ed74u: goto label_14ed74;
        case 0x14ed78u: goto label_14ed78;
        case 0x14ed7cu: goto label_14ed7c;
        case 0x14ed80u: goto label_14ed80;
        case 0x14ed84u: goto label_14ed84;
        case 0x14ed88u: goto label_14ed88;
        case 0x14ed8cu: goto label_14ed8c;
        case 0x14ed90u: goto label_14ed90;
        case 0x14ed94u: goto label_14ed94;
        case 0x14ed98u: goto label_14ed98;
        case 0x14ed9cu: goto label_14ed9c;
        default: break;
    }

    ctx->pc = 0x14e4b0u;

label_14e4b0:
    // 0x14e4b0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x14e4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_14e4b4:
    // 0x14e4b4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x14e4b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_14e4b8:
    // 0x14e4b8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x14e4b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_14e4bc:
    // 0x14e4bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14e4bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14e4c0:
    // 0x14e4c0: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x14e4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
label_14e4c4:
    // 0x14e4c4: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x14e4c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_14e4c8:
    // 0x14e4c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14e4c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14e4cc:
    // 0x14e4cc: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x14e4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
label_14e4d0:
    // 0x14e4d0: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x14e4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
label_14e4d4:
    // 0x14e4d4: 0x7fb30160  sq          $s3, 0x160($sp)
    ctx->pc = 0x14e4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 19));
label_14e4d8:
    // 0x14e4d8: 0x7fb40150  sq          $s4, 0x150($sp)
    ctx->pc = 0x14e4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 20));
label_14e4dc:
    // 0x14e4dc: 0x7fb50140  sq          $s5, 0x140($sp)
    ctx->pc = 0x14e4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 21));
label_14e4e0:
    // 0x14e4e0: 0x7fb60130  sq          $s6, 0x130($sp)
    ctx->pc = 0x14e4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 22));
label_14e4e4:
    // 0x14e4e4: 0x7fb70120  sq          $s7, 0x120($sp)
    ctx->pc = 0x14e4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 23));
label_14e4e8:
    // 0x14e4e8: 0x7fbe0110  sq          $fp, 0x110($sp)
    ctx->pc = 0x14e4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 30));
label_14e4ec:
    // 0x14e4ec: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x14e4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_14e4f0:
    // 0x14e4f0: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x14e4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14e4f4:
    // 0x14e4f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x14e4f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14e4f8:
    // 0x14e4f8: 0x0  nop
    ctx->pc = 0x14e4f8u;
    // NOP
label_14e4fc:
    // 0x14e4fc: 0x4500021a  bc1f        . + 4 + (0x21A << 2)
label_14e500:
    if (ctx->pc == 0x14E500u) {
        ctx->pc = 0x14E500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4FCu;
        // 0x14e500: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E504u;
        goto label_14e504;
    }
    ctx->pc = 0x14E4FCu;
    {
        const bool branch_taken_0x14e4fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14E500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4FCu;
        // 0x14e500: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e4fc) {
            ctx->pc = 0x14ED68u;
            goto label_14ed68;
        }
    }
    ctx->pc = 0x14E504u;
label_14e504:
    // 0x14e504: 0xc6200130  lwc1        $f0, 0x130($s1)
    ctx->pc = 0x14e504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14e508:
    // 0x14e508: 0xc6210094  lwc1        $f1, 0x94($s1)
    ctx->pc = 0x14e508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14e50c:
    // 0x14e50c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x14e50cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_14e510:
    // 0x14e510: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x14e510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_14e514:
    // 0x14e514: 0x6a230083  ldl         $v1, 0x83($s1)
    ctx->pc = 0x14e514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_14e518:
    // 0x14e518: 0x6e23007c  ldr         $v1, 0x7C($s1)
    ctx->pc = 0x14e518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_14e51c:
    // 0x14e51c: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x14e51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_14e520:
    // 0x14e520: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x14e520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_14e524:
    // 0x14e524: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x14e524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_14e528:
    // 0x14e528: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x14e528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_14e52c:
    // 0x14e52c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x14e52cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_14e530:
    // 0x14e530: 0x104000d6  beqz        $v0, . + 4 + (0xD6 << 2)
label_14e534:
    if (ctx->pc == 0x14E534u) {
        ctx->pc = 0x14E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E530u;
        // 0x14e534: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E538u;
        goto label_14e538;
    }
    ctx->pc = 0x14E530u;
    {
        const bool branch_taken_0x14e530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E530u;
        // 0x14e534: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e530) {
            ctx->pc = 0x14E88Cu;
            goto label_14e88c;
        }
    }
    ctx->pc = 0x14E538u;
label_14e538:
    // 0x14e538: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x14e538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_14e53c:
    // 0x14e53c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14e53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e540:
    // 0x14e540: 0xc0c493d  jal         func_3124F4
label_14e544:
    if (ctx->pc == 0x14E544u) {
        ctx->pc = 0x14E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E540u;
        // 0x14e544: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E548u;
        goto label_14e548;
    }
    ctx->pc = 0x14E540u;
    SET_GPR_U32(ctx, 31, 0x14E548u);
    ctx->pc = 0x14E544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E540u;
    // 0x14e544: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x14E540u, 0x14E548u)) {
        return;
    }
    ctx->pc = 0x14E548u;
label_14e548:
    // 0x14e548: 0xc0691d8  jal         func_1A4760
label_14e54c:
    if (ctx->pc == 0x14E54Cu) {
        ctx->pc = 0x14E550u;
        goto label_14e550;
    }
    ctx->pc = 0x14E548u;
    SET_GPR_U32(ctx, 31, 0x14E550u);
    ctx->pc = 0x1A4760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A4760u, 0x14E548u, 0x14E550u)) {
        return;
    }
    ctx->pc = 0x14E550u;
label_14e550:
    // 0x14e550: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_14e554:
    if (ctx->pc == 0x14E554u) {
        ctx->pc = 0x14E554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E550u;
        // 0x14e554: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E558u;
        goto label_14e558;
    }
    ctx->pc = 0x14E550u;
    {
        const bool branch_taken_0x14e550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E550u;
        // 0x14e554: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e550) {
            ctx->pc = 0x14E5ECu;
            goto label_14e5ec;
        }
    }
    ctx->pc = 0x14E558u;
label_14e558:
    // 0x14e558: 0xc0691ec  jal         func_1A47B0
label_14e55c:
    if (ctx->pc == 0x14E55Cu) {
        ctx->pc = 0x14E560u;
        goto label_14e560;
    }
    ctx->pc = 0x14E558u;
    SET_GPR_U32(ctx, 31, 0x14E560u);
    ctx->pc = 0x1A47B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A47B0u, 0x14E558u, 0x14E560u)) {
        return;
    }
    ctx->pc = 0x14E560u;
label_14e560:
    // 0x14e560: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x14e560u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14e564:
    // 0x14e564: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14e564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e568:
    // 0x14e568: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x14e568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_14e56c:
    // 0x14e56c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_14e570:
    if (ctx->pc == 0x14E570u) {
        ctx->pc = 0x14E570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E56Cu;
        // 0x14e570: 0xafa20064  sw          $v0, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E574u;
        goto label_14e574;
    }
    ctx->pc = 0x14E56Cu;
    {
        const bool branch_taken_0x14e56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E56Cu;
        // 0x14e570: 0xafa20064  sw          $v0, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e56c) {
            ctx->pc = 0x14E5A0u;
            goto label_14e5a0;
        }
    }
    ctx->pc = 0x14E574u;
label_14e574:
    // 0x14e574: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x14e574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_14e578:
    // 0x14e578: 0x27a30068  addiu       $v1, $sp, 0x68
    ctx->pc = 0x14e578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_14e57c:
    // 0x14e57c: 0x0  nop
    ctx->pc = 0x14e57cu;
    // NOP
label_14e580:
    // 0x14e580: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14e580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14e584:
    // 0x14e584: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14e584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_14e588:
    // 0x14e588: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x14e588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_14e58c:
    // 0x14e58c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x14e58cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_14e590:
    // 0x14e590: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x14e590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_14e594:
    // 0x14e594: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x14e594u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_14e598:
    // 0x14e598: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_14e59c:
    if (ctx->pc == 0x14E59Cu) {
        ctx->pc = 0x14E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E598u;
        // 0x14e59c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E5A0u;
        goto label_14e5a0;
    }
    ctx->pc = 0x14E598u;
    {
        const bool branch_taken_0x14e598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E598u;
        // 0x14e59c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e598) {
            ctx->pc = 0x14E580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e580;
        }
    }
    ctx->pc = 0x14E5A0u;
label_14e5a0:
    // 0x14e5a0: 0xc07600c  jal         func_1D8030
label_14e5a4:
    if (ctx->pc == 0x14E5A4u) {
        ctx->pc = 0x14E5A8u;
        goto label_14e5a8;
    }
    ctx->pc = 0x14E5A0u;
    SET_GPR_U32(ctx, 31, 0x14E5A8u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x14E5A0u, 0x14E5A8u)) {
        return;
    }
    ctx->pc = 0x14E5A8u;
label_14e5a8:
    // 0x14e5a8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_14e5ac:
    if (ctx->pc == 0x14E5ACu) {
        ctx->pc = 0x14E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5A8u;
        // 0x14e5ac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E5B0u;
        goto label_14e5b0;
    }
    ctx->pc = 0x14E5A8u;
    {
        const bool branch_taken_0x14e5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5A8u;
        // 0x14e5ac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e5a8) {
            ctx->pc = 0x14E5B4u;
            goto label_14e5b4;
        }
    }
    ctx->pc = 0x14E5B0u;
label_14e5b0:
    // 0x14e5b0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x14e5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_14e5b4:
    // 0x14e5b4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_14e5b8:
    if (ctx->pc == 0x14E5B8u) {
        ctx->pc = 0x14E5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5B4u;
        // 0x14e5b8: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E5BCu;
        goto label_14e5bc;
    }
    ctx->pc = 0x14E5B4u;
    {
        const bool branch_taken_0x14e5b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5B4u;
        // 0x14e5b8: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e5b4) {
            ctx->pc = 0x14E5ECu;
            goto label_14e5ec;
        }
    }
    ctx->pc = 0x14E5BCu;
label_14e5bc:
    // 0x14e5bc: 0xc07600c  jal         func_1D8030
label_14e5c0:
    if (ctx->pc == 0x14E5C0u) {
        ctx->pc = 0x14E5C4u;
        goto label_14e5c4;
    }
    ctx->pc = 0x14E5BCu;
    SET_GPR_U32(ctx, 31, 0x14E5C4u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x14E5BCu, 0x14E5C4u)) {
        return;
    }
    ctx->pc = 0x14E5C4u;
label_14e5c4:
    // 0x14e5c4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_14e5c8:
    if (ctx->pc == 0x14E5C8u) {
        ctx->pc = 0x14E5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5C4u;
        // 0x14e5c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E5CCu;
        goto label_14e5cc;
    }
    ctx->pc = 0x14E5C4u;
    {
        const bool branch_taken_0x14e5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5C4u;
        // 0x14e5c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e5c4) {
            ctx->pc = 0x14E5D0u;
            goto label_14e5d0;
        }
    }
    ctx->pc = 0x14E5CCu;
label_14e5cc:
    // 0x14e5cc: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x14e5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_14e5d0:
    // 0x14e5d0: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x14e5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_14e5d4:
    // 0x14e5d4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14e5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14e5d8:
    // 0x14e5d8: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x14e5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_14e5dc:
    // 0x14e5dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14e5e0:
    // 0x14e5e0: 0xac850068  sw          $a1, 0x68($a0)
    ctx->pc = 0x14e5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 5));
label_14e5e4:
    // 0x14e5e4: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x14e5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_14e5e8:
    // 0x14e5e8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x14e5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_14e5ec:
    // 0x14e5ec: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x14e5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_14e5f0:
    // 0x14e5f0: 0x106201be  beq         $v1, $v0, . + 4 + (0x1BE << 2)
label_14e5f4:
    if (ctx->pc == 0x14E5F4u) {
        ctx->pc = 0x14E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5F0u;
        // 0x14e5f4: 0x8e2200e8  lw          $v0, 0xE8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E5F8u;
        goto label_14e5f8;
    }
    ctx->pc = 0x14E5F0u;
    {
        const bool branch_taken_0x14e5f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5F0u;
        // 0x14e5f4: 0x8e2200e8  lw          $v0, 0xE8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e5f0) {
            ctx->pc = 0x14ECECu;
            goto label_14ecec;
        }
    }
    ctx->pc = 0x14E5F8u;
label_14e5f8:
    // 0x14e5f8: 0x544001bf  bnel        $v0, $zero, . + 4 + (0x1BF << 2)
label_14e5fc:
    if (ctx->pc == 0x14E5FCu) {
        ctx->pc = 0x14E5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5F8u;
        // 0x14e5fc: 0xc62100ec  lwc1        $f1, 0xEC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E600u;
        goto label_14e600;
    }
    ctx->pc = 0x14E5F8u;
    {
        const bool branch_taken_0x14e5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e5f8) {
            ctx->pc = 0x14E5FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E5F8u;
            // 0x14e5fc: 0xc62100ec  lwc1        $f1, 0xEC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x14ECF8u;
            goto label_14ecf8;
        }
    }
    ctx->pc = 0x14E600u;
label_14e600:
    // 0x14e600: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x14e600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_14e604:
    // 0x14e604: 0x27b20068  addiu       $s2, $sp, 0x68
    ctx->pc = 0x14e604u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_14e608:
    // 0x14e608: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x14e608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_14e60c:
    // 0x14e60c: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x14e60cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14e610:
    // 0x14e610: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14e610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14e614:
    // 0x14e614: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14e614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e618:
    // 0x14e618: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x14e618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_14e61c:
    // 0x14e61c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x14e61cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14e620:
    // 0x14e620: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x14e620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_14e624:
    // 0x14e624: 0x844400d8  lh          $a0, 0xD8($v0)
    ctx->pc = 0x14e624u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 216)));
label_14e628:
    // 0x14e628: 0x8c4300dc  lw          $v1, 0xDC($v0)
    ctx->pc = 0x14e628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_14e62c:
    // 0x14e62c: 0x60f809  jalr        $v1
label_14e630:
    if (ctx->pc == 0x14E630u) {
        ctx->pc = 0x14E630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E62Cu;
        // 0x14e630: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E634u;
        goto label_14e634;
    }
    ctx->pc = 0x14E62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14E634u);
        ctx->pc = 0x14E630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E62Cu;
        // 0x14e630: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E62Cu, 0x14E634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14E634u;
label_14e634:
    // 0x14e634: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x14e634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_14e638:
    // 0x14e638: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14e638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14e63c:
    // 0x14e63c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x14e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_14e640:
    // 0x14e640: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14e640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14e644:
    // 0x14e644: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x14e644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_14e648:
    // 0x14e648: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x14e648u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_14e64c:
    // 0x14e64c: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x14e64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_14e650:
    // 0x14e650: 0x40f809  jalr        $v0
label_14e654:
    if (ctx->pc == 0x14E654u) {
        ctx->pc = 0x14E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E650u;
        // 0x14e654: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E658u;
        goto label_14e658;
    }
    ctx->pc = 0x14E650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14E658u);
        ctx->pc = 0x14E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E650u;
        // 0x14e654: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E650u, 0x14E658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14E658u;
label_14e658:
    // 0x14e658: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x14e658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_14e65c:
    // 0x14e65c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14e65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e660:
    // 0x14e660: 0xc065c94  jal         func_197250
label_14e664:
    if (ctx->pc == 0x14E664u) {
        ctx->pc = 0x14E664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E660u;
        // 0x14e664: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E668u;
        goto label_14e668;
    }
    ctx->pc = 0x14E660u;
    SET_GPR_U32(ctx, 31, 0x14E668u);
    ctx->pc = 0x14E664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E660u;
    // 0x14e664: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197250u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197250u, 0x14E660u, 0x14E668u)) {
        return;
    }
    ctx->pc = 0x14E668u;
label_14e668:
    // 0x14e668: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
label_14e66c:
    if (ctx->pc == 0x14E66Cu) {
        ctx->pc = 0x14E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E668u;
        // 0x14e66c: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E670u;
        goto label_14e670;
    }
    ctx->pc = 0x14E668u;
    {
        const bool branch_taken_0x14e668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E668u;
        // 0x14e66c: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e668) {
            ctx->pc = 0x14E858u;
            goto label_14e858;
        }
    }
    ctx->pc = 0x14E670u;
label_14e670:
    // 0x14e670: 0xc6200094  lwc1        $f0, 0x94($s1)
    ctx->pc = 0x14e670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14e674:
    // 0x14e674: 0x6a220083  ldl         $v0, 0x83($s1)
    ctx->pc = 0x14e674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_14e678:
    // 0x14e678: 0x6e22007c  ldr         $v0, 0x7C($s1)
    ctx->pc = 0x14e678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_14e67c:
    // 0x14e67c: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x14e67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_14e680:
    // 0x14e680: 0xb3a20097  sdl         $v0, 0x97($sp)
    ctx->pc = 0x14e680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_14e684:
    // 0x14e684: 0xb7a20090  sdr         $v0, 0x90($sp)
    ctx->pc = 0x14e684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_14e688:
    // 0x14e688: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x14e688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
label_14e68c:
    // 0x14e68c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x14e68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_14e690:
    // 0x14e690: 0x6a260127  ldl         $a2, 0x127($s1)
    ctx->pc = 0x14e690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_14e694:
    // 0x14e694: 0x6e260120  ldr         $a2, 0x120($s1)
    ctx->pc = 0x14e694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_14e698:
    // 0x14e698: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x14e698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_14e69c:
    // 0x14e69c: 0xb3a600a7  sdl         $a2, 0xA7($sp)
    ctx->pc = 0x14e69cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_14e6a0:
    // 0x14e6a0: 0xb7a600a0  sdr         $a2, 0xA0($sp)
    ctx->pc = 0x14e6a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_14e6a4:
    // 0x14e6a4: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x14e6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_14e6a8:
    // 0x14e6a8: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x14e6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14e6ac:
    // 0x14e6ac: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x14e6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14e6b0:
    // 0x14e6b0: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x14e6b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_14e6b4:
    // 0x14e6b4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x14e6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14e6b8:
    // 0x14e6b8: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x14e6b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_14e6bc:
    // 0x14e6bc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x14e6bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_14e6c0:
    // 0x14e6c0: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x14e6c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_14e6c4:
    // 0x14e6c4: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x14e6c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_14e6c8:
    // 0x14e6c8: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x14e6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_14e6cc:
    // 0x14e6cc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x14e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_14e6d0:
    // 0x14e6d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14e6d4:
    // 0x14e6d4: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x14e6d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_14e6d8:
    // 0x14e6d8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x14e6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_14e6dc:
    // 0x14e6dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14e6dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e6e0:
    // 0x14e6e0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x14e6e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14e6e4:
    // 0x14e6e4: 0x8ce30034  lw          $v1, 0x34($a3)
    ctx->pc = 0x14e6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
label_14e6e8:
    // 0x14e6e8: 0x846400d8  lh          $a0, 0xD8($v1)
    ctx->pc = 0x14e6e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 216)));
label_14e6ec:
    // 0x14e6ec: 0x8c6600dc  lw          $a2, 0xDC($v1)
    ctx->pc = 0x14e6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
label_14e6f0:
    // 0x14e6f0: 0xc0f809  jalr        $a2
label_14e6f4:
    if (ctx->pc == 0x14E6F4u) {
        ctx->pc = 0x14E6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6F0u;
        // 0x14e6f4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E6F8u;
        goto label_14e6f8;
    }
    ctx->pc = 0x14E6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x14E6F8u);
        ctx->pc = 0x14E6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6F0u;
        // 0x14e6f4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E6F0u, 0x14E6F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14E6F8u;
label_14e6f8:
    // 0x14e6f8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x14e6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_14e6fc:
    // 0x14e6fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14e700:
    // 0x14e700: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x14e700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_14e704:
    // 0x14e704: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14e704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14e708:
    // 0x14e708: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x14e708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_14e70c:
    // 0x14e70c: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x14e70cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_14e710:
    // 0x14e710: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x14e710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_14e714:
    // 0x14e714: 0x40f809  jalr        $v0
label_14e718:
    if (ctx->pc == 0x14E718u) {
        ctx->pc = 0x14E718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E714u;
        // 0x14e718: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E71Cu;
        goto label_14e71c;
    }
    ctx->pc = 0x14E714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14E71Cu);
        ctx->pc = 0x14E718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E714u;
        // 0x14e718: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E714u, 0x14E71Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14E71Cu;
label_14e71c:
    // 0x14e71c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x14e71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_14e720:
    // 0x14e720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e724:
    // 0x14e724: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x14e724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
label_14e728:
    // 0x14e728: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x14e728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_14e72c:
    // 0x14e72c: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x14e72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
label_14e730:
    // 0x14e730: 0xc065bd2  jal         func_196F48
label_14e734:
    if (ctx->pc == 0x14E734u) {
        ctx->pc = 0x14E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E730u;
        // 0x14e734: 0xafa000d0  sw          $zero, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E738u;
        goto label_14e738;
    }
    ctx->pc = 0x14E730u;
    SET_GPR_U32(ctx, 31, 0x14E738u);
    ctx->pc = 0x14E734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E730u;
    // 0x14e734: 0xafa000d0  sw          $zero, 0xD0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196F48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196F48u, 0x14E730u, 0x14E738u)) {
        return;
    }
    ctx->pc = 0x14E738u;
label_14e738:
    // 0x14e738: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
label_14e73c:
    if (ctx->pc == 0x14E73Cu) {
        ctx->pc = 0x14E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E738u;
        // 0x14e73c: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E740u;
        goto label_14e740;
    }
    ctx->pc = 0x14E738u;
    {
        const bool branch_taken_0x14e738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E738u;
        // 0x14e73c: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e738) {
            ctx->pc = 0x14E858u;
            goto label_14e858;
        }
    }
    ctx->pc = 0x14E740u;
label_14e740:
    // 0x14e740: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x14e740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_14e744:
    // 0x14e744: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_14e748:
    if (ctx->pc == 0x14E748u) {
        ctx->pc = 0x14E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E744u;
        // 0x14e748: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E74Cu;
        goto label_14e74c;
    }
    ctx->pc = 0x14E744u;
    {
        const bool branch_taken_0x14e744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E744u;
        // 0x14e748: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e744) {
            ctx->pc = 0x14E758u;
            goto label_14e758;
        }
    }
    ctx->pc = 0x14E74Cu;
label_14e74c:
    // 0x14e74c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14e750:
    // 0x14e750: 0xae2200e8  sw          $v0, 0xE8($s1)
    ctx->pc = 0x14e750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
label_14e754:
    // 0x14e754: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x14e754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_14e758:
    // 0x14e758: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14e758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e75c:
    // 0x14e75c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14e760:
    // 0x14e760: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x14e760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_14e764:
    // 0x14e764: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14e764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14e768:
    // 0x14e768: 0x24830044  addiu       $v1, $a0, 0x44
    ctx->pc = 0x14e768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
label_14e76c:
    // 0x14e76c: 0x64800b  movn        $s0, $v1, $a0
    ctx->pc = 0x14e76cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3));
label_14e770:
    // 0x14e770: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x14e770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14e774:
    // 0x14e774: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x14e774u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_14e778:
    // 0x14e778: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_14e77c:
    if (ctx->pc == 0x14E77Cu) {
        ctx->pc = 0x14E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E778u;
        // 0x14e77c: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E780u;
        goto label_14e780;
    }
    ctx->pc = 0x14E778u;
    {
        const bool branch_taken_0x14e778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E778u;
        // 0x14e77c: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e778) {
            ctx->pc = 0x14E7A0u;
            goto label_14e7a0;
        }
    }
    ctx->pc = 0x14E780u;
label_14e780:
    // 0x14e780: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14e780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14e784:
    // 0x14e784: 0x24421ed0  addiu       $v0, $v0, 0x1ED0
    ctx->pc = 0x14e784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7888));
label_14e788:
    // 0x14e788: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14e788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_14e78c:
    // 0x14e78c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14e78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14e790:
    // 0x14e790: 0x800008  jr          $a0
label_14e794:
    if (ctx->pc == 0x14E794u) {
        ctx->pc = 0x14E798u;
        goto label_14e798;
    }
    ctx->pc = 0x14E790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14E798u: goto label_14e798;
            case 0x14E7A0u: goto label_14e7a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E790u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14E798u;
label_14e798:
    // 0x14e798: 0x10000002  b           . + 4 + (0x2 << 2)
label_14e79c:
    if (ctx->pc == 0x14E79Cu) {
        ctx->pc = 0x14E79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E798u;
        // 0x14e79c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E7A0u;
        goto label_14e7a0;
    }
    ctx->pc = 0x14E798u;
    {
        const bool branch_taken_0x14e798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E798u;
        // 0x14e79c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e798) {
            ctx->pc = 0x14E7A4u;
            goto label_14e7a4;
        }
    }
    ctx->pc = 0x14E7A0u;
label_14e7a0:
    // 0x14e7a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14e7a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e7a4:
    // 0x14e7a4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_14e7a8:
    if (ctx->pc == 0x14E7A8u) {
        ctx->pc = 0x14E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7A4u;
        // 0x14e7a8: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E7ACu;
        goto label_14e7ac;
    }
    ctx->pc = 0x14E7A4u;
    {
        const bool branch_taken_0x14e7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7A4u;
        // 0x14e7a8: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e7a4) {
            ctx->pc = 0x14E858u;
            goto label_14e858;
        }
    }
    ctx->pc = 0x14E7ACu;
label_14e7ac:
    // 0x14e7ac: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14e7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14e7b0:
    // 0x14e7b0: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x14e7b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_14e7b4:
    // 0x14e7b4: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x14e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_14e7b8:
    // 0x14e7b8: 0x40f809  jalr        $v0
label_14e7bc:
    if (ctx->pc == 0x14E7BCu) {
        ctx->pc = 0x14E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7B8u;
        // 0x14e7bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E7C0u;
        goto label_14e7c0;
    }
    ctx->pc = 0x14E7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14E7C0u);
        ctx->pc = 0x14E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7B8u;
        // 0x14e7bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E7B8u, 0x14E7C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14E7C0u;
label_14e7c0:
    // 0x14e7c0: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_14e7c4:
    if (ctx->pc == 0x14E7C4u) {
        ctx->pc = 0x14E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7C0u;
        // 0x14e7c4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E7C8u;
        goto label_14e7c8;
    }
    ctx->pc = 0x14E7C0u;
    {
        const bool branch_taken_0x14e7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7C0u;
        // 0x14e7c4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e7c0) {
            ctx->pc = 0x14E854u;
            goto label_14e854;
        }
    }
    ctx->pc = 0x14E7C8u;
label_14e7c8:
    // 0x14e7c8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14e7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14e7cc:
    // 0x14e7cc: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x14e7ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_14e7d0:
    // 0x14e7d0: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x14e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_14e7d4:
    // 0x14e7d4: 0x40f809  jalr        $v0
label_14e7d8:
    if (ctx->pc == 0x14E7D8u) {
        ctx->pc = 0x14E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7D4u;
        // 0x14e7d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E7DCu;
        goto label_14e7dc;
    }
    ctx->pc = 0x14E7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14E7DCu);
        ctx->pc = 0x14E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7D4u;
        // 0x14e7d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E7D4u, 0x14E7DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14E7DCu;
label_14e7dc:
    // 0x14e7dc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_14e7e0:
    if (ctx->pc == 0x14E7E0u) {
        ctx->pc = 0x14E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7DCu;
        // 0x14e7e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E7E4u;
        goto label_14e7e4;
    }
    ctx->pc = 0x14E7DCu;
    {
        const bool branch_taken_0x14e7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e7dc) {
            ctx->pc = 0x14E7E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E7DCu;
            // 0x14e7e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E804u;
            goto label_14e804;
        }
    }
    ctx->pc = 0x14E7E4u;
label_14e7e4:
    // 0x14e7e4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14e7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14e7e8:
    // 0x14e7e8: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x14e7e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_14e7ec:
    // 0x14e7ec: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x14e7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_14e7f0:
    // 0x14e7f0: 0x40f809  jalr        $v0
label_14e7f4:
    if (ctx->pc == 0x14E7F4u) {
        ctx->pc = 0x14E7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7F0u;
        // 0x14e7f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E7F8u;
        goto label_14e7f8;
    }
    ctx->pc = 0x14E7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14E7F8u);
        ctx->pc = 0x14E7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7F0u;
        // 0x14e7f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E7F0u, 0x14E7F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14E7F8u;
label_14e7f8:
    // 0x14e7f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_14e7fc:
    if (ctx->pc == 0x14E7FCu) {
        ctx->pc = 0x14E7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7F8u;
        // 0x14e7fc: 0x27a300f0  addiu       $v1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E800u;
        goto label_14e800;
    }
    ctx->pc = 0x14E7F8u;
    {
        const bool branch_taken_0x14e7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7F8u;
        // 0x14e7fc: 0x27a300f0  addiu       $v1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e7f8) {
            ctx->pc = 0x14E808u;
            goto label_14e808;
        }
    }
    ctx->pc = 0x14E800u;
label_14e800:
    // 0x14e800: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x14e800u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e804:
    // 0x14e804: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x14e804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_14e808:
    // 0x14e808: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x14e808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_14e80c:
    // 0x14e80c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x14e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_14e810:
    // 0x14e810: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x14e810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_14e814:
    // 0x14e814: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_14e818:
    if (ctx->pc == 0x14E818u) {
        ctx->pc = 0x14E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E814u;
        // 0x14e818: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E81Cu;
        goto label_14e81c;
    }
    ctx->pc = 0x14E814u;
    {
        const bool branch_taken_0x14e814 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E814u;
        // 0x14e818: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e814) {
            ctx->pc = 0x14E828u;
            goto label_14e828;
        }
    }
    ctx->pc = 0x14E81Cu;
label_14e81c:
    // 0x14e81c: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x14e81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_14e820:
    // 0x14e820: 0x10000004  b           . + 4 + (0x4 << 2)
label_14e824:
    if (ctx->pc == 0x14E824u) {
        ctx->pc = 0x14E824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E820u;
        // 0x14e824: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E828u;
        goto label_14e828;
    }
    ctx->pc = 0x14E820u;
    {
        const bool branch_taken_0x14e820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E820u;
        // 0x14e824: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e820) {
            ctx->pc = 0x14E834u;
            goto label_14e834;
        }
    }
    ctx->pc = 0x14E828u;
label_14e828:
    // 0x14e828: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x14e828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_14e82c:
    // 0x14e82c: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x14e82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_14e830:
    // 0x14e830: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14e830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_14e834:
    // 0x14e834: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x14e834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
label_14e838:
    // 0x14e838: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x14e838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14e83c:
    // 0x14e83c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14e83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14e840:
    // 0x14e840: 0xc62c0098  lwc1        $f12, 0x98($s1)
    ctx->pc = 0x14e840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14e844:
    // 0x14e844: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x14e844u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_14e848:
    // 0x14e848: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x14e848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_14e84c:
    // 0x14e84c: 0x60f809  jalr        $v1
label_14e850:
    if (ctx->pc == 0x14E850u) {
        ctx->pc = 0x14E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E84Cu;
        // 0x14e850: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E854u;
        goto label_14e854;
    }
    ctx->pc = 0x14E84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14E854u);
        ctx->pc = 0x14E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E84Cu;
        // 0x14e850: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E84Cu, 0x14E854u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14E854u;
label_14e854:
    // 0x14e854: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x14e854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_14e858:
    // 0x14e858: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x14e858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_14e85c:
    // 0x14e85c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x14e85cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_14e860:
    // 0x14e860: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_14e864:
    if (ctx->pc == 0x14E864u) {
        ctx->pc = 0x14E864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E860u;
        // 0x14e864: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E868u;
        goto label_14e868;
    }
    ctx->pc = 0x14E860u;
    {
        const bool branch_taken_0x14e860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E860u;
        // 0x14e864: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e860) {
            ctx->pc = 0x14E86Cu;
            goto label_14e86c;
        }
    }
    ctx->pc = 0x14E868u;
label_14e868:
    // 0x14e868: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x14e868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_14e86c:
    // 0x14e86c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x14e86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_14e870:
    // 0x14e870: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x14e870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_14e874:
    // 0x14e874: 0x1062011d  beq         $v1, $v0, . + 4 + (0x11D << 2)
label_14e878:
    if (ctx->pc == 0x14E878u) {
        ctx->pc = 0x14E878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E874u;
        // 0x14e878: 0x8e2200e8  lw          $v0, 0xE8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E87Cu;
        goto label_14e87c;
    }
    ctx->pc = 0x14E874u;
    {
        const bool branch_taken_0x14e874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14E878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E874u;
        // 0x14e878: 0x8e2200e8  lw          $v0, 0xE8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e874) {
            ctx->pc = 0x14ECECu;
            goto label_14ecec;
        }
    }
    ctx->pc = 0x14E87Cu;
label_14e87c:
    // 0x14e87c: 0x1040ff62  beqz        $v0, . + 4 + (-0x9E << 2)
label_14e880:
    if (ctx->pc == 0x14E880u) {
        ctx->pc = 0x14E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E87Cu;
        // 0x14e880: 0x27b20068  addiu       $s2, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E884u;
        goto label_14e884;
    }
    ctx->pc = 0x14E87Cu;
    {
        const bool branch_taken_0x14e87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E87Cu;
        // 0x14e880: 0x27b20068  addiu       $s2, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e87c) {
            ctx->pc = 0x14E608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e608;
        }
    }
    ctx->pc = 0x14E884u;
label_14e884:
    // 0x14e884: 0x10000119  b           . + 4 + (0x119 << 2)
label_14e888:
    if (ctx->pc == 0x14E888u) {
        ctx->pc = 0x14E88Cu;
        goto label_14e88c;
    }
    ctx->pc = 0x14E884u;
    {
        const bool branch_taken_0x14e884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e884) {
            ctx->pc = 0x14ECECu;
            goto label_14ecec;
        }
    }
    ctx->pc = 0x14E88Cu;
label_14e88c:
    // 0x14e88c: 0xc07600c  jal         func_1D8030
label_14e890:
    if (ctx->pc == 0x14E890u) {
        ctx->pc = 0x14E894u;
        goto label_14e894;
    }
    ctx->pc = 0x14E88Cu;
    SET_GPR_U32(ctx, 31, 0x14E894u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x14E88Cu, 0x14E894u)) {
        return;
    }
    ctx->pc = 0x14E894u;
label_14e894:
    // 0x14e894: 0x8c550014  lw          $s5, 0x14($v0)
    ctx->pc = 0x14e894u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_14e898:
    // 0x14e898: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x14e898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_14e89c:
    // 0x14e89c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14e89cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e8a0:
    // 0x14e8a0: 0xc04f0c2  jal         func_13C308
label_14e8a4:
    if (ctx->pc == 0x14E8A4u) {
        ctx->pc = 0x14E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8A0u;
        // 0x14e8a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E8A8u;
        goto label_14e8a8;
    }
    ctx->pc = 0x14E8A0u;
    SET_GPR_U32(ctx, 31, 0x14E8A8u);
    ctx->pc = 0x14E8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E8A0u;
    // 0x14e8a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x14E8A0u, 0x14E8A8u)) {
        return;
    }
    ctx->pc = 0x14E8A8u;
label_14e8a8:
    // 0x14e8a8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x14e8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14e8ac:
    // 0x14e8ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e8b0:
    // 0x14e8b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14e8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_14e8b4:
    // 0x14e8b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14e8b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14e8b8:
    // 0x14e8b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x14e8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_14e8bc:
    // 0x14e8bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14e8bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14e8c0:
    // 0x14e8c0: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x14e8c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_14e8c4:
    // 0x14e8c4: 0xc065c94  jal         func_197250
label_14e8c8:
    if (ctx->pc == 0x14E8C8u) {
        ctx->pc = 0x14E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8C4u;
        // 0x14e8c8: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E8CCu;
        goto label_14e8cc;
    }
    ctx->pc = 0x14E8C4u;
    SET_GPR_U32(ctx, 31, 0x14E8CCu);
    ctx->pc = 0x14E8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E8C4u;
    // 0x14e8c8: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x197250u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197250u, 0x14E8C4u, 0x14E8CCu)) {
        return;
    }
    ctx->pc = 0x14E8CCu;
label_14e8cc:
    // 0x14e8cc: 0x10400106  beqz        $v0, . + 4 + (0x106 << 2)
label_14e8d0:
    if (ctx->pc == 0x14E8D0u) {
        ctx->pc = 0x14E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8CCu;
        // 0x14e8d0: 0x26a50044  addiu       $a1, $s5, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E8D4u;
        goto label_14e8d4;
    }
    ctx->pc = 0x14E8CCu;
    {
        const bool branch_taken_0x14e8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8CCu;
        // 0x14e8d0: 0x26a50044  addiu       $a1, $s5, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e8cc) {
            ctx->pc = 0x14ECE8u;
            goto label_14ece8;
        }
    }
    ctx->pc = 0x14E8D4u;
label_14e8d4:
    // 0x14e8d4: 0x8ea30048  lw          $v1, 0x48($s5)
    ctx->pc = 0x14e8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_14e8d8:
    // 0x14e8d8: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x14e8d8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_14e8dc:
    // 0x14e8dc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x14e8dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14e8e0:
    // 0x14e8e0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x14e8e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_14e8e4:
    // 0x14e8e4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x14e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_14e8e8:
    // 0x14e8e8: 0x40f809  jalr        $v0
label_14e8ec:
    if (ctx->pc == 0x14E8ECu) {
        ctx->pc = 0x14E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8E8u;
        // 0x14e8ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E8F0u;
        goto label_14e8f0;
    }
    ctx->pc = 0x14E8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14E8F0u);
        ctx->pc = 0x14E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8E8u;
        // 0x14e8ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E8E8u, 0x14E8F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14E8F0u;
label_14e8f0:
    // 0x14e8f0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x14e8f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14e8f4:
    // 0x14e8f4: 0x528000fd  beql        $s4, $zero, . + 4 + (0xFD << 2)
label_14e8f8:
    if (ctx->pc == 0x14E8F8u) {
        ctx->pc = 0x14E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8F4u;
        // 0x14e8f8: 0x8e2200e8  lw          $v0, 0xE8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E8FCu;
        goto label_14e8fc;
    }
    ctx->pc = 0x14E8F4u;
    {
        const bool branch_taken_0x14e8f4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e8f4) {
            ctx->pc = 0x14E8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E8F4u;
            // 0x14e8f8: 0x8e2200e8  lw          $v0, 0xE8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14ECECu;
            goto label_14ecec;
        }
    }
    ctx->pc = 0x14E8FCu;
label_14e8fc:
    // 0x14e8fc: 0x8e970004  lw          $s7, 0x4($s4)
    ctx->pc = 0x14e8fcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_14e900:
    // 0x14e900: 0x1ae000bd  blez        $s7, . + 4 + (0xBD << 2)
label_14e904:
    if (ctx->pc == 0x14E904u) {
        ctx->pc = 0x14E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E900u;
        // 0x14e904: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E908u;
        goto label_14e908;
    }
    ctx->pc = 0x14E900u;
    {
        const bool branch_taken_0x14e900 = (GPR_S64(ctx, 23) <= 0);
        ctx->pc = 0x14E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E900u;
        // 0x14e904: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e900) {
            ctx->pc = 0x14EBF8u;
            goto label_14ebf8;
        }
    }
    ctx->pc = 0x14E908u;
label_14e908:
    // 0x14e908: 0x6400009  bltz        $s2, . + 4 + (0x9 << 2)
label_14e90c:
    if (ctx->pc == 0x14E90Cu) {
        ctx->pc = 0x14E90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E908u;
        // 0x14e90c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E910u;
        goto label_14e910;
    }
    ctx->pc = 0x14E908u;
    {
        const bool branch_taken_0x14e908 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x14E90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E908u;
        // 0x14e90c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e908) {
            ctx->pc = 0x14E930u;
            goto label_14e930;
        }
    }
    ctx->pc = 0x14E910u;
label_14e910:
    // 0x14e910: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x14e910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_14e914:
    // 0x14e914: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x14e914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_14e918:
    // 0x14e918: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_14e91c:
    if (ctx->pc == 0x14E91Cu) {
        ctx->pc = 0x14E91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E918u;
        // 0x14e91c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E920u;
        goto label_14e920;
    }
    ctx->pc = 0x14E918u;
    {
        const bool branch_taken_0x14e918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E918u;
        // 0x14e91c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e918) {
            ctx->pc = 0x14E930u;
            goto label_14e930;
        }
    }
    ctx->pc = 0x14E920u;
label_14e920:
    // 0x14e920: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x14e920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_14e924:
    // 0x14e924: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x14e924u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_14e928:
    // 0x14e928: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14e928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14e92c:
    // 0x14e92c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x14e92cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14e930:
    // 0x14e930: 0x1a6000ab  blez        $s3, . + 4 + (0xAB << 2)
label_14e934:
    if (ctx->pc == 0x14E934u) {
        ctx->pc = 0x14E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E930u;
        // 0x14e934: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E938u;
        goto label_14e938;
    }
    ctx->pc = 0x14E930u;
    {
        const bool branch_taken_0x14e930 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x14E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E930u;
        // 0x14e934: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e930) {
            ctx->pc = 0x14EBE0u;
            goto label_14ebe0;
        }
    }
    ctx->pc = 0x14E938u;
label_14e938:
    // 0x14e938: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14e938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_14e93c:
    // 0x14e93c: 0x0  nop
    ctx->pc = 0x14e93cu;
    // NOP
label_14e940:
    // 0x14e940: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14e940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14e944:
    // 0x14e944: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14e944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e948:
    // 0x14e948: 0xc0414e2  jal         func_105388
label_14e94c:
    if (ctx->pc == 0x14E94Cu) {
        ctx->pc = 0x14E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E948u;
        // 0x14e94c: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E950u;
        goto label_14e950;
    }
    ctx->pc = 0x14E948u;
    SET_GPR_U32(ctx, 31, 0x14E950u);
    ctx->pc = 0x14E94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E948u;
    // 0x14e94c: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x105388u, 0x14E948u, 0x14E950u)) {
        return;
    }
    ctx->pc = 0x14E950u;
label_14e950:
    // 0x14e950: 0x1040009f  beqz        $v0, . + 4 + (0x9F << 2)
label_14e954:
    if (ctx->pc == 0x14E954u) {
        ctx->pc = 0x14E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E950u;
        // 0x14e954: 0xc7a10080  lwc1        $f1, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14E958u;
        goto label_14e958;
    }
    ctx->pc = 0x14E950u;
    {
        const bool branch_taken_0x14e950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E950u;
        // 0x14e954: 0xc7a10080  lwc1        $f1, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e950) {
            ctx->pc = 0x14EBD0u;
            goto label_14ebd0;
        }
    }
    ctx->pc = 0x14E958u;
label_14e958:
    // 0x14e958: 0xc6200094  lwc1        $f0, 0x94($s1)
    ctx->pc = 0x14e958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14e95c:
    // 0x14e95c: 0x6ba50077  ldl         $a1, 0x77($sp)
    ctx->pc = 0x14e95cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_14e960:
    // 0x14e960: 0x6fa50070  ldr         $a1, 0x70($sp)
    ctx->pc = 0x14e960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_14e964:
    // 0x14e964: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x14e964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_14e968:
    // 0x14e968: 0xb3a50097  sdl         $a1, 0x97($sp)
    ctx->pc = 0x14e968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_14e96c:
    // 0x14e96c: 0xb7a50090  sdr         $a1, 0x90($sp)
    ctx->pc = 0x14e96cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_14e970:
    // 0x14e970: 0xafa60098  sw          $a2, 0x98($sp)
    ctx->pc = 0x14e970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 6));
label_14e974:
    // 0x14e974: 0x46000ac0  add.s       $f11, $f1, $f0
    ctx->pc = 0x14e974u;
    ctx->f[11] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_14e978:
    // 0x14e978: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x14e978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14e97c:
    // 0x14e97c: 0xc7a50094  lwc1        $f5, 0x94($sp)
    ctx->pc = 0x14e97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_14e980:
    // 0x14e980: 0xc7a40098  lwc1        $f4, 0x98($sp)
    ctx->pc = 0x14e980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_14e984:
    // 0x14e984: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x14e984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14e988:
    // 0x14e988: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x14e988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14e98c:
    // 0x14e98c: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x14e98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14e990:
    // 0x14e990: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x14e990u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_14e994:
    // 0x14e994: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x14e994u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
label_14e998:
    // 0x14e998: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x14e998u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_14e99c:
    // 0x14e99c: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x14e99cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_14e9a0:
    // 0x14e9a0: 0xe7a50094  swc1        $f5, 0x94($sp)
    ctx->pc = 0x14e9a0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_14e9a4:
    // 0x14e9a4: 0xe7a40098  swc1        $f4, 0x98($sp)
    ctx->pc = 0x14e9a4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_14e9a8:
    // 0x14e9a8: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x14e9a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_14e9ac:
    // 0x14e9ac: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x14e9acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_14e9b0:
    // 0x14e9b0: 0x46042082  mul.s       $f2, $f4, $f4
    ctx->pc = 0x14e9b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_14e9b4:
    // 0x14e9b4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x14e9b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_14e9b8:
    // 0x14e9b8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x14e9b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_14e9bc:
    // 0x14e9bc: 0x0  nop
    ctx->pc = 0x14e9bcu;
    // NOP
label_14e9c0:
    // 0x14e9c0: 0x0  nop
    ctx->pc = 0x14e9c0u;
    // NOP
label_14e9c4:
    // 0x14e9c4: 0x46010284  c1          0x10284
    ctx->pc = 0x14e9c4u;
    ctx->f[10] = FPU_SQRT_S(ctx->f[1]);
label_14e9c8:
    // 0x14e9c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14e9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_14e9cc:
    // 0x14e9cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14e9ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14e9d0:
    // 0x14e9d0: 0x0  nop
    ctx->pc = 0x14e9d0u;
    // NOP
label_14e9d4:
    // 0x14e9d4: 0x460a0003  div.s       $f0, $f0, $f10
    ctx->pc = 0x14e9d4u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[10]);
label_14e9d8:
    // 0x14e9d8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x14e9d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_14e9dc:
    // 0x14e9dc: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x14e9dcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_14e9e0:
    // 0x14e9e0: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x14e9e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_14e9e4:
    // 0x14e9e4: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x14e9e4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_14e9e8:
    // 0x14e9e8: 0xe7a40098  swc1        $f4, 0x98($sp)
    ctx->pc = 0x14e9e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_14e9ec:
    // 0x14e9ec: 0xe7a50094  swc1        $f5, 0x94($sp)
    ctx->pc = 0x14e9ecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_14e9f0:
    // 0x14e9f0: 0x6a240083  ldl         $a0, 0x83($s1)
    ctx->pc = 0x14e9f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_14e9f4:
    // 0x14e9f4: 0x6e24007c  ldr         $a0, 0x7C($s1)
    ctx->pc = 0x14e9f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_14e9f8:
    // 0x14e9f8: 0x8e250084  lw          $a1, 0x84($s1)
    ctx->pc = 0x14e9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_14e9fc:
    // 0x14e9fc: 0xb3a400a7  sdl         $a0, 0xA7($sp)
    ctx->pc = 0x14e9fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_14ea00:
    // 0x14ea00: 0xb7a400a0  sdr         $a0, 0xA0($sp)
    ctx->pc = 0x14ea00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_14ea04:
    // 0x14ea04: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x14ea04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
label_14ea08:
    // 0x14ea08: 0x6ba300a7  ldl         $v1, 0xA7($sp)
    ctx->pc = 0x14ea08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_14ea0c:
    // 0x14ea0c: 0x6fa300a0  ldr         $v1, 0xA0($sp)
    ctx->pc = 0x14ea0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_14ea10:
    // 0x14ea10: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x14ea10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_14ea14:
    // 0x14ea14: 0xb3a300b7  sdl         $v1, 0xB7($sp)
    ctx->pc = 0x14ea14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_14ea18:
    // 0x14ea18: 0xb7a300b0  sdr         $v1, 0xB0($sp)
    ctx->pc = 0x14ea18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_14ea1c:
    // 0x14ea1c: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x14ea1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
label_14ea20:
    // 0x14ea20: 0xc7a300b0  lwc1        $f3, 0xB0($sp)
    ctx->pc = 0x14ea20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14ea24:
    // 0x14ea24: 0xc7a400b4  lwc1        $f4, 0xB4($sp)
    ctx->pc = 0x14ea24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_14ea28:
    // 0x14ea28: 0xc7a500b8  lwc1        $f5, 0xB8($sp)
    ctx->pc = 0x14ea28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_14ea2c:
    // 0x14ea2c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x14ea2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14ea30:
    // 0x14ea30: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x14ea30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14ea34:
    // 0x14ea34: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x14ea34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14ea38:
    // 0x14ea38: 0x46001981  sub.s       $f6, $f3, $f0
    ctx->pc = 0x14ea38u;
    ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_14ea3c:
    // 0x14ea3c: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x14ea3cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_14ea40:
    // 0x14ea40: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x14ea40u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
label_14ea44:
    // 0x14ea44: 0xe7a600b0  swc1        $f6, 0xB0($sp)
    ctx->pc = 0x14ea44u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_14ea48:
    // 0x14ea48: 0xe7a400b4  swc1        $f4, 0xB4($sp)
    ctx->pc = 0x14ea48u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_14ea4c:
    // 0x14ea4c: 0xe7a500b8  swc1        $f5, 0xB8($sp)
    ctx->pc = 0x14ea4cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_14ea50:
    // 0x14ea50: 0xc7a90090  lwc1        $f9, 0x90($sp)
    ctx->pc = 0x14ea50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_14ea54:
    // 0x14ea54: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x14ea54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_14ea58:
    // 0x14ea58: 0xc7a80094  lwc1        $f8, 0x94($sp)
    ctx->pc = 0x14ea58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_14ea5c:
    // 0x14ea5c: 0x46064802  mul.s       $f0, $f9, $f6
    ctx->pc = 0x14ea5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
label_14ea60:
    // 0x14ea60: 0xc7a70098  lwc1        $f7, 0x98($sp)
    ctx->pc = 0x14ea60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_14ea64:
    // 0x14ea64: 0x46044042  mul.s       $f1, $f8, $f4
    ctx->pc = 0x14ea64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
label_14ea68:
    // 0x14ea68: 0x46053882  mul.s       $f2, $f7, $f5
    ctx->pc = 0x14ea68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
label_14ea6c:
    // 0x14ea6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14ea6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14ea70:
    // 0x14ea70: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x14ea70u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_14ea74:
    // 0x14ea74: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x14ea74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14ea78:
    // 0x14ea78: 0x0  nop
    ctx->pc = 0x14ea78u;
    // NOP
label_14ea7c:
    // 0x14ea7c: 0x45020050  bc1fl       . + 4 + (0x50 << 2)
label_14ea80:
    if (ctx->pc == 0x14EA80u) {
        ctx->pc = 0x14EA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA7Cu;
        // 0x14ea80: 0x46063002  mul.s       $f0, $f6, $f6 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EA84u;
        goto label_14ea84;
    }
    ctx->pc = 0x14EA7Cu;
    {
        const bool branch_taken_0x14ea7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14ea7c) {
            ctx->pc = 0x14EA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EA7Cu;
            // 0x14ea80: 0x46063002  mul.s       $f0, $f6, $f6 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EBC0u;
            goto label_14ebc0;
        }
    }
    ctx->pc = 0x14EA84u;
label_14ea84:
    // 0x14ea84: 0x46025034  c.lt.s      $f10, $f2
    ctx->pc = 0x14ea84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14ea88:
    // 0x14ea88: 0x0  nop
    ctx->pc = 0x14ea88u;
    // NOP
label_14ea8c:
    // 0x14ea8c: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
label_14ea90:
    if (ctx->pc == 0x14EA90u) {
        ctx->pc = 0x14EA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA8Cu;
        // 0x14ea90: 0x46023802  mul.s       $f0, $f7, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EA94u;
        goto label_14ea94;
    }
    ctx->pc = 0x14EA8Cu;
    {
        const bool branch_taken_0x14ea8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14ea8c) {
            ctx->pc = 0x14EA90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EA8Cu;
            // 0x14ea90: 0x46023802  mul.s       $f0, $f7, $f2 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EAE0u;
            goto label_14eae0;
        }
    }
    ctx->pc = 0x14EA94u;
label_14ea94:
    // 0x14ea94: 0x6ba200a7  ldl         $v0, 0xA7($sp)
    ctx->pc = 0x14ea94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_14ea98:
    // 0x14ea98: 0x6fa200a0  ldr         $v0, 0xA0($sp)
    ctx->pc = 0x14ea98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_14ea9c:
    // 0x14ea9c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x14ea9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_14eaa0:
    // 0x14eaa0: 0xb3a200c7  sdl         $v0, 0xC7($sp)
    ctx->pc = 0x14eaa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_14eaa4:
    // 0x14eaa4: 0xb7a200c0  sdr         $v0, 0xC0($sp)
    ctx->pc = 0x14eaa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_14eaa8:
    // 0x14eaa8: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x14eaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
label_14eaac:
    // 0x14eaac: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x14eaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14eab0:
    // 0x14eab0: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x14eab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14eab4:
    // 0x14eab4: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x14eab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14eab8:
    // 0x14eab8: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x14eab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14eabc:
    // 0x14eabc: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x14eabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_14eac0:
    // 0x14eac0: 0xc7a50078  lwc1        $f5, 0x78($sp)
    ctx->pc = 0x14eac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_14eac4:
    // 0x14eac4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x14eac4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_14eac8:
    // 0x14eac8: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x14eac8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_14eacc:
    // 0x14eacc: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x14eaccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
label_14ead0:
    // 0x14ead0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x14ead0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_14ead4:
    // 0x14ead4: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x14ead4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_14ead8:
    // 0x14ead8: 0x1000002b  b           . + 4 + (0x2B << 2)
label_14eadc:
    if (ctx->pc == 0x14EADCu) {
        ctx->pc = 0x14EADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EAD8u;
        // 0x14eadc: 0xe7a200c8  swc1        $f2, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EAE0u;
        goto label_14eae0;
    }
    ctx->pc = 0x14EAD8u;
    {
        const bool branch_taken_0x14ead8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EAD8u;
        // 0x14eadc: 0xe7a200c8  swc1        $f2, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ead8) {
            ctx->pc = 0x14EB88u;
            goto label_14eb88;
        }
    }
    ctx->pc = 0x14EAE0u;
label_14eae0:
    // 0x14eae0: 0x46024842  mul.s       $f1, $f9, $f2
    ctx->pc = 0x14eae0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
label_14eae4:
    // 0x14eae4: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x14eae4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
label_14eae8:
    // 0x14eae8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x14eae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_14eaec:
    // 0x14eaec: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x14eaecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_14eaf0:
    // 0x14eaf0: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x14eaf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_14eaf4:
    // 0x14eaf4: 0x6ba60067  ldl         $a2, 0x67($sp)
    ctx->pc = 0x14eaf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_14eaf8:
    // 0x14eaf8: 0x6fa60060  ldr         $a2, 0x60($sp)
    ctx->pc = 0x14eaf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_14eafc:
    // 0x14eafc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14eafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_14eb00:
    // 0x14eb00: 0xb3a600c7  sdl         $a2, 0xC7($sp)
    ctx->pc = 0x14eb00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_14eb04:
    // 0x14eb04: 0xb7a600c0  sdr         $a2, 0xC0($sp)
    ctx->pc = 0x14eb04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_14eb08:
    // 0x14eb08: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x14eb08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_14eb0c:
    // 0x14eb0c: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x14eb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14eb10:
    // 0x14eb10: 0xc7a400c4  lwc1        $f4, 0xC4($sp)
    ctx->pc = 0x14eb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_14eb14:
    // 0x14eb14: 0xc7a500c8  lwc1        $f5, 0xC8($sp)
    ctx->pc = 0x14eb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_14eb18:
    // 0x14eb18: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x14eb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14eb1c:
    // 0x14eb1c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x14eb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14eb20:
    // 0x14eb20: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x14eb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14eb24:
    // 0x14eb24: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x14eb24u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_14eb28:
    // 0x14eb28: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x14eb28u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_14eb2c:
    // 0x14eb2c: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x14eb2cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_14eb30:
    // 0x14eb30: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x14eb30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_14eb34:
    // 0x14eb34: 0xe7a400c4  swc1        $f4, 0xC4($sp)
    ctx->pc = 0x14eb34u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_14eb38:
    // 0x14eb38: 0xe7a500c8  swc1        $f5, 0xC8($sp)
    ctx->pc = 0x14eb38u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_14eb3c:
    // 0x14eb3c: 0x6ba500a7  ldl         $a1, 0xA7($sp)
    ctx->pc = 0x14eb3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_14eb40:
    // 0x14eb40: 0x6fa500a0  ldr         $a1, 0xA0($sp)
    ctx->pc = 0x14eb40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_14eb44:
    // 0x14eb44: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x14eb44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_14eb48:
    // 0x14eb48: 0xb3a500d7  sdl         $a1, 0xD7($sp)
    ctx->pc = 0x14eb48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_14eb4c:
    // 0x14eb4c: 0xb7a500d0  sdr         $a1, 0xD0($sp)
    ctx->pc = 0x14eb4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_14eb50:
    // 0x14eb50: 0xafa600d8  sw          $a2, 0xD8($sp)
    ctx->pc = 0x14eb50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 6));
label_14eb54:
    // 0x14eb54: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x14eb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14eb58:
    // 0x14eb58: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x14eb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14eb5c:
    // 0x14eb5c: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x14eb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14eb60:
    // 0x14eb60: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x14eb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14eb64:
    // 0x14eb64: 0xc7a400c4  lwc1        $f4, 0xC4($sp)
    ctx->pc = 0x14eb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_14eb68:
    // 0x14eb68: 0xc7a500c8  lwc1        $f5, 0xC8($sp)
    ctx->pc = 0x14eb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_14eb6c:
    // 0x14eb6c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x14eb6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_14eb70:
    // 0x14eb70: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x14eb70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_14eb74:
    // 0x14eb74: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x14eb74u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
label_14eb78:
    // 0x14eb78: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x14eb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_14eb7c:
    // 0x14eb7c: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x14eb7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_14eb80:
    // 0x14eb80: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x14eb80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_14eb84:
    // 0x14eb84: 0x0  nop
    ctx->pc = 0x14eb84u;
    // NOP
label_14eb88:
    // 0x14eb88: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x14eb88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_14eb8c:
    // 0x14eb8c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x14eb8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_14eb90:
    // 0x14eb90: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x14eb90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_14eb94:
    // 0x14eb94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14eb94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14eb98:
    // 0x14eb98: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14eb98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_14eb9c:
    // 0x14eb9c: 0x0  nop
    ctx->pc = 0x14eb9cu;
    // NOP
label_14eba0:
    // 0x14eba0: 0x0  nop
    ctx->pc = 0x14eba0u;
    // NOP
label_14eba4:
    // 0x14eba4: 0x46000004  c1          0x4
    ctx->pc = 0x14eba4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_14eba8:
    // 0x14eba8: 0x460b0036  c.le.s      $f0, $f11
    ctx->pc = 0x14eba8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14ebac:
    // 0x14ebac: 0x0  nop
    ctx->pc = 0x14ebacu;
    // NOP
label_14ebb0:
    // 0x14ebb0: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_14ebb4:
    if (ctx->pc == 0x14EBB4u) {
        ctx->pc = 0x14EBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBB0u;
        // 0x14ebb4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EBB8u;
        goto label_14ebb8;
    }
    ctx->pc = 0x14EBB0u;
    {
        const bool branch_taken_0x14ebb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14ebb0) {
            ctx->pc = 0x14EBB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EBB0u;
            // 0x14ebb4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EBD4u;
            goto label_14ebd4;
        }
    }
    ctx->pc = 0x14EBB8u;
label_14ebb8:
    // 0x14ebb8: 0x10000009  b           . + 4 + (0x9 << 2)
label_14ebbc:
    if (ctx->pc == 0x14EBBCu) {
        ctx->pc = 0x14EBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBB8u;
        // 0x14ebbc: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EBC0u;
        goto label_14ebc0;
    }
    ctx->pc = 0x14EBB8u;
    {
        const bool branch_taken_0x14ebb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBB8u;
        // 0x14ebbc: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ebb8) {
            ctx->pc = 0x14EBE0u;
            goto label_14ebe0;
        }
    }
    ctx->pc = 0x14EBC0u;
label_14ebc0:
    // 0x14ebc0: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x14ebc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_14ebc4:
    // 0x14ebc4: 0x1000fff3  b           . + 4 + (-0xD << 2)
label_14ebc8:
    if (ctx->pc == 0x14EBC8u) {
        ctx->pc = 0x14EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBC4u;
        // 0x14ebc8: 0x46052882  mul.s       $f2, $f5, $f5 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EBCCu;
        goto label_14ebcc;
    }
    ctx->pc = 0x14EBC4u;
    {
        const bool branch_taken_0x14ebc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBC4u;
        // 0x14ebc8: 0x46052882  mul.s       $f2, $f5, $f5 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ebc4) {
            ctx->pc = 0x14EB94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14eb94;
        }
    }
    ctx->pc = 0x14EBCCu;
label_14ebcc:
    // 0x14ebcc: 0x0  nop
    ctx->pc = 0x14ebccu;
    // NOP
label_14ebd0:
    // 0x14ebd0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14ebd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_14ebd4:
    // 0x14ebd4: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x14ebd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_14ebd8:
    // 0x14ebd8: 0x1440ff59  bnez        $v0, . + 4 + (-0xA7 << 2)
label_14ebdc:
    if (ctx->pc == 0x14EBDCu) {
        ctx->pc = 0x14EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBD8u;
        // 0x14ebdc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EBE0u;
        goto label_14ebe0;
    }
    ctx->pc = 0x14EBD8u;
    {
        const bool branch_taken_0x14ebd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBD8u;
        // 0x14ebdc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ebd8) {
            ctx->pc = 0x14E940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e940;
        }
    }
    ctx->pc = 0x14EBE0u;
label_14ebe0:
    // 0x14ebe0: 0x16c00007  bnez        $s6, . + 4 + (0x7 << 2)
label_14ebe4:
    if (ctx->pc == 0x14EBE4u) {
        ctx->pc = 0x14EBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBE0u;
        // 0x14ebe4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EBE8u;
        goto label_14ebe8;
    }
    ctx->pc = 0x14EBE0u;
    {
        const bool branch_taken_0x14ebe0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBE0u;
        // 0x14ebe4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ebe0) {
            ctx->pc = 0x14EC00u;
            goto label_14ec00;
        }
    }
    ctx->pc = 0x14EBE8u;
label_14ebe8:
    // 0x14ebe8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x14ebe8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_14ebec:
    // 0x14ebec: 0x257102a  slt         $v0, $s2, $s7
    ctx->pc = 0x14ebecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_14ebf0:
    // 0x14ebf0: 0x1440ff45  bnez        $v0, . + 4 + (-0xBB << 2)
label_14ebf4:
    if (ctx->pc == 0x14EBF4u) {
        ctx->pc = 0x14EBF8u;
        goto label_14ebf8;
    }
    ctx->pc = 0x14EBF0u;
    {
        const bool branch_taken_0x14ebf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ebf0) {
            ctx->pc = 0x14E908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e908;
        }
    }
    ctx->pc = 0x14EBF8u;
label_14ebf8:
    // 0x14ebf8: 0x12c0003b  beqz        $s6, . + 4 + (0x3B << 2)
label_14ebfc:
    if (ctx->pc == 0x14EBFCu) {
        ctx->pc = 0x14EBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBF8u;
        // 0x14ebfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EC00u;
        goto label_14ec00;
    }
    ctx->pc = 0x14EBF8u;
    {
        const bool branch_taken_0x14ebf8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBF8u;
        // 0x14ebfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ebf8) {
            ctx->pc = 0x14ECE8u;
            goto label_14ece8;
        }
    }
    ctx->pc = 0x14EC00u;
label_14ec00:
    // 0x14ec00: 0xae2200e8  sw          $v0, 0xE8($s1)
    ctx->pc = 0x14ec00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
label_14ec04:
    // 0x14ec04: 0x8ea30044  lw          $v1, 0x44($s5)
    ctx->pc = 0x14ec04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_14ec08:
    // 0x14ec08: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x14ec08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_14ec0c:
    // 0x14ec0c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_14ec10:
    if (ctx->pc == 0x14EC10u) {
        ctx->pc = 0x14EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC0Cu;
        // 0x14ec10: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EC14u;
        goto label_14ec14;
    }
    ctx->pc = 0x14EC0Cu;
    {
        const bool branch_taken_0x14ec0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC0Cu;
        // 0x14ec10: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec0c) {
            ctx->pc = 0x14EC34u;
            goto label_14ec34;
        }
    }
    ctx->pc = 0x14EC14u;
label_14ec14:
    // 0x14ec14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14ec14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14ec18:
    // 0x14ec18: 0x24421ef0  addiu       $v0, $v0, 0x1EF0
    ctx->pc = 0x14ec18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7920));
label_14ec1c:
    // 0x14ec1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14ec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_14ec20:
    // 0x14ec20: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14ec20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14ec24:
    // 0x14ec24: 0x800008  jr          $a0
label_14ec28:
    if (ctx->pc == 0x14EC28u) {
        ctx->pc = 0x14EC2Cu;
        goto label_14ec2c;
    }
    ctx->pc = 0x14EC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14EC2Cu: goto label_14ec2c;
            case 0x14EC34u: goto label_14ec34;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EC24u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14EC2Cu;
label_14ec2c:
    // 0x14ec2c: 0x10000002  b           . + 4 + (0x2 << 2)
label_14ec30:
    if (ctx->pc == 0x14EC30u) {
        ctx->pc = 0x14EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC2Cu;
        // 0x14ec30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EC34u;
        goto label_14ec34;
    }
    ctx->pc = 0x14EC2Cu;
    {
        const bool branch_taken_0x14ec2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC2Cu;
        // 0x14ec30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec2c) {
            ctx->pc = 0x14EC38u;
            goto label_14ec38;
        }
    }
    ctx->pc = 0x14EC34u;
label_14ec34:
    // 0x14ec34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14ec34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14ec38:
    // 0x14ec38: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
label_14ec3c:
    if (ctx->pc == 0x14EC3Cu) {
        ctx->pc = 0x14EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC38u;
        // 0x14ec3c: 0x8e2200e8  lw          $v0, 0xE8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EC40u;
        goto label_14ec40;
    }
    ctx->pc = 0x14EC38u;
    {
        const bool branch_taken_0x14ec38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ec38) {
            ctx->pc = 0x14EC3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EC38u;
            // 0x14ec3c: 0x8e2200e8  lw          $v0, 0xE8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14ECECu;
            goto label_14ecec;
        }
    }
    ctx->pc = 0x14EC40u;
label_14ec40:
    // 0x14ec40: 0x8ea30048  lw          $v1, 0x48($s5)
    ctx->pc = 0x14ec40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_14ec44:
    // 0x14ec44: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x14ec44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_14ec48:
    // 0x14ec48: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x14ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_14ec4c:
    // 0x14ec4c: 0x40f809  jalr        $v0
label_14ec50:
    if (ctx->pc == 0x14EC50u) {
        ctx->pc = 0x14EC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC4Cu;
        // 0x14ec50: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EC54u;
        goto label_14ec54;
    }
    ctx->pc = 0x14EC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14EC54u);
        ctx->pc = 0x14EC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC4Cu;
        // 0x14ec50: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EC4Cu, 0x14EC54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14EC54u;
label_14ec54:
    // 0x14ec54: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_14ec58:
    if (ctx->pc == 0x14EC58u) {
        ctx->pc = 0x14EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC54u;
        // 0x14ec58: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EC5Cu;
        goto label_14ec5c;
    }
    ctx->pc = 0x14EC54u;
    {
        const bool branch_taken_0x14ec54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC54u;
        // 0x14ec58: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec54) {
            ctx->pc = 0x14ECE8u;
            goto label_14ece8;
        }
    }
    ctx->pc = 0x14EC5Cu;
label_14ec5c:
    // 0x14ec5c: 0x8ea30048  lw          $v1, 0x48($s5)
    ctx->pc = 0x14ec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_14ec60:
    // 0x14ec60: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x14ec60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_14ec64:
    // 0x14ec64: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x14ec64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_14ec68:
    // 0x14ec68: 0x40f809  jalr        $v0
label_14ec6c:
    if (ctx->pc == 0x14EC6Cu) {
        ctx->pc = 0x14EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC68u;
        // 0x14ec6c: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EC70u;
        goto label_14ec70;
    }
    ctx->pc = 0x14EC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14EC70u);
        ctx->pc = 0x14EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC68u;
        // 0x14ec6c: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EC68u, 0x14EC70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14EC70u;
label_14ec70:
    // 0x14ec70: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_14ec74:
    if (ctx->pc == 0x14EC74u) {
        ctx->pc = 0x14EC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC70u;
        // 0x14ec74: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EC78u;
        goto label_14ec78;
    }
    ctx->pc = 0x14EC70u;
    {
        const bool branch_taken_0x14ec70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ec70) {
            ctx->pc = 0x14EC74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EC70u;
            // 0x14ec74: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EC98u;
            goto label_14ec98;
        }
    }
    ctx->pc = 0x14EC78u;
label_14ec78:
    // 0x14ec78: 0x8ea30048  lw          $v1, 0x48($s5)
    ctx->pc = 0x14ec78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_14ec7c:
    // 0x14ec7c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x14ec7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_14ec80:
    // 0x14ec80: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x14ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_14ec84:
    // 0x14ec84: 0x40f809  jalr        $v0
label_14ec88:
    if (ctx->pc == 0x14EC88u) {
        ctx->pc = 0x14EC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC84u;
        // 0x14ec88: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EC8Cu;
        goto label_14ec8c;
    }
    ctx->pc = 0x14EC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14EC8Cu);
        ctx->pc = 0x14EC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC84u;
        // 0x14ec88: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EC84u, 0x14EC8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14EC8Cu;
label_14ec8c:
    // 0x14ec8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_14ec90:
    if (ctx->pc == 0x14EC90u) {
        ctx->pc = 0x14EC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC8Cu;
        // 0x14ec90: 0x27a30090  addiu       $v1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14EC94u;
        goto label_14ec94;
    }
    ctx->pc = 0x14EC8Cu;
    {
        const bool branch_taken_0x14ec8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC8Cu;
        // 0x14ec90: 0x27a30090  addiu       $v1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec8c) {
            ctx->pc = 0x14EC9Cu;
            goto label_14ec9c;
        }
    }
    ctx->pc = 0x14EC94u;
label_14ec94:
    // 0x14ec94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14ec94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14ec98:
    // 0x14ec98: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x14ec98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_14ec9c:
    // 0x14ec9c: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x14ec9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_14eca0:
    // 0x14eca0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x14eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_14eca4:
    // 0x14eca4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x14eca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_14eca8:
    // 0x14eca8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_14ecac:
    if (ctx->pc == 0x14ECACu) {
        ctx->pc = 0x14ECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ECA8u;
        // 0x14ecac: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14ECB0u;
        goto label_14ecb0;
    }
    ctx->pc = 0x14ECA8u;
    {
        const bool branch_taken_0x14eca8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ECA8u;
        // 0x14ecac: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eca8) {
            ctx->pc = 0x14ECBCu;
            goto label_14ecbc;
        }
    }
    ctx->pc = 0x14ECB0u;
label_14ecb0:
    // 0x14ecb0: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x14ecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_14ecb4:
    // 0x14ecb4: 0x10000004  b           . + 4 + (0x4 << 2)
label_14ecb8:
    if (ctx->pc == 0x14ECB8u) {
        ctx->pc = 0x14ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ECB4u;
        // 0x14ecb8: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14ECBCu;
        goto label_14ecbc;
    }
    ctx->pc = 0x14ECB4u;
    {
        const bool branch_taken_0x14ecb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ECB4u;
        // 0x14ecb8: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ecb4) {
            ctx->pc = 0x14ECC8u;
            goto label_14ecc8;
        }
    }
    ctx->pc = 0x14ECBCu;
label_14ecbc:
    // 0x14ecbc: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x14ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_14ecc0:
    // 0x14ecc0: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x14ecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_14ecc4:
    // 0x14ecc4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14ecc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_14ecc8:
    // 0x14ecc8: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x14ecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_14eccc:
    // 0x14eccc: 0x8ea20048  lw          $v0, 0x48($s5)
    ctx->pc = 0x14ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_14ecd0:
    // 0x14ecd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14ecd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14ecd4:
    // 0x14ecd4: 0xc62c0098  lwc1        $f12, 0x98($s1)
    ctx->pc = 0x14ecd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14ecd8:
    // 0x14ecd8: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x14ecd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_14ecdc:
    // 0x14ecdc: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x14ecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_14ece0:
    // 0x14ece0: 0x60f809  jalr        $v1
label_14ece4:
    if (ctx->pc == 0x14ECE4u) {
        ctx->pc = 0x14ECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ECE0u;
        // 0x14ece4: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14ECE8u;
        goto label_14ece8;
    }
    ctx->pc = 0x14ECE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14ECE8u);
        ctx->pc = 0x14ECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ECE0u;
        // 0x14ece4: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14ECE0u, 0x14ECE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14ECE8u;
label_14ece8:
    // 0x14ece8: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x14ece8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
label_14ecec:
    // 0x14ecec: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_14ecf0:
    if (ctx->pc == 0x14ECF0u) {
        ctx->pc = 0x14ECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ECECu;
        // 0x14ecf0: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14ECF4u;
        goto label_14ecf4;
    }
    ctx->pc = 0x14ECECu;
    {
        const bool branch_taken_0x14ecec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ECECu;
        // 0x14ecf0: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ecec) {
            ctx->pc = 0x14ED6Cu;
            goto label_14ed6c;
        }
    }
    ctx->pc = 0x14ECF4u;
label_14ecf4:
    // 0x14ecf4: 0xc62100ec  lwc1        $f1, 0xEC($s1)
    ctx->pc = 0x14ecf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14ecf8:
    // 0x14ecf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14ecf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14ecfc:
    // 0x14ecfc: 0x0  nop
    ctx->pc = 0x14ecfcu;
    // NOP
label_14ed00:
    // 0x14ed00: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x14ed00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14ed04:
    // 0x14ed04: 0x0  nop
    ctx->pc = 0x14ed04u;
    // NOP
label_14ed08:
    // 0x14ed08: 0x45000018  bc1f        . + 4 + (0x18 << 2)
label_14ed0c:
    if (ctx->pc == 0x14ED0Cu) {
        ctx->pc = 0x14ED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED08u;
        // 0x14ed0c: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14ED10u;
        goto label_14ed10;
    }
    ctx->pc = 0x14ED08u;
    {
        const bool branch_taken_0x14ed08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14ED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED08u;
        // 0x14ed0c: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ed08) {
            ctx->pc = 0x14ED6Cu;
            goto label_14ed6c;
        }
    }
    ctx->pc = 0x14ED10u;
label_14ed10:
    // 0x14ed10: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x14ed10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_14ed14:
    // 0x14ed14: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_14ed18:
    if (ctx->pc == 0x14ED18u) {
        ctx->pc = 0x14ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED14u;
        // 0x14ed18: 0x27b00060  addiu       $s0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14ED1Cu;
        goto label_14ed1c;
    }
    ctx->pc = 0x14ED14u;
    {
        const bool branch_taken_0x14ed14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED14u;
        // 0x14ed18: 0x27b00060  addiu       $s0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ed14) {
            ctx->pc = 0x14ED68u;
            goto label_14ed68;
        }
    }
    ctx->pc = 0x14ED1Cu;
label_14ed1c:
    // 0x14ed1c: 0xc623007c  lwc1        $f3, 0x7C($s1)
    ctx->pc = 0x14ed1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14ed20:
    // 0x14ed20: 0xc6210088  lwc1        $f1, 0x88($s1)
    ctx->pc = 0x14ed20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14ed24:
    // 0x14ed24: 0xc622008c  lwc1        $f2, 0x8C($s1)
    ctx->pc = 0x14ed24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14ed28:
    // 0x14ed28: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x14ed28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_14ed2c:
    // 0x14ed2c: 0xc6240080  lwc1        $f4, 0x80($s1)
    ctx->pc = 0x14ed2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_14ed30:
    // 0x14ed30: 0xc6200090  lwc1        $f0, 0x90($s1)
    ctx->pc = 0x14ed30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14ed34:
    // 0x14ed34: 0xc6230084  lwc1        $f3, 0x84($s1)
    ctx->pc = 0x14ed34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14ed38:
    // 0x14ed38: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x14ed38u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_14ed3c:
    // 0x14ed3c: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x14ed3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_14ed40:
    // 0x14ed40: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x14ed40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_14ed44:
    // 0x14ed44: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x14ed44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_14ed48:
    // 0x14ed48: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x14ed48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_14ed4c:
    // 0x14ed4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ed4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14ed50:
    // 0x14ed50: 0xc093a88  jal         func_24EA20
label_14ed54:
    if (ctx->pc == 0x14ED54u) {
        ctx->pc = 0x14ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED50u;
        // 0x14ed54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14ED58u;
        goto label_14ed58;
    }
    ctx->pc = 0x14ED50u;
    SET_GPR_U32(ctx, 31, 0x14ED58u);
    ctx->pc = 0x14ED54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ED50u;
    // 0x14ed54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x14ED50u, 0x14ED58u)) {
        return;
    }
    ctx->pc = 0x14ED58u;
label_14ed58:
    // 0x14ed58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14ed58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14ed5c:
    // 0x14ed5c: 0xc0537ba  jal         func_14DEE8
label_14ed60:
    if (ctx->pc == 0x14ED60u) {
        ctx->pc = 0x14ED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED5Cu;
        // 0x14ed60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14ED64u;
        goto label_14ed64;
    }
    ctx->pc = 0x14ED5Cu;
    SET_GPR_U32(ctx, 31, 0x14ED64u);
    ctx->pc = 0x14ED60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ED5Cu;
    // 0x14ed60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DEE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14DEE8u, 0x14ED5Cu, 0x14ED64u)) {
        return;
    }
    ctx->pc = 0x14ED64u;
label_14ed64:
    // 0x14ed64: 0x0  nop
    ctx->pc = 0x14ed64u;
    // NOP
label_14ed68:
    // 0x14ed68: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x14ed68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_14ed6c:
    // 0x14ed6c: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x14ed6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_14ed70:
    // 0x14ed70: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x14ed70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_14ed74:
    // 0x14ed74: 0x7bb30160  lq          $s3, 0x160($sp)
    ctx->pc = 0x14ed74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_14ed78:
    // 0x14ed78: 0x7bb40150  lq          $s4, 0x150($sp)
    ctx->pc = 0x14ed78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_14ed7c:
    // 0x14ed7c: 0x7bb50140  lq          $s5, 0x140($sp)
    ctx->pc = 0x14ed7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_14ed80:
    // 0x14ed80: 0x7bb60130  lq          $s6, 0x130($sp)
    ctx->pc = 0x14ed80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_14ed84:
    // 0x14ed84: 0x7bb70120  lq          $s7, 0x120($sp)
    ctx->pc = 0x14ed84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_14ed88:
    // 0x14ed88: 0x7bbe0110  lq          $fp, 0x110($sp)
    ctx->pc = 0x14ed88u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_14ed8c:
    // 0x14ed8c: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x14ed8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_14ed90:
    // 0x14ed90: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x14ed90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_14ed94:
    // 0x14ed94: 0x3e00008  jr          $ra
label_14ed98:
    if (ctx->pc == 0x14ED98u) {
        ctx->pc = 0x14ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED94u;
        // 0x14ed98: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14ED9Cu;
        goto label_14ed9c;
    }
    ctx->pc = 0x14ED94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED94u;
        // 0x14ed98: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14ED94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14ED9Cu;
label_14ed9c:
    // 0x14ed9c: 0x0  nop
    ctx->pc = 0x14ed9cu;
    // NOP
    ctx->pc = 0x14eda0u;
}
