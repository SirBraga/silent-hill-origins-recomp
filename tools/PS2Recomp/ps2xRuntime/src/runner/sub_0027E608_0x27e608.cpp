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

// Function: sub_0027E608
// Address: 0x27e608 - 0x27ebf0
void sub_0027E608_0x27e608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E608_0x27e608");
#endif

    switch (ctx->pc) {
        case 0x27e608u: goto label_27e608;
        case 0x27e60cu: goto label_27e60c;
        case 0x27e610u: goto label_27e610;
        case 0x27e614u: goto label_27e614;
        case 0x27e618u: goto label_27e618;
        case 0x27e61cu: goto label_27e61c;
        case 0x27e620u: goto label_27e620;
        case 0x27e624u: goto label_27e624;
        case 0x27e628u: goto label_27e628;
        case 0x27e62cu: goto label_27e62c;
        case 0x27e630u: goto label_27e630;
        case 0x27e634u: goto label_27e634;
        case 0x27e638u: goto label_27e638;
        case 0x27e63cu: goto label_27e63c;
        case 0x27e640u: goto label_27e640;
        case 0x27e644u: goto label_27e644;
        case 0x27e648u: goto label_27e648;
        case 0x27e64cu: goto label_27e64c;
        case 0x27e650u: goto label_27e650;
        case 0x27e654u: goto label_27e654;
        case 0x27e658u: goto label_27e658;
        case 0x27e65cu: goto label_27e65c;
        case 0x27e660u: goto label_27e660;
        case 0x27e664u: goto label_27e664;
        case 0x27e668u: goto label_27e668;
        case 0x27e66cu: goto label_27e66c;
        case 0x27e670u: goto label_27e670;
        case 0x27e674u: goto label_27e674;
        case 0x27e678u: goto label_27e678;
        case 0x27e67cu: goto label_27e67c;
        case 0x27e680u: goto label_27e680;
        case 0x27e684u: goto label_27e684;
        case 0x27e688u: goto label_27e688;
        case 0x27e68cu: goto label_27e68c;
        case 0x27e690u: goto label_27e690;
        case 0x27e694u: goto label_27e694;
        case 0x27e698u: goto label_27e698;
        case 0x27e69cu: goto label_27e69c;
        case 0x27e6a0u: goto label_27e6a0;
        case 0x27e6a4u: goto label_27e6a4;
        case 0x27e6a8u: goto label_27e6a8;
        case 0x27e6acu: goto label_27e6ac;
        case 0x27e6b0u: goto label_27e6b0;
        case 0x27e6b4u: goto label_27e6b4;
        case 0x27e6b8u: goto label_27e6b8;
        case 0x27e6bcu: goto label_27e6bc;
        case 0x27e6c0u: goto label_27e6c0;
        case 0x27e6c4u: goto label_27e6c4;
        case 0x27e6c8u: goto label_27e6c8;
        case 0x27e6ccu: goto label_27e6cc;
        case 0x27e6d0u: goto label_27e6d0;
        case 0x27e6d4u: goto label_27e6d4;
        case 0x27e6d8u: goto label_27e6d8;
        case 0x27e6dcu: goto label_27e6dc;
        case 0x27e6e0u: goto label_27e6e0;
        case 0x27e6e4u: goto label_27e6e4;
        case 0x27e6e8u: goto label_27e6e8;
        case 0x27e6ecu: goto label_27e6ec;
        case 0x27e6f0u: goto label_27e6f0;
        case 0x27e6f4u: goto label_27e6f4;
        case 0x27e6f8u: goto label_27e6f8;
        case 0x27e6fcu: goto label_27e6fc;
        case 0x27e700u: goto label_27e700;
        case 0x27e704u: goto label_27e704;
        case 0x27e708u: goto label_27e708;
        case 0x27e70cu: goto label_27e70c;
        case 0x27e710u: goto label_27e710;
        case 0x27e714u: goto label_27e714;
        case 0x27e718u: goto label_27e718;
        case 0x27e71cu: goto label_27e71c;
        case 0x27e720u: goto label_27e720;
        case 0x27e724u: goto label_27e724;
        case 0x27e728u: goto label_27e728;
        case 0x27e72cu: goto label_27e72c;
        case 0x27e730u: goto label_27e730;
        case 0x27e734u: goto label_27e734;
        case 0x27e738u: goto label_27e738;
        case 0x27e73cu: goto label_27e73c;
        case 0x27e740u: goto label_27e740;
        case 0x27e744u: goto label_27e744;
        case 0x27e748u: goto label_27e748;
        case 0x27e74cu: goto label_27e74c;
        case 0x27e750u: goto label_27e750;
        case 0x27e754u: goto label_27e754;
        case 0x27e758u: goto label_27e758;
        case 0x27e75cu: goto label_27e75c;
        case 0x27e760u: goto label_27e760;
        case 0x27e764u: goto label_27e764;
        case 0x27e768u: goto label_27e768;
        case 0x27e76cu: goto label_27e76c;
        case 0x27e770u: goto label_27e770;
        case 0x27e774u: goto label_27e774;
        case 0x27e778u: goto label_27e778;
        case 0x27e77cu: goto label_27e77c;
        case 0x27e780u: goto label_27e780;
        case 0x27e784u: goto label_27e784;
        case 0x27e788u: goto label_27e788;
        case 0x27e78cu: goto label_27e78c;
        case 0x27e790u: goto label_27e790;
        case 0x27e794u: goto label_27e794;
        case 0x27e798u: goto label_27e798;
        case 0x27e79cu: goto label_27e79c;
        case 0x27e7a0u: goto label_27e7a0;
        case 0x27e7a4u: goto label_27e7a4;
        case 0x27e7a8u: goto label_27e7a8;
        case 0x27e7acu: goto label_27e7ac;
        case 0x27e7b0u: goto label_27e7b0;
        case 0x27e7b4u: goto label_27e7b4;
        case 0x27e7b8u: goto label_27e7b8;
        case 0x27e7bcu: goto label_27e7bc;
        case 0x27e7c0u: goto label_27e7c0;
        case 0x27e7c4u: goto label_27e7c4;
        case 0x27e7c8u: goto label_27e7c8;
        case 0x27e7ccu: goto label_27e7cc;
        case 0x27e7d0u: goto label_27e7d0;
        case 0x27e7d4u: goto label_27e7d4;
        case 0x27e7d8u: goto label_27e7d8;
        case 0x27e7dcu: goto label_27e7dc;
        case 0x27e7e0u: goto label_27e7e0;
        case 0x27e7e4u: goto label_27e7e4;
        case 0x27e7e8u: goto label_27e7e8;
        case 0x27e7ecu: goto label_27e7ec;
        case 0x27e7f0u: goto label_27e7f0;
        case 0x27e7f4u: goto label_27e7f4;
        case 0x27e7f8u: goto label_27e7f8;
        case 0x27e7fcu: goto label_27e7fc;
        case 0x27e800u: goto label_27e800;
        case 0x27e804u: goto label_27e804;
        case 0x27e808u: goto label_27e808;
        case 0x27e80cu: goto label_27e80c;
        case 0x27e810u: goto label_27e810;
        case 0x27e814u: goto label_27e814;
        case 0x27e818u: goto label_27e818;
        case 0x27e81cu: goto label_27e81c;
        case 0x27e820u: goto label_27e820;
        case 0x27e824u: goto label_27e824;
        case 0x27e828u: goto label_27e828;
        case 0x27e82cu: goto label_27e82c;
        case 0x27e830u: goto label_27e830;
        case 0x27e834u: goto label_27e834;
        case 0x27e838u: goto label_27e838;
        case 0x27e83cu: goto label_27e83c;
        case 0x27e840u: goto label_27e840;
        case 0x27e844u: goto label_27e844;
        case 0x27e848u: goto label_27e848;
        case 0x27e84cu: goto label_27e84c;
        case 0x27e850u: goto label_27e850;
        case 0x27e854u: goto label_27e854;
        case 0x27e858u: goto label_27e858;
        case 0x27e85cu: goto label_27e85c;
        case 0x27e860u: goto label_27e860;
        case 0x27e864u: goto label_27e864;
        case 0x27e868u: goto label_27e868;
        case 0x27e86cu: goto label_27e86c;
        case 0x27e870u: goto label_27e870;
        case 0x27e874u: goto label_27e874;
        case 0x27e878u: goto label_27e878;
        case 0x27e87cu: goto label_27e87c;
        case 0x27e880u: goto label_27e880;
        case 0x27e884u: goto label_27e884;
        case 0x27e888u: goto label_27e888;
        case 0x27e88cu: goto label_27e88c;
        case 0x27e890u: goto label_27e890;
        case 0x27e894u: goto label_27e894;
        case 0x27e898u: goto label_27e898;
        case 0x27e89cu: goto label_27e89c;
        case 0x27e8a0u: goto label_27e8a0;
        case 0x27e8a4u: goto label_27e8a4;
        case 0x27e8a8u: goto label_27e8a8;
        case 0x27e8acu: goto label_27e8ac;
        case 0x27e8b0u: goto label_27e8b0;
        case 0x27e8b4u: goto label_27e8b4;
        case 0x27e8b8u: goto label_27e8b8;
        case 0x27e8bcu: goto label_27e8bc;
        case 0x27e8c0u: goto label_27e8c0;
        case 0x27e8c4u: goto label_27e8c4;
        case 0x27e8c8u: goto label_27e8c8;
        case 0x27e8ccu: goto label_27e8cc;
        case 0x27e8d0u: goto label_27e8d0;
        case 0x27e8d4u: goto label_27e8d4;
        case 0x27e8d8u: goto label_27e8d8;
        case 0x27e8dcu: goto label_27e8dc;
        case 0x27e8e0u: goto label_27e8e0;
        case 0x27e8e4u: goto label_27e8e4;
        case 0x27e8e8u: goto label_27e8e8;
        case 0x27e8ecu: goto label_27e8ec;
        case 0x27e8f0u: goto label_27e8f0;
        case 0x27e8f4u: goto label_27e8f4;
        case 0x27e8f8u: goto label_27e8f8;
        case 0x27e8fcu: goto label_27e8fc;
        case 0x27e900u: goto label_27e900;
        case 0x27e904u: goto label_27e904;
        case 0x27e908u: goto label_27e908;
        case 0x27e90cu: goto label_27e90c;
        case 0x27e910u: goto label_27e910;
        case 0x27e914u: goto label_27e914;
        case 0x27e918u: goto label_27e918;
        case 0x27e91cu: goto label_27e91c;
        case 0x27e920u: goto label_27e920;
        case 0x27e924u: goto label_27e924;
        case 0x27e928u: goto label_27e928;
        case 0x27e92cu: goto label_27e92c;
        case 0x27e930u: goto label_27e930;
        case 0x27e934u: goto label_27e934;
        case 0x27e938u: goto label_27e938;
        case 0x27e93cu: goto label_27e93c;
        case 0x27e940u: goto label_27e940;
        case 0x27e944u: goto label_27e944;
        case 0x27e948u: goto label_27e948;
        case 0x27e94cu: goto label_27e94c;
        case 0x27e950u: goto label_27e950;
        case 0x27e954u: goto label_27e954;
        case 0x27e958u: goto label_27e958;
        case 0x27e95cu: goto label_27e95c;
        case 0x27e960u: goto label_27e960;
        case 0x27e964u: goto label_27e964;
        case 0x27e968u: goto label_27e968;
        case 0x27e96cu: goto label_27e96c;
        case 0x27e970u: goto label_27e970;
        case 0x27e974u: goto label_27e974;
        case 0x27e978u: goto label_27e978;
        case 0x27e97cu: goto label_27e97c;
        case 0x27e980u: goto label_27e980;
        case 0x27e984u: goto label_27e984;
        case 0x27e988u: goto label_27e988;
        case 0x27e98cu: goto label_27e98c;
        case 0x27e990u: goto label_27e990;
        case 0x27e994u: goto label_27e994;
        case 0x27e998u: goto label_27e998;
        case 0x27e99cu: goto label_27e99c;
        case 0x27e9a0u: goto label_27e9a0;
        case 0x27e9a4u: goto label_27e9a4;
        case 0x27e9a8u: goto label_27e9a8;
        case 0x27e9acu: goto label_27e9ac;
        case 0x27e9b0u: goto label_27e9b0;
        case 0x27e9b4u: goto label_27e9b4;
        case 0x27e9b8u: goto label_27e9b8;
        case 0x27e9bcu: goto label_27e9bc;
        case 0x27e9c0u: goto label_27e9c0;
        case 0x27e9c4u: goto label_27e9c4;
        case 0x27e9c8u: goto label_27e9c8;
        case 0x27e9ccu: goto label_27e9cc;
        case 0x27e9d0u: goto label_27e9d0;
        case 0x27e9d4u: goto label_27e9d4;
        case 0x27e9d8u: goto label_27e9d8;
        case 0x27e9dcu: goto label_27e9dc;
        case 0x27e9e0u: goto label_27e9e0;
        case 0x27e9e4u: goto label_27e9e4;
        case 0x27e9e8u: goto label_27e9e8;
        case 0x27e9ecu: goto label_27e9ec;
        case 0x27e9f0u: goto label_27e9f0;
        case 0x27e9f4u: goto label_27e9f4;
        case 0x27e9f8u: goto label_27e9f8;
        case 0x27e9fcu: goto label_27e9fc;
        case 0x27ea00u: goto label_27ea00;
        case 0x27ea04u: goto label_27ea04;
        case 0x27ea08u: goto label_27ea08;
        case 0x27ea0cu: goto label_27ea0c;
        case 0x27ea10u: goto label_27ea10;
        case 0x27ea14u: goto label_27ea14;
        case 0x27ea18u: goto label_27ea18;
        case 0x27ea1cu: goto label_27ea1c;
        case 0x27ea20u: goto label_27ea20;
        case 0x27ea24u: goto label_27ea24;
        case 0x27ea28u: goto label_27ea28;
        case 0x27ea2cu: goto label_27ea2c;
        case 0x27ea30u: goto label_27ea30;
        case 0x27ea34u: goto label_27ea34;
        case 0x27ea38u: goto label_27ea38;
        case 0x27ea3cu: goto label_27ea3c;
        case 0x27ea40u: goto label_27ea40;
        case 0x27ea44u: goto label_27ea44;
        case 0x27ea48u: goto label_27ea48;
        case 0x27ea4cu: goto label_27ea4c;
        case 0x27ea50u: goto label_27ea50;
        case 0x27ea54u: goto label_27ea54;
        case 0x27ea58u: goto label_27ea58;
        case 0x27ea5cu: goto label_27ea5c;
        case 0x27ea60u: goto label_27ea60;
        case 0x27ea64u: goto label_27ea64;
        case 0x27ea68u: goto label_27ea68;
        case 0x27ea6cu: goto label_27ea6c;
        case 0x27ea70u: goto label_27ea70;
        case 0x27ea74u: goto label_27ea74;
        case 0x27ea78u: goto label_27ea78;
        case 0x27ea7cu: goto label_27ea7c;
        case 0x27ea80u: goto label_27ea80;
        case 0x27ea84u: goto label_27ea84;
        case 0x27ea88u: goto label_27ea88;
        case 0x27ea8cu: goto label_27ea8c;
        case 0x27ea90u: goto label_27ea90;
        case 0x27ea94u: goto label_27ea94;
        case 0x27ea98u: goto label_27ea98;
        case 0x27ea9cu: goto label_27ea9c;
        case 0x27eaa0u: goto label_27eaa0;
        case 0x27eaa4u: goto label_27eaa4;
        case 0x27eaa8u: goto label_27eaa8;
        case 0x27eaacu: goto label_27eaac;
        case 0x27eab0u: goto label_27eab0;
        case 0x27eab4u: goto label_27eab4;
        case 0x27eab8u: goto label_27eab8;
        case 0x27eabcu: goto label_27eabc;
        case 0x27eac0u: goto label_27eac0;
        case 0x27eac4u: goto label_27eac4;
        case 0x27eac8u: goto label_27eac8;
        case 0x27eaccu: goto label_27eacc;
        case 0x27ead0u: goto label_27ead0;
        case 0x27ead4u: goto label_27ead4;
        case 0x27ead8u: goto label_27ead8;
        case 0x27eadcu: goto label_27eadc;
        case 0x27eae0u: goto label_27eae0;
        case 0x27eae4u: goto label_27eae4;
        case 0x27eae8u: goto label_27eae8;
        case 0x27eaecu: goto label_27eaec;
        case 0x27eaf0u: goto label_27eaf0;
        case 0x27eaf4u: goto label_27eaf4;
        case 0x27eaf8u: goto label_27eaf8;
        case 0x27eafcu: goto label_27eafc;
        case 0x27eb00u: goto label_27eb00;
        case 0x27eb04u: goto label_27eb04;
        case 0x27eb08u: goto label_27eb08;
        case 0x27eb0cu: goto label_27eb0c;
        case 0x27eb10u: goto label_27eb10;
        case 0x27eb14u: goto label_27eb14;
        case 0x27eb18u: goto label_27eb18;
        case 0x27eb1cu: goto label_27eb1c;
        case 0x27eb20u: goto label_27eb20;
        case 0x27eb24u: goto label_27eb24;
        case 0x27eb28u: goto label_27eb28;
        case 0x27eb2cu: goto label_27eb2c;
        case 0x27eb30u: goto label_27eb30;
        case 0x27eb34u: goto label_27eb34;
        case 0x27eb38u: goto label_27eb38;
        case 0x27eb3cu: goto label_27eb3c;
        case 0x27eb40u: goto label_27eb40;
        case 0x27eb44u: goto label_27eb44;
        case 0x27eb48u: goto label_27eb48;
        case 0x27eb4cu: goto label_27eb4c;
        case 0x27eb50u: goto label_27eb50;
        case 0x27eb54u: goto label_27eb54;
        case 0x27eb58u: goto label_27eb58;
        case 0x27eb5cu: goto label_27eb5c;
        case 0x27eb60u: goto label_27eb60;
        case 0x27eb64u: goto label_27eb64;
        case 0x27eb68u: goto label_27eb68;
        case 0x27eb6cu: goto label_27eb6c;
        case 0x27eb70u: goto label_27eb70;
        case 0x27eb74u: goto label_27eb74;
        case 0x27eb78u: goto label_27eb78;
        case 0x27eb7cu: goto label_27eb7c;
        case 0x27eb80u: goto label_27eb80;
        case 0x27eb84u: goto label_27eb84;
        case 0x27eb88u: goto label_27eb88;
        case 0x27eb8cu: goto label_27eb8c;
        case 0x27eb90u: goto label_27eb90;
        case 0x27eb94u: goto label_27eb94;
        case 0x27eb98u: goto label_27eb98;
        case 0x27eb9cu: goto label_27eb9c;
        case 0x27eba0u: goto label_27eba0;
        case 0x27eba4u: goto label_27eba4;
        case 0x27eba8u: goto label_27eba8;
        case 0x27ebacu: goto label_27ebac;
        case 0x27ebb0u: goto label_27ebb0;
        case 0x27ebb4u: goto label_27ebb4;
        case 0x27ebb8u: goto label_27ebb8;
        case 0x27ebbcu: goto label_27ebbc;
        case 0x27ebc0u: goto label_27ebc0;
        case 0x27ebc4u: goto label_27ebc4;
        case 0x27ebc8u: goto label_27ebc8;
        case 0x27ebccu: goto label_27ebcc;
        case 0x27ebd0u: goto label_27ebd0;
        case 0x27ebd4u: goto label_27ebd4;
        case 0x27ebd8u: goto label_27ebd8;
        case 0x27ebdcu: goto label_27ebdc;
        case 0x27ebe0u: goto label_27ebe0;
        case 0x27ebe4u: goto label_27ebe4;
        case 0x27ebe8u: goto label_27ebe8;
        case 0x27ebecu: goto label_27ebec;
        default: break;
    }

    ctx->pc = 0x27e608u;

label_27e608:
    // 0x27e608: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x27e608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_27e60c:
    // 0x27e60c: 0x8f8287f0  lw          $v0, -0x7810($gp)
    ctx->pc = 0x27e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936560)));
label_27e610:
    // 0x27e610: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x27e610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_27e614:
    // 0x27e614: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x27e614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_27e618:
    // 0x27e618: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x27e618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_27e61c:
    // 0x27e61c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x27e61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_27e620:
    // 0x27e620: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x27e620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_27e624:
    // 0x27e624: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x27e624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_27e628:
    // 0x27e628: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x27e628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_27e62c:
    // 0x27e62c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x27e62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_27e630:
    // 0x27e630: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x27e630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_27e634:
    // 0x27e634: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27e634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_27e638:
    // 0x27e638: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x27e638u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_27e63c:
    // 0x27e63c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x27e63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_27e640:
    // 0x27e640: 0x8c970018  lw          $s7, 0x18($a0)
    ctx->pc = 0x27e640u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_27e644:
    // 0x27e644: 0x8f8387fc  lw          $v1, -0x7804($gp)
    ctx->pc = 0x27e644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936572)));
label_27e648:
    // 0x27e648: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x27e648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_27e64c:
    // 0x27e64c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x27e64cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27e650:
    // 0x27e650: 0x12600155  beqz        $s3, . + 4 + (0x155 << 2)
label_27e654:
    if (ctx->pc == 0x27E654u) {
        ctx->pc = 0x27E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E650u;
        // 0x27e654: 0x83a021  addu        $s4, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E658u;
        goto label_27e658;
    }
    ctx->pc = 0x27E650u;
    {
        const bool branch_taken_0x27e650 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E650u;
        // 0x27e654: 0x83a021  addu        $s4, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e650) {
            ctx->pc = 0x27EBA8u;
            goto label_27eba8;
        }
    }
    ctx->pc = 0x27E658u;
label_27e658:
    // 0x27e658: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x27e658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_27e65c:
    // 0x27e65c: 0x10400152  beqz        $v0, . + 4 + (0x152 << 2)
label_27e660:
    if (ctx->pc == 0x27E660u) {
        ctx->pc = 0x27E660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E65Cu;
        // 0x27e660: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E664u;
        goto label_27e664;
    }
    ctx->pc = 0x27E65Cu;
    {
        const bool branch_taken_0x27e65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E65Cu;
        // 0x27e660: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e65c) {
            ctx->pc = 0x27EBA8u;
            goto label_27eba8;
        }
    }
    ctx->pc = 0x27E664u;
label_27e664:
    // 0x27e664: 0x8ee2005c  lw          $v0, 0x5C($s7)
    ctx->pc = 0x27e664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 92)));
label_27e668:
    // 0x27e668: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x27e668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_27e66c:
    // 0x27e66c: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x27e66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_27e670:
    // 0x27e670: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x27e670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_27e674:
    // 0x27e674: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x27e674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_27e678:
    // 0x27e678: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x27e678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_27e67c:
    // 0x27e67c: 0x8ee60030  lw          $a2, 0x30($s7)
    ctx->pc = 0x27e67cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 48)));
label_27e680:
    // 0x27e680: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x27e680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
label_27e684:
    // 0x27e684: 0x8ef20034  lw          $s2, 0x34($s7)
    ctx->pc = 0x27e684u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 52)));
label_27e688:
    // 0x27e688: 0x10600147  beqz        $v1, . + 4 + (0x147 << 2)
label_27e68c:
    if (ctx->pc == 0x27E68Cu) {
        ctx->pc = 0x27E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E688u;
        // 0x27e68c: 0xafb20010  sw          $s2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E690u;
        goto label_27e690;
    }
    ctx->pc = 0x27E688u;
    {
        const bool branch_taken_0x27e688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E688u;
        // 0x27e68c: 0xafb20010  sw          $s2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e688) {
            ctx->pc = 0x27EBA8u;
            goto label_27eba8;
        }
    }
    ctx->pc = 0x27E690u;
label_27e690:
    // 0x27e690: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x27e690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_27e694:
    // 0x27e694: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x27e694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_27e698:
    // 0x27e698: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x27e698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_27e69c:
    // 0x27e69c: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x27e69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_27e6a0:
    // 0x27e6a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x27e6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27e6a4:
    // 0x27e6a4: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x27e6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
label_27e6a8:
    // 0x27e6a8: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x27e6a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_27e6ac:
    // 0x27e6ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27e6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27e6b0:
    // 0x27e6b0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x27e6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27e6b4:
    // 0x27e6b4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x27e6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27e6b8:
    // 0x27e6b8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x27e6b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27e6bc:
    // 0x27e6bc: 0x0  nop
    ctx->pc = 0x27e6bcu;
    // NOP
label_27e6c0:
    // 0x27e6c0: 0x45030130  bc1tl       . + 4 + (0x130 << 2)
label_27e6c4:
    if (ctx->pc == 0x27E6C4u) {
        ctx->pc = 0x27E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E6C0u;
        // 0x27e6c4: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E6C8u;
        goto label_27e6c8;
    }
    ctx->pc = 0x27E6C0u;
    {
        const bool branch_taken_0x27e6c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27e6c0) {
            ctx->pc = 0x27E6C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E6C0u;
            // 0x27e6c4: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27EB84u;
            goto label_27eb84;
        }
    }
    ctx->pc = 0x27E6C8u;
label_27e6c8:
    // 0x27e6c8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x27e6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_27e6cc:
    // 0x27e6cc: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x27e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_27e6d0:
    // 0x27e6d0: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x27e6d0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27e6d4:
    // 0x27e6d4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x27e6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_27e6d8:
    // 0x27e6d8: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x27e6d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27e6dc:
    // 0x27e6dc: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x27e6dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_27e6e0:
    // 0x27e6e0: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x27e6e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_27e6e4:
    // 0x27e6e4: 0x8e320020  lw          $s2, 0x20($s1)
    ctx->pc = 0x27e6e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_27e6e8:
    // 0x27e6e8: 0x8e360024  lw          $s6, 0x24($s1)
    ctx->pc = 0x27e6e8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_27e6ec:
    // 0x27e6ec: 0x8e3e0028  lw          $fp, 0x28($s1)
    ctx->pc = 0x27e6ecu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_27e6f0:
    // 0x27e6f0: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x27e6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_27e6f4:
    // 0x27e6f4: 0xc095988  jal         func_256620
label_27e6f8:
    if (ctx->pc == 0x27E6F8u) {
        ctx->pc = 0x27E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E6F4u;
        // 0x27e6f8: 0x7faf0020  sq          $t7, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E6FCu;
        goto label_27e6fc;
    }
    ctx->pc = 0x27E6F4u;
    SET_GPR_U32(ctx, 31, 0x27E6FCu);
    ctx->pc = 0x27E6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E6F4u;
    // 0x27e6f8: 0x7faf0020  sq          $t7, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256620u, 0x27E6F4u, 0x27E6FCu)) {
        return;
    }
    ctx->pc = 0x27E6FCu;
label_27e6fc:
    // 0x27e6fc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x27e6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_27e700:
    // 0x27e700: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x27e700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_27e704:
    // 0x27e704: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
label_27e708:
    if (ctx->pc == 0x27E708u) {
        ctx->pc = 0x27E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E704u;
        // 0x27e708: 0x7baf0020  lq          $t7, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E70Cu;
        goto label_27e70c;
    }
    ctx->pc = 0x27E704u;
    {
        const bool branch_taken_0x27e704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E704u;
        // 0x27e708: 0x7baf0020  lq          $t7, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e704) {
            ctx->pc = 0x27E7E4u;
            goto label_27e7e4;
        }
    }
    ctx->pc = 0x27E70Cu;
label_27e70c:
    // 0x27e70c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x27e70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_27e710:
    // 0x27e710: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x27e710u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e714:
    // 0x27e714: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27e714u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e718:
    // 0x27e718: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_27e71c:
    if (ctx->pc == 0x27E71Cu) {
        ctx->pc = 0x27E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E718u;
        // 0x27e71c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E720u;
        goto label_27e720;
    }
    ctx->pc = 0x27E718u;
    {
        const bool branch_taken_0x27e718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E718u;
        // 0x27e71c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e718) {
            ctx->pc = 0x27E7E4u;
            goto label_27e7e4;
        }
    }
    ctx->pc = 0x27E720u;
label_27e720:
    // 0x27e720: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x27e720u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_27e724:
    // 0x27e724: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x27e724u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_27e728:
    // 0x27e728: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27e728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e72c:
    // 0x27e72c: 0xe82021  addu        $a0, $a3, $t0
    ctx->pc = 0x27e72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_27e730:
    // 0x27e730: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x27e730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_27e734:
    // 0x27e734: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x27e734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_27e738:
    // 0x27e738: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_27e73c:
    if (ctx->pc == 0x27E73Cu) {
        ctx->pc = 0x27E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E738u;
        // 0x27e73c: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E740u;
        goto label_27e740;
    }
    ctx->pc = 0x27E738u;
    {
        const bool branch_taken_0x27e738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E738u;
        // 0x27e73c: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e738) {
            ctx->pc = 0x27E7CCu;
            goto label_27e7cc;
        }
    }
    ctx->pc = 0x27E740u;
label_27e740:
    // 0x27e740: 0x250b0001  addiu       $t3, $t0, 0x1
    ctx->pc = 0x27e740u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_27e744:
    // 0x27e744: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_27e748:
    if (ctx->pc == 0x27E748u) {
        ctx->pc = 0x27E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E744u;
        // 0x27e748: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E74Cu;
        goto label_27e74c;
    }
    ctx->pc = 0x27E744u;
    {
        const bool branch_taken_0x27e744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E744u;
        // 0x27e748: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e744) {
            ctx->pc = 0x27E7D4u;
            goto label_27e7d4;
        }
    }
    ctx->pc = 0x27E74Cu;
label_27e74c:
    // 0x27e74c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x27e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_27e750:
    // 0x27e750: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x27e750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27e754:
    // 0x27e754: 0xd22021  addu        $a0, $a2, $s2
    ctx->pc = 0x27e754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_27e758:
    // 0x27e758: 0x400013  mtlo        $v0
    ctx->pc = 0x27e758u;
    ctx->lo = GPR_U64(ctx, 2);
label_27e75c:
    // 0x27e75c: 0x71891800  madd        $v1, $t4, $t1
    ctx->pc = 0x27e75cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 9); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_27e760:
    // 0x27e760: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x27e760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27e764:
    // 0x27e764: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x27e764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_27e768:
    // 0x27e768: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x27e768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27e76c:
    // 0x27e76c: 0x304a00ff  andi        $t2, $v0, 0xFF
    ctx->pc = 0x27e76cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27e770:
    // 0x27e770: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x27e770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_27e774:
    // 0x27e774: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x27e774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27e778:
    // 0x27e778: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x27e778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27e77c:
    // 0x27e77c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x27e77cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_27e780:
    // 0x27e780: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x27e780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_27e784:
    // 0x27e784: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27e784u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27e788:
    // 0x27e788: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x27e788u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_27e78c:
    // 0x27e78c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x27e78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27e790:
    // 0x27e790: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x27e790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_27e794:
    // 0x27e794: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x27e794u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27e798:
    // 0x27e798: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x27e798u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_27e79c:
    // 0x27e79c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x27e79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27e7a0:
    // 0x27e7a0: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x27e7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_27e7a4:
    // 0x27e7a4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x27e7a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_27e7a8:
    // 0x27e7a8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x27e7a8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_27e7ac:
    // 0x27e7ac: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x27e7acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_27e7b0:
    // 0x27e7b0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x27e7b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_27e7b4:
    // 0x27e7b4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x27e7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_27e7b8:
    // 0x27e7b8: 0x142102b  sltu        $v0, $t2, $v0
    ctx->pc = 0x27e7b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27e7bc:
    // 0x27e7bc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_27e7c0:
    if (ctx->pc == 0x27E7C0u) {
        ctx->pc = 0x27E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E7BCu;
        // 0x27e7c0: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E7C4u;
        goto label_27e7c4;
    }
    ctx->pc = 0x27E7BCu;
    {
        const bool branch_taken_0x27e7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E7BCu;
        // 0x27e7c0: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e7bc) {
            ctx->pc = 0x27E760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e760;
        }
    }
    ctx->pc = 0x27E7C4u;
label_27e7c4:
    // 0x27e7c4: 0x10000003  b           . + 4 + (0x3 << 2)
label_27e7c8:
    if (ctx->pc == 0x27E7C8u) {
        ctx->pc = 0x27E7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E7C4u;
        // 0x27e7c8: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E7CCu;
        goto label_27e7cc;
    }
    ctx->pc = 0x27E7C4u;
    {
        const bool branch_taken_0x27e7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E7C4u;
        // 0x27e7c8: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e7c4) {
            ctx->pc = 0x27E7D4u;
            goto label_27e7d4;
        }
    }
    ctx->pc = 0x27E7CCu;
label_27e7cc:
    // 0x27e7cc: 0x250b0001  addiu       $t3, $t0, 0x1
    ctx->pc = 0x27e7ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_27e7d0:
    // 0x27e7d0: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x27e7d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_27e7d4:
    // 0x27e7d4: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x27e7d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_27e7d8:
    // 0x27e7d8: 0x105102b  sltu        $v0, $t0, $a1
    ctx->pc = 0x27e7d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_27e7dc:
    // 0x27e7dc: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_27e7e0:
    if (ctx->pc == 0x27E7E0u) {
        ctx->pc = 0x27E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E7DCu;
        // 0x27e7e0: 0xe82021  addu        $a0, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E7E4u;
        goto label_27e7e4;
    }
    ctx->pc = 0x27E7DCu;
    {
        const bool branch_taken_0x27e7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E7DCu;
        // 0x27e7e0: 0xe82021  addu        $a0, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e7dc) {
            ctx->pc = 0x27E730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e730;
        }
    }
    ctx->pc = 0x27E7E4u;
label_27e7e4:
    // 0x27e7e4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x27e7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_27e7e8:
    // 0x27e7e8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x27e7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_27e7ec:
    // 0x27e7ec: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
label_27e7f0:
    if (ctx->pc == 0x27E7F0u) {
        ctx->pc = 0x27E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E7ECu;
        // 0x27e7f0: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E7F4u;
        goto label_27e7f4;
    }
    ctx->pc = 0x27E7ECu;
    {
        const bool branch_taken_0x27e7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e7ec) {
            ctx->pc = 0x27E7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E7ECu;
            // 0x27e7f0: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E8D0u;
            goto label_27e8d0;
        }
    }
    ctx->pc = 0x27E7F4u;
label_27e7f4:
    // 0x27e7f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x27e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_27e7f8:
    // 0x27e7f8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x27e7f8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e7fc:
    // 0x27e7fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27e7fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e800:
    // 0x27e800: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_27e804:
    if (ctx->pc == 0x27E804u) {
        ctx->pc = 0x27E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E800u;
        // 0x27e804: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E808u;
        goto label_27e808;
    }
    ctx->pc = 0x27E800u;
    {
        const bool branch_taken_0x27e800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E800u;
        // 0x27e804: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e800) {
            ctx->pc = 0x27E8CCu;
            goto label_27e8cc;
        }
    }
    ctx->pc = 0x27E808u;
label_27e808:
    // 0x27e808: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x27e808u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27e80c:
    // 0x27e80c: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x27e80cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_27e810:
    // 0x27e810: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27e810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e814:
    // 0x27e814: 0xe82021  addu        $a0, $a3, $t0
    ctx->pc = 0x27e814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_27e818:
    // 0x27e818: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x27e818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_27e81c:
    // 0x27e81c: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x27e81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_27e820:
    // 0x27e820: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_27e824:
    if (ctx->pc == 0x27E824u) {
        ctx->pc = 0x27E824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E820u;
        // 0x27e824: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E828u;
        goto label_27e828;
    }
    ctx->pc = 0x27E820u;
    {
        const bool branch_taken_0x27e820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E820u;
        // 0x27e824: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e820) {
            ctx->pc = 0x27E8B4u;
            goto label_27e8b4;
        }
    }
    ctx->pc = 0x27E828u;
label_27e828:
    // 0x27e828: 0x250b0001  addiu       $t3, $t0, 0x1
    ctx->pc = 0x27e828u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_27e82c:
    // 0x27e82c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_27e830:
    if (ctx->pc == 0x27E830u) {
        ctx->pc = 0x27E830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E82Cu;
        // 0x27e830: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E834u;
        goto label_27e834;
    }
    ctx->pc = 0x27E82Cu;
    {
        const bool branch_taken_0x27e82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E82Cu;
        // 0x27e830: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e82c) {
            ctx->pc = 0x27E8BCu;
            goto label_27e8bc;
        }
    }
    ctx->pc = 0x27E834u;
label_27e834:
    // 0x27e834: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x27e834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_27e838:
    // 0x27e838: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x27e838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27e83c:
    // 0x27e83c: 0xd62021  addu        $a0, $a2, $s6
    ctx->pc = 0x27e83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
label_27e840:
    // 0x27e840: 0x400013  mtlo        $v0
    ctx->pc = 0x27e840u;
    ctx->lo = GPR_U64(ctx, 2);
label_27e844:
    // 0x27e844: 0x71891800  madd        $v1, $t4, $t1
    ctx->pc = 0x27e844u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 9); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_27e848:
    // 0x27e848: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x27e848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27e84c:
    // 0x27e84c: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x27e84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_27e850:
    // 0x27e850: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x27e850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27e854:
    // 0x27e854: 0x304a00ff  andi        $t2, $v0, 0xFF
    ctx->pc = 0x27e854u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27e858:
    // 0x27e858: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x27e858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_27e85c:
    // 0x27e85c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x27e85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27e860:
    // 0x27e860: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x27e860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27e864:
    // 0x27e864: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x27e864u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_27e868:
    // 0x27e868: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x27e868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_27e86c:
    // 0x27e86c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27e86cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27e870:
    // 0x27e870: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x27e870u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_27e874:
    // 0x27e874: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x27e874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27e878:
    // 0x27e878: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x27e878u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_27e87c:
    // 0x27e87c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x27e87cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27e880:
    // 0x27e880: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x27e880u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_27e884:
    // 0x27e884: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x27e884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27e888:
    // 0x27e888: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x27e888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_27e88c:
    // 0x27e88c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x27e88cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_27e890:
    // 0x27e890: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x27e890u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_27e894:
    // 0x27e894: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x27e894u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_27e898:
    // 0x27e898: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x27e898u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_27e89c:
    // 0x27e89c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x27e89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_27e8a0:
    // 0x27e8a0: 0x142102b  sltu        $v0, $t2, $v0
    ctx->pc = 0x27e8a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27e8a4:
    // 0x27e8a4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_27e8a8:
    if (ctx->pc == 0x27E8A8u) {
        ctx->pc = 0x27E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E8A4u;
        // 0x27e8a8: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E8ACu;
        goto label_27e8ac;
    }
    ctx->pc = 0x27E8A4u;
    {
        const bool branch_taken_0x27e8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E8A4u;
        // 0x27e8a8: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e8a4) {
            ctx->pc = 0x27E848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e848;
        }
    }
    ctx->pc = 0x27E8ACu;
label_27e8ac:
    // 0x27e8ac: 0x10000003  b           . + 4 + (0x3 << 2)
label_27e8b0:
    if (ctx->pc == 0x27E8B0u) {
        ctx->pc = 0x27E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E8ACu;
        // 0x27e8b0: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E8B4u;
        goto label_27e8b4;
    }
    ctx->pc = 0x27E8ACu;
    {
        const bool branch_taken_0x27e8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E8ACu;
        // 0x27e8b0: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e8ac) {
            ctx->pc = 0x27E8BCu;
            goto label_27e8bc;
        }
    }
    ctx->pc = 0x27E8B4u;
label_27e8b4:
    // 0x27e8b4: 0x250b0001  addiu       $t3, $t0, 0x1
    ctx->pc = 0x27e8b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_27e8b8:
    // 0x27e8b8: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x27e8b8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_27e8bc:
    // 0x27e8bc: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x27e8bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_27e8c0:
    // 0x27e8c0: 0x105102b  sltu        $v0, $t0, $a1
    ctx->pc = 0x27e8c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_27e8c4:
    // 0x27e8c4: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_27e8c8:
    if (ctx->pc == 0x27E8C8u) {
        ctx->pc = 0x27E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E8C4u;
        // 0x27e8c8: 0xe82021  addu        $a0, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E8CCu;
        goto label_27e8cc;
    }
    ctx->pc = 0x27E8C4u;
    {
        const bool branch_taken_0x27e8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E8C4u;
        // 0x27e8c8: 0xe82021  addu        $a0, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e8c4) {
            ctx->pc = 0x27E818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e818;
        }
    }
    ctx->pc = 0x27E8CCu;
label_27e8cc:
    // 0x27e8cc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x27e8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_27e8d0:
    // 0x27e8d0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x27e8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_27e8d4:
    // 0x27e8d4: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
label_27e8d8:
    if (ctx->pc == 0x27E8D8u) {
        ctx->pc = 0x27E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E8D4u;
        // 0x27e8d8: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E8DCu;
        goto label_27e8dc;
    }
    ctx->pc = 0x27E8D4u;
    {
        const bool branch_taken_0x27e8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E8D4u;
        // 0x27e8d8: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e8d4) {
            ctx->pc = 0x27EAACu;
            goto label_27eaac;
        }
    }
    ctx->pc = 0x27E8DCu;
label_27e8dc:
    // 0x27e8dc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x27e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_27e8e0:
    // 0x27e8e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27e8e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e8e4:
    // 0x27e8e4: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
label_27e8e8:
    if (ctx->pc == 0x27E8E8u) {
        ctx->pc = 0x27E8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E8E4u;
        // 0x27e8e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E8ECu;
        goto label_27e8ec;
    }
    ctx->pc = 0x27E8E4u;
    {
        const bool branch_taken_0x27e8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E8E4u;
        // 0x27e8e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e8e4) {
            ctx->pc = 0x27EAACu;
            goto label_27eaac;
        }
    }
    ctx->pc = 0x27E8ECu;
label_27e8ec:
    // 0x27e8ec: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x27e8ecu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e8f0:
    // 0x27e8f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x27e8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27e8f4:
    // 0x27e8f4: 0x0  nop
    ctx->pc = 0x27e8f4u;
    // NOP
label_27e8f8:
    // 0x27e8f8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x27e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_27e8fc:
    // 0x27e8fc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x27e8fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_27e900:
    // 0x27e900: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x27e900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_27e904:
    // 0x27e904: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
label_27e908:
    if (ctx->pc == 0x27E908u) {
        ctx->pc = 0x27E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E904u;
        // 0x27e908: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E90Cu;
        goto label_27e90c;
    }
    ctx->pc = 0x27E904u;
    {
        const bool branch_taken_0x27e904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E904u;
        // 0x27e908: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e904) {
            ctx->pc = 0x27EA90u;
            goto label_27ea90;
        }
    }
    ctx->pc = 0x27E90Cu;
label_27e90c:
    // 0x27e90c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x27e90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_27e910:
    // 0x27e910: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
label_27e914:
    if (ctx->pc == 0x27E914u) {
        ctx->pc = 0x27E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E910u;
        // 0x27e914: 0x250b0001  addiu       $t3, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E918u;
        goto label_27e918;
    }
    ctx->pc = 0x27E910u;
    {
        const bool branch_taken_0x27e910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E910u;
        // 0x27e914: 0x250b0001  addiu       $t3, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e910) {
            ctx->pc = 0x27EA9Cu;
            goto label_27ea9c;
        }
    }
    ctx->pc = 0x27E918u;
label_27e918:
    // 0x27e918: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x27e918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_27e91c:
    // 0x27e91c: 0xc1080  sll         $v0, $t4, 2
    ctx->pc = 0x27e91cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_27e920:
    // 0x27e920: 0x2a0682d  daddu       $t5, $s5, $zero
    ctx->pc = 0x27e920u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27e924:
    // 0x27e924: 0x1de4821  addu        $t1, $t6, $fp
    ctx->pc = 0x27e924u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 30)));
label_27e928:
    // 0x27e928: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x27e928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27e92c:
    // 0x27e92c: 0x0  nop
    ctx->pc = 0x27e92cu;
    // NOP
label_27e930:
    // 0x27e930: 0x91240003  lbu         $a0, 0x3($t1)
    ctx->pc = 0x27e930u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
label_27e934:
    // 0x27e934: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x27e934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_27e938:
    // 0x27e938: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x27e938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_27e93c:
    // 0x27e93c: 0x304a00ff  andi        $t2, $v0, 0xFF
    ctx->pc = 0x27e93cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27e940:
    // 0x27e940: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27e940u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27e944:
    // 0x27e944: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27e944u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_27e948:
    // 0x27e948: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x27e948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_27e94c:
    // 0x27e94c: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x27e94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
label_27e950:
    // 0x27e950: 0x90e40003  lbu         $a0, 0x3($a3)
    ctx->pc = 0x27e950u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
label_27e954:
    // 0x27e954: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x27e954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27e958:
    // 0x27e958: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x27e958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_27e95c:
    // 0x27e95c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x27e95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27e960:
    // 0x27e960: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x27e960u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_27e964:
    // 0x27e964: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27e964u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_27e968:
    // 0x27e968: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x27e968u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_27e96c:
    // 0x27e96c: 0x90e50001  lbu         $a1, 0x1($a3)
    ctx->pc = 0x27e96cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_27e970:
    // 0x27e970: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x27e970u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
label_27e974:
    // 0x27e974: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x27e974u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_27e978:
    // 0x27e978: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27e978u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_27e97c:
    // 0x27e97c: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x27e97cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_27e980:
    // 0x27e980: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x27e980u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_27e984:
    // 0x27e984: 0xa0e40003  sb          $a0, 0x3($a3)
    ctx->pc = 0x27e984u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 4));
label_27e988:
    // 0x27e988: 0x91220002  lbu         $v0, 0x2($t1)
    ctx->pc = 0x27e988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
label_27e98c:
    // 0x27e98c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27e98cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27e990:
    // 0x27e990: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27e990u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_27e994:
    // 0x27e994: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27e994u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_27e998:
    // 0x27e998: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27e998u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_27e99c:
    // 0x27e99c: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x27e99cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_27e9a0:
    // 0x27e9a0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x27e9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27e9a4:
    // 0x27e9a4: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x27e9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
label_27e9a8:
    // 0x27e9a8: 0x91220001  lbu         $v0, 0x1($t1)
    ctx->pc = 0x27e9a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
label_27e9ac:
    // 0x27e9ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27e9acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27e9b0:
    // 0x27e9b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27e9b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_27e9b4:
    // 0x27e9b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27e9b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_27e9b8:
    // 0x27e9b8: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27e9b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_27e9bc:
    // 0x27e9bc: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x27e9bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_27e9c0:
    // 0x27e9c0: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x27e9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_27e9c4:
    // 0x27e9c4: 0xa0e50001  sb          $a1, 0x1($a3)
    ctx->pc = 0x27e9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 5));
label_27e9c8:
    // 0x27e9c8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x27e9c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_27e9cc:
    // 0x27e9cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27e9ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27e9d0:
    // 0x27e9d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27e9d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_27e9d4:
    // 0x27e9d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27e9d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_27e9d8:
    // 0x27e9d8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27e9d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_27e9dc:
    // 0x27e9dc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x27e9dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_27e9e0:
    // 0x27e9e0: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x27e9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_27e9e4:
    // 0x27e9e4: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x27e9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
label_27e9e8:
    // 0x27e9e8: 0x91220003  lbu         $v0, 0x3($t1)
    ctx->pc = 0x27e9e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
label_27e9ec:
    // 0x27e9ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27e9ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27e9f0:
    // 0x27e9f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27e9f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_27e9f4:
    // 0x27e9f4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x27e9f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_27e9f8:
    // 0x27e9f8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27e9f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27e9fc:
    // 0x27e9fc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27e9fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_27ea00:
    // 0x27ea00: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x27ea00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_27ea04:
    // 0x27ea04: 0xa0e40003  sb          $a0, 0x3($a3)
    ctx->pc = 0x27ea04u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 4));
label_27ea08:
    // 0x27ea08: 0x91220002  lbu         $v0, 0x2($t1)
    ctx->pc = 0x27ea08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
label_27ea0c:
    // 0x27ea0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ea0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27ea10:
    // 0x27ea10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27ea10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_27ea14:
    // 0x27ea14: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x27ea14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_27ea18:
    // 0x27ea18: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27ea18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27ea1c:
    // 0x27ea1c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27ea1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_27ea20:
    // 0x27ea20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27ea20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27ea24:
    // 0x27ea24: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x27ea24u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
label_27ea28:
    // 0x27ea28: 0x91220001  lbu         $v0, 0x1($t1)
    ctx->pc = 0x27ea28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
label_27ea2c:
    // 0x27ea2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ea2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27ea30:
    // 0x27ea30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27ea30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_27ea34:
    // 0x27ea34: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x27ea34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_27ea38:
    // 0x27ea38: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27ea38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27ea3c:
    // 0x27ea3c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27ea3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_27ea40:
    // 0x27ea40: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27ea40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_27ea44:
    // 0x27ea44: 0xa0e50001  sb          $a1, 0x1($a3)
    ctx->pc = 0x27ea44u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 5));
label_27ea48:
    // 0x27ea48: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x27ea48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_27ea4c:
    // 0x27ea4c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x27ea4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_27ea50:
    // 0x27ea50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ea50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27ea54:
    // 0x27ea54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27ea54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_27ea58:
    // 0x27ea58: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x27ea58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_27ea5c:
    // 0x27ea5c: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27ea5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_27ea60:
    // 0x27ea60: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x27ea60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_27ea64:
    // 0x27ea64: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x27ea64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_27ea68:
    // 0x27ea68: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x27ea68u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
label_27ea6c:
    // 0x27ea6c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x27ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27ea70:
    // 0x27ea70: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x27ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_27ea74:
    // 0x27ea74: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x27ea74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_27ea78:
    // 0x27ea78: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x27ea78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
label_27ea7c:
    // 0x27ea7c: 0x143182b  sltu        $v1, $t2, $v1
    ctx->pc = 0x27ea7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_27ea80:
    // 0x27ea80: 0x1460ffab  bnez        $v1, . + 4 + (-0x55 << 2)
label_27ea84:
    if (ctx->pc == 0x27EA84u) {
        ctx->pc = 0x27EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EA80u;
        // 0x27ea84: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EA88u;
        goto label_27ea88;
    }
    ctx->pc = 0x27EA80u;
    {
        const bool branch_taken_0x27ea80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EA80u;
        // 0x27ea84: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ea80) {
            ctx->pc = 0x27E930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e930;
        }
    }
    ctx->pc = 0x27EA88u;
label_27ea88:
    // 0x27ea88: 0x10000004  b           . + 4 + (0x4 << 2)
label_27ea8c:
    if (ctx->pc == 0x27EA8Cu) {
        ctx->pc = 0x27EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EA88u;
        // 0x27ea8c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EA90u;
        goto label_27ea90;
    }
    ctx->pc = 0x27EA88u;
    {
        const bool branch_taken_0x27ea88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EA88u;
        // 0x27ea8c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ea88) {
            ctx->pc = 0x27EA9Cu;
            goto label_27ea9c;
        }
    }
    ctx->pc = 0x27EA90u;
label_27ea90:
    // 0x27ea90: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x27ea90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_27ea94:
    // 0x27ea94: 0x250b0001  addiu       $t3, $t0, 0x1
    ctx->pc = 0x27ea94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_27ea98:
    // 0x27ea98: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x27ea98u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_27ea9c:
    // 0x27ea9c: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x27ea9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_27eaa0:
    // 0x27eaa0: 0x105102b  sltu        $v0, $t0, $a1
    ctx->pc = 0x27eaa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_27eaa4:
    // 0x27eaa4: 0x5440ff94  bnel        $v0, $zero, . + 4 + (-0x6C << 2)
label_27eaa8:
    if (ctx->pc == 0x27EAA8u) {
        ctx->pc = 0x27EAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EAA4u;
        // 0x27eaa8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EAACu;
        goto label_27eaac;
    }
    ctx->pc = 0x27EAA4u;
    {
        const bool branch_taken_0x27eaa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27eaa4) {
            ctx->pc = 0x27EAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27EAA4u;
            // 0x27eaa8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e8f8;
        }
    }
    ctx->pc = 0x27EAACu;
label_27eaac:
    // 0x27eaac: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x27eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_27eab0:
    // 0x27eab0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x27eab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_27eab4:
    // 0x27eab4: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_27eab8:
    if (ctx->pc == 0x27EAB8u) {
        ctx->pc = 0x27EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EAB4u;
        // 0x27eab8: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EABCu;
        goto label_27eabc;
    }
    ctx->pc = 0x27EAB4u;
    {
        const bool branch_taken_0x27eab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EAB4u;
        // 0x27eab8: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eab4) {
            ctx->pc = 0x27EB78u;
            goto label_27eb78;
        }
    }
    ctx->pc = 0x27EABCu;
label_27eabc:
    // 0x27eabc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x27eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_27eac0:
    // 0x27eac0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27eac0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27eac4:
    // 0x27eac4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_27eac8:
    if (ctx->pc == 0x27EAC8u) {
        ctx->pc = 0x27EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EAC4u;
        // 0x27eac8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EACCu;
        goto label_27eacc;
    }
    ctx->pc = 0x27EAC4u;
    {
        const bool branch_taken_0x27eac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EAC4u;
        // 0x27eac8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eac4) {
            ctx->pc = 0x27EB78u;
            goto label_27eb78;
        }
    }
    ctx->pc = 0x27EACCu;
label_27eacc:
    // 0x27eacc: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x27eaccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27ead0:
    // 0x27ead0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27ead0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27ead4:
    // 0x27ead4: 0xe82021  addu        $a0, $a3, $t0
    ctx->pc = 0x27ead4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_27ead8:
    // 0x27ead8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x27ead8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_27eadc:
    // 0x27eadc: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x27eadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_27eae0:
    // 0x27eae0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_27eae4:
    if (ctx->pc == 0x27EAE4u) {
        ctx->pc = 0x27EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EAE0u;
        // 0x27eae4: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EAE8u;
        goto label_27eae8;
    }
    ctx->pc = 0x27EAE0u;
    {
        const bool branch_taken_0x27eae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EAE0u;
        // 0x27eae4: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eae0) {
            ctx->pc = 0x27EB60u;
            goto label_27eb60;
        }
    }
    ctx->pc = 0x27EAE8u;
label_27eae8:
    // 0x27eae8: 0x250b0001  addiu       $t3, $t0, 0x1
    ctx->pc = 0x27eae8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_27eaec:
    // 0x27eaec: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_27eaf0:
    if (ctx->pc == 0x27EAF0u) {
        ctx->pc = 0x27EAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EAECu;
        // 0x27eaf0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EAF4u;
        goto label_27eaf4;
    }
    ctx->pc = 0x27EAECu;
    {
        const bool branch_taken_0x27eaec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EAECu;
        // 0x27eaf0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eaec) {
            ctx->pc = 0x27EB68u;
            goto label_27eb68;
        }
    }
    ctx->pc = 0x27EAF4u;
label_27eaf4:
    // 0x27eaf4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x27eaf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27eaf8:
    // 0x27eaf8: 0xc10c0  sll         $v0, $t4, 3
    ctx->pc = 0x27eaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_27eafc:
    // 0x27eafc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27eafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_27eb00:
    // 0x27eb00: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x27eb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_27eb04:
    // 0x27eb04: 0xcf2021  addu        $a0, $a2, $t7
    ctx->pc = 0x27eb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
label_27eb08:
    // 0x27eb08: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x27eb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27eb0c:
    // 0x27eb0c: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x27eb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_27eb10:
    // 0x27eb10: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x27eb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27eb14:
    // 0x27eb14: 0x304a00ff  andi        $t2, $v0, 0xFF
    ctx->pc = 0x27eb14u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27eb18:
    // 0x27eb18: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x27eb18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_27eb1c:
    // 0x27eb1c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x27eb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27eb20:
    // 0x27eb20: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x27eb20u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_27eb24:
    // 0x27eb24: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x27eb24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_27eb28:
    // 0x27eb28: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27eb28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27eb2c:
    // 0x27eb2c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x27eb2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_27eb30:
    // 0x27eb30: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x27eb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27eb34:
    // 0x27eb34: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x27eb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_27eb38:
    // 0x27eb38: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x27eb38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_27eb3c:
    // 0x27eb3c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x27eb3cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27eb40:
    // 0x27eb40: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x27eb40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_27eb44:
    // 0x27eb44: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x27eb44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_27eb48:
    // 0x27eb48: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x27eb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_27eb4c:
    // 0x27eb4c: 0x142102b  sltu        $v0, $t2, $v0
    ctx->pc = 0x27eb4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27eb50:
    // 0x27eb50: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_27eb54:
    if (ctx->pc == 0x27EB54u) {
        ctx->pc = 0x27EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB50u;
        // 0x27eb54: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EB58u;
        goto label_27eb58;
    }
    ctx->pc = 0x27EB50u;
    {
        const bool branch_taken_0x27eb50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB50u;
        // 0x27eb54: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb50) {
            ctx->pc = 0x27EB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27eb08;
        }
    }
    ctx->pc = 0x27EB58u;
label_27eb58:
    // 0x27eb58: 0x10000003  b           . + 4 + (0x3 << 2)
label_27eb5c:
    if (ctx->pc == 0x27EB5Cu) {
        ctx->pc = 0x27EB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB58u;
        // 0x27eb5c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EB60u;
        goto label_27eb60;
    }
    ctx->pc = 0x27EB58u;
    {
        const bool branch_taken_0x27eb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB58u;
        // 0x27eb5c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb58) {
            ctx->pc = 0x27EB68u;
            goto label_27eb68;
        }
    }
    ctx->pc = 0x27EB60u;
label_27eb60:
    // 0x27eb60: 0x250b0001  addiu       $t3, $t0, 0x1
    ctx->pc = 0x27eb60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_27eb64:
    // 0x27eb64: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x27eb64u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_27eb68:
    // 0x27eb68: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x27eb68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_27eb6c:
    // 0x27eb6c: 0x105102b  sltu        $v0, $t0, $a1
    ctx->pc = 0x27eb6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_27eb70:
    // 0x27eb70: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_27eb74:
    if (ctx->pc == 0x27EB74u) {
        ctx->pc = 0x27EB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB70u;
        // 0x27eb74: 0xe82021  addu        $a0, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EB78u;
        goto label_27eb78;
    }
    ctx->pc = 0x27EB70u;
    {
        const bool branch_taken_0x27eb70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB70u;
        // 0x27eb74: 0xe82021  addu        $a0, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb70) {
            ctx->pc = 0x27EAD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27ead8;
        }
    }
    ctx->pc = 0x27EB78u;
label_27eb78:
    // 0x27eb78: 0xc09599c  jal         func_256670
label_27eb7c:
    if (ctx->pc == 0x27EB7Cu) {
        ctx->pc = 0x27EB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EB78u;
        // 0x27eb7c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EB80u;
        goto label_27eb80;
    }
    ctx->pc = 0x27EB78u;
    SET_GPR_U32(ctx, 31, 0x27EB80u);
    ctx->pc = 0x27EB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EB78u;
    // 0x27eb7c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256670u, 0x27EB78u, 0x27EB80u)) {
        return;
    }
    ctx->pc = 0x27EB80u;
label_27eb80:
    // 0x27eb80: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x27eb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_27eb84:
    // 0x27eb84: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x27eb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_27eb88:
    // 0x27eb88: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x27eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_27eb8c:
    // 0x27eb8c: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x27eb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_27eb90:
    // 0x27eb90: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x27eb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_27eb94:
    // 0x27eb94: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x27eb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_27eb98:
    // 0x27eb98: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27eb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27eb9c:
    // 0x27eb9c: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x27eb9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_27eba0:
    // 0x27eba0: 0x1460febb  bnez        $v1, . + 4 + (-0x145 << 2)
label_27eba4:
    if (ctx->pc == 0x27EBA4u) {
        ctx->pc = 0x27EBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EBA0u;
        // 0x27eba4: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EBA8u;
        goto label_27eba8;
    }
    ctx->pc = 0x27EBA0u;
    {
        const bool branch_taken_0x27eba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EBA0u;
        // 0x27eba4: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eba0) {
            ctx->pc = 0x27E690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e690;
        }
    }
    ctx->pc = 0x27EBA8u;
label_27eba8:
    // 0x27eba8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x27eba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_27ebac:
    // 0x27ebac: 0x40f809  jalr        $v0
label_27ebb0:
    if (ctx->pc == 0x27EBB0u) {
        ctx->pc = 0x27EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EBACu;
        // 0x27ebb0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EBB4u;
        goto label_27ebb4;
    }
    ctx->pc = 0x27EBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27EBB4u);
        ctx->pc = 0x27EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EBACu;
        // 0x27ebb0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EBACu, 0x27EBB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27EBB4u;
label_27ebb4:
    // 0x27ebb4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x27ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_27ebb8:
    // 0x27ebb8: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x27ebb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_27ebbc:
    // 0x27ebbc: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x27ebbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_27ebc0:
    // 0x27ebc0: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x27ebc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_27ebc4:
    // 0x27ebc4: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x27ebc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_27ebc8:
    // 0x27ebc8: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x27ebc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27ebcc:
    // 0x27ebcc: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x27ebccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_27ebd0:
    // 0x27ebd0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x27ebd0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27ebd4:
    // 0x27ebd4: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x27ebd4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27ebd8:
    // 0x27ebd8: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x27ebd8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27ebdc:
    // 0x27ebdc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27ebdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_27ebe0:
    // 0x27ebe0: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x27ebe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27ebe4:
    // 0x27ebe4: 0x3e00008  jr          $ra
label_27ebe8:
    if (ctx->pc == 0x27EBE8u) {
        ctx->pc = 0x27EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EBE4u;
        // 0x27ebe8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27EBECu;
        goto label_27ebec;
    }
    ctx->pc = 0x27EBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EBE4u;
        // 0x27ebe8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EBECu;
label_27ebec:
    // 0x27ebec: 0x0  nop
    ctx->pc = 0x27ebecu;
    // NOP
    ctx->pc = 0x27ebf0u;
}
