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

// Function: sub_0029E908
// Address: 0x29e908 - 0x29eec8
void sub_0029E908_0x29e908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E908_0x29e908");
#endif

    switch (ctx->pc) {
        case 0x29e908u: goto label_29e908;
        case 0x29e90cu: goto label_29e90c;
        case 0x29e910u: goto label_29e910;
        case 0x29e914u: goto label_29e914;
        case 0x29e918u: goto label_29e918;
        case 0x29e91cu: goto label_29e91c;
        case 0x29e920u: goto label_29e920;
        case 0x29e924u: goto label_29e924;
        case 0x29e928u: goto label_29e928;
        case 0x29e92cu: goto label_29e92c;
        case 0x29e930u: goto label_29e930;
        case 0x29e934u: goto label_29e934;
        case 0x29e938u: goto label_29e938;
        case 0x29e93cu: goto label_29e93c;
        case 0x29e940u: goto label_29e940;
        case 0x29e944u: goto label_29e944;
        case 0x29e948u: goto label_29e948;
        case 0x29e94cu: goto label_29e94c;
        case 0x29e950u: goto label_29e950;
        case 0x29e954u: goto label_29e954;
        case 0x29e958u: goto label_29e958;
        case 0x29e95cu: goto label_29e95c;
        case 0x29e960u: goto label_29e960;
        case 0x29e964u: goto label_29e964;
        case 0x29e968u: goto label_29e968;
        case 0x29e96cu: goto label_29e96c;
        case 0x29e970u: goto label_29e970;
        case 0x29e974u: goto label_29e974;
        case 0x29e978u: goto label_29e978;
        case 0x29e97cu: goto label_29e97c;
        case 0x29e980u: goto label_29e980;
        case 0x29e984u: goto label_29e984;
        case 0x29e988u: goto label_29e988;
        case 0x29e98cu: goto label_29e98c;
        case 0x29e990u: goto label_29e990;
        case 0x29e994u: goto label_29e994;
        case 0x29e998u: goto label_29e998;
        case 0x29e99cu: goto label_29e99c;
        case 0x29e9a0u: goto label_29e9a0;
        case 0x29e9a4u: goto label_29e9a4;
        case 0x29e9a8u: goto label_29e9a8;
        case 0x29e9acu: goto label_29e9ac;
        case 0x29e9b0u: goto label_29e9b0;
        case 0x29e9b4u: goto label_29e9b4;
        case 0x29e9b8u: goto label_29e9b8;
        case 0x29e9bcu: goto label_29e9bc;
        case 0x29e9c0u: goto label_29e9c0;
        case 0x29e9c4u: goto label_29e9c4;
        case 0x29e9c8u: goto label_29e9c8;
        case 0x29e9ccu: goto label_29e9cc;
        case 0x29e9d0u: goto label_29e9d0;
        case 0x29e9d4u: goto label_29e9d4;
        case 0x29e9d8u: goto label_29e9d8;
        case 0x29e9dcu: goto label_29e9dc;
        case 0x29e9e0u: goto label_29e9e0;
        case 0x29e9e4u: goto label_29e9e4;
        case 0x29e9e8u: goto label_29e9e8;
        case 0x29e9ecu: goto label_29e9ec;
        case 0x29e9f0u: goto label_29e9f0;
        case 0x29e9f4u: goto label_29e9f4;
        case 0x29e9f8u: goto label_29e9f8;
        case 0x29e9fcu: goto label_29e9fc;
        case 0x29ea00u: goto label_29ea00;
        case 0x29ea04u: goto label_29ea04;
        case 0x29ea08u: goto label_29ea08;
        case 0x29ea0cu: goto label_29ea0c;
        case 0x29ea10u: goto label_29ea10;
        case 0x29ea14u: goto label_29ea14;
        case 0x29ea18u: goto label_29ea18;
        case 0x29ea1cu: goto label_29ea1c;
        case 0x29ea20u: goto label_29ea20;
        case 0x29ea24u: goto label_29ea24;
        case 0x29ea28u: goto label_29ea28;
        case 0x29ea2cu: goto label_29ea2c;
        case 0x29ea30u: goto label_29ea30;
        case 0x29ea34u: goto label_29ea34;
        case 0x29ea38u: goto label_29ea38;
        case 0x29ea3cu: goto label_29ea3c;
        case 0x29ea40u: goto label_29ea40;
        case 0x29ea44u: goto label_29ea44;
        case 0x29ea48u: goto label_29ea48;
        case 0x29ea4cu: goto label_29ea4c;
        case 0x29ea50u: goto label_29ea50;
        case 0x29ea54u: goto label_29ea54;
        case 0x29ea58u: goto label_29ea58;
        case 0x29ea5cu: goto label_29ea5c;
        case 0x29ea60u: goto label_29ea60;
        case 0x29ea64u: goto label_29ea64;
        case 0x29ea68u: goto label_29ea68;
        case 0x29ea6cu: goto label_29ea6c;
        case 0x29ea70u: goto label_29ea70;
        case 0x29ea74u: goto label_29ea74;
        case 0x29ea78u: goto label_29ea78;
        case 0x29ea7cu: goto label_29ea7c;
        case 0x29ea80u: goto label_29ea80;
        case 0x29ea84u: goto label_29ea84;
        case 0x29ea88u: goto label_29ea88;
        case 0x29ea8cu: goto label_29ea8c;
        case 0x29ea90u: goto label_29ea90;
        case 0x29ea94u: goto label_29ea94;
        case 0x29ea98u: goto label_29ea98;
        case 0x29ea9cu: goto label_29ea9c;
        case 0x29eaa0u: goto label_29eaa0;
        case 0x29eaa4u: goto label_29eaa4;
        case 0x29eaa8u: goto label_29eaa8;
        case 0x29eaacu: goto label_29eaac;
        case 0x29eab0u: goto label_29eab0;
        case 0x29eab4u: goto label_29eab4;
        case 0x29eab8u: goto label_29eab8;
        case 0x29eabcu: goto label_29eabc;
        case 0x29eac0u: goto label_29eac0;
        case 0x29eac4u: goto label_29eac4;
        case 0x29eac8u: goto label_29eac8;
        case 0x29eaccu: goto label_29eacc;
        case 0x29ead0u: goto label_29ead0;
        case 0x29ead4u: goto label_29ead4;
        case 0x29ead8u: goto label_29ead8;
        case 0x29eadcu: goto label_29eadc;
        case 0x29eae0u: goto label_29eae0;
        case 0x29eae4u: goto label_29eae4;
        case 0x29eae8u: goto label_29eae8;
        case 0x29eaecu: goto label_29eaec;
        case 0x29eaf0u: goto label_29eaf0;
        case 0x29eaf4u: goto label_29eaf4;
        case 0x29eaf8u: goto label_29eaf8;
        case 0x29eafcu: goto label_29eafc;
        case 0x29eb00u: goto label_29eb00;
        case 0x29eb04u: goto label_29eb04;
        case 0x29eb08u: goto label_29eb08;
        case 0x29eb0cu: goto label_29eb0c;
        case 0x29eb10u: goto label_29eb10;
        case 0x29eb14u: goto label_29eb14;
        case 0x29eb18u: goto label_29eb18;
        case 0x29eb1cu: goto label_29eb1c;
        case 0x29eb20u: goto label_29eb20;
        case 0x29eb24u: goto label_29eb24;
        case 0x29eb28u: goto label_29eb28;
        case 0x29eb2cu: goto label_29eb2c;
        case 0x29eb30u: goto label_29eb30;
        case 0x29eb34u: goto label_29eb34;
        case 0x29eb38u: goto label_29eb38;
        case 0x29eb3cu: goto label_29eb3c;
        case 0x29eb40u: goto label_29eb40;
        case 0x29eb44u: goto label_29eb44;
        case 0x29eb48u: goto label_29eb48;
        case 0x29eb4cu: goto label_29eb4c;
        case 0x29eb50u: goto label_29eb50;
        case 0x29eb54u: goto label_29eb54;
        case 0x29eb58u: goto label_29eb58;
        case 0x29eb5cu: goto label_29eb5c;
        case 0x29eb60u: goto label_29eb60;
        case 0x29eb64u: goto label_29eb64;
        case 0x29eb68u: goto label_29eb68;
        case 0x29eb6cu: goto label_29eb6c;
        case 0x29eb70u: goto label_29eb70;
        case 0x29eb74u: goto label_29eb74;
        case 0x29eb78u: goto label_29eb78;
        case 0x29eb7cu: goto label_29eb7c;
        case 0x29eb80u: goto label_29eb80;
        case 0x29eb84u: goto label_29eb84;
        case 0x29eb88u: goto label_29eb88;
        case 0x29eb8cu: goto label_29eb8c;
        case 0x29eb90u: goto label_29eb90;
        case 0x29eb94u: goto label_29eb94;
        case 0x29eb98u: goto label_29eb98;
        case 0x29eb9cu: goto label_29eb9c;
        case 0x29eba0u: goto label_29eba0;
        case 0x29eba4u: goto label_29eba4;
        case 0x29eba8u: goto label_29eba8;
        case 0x29ebacu: goto label_29ebac;
        case 0x29ebb0u: goto label_29ebb0;
        case 0x29ebb4u: goto label_29ebb4;
        case 0x29ebb8u: goto label_29ebb8;
        case 0x29ebbcu: goto label_29ebbc;
        case 0x29ebc0u: goto label_29ebc0;
        case 0x29ebc4u: goto label_29ebc4;
        case 0x29ebc8u: goto label_29ebc8;
        case 0x29ebccu: goto label_29ebcc;
        case 0x29ebd0u: goto label_29ebd0;
        case 0x29ebd4u: goto label_29ebd4;
        case 0x29ebd8u: goto label_29ebd8;
        case 0x29ebdcu: goto label_29ebdc;
        case 0x29ebe0u: goto label_29ebe0;
        case 0x29ebe4u: goto label_29ebe4;
        case 0x29ebe8u: goto label_29ebe8;
        case 0x29ebecu: goto label_29ebec;
        case 0x29ebf0u: goto label_29ebf0;
        case 0x29ebf4u: goto label_29ebf4;
        case 0x29ebf8u: goto label_29ebf8;
        case 0x29ebfcu: goto label_29ebfc;
        case 0x29ec00u: goto label_29ec00;
        case 0x29ec04u: goto label_29ec04;
        case 0x29ec08u: goto label_29ec08;
        case 0x29ec0cu: goto label_29ec0c;
        case 0x29ec10u: goto label_29ec10;
        case 0x29ec14u: goto label_29ec14;
        case 0x29ec18u: goto label_29ec18;
        case 0x29ec1cu: goto label_29ec1c;
        case 0x29ec20u: goto label_29ec20;
        case 0x29ec24u: goto label_29ec24;
        case 0x29ec28u: goto label_29ec28;
        case 0x29ec2cu: goto label_29ec2c;
        case 0x29ec30u: goto label_29ec30;
        case 0x29ec34u: goto label_29ec34;
        case 0x29ec38u: goto label_29ec38;
        case 0x29ec3cu: goto label_29ec3c;
        case 0x29ec40u: goto label_29ec40;
        case 0x29ec44u: goto label_29ec44;
        case 0x29ec48u: goto label_29ec48;
        case 0x29ec4cu: goto label_29ec4c;
        case 0x29ec50u: goto label_29ec50;
        case 0x29ec54u: goto label_29ec54;
        case 0x29ec58u: goto label_29ec58;
        case 0x29ec5cu: goto label_29ec5c;
        case 0x29ec60u: goto label_29ec60;
        case 0x29ec64u: goto label_29ec64;
        case 0x29ec68u: goto label_29ec68;
        case 0x29ec6cu: goto label_29ec6c;
        case 0x29ec70u: goto label_29ec70;
        case 0x29ec74u: goto label_29ec74;
        case 0x29ec78u: goto label_29ec78;
        case 0x29ec7cu: goto label_29ec7c;
        case 0x29ec80u: goto label_29ec80;
        case 0x29ec84u: goto label_29ec84;
        case 0x29ec88u: goto label_29ec88;
        case 0x29ec8cu: goto label_29ec8c;
        case 0x29ec90u: goto label_29ec90;
        case 0x29ec94u: goto label_29ec94;
        case 0x29ec98u: goto label_29ec98;
        case 0x29ec9cu: goto label_29ec9c;
        case 0x29eca0u: goto label_29eca0;
        case 0x29eca4u: goto label_29eca4;
        case 0x29eca8u: goto label_29eca8;
        case 0x29ecacu: goto label_29ecac;
        case 0x29ecb0u: goto label_29ecb0;
        case 0x29ecb4u: goto label_29ecb4;
        case 0x29ecb8u: goto label_29ecb8;
        case 0x29ecbcu: goto label_29ecbc;
        case 0x29ecc0u: goto label_29ecc0;
        case 0x29ecc4u: goto label_29ecc4;
        case 0x29ecc8u: goto label_29ecc8;
        case 0x29ecccu: goto label_29eccc;
        case 0x29ecd0u: goto label_29ecd0;
        case 0x29ecd4u: goto label_29ecd4;
        case 0x29ecd8u: goto label_29ecd8;
        case 0x29ecdcu: goto label_29ecdc;
        case 0x29ece0u: goto label_29ece0;
        case 0x29ece4u: goto label_29ece4;
        case 0x29ece8u: goto label_29ece8;
        case 0x29ececu: goto label_29ecec;
        case 0x29ecf0u: goto label_29ecf0;
        case 0x29ecf4u: goto label_29ecf4;
        case 0x29ecf8u: goto label_29ecf8;
        case 0x29ecfcu: goto label_29ecfc;
        case 0x29ed00u: goto label_29ed00;
        case 0x29ed04u: goto label_29ed04;
        case 0x29ed08u: goto label_29ed08;
        case 0x29ed0cu: goto label_29ed0c;
        case 0x29ed10u: goto label_29ed10;
        case 0x29ed14u: goto label_29ed14;
        case 0x29ed18u: goto label_29ed18;
        case 0x29ed1cu: goto label_29ed1c;
        case 0x29ed20u: goto label_29ed20;
        case 0x29ed24u: goto label_29ed24;
        case 0x29ed28u: goto label_29ed28;
        case 0x29ed2cu: goto label_29ed2c;
        case 0x29ed30u: goto label_29ed30;
        case 0x29ed34u: goto label_29ed34;
        case 0x29ed38u: goto label_29ed38;
        case 0x29ed3cu: goto label_29ed3c;
        case 0x29ed40u: goto label_29ed40;
        case 0x29ed44u: goto label_29ed44;
        case 0x29ed48u: goto label_29ed48;
        case 0x29ed4cu: goto label_29ed4c;
        case 0x29ed50u: goto label_29ed50;
        case 0x29ed54u: goto label_29ed54;
        case 0x29ed58u: goto label_29ed58;
        case 0x29ed5cu: goto label_29ed5c;
        case 0x29ed60u: goto label_29ed60;
        case 0x29ed64u: goto label_29ed64;
        case 0x29ed68u: goto label_29ed68;
        case 0x29ed6cu: goto label_29ed6c;
        case 0x29ed70u: goto label_29ed70;
        case 0x29ed74u: goto label_29ed74;
        case 0x29ed78u: goto label_29ed78;
        case 0x29ed7cu: goto label_29ed7c;
        case 0x29ed80u: goto label_29ed80;
        case 0x29ed84u: goto label_29ed84;
        case 0x29ed88u: goto label_29ed88;
        case 0x29ed8cu: goto label_29ed8c;
        case 0x29ed90u: goto label_29ed90;
        case 0x29ed94u: goto label_29ed94;
        case 0x29ed98u: goto label_29ed98;
        case 0x29ed9cu: goto label_29ed9c;
        case 0x29eda0u: goto label_29eda0;
        case 0x29eda4u: goto label_29eda4;
        case 0x29eda8u: goto label_29eda8;
        case 0x29edacu: goto label_29edac;
        case 0x29edb0u: goto label_29edb0;
        case 0x29edb4u: goto label_29edb4;
        case 0x29edb8u: goto label_29edb8;
        case 0x29edbcu: goto label_29edbc;
        case 0x29edc0u: goto label_29edc0;
        case 0x29edc4u: goto label_29edc4;
        case 0x29edc8u: goto label_29edc8;
        case 0x29edccu: goto label_29edcc;
        case 0x29edd0u: goto label_29edd0;
        case 0x29edd4u: goto label_29edd4;
        case 0x29edd8u: goto label_29edd8;
        case 0x29eddcu: goto label_29eddc;
        case 0x29ede0u: goto label_29ede0;
        case 0x29ede4u: goto label_29ede4;
        case 0x29ede8u: goto label_29ede8;
        case 0x29edecu: goto label_29edec;
        case 0x29edf0u: goto label_29edf0;
        case 0x29edf4u: goto label_29edf4;
        case 0x29edf8u: goto label_29edf8;
        case 0x29edfcu: goto label_29edfc;
        case 0x29ee00u: goto label_29ee00;
        case 0x29ee04u: goto label_29ee04;
        case 0x29ee08u: goto label_29ee08;
        case 0x29ee0cu: goto label_29ee0c;
        case 0x29ee10u: goto label_29ee10;
        case 0x29ee14u: goto label_29ee14;
        case 0x29ee18u: goto label_29ee18;
        case 0x29ee1cu: goto label_29ee1c;
        case 0x29ee20u: goto label_29ee20;
        case 0x29ee24u: goto label_29ee24;
        case 0x29ee28u: goto label_29ee28;
        case 0x29ee2cu: goto label_29ee2c;
        case 0x29ee30u: goto label_29ee30;
        case 0x29ee34u: goto label_29ee34;
        case 0x29ee38u: goto label_29ee38;
        case 0x29ee3cu: goto label_29ee3c;
        case 0x29ee40u: goto label_29ee40;
        case 0x29ee44u: goto label_29ee44;
        case 0x29ee48u: goto label_29ee48;
        case 0x29ee4cu: goto label_29ee4c;
        case 0x29ee50u: goto label_29ee50;
        case 0x29ee54u: goto label_29ee54;
        case 0x29ee58u: goto label_29ee58;
        case 0x29ee5cu: goto label_29ee5c;
        case 0x29ee60u: goto label_29ee60;
        case 0x29ee64u: goto label_29ee64;
        case 0x29ee68u: goto label_29ee68;
        case 0x29ee6cu: goto label_29ee6c;
        case 0x29ee70u: goto label_29ee70;
        case 0x29ee74u: goto label_29ee74;
        case 0x29ee78u: goto label_29ee78;
        case 0x29ee7cu: goto label_29ee7c;
        case 0x29ee80u: goto label_29ee80;
        case 0x29ee84u: goto label_29ee84;
        case 0x29ee88u: goto label_29ee88;
        case 0x29ee8cu: goto label_29ee8c;
        case 0x29ee90u: goto label_29ee90;
        case 0x29ee94u: goto label_29ee94;
        case 0x29ee98u: goto label_29ee98;
        case 0x29ee9cu: goto label_29ee9c;
        case 0x29eea0u: goto label_29eea0;
        case 0x29eea4u: goto label_29eea4;
        case 0x29eea8u: goto label_29eea8;
        case 0x29eeacu: goto label_29eeac;
        case 0x29eeb0u: goto label_29eeb0;
        case 0x29eeb4u: goto label_29eeb4;
        case 0x29eeb8u: goto label_29eeb8;
        case 0x29eebcu: goto label_29eebc;
        case 0x29eec0u: goto label_29eec0;
        case 0x29eec4u: goto label_29eec4;
        default: break;
    }

    ctx->pc = 0x29e908u;

label_29e908:
    // 0x29e908: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x29e908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_29e90c:
    // 0x29e90c: 0x3122000e  andi        $v0, $t1, 0xE
    ctx->pc = 0x29e90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)14);
label_29e910:
    // 0x29e910: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x29e910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_29e914:
    // 0x29e914: 0x91203  sra         $v0, $t1, 8
    ctx->pc = 0x29e914u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 8));
label_29e918:
    // 0x29e918: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x29e918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
label_29e91c:
    // 0x29e91c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x29e91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_29e920:
    // 0x29e920: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x29e920u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29e924:
    // 0x29e924: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29e924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_29e928:
    // 0x29e928: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x29e928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
label_29e92c:
    // 0x29e92c: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x29e92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
label_29e930:
    // 0x29e930: 0x26a3ffbb  addiu       $v1, $s5, -0x45
    ctx->pc = 0x29e930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967227));
label_29e934:
    // 0x29e934: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x29e934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_29e938:
    // 0x29e938: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x29e938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29e93c:
    // 0x29e93c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x29e93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_29e940:
    // 0x29e940: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29e940u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29e944:
    // 0x29e944: 0xafaa0020  sw          $t2, 0x20($sp)
    ctx->pc = 0x29e944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 10));
label_29e948:
    // 0x29e948: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x29e948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_29e94c:
    // 0x29e94c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x29e94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_29e950:
    // 0x29e950: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29e950u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e954:
    // 0x29e954: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x29e954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_29e958:
    // 0x29e958: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x29e958u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e95c:
    // 0x29e95c: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x29e95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
label_29e960:
    // 0x29e960: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x29e960u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e964:
    // 0x29e964: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x29e964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_29e968:
    // 0x29e968: 0x2c620023  sltiu       $v0, $v1, 0x23
    ctx->pc = 0x29e968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
label_29e96c:
    // 0x29e96c: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x29e96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_29e970:
    // 0x29e970: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x29e970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
label_29e974:
    // 0x29e974: 0xafa7001c  sw          $a3, 0x1C($sp)
    ctx->pc = 0x29e974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 7));
label_29e978:
    // 0x29e978: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_29e97c:
    if (ctx->pc == 0x29E97Cu) {
        ctx->pc = 0x29E97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E978u;
        // 0x29e97c: 0xafab0024  sw          $t3, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E980u;
        goto label_29e980;
    }
    ctx->pc = 0x29E978u;
    {
        const bool branch_taken_0x29e978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E978u;
        // 0x29e97c: 0xafab0024  sw          $t3, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e978) {
            ctx->pc = 0x29E9E4u;
            goto label_29e9e4;
        }
    }
    ctx->pc = 0x29E980u;
label_29e980:
    // 0x29e980: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x29e980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_29e984:
    // 0x29e984: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29e984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_29e988:
    // 0x29e988: 0x2442df00  addiu       $v0, $v0, -0x2100
    ctx->pc = 0x29e988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958848));
label_29e98c:
    // 0x29e98c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29e98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29e990:
    // 0x29e990: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x29e990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29e994:
    // 0x29e994: 0x800008  jr          $a0
label_29e998:
    if (ctx->pc == 0x29E998u) {
        ctx->pc = 0x29E99Cu;
        goto label_29e99c;
    }
    ctx->pc = 0x29E994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29E99Cu: goto label_29e99c;
            case 0x29E9A4u: goto label_29e9a4;
            case 0x29E9B8u: goto label_29e9b8;
            case 0x29E9E4u: goto label_29e9e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E994u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29E99Cu;
label_29e99c:
    // 0x29e99c: 0x10000011  b           . + 4 + (0x11 << 2)
label_29e9a0:
    if (ctx->pc == 0x29E9A0u) {
        ctx->pc = 0x29E9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E99Cu;
        // 0x29e9a0: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E9A4u;
        goto label_29e9a4;
    }
    ctx->pc = 0x29E99Cu;
    {
        const bool branch_taken_0x29e99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E99Cu;
        // 0x29e9a0: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e99c) {
            ctx->pc = 0x29E9E4u;
            goto label_29e9e4;
        }
    }
    ctx->pc = 0x29E9A4u;
label_29e9a4:
    // 0x29e9a4: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x29e9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29e9a8:
    // 0x29e9a8: 0x3a0203e7  xori        $v0, $s0, 0x3E7
    ctx->pc = 0x29e9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)999);
label_29e9ac:
    // 0x29e9ac: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x29e9acu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3));
label_29e9b0:
    // 0x29e9b0: 0x1000000b  b           . + 4 + (0xB << 2)
label_29e9b4:
    if (ctx->pc == 0x29E9B4u) {
        ctx->pc = 0x29E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E9B0u;
        // 0x29e9b4: 0x2a0b82d  daddu       $s7, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E9B8u;
        goto label_29e9b8;
    }
    ctx->pc = 0x29E9B0u;
    {
        const bool branch_taken_0x29e9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E9B0u;
        // 0x29e9b4: 0x2a0b82d  daddu       $s7, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e9b0) {
            ctx->pc = 0x29E9E0u;
            goto label_29e9e0;
        }
    }
    ctx->pc = 0x29E9B8u;
label_29e9b8:
    // 0x29e9b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29e9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29e9bc:
    // 0x29e9bc: 0x3aa30067  xori        $v1, $s5, 0x67
    ctx->pc = 0x29e9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)103);
label_29e9c0:
    // 0x29e9c0: 0x31240100  andi        $a0, $t1, 0x100
    ctx->pc = 0x29e9c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)256);
label_29e9c4:
    // 0x29e9c4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x29e9c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29e9c8:
    // 0x29e9c8: 0x24170045  addiu       $s7, $zero, 0x45
    ctx->pc = 0x29e9c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_29e9cc:
    // 0x29e9cc: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x29e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_29e9d0:
    // 0x29e9d0: 0x43b80a  movz        $s7, $v0, $v1
    ctx->pc = 0x29e9d0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2));
label_29e9d4:
    // 0x29e9d4: 0x4500b  movn        $t2, $zero, $a0
    ctx->pc = 0x29e9d4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0));
label_29e9d8:
    // 0x29e9d8: 0xb0800a  movz        $s0, $a1, $s0
    ctx->pc = 0x29e9d8u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5));
label_29e9dc:
    // 0x29e9dc: 0x24150067  addiu       $s5, $zero, 0x67
    ctx->pc = 0x29e9dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
label_29e9e0:
    // 0x29e9e0: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x29e9e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29e9e4:
    // 0x29e9e4: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x29e9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_29e9e8:
    // 0x29e9e8: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_29e9ec:
    if (ctx->pc == 0x29E9ECu) {
        ctx->pc = 0x29E9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E9E8u;
        // 0x29e9ec: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E9F0u;
        goto label_29e9f0;
    }
    ctx->pc = 0x29E9E8u;
    {
        const bool branch_taken_0x29e9e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x29E9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E9E8u;
        // 0x29e9ec: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e9e8) {
            ctx->pc = 0x29E9F8u;
            goto label_29e9f8;
        }
    }
    ctx->pc = 0x29E9F0u;
label_29e9f0:
    // 0x29e9f0: 0x3a820003  xori        $v0, $s4, 0x3
    ctx->pc = 0x29e9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)3);
label_29e9f4:
    // 0x29e9f4: 0x2a00b  movn        $s4, $zero, $v0
    ctx->pc = 0x29e9f4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0));
label_29e9f8:
    // 0x29e9f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x29e9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29e9fc:
    // 0x29e9fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29e9fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29ea00:
    // 0x29ea00: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x29ea00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_29ea04:
    // 0x29ea04: 0x27a80014  addiu       $t0, $sp, 0x14
    ctx->pc = 0x29ea04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_29ea08:
    // 0x29ea08: 0x27a90018  addiu       $t1, $sp, 0x18
    ctx->pc = 0x29ea08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_29ea0c:
    // 0x29ea0c: 0xc0a865c  jal         func_2A1970
label_29ea10:
    if (ctx->pc == 0x29EA10u) {
        ctx->pc = 0x29EA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA0Cu;
        // 0x29ea10: 0x7faa0040  sq          $t2, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EA14u;
        goto label_29ea14;
    }
    ctx->pc = 0x29EA0Cu;
    SET_GPR_U32(ctx, 31, 0x29EA14u);
    ctx->pc = 0x29EA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EA0Cu;
    // 0x29ea10: 0x7faa0040  sq          $t2, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A1970u, 0x29EA0Cu, 0x29EA14u)) {
        return;
    }
    ctx->pc = 0x29EA14u;
label_29ea14:
    // 0x29ea14: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x29ea14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_29ea18:
    // 0x29ea18: 0x27b6000c  addiu       $s6, $sp, 0xC
    ctx->pc = 0x29ea18u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_29ea1c:
    // 0x29ea1c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x29ea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_29ea20:
    // 0x29ea20: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x29ea20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29ea24:
    // 0x29ea24: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x29ea24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29ea28:
    // 0x29ea28: 0x7baa0040  lq          $t2, 0x40($sp)
    ctx->pc = 0x29ea28u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_29ea2c:
    // 0x29ea2c: 0x448823  subu        $s1, $v0, $a0
    ctx->pc = 0x29ea2cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_29ea30:
    // 0x29ea30: 0x1283002c  beq         $s4, $v1, . + 4 + (0x2C << 2)
label_29ea34:
    if (ctx->pc == 0x29EA34u) {
        ctx->pc = 0x29EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA30u;
        // 0x29ea34: 0x234800a  movz        $s0, $s1, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EA38u;
        goto label_29ea38;
    }
    ctx->pc = 0x29EA30u;
    {
        const bool branch_taken_0x29ea30 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x29EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA30u;
        // 0x29ea34: 0x234800a  movz        $s0, $s1, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ea30) {
            ctx->pc = 0x29EAE4u;
            goto label_29eae4;
        }
    }
    ctx->pc = 0x29EA38u;
label_29ea38:
    // 0x29ea38: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x29ea38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_29ea3c:
    // 0x29ea3c: 0x2402270f  addiu       $v0, $zero, 0x270F
    ctx->pc = 0x29ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
label_29ea40:
    // 0x29ea40: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
label_29ea44:
    if (ctx->pc == 0x29EA44u) {
        ctx->pc = 0x29EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA40u;
        // 0x29ea44: 0x24020067  addiu       $v0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EA48u;
        goto label_29ea48;
    }
    ctx->pc = 0x29EA40u;
    {
        const bool branch_taken_0x29ea40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA40u;
        // 0x29ea44: 0x24020067  addiu       $v0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ea40) {
            ctx->pc = 0x29EAECu;
            goto label_29eaec;
        }
    }
    ctx->pc = 0x29EA48u;
label_29ea48:
    // 0x29ea48: 0x12a20004  beq         $s5, $v0, . + 4 + (0x4 << 2)
label_29ea4c:
    if (ctx->pc == 0x29EA4Cu) {
        ctx->pc = 0x29EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA48u;
        // 0x29ea4c: 0x2464ffff  addiu       $a0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EA50u;
        goto label_29ea50;
    }
    ctx->pc = 0x29EA48u;
    {
        const bool branch_taken_0x29ea48 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x29EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA48u;
        // 0x29ea4c: 0x2464ffff  addiu       $a0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ea48) {
            ctx->pc = 0x29EA5Cu;
            goto label_29ea5c;
        }
    }
    ctx->pc = 0x29EA50u;
label_29ea50:
    // 0x29ea50: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x29ea50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_29ea54:
    // 0x29ea54: 0x16a20006  bne         $s5, $v0, . + 4 + (0x6 << 2)
label_29ea58:
    if (ctx->pc == 0x29EA58u) {
        ctx->pc = 0x29EA5Cu;
        goto label_29ea5c;
    }
    ctx->pc = 0x29EA54u;
    {
        const bool branch_taken_0x29ea54 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x29ea54) {
            ctx->pc = 0x29EA70u;
            goto label_29ea70;
        }
    }
    ctx->pc = 0x29EA5Cu;
label_29ea5c:
    // 0x29ea5c: 0x2882fffc  slti        $v0, $a0, -0x4
    ctx->pc = 0x29ea5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967292) ? 1 : 0);
label_29ea60:
    // 0x29ea60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_29ea64:
    if (ctx->pc == 0x29EA64u) {
        ctx->pc = 0x29EA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA60u;
        // 0x29ea64: 0x90102a  slt         $v0, $a0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EA68u;
        goto label_29ea68;
    }
    ctx->pc = 0x29EA60u;
    {
        const bool branch_taken_0x29ea60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA60u;
        // 0x29ea64: 0x90102a  slt         $v0, $a0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ea60) {
            ctx->pc = 0x29EA70u;
            goto label_29ea70;
        }
    }
    ctx->pc = 0x29EA68u;
label_29ea68:
    // 0x29ea68: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_29ea6c:
    if (ctx->pc == 0x29EA6Cu) {
        ctx->pc = 0x29EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA68u;
        // 0x29ea6c: 0x3a850001  xori        $a1, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EA70u;
        goto label_29ea70;
    }
    ctx->pc = 0x29EA68u;
    {
        const bool branch_taken_0x29ea68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA68u;
        // 0x29ea6c: 0x3a850001  xori        $a1, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ea68) {
            ctx->pc = 0x29EAF0u;
            goto label_29eaf0;
        }
    }
    ctx->pc = 0x29EA70u;
label_29ea70:
    // 0x29ea70: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_29ea74:
    if (ctx->pc == 0x29EA74u) {
        ctx->pc = 0x29EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA70u;
        // 0x29ea74: 0x2409002b  addiu       $t1, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EA78u;
        goto label_29ea78;
    }
    ctx->pc = 0x29EA70u;
    {
        const bool branch_taken_0x29ea70 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x29EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA70u;
        // 0x29ea74: 0x2409002b  addiu       $t1, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ea70) {
            ctx->pc = 0x29EA80u;
            goto label_29ea80;
        }
    }
    ctx->pc = 0x29EA78u;
label_29ea78:
    // 0x29ea78: 0x2409002d  addiu       $t1, $zero, 0x2D
    ctx->pc = 0x29ea78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_29ea7c:
    // 0x29ea7c: 0x42023  negu        $a0, $a0
    ctx->pc = 0x29ea7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_29ea80:
    // 0x29ea80: 0x3a850001  xori        $a1, $s4, 0x1
    ctx->pc = 0x29ea80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)1);
label_29ea84:
    // 0x29ea84: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x29ea84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_29ea88:
    // 0x29ea88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29ea88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29ea8c:
    // 0x29ea8c: 0x87001a  div         $zero, $a0, $a3
    ctx->pc = 0x29ea8cu;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29ea90:
    // 0x29ea90: 0x50e80001  beql        $a3, $t0, . + 4 + (0x1 << 2)
label_29ea94:
    if (ctx->pc == 0x29EA94u) {
        ctx->pc = 0x29EA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA90u;
        // 0x29ea94: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EA98u;
        goto label_29ea98;
    }
    ctx->pc = 0x29EA90u;
    {
        const bool branch_taken_0x29ea90 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        if (branch_taken_0x29ea90) {
            ctx->pc = 0x29EA94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29EA90u;
            // 0x29ea94: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29EA98u;
            goto label_29ea98;
        }
    }
    ctx->pc = 0x29EA98u;
label_29ea98:
    // 0x29ea98: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x29ea98u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_29ea9c:
    // 0x29ea9c: 0x1010  mfhi        $v0
    ctx->pc = 0x29ea9cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_29eaa0:
    // 0x29eaa0: 0x3012  mflo        $a2
    ctx->pc = 0x29eaa0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_29eaa4:
    // 0x29eaa4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x29eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_29eaa8:
    // 0x29eaa8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x29eaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29eaac:
    // 0x29eaac: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x29eaacu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
label_29eab0:
    // 0x29eab0: 0x28c3000a  slti        $v1, $a2, 0xA
    ctx->pc = 0x29eab0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
label_29eab4:
    // 0x29eab4: 0x50e80001  beql        $a3, $t0, . + 4 + (0x1 << 2)
label_29eab8:
    if (ctx->pc == 0x29EAB8u) {
        ctx->pc = 0x29EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EAB4u;
        // 0x29eab8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EABCu;
        goto label_29eabc;
    }
    ctx->pc = 0x29EAB4u;
    {
        const bool branch_taken_0x29eab4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        if (branch_taken_0x29eab4) {
            ctx->pc = 0x29EAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29EAB4u;
            // 0x29eab8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29EABCu;
            goto label_29eabc;
        }
    }
    ctx->pc = 0x29EABCu;
label_29eabc:
    // 0x29eabc: 0x5060fff4  beql        $v1, $zero, . + 4 + (-0xC << 2)
label_29eac0:
    if (ctx->pc == 0x29EAC0u) {
        ctx->pc = 0x29EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EABCu;
        // 0x29eac0: 0x87001a  div         $zero, $a0, $a3 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EAC4u;
        goto label_29eac4;
    }
    ctx->pc = 0x29EABCu;
    {
        const bool branch_taken_0x29eabc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29eabc) {
            ctx->pc = 0x29EAC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29EABCu;
            // 0x29eac0: 0x87001a  div         $zero, $a0, $a3 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x29EA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29ea90;
        }
    }
    ctx->pc = 0x29EAC4u;
label_29eac4:
    // 0x29eac4: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x29eac4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_29eac8:
    // 0x29eac8: 0x24c20030  addiu       $v0, $a2, 0x30
    ctx->pc = 0x29eac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_29eacc:
    // 0x29eacc: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x29eaccu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
label_29ead0:
    // 0x29ead0: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x29ead0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_29ead4:
    // 0x29ead4: 0xa2c90000  sb          $t1, 0x0($s6)
    ctx->pc = 0x29ead4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 9));
label_29ead8:
    // 0x29ead8: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x29ead8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_29eadc:
    // 0x29eadc: 0x10000004  b           . + 4 + (0x4 << 2)
label_29eae0:
    if (ctx->pc == 0x29EAE0u) {
        ctx->pc = 0x29EAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EADCu;
        // 0x29eae0: 0xa2d70000  sb          $s7, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EAE4u;
        goto label_29eae4;
    }
    ctx->pc = 0x29EADCu;
    {
        const bool branch_taken_0x29eadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EADCu;
        // 0x29eae0: 0xa2d70000  sb          $s7, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eadc) {
            ctx->pc = 0x29EAF0u;
            goto label_29eaf0;
        }
    }
    ctx->pc = 0x29EAE4u;
label_29eae4:
    // 0x29eae4: 0x10000002  b           . + 4 + (0x2 << 2)
label_29eae8:
    if (ctx->pc == 0x29EAE8u) {
        ctx->pc = 0x29EAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EAE4u;
        // 0x29eae8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EAECu;
        goto label_29eaec;
    }
    ctx->pc = 0x29EAE4u;
    {
        const bool branch_taken_0x29eae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EAE4u;
        // 0x29eae8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eae4) {
            ctx->pc = 0x29EAF0u;
            goto label_29eaf0;
        }
    }
    ctx->pc = 0x29EAECu;
label_29eaec:
    // 0x29eaec: 0x3a850001  xori        $a1, $s4, 0x1
    ctx->pc = 0x29eaecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)1);
label_29eaf0:
    // 0x29eaf0: 0x26c2fff4  addiu       $v0, $s6, -0xC
    ctx->pc = 0x29eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967284));
label_29eaf4:
    // 0x29eaf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29eaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29eaf8:
    // 0x29eaf8: 0x3a2f023  subu        $fp, $sp, $v0
    ctx->pc = 0x29eaf8u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_29eafc:
    // 0x29eafc: 0x13c00002  beqz        $fp, . + 4 + (0x2 << 2)
label_29eb00:
    if (ctx->pc == 0x29EB00u) {
        ctx->pc = 0x29EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EAFCu;
        // 0x29eb00: 0x65800a  movz        $s0, $v1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EB04u;
        goto label_29eb04;
    }
    ctx->pc = 0x29EAFCu;
    {
        const bool branch_taken_0x29eafc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EAFCu;
        // 0x29eb00: 0x65800a  movz        $s0, $v1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eafc) {
            ctx->pc = 0x29EB08u;
            goto label_29eb08;
        }
    }
    ctx->pc = 0x29EB04u;
label_29eb04:
    // 0x29eb04: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x29eb04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_29eb08:
    // 0x29eb08: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29eb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_29eb0c:
    // 0x29eb0c: 0x2402270f  addiu       $v0, $zero, 0x270F
    ctx->pc = 0x29eb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
label_29eb10:
    // 0x29eb10: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_29eb14:
    if (ctx->pc == 0x29EB14u) {
        ctx->pc = 0x29EB18u;
        goto label_29eb18;
    }
    ctx->pc = 0x29EB10u;
    {
        const bool branch_taken_0x29eb10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x29eb10) {
            ctx->pc = 0x29EB28u;
            goto label_29eb28;
        }
    }
    ctx->pc = 0x29EB18u;
label_29eb18:
    // 0x29eb18: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x29eb18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
label_29eb1c:
    // 0x29eb1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29eb1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29eb20:
    // 0x29eb20: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x29eb20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_29eb24:
    // 0x29eb24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29eb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29eb28:
    // 0x29eb28: 0x1540000e  bnez        $t2, . + 4 + (0xE << 2)
label_29eb2c:
    if (ctx->pc == 0x29EB2Cu) {
        ctx->pc = 0x29EB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB28u;
        // 0x29eb2c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EB30u;
        goto label_29eb30;
    }
    ctx->pc = 0x29EB28u;
    {
        const bool branch_taken_0x29eb28 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB28u;
        // 0x29eb2c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eb28) {
            ctx->pc = 0x29EB64u;
            goto label_29eb64;
        }
    }
    ctx->pc = 0x29EB30u;
label_29eb30:
    // 0x29eb30: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x29eb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_29eb34:
    // 0x29eb34: 0x16a20006  bne         $s5, $v0, . + 4 + (0x6 << 2)
label_29eb38:
    if (ctx->pc == 0x29EB38u) {
        ctx->pc = 0x29EB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB34u;
        // 0x29eb38: 0x91102a  slt         $v0, $a0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EB3Cu;
        goto label_29eb3c;
    }
    ctx->pc = 0x29EB34u;
    {
        const bool branch_taken_0x29eb34 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x29EB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB34u;
        // 0x29eb38: 0x91102a  slt         $v0, $a0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eb34) {
            ctx->pc = 0x29EB50u;
            goto label_29eb50;
        }
    }
    ctx->pc = 0x29EB3Cu;
label_29eb3c:
    // 0x29eb3c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_29eb40:
    if (ctx->pc == 0x29EB40u) {
        ctx->pc = 0x29EB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB3Cu;
        // 0x29eb40: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EB44u;
        goto label_29eb44;
    }
    ctx->pc = 0x29EB3Cu;
    {
        const bool branch_taken_0x29eb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB3Cu;
        // 0x29eb40: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eb3c) {
            ctx->pc = 0x29EB64u;
            goto label_29eb64;
        }
    }
    ctx->pc = 0x29EB44u;
label_29eb44:
    // 0x29eb44: 0x2241023  subu        $v0, $s1, $a0
    ctx->pc = 0x29eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_29eb48:
    // 0x29eb48: 0x10000006  b           . + 4 + (0x6 << 2)
label_29eb4c:
    if (ctx->pc == 0x29EB4Cu) {
        ctx->pc = 0x29EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB48u;
        // 0x29eb4c: 0x2e2b823  subu        $s7, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EB50u;
        goto label_29eb50;
    }
    ctx->pc = 0x29EB48u;
    {
        const bool branch_taken_0x29eb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB48u;
        // 0x29eb4c: 0x2e2b823  subu        $s7, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eb48) {
            ctx->pc = 0x29EB64u;
            goto label_29eb64;
        }
    }
    ctx->pc = 0x29EB50u;
label_29eb50:
    // 0x29eb50: 0x17c00004  bnez        $fp, . + 4 + (0x4 << 2)
label_29eb54:
    if (ctx->pc == 0x29EB54u) {
        ctx->pc = 0x29EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB50u;
        // 0x29eb54: 0x211b823  subu        $s7, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EB58u;
        goto label_29eb58;
    }
    ctx->pc = 0x29EB50u;
    {
        const bool branch_taken_0x29eb50 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB50u;
        // 0x29eb54: 0x211b823  subu        $s7, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eb50) {
            ctx->pc = 0x29EB64u;
            goto label_29eb64;
        }
    }
    ctx->pc = 0x29EB58u;
label_29eb58:
    // 0x29eb58: 0x2041823  subu        $v1, $s0, $a0
    ctx->pc = 0x29eb58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_29eb5c:
    // 0x29eb5c: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x29eb5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29eb60:
    // 0x29eb60: 0x62b80a  movz        $s7, $v1, $v0
    ctx->pc = 0x29eb60u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3));
label_29eb64:
    // 0x29eb64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29eb68:
    // 0x29eb68: 0x57102a  slt         $v0, $v0, $s7
    ctx->pc = 0x29eb68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_29eb6c:
    // 0x29eb6c: 0x2b80a  movz        $s7, $zero, $v0
    ctx->pc = 0x29eb6cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0));
label_29eb70:
    // 0x29eb70: 0x16e00004  bnez        $s7, . + 4 + (0x4 << 2)
label_29eb74:
    if (ctx->pc == 0x29EB74u) {
        ctx->pc = 0x29EB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB70u;
        // 0x29eb74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EB78u;
        goto label_29eb78;
    }
    ctx->pc = 0x29EB70u;
    {
        const bool branch_taken_0x29eb70 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB70u;
        // 0x29eb74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eb70) {
            ctx->pc = 0x29EB84u;
            goto label_29eb84;
        }
    }
    ctx->pc = 0x29EB78u;
label_29eb78:
    // 0x29eb78: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x29eb78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29eb7c:
    // 0x29eb7c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_29eb80:
    if (ctx->pc == 0x29EB80u) {
        ctx->pc = 0x29EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB7Cu;
        // 0x29eb80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EB84u;
        goto label_29eb84;
    }
    ctx->pc = 0x29EB7Cu;
    {
        const bool branch_taken_0x29eb7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB7Cu;
        // 0x29eb80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eb7c) {
            ctx->pc = 0x29EB88u;
            goto label_29eb88;
        }
    }
    ctx->pc = 0x29EB84u;
label_29eb84:
    // 0x29eb84: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x29eb84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_29eb88:
    // 0x29eb88: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x29eb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_29eb8c:
    // 0x29eb8c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_29eb90:
    if (ctx->pc == 0x29EB90u) {
        ctx->pc = 0x29EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB8Cu;
        // 0x29eb90: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EB94u;
        goto label_29eb94;
    }
    ctx->pc = 0x29EB8Cu;
    {
        const bool branch_taken_0x29eb8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB8Cu;
        // 0x29eb90: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eb8c) {
            ctx->pc = 0x29EBA4u;
            goto label_29eba4;
        }
    }
    ctx->pc = 0x29EB94u;
label_29eb94:
    // 0x29eb94: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x29eb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_29eb98:
    // 0x29eb98: 0x2414002d  addiu       $s4, $zero, 0x2D
    ctx->pc = 0x29eb98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_29eb9c:
    // 0x29eb9c: 0x10000009  b           . + 4 + (0x9 << 2)
label_29eba0:
    if (ctx->pc == 0x29EBA0u) {
        ctx->pc = 0x29EBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB9Cu;
        // 0x29eba0: 0x2a00a  movz        $s4, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EBA4u;
        goto label_29eba4;
    }
    ctx->pc = 0x29EB9Cu;
    {
        const bool branch_taken_0x29eb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB9Cu;
        // 0x29eba0: 0x2a00a  movz        $s4, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eb9c) {
            ctx->pc = 0x29EBC4u;
            goto label_29ebc4;
        }
    }
    ctx->pc = 0x29EBA4u;
label_29eba4:
    // 0x29eba4: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x29eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_29eba8:
    // 0x29eba8: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
label_29ebac:
    if (ctx->pc == 0x29EBACu) {
        ctx->pc = 0x29EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EBA8u;
        // 0x29ebac: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EBB0u;
        goto label_29ebb0;
    }
    ctx->pc = 0x29EBA8u;
    {
        const bool branch_taken_0x29eba8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x29EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EBA8u;
        // 0x29ebac: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eba8) {
            ctx->pc = 0x29EBB8u;
            goto label_29ebb8;
        }
    }
    ctx->pc = 0x29EBB0u;
label_29ebb0:
    // 0x29ebb0: 0x10000002  b           . + 4 + (0x2 << 2)
label_29ebb4:
    if (ctx->pc == 0x29EBB4u) {
        ctx->pc = 0x29EBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EBB0u;
        // 0x29ebb4: 0x2414002b  addiu       $s4, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EBB8u;
        goto label_29ebb8;
    }
    ctx->pc = 0x29EBB0u;
    {
        const bool branch_taken_0x29ebb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EBB0u;
        // 0x29ebb4: 0x2414002b  addiu       $s4, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ebb0) {
            ctx->pc = 0x29EBBCu;
            goto label_29ebbc;
        }
    }
    ctx->pc = 0x29EBB8u;
label_29ebb8:
    // 0x29ebb8: 0x24140020  addiu       $s4, $zero, 0x20
    ctx->pc = 0x29ebb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_29ebbc:
    // 0x29ebbc: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x29ebbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_29ebc0:
    // 0x29ebc0: 0x43a00b  movn        $s4, $v0, $v1
    ctx->pc = 0x29ebc0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2));
label_29ebc4:
    // 0x29ebc4: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
label_29ebc8:
    if (ctx->pc == 0x29EBC8u) {
        ctx->pc = 0x29EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EBC4u;
        // 0x29ebc8: 0x27c30001  addiu       $v1, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EBCCu;
        goto label_29ebcc;
    }
    ctx->pc = 0x29EBC4u;
    {
        const bool branch_taken_0x29ebc4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EBC4u;
        // 0x29ebc8: 0x27c30001  addiu       $v1, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ebc4) {
            ctx->pc = 0x29EBE0u;
            goto label_29ebe0;
        }
    }
    ctx->pc = 0x29EBCCu;
label_29ebcc:
    // 0x29ebcc: 0x2f11021  addu        $v0, $s7, $s1
    ctx->pc = 0x29ebccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
label_29ebd0:
    // 0x29ebd0: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x29ebd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_29ebd4:
    // 0x29ebd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29ebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29ebd8:
    // 0x29ebd8: 0x10000005  b           . + 4 + (0x5 << 2)
label_29ebdc:
    if (ctx->pc == 0x29EBDCu) {
        ctx->pc = 0x29EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EBD8u;
        // 0x29ebdc: 0x451821  addu        $v1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EBE0u;
        goto label_29ebe0;
    }
    ctx->pc = 0x29EBD8u;
    {
        const bool branch_taken_0x29ebd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EBD8u;
        // 0x29ebdc: 0x451821  addu        $v1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ebd8) {
            ctx->pc = 0x29EBF0u;
            goto label_29ebf0;
        }
    }
    ctx->pc = 0x29EBE0u;
label_29ebe0:
    // 0x29ebe0: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x29ebe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_29ebe4:
    // 0x29ebe4: 0x2f11821  addu        $v1, $s7, $s1
    ctx->pc = 0x29ebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
label_29ebe8:
    // 0x29ebe8: 0xbe1021  addu        $v0, $a1, $fp
    ctx->pc = 0x29ebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
label_29ebec:
    // 0x29ebec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29ebecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29ebf0:
    // 0x29ebf0: 0x224102a  slt         $v0, $s1, $a0
    ctx->pc = 0x29ebf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_29ebf4:
    // 0x29ebf4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_29ebf8:
    if (ctx->pc == 0x29EBF8u) {
        ctx->pc = 0x29EBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EBF4u;
        // 0x29ebf8: 0x911023  subu        $v0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EBFCu;
        goto label_29ebfc;
    }
    ctx->pc = 0x29EBF4u;
    {
        const bool branch_taken_0x29ebf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EBF4u;
        // 0x29ebf8: 0x911023  subu        $v0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ebf4) {
            ctx->pc = 0x29EC04u;
            goto label_29ec04;
        }
    }
    ctx->pc = 0x29EBFCu;
label_29ebfc:
    // 0x29ebfc: 0x10000005  b           . + 4 + (0x5 << 2)
label_29ec00:
    if (ctx->pc == 0x29EC00u) {
        ctx->pc = 0x29EC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EBFCu;
        // 0x29ec00: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EC04u;
        goto label_29ec04;
    }
    ctx->pc = 0x29EBFCu;
    {
        const bool branch_taken_0x29ebfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EBFCu;
        // 0x29ec00: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ebfc) {
            ctx->pc = 0x29EC14u;
            goto label_29ec14;
        }
    }
    ctx->pc = 0x29EC04u;
label_29ec04:
    // 0x29ec04: 0x5c800003  bgtzl       $a0, . + 4 + (0x3 << 2)
label_29ec08:
    if (ctx->pc == 0x29EC08u) {
        ctx->pc = 0x29EC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC04u;
        // 0x29ec08: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EC0Cu;
        goto label_29ec0c;
    }
    ctx->pc = 0x29EC04u;
    {
        const bool branch_taken_0x29ec04 = (GPR_S64(ctx, 4) > 0);
        if (branch_taken_0x29ec04) {
            ctx->pc = 0x29EC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29EC04u;
            // 0x29ec08: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29EC14u;
            goto label_29ec14;
        }
    }
    ctx->pc = 0x29EC0Cu;
label_29ec0c:
    // 0x29ec0c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x29ec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_29ec10:
    // 0x29ec10: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x29ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_29ec14:
    // 0x29ec14: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x29ec14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_29ec18:
    // 0x29ec18: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x29ec18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29ec1c:
    // 0x29ec1c: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x29ec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_29ec20:
    // 0x29ec20: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x29ec20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_29ec24:
    // 0x29ec24: 0x62a80b  movn        $s5, $v1, $v0
    ctx->pc = 0x29ec24u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3));
label_29ec28:
    // 0x29ec28: 0x1aa0000d  blez        $s5, . + 4 + (0xD << 2)
label_29ec2c:
    if (ctx->pc == 0x29EC2Cu) {
        ctx->pc = 0x29EC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC28u;
        // 0x29ec2c: 0x8fa50028  lw          $a1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EC30u;
        goto label_29ec30;
    }
    ctx->pc = 0x29EC28u;
    {
        const bool branch_taken_0x29ec28 = (GPR_S64(ctx, 21) <= 0);
        ctx->pc = 0x29EC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC28u;
        // 0x29ec2c: 0x8fa50028  lw          $a1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ec28) {
            ctx->pc = 0x29EC60u;
            goto label_29ec60;
        }
    }
    ctx->pc = 0x29EC30u;
label_29ec30:
    // 0x29ec30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29ec30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29ec34:
    // 0x29ec34: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
label_29ec38:
    if (ctx->pc == 0x29EC38u) {
        ctx->pc = 0x29EC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC34u;
        // 0x29ec38: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EC3Cu;
        goto label_29ec3c;
    }
    ctx->pc = 0x29EC34u;
    {
        const bool branch_taken_0x29ec34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x29EC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC34u;
        // 0x29ec38: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ec34) {
            ctx->pc = 0x29EC60u;
            goto label_29ec60;
        }
    }
    ctx->pc = 0x29EC3Cu;
label_29ec3c:
    // 0x29ec3c: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
label_29ec40:
    if (ctx->pc == 0x29EC40u) {
        ctx->pc = 0x29EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC3Cu;
        // 0x29ec40: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EC44u;
        goto label_29ec44;
    }
    ctx->pc = 0x29EC3Cu;
    {
        const bool branch_taken_0x29ec3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x29EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC3Cu;
        // 0x29ec40: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ec3c) {
            ctx->pc = 0x29EC60u;
            goto label_29ec60;
        }
    }
    ctx->pc = 0x29EC44u;
label_29ec44:
    // 0x29ec44: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x29ec44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29ec48:
    // 0x29ec48: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x29ec48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29ec4c:
    // 0x29ec4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29ec4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29ec50:
    // 0x29ec50: 0xc0a7954  jal         func_29E550
label_29ec54:
    if (ctx->pc == 0x29EC54u) {
        ctx->pc = 0x29EC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC50u;
        // 0x29ec54: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EC58u;
        goto label_29ec58;
    }
    ctx->pc = 0x29EC50u;
    SET_GPR_U32(ctx, 31, 0x29EC58u);
    ctx->pc = 0x29EC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EC50u;
    // 0x29ec54: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29E550u, 0x29EC50u, 0x29EC58u)) {
        return;
    }
    ctx->pc = 0x29EC58u;
label_29ec58:
    // 0x29ec58: 0x1450008e  bne         $v0, $s0, . + 4 + (0x8E << 2)
label_29ec5c:
    if (ctx->pc == 0x29EC5Cu) {
        ctx->pc = 0x29EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC58u;
        // 0x29ec5c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EC60u;
        goto label_29ec60;
    }
    ctx->pc = 0x29EC58u;
    {
        const bool branch_taken_0x29ec58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x29EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC58u;
        // 0x29ec5c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ec58) {
            ctx->pc = 0x29EE94u;
            goto label_29ee94;
        }
    }
    ctx->pc = 0x29EC60u;
label_29ec60:
    // 0x29ec60: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_29ec64:
    if (ctx->pc == 0x29EC64u) {
        ctx->pc = 0x29EC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC60u;
        // 0x29ec64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EC68u;
        goto label_29ec68;
    }
    ctx->pc = 0x29EC60u;
    {
        const bool branch_taken_0x29ec60 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC60u;
        // 0x29ec64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ec60) {
            ctx->pc = 0x29EC78u;
            goto label_29ec78;
        }
    }
    ctx->pc = 0x29EC68u;
label_29ec68:
    // 0x29ec68: 0xc0a7bd0  jal         func_29EF40
label_29ec6c:
    if (ctx->pc == 0x29EC6Cu) {
        ctx->pc = 0x29EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC68u;
        // 0x29ec6c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EC70u;
        goto label_29ec70;
    }
    ctx->pc = 0x29EC68u;
    SET_GPR_U32(ctx, 31, 0x29EC70u);
    ctx->pc = 0x29EC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EC68u;
    // 0x29ec6c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EF40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EF40u, 0x29EC68u, 0x29EC70u)) {
        return;
    }
    ctx->pc = 0x29EC70u;
label_29ec70:
    // 0x29ec70: 0x4400087  bltz        $v0, . + 4 + (0x87 << 2)
label_29ec74:
    if (ctx->pc == 0x29EC74u) {
        ctx->pc = 0x29EC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC70u;
        // 0x29ec74: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EC78u;
        goto label_29ec78;
    }
    ctx->pc = 0x29EC70u;
    {
        const bool branch_taken_0x29ec70 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x29EC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC70u;
        // 0x29ec74: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ec70) {
            ctx->pc = 0x29EE90u;
            goto label_29ee90;
        }
    }
    ctx->pc = 0x29EC78u;
label_29ec78:
    // 0x29ec78: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x29ec78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_29ec7c:
    // 0x29ec7c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x29ec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_29ec80:
    // 0x29ec80: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_29ec84:
    if (ctx->pc == 0x29EC84u) {
        ctx->pc = 0x29EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC80u;
        // 0x29ec84: 0x8fb00010  lw          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EC88u;
        goto label_29ec88;
    }
    ctx->pc = 0x29EC80u;
    {
        const bool branch_taken_0x29ec80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC80u;
        // 0x29ec84: 0x8fb00010  lw          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ec80) {
            ctx->pc = 0x29ECB4u;
            goto label_29ecb4;
        }
    }
    ctx->pc = 0x29EC88u;
label_29ec88:
    // 0x29ec88: 0x1aa00009  blez        $s5, . + 4 + (0x9 << 2)
label_29ec8c:
    if (ctx->pc == 0x29EC8Cu) {
        ctx->pc = 0x29EC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC88u;
        // 0x29ec8c: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EC90u;
        goto label_29ec90;
    }
    ctx->pc = 0x29EC88u;
    {
        const bool branch_taken_0x29ec88 = (GPR_S64(ctx, 21) <= 0);
        ctx->pc = 0x29EC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC88u;
        // 0x29ec8c: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ec88) {
            ctx->pc = 0x29ECB0u;
            goto label_29ecb0;
        }
    }
    ctx->pc = 0x29EC90u;
label_29ec90:
    // 0x29ec90: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x29ec90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_29ec94:
    // 0x29ec94: 0x2759821  addu        $s3, $s3, $s5
    ctx->pc = 0x29ec94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
label_29ec98:
    // 0x29ec98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29ec98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29ec9c:
    // 0x29ec9c: 0xc0a7954  jal         func_29E550
label_29eca0:
    if (ctx->pc == 0x29ECA0u) {
        ctx->pc = 0x29ECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC9Cu;
        // 0x29eca0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ECA4u;
        goto label_29eca4;
    }
    ctx->pc = 0x29EC9Cu;
    SET_GPR_U32(ctx, 31, 0x29ECA4u);
    ctx->pc = 0x29ECA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EC9Cu;
    // 0x29eca0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29E550u, 0x29EC9Cu, 0x29ECA4u)) {
        return;
    }
    ctx->pc = 0x29ECA4u;
label_29eca4:
    // 0x29eca4: 0x1450007b  bne         $v0, $s0, . + 4 + (0x7B << 2)
label_29eca8:
    if (ctx->pc == 0x29ECA8u) {
        ctx->pc = 0x29ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ECA4u;
        // 0x29eca8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ECACu;
        goto label_29ecac;
    }
    ctx->pc = 0x29ECA4u;
    {
        const bool branch_taken_0x29eca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x29ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ECA4u;
        // 0x29eca8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eca4) {
            ctx->pc = 0x29EE94u;
            goto label_29ee94;
        }
    }
    ctx->pc = 0x29ECACu;
label_29ecac:
    // 0x29ecac: 0x0  nop
    ctx->pc = 0x29ecacu;
    // NOP
label_29ecb0:
    // 0x29ecb0: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x29ecb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_29ecb4:
    // 0x29ecb4: 0x1a000036  blez        $s0, . + 4 + (0x36 << 2)
label_29ecb8:
    if (ctx->pc == 0x29ECB8u) {
        ctx->pc = 0x29ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ECB4u;
        // 0x29ecb8: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ECBCu;
        goto label_29ecbc;
    }
    ctx->pc = 0x29ECB4u;
    {
        const bool branch_taken_0x29ecb4 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x29ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ECB4u;
        // 0x29ecb8: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ecb4) {
            ctx->pc = 0x29ED90u;
            goto label_29ed90;
        }
    }
    ctx->pc = 0x29ECBCu;
label_29ecbc:
    // 0x29ecbc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_29ecc0:
    if (ctx->pc == 0x29ECC0u) {
        ctx->pc = 0x29ECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ECBCu;
        // 0x29ecc0: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ECC4u;
        goto label_29ecc4;
    }
    ctx->pc = 0x29ECBCu;
    {
        const bool branch_taken_0x29ecbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29ECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ECBCu;
        // 0x29ecc0: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ecbc) {
            ctx->pc = 0x29ECF0u;
            goto label_29ecf0;
        }
    }
    ctx->pc = 0x29ECC4u;
label_29ecc4:
    // 0x29ecc4: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x29ecc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_29ecc8:
    // 0x29ecc8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x29ecc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29eccc:
    // 0x29eccc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29ecccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29ecd0:
    // 0x29ecd0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x29ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_29ecd4:
    // 0x29ecd4: 0x40f809  jalr        $v0
label_29ecd8:
    if (ctx->pc == 0x29ECD8u) {
        ctx->pc = 0x29ECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ECD4u;
        // 0x29ecd8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ECDCu;
        goto label_29ecdc;
    }
    ctx->pc = 0x29ECD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29ECDCu);
        ctx->pc = 0x29ECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ECD4u;
        // 0x29ecd8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29ECD4u, 0x29ECDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29ECDCu;
label_29ecdc:
    // 0x29ecdc: 0x1450006c  bne         $v0, $s0, . + 4 + (0x6C << 2)
label_29ece0:
    if (ctx->pc == 0x29ECE0u) {
        ctx->pc = 0x29ECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ECDCu;
        // 0x29ece0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ECE4u;
        goto label_29ece4;
    }
    ctx->pc = 0x29ECDCu;
    {
        const bool branch_taken_0x29ecdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x29ECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ECDCu;
        // 0x29ece0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ecdc) {
            ctx->pc = 0x29EE90u;
            goto label_29ee90;
        }
    }
    ctx->pc = 0x29ECE4u;
label_29ece4:
    // 0x29ece4: 0x10000014  b           . + 4 + (0x14 << 2)
label_29ece8:
    if (ctx->pc == 0x29ECE8u) {
        ctx->pc = 0x29ECECu;
        goto label_29ecec;
    }
    ctx->pc = 0x29ECE4u;
    {
        const bool branch_taken_0x29ece4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ece4) {
            ctx->pc = 0x29ED38u;
            goto label_29ed38;
        }
    }
    ctx->pc = 0x29ECECu;
label_29ecec:
    // 0x29ecec: 0x0  nop
    ctx->pc = 0x29ececu;
    // NOP
label_29ecf0:
    // 0x29ecf0: 0x2719821  addu        $s3, $s3, $s1
    ctx->pc = 0x29ecf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_29ecf4:
    // 0x29ecf4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x29ecf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29ecf8:
    // 0x29ecf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29ecf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29ecfc:
    // 0x29ecfc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x29ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_29ed00:
    // 0x29ed00: 0x40f809  jalr        $v0
label_29ed04:
    if (ctx->pc == 0x29ED04u) {
        ctx->pc = 0x29ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED00u;
        // 0x29ed04: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ED08u;
        goto label_29ed08;
    }
    ctx->pc = 0x29ED00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29ED08u);
        ctx->pc = 0x29ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED00u;
        // 0x29ed04: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29ED00u, 0x29ED08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29ED08u;
label_29ed08:
    // 0x29ed08: 0x14510061  bne         $v0, $s1, . + 4 + (0x61 << 2)
label_29ed0c:
    if (ctx->pc == 0x29ED0Cu) {
        ctx->pc = 0x29ED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED08u;
        // 0x29ed0c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ED10u;
        goto label_29ed10;
    }
    ctx->pc = 0x29ED08u;
    {
        const bool branch_taken_0x29ed08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x29ED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED08u;
        // 0x29ed0c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ed08) {
            ctx->pc = 0x29EE90u;
            goto label_29ee90;
        }
    }
    ctx->pc = 0x29ED10u;
label_29ed10:
    // 0x29ed10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29ed10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29ed14:
    // 0x29ed14: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x29ed14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_29ed18:
    // 0x29ed18: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x29ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_29ed1c:
    // 0x29ed1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29ed1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29ed20:
    // 0x29ed20: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x29ed20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_29ed24:
    // 0x29ed24: 0xc0a7954  jal         func_29E550
label_29ed28:
    if (ctx->pc == 0x29ED28u) {
        ctx->pc = 0x29ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED24u;
        // 0x29ed28: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ED2Cu;
        goto label_29ed2c;
    }
    ctx->pc = 0x29ED24u;
    SET_GPR_U32(ctx, 31, 0x29ED2Cu);
    ctx->pc = 0x29ED28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ED24u;
    // 0x29ed28: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29E550u, 0x29ED24u, 0x29ED2Cu)) {
        return;
    }
    ctx->pc = 0x29ED2Cu;
label_29ed2c:
    // 0x29ed2c: 0x14500058  bne         $v0, $s0, . + 4 + (0x58 << 2)
label_29ed30:
    if (ctx->pc == 0x29ED30u) {
        ctx->pc = 0x29ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED2Cu;
        // 0x29ed30: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ED34u;
        goto label_29ed34;
    }
    ctx->pc = 0x29ED2Cu;
    {
        const bool branch_taken_0x29ed2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x29ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED2Cu;
        // 0x29ed30: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ed2c) {
            ctx->pc = 0x29EE90u;
            goto label_29ee90;
        }
    }
    ctx->pc = 0x29ED34u;
label_29ed34:
    // 0x29ed34: 0x0  nop
    ctx->pc = 0x29ed34u;
    // NOP
label_29ed38:
    // 0x29ed38: 0x10800033  beqz        $a0, . + 4 + (0x33 << 2)
label_29ed3c:
    if (ctx->pc == 0x29ED3Cu) {
        ctx->pc = 0x29ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED38u;
        // 0x29ed3c: 0x2404002e  addiu       $a0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ED40u;
        goto label_29ed40;
    }
    ctx->pc = 0x29ED38u;
    {
        const bool branch_taken_0x29ed38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED38u;
        // 0x29ed3c: 0x2404002e  addiu       $a0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ed38) {
            ctx->pc = 0x29EE08u;
            goto label_29ee08;
        }
    }
    ctx->pc = 0x29ED40u;
label_29ed40:
    // 0x29ed40: 0xc0a7bd0  jal         func_29EF40
label_29ed44:
    if (ctx->pc == 0x29ED44u) {
        ctx->pc = 0x29ED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED40u;
        // 0x29ed44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ED48u;
        goto label_29ed48;
    }
    ctx->pc = 0x29ED40u;
    SET_GPR_U32(ctx, 31, 0x29ED48u);
    ctx->pc = 0x29ED44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ED40u;
    // 0x29ed44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EF40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EF40u, 0x29ED40u, 0x29ED48u)) {
        return;
    }
    ctx->pc = 0x29ED48u;
label_29ed48:
    // 0x29ed48: 0x4400051  bltz        $v0, . + 4 + (0x51 << 2)
label_29ed4c:
    if (ctx->pc == 0x29ED4Cu) {
        ctx->pc = 0x29ED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED48u;
        // 0x29ed4c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ED50u;
        goto label_29ed50;
    }
    ctx->pc = 0x29ED48u;
    {
        const bool branch_taken_0x29ed48 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x29ED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED48u;
        // 0x29ed4c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ed48) {
            ctx->pc = 0x29EE90u;
            goto label_29ee90;
        }
    }
    ctx->pc = 0x29ED50u;
label_29ed50:
    // 0x29ed50: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x29ed50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29ed54:
    // 0x29ed54: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_29ed58:
    if (ctx->pc == 0x29ED58u) {
        ctx->pc = 0x29ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED54u;
        // 0x29ed58: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ED5Cu;
        goto label_29ed5c;
    }
    ctx->pc = 0x29ED54u;
    {
        const bool branch_taken_0x29ed54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED54u;
        // 0x29ed58: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ed54) {
            ctx->pc = 0x29EE08u;
            goto label_29ee08;
        }
    }
    ctx->pc = 0x29ED5Cu;
label_29ed5c:
    // 0x29ed5c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29ed60:
    // 0x29ed60: 0x2248023  subu        $s0, $s1, $a0
    ctx->pc = 0x29ed60u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_29ed64:
    // 0x29ed64: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x29ed64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_29ed68:
    // 0x29ed68: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x29ed68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_29ed6c:
    // 0x29ed6c: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x29ed6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_29ed70:
    // 0x29ed70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29ed70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29ed74:
    // 0x29ed74: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x29ed74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_29ed78:
    // 0x29ed78: 0x40f809  jalr        $v0
label_29ed7c:
    if (ctx->pc == 0x29ED7Cu) {
        ctx->pc = 0x29ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED78u;
        // 0x29ed7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ED80u;
        goto label_29ed80;
    }
    ctx->pc = 0x29ED78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29ED80u);
        ctx->pc = 0x29ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED78u;
        // 0x29ed7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29ED78u, 0x29ED80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29ED80u;
label_29ed80:
    // 0x29ed80: 0x14500043  bne         $v0, $s0, . + 4 + (0x43 << 2)
label_29ed84:
    if (ctx->pc == 0x29ED84u) {
        ctx->pc = 0x29ED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED80u;
        // 0x29ed84: 0x2e0802d  daddu       $s0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ED88u;
        goto label_29ed88;
    }
    ctx->pc = 0x29ED80u;
    {
        const bool branch_taken_0x29ed80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x29ED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED80u;
        // 0x29ed84: 0x2e0802d  daddu       $s0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ed80) {
            ctx->pc = 0x29EE90u;
            goto label_29ee90;
        }
    }
    ctx->pc = 0x29ED88u;
label_29ed88:
    // 0x29ed88: 0x10000021  b           . + 4 + (0x21 << 2)
label_29ed8c:
    if (ctx->pc == 0x29ED8Cu) {
        ctx->pc = 0x29ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED88u;
        // 0x29ed8c: 0x2779821  addu        $s3, $s3, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ED90u;
        goto label_29ed90;
    }
    ctx->pc = 0x29ED88u;
    {
        const bool branch_taken_0x29ed88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED88u;
        // 0x29ed8c: 0x2779821  addu        $s3, $s3, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ed88) {
            ctx->pc = 0x29EE10u;
            goto label_29ee10;
        }
    }
    ctx->pc = 0x29ED90u;
label_29ed90:
    // 0x29ed90: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x29ed90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_29ed94:
    // 0x29ed94: 0xc0a7bd0  jal         func_29EF40
label_29ed98:
    if (ctx->pc == 0x29ED98u) {
        ctx->pc = 0x29ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED94u;
        // 0x29ed98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ED9Cu;
        goto label_29ed9c;
    }
    ctx->pc = 0x29ED94u;
    SET_GPR_U32(ctx, 31, 0x29ED9Cu);
    ctx->pc = 0x29ED98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ED94u;
    // 0x29ed98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EF40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EF40u, 0x29ED94u, 0x29ED9Cu)) {
        return;
    }
    ctx->pc = 0x29ED9Cu;
label_29ed9c:
    // 0x29ed9c: 0x440003c  bltz        $v0, . + 4 + (0x3C << 2)
label_29eda0:
    if (ctx->pc == 0x29EDA0u) {
        ctx->pc = 0x29EDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED9Cu;
        // 0x29eda0: 0x8fa3002c  lw          $v1, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EDA4u;
        goto label_29eda4;
    }
    ctx->pc = 0x29ED9Cu;
    {
        const bool branch_taken_0x29ed9c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x29EDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED9Cu;
        // 0x29eda0: 0x8fa3002c  lw          $v1, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ed9c) {
            ctx->pc = 0x29EE90u;
            goto label_29ee90;
        }
    }
    ctx->pc = 0x29EDA4u;
label_29eda4:
    // 0x29eda4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_29eda8:
    if (ctx->pc == 0x29EDA8u) {
        ctx->pc = 0x29EDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EDA4u;
        // 0x29eda8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EDACu;
        goto label_29edac;
    }
    ctx->pc = 0x29EDA4u;
    {
        const bool branch_taken_0x29eda4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EDA4u;
        // 0x29eda8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eda4) {
            ctx->pc = 0x29EE08u;
            goto label_29ee08;
        }
    }
    ctx->pc = 0x29EDACu;
label_29edac:
    // 0x29edac: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x29edacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_29edb0:
    // 0x29edb0: 0xc0a7bd0  jal         func_29EF40
label_29edb4:
    if (ctx->pc == 0x29EDB4u) {
        ctx->pc = 0x29EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EDB0u;
        // 0x29edb4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EDB8u;
        goto label_29edb8;
    }
    ctx->pc = 0x29EDB0u;
    SET_GPR_U32(ctx, 31, 0x29EDB8u);
    ctx->pc = 0x29EDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EDB0u;
    // 0x29edb4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EF40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EF40u, 0x29EDB0u, 0x29EDB8u)) {
        return;
    }
    ctx->pc = 0x29EDB8u;
label_29edb8:
    // 0x29edb8: 0x4400035  bltz        $v0, . + 4 + (0x35 << 2)
label_29edbc:
    if (ctx->pc == 0x29EDBCu) {
        ctx->pc = 0x29EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EDB8u;
        // 0x29edbc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EDC0u;
        goto label_29edc0;
    }
    ctx->pc = 0x29EDB8u;
    {
        const bool branch_taken_0x29edb8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x29EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EDB8u;
        // 0x29edbc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29edb8) {
            ctx->pc = 0x29EE90u;
            goto label_29ee90;
        }
    }
    ctx->pc = 0x29EDC0u;
label_29edc0:
    // 0x29edc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_29edc4:
    // 0x29edc4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x29edc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_29edc8:
    // 0x29edc8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x29edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_29edcc:
    // 0x29edcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29edccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29edd0:
    // 0x29edd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29edd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29edd4:
    // 0x29edd4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x29edd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_29edd8:
    // 0x29edd8: 0xc0a7954  jal         func_29E550
label_29eddc:
    if (ctx->pc == 0x29EDDCu) {
        ctx->pc = 0x29EDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EDD8u;
        // 0x29eddc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EDE0u;
        goto label_29ede0;
    }
    ctx->pc = 0x29EDD8u;
    SET_GPR_U32(ctx, 31, 0x29EDE0u);
    ctx->pc = 0x29EDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EDD8u;
    // 0x29eddc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29E550u, 0x29EDD8u, 0x29EDE0u)) {
        return;
    }
    ctx->pc = 0x29EDE0u;
label_29ede0:
    // 0x29ede0: 0x1450002b  bne         $v0, $s0, . + 4 + (0x2B << 2)
label_29ede4:
    if (ctx->pc == 0x29EDE4u) {
        ctx->pc = 0x29EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EDE0u;
        // 0x29ede4: 0x2719821  addu        $s3, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EDE8u;
        goto label_29ede8;
    }
    ctx->pc = 0x29EDE0u;
    {
        const bool branch_taken_0x29ede0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x29EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EDE0u;
        // 0x29ede4: 0x2719821  addu        $s3, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ede0) {
            ctx->pc = 0x29EE90u;
            goto label_29ee90;
        }
    }
    ctx->pc = 0x29EDE8u;
label_29ede8:
    // 0x29ede8: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x29ede8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_29edec:
    // 0x29edec: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x29edecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29edf0:
    // 0x29edf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29edf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29edf4:
    // 0x29edf4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x29edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_29edf8:
    // 0x29edf8: 0x40f809  jalr        $v0
label_29edfc:
    if (ctx->pc == 0x29EDFCu) {
        ctx->pc = 0x29EDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EDF8u;
        // 0x29edfc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EE00u;
        goto label_29ee00;
    }
    ctx->pc = 0x29EDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29EE00u);
        ctx->pc = 0x29EDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EDF8u;
        // 0x29edfc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EDF8u, 0x29EE00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29EE00u;
label_29ee00:
    // 0x29ee00: 0x14510024  bne         $v0, $s1, . + 4 + (0x24 << 2)
label_29ee04:
    if (ctx->pc == 0x29EE04u) {
        ctx->pc = 0x29EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE00u;
        // 0x29ee04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EE08u;
        goto label_29ee08;
    }
    ctx->pc = 0x29EE00u;
    {
        const bool branch_taken_0x29ee00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x29EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE00u;
        // 0x29ee04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ee00) {
            ctx->pc = 0x29EE94u;
            goto label_29ee94;
        }
    }
    ctx->pc = 0x29EE08u;
label_29ee08:
    // 0x29ee08: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x29ee08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_29ee0c:
    // 0x29ee0c: 0x2779821  addu        $s3, $s3, $s7
    ctx->pc = 0x29ee0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
label_29ee10:
    // 0x29ee10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29ee10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29ee14:
    // 0x29ee14: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x29ee14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_29ee18:
    // 0x29ee18: 0xc0a7954  jal         func_29E550
label_29ee1c:
    if (ctx->pc == 0x29EE1Cu) {
        ctx->pc = 0x29EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE18u;
        // 0x29ee1c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EE20u;
        goto label_29ee20;
    }
    ctx->pc = 0x29EE18u;
    SET_GPR_U32(ctx, 31, 0x29EE20u);
    ctx->pc = 0x29EE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EE18u;
    // 0x29ee1c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29E550u, 0x29EE18u, 0x29EE20u)) {
        return;
    }
    ctx->pc = 0x29EE20u;
label_29ee20:
    // 0x29ee20: 0x1450001c  bne         $v0, $s0, . + 4 + (0x1C << 2)
label_29ee24:
    if (ctx->pc == 0x29EE24u) {
        ctx->pc = 0x29EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE20u;
        // 0x29ee24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EE28u;
        goto label_29ee28;
    }
    ctx->pc = 0x29EE20u;
    {
        const bool branch_taken_0x29ee20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x29EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE20u;
        // 0x29ee24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ee20) {
            ctx->pc = 0x29EE94u;
            goto label_29ee94;
        }
    }
    ctx->pc = 0x29EE28u;
label_29ee28:
    // 0x29ee28: 0x13c00009  beqz        $fp, . + 4 + (0x9 << 2)
label_29ee2c:
    if (ctx->pc == 0x29EE2Cu) {
        ctx->pc = 0x29EE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE28u;
        // 0x29ee2c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EE30u;
        goto label_29ee30;
    }
    ctx->pc = 0x29EE28u;
    {
        const bool branch_taken_0x29ee28 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE28u;
        // 0x29ee2c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ee28) {
            ctx->pc = 0x29EE50u;
            goto label_29ee50;
        }
    }
    ctx->pc = 0x29EE30u;
label_29ee30:
    // 0x29ee30: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x29ee30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_29ee34:
    // 0x29ee34: 0x27e9821  addu        $s3, $s3, $fp
    ctx->pc = 0x29ee34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 30)));
label_29ee38:
    // 0x29ee38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29ee38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29ee3c:
    // 0x29ee3c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x29ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_29ee40:
    // 0x29ee40: 0x40f809  jalr        $v0
label_29ee44:
    if (ctx->pc == 0x29EE44u) {
        ctx->pc = 0x29EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE40u;
        // 0x29ee44: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EE48u;
        goto label_29ee48;
    }
    ctx->pc = 0x29EE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29EE48u);
        ctx->pc = 0x29EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE40u;
        // 0x29ee44: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EE40u, 0x29EE48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29EE48u;
label_29ee48:
    // 0x29ee48: 0x145e0012  bne         $v0, $fp, . + 4 + (0x12 << 2)
label_29ee4c:
    if (ctx->pc == 0x29EE4Cu) {
        ctx->pc = 0x29EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE48u;
        // 0x29ee4c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EE50u;
        goto label_29ee50;
    }
    ctx->pc = 0x29EE48u;
    {
        const bool branch_taken_0x29ee48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x29EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE48u;
        // 0x29ee4c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ee48) {
            ctx->pc = 0x29EE94u;
            goto label_29ee94;
        }
    }
    ctx->pc = 0x29EE50u;
label_29ee50:
    // 0x29ee50: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x29ee50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_29ee54:
    // 0x29ee54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29ee54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29ee58:
    // 0x29ee58: 0x1482000e  bne         $a0, $v0, . + 4 + (0xE << 2)
label_29ee5c:
    if (ctx->pc == 0x29EE5Cu) {
        ctx->pc = 0x29EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE58u;
        // 0x29ee5c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EE60u;
        goto label_29ee60;
    }
    ctx->pc = 0x29EE58u;
    {
        const bool branch_taken_0x29ee58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x29EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE58u;
        // 0x29ee5c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ee58) {
            ctx->pc = 0x29EE94u;
            goto label_29ee94;
        }
    }
    ctx->pc = 0x29EE60u;
label_29ee60:
    // 0x29ee60: 0x1aa0000c  blez        $s5, . + 4 + (0xC << 2)
label_29ee64:
    if (ctx->pc == 0x29EE64u) {
        ctx->pc = 0x29EE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE60u;
        // 0x29ee64: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EE68u;
        goto label_29ee68;
    }
    ctx->pc = 0x29EE60u;
    {
        const bool branch_taken_0x29ee60 = (GPR_S64(ctx, 21) <= 0);
        ctx->pc = 0x29EE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE60u;
        // 0x29ee64: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ee60) {
            ctx->pc = 0x29EE94u;
            goto label_29ee94;
        }
    }
    ctx->pc = 0x29EE68u;
label_29ee68:
    // 0x29ee68: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x29ee68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_29ee6c:
    // 0x29ee6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29ee6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29ee70:
    // 0x29ee70: 0x2759821  addu        $s3, $s3, $s5
    ctx->pc = 0x29ee70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
label_29ee74:
    // 0x29ee74: 0xc0a7954  jal         func_29E550
label_29ee78:
    if (ctx->pc == 0x29EE78u) {
        ctx->pc = 0x29EE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE74u;
        // 0x29ee78: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EE7Cu;
        goto label_29ee7c;
    }
    ctx->pc = 0x29EE74u;
    SET_GPR_U32(ctx, 31, 0x29EE7Cu);
    ctx->pc = 0x29EE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EE74u;
    // 0x29ee78: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29E550u, 0x29EE74u, 0x29EE7Cu)) {
        return;
    }
    ctx->pc = 0x29EE7Cu;
label_29ee7c:
    // 0x29ee7c: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
label_29ee80:
    if (ctx->pc == 0x29EE80u) {
        ctx->pc = 0x29EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE7Cu;
        // 0x29ee80: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EE84u;
        goto label_29ee84;
    }
    ctx->pc = 0x29EE7Cu;
    {
        const bool branch_taken_0x29ee7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x29EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE7Cu;
        // 0x29ee80: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ee7c) {
            ctx->pc = 0x29EE94u;
            goto label_29ee94;
        }
    }
    ctx->pc = 0x29EE84u;
label_29ee84:
    // 0x29ee84: 0x10000003  b           . + 4 + (0x3 << 2)
label_29ee88:
    if (ctx->pc == 0x29EE88u) {
        ctx->pc = 0x29EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE84u;
        // 0x29ee88: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EE8Cu;
        goto label_29ee8c;
    }
    ctx->pc = 0x29EE84u;
    {
        const bool branch_taken_0x29ee84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE84u;
        // 0x29ee88: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ee84) {
            ctx->pc = 0x29EE94u;
            goto label_29ee94;
        }
    }
    ctx->pc = 0x29EE8Cu;
label_29ee8c:
    // 0x29ee8c: 0x0  nop
    ctx->pc = 0x29ee8cu;
    // NOP
label_29ee90:
    // 0x29ee90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29ee90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29ee94:
    // 0x29ee94: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x29ee94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_29ee98:
    // 0x29ee98: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x29ee98u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_29ee9c:
    // 0x29ee9c: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x29ee9cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_29eea0:
    // 0x29eea0: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x29eea0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_29eea4:
    // 0x29eea4: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x29eea4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_29eea8:
    // 0x29eea8: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x29eea8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_29eeac:
    // 0x29eeac: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x29eeacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_29eeb0:
    // 0x29eeb0: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x29eeb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_29eeb4:
    // 0x29eeb4: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x29eeb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_29eeb8:
    // 0x29eeb8: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x29eeb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_29eebc:
    // 0x29eebc: 0x3e00008  jr          $ra
label_29eec0:
    if (ctx->pc == 0x29EEC0u) {
        ctx->pc = 0x29EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EEBCu;
        // 0x29eec0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EEC4u;
        goto label_29eec4;
    }
    ctx->pc = 0x29EEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EEBCu;
        // 0x29eec0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EEC4u;
label_29eec4:
    // 0x29eec4: 0x0  nop
    ctx->pc = 0x29eec4u;
    // NOP
    ctx->pc = 0x29eec8u;
}
