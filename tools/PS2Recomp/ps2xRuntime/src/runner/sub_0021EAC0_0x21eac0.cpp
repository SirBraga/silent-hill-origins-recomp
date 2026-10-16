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

// Function: sub_0021EAC0
// Address: 0x21eac0 - 0x21f7f0
void sub_0021EAC0_0x21eac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EAC0_0x21eac0");
#endif

    switch (ctx->pc) {
        case 0x21eac0u: goto label_21eac0;
        case 0x21eac4u: goto label_21eac4;
        case 0x21eac8u: goto label_21eac8;
        case 0x21eaccu: goto label_21eacc;
        case 0x21ead0u: goto label_21ead0;
        case 0x21ead4u: goto label_21ead4;
        case 0x21ead8u: goto label_21ead8;
        case 0x21eadcu: goto label_21eadc;
        case 0x21eae0u: goto label_21eae0;
        case 0x21eae4u: goto label_21eae4;
        case 0x21eae8u: goto label_21eae8;
        case 0x21eaecu: goto label_21eaec;
        case 0x21eaf0u: goto label_21eaf0;
        case 0x21eaf4u: goto label_21eaf4;
        case 0x21eaf8u: goto label_21eaf8;
        case 0x21eafcu: goto label_21eafc;
        case 0x21eb00u: goto label_21eb00;
        case 0x21eb04u: goto label_21eb04;
        case 0x21eb08u: goto label_21eb08;
        case 0x21eb0cu: goto label_21eb0c;
        case 0x21eb10u: goto label_21eb10;
        case 0x21eb14u: goto label_21eb14;
        case 0x21eb18u: goto label_21eb18;
        case 0x21eb1cu: goto label_21eb1c;
        case 0x21eb20u: goto label_21eb20;
        case 0x21eb24u: goto label_21eb24;
        case 0x21eb28u: goto label_21eb28;
        case 0x21eb2cu: goto label_21eb2c;
        case 0x21eb30u: goto label_21eb30;
        case 0x21eb34u: goto label_21eb34;
        case 0x21eb38u: goto label_21eb38;
        case 0x21eb3cu: goto label_21eb3c;
        case 0x21eb40u: goto label_21eb40;
        case 0x21eb44u: goto label_21eb44;
        case 0x21eb48u: goto label_21eb48;
        case 0x21eb4cu: goto label_21eb4c;
        case 0x21eb50u: goto label_21eb50;
        case 0x21eb54u: goto label_21eb54;
        case 0x21eb58u: goto label_21eb58;
        case 0x21eb5cu: goto label_21eb5c;
        case 0x21eb60u: goto label_21eb60;
        case 0x21eb64u: goto label_21eb64;
        case 0x21eb68u: goto label_21eb68;
        case 0x21eb6cu: goto label_21eb6c;
        case 0x21eb70u: goto label_21eb70;
        case 0x21eb74u: goto label_21eb74;
        case 0x21eb78u: goto label_21eb78;
        case 0x21eb7cu: goto label_21eb7c;
        case 0x21eb80u: goto label_21eb80;
        case 0x21eb84u: goto label_21eb84;
        case 0x21eb88u: goto label_21eb88;
        case 0x21eb8cu: goto label_21eb8c;
        case 0x21eb90u: goto label_21eb90;
        case 0x21eb94u: goto label_21eb94;
        case 0x21eb98u: goto label_21eb98;
        case 0x21eb9cu: goto label_21eb9c;
        case 0x21eba0u: goto label_21eba0;
        case 0x21eba4u: goto label_21eba4;
        case 0x21eba8u: goto label_21eba8;
        case 0x21ebacu: goto label_21ebac;
        case 0x21ebb0u: goto label_21ebb0;
        case 0x21ebb4u: goto label_21ebb4;
        case 0x21ebb8u: goto label_21ebb8;
        case 0x21ebbcu: goto label_21ebbc;
        case 0x21ebc0u: goto label_21ebc0;
        case 0x21ebc4u: goto label_21ebc4;
        case 0x21ebc8u: goto label_21ebc8;
        case 0x21ebccu: goto label_21ebcc;
        case 0x21ebd0u: goto label_21ebd0;
        case 0x21ebd4u: goto label_21ebd4;
        case 0x21ebd8u: goto label_21ebd8;
        case 0x21ebdcu: goto label_21ebdc;
        case 0x21ebe0u: goto label_21ebe0;
        case 0x21ebe4u: goto label_21ebe4;
        case 0x21ebe8u: goto label_21ebe8;
        case 0x21ebecu: goto label_21ebec;
        case 0x21ebf0u: goto label_21ebf0;
        case 0x21ebf4u: goto label_21ebf4;
        case 0x21ebf8u: goto label_21ebf8;
        case 0x21ebfcu: goto label_21ebfc;
        case 0x21ec00u: goto label_21ec00;
        case 0x21ec04u: goto label_21ec04;
        case 0x21ec08u: goto label_21ec08;
        case 0x21ec0cu: goto label_21ec0c;
        case 0x21ec10u: goto label_21ec10;
        case 0x21ec14u: goto label_21ec14;
        case 0x21ec18u: goto label_21ec18;
        case 0x21ec1cu: goto label_21ec1c;
        case 0x21ec20u: goto label_21ec20;
        case 0x21ec24u: goto label_21ec24;
        case 0x21ec28u: goto label_21ec28;
        case 0x21ec2cu: goto label_21ec2c;
        case 0x21ec30u: goto label_21ec30;
        case 0x21ec34u: goto label_21ec34;
        case 0x21ec38u: goto label_21ec38;
        case 0x21ec3cu: goto label_21ec3c;
        case 0x21ec40u: goto label_21ec40;
        case 0x21ec44u: goto label_21ec44;
        case 0x21ec48u: goto label_21ec48;
        case 0x21ec4cu: goto label_21ec4c;
        case 0x21ec50u: goto label_21ec50;
        case 0x21ec54u: goto label_21ec54;
        case 0x21ec58u: goto label_21ec58;
        case 0x21ec5cu: goto label_21ec5c;
        case 0x21ec60u: goto label_21ec60;
        case 0x21ec64u: goto label_21ec64;
        case 0x21ec68u: goto label_21ec68;
        case 0x21ec6cu: goto label_21ec6c;
        case 0x21ec70u: goto label_21ec70;
        case 0x21ec74u: goto label_21ec74;
        case 0x21ec78u: goto label_21ec78;
        case 0x21ec7cu: goto label_21ec7c;
        case 0x21ec80u: goto label_21ec80;
        case 0x21ec84u: goto label_21ec84;
        case 0x21ec88u: goto label_21ec88;
        case 0x21ec8cu: goto label_21ec8c;
        case 0x21ec90u: goto label_21ec90;
        case 0x21ec94u: goto label_21ec94;
        case 0x21ec98u: goto label_21ec98;
        case 0x21ec9cu: goto label_21ec9c;
        case 0x21eca0u: goto label_21eca0;
        case 0x21eca4u: goto label_21eca4;
        case 0x21eca8u: goto label_21eca8;
        case 0x21ecacu: goto label_21ecac;
        case 0x21ecb0u: goto label_21ecb0;
        case 0x21ecb4u: goto label_21ecb4;
        case 0x21ecb8u: goto label_21ecb8;
        case 0x21ecbcu: goto label_21ecbc;
        case 0x21ecc0u: goto label_21ecc0;
        case 0x21ecc4u: goto label_21ecc4;
        case 0x21ecc8u: goto label_21ecc8;
        case 0x21ecccu: goto label_21eccc;
        case 0x21ecd0u: goto label_21ecd0;
        case 0x21ecd4u: goto label_21ecd4;
        case 0x21ecd8u: goto label_21ecd8;
        case 0x21ecdcu: goto label_21ecdc;
        case 0x21ece0u: goto label_21ece0;
        case 0x21ece4u: goto label_21ece4;
        case 0x21ece8u: goto label_21ece8;
        case 0x21ececu: goto label_21ecec;
        case 0x21ecf0u: goto label_21ecf0;
        case 0x21ecf4u: goto label_21ecf4;
        case 0x21ecf8u: goto label_21ecf8;
        case 0x21ecfcu: goto label_21ecfc;
        case 0x21ed00u: goto label_21ed00;
        case 0x21ed04u: goto label_21ed04;
        case 0x21ed08u: goto label_21ed08;
        case 0x21ed0cu: goto label_21ed0c;
        case 0x21ed10u: goto label_21ed10;
        case 0x21ed14u: goto label_21ed14;
        case 0x21ed18u: goto label_21ed18;
        case 0x21ed1cu: goto label_21ed1c;
        case 0x21ed20u: goto label_21ed20;
        case 0x21ed24u: goto label_21ed24;
        case 0x21ed28u: goto label_21ed28;
        case 0x21ed2cu: goto label_21ed2c;
        case 0x21ed30u: goto label_21ed30;
        case 0x21ed34u: goto label_21ed34;
        case 0x21ed38u: goto label_21ed38;
        case 0x21ed3cu: goto label_21ed3c;
        case 0x21ed40u: goto label_21ed40;
        case 0x21ed44u: goto label_21ed44;
        case 0x21ed48u: goto label_21ed48;
        case 0x21ed4cu: goto label_21ed4c;
        case 0x21ed50u: goto label_21ed50;
        case 0x21ed54u: goto label_21ed54;
        case 0x21ed58u: goto label_21ed58;
        case 0x21ed5cu: goto label_21ed5c;
        case 0x21ed60u: goto label_21ed60;
        case 0x21ed64u: goto label_21ed64;
        case 0x21ed68u: goto label_21ed68;
        case 0x21ed6cu: goto label_21ed6c;
        case 0x21ed70u: goto label_21ed70;
        case 0x21ed74u: goto label_21ed74;
        case 0x21ed78u: goto label_21ed78;
        case 0x21ed7cu: goto label_21ed7c;
        case 0x21ed80u: goto label_21ed80;
        case 0x21ed84u: goto label_21ed84;
        case 0x21ed88u: goto label_21ed88;
        case 0x21ed8cu: goto label_21ed8c;
        case 0x21ed90u: goto label_21ed90;
        case 0x21ed94u: goto label_21ed94;
        case 0x21ed98u: goto label_21ed98;
        case 0x21ed9cu: goto label_21ed9c;
        case 0x21eda0u: goto label_21eda0;
        case 0x21eda4u: goto label_21eda4;
        case 0x21eda8u: goto label_21eda8;
        case 0x21edacu: goto label_21edac;
        case 0x21edb0u: goto label_21edb0;
        case 0x21edb4u: goto label_21edb4;
        case 0x21edb8u: goto label_21edb8;
        case 0x21edbcu: goto label_21edbc;
        case 0x21edc0u: goto label_21edc0;
        case 0x21edc4u: goto label_21edc4;
        case 0x21edc8u: goto label_21edc8;
        case 0x21edccu: goto label_21edcc;
        case 0x21edd0u: goto label_21edd0;
        case 0x21edd4u: goto label_21edd4;
        case 0x21edd8u: goto label_21edd8;
        case 0x21eddcu: goto label_21eddc;
        case 0x21ede0u: goto label_21ede0;
        case 0x21ede4u: goto label_21ede4;
        case 0x21ede8u: goto label_21ede8;
        case 0x21edecu: goto label_21edec;
        case 0x21edf0u: goto label_21edf0;
        case 0x21edf4u: goto label_21edf4;
        case 0x21edf8u: goto label_21edf8;
        case 0x21edfcu: goto label_21edfc;
        case 0x21ee00u: goto label_21ee00;
        case 0x21ee04u: goto label_21ee04;
        case 0x21ee08u: goto label_21ee08;
        case 0x21ee0cu: goto label_21ee0c;
        case 0x21ee10u: goto label_21ee10;
        case 0x21ee14u: goto label_21ee14;
        case 0x21ee18u: goto label_21ee18;
        case 0x21ee1cu: goto label_21ee1c;
        case 0x21ee20u: goto label_21ee20;
        case 0x21ee24u: goto label_21ee24;
        case 0x21ee28u: goto label_21ee28;
        case 0x21ee2cu: goto label_21ee2c;
        case 0x21ee30u: goto label_21ee30;
        case 0x21ee34u: goto label_21ee34;
        case 0x21ee38u: goto label_21ee38;
        case 0x21ee3cu: goto label_21ee3c;
        case 0x21ee40u: goto label_21ee40;
        case 0x21ee44u: goto label_21ee44;
        case 0x21ee48u: goto label_21ee48;
        case 0x21ee4cu: goto label_21ee4c;
        case 0x21ee50u: goto label_21ee50;
        case 0x21ee54u: goto label_21ee54;
        case 0x21ee58u: goto label_21ee58;
        case 0x21ee5cu: goto label_21ee5c;
        case 0x21ee60u: goto label_21ee60;
        case 0x21ee64u: goto label_21ee64;
        case 0x21ee68u: goto label_21ee68;
        case 0x21ee6cu: goto label_21ee6c;
        case 0x21ee70u: goto label_21ee70;
        case 0x21ee74u: goto label_21ee74;
        case 0x21ee78u: goto label_21ee78;
        case 0x21ee7cu: goto label_21ee7c;
        case 0x21ee80u: goto label_21ee80;
        case 0x21ee84u: goto label_21ee84;
        case 0x21ee88u: goto label_21ee88;
        case 0x21ee8cu: goto label_21ee8c;
        case 0x21ee90u: goto label_21ee90;
        case 0x21ee94u: goto label_21ee94;
        case 0x21ee98u: goto label_21ee98;
        case 0x21ee9cu: goto label_21ee9c;
        case 0x21eea0u: goto label_21eea0;
        case 0x21eea4u: goto label_21eea4;
        case 0x21eea8u: goto label_21eea8;
        case 0x21eeacu: goto label_21eeac;
        case 0x21eeb0u: goto label_21eeb0;
        case 0x21eeb4u: goto label_21eeb4;
        case 0x21eeb8u: goto label_21eeb8;
        case 0x21eebcu: goto label_21eebc;
        case 0x21eec0u: goto label_21eec0;
        case 0x21eec4u: goto label_21eec4;
        case 0x21eec8u: goto label_21eec8;
        case 0x21eeccu: goto label_21eecc;
        case 0x21eed0u: goto label_21eed0;
        case 0x21eed4u: goto label_21eed4;
        case 0x21eed8u: goto label_21eed8;
        case 0x21eedcu: goto label_21eedc;
        case 0x21eee0u: goto label_21eee0;
        case 0x21eee4u: goto label_21eee4;
        case 0x21eee8u: goto label_21eee8;
        case 0x21eeecu: goto label_21eeec;
        case 0x21eef0u: goto label_21eef0;
        case 0x21eef4u: goto label_21eef4;
        case 0x21eef8u: goto label_21eef8;
        case 0x21eefcu: goto label_21eefc;
        case 0x21ef00u: goto label_21ef00;
        case 0x21ef04u: goto label_21ef04;
        case 0x21ef08u: goto label_21ef08;
        case 0x21ef0cu: goto label_21ef0c;
        case 0x21ef10u: goto label_21ef10;
        case 0x21ef14u: goto label_21ef14;
        case 0x21ef18u: goto label_21ef18;
        case 0x21ef1cu: goto label_21ef1c;
        case 0x21ef20u: goto label_21ef20;
        case 0x21ef24u: goto label_21ef24;
        case 0x21ef28u: goto label_21ef28;
        case 0x21ef2cu: goto label_21ef2c;
        case 0x21ef30u: goto label_21ef30;
        case 0x21ef34u: goto label_21ef34;
        case 0x21ef38u: goto label_21ef38;
        case 0x21ef3cu: goto label_21ef3c;
        case 0x21ef40u: goto label_21ef40;
        case 0x21ef44u: goto label_21ef44;
        case 0x21ef48u: goto label_21ef48;
        case 0x21ef4cu: goto label_21ef4c;
        case 0x21ef50u: goto label_21ef50;
        case 0x21ef54u: goto label_21ef54;
        case 0x21ef58u: goto label_21ef58;
        case 0x21ef5cu: goto label_21ef5c;
        case 0x21ef60u: goto label_21ef60;
        case 0x21ef64u: goto label_21ef64;
        case 0x21ef68u: goto label_21ef68;
        case 0x21ef6cu: goto label_21ef6c;
        case 0x21ef70u: goto label_21ef70;
        case 0x21ef74u: goto label_21ef74;
        case 0x21ef78u: goto label_21ef78;
        case 0x21ef7cu: goto label_21ef7c;
        case 0x21ef80u: goto label_21ef80;
        case 0x21ef84u: goto label_21ef84;
        case 0x21ef88u: goto label_21ef88;
        case 0x21ef8cu: goto label_21ef8c;
        case 0x21ef90u: goto label_21ef90;
        case 0x21ef94u: goto label_21ef94;
        case 0x21ef98u: goto label_21ef98;
        case 0x21ef9cu: goto label_21ef9c;
        case 0x21efa0u: goto label_21efa0;
        case 0x21efa4u: goto label_21efa4;
        case 0x21efa8u: goto label_21efa8;
        case 0x21efacu: goto label_21efac;
        case 0x21efb0u: goto label_21efb0;
        case 0x21efb4u: goto label_21efb4;
        case 0x21efb8u: goto label_21efb8;
        case 0x21efbcu: goto label_21efbc;
        case 0x21efc0u: goto label_21efc0;
        case 0x21efc4u: goto label_21efc4;
        case 0x21efc8u: goto label_21efc8;
        case 0x21efccu: goto label_21efcc;
        case 0x21efd0u: goto label_21efd0;
        case 0x21efd4u: goto label_21efd4;
        case 0x21efd8u: goto label_21efd8;
        case 0x21efdcu: goto label_21efdc;
        case 0x21efe0u: goto label_21efe0;
        case 0x21efe4u: goto label_21efe4;
        case 0x21efe8u: goto label_21efe8;
        case 0x21efecu: goto label_21efec;
        case 0x21eff0u: goto label_21eff0;
        case 0x21eff4u: goto label_21eff4;
        case 0x21eff8u: goto label_21eff8;
        case 0x21effcu: goto label_21effc;
        case 0x21f000u: goto label_21f000;
        case 0x21f004u: goto label_21f004;
        case 0x21f008u: goto label_21f008;
        case 0x21f00cu: goto label_21f00c;
        case 0x21f010u: goto label_21f010;
        case 0x21f014u: goto label_21f014;
        case 0x21f018u: goto label_21f018;
        case 0x21f01cu: goto label_21f01c;
        case 0x21f020u: goto label_21f020;
        case 0x21f024u: goto label_21f024;
        case 0x21f028u: goto label_21f028;
        case 0x21f02cu: goto label_21f02c;
        case 0x21f030u: goto label_21f030;
        case 0x21f034u: goto label_21f034;
        case 0x21f038u: goto label_21f038;
        case 0x21f03cu: goto label_21f03c;
        case 0x21f040u: goto label_21f040;
        case 0x21f044u: goto label_21f044;
        case 0x21f048u: goto label_21f048;
        case 0x21f04cu: goto label_21f04c;
        case 0x21f050u: goto label_21f050;
        case 0x21f054u: goto label_21f054;
        case 0x21f058u: goto label_21f058;
        case 0x21f05cu: goto label_21f05c;
        case 0x21f060u: goto label_21f060;
        case 0x21f064u: goto label_21f064;
        case 0x21f068u: goto label_21f068;
        case 0x21f06cu: goto label_21f06c;
        case 0x21f070u: goto label_21f070;
        case 0x21f074u: goto label_21f074;
        case 0x21f078u: goto label_21f078;
        case 0x21f07cu: goto label_21f07c;
        case 0x21f080u: goto label_21f080;
        case 0x21f084u: goto label_21f084;
        case 0x21f088u: goto label_21f088;
        case 0x21f08cu: goto label_21f08c;
        case 0x21f090u: goto label_21f090;
        case 0x21f094u: goto label_21f094;
        case 0x21f098u: goto label_21f098;
        case 0x21f09cu: goto label_21f09c;
        case 0x21f0a0u: goto label_21f0a0;
        case 0x21f0a4u: goto label_21f0a4;
        case 0x21f0a8u: goto label_21f0a8;
        case 0x21f0acu: goto label_21f0ac;
        case 0x21f0b0u: goto label_21f0b0;
        case 0x21f0b4u: goto label_21f0b4;
        case 0x21f0b8u: goto label_21f0b8;
        case 0x21f0bcu: goto label_21f0bc;
        case 0x21f0c0u: goto label_21f0c0;
        case 0x21f0c4u: goto label_21f0c4;
        case 0x21f0c8u: goto label_21f0c8;
        case 0x21f0ccu: goto label_21f0cc;
        case 0x21f0d0u: goto label_21f0d0;
        case 0x21f0d4u: goto label_21f0d4;
        case 0x21f0d8u: goto label_21f0d8;
        case 0x21f0dcu: goto label_21f0dc;
        case 0x21f0e0u: goto label_21f0e0;
        case 0x21f0e4u: goto label_21f0e4;
        case 0x21f0e8u: goto label_21f0e8;
        case 0x21f0ecu: goto label_21f0ec;
        case 0x21f0f0u: goto label_21f0f0;
        case 0x21f0f4u: goto label_21f0f4;
        case 0x21f0f8u: goto label_21f0f8;
        case 0x21f0fcu: goto label_21f0fc;
        case 0x21f100u: goto label_21f100;
        case 0x21f104u: goto label_21f104;
        case 0x21f108u: goto label_21f108;
        case 0x21f10cu: goto label_21f10c;
        case 0x21f110u: goto label_21f110;
        case 0x21f114u: goto label_21f114;
        case 0x21f118u: goto label_21f118;
        case 0x21f11cu: goto label_21f11c;
        case 0x21f120u: goto label_21f120;
        case 0x21f124u: goto label_21f124;
        case 0x21f128u: goto label_21f128;
        case 0x21f12cu: goto label_21f12c;
        case 0x21f130u: goto label_21f130;
        case 0x21f134u: goto label_21f134;
        case 0x21f138u: goto label_21f138;
        case 0x21f13cu: goto label_21f13c;
        case 0x21f140u: goto label_21f140;
        case 0x21f144u: goto label_21f144;
        case 0x21f148u: goto label_21f148;
        case 0x21f14cu: goto label_21f14c;
        case 0x21f150u: goto label_21f150;
        case 0x21f154u: goto label_21f154;
        case 0x21f158u: goto label_21f158;
        case 0x21f15cu: goto label_21f15c;
        case 0x21f160u: goto label_21f160;
        case 0x21f164u: goto label_21f164;
        case 0x21f168u: goto label_21f168;
        case 0x21f16cu: goto label_21f16c;
        case 0x21f170u: goto label_21f170;
        case 0x21f174u: goto label_21f174;
        case 0x21f178u: goto label_21f178;
        case 0x21f17cu: goto label_21f17c;
        case 0x21f180u: goto label_21f180;
        case 0x21f184u: goto label_21f184;
        case 0x21f188u: goto label_21f188;
        case 0x21f18cu: goto label_21f18c;
        case 0x21f190u: goto label_21f190;
        case 0x21f194u: goto label_21f194;
        case 0x21f198u: goto label_21f198;
        case 0x21f19cu: goto label_21f19c;
        case 0x21f1a0u: goto label_21f1a0;
        case 0x21f1a4u: goto label_21f1a4;
        case 0x21f1a8u: goto label_21f1a8;
        case 0x21f1acu: goto label_21f1ac;
        case 0x21f1b0u: goto label_21f1b0;
        case 0x21f1b4u: goto label_21f1b4;
        case 0x21f1b8u: goto label_21f1b8;
        case 0x21f1bcu: goto label_21f1bc;
        case 0x21f1c0u: goto label_21f1c0;
        case 0x21f1c4u: goto label_21f1c4;
        case 0x21f1c8u: goto label_21f1c8;
        case 0x21f1ccu: goto label_21f1cc;
        case 0x21f1d0u: goto label_21f1d0;
        case 0x21f1d4u: goto label_21f1d4;
        case 0x21f1d8u: goto label_21f1d8;
        case 0x21f1dcu: goto label_21f1dc;
        case 0x21f1e0u: goto label_21f1e0;
        case 0x21f1e4u: goto label_21f1e4;
        case 0x21f1e8u: goto label_21f1e8;
        case 0x21f1ecu: goto label_21f1ec;
        case 0x21f1f0u: goto label_21f1f0;
        case 0x21f1f4u: goto label_21f1f4;
        case 0x21f1f8u: goto label_21f1f8;
        case 0x21f1fcu: goto label_21f1fc;
        case 0x21f200u: goto label_21f200;
        case 0x21f204u: goto label_21f204;
        case 0x21f208u: goto label_21f208;
        case 0x21f20cu: goto label_21f20c;
        case 0x21f210u: goto label_21f210;
        case 0x21f214u: goto label_21f214;
        case 0x21f218u: goto label_21f218;
        case 0x21f21cu: goto label_21f21c;
        case 0x21f220u: goto label_21f220;
        case 0x21f224u: goto label_21f224;
        case 0x21f228u: goto label_21f228;
        case 0x21f22cu: goto label_21f22c;
        case 0x21f230u: goto label_21f230;
        case 0x21f234u: goto label_21f234;
        case 0x21f238u: goto label_21f238;
        case 0x21f23cu: goto label_21f23c;
        case 0x21f240u: goto label_21f240;
        case 0x21f244u: goto label_21f244;
        case 0x21f248u: goto label_21f248;
        case 0x21f24cu: goto label_21f24c;
        case 0x21f250u: goto label_21f250;
        case 0x21f254u: goto label_21f254;
        case 0x21f258u: goto label_21f258;
        case 0x21f25cu: goto label_21f25c;
        case 0x21f260u: goto label_21f260;
        case 0x21f264u: goto label_21f264;
        case 0x21f268u: goto label_21f268;
        case 0x21f26cu: goto label_21f26c;
        case 0x21f270u: goto label_21f270;
        case 0x21f274u: goto label_21f274;
        case 0x21f278u: goto label_21f278;
        case 0x21f27cu: goto label_21f27c;
        case 0x21f280u: goto label_21f280;
        case 0x21f284u: goto label_21f284;
        case 0x21f288u: goto label_21f288;
        case 0x21f28cu: goto label_21f28c;
        case 0x21f290u: goto label_21f290;
        case 0x21f294u: goto label_21f294;
        case 0x21f298u: goto label_21f298;
        case 0x21f29cu: goto label_21f29c;
        case 0x21f2a0u: goto label_21f2a0;
        case 0x21f2a4u: goto label_21f2a4;
        case 0x21f2a8u: goto label_21f2a8;
        case 0x21f2acu: goto label_21f2ac;
        case 0x21f2b0u: goto label_21f2b0;
        case 0x21f2b4u: goto label_21f2b4;
        case 0x21f2b8u: goto label_21f2b8;
        case 0x21f2bcu: goto label_21f2bc;
        case 0x21f2c0u: goto label_21f2c0;
        case 0x21f2c4u: goto label_21f2c4;
        case 0x21f2c8u: goto label_21f2c8;
        case 0x21f2ccu: goto label_21f2cc;
        case 0x21f2d0u: goto label_21f2d0;
        case 0x21f2d4u: goto label_21f2d4;
        case 0x21f2d8u: goto label_21f2d8;
        case 0x21f2dcu: goto label_21f2dc;
        case 0x21f2e0u: goto label_21f2e0;
        case 0x21f2e4u: goto label_21f2e4;
        case 0x21f2e8u: goto label_21f2e8;
        case 0x21f2ecu: goto label_21f2ec;
        case 0x21f2f0u: goto label_21f2f0;
        case 0x21f2f4u: goto label_21f2f4;
        case 0x21f2f8u: goto label_21f2f8;
        case 0x21f2fcu: goto label_21f2fc;
        case 0x21f300u: goto label_21f300;
        case 0x21f304u: goto label_21f304;
        case 0x21f308u: goto label_21f308;
        case 0x21f30cu: goto label_21f30c;
        case 0x21f310u: goto label_21f310;
        case 0x21f314u: goto label_21f314;
        case 0x21f318u: goto label_21f318;
        case 0x21f31cu: goto label_21f31c;
        case 0x21f320u: goto label_21f320;
        case 0x21f324u: goto label_21f324;
        case 0x21f328u: goto label_21f328;
        case 0x21f32cu: goto label_21f32c;
        case 0x21f330u: goto label_21f330;
        case 0x21f334u: goto label_21f334;
        case 0x21f338u: goto label_21f338;
        case 0x21f33cu: goto label_21f33c;
        case 0x21f340u: goto label_21f340;
        case 0x21f344u: goto label_21f344;
        case 0x21f348u: goto label_21f348;
        case 0x21f34cu: goto label_21f34c;
        case 0x21f350u: goto label_21f350;
        case 0x21f354u: goto label_21f354;
        case 0x21f358u: goto label_21f358;
        case 0x21f35cu: goto label_21f35c;
        case 0x21f360u: goto label_21f360;
        case 0x21f364u: goto label_21f364;
        case 0x21f368u: goto label_21f368;
        case 0x21f36cu: goto label_21f36c;
        case 0x21f370u: goto label_21f370;
        case 0x21f374u: goto label_21f374;
        case 0x21f378u: goto label_21f378;
        case 0x21f37cu: goto label_21f37c;
        case 0x21f380u: goto label_21f380;
        case 0x21f384u: goto label_21f384;
        case 0x21f388u: goto label_21f388;
        case 0x21f38cu: goto label_21f38c;
        case 0x21f390u: goto label_21f390;
        case 0x21f394u: goto label_21f394;
        case 0x21f398u: goto label_21f398;
        case 0x21f39cu: goto label_21f39c;
        case 0x21f3a0u: goto label_21f3a0;
        case 0x21f3a4u: goto label_21f3a4;
        case 0x21f3a8u: goto label_21f3a8;
        case 0x21f3acu: goto label_21f3ac;
        case 0x21f3b0u: goto label_21f3b0;
        case 0x21f3b4u: goto label_21f3b4;
        case 0x21f3b8u: goto label_21f3b8;
        case 0x21f3bcu: goto label_21f3bc;
        case 0x21f3c0u: goto label_21f3c0;
        case 0x21f3c4u: goto label_21f3c4;
        case 0x21f3c8u: goto label_21f3c8;
        case 0x21f3ccu: goto label_21f3cc;
        case 0x21f3d0u: goto label_21f3d0;
        case 0x21f3d4u: goto label_21f3d4;
        case 0x21f3d8u: goto label_21f3d8;
        case 0x21f3dcu: goto label_21f3dc;
        case 0x21f3e0u: goto label_21f3e0;
        case 0x21f3e4u: goto label_21f3e4;
        case 0x21f3e8u: goto label_21f3e8;
        case 0x21f3ecu: goto label_21f3ec;
        case 0x21f3f0u: goto label_21f3f0;
        case 0x21f3f4u: goto label_21f3f4;
        case 0x21f3f8u: goto label_21f3f8;
        case 0x21f3fcu: goto label_21f3fc;
        case 0x21f400u: goto label_21f400;
        case 0x21f404u: goto label_21f404;
        case 0x21f408u: goto label_21f408;
        case 0x21f40cu: goto label_21f40c;
        case 0x21f410u: goto label_21f410;
        case 0x21f414u: goto label_21f414;
        case 0x21f418u: goto label_21f418;
        case 0x21f41cu: goto label_21f41c;
        case 0x21f420u: goto label_21f420;
        case 0x21f424u: goto label_21f424;
        case 0x21f428u: goto label_21f428;
        case 0x21f42cu: goto label_21f42c;
        case 0x21f430u: goto label_21f430;
        case 0x21f434u: goto label_21f434;
        case 0x21f438u: goto label_21f438;
        case 0x21f43cu: goto label_21f43c;
        case 0x21f440u: goto label_21f440;
        case 0x21f444u: goto label_21f444;
        case 0x21f448u: goto label_21f448;
        case 0x21f44cu: goto label_21f44c;
        case 0x21f450u: goto label_21f450;
        case 0x21f454u: goto label_21f454;
        case 0x21f458u: goto label_21f458;
        case 0x21f45cu: goto label_21f45c;
        case 0x21f460u: goto label_21f460;
        case 0x21f464u: goto label_21f464;
        case 0x21f468u: goto label_21f468;
        case 0x21f46cu: goto label_21f46c;
        case 0x21f470u: goto label_21f470;
        case 0x21f474u: goto label_21f474;
        case 0x21f478u: goto label_21f478;
        case 0x21f47cu: goto label_21f47c;
        case 0x21f480u: goto label_21f480;
        case 0x21f484u: goto label_21f484;
        case 0x21f488u: goto label_21f488;
        case 0x21f48cu: goto label_21f48c;
        case 0x21f490u: goto label_21f490;
        case 0x21f494u: goto label_21f494;
        case 0x21f498u: goto label_21f498;
        case 0x21f49cu: goto label_21f49c;
        case 0x21f4a0u: goto label_21f4a0;
        case 0x21f4a4u: goto label_21f4a4;
        case 0x21f4a8u: goto label_21f4a8;
        case 0x21f4acu: goto label_21f4ac;
        case 0x21f4b0u: goto label_21f4b0;
        case 0x21f4b4u: goto label_21f4b4;
        case 0x21f4b8u: goto label_21f4b8;
        case 0x21f4bcu: goto label_21f4bc;
        case 0x21f4c0u: goto label_21f4c0;
        case 0x21f4c4u: goto label_21f4c4;
        case 0x21f4c8u: goto label_21f4c8;
        case 0x21f4ccu: goto label_21f4cc;
        case 0x21f4d0u: goto label_21f4d0;
        case 0x21f4d4u: goto label_21f4d4;
        case 0x21f4d8u: goto label_21f4d8;
        case 0x21f4dcu: goto label_21f4dc;
        case 0x21f4e0u: goto label_21f4e0;
        case 0x21f4e4u: goto label_21f4e4;
        case 0x21f4e8u: goto label_21f4e8;
        case 0x21f4ecu: goto label_21f4ec;
        case 0x21f4f0u: goto label_21f4f0;
        case 0x21f4f4u: goto label_21f4f4;
        case 0x21f4f8u: goto label_21f4f8;
        case 0x21f4fcu: goto label_21f4fc;
        case 0x21f500u: goto label_21f500;
        case 0x21f504u: goto label_21f504;
        case 0x21f508u: goto label_21f508;
        case 0x21f50cu: goto label_21f50c;
        case 0x21f510u: goto label_21f510;
        case 0x21f514u: goto label_21f514;
        case 0x21f518u: goto label_21f518;
        case 0x21f51cu: goto label_21f51c;
        case 0x21f520u: goto label_21f520;
        case 0x21f524u: goto label_21f524;
        case 0x21f528u: goto label_21f528;
        case 0x21f52cu: goto label_21f52c;
        case 0x21f530u: goto label_21f530;
        case 0x21f534u: goto label_21f534;
        case 0x21f538u: goto label_21f538;
        case 0x21f53cu: goto label_21f53c;
        case 0x21f540u: goto label_21f540;
        case 0x21f544u: goto label_21f544;
        case 0x21f548u: goto label_21f548;
        case 0x21f54cu: goto label_21f54c;
        case 0x21f550u: goto label_21f550;
        case 0x21f554u: goto label_21f554;
        case 0x21f558u: goto label_21f558;
        case 0x21f55cu: goto label_21f55c;
        case 0x21f560u: goto label_21f560;
        case 0x21f564u: goto label_21f564;
        case 0x21f568u: goto label_21f568;
        case 0x21f56cu: goto label_21f56c;
        case 0x21f570u: goto label_21f570;
        case 0x21f574u: goto label_21f574;
        case 0x21f578u: goto label_21f578;
        case 0x21f57cu: goto label_21f57c;
        case 0x21f580u: goto label_21f580;
        case 0x21f584u: goto label_21f584;
        case 0x21f588u: goto label_21f588;
        case 0x21f58cu: goto label_21f58c;
        case 0x21f590u: goto label_21f590;
        case 0x21f594u: goto label_21f594;
        case 0x21f598u: goto label_21f598;
        case 0x21f59cu: goto label_21f59c;
        case 0x21f5a0u: goto label_21f5a0;
        case 0x21f5a4u: goto label_21f5a4;
        case 0x21f5a8u: goto label_21f5a8;
        case 0x21f5acu: goto label_21f5ac;
        case 0x21f5b0u: goto label_21f5b0;
        case 0x21f5b4u: goto label_21f5b4;
        case 0x21f5b8u: goto label_21f5b8;
        case 0x21f5bcu: goto label_21f5bc;
        case 0x21f5c0u: goto label_21f5c0;
        case 0x21f5c4u: goto label_21f5c4;
        case 0x21f5c8u: goto label_21f5c8;
        case 0x21f5ccu: goto label_21f5cc;
        case 0x21f5d0u: goto label_21f5d0;
        case 0x21f5d4u: goto label_21f5d4;
        case 0x21f5d8u: goto label_21f5d8;
        case 0x21f5dcu: goto label_21f5dc;
        case 0x21f5e0u: goto label_21f5e0;
        case 0x21f5e4u: goto label_21f5e4;
        case 0x21f5e8u: goto label_21f5e8;
        case 0x21f5ecu: goto label_21f5ec;
        case 0x21f5f0u: goto label_21f5f0;
        case 0x21f5f4u: goto label_21f5f4;
        case 0x21f5f8u: goto label_21f5f8;
        case 0x21f5fcu: goto label_21f5fc;
        case 0x21f600u: goto label_21f600;
        case 0x21f604u: goto label_21f604;
        case 0x21f608u: goto label_21f608;
        case 0x21f60cu: goto label_21f60c;
        case 0x21f610u: goto label_21f610;
        case 0x21f614u: goto label_21f614;
        case 0x21f618u: goto label_21f618;
        case 0x21f61cu: goto label_21f61c;
        case 0x21f620u: goto label_21f620;
        case 0x21f624u: goto label_21f624;
        case 0x21f628u: goto label_21f628;
        case 0x21f62cu: goto label_21f62c;
        case 0x21f630u: goto label_21f630;
        case 0x21f634u: goto label_21f634;
        case 0x21f638u: goto label_21f638;
        case 0x21f63cu: goto label_21f63c;
        case 0x21f640u: goto label_21f640;
        case 0x21f644u: goto label_21f644;
        case 0x21f648u: goto label_21f648;
        case 0x21f64cu: goto label_21f64c;
        case 0x21f650u: goto label_21f650;
        case 0x21f654u: goto label_21f654;
        case 0x21f658u: goto label_21f658;
        case 0x21f65cu: goto label_21f65c;
        case 0x21f660u: goto label_21f660;
        case 0x21f664u: goto label_21f664;
        case 0x21f668u: goto label_21f668;
        case 0x21f66cu: goto label_21f66c;
        case 0x21f670u: goto label_21f670;
        case 0x21f674u: goto label_21f674;
        case 0x21f678u: goto label_21f678;
        case 0x21f67cu: goto label_21f67c;
        case 0x21f680u: goto label_21f680;
        case 0x21f684u: goto label_21f684;
        case 0x21f688u: goto label_21f688;
        case 0x21f68cu: goto label_21f68c;
        case 0x21f690u: goto label_21f690;
        case 0x21f694u: goto label_21f694;
        case 0x21f698u: goto label_21f698;
        case 0x21f69cu: goto label_21f69c;
        case 0x21f6a0u: goto label_21f6a0;
        case 0x21f6a4u: goto label_21f6a4;
        case 0x21f6a8u: goto label_21f6a8;
        case 0x21f6acu: goto label_21f6ac;
        case 0x21f6b0u: goto label_21f6b0;
        case 0x21f6b4u: goto label_21f6b4;
        case 0x21f6b8u: goto label_21f6b8;
        case 0x21f6bcu: goto label_21f6bc;
        case 0x21f6c0u: goto label_21f6c0;
        case 0x21f6c4u: goto label_21f6c4;
        case 0x21f6c8u: goto label_21f6c8;
        case 0x21f6ccu: goto label_21f6cc;
        case 0x21f6d0u: goto label_21f6d0;
        case 0x21f6d4u: goto label_21f6d4;
        case 0x21f6d8u: goto label_21f6d8;
        case 0x21f6dcu: goto label_21f6dc;
        case 0x21f6e0u: goto label_21f6e0;
        case 0x21f6e4u: goto label_21f6e4;
        case 0x21f6e8u: goto label_21f6e8;
        case 0x21f6ecu: goto label_21f6ec;
        case 0x21f6f0u: goto label_21f6f0;
        case 0x21f6f4u: goto label_21f6f4;
        case 0x21f6f8u: goto label_21f6f8;
        case 0x21f6fcu: goto label_21f6fc;
        case 0x21f700u: goto label_21f700;
        case 0x21f704u: goto label_21f704;
        case 0x21f708u: goto label_21f708;
        case 0x21f70cu: goto label_21f70c;
        case 0x21f710u: goto label_21f710;
        case 0x21f714u: goto label_21f714;
        case 0x21f718u: goto label_21f718;
        case 0x21f71cu: goto label_21f71c;
        case 0x21f720u: goto label_21f720;
        case 0x21f724u: goto label_21f724;
        case 0x21f728u: goto label_21f728;
        case 0x21f72cu: goto label_21f72c;
        case 0x21f730u: goto label_21f730;
        case 0x21f734u: goto label_21f734;
        case 0x21f738u: goto label_21f738;
        case 0x21f73cu: goto label_21f73c;
        case 0x21f740u: goto label_21f740;
        case 0x21f744u: goto label_21f744;
        case 0x21f748u: goto label_21f748;
        case 0x21f74cu: goto label_21f74c;
        case 0x21f750u: goto label_21f750;
        case 0x21f754u: goto label_21f754;
        case 0x21f758u: goto label_21f758;
        case 0x21f75cu: goto label_21f75c;
        case 0x21f760u: goto label_21f760;
        case 0x21f764u: goto label_21f764;
        case 0x21f768u: goto label_21f768;
        case 0x21f76cu: goto label_21f76c;
        case 0x21f770u: goto label_21f770;
        case 0x21f774u: goto label_21f774;
        case 0x21f778u: goto label_21f778;
        case 0x21f77cu: goto label_21f77c;
        case 0x21f780u: goto label_21f780;
        case 0x21f784u: goto label_21f784;
        case 0x21f788u: goto label_21f788;
        case 0x21f78cu: goto label_21f78c;
        case 0x21f790u: goto label_21f790;
        case 0x21f794u: goto label_21f794;
        case 0x21f798u: goto label_21f798;
        case 0x21f79cu: goto label_21f79c;
        case 0x21f7a0u: goto label_21f7a0;
        case 0x21f7a4u: goto label_21f7a4;
        case 0x21f7a8u: goto label_21f7a8;
        case 0x21f7acu: goto label_21f7ac;
        case 0x21f7b0u: goto label_21f7b0;
        case 0x21f7b4u: goto label_21f7b4;
        case 0x21f7b8u: goto label_21f7b8;
        case 0x21f7bcu: goto label_21f7bc;
        case 0x21f7c0u: goto label_21f7c0;
        case 0x21f7c4u: goto label_21f7c4;
        case 0x21f7c8u: goto label_21f7c8;
        case 0x21f7ccu: goto label_21f7cc;
        case 0x21f7d0u: goto label_21f7d0;
        case 0x21f7d4u: goto label_21f7d4;
        case 0x21f7d8u: goto label_21f7d8;
        case 0x21f7dcu: goto label_21f7dc;
        case 0x21f7e0u: goto label_21f7e0;
        case 0x21f7e4u: goto label_21f7e4;
        case 0x21f7e8u: goto label_21f7e8;
        case 0x21f7ecu: goto label_21f7ec;
        default: break;
    }

    ctx->pc = 0x21eac0u;

label_21eac0:
    // 0x21eac0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x21eac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_21eac4:
    // 0x21eac4: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x21eac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_21eac8:
    // 0x21eac8: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x21eac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_21eacc:
    // 0x21eacc: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x21eaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_21ead0:
    // 0x21ead0: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x21ead0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_21ead4:
    // 0x21ead4: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x21ead4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_21ead8:
    // 0x21ead8: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x21ead8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_21eadc:
    // 0x21eadc: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x21eadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_21eae0:
    // 0x21eae0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x21eae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_21eae4:
    // 0x21eae4: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x21eae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_21eae8:
    // 0x21eae8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x21eae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_21eaec:
    // 0x21eaec: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x21eaecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_21eaf0:
    // 0x21eaf0: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x21eaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
label_21eaf4:
    // 0x21eaf4: 0x8c8201bc  lw          $v0, 0x1BC($a0)
    ctx->pc = 0x21eaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 444)));
label_21eaf8:
    // 0x21eaf8: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x21eaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_21eafc:
    // 0x21eafc: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x21eafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
label_21eb00:
    // 0x21eb00: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_21eb04:
    if (ctx->pc == 0x21EB04u) {
        ctx->pc = 0x21EB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB00u;
        // 0x21eb04: 0x8fa30038  lw          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EB08u;
        goto label_21eb08;
    }
    ctx->pc = 0x21EB00u;
    {
        const bool branch_taken_0x21eb00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB00u;
        // 0x21eb04: 0x8fa30038  lw          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eb00) {
            ctx->pc = 0x21EBCCu;
            goto label_21ebcc;
        }
    }
    ctx->pc = 0x21EB08u;
label_21eb08:
    // 0x21eb08: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x21eb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_21eb0c:
    // 0x21eb0c: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_21eb10:
    if (ctx->pc == 0x21EB10u) {
        ctx->pc = 0x21EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB0Cu;
        // 0x21eb10: 0x8fa80038  lw          $t0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EB14u;
        goto label_21eb14;
    }
    ctx->pc = 0x21EB0Cu;
    {
        const bool branch_taken_0x21eb0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB0Cu;
        // 0x21eb10: 0x8fa80038  lw          $t0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eb0c) {
            ctx->pc = 0x21EBD0u;
            goto label_21ebd0;
        }
    }
    ctx->pc = 0x21EB14u;
label_21eb14:
    // 0x21eb14: 0x8c660018  lw          $a2, 0x18($v1)
    ctx->pc = 0x21eb14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_21eb18:
    // 0x21eb18: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x21eb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21eb1c:
    // 0x21eb1c: 0x8c8701b8  lw          $a3, 0x1B8($a0)
    ctx->pc = 0x21eb1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 440)));
label_21eb20:
    // 0x21eb20: 0xa6282a  slt         $a1, $a1, $a2
    ctx->pc = 0x21eb20u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_21eb24:
    // 0x21eb24: 0x24c20007  addiu       $v0, $a2, 0x7
    ctx->pc = 0x21eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_21eb28:
    // 0x21eb28: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x21eb28u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6));
label_21eb2c:
    // 0x21eb2c: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x21eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_21eb30:
    // 0x21eb30: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x21eb30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_21eb34:
    // 0x21eb34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21eb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21eb38:
    // 0x21eb38: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x21eb38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
label_21eb3c:
    // 0x21eb3c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x21eb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_21eb40:
    // 0x21eb40: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x21eb40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
label_21eb44:
    // 0x21eb44: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x21eb44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_21eb48:
    // 0x21eb48: 0x8cc301b8  lw          $v1, 0x1B8($a2)
    ctx->pc = 0x21eb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 440)));
label_21eb4c:
    // 0x21eb4c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x21eb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_21eb50:
    // 0x21eb50: 0x40f809  jalr        $v0
label_21eb54:
    if (ctx->pc == 0x21EB54u) {
        ctx->pc = 0x21EB58u;
        goto label_21eb58;
    }
    ctx->pc = 0x21EB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21EB58u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EB50u, 0x21EB58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21EB58u;
label_21eb58:
    // 0x21eb58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_21eb5c:
    if (ctx->pc == 0x21EB5Cu) {
        ctx->pc = 0x21EB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB58u;
        // 0x21eb5c: 0x8fa70030  lw          $a3, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EB60u;
        goto label_21eb60;
    }
    ctx->pc = 0x21EB58u;
    {
        const bool branch_taken_0x21eb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB58u;
        // 0x21eb5c: 0x8fa70030  lw          $a3, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eb58) {
            ctx->pc = 0x21EB68u;
            goto label_21eb68;
        }
    }
    ctx->pc = 0x21EB60u;
label_21eb60:
    // 0x21eb60: 0x10000016  b           . + 4 + (0x16 << 2)
label_21eb64:
    if (ctx->pc == 0x21EB64u) {
        ctx->pc = 0x21EB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB60u;
        // 0x21eb64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EB68u;
        goto label_21eb68;
    }
    ctx->pc = 0x21EB60u;
    {
        const bool branch_taken_0x21eb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB60u;
        // 0x21eb64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eb60) {
            ctx->pc = 0x21EBBCu;
            goto label_21ebbc;
        }
    }
    ctx->pc = 0x21EB68u;
label_21eb68:
    // 0x21eb68: 0x8ce20148  lw          $v0, 0x148($a3)
    ctx->pc = 0x21eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 328)));
label_21eb6c:
    // 0x21eb6c: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
label_21eb70:
    if (ctx->pc == 0x21EB70u) {
        ctx->pc = 0x21EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB6Cu;
        // 0x21eb70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EB74u;
        goto label_21eb74;
    }
    ctx->pc = 0x21EB6Cu;
    {
        const bool branch_taken_0x21eb6c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x21EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB6Cu;
        // 0x21eb70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eb6c) {
            ctx->pc = 0x21EB9Cu;
            goto label_21eb9c;
        }
    }
    ctx->pc = 0x21EB74u;
label_21eb74:
    // 0x21eb74: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x21eb74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_21eb78:
    // 0x21eb78: 0x25030020  addiu       $v1, $t0, 0x20
    ctx->pc = 0x21eb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_21eb7c:
    // 0x21eb7c: 0x0  nop
    ctx->pc = 0x21eb7cu;
    // NOP
label_21eb80:
    // 0x21eb80: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x21eb80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_21eb84:
    // 0x21eb84: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x21eb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_21eb88:
    // 0x21eb88: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x21eb88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_21eb8c:
    // 0x21eb8c: 0x8ca20148  lw          $v0, 0x148($a1)
    ctx->pc = 0x21eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 328)));
label_21eb90:
    // 0x21eb90: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x21eb90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21eb94:
    // 0x21eb94: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_21eb98:
    if (ctx->pc == 0x21EB98u) {
        ctx->pc = 0x21EB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB94u;
        // 0x21eb98: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EB9Cu;
        goto label_21eb9c;
    }
    ctx->pc = 0x21EB94u;
    {
        const bool branch_taken_0x21eb94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB94u;
        // 0x21eb98: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eb94) {
            ctx->pc = 0x21EB80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21eb80;
        }
    }
    ctx->pc = 0x21EB9Cu;
label_21eb9c:
    // 0x21eb9c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x21eb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_21eba0:
    // 0x21eba0: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x21eba0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_21eba4:
    // 0x21eba4: 0x8cc20114  lw          $v0, 0x114($a2)
    ctx->pc = 0x21eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 276)));
label_21eba8:
    // 0x21eba8: 0xace20030  sw          $v0, 0x30($a3)
    ctx->pc = 0x21eba8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 2));
label_21ebac:
    // 0x21ebac: 0x8cc301a0  lw          $v1, 0x1A0($a2)
    ctx->pc = 0x21ebacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 416)));
label_21ebb0:
    // 0x21ebb0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_21ebb4:
    if (ctx->pc == 0x21EBB4u) {
        ctx->pc = 0x21EBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EBB0u;
        // 0x21ebb4: 0xace00008  sw          $zero, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EBB8u;
        goto label_21ebb8;
    }
    ctx->pc = 0x21EBB0u;
    {
        const bool branch_taken_0x21ebb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ebb0) {
            ctx->pc = 0x21EBB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21EBB0u;
            // 0x21ebb4: 0xace00008  sw          $zero, 0x8($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21EBB8u;
            goto label_21ebb8;
        }
    }
    ctx->pc = 0x21EBB8u;
label_21ebb8:
    // 0x21ebb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21ebbc:
    // 0x21ebbc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_21ebc0:
    if (ctx->pc == 0x21EBC0u) {
        ctx->pc = 0x21EBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EBBCu;
        // 0x21ebc0: 0x8fa80038  lw          $t0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EBC4u;
        goto label_21ebc4;
    }
    ctx->pc = 0x21EBBCu;
    {
        const bool branch_taken_0x21ebbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EBBCu;
        // 0x21ebc0: 0x8fa80038  lw          $t0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ebbc) {
            ctx->pc = 0x21EBD0u;
            goto label_21ebd0;
        }
    }
    ctx->pc = 0x21EBC4u;
label_21ebc4:
    // 0x21ebc4: 0x100002fe  b           . + 4 + (0x2FE << 2)
label_21ebc8:
    if (ctx->pc == 0x21EBC8u) {
        ctx->pc = 0x21EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EBC4u;
        // 0x21ebc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EBCCu;
        goto label_21ebcc;
    }
    ctx->pc = 0x21EBC4u;
    {
        const bool branch_taken_0x21ebc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EBC4u;
        // 0x21ebc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ebc4) {
            ctx->pc = 0x21F7C0u;
            goto label_21f7c0;
        }
    }
    ctx->pc = 0x21EBCCu;
label_21ebcc:
    // 0x21ebcc: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x21ebccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_21ebd0:
    // 0x21ebd0: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x21ebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_21ebd4:
    // 0x21ebd4: 0x144002f5  bnez        $v0, . + 4 + (0x2F5 << 2)
label_21ebd8:
    if (ctx->pc == 0x21EBD8u) {
        ctx->pc = 0x21EBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EBD4u;
        // 0x21ebd8: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EBDCu;
        goto label_21ebdc;
    }
    ctx->pc = 0x21EBD4u;
    {
        const bool branch_taken_0x21ebd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EBD4u;
        // 0x21ebd8: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ebd4) {
            ctx->pc = 0x21F7ACu;
            goto label_21f7ac;
        }
    }
    ctx->pc = 0x21EBDCu;
label_21ebdc:
    // 0x21ebdc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x21ebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_21ebe0:
    // 0x21ebe0: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x21ebe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_21ebe4:
    // 0x21ebe4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x21ebe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_21ebe8:
    // 0x21ebe8: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x21ebe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_21ebec:
    // 0x21ebec: 0x8c450164  lw          $a1, 0x164($v0)
    ctx->pc = 0x21ebecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 356)));
label_21ebf0:
    // 0x21ebf0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x21ebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_21ebf4:
    // 0x21ebf4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x21ebf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_21ebf8:
    // 0x21ebf8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x21ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_21ebfc:
    // 0x21ebfc: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x21ebfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_21ec00:
    // 0x21ec00: 0xdd090010  ld          $t1, 0x10($t0)
    ctx->pc = 0x21ec00u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 8), 16)));
label_21ec04:
    // 0x21ec04: 0x8d060018  lw          $a2, 0x18($t0)
    ctx->pc = 0x21ec04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_21ec08:
    // 0x21ec08: 0x69030027  ldl         $v1, 0x27($t0)
    ctx->pc = 0x21ec08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_21ec0c:
    // 0x21ec0c: 0x6d030020  ldr         $v1, 0x20($t0)
    ctx->pc = 0x21ec0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_21ec10:
    // 0x21ec10: 0x6904002f  ldl         $a0, 0x2F($t0)
    ctx->pc = 0x21ec10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_21ec14:
    // 0x21ec14: 0x6d040028  ldr         $a0, 0x28($t0)
    ctx->pc = 0x21ec14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_21ec18:
    // 0x21ec18: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x21ec18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_21ec1c:
    // 0x21ec1c: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x21ec1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_21ec20:
    // 0x21ec20: 0xb3a4002f  sdl         $a0, 0x2F($sp)
    ctx->pc = 0x21ec20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_21ec24:
    // 0x21ec24: 0xb7a40028  sdr         $a0, 0x28($sp)
    ctx->pc = 0x21ec24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_21ec28:
    // 0x21ec28: 0x18a002cd  blez        $a1, . + 4 + (0x2CD << 2)
label_21ec2c:
    if (ctx->pc == 0x21EC2Cu) {
        ctx->pc = 0x21EC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EC28u;
        // 0x21ec2c: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EC30u;
        goto label_21ec30;
    }
    ctx->pc = 0x21EC28u;
    {
        const bool branch_taken_0x21ec28 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x21EC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EC28u;
        // 0x21ec2c: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ec28) {
            ctx->pc = 0x21F760u;
            goto label_21f760;
        }
    }
    ctx->pc = 0x21EC30u;
label_21ec30:
    // 0x21ec30: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x21ec30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_21ec34:
    // 0x21ec34: 0x0  nop
    ctx->pc = 0x21ec34u;
    // NOP
label_21ec38:
    // 0x21ec38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x21ec38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_21ec3c:
    // 0x21ec3c: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x21ec3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_21ec40:
    // 0x21ec40: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x21ec40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_21ec44:
    // 0x21ec44: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x21ec44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_21ec48:
    // 0x21ec48: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x21ec48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_21ec4c:
    // 0x21ec4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21ec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21ec50:
    // 0x21ec50: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x21ec50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_21ec54:
    // 0x21ec54: 0xa72021  addu        $a0, $a1, $a3
    ctx->pc = 0x21ec54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_21ec58:
    // 0x21ec58: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x21ec58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_21ec5c:
    // 0x21ec5c: 0x28c20008  slti        $v0, $a2, 0x8
    ctx->pc = 0x21ec5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
label_21ec60:
    // 0x21ec60: 0x8c84007c  lw          $a0, 0x7C($a0)
    ctx->pc = 0x21ec60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_21ec64:
    // 0x21ec64: 0x8c770054  lw          $s7, 0x54($v1)
    ctx->pc = 0x21ec64u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_21ec68:
    // 0x21ec68: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_21ec6c:
    if (ctx->pc == 0x21EC6Cu) {
        ctx->pc = 0x21EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EC68u;
        // 0x21ec6c: 0xafa40044  sw          $a0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EC70u;
        goto label_21ec70;
    }
    ctx->pc = 0x21EC68u;
    {
        const bool branch_taken_0x21ec68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EC68u;
        // 0x21ec6c: 0xafa40044  sw          $a0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ec68) {
            ctx->pc = 0x21EDC8u;
            goto label_21edc8;
        }
    }
    ctx->pc = 0x21EC70u;
label_21ec70:
    // 0x21ec70: 0x8fb20014  lw          $s2, 0x14($sp)
    ctx->pc = 0x21ec70u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_21ec74:
    // 0x21ec74: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x21ec74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_21ec78:
    // 0x21ec78: 0x3a0b02d  daddu       $s6, $sp, $zero
    ctx->pc = 0x21ec78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21ec7c:
    // 0x21ec7c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x21ec7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21ec80:
    // 0x21ec80: 0x8e4201a0  lw          $v0, 0x1A0($s2)
    ctx->pc = 0x21ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
label_21ec84:
    // 0x21ec84: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x21ec84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_21ec88:
    // 0x21ec88: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_21ec8c:
    if (ctx->pc == 0x21EC8Cu) {
        ctx->pc = 0x21EC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EC88u;
        // 0x21ec8c: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EC90u;
        goto label_21ec90;
    }
    ctx->pc = 0x21EC88u;
    {
        const bool branch_taken_0x21ec88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EC88u;
        // 0x21ec8c: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ec88) {
            ctx->pc = 0x21ED44u;
            goto label_21ed44;
        }
    }
    ctx->pc = 0x21EC90u;
label_21ec90:
    // 0x21ec90: 0x28c20019  slti        $v0, $a2, 0x19
    ctx->pc = 0x21ec90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)25) ? 1 : 0);
label_21ec94:
    // 0x21ec94: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_21ec98:
    if (ctx->pc == 0x21EC98u) {
        ctx->pc = 0x21EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EC94u;
        // 0x21ec98: 0x241e00ff  addiu       $fp, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EC9Cu;
        goto label_21ec9c;
    }
    ctx->pc = 0x21EC94u;
    {
        const bool branch_taken_0x21ec94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EC94u;
        // 0x21ec98: 0x241e00ff  addiu       $fp, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ec94) {
            ctx->pc = 0x21ED98u;
            goto label_21ed98;
        }
    }
    ctx->pc = 0x21EC9Cu;
label_21ec9c:
    // 0x21ec9c: 0x0  nop
    ctx->pc = 0x21ec9cu;
    // NOP
label_21eca0:
    // 0x21eca0: 0x5620000b  bnel        $s1, $zero, . + 4 + (0xB << 2)
label_21eca4:
    if (ctx->pc == 0x21ECA4u) {
        ctx->pc = 0x21ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ECA0u;
        // 0x21eca4: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ECA8u;
        goto label_21eca8;
    }
    ctx->pc = 0x21ECA0u;
    {
        const bool branch_taken_0x21eca0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x21eca0) {
            ctx->pc = 0x21ECA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21ECA0u;
            // 0x21eca4: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21ECD0u;
            goto label_21ecd0;
        }
    }
    ctx->pc = 0x21ECA8u;
label_21eca8:
    // 0x21eca8: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x21eca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_21ecac:
    // 0x21ecac: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x21ecacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_21ecb0:
    // 0x21ecb0: 0x40f809  jalr        $v0
label_21ecb4:
    if (ctx->pc == 0x21ECB4u) {
        ctx->pc = 0x21ECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ECB0u;
        // 0x21ecb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ECB8u;
        goto label_21ecb8;
    }
    ctx->pc = 0x21ECB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21ECB8u);
        ctx->pc = 0x21ECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ECB0u;
        // 0x21ecb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21ECB0u, 0x21ECB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21ECB8u;
label_21ecb8:
    // 0x21ecb8: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_21ecbc:
    if (ctx->pc == 0x21ECBCu) {
        ctx->pc = 0x21ECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ECB8u;
        // 0x21ecbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ECC0u;
        goto label_21ecc0;
    }
    ctx->pc = 0x21ECB8u;
    {
        const bool branch_taken_0x21ecb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ECB8u;
        // 0x21ecbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ecb8) {
            ctx->pc = 0x21EDACu;
            goto label_21edac;
        }
    }
    ctx->pc = 0x21ECC0u;
label_21ecc0:
    // 0x21ecc0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x21ecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_21ecc4:
    // 0x21ecc4: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x21ecc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21ecc8:
    // 0x21ecc8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x21ecc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21eccc:
    // 0x21eccc: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x21ecccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_21ecd0:
    // 0x21ecd0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x21ecd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_21ecd4:
    // 0x21ecd4: 0x14de0014  bne         $a2, $fp, . + 4 + (0x14 << 2)
label_21ecd8:
    if (ctx->pc == 0x21ECD8u) {
        ctx->pc = 0x21ECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ECD4u;
        // 0x21ecd8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ECDCu;
        goto label_21ecdc;
    }
    ctx->pc = 0x21ECD4u;
    {
        const bool branch_taken_0x21ecd4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 30));
        ctx->pc = 0x21ECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ECD4u;
        // 0x21ecd8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ecd4) {
            ctx->pc = 0x21ED28u;
            goto label_21ed28;
        }
    }
    ctx->pc = 0x21ECDCu;
label_21ecdc:
    // 0x21ecdc: 0x241500ff  addiu       $s5, $zero, 0xFF
    ctx->pc = 0x21ecdcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_21ece0:
    // 0x21ece0: 0x5620000b  bnel        $s1, $zero, . + 4 + (0xB << 2)
label_21ece4:
    if (ctx->pc == 0x21ECE4u) {
        ctx->pc = 0x21ECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ECE0u;
        // 0x21ece4: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ECE8u;
        goto label_21ece8;
    }
    ctx->pc = 0x21ECE0u;
    {
        const bool branch_taken_0x21ece0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ece0) {
            ctx->pc = 0x21ECE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21ECE0u;
            // 0x21ece4: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21ED10u;
            goto label_21ed10;
        }
    }
    ctx->pc = 0x21ECE8u;
label_21ece8:
    // 0x21ece8: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x21ece8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_21ecec:
    // 0x21ecec: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x21ececu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_21ecf0:
    // 0x21ecf0: 0x40f809  jalr        $v0
label_21ecf4:
    if (ctx->pc == 0x21ECF4u) {
        ctx->pc = 0x21ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ECF0u;
        // 0x21ecf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ECF8u;
        goto label_21ecf8;
    }
    ctx->pc = 0x21ECF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21ECF8u);
        ctx->pc = 0x21ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ECF0u;
        // 0x21ecf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21ECF0u, 0x21ECF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21ECF8u;
label_21ecf8:
    // 0x21ecf8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_21ecfc:
    if (ctx->pc == 0x21ECFCu) {
        ctx->pc = 0x21ECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ECF8u;
        // 0x21ecfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ED00u;
        goto label_21ed00;
    }
    ctx->pc = 0x21ECF8u;
    {
        const bool branch_taken_0x21ecf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ECF8u;
        // 0x21ecfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ecf8) {
            ctx->pc = 0x21EDACu;
            goto label_21edac;
        }
    }
    ctx->pc = 0x21ED00u;
label_21ed00:
    // 0x21ed00: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x21ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_21ed04:
    // 0x21ed04: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x21ed04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21ed08:
    // 0x21ed08: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x21ed08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21ed0c:
    // 0x21ed0c: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x21ed0cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_21ed10:
    // 0x21ed10: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x21ed10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_21ed14:
    // 0x21ed14: 0x10d5fff2  beq         $a2, $s5, . + 4 + (-0xE << 2)
label_21ed18:
    if (ctx->pc == 0x21ED18u) {
        ctx->pc = 0x21ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED14u;
        // 0x21ed18: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ED1Cu;
        goto label_21ed1c;
    }
    ctx->pc = 0x21ED14u;
    {
        const bool branch_taken_0x21ed14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 21));
        ctx->pc = 0x21ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED14u;
        // 0x21ed18: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ed14) {
            ctx->pc = 0x21ECE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ece0;
        }
    }
    ctx->pc = 0x21ED1Cu;
label_21ed1c:
    // 0x21ed1c: 0x54c00009  bnel        $a2, $zero, . + 4 + (0x9 << 2)
label_21ed20:
    if (ctx->pc == 0x21ED20u) {
        ctx->pc = 0x21ED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED1Cu;
        // 0x21ed20: 0xae4601a0  sw          $a2, 0x1A0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ED24u;
        goto label_21ed24;
    }
    ctx->pc = 0x21ED1Cu;
    {
        const bool branch_taken_0x21ed1c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ed1c) {
            ctx->pc = 0x21ED20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21ED1Cu;
            // 0x21ed20: 0xae4601a0  sw          $a2, 0x1A0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21ED44u;
            goto label_21ed44;
        }
    }
    ctx->pc = 0x21ED24u;
label_21ed24:
    // 0x21ed24: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x21ed24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_21ed28:
    // 0x21ed28: 0x141a38  dsll        $v1, $s4, 8
    ctx->pc = 0x21ed28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << 8);
label_21ed2c:
    // 0x21ed2c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x21ed2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_21ed30:
    // 0x21ed30: 0x2a620019  slti        $v0, $s3, 0x19
    ctx->pc = 0x21ed30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)25) ? 1 : 0);
label_21ed34:
    // 0x21ed34: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_21ed38:
    if (ctx->pc == 0x21ED38u) {
        ctx->pc = 0x21ED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED34u;
        // 0x21ed38: 0xc3a025  or          $s4, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ED3Cu;
        goto label_21ed3c;
    }
    ctx->pc = 0x21ED34u;
    {
        const bool branch_taken_0x21ed34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21ED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED34u;
        // 0x21ed38: 0xc3a025  or          $s4, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ed34) {
            ctx->pc = 0x21ECA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21eca0;
        }
    }
    ctx->pc = 0x21ED3Cu;
label_21ed3c:
    // 0x21ed3c: 0x10000017  b           . + 4 + (0x17 << 2)
label_21ed40:
    if (ctx->pc == 0x21ED40u) {
        ctx->pc = 0x21ED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED3Cu;
        // 0x21ed40: 0xaed30010  sw          $s3, 0x10($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ED44u;
        goto label_21ed44;
    }
    ctx->pc = 0x21ED3Cu;
    {
        const bool branch_taken_0x21ed3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED3Cu;
        // 0x21ed40: 0xaed30010  sw          $s3, 0x10($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ed3c) {
            ctx->pc = 0x21ED9Cu;
            goto label_21ed9c;
        }
    }
    ctx->pc = 0x21ED44u;
label_21ed44:
    // 0x21ed44: 0x6630015  bgezl       $s3, . + 4 + (0x15 << 2)
label_21ed48:
    if (ctx->pc == 0x21ED48u) {
        ctx->pc = 0x21ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED44u;
        // 0x21ed48: 0xaed30010  sw          $s3, 0x10($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ED4Cu;
        goto label_21ed4c;
    }
    ctx->pc = 0x21ED44u;
    {
        const bool branch_taken_0x21ed44 = (GPR_S64(ctx, 19) >= 0);
        if (branch_taken_0x21ed44) {
            ctx->pc = 0x21ED48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21ED44u;
            // 0x21ed48: 0xaed30010  sw          $s3, 0x10($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21ED9Cu;
            goto label_21ed9c;
        }
    }
    ctx->pc = 0x21ED4Cu;
label_21ed4c:
    // 0x21ed4c: 0x8e4201bc  lw          $v0, 0x1BC($s2)
    ctx->pc = 0x21ed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
label_21ed50:
    // 0x21ed50: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x21ed50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_21ed54:
    // 0x21ed54: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_21ed58:
    if (ctx->pc == 0x21ED58u) {
        ctx->pc = 0x21ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED54u;
        // 0x21ed58: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ED5Cu;
        goto label_21ed5c;
    }
    ctx->pc = 0x21ED54u;
    {
        const bool branch_taken_0x21ed54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED54u;
        // 0x21ed58: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ed54) {
            ctx->pc = 0x21ED8Cu;
            goto label_21ed8c;
        }
    }
    ctx->pc = 0x21ED5Cu;
label_21ed5c:
    // 0x21ed5c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x21ed5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21ed60:
    // 0x21ed60: 0x24030075  addiu       $v1, $zero, 0x75
    ctx->pc = 0x21ed60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_21ed64:
    // 0x21ed64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21ed64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21ed68:
    // 0x21ed68: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x21ed68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
label_21ed6c:
    // 0x21ed6c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21ed70:
    // 0x21ed70: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21ed70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21ed74:
    // 0x21ed74: 0x60f809  jalr        $v1
label_21ed78:
    if (ctx->pc == 0x21ED78u) {
        ctx->pc = 0x21ED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED74u;
        // 0x21ed78: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ED7Cu;
        goto label_21ed7c;
    }
    ctx->pc = 0x21ED74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21ED7Cu);
        ctx->pc = 0x21ED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED74u;
        // 0x21ed78: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21ED74u, 0x21ED7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21ED7Cu;
label_21ed7c:
    // 0x21ed7c: 0x8e4401bc  lw          $a0, 0x1BC($s2)
    ctx->pc = 0x21ed7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
label_21ed80:
    // 0x21ed80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21ed80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21ed84:
    // 0x21ed84: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x21ed84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_21ed88:
    // 0x21ed88: 0x24080019  addiu       $t0, $zero, 0x19
    ctx->pc = 0x21ed88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_21ed8c:
    // 0x21ed8c: 0x1131023  subu        $v0, $t0, $s3
    ctx->pc = 0x21ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
label_21ed90:
    // 0x21ed90: 0x54a014  dsllv       $s4, $s4, $v0
    ctx->pc = 0x21ed90u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (GPR_U32(ctx, 2) & 0x3F));
label_21ed94:
    // 0x21ed94: 0x24130019  addiu       $s3, $zero, 0x19
    ctx->pc = 0x21ed94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_21ed98:
    // 0x21ed98: 0xaed30010  sw          $s3, 0x10($s6)
    ctx->pc = 0x21ed98u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 19));
label_21ed9c:
    // 0x21ed9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21ed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21eda0:
    // 0x21eda0: 0xaed00000  sw          $s0, 0x0($s6)
    ctx->pc = 0x21eda0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
label_21eda4:
    // 0x21eda4: 0xaed10004  sw          $s1, 0x4($s6)
    ctx->pc = 0x21eda4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 17));
label_21eda8:
    // 0x21eda8: 0xfed40008  sd          $s4, 0x8($s6)
    ctx->pc = 0x21eda8u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 20));
label_21edac:
    // 0x21edac: 0x1040ff85  beqz        $v0, . + 4 + (-0x7B << 2)
label_21edb0:
    if (ctx->pc == 0x21EDB0u) {
        ctx->pc = 0x21EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDACu;
        // 0x21edb0: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EDB4u;
        goto label_21edb4;
    }
    ctx->pc = 0x21EDACu;
    {
        const bool branch_taken_0x21edac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDACu;
        // 0x21edb0: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21edac) {
            ctx->pc = 0x21EBC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ebc4;
        }
    }
    ctx->pc = 0x21EDB4u;
label_21edb4:
    // 0x21edb4: 0x28c20008  slti        $v0, $a2, 0x8
    ctx->pc = 0x21edb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
label_21edb8:
    // 0x21edb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21edbc:
    if (ctx->pc == 0x21EDBCu) {
        ctx->pc = 0x21EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDB8u;
        // 0x21edbc: 0xdfa90008  ld          $t1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EDC0u;
        goto label_21edc0;
    }
    ctx->pc = 0x21EDB8u;
    {
        const bool branch_taken_0x21edb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDB8u;
        // 0x21edbc: 0xdfa90008  ld          $t1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21edb8) {
            ctx->pc = 0x21EDC8u;
            goto label_21edc8;
        }
    }
    ctx->pc = 0x21EDC0u;
label_21edc0:
    // 0x21edc0: 0x1000000f  b           . + 4 + (0xF << 2)
label_21edc4:
    if (ctx->pc == 0x21EDC4u) {
        ctx->pc = 0x21EDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDC0u;
        // 0x21edc4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EDC8u;
        goto label_21edc8;
    }
    ctx->pc = 0x21EDC0u;
    {
        const bool branch_taken_0x21edc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDC0u;
        // 0x21edc4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21edc0) {
            ctx->pc = 0x21EE00u;
            goto label_21ee00;
        }
    }
    ctx->pc = 0x21EDC8u;
label_21edc8:
    // 0x21edc8: 0x24c2fff8  addiu       $v0, $a2, -0x8
    ctx->pc = 0x21edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
label_21edcc:
    // 0x21edcc: 0x491017  dsrav       $v0, $t1, $v0
    ctx->pc = 0x21edccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 9) >> (GPR_U32(ctx, 2) & 0x3F));
label_21edd0:
    // 0x21edd0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21edd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_21edd4:
    // 0x21edd4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21edd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_21edd8:
    // 0x21edd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21edd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_21eddc:
    // 0x21eddc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x21eddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21ede0:
    // 0x21ede0: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x21ede0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_21ede4:
    // 0x21ede4: 0x8c68011c  lw          $t0, 0x11C($v1)
    ctx->pc = 0x21ede4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_21ede8:
    // 0x21ede8: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_21edec:
    if (ctx->pc == 0x21EDECu) {
        ctx->pc = 0x21EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDE8u;
        // 0x21edec: 0x2e21021  addu        $v0, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EDF0u;
        goto label_21edf0;
    }
    ctx->pc = 0x21EDE8u;
    {
        const bool branch_taken_0x21ede8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDE8u;
        // 0x21edec: 0x2e21021  addu        $v0, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ede8) {
            ctx->pc = 0x21EDFCu;
            goto label_21edfc;
        }
    }
    ctx->pc = 0x21EDF0u;
label_21edf0:
    // 0x21edf0: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x21edf0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_21edf4:
    // 0x21edf4: 0x1000000a  b           . + 4 + (0xA << 2)
label_21edf8:
    if (ctx->pc == 0x21EDF8u) {
        ctx->pc = 0x21EDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDF4u;
        // 0x21edf8: 0x9053051c  lbu         $s3, 0x51C($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EDFCu;
        goto label_21edfc;
    }
    ctx->pc = 0x21EDF4u;
    {
        const bool branch_taken_0x21edf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDF4u;
        // 0x21edf8: 0x9053051c  lbu         $s3, 0x51C($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21edf4) {
            ctx->pc = 0x21EE20u;
            goto label_21ee20;
        }
    }
    ctx->pc = 0x21EDFCu;
label_21edfc:
    // 0x21edfc: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x21edfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_21ee00:
    // 0x21ee00: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x21ee00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_21ee04:
    // 0x21ee04: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x21ee04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_21ee08:
    // 0x21ee08: 0xc0879b4  jal         func_21E6D0
label_21ee0c:
    if (ctx->pc == 0x21EE0Cu) {
        ctx->pc = 0x21EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE08u;
        // 0x21ee0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EE10u;
        goto label_21ee10;
    }
    ctx->pc = 0x21EE08u;
    SET_GPR_U32(ctx, 31, 0x21EE10u);
    ctx->pc = 0x21EE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EE08u;
    // 0x21ee0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E6D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21E6D0u, 0x21EE08u, 0x21EE10u)) {
        return;
    }
    ctx->pc = 0x21EE10u;
label_21ee10:
    // 0x21ee10: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x21ee10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21ee14:
    // 0x21ee14: 0x660ff6b  bltz        $s3, . + 4 + (-0x95 << 2)
label_21ee18:
    if (ctx->pc == 0x21EE18u) {
        ctx->pc = 0x21EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE14u;
        // 0x21ee18: 0xdfa90008  ld          $t1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EE1Cu;
        goto label_21ee1c;
    }
    ctx->pc = 0x21EE14u;
    {
        const bool branch_taken_0x21ee14 = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x21EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE14u;
        // 0x21ee18: 0xdfa90008  ld          $t1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee14) {
            ctx->pc = 0x21EBC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ebc4;
        }
    }
    ctx->pc = 0x21EE1Cu;
label_21ee1c:
    // 0x21ee1c: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x21ee1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_21ee20:
    // 0x21ee20: 0x1260006a  beqz        $s3, . + 4 + (0x6A << 2)
label_21ee24:
    if (ctx->pc == 0x21EE24u) {
        ctx->pc = 0x21EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE20u;
        // 0x21ee24: 0xd3102a  slt         $v0, $a2, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EE28u;
        goto label_21ee28;
    }
    ctx->pc = 0x21EE20u;
    {
        const bool branch_taken_0x21ee20 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE20u;
        // 0x21ee24: 0xd3102a  slt         $v0, $a2, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee20) {
            ctx->pc = 0x21EFCCu;
            goto label_21efcc;
        }
    }
    ctx->pc = 0x21EE28u;
label_21ee28:
    // 0x21ee28: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_21ee2c:
    if (ctx->pc == 0x21EE2Cu) {
        ctx->pc = 0x21EE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE28u;
        // 0x21ee2c: 0x8fb10014  lw          $s1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EE30u;
        goto label_21ee30;
    }
    ctx->pc = 0x21EE28u;
    {
        const bool branch_taken_0x21ee28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE28u;
        // 0x21ee2c: 0x8fb10014  lw          $s1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee28) {
            ctx->pc = 0x21EF74u;
            goto label_21ef74;
        }
    }
    ctx->pc = 0x21EE30u;
label_21ee30:
    // 0x21ee30: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x21ee30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_21ee34:
    // 0x21ee34: 0x3a0b82d  daddu       $s7, $sp, $zero
    ctx->pc = 0x21ee34u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21ee38:
    // 0x21ee38: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x21ee38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21ee3c:
    // 0x21ee3c: 0x8e2201a0  lw          $v0, 0x1A0($s1)
    ctx->pc = 0x21ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_21ee40:
    // 0x21ee40: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x21ee40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_21ee44:
    // 0x21ee44: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_21ee48:
    if (ctx->pc == 0x21EE48u) {
        ctx->pc = 0x21EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE44u;
        // 0x21ee48: 0x8fb20004  lw          $s2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EE4Cu;
        goto label_21ee4c;
    }
    ctx->pc = 0x21EE44u;
    {
        const bool branch_taken_0x21ee44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE44u;
        // 0x21ee48: 0x8fb20004  lw          $s2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee44) {
            ctx->pc = 0x21EEFCu;
            goto label_21eefc;
        }
    }
    ctx->pc = 0x21EE4Cu;
label_21ee4c:
    // 0x21ee4c: 0x28c20019  slti        $v0, $a2, 0x19
    ctx->pc = 0x21ee4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)25) ? 1 : 0);
label_21ee50:
    // 0x21ee50: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_21ee54:
    if (ctx->pc == 0x21EE54u) {
        ctx->pc = 0x21EE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE50u;
        // 0x21ee54: 0x241e00ff  addiu       $fp, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EE58u;
        goto label_21ee58;
    }
    ctx->pc = 0x21EE50u;
    {
        const bool branch_taken_0x21ee50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE50u;
        // 0x21ee54: 0x241e00ff  addiu       $fp, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee50) {
            ctx->pc = 0x21EF54u;
            goto label_21ef54;
        }
    }
    ctx->pc = 0x21EE58u;
label_21ee58:
    // 0x21ee58: 0x5640000b  bnel        $s2, $zero, . + 4 + (0xB << 2)
label_21ee5c:
    if (ctx->pc == 0x21EE5Cu) {
        ctx->pc = 0x21EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE58u;
        // 0x21ee5c: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EE60u;
        goto label_21ee60;
    }
    ctx->pc = 0x21EE58u;
    {
        const bool branch_taken_0x21ee58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ee58) {
            ctx->pc = 0x21EE5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21EE58u;
            // 0x21ee5c: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21EE88u;
            goto label_21ee88;
        }
    }
    ctx->pc = 0x21EE60u;
label_21ee60:
    // 0x21ee60: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x21ee60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_21ee64:
    // 0x21ee64: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x21ee64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_21ee68:
    // 0x21ee68: 0x40f809  jalr        $v0
label_21ee6c:
    if (ctx->pc == 0x21EE6Cu) {
        ctx->pc = 0x21EE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE68u;
        // 0x21ee6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EE70u;
        goto label_21ee70;
    }
    ctx->pc = 0x21EE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21EE70u);
        ctx->pc = 0x21EE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE68u;
        // 0x21ee6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EE68u, 0x21EE70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21EE70u;
label_21ee70:
    // 0x21ee70: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_21ee74:
    if (ctx->pc == 0x21EE74u) {
        ctx->pc = 0x21EE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE70u;
        // 0x21ee74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EE78u;
        goto label_21ee78;
    }
    ctx->pc = 0x21EE70u;
    {
        const bool branch_taken_0x21ee70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE70u;
        // 0x21ee74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee70) {
            ctx->pc = 0x21EF68u;
            goto label_21ef68;
        }
    }
    ctx->pc = 0x21EE78u;
label_21ee78:
    // 0x21ee78: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x21ee78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_21ee7c:
    // 0x21ee7c: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x21ee7cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21ee80:
    // 0x21ee80: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x21ee80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21ee84:
    // 0x21ee84: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x21ee84u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_21ee88:
    // 0x21ee88: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x21ee88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_21ee8c:
    // 0x21ee8c: 0x14de0014  bne         $a2, $fp, . + 4 + (0x14 << 2)
label_21ee90:
    if (ctx->pc == 0x21EE90u) {
        ctx->pc = 0x21EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE8Cu;
        // 0x21ee90: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EE94u;
        goto label_21ee94;
    }
    ctx->pc = 0x21EE8Cu;
    {
        const bool branch_taken_0x21ee8c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 30));
        ctx->pc = 0x21EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE8Cu;
        // 0x21ee90: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee8c) {
            ctx->pc = 0x21EEE0u;
            goto label_21eee0;
        }
    }
    ctx->pc = 0x21EE94u;
label_21ee94:
    // 0x21ee94: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x21ee94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_21ee98:
    // 0x21ee98: 0x5640000b  bnel        $s2, $zero, . + 4 + (0xB << 2)
label_21ee9c:
    if (ctx->pc == 0x21EE9Cu) {
        ctx->pc = 0x21EE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE98u;
        // 0x21ee9c: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EEA0u;
        goto label_21eea0;
    }
    ctx->pc = 0x21EE98u;
    {
        const bool branch_taken_0x21ee98 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ee98) {
            ctx->pc = 0x21EE9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21EE98u;
            // 0x21ee9c: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21EEC8u;
            goto label_21eec8;
        }
    }
    ctx->pc = 0x21EEA0u;
label_21eea0:
    // 0x21eea0: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x21eea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_21eea4:
    // 0x21eea4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x21eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_21eea8:
    // 0x21eea8: 0x40f809  jalr        $v0
label_21eeac:
    if (ctx->pc == 0x21EEACu) {
        ctx->pc = 0x21EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EEA8u;
        // 0x21eeac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EEB0u;
        goto label_21eeb0;
    }
    ctx->pc = 0x21EEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21EEB0u);
        ctx->pc = 0x21EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EEA8u;
        // 0x21eeac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EEA8u, 0x21EEB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21EEB0u;
label_21eeb0:
    // 0x21eeb0: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_21eeb4:
    if (ctx->pc == 0x21EEB4u) {
        ctx->pc = 0x21EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EEB0u;
        // 0x21eeb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EEB8u;
        goto label_21eeb8;
    }
    ctx->pc = 0x21EEB0u;
    {
        const bool branch_taken_0x21eeb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EEB0u;
        // 0x21eeb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eeb0) {
            ctx->pc = 0x21EF68u;
            goto label_21ef68;
        }
    }
    ctx->pc = 0x21EEB8u;
label_21eeb8:
    // 0x21eeb8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x21eeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_21eebc:
    // 0x21eebc: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x21eebcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21eec0:
    // 0x21eec0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x21eec0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21eec4:
    // 0x21eec4: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x21eec4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_21eec8:
    // 0x21eec8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x21eec8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_21eecc:
    // 0x21eecc: 0x10d6fff2  beq         $a2, $s6, . + 4 + (-0xE << 2)
label_21eed0:
    if (ctx->pc == 0x21EED0u) {
        ctx->pc = 0x21EED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EECCu;
        // 0x21eed0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EED4u;
        goto label_21eed4;
    }
    ctx->pc = 0x21EECCu;
    {
        const bool branch_taken_0x21eecc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 22));
        ctx->pc = 0x21EED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EECCu;
        // 0x21eed0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eecc) {
            ctx->pc = 0x21EE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ee98;
        }
    }
    ctx->pc = 0x21EED4u;
label_21eed4:
    // 0x21eed4: 0x54c00009  bnel        $a2, $zero, . + 4 + (0x9 << 2)
label_21eed8:
    if (ctx->pc == 0x21EED8u) {
        ctx->pc = 0x21EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EED4u;
        // 0x21eed8: 0xae2601a0  sw          $a2, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EEDCu;
        goto label_21eedc;
    }
    ctx->pc = 0x21EED4u;
    {
        const bool branch_taken_0x21eed4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x21eed4) {
            ctx->pc = 0x21EED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21EED4u;
            // 0x21eed8: 0xae2601a0  sw          $a2, 0x1A0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21EEFCu;
            goto label_21eefc;
        }
    }
    ctx->pc = 0x21EEDCu;
label_21eedc:
    // 0x21eedc: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x21eedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_21eee0:
    // 0x21eee0: 0x151a38  dsll        $v1, $s5, 8
    ctx->pc = 0x21eee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << 8);
label_21eee4:
    // 0x21eee4: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x21eee4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_21eee8:
    // 0x21eee8: 0x2a820019  slti        $v0, $s4, 0x19
    ctx->pc = 0x21eee8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)25) ? 1 : 0);
label_21eeec:
    // 0x21eeec: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_21eef0:
    if (ctx->pc == 0x21EEF0u) {
        ctx->pc = 0x21EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EEECu;
        // 0x21eef0: 0xc3a825  or          $s5, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EEF4u;
        goto label_21eef4;
    }
    ctx->pc = 0x21EEECu;
    {
        const bool branch_taken_0x21eeec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EEECu;
        // 0x21eef0: 0xc3a825  or          $s5, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eeec) {
            ctx->pc = 0x21EE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ee58;
        }
    }
    ctx->pc = 0x21EEF4u;
label_21eef4:
    // 0x21eef4: 0x10000018  b           . + 4 + (0x18 << 2)
label_21eef8:
    if (ctx->pc == 0x21EEF8u) {
        ctx->pc = 0x21EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EEF4u;
        // 0x21eef8: 0xaef40010  sw          $s4, 0x10($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EEFCu;
        goto label_21eefc;
    }
    ctx->pc = 0x21EEF4u;
    {
        const bool branch_taken_0x21eef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EEF4u;
        // 0x21eef8: 0xaef40010  sw          $s4, 0x10($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eef4) {
            ctx->pc = 0x21EF58u;
            goto label_21ef58;
        }
    }
    ctx->pc = 0x21EEFCu;
label_21eefc:
    // 0x21eefc: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x21eefcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_21ef00:
    // 0x21ef00: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_21ef04:
    if (ctx->pc == 0x21EF04u) {
        ctx->pc = 0x21EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF00u;
        // 0x21ef04: 0xaef40010  sw          $s4, 0x10($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EF08u;
        goto label_21ef08;
    }
    ctx->pc = 0x21EF00u;
    {
        const bool branch_taken_0x21ef00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ef00) {
            ctx->pc = 0x21EF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21EF00u;
            // 0x21ef04: 0xaef40010  sw          $s4, 0x10($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21EF58u;
            goto label_21ef58;
        }
    }
    ctx->pc = 0x21EF08u;
label_21ef08:
    // 0x21ef08: 0x8e2201bc  lw          $v0, 0x1BC($s1)
    ctx->pc = 0x21ef08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
label_21ef0c:
    // 0x21ef0c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x21ef0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_21ef10:
    // 0x21ef10: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_21ef14:
    if (ctx->pc == 0x21EF14u) {
        ctx->pc = 0x21EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF10u;
        // 0x21ef14: 0x24030019  addiu       $v1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EF18u;
        goto label_21ef18;
    }
    ctx->pc = 0x21EF10u;
    {
        const bool branch_taken_0x21ef10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF10u;
        // 0x21ef14: 0x24030019  addiu       $v1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef10) {
            ctx->pc = 0x21EF48u;
            goto label_21ef48;
        }
    }
    ctx->pc = 0x21EF18u;
label_21ef18:
    // 0x21ef18: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x21ef18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21ef1c:
    // 0x21ef1c: 0x24030075  addiu       $v1, $zero, 0x75
    ctx->pc = 0x21ef1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_21ef20:
    // 0x21ef20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21ef20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21ef24:
    // 0x21ef24: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x21ef24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
label_21ef28:
    // 0x21ef28: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21ef2c:
    // 0x21ef2c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21ef2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21ef30:
    // 0x21ef30: 0x60f809  jalr        $v1
label_21ef34:
    if (ctx->pc == 0x21EF34u) {
        ctx->pc = 0x21EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF30u;
        // 0x21ef34: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EF38u;
        goto label_21ef38;
    }
    ctx->pc = 0x21EF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21EF38u);
        ctx->pc = 0x21EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF30u;
        // 0x21ef34: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EF30u, 0x21EF38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21EF38u;
label_21ef38:
    // 0x21ef38: 0x8e2401bc  lw          $a0, 0x1BC($s1)
    ctx->pc = 0x21ef38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
label_21ef3c:
    // 0x21ef3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21ef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21ef40:
    // 0x21ef40: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x21ef40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_21ef44:
    // 0x21ef44: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x21ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_21ef48:
    // 0x21ef48: 0x741023  subu        $v0, $v1, $s4
    ctx->pc = 0x21ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_21ef4c:
    // 0x21ef4c: 0x55a814  dsllv       $s5, $s5, $v0
    ctx->pc = 0x21ef4cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (GPR_U32(ctx, 2) & 0x3F));
label_21ef50:
    // 0x21ef50: 0x24140019  addiu       $s4, $zero, 0x19
    ctx->pc = 0x21ef50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_21ef54:
    // 0x21ef54: 0xaef40010  sw          $s4, 0x10($s7)
    ctx->pc = 0x21ef54u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 20));
label_21ef58:
    // 0x21ef58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21ef58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21ef5c:
    // 0x21ef5c: 0xaef00000  sw          $s0, 0x0($s7)
    ctx->pc = 0x21ef5cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 16));
label_21ef60:
    // 0x21ef60: 0xaef20004  sw          $s2, 0x4($s7)
    ctx->pc = 0x21ef60u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 18));
label_21ef64:
    // 0x21ef64: 0xfef50008  sd          $s5, 0x8($s7)
    ctx->pc = 0x21ef64u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 21));
label_21ef68:
    // 0x21ef68: 0x1040ff16  beqz        $v0, . + 4 + (-0xEA << 2)
label_21ef6c:
    if (ctx->pc == 0x21EF6Cu) {
        ctx->pc = 0x21EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF68u;
        // 0x21ef6c: 0xdfa90008  ld          $t1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EF70u;
        goto label_21ef70;
    }
    ctx->pc = 0x21EF68u;
    {
        const bool branch_taken_0x21ef68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF68u;
        // 0x21ef6c: 0xdfa90008  ld          $t1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef68) {
            ctx->pc = 0x21EBC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ebc4;
        }
    }
    ctx->pc = 0x21EF70u;
label_21ef70:
    // 0x21ef70: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x21ef70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_21ef74:
    // 0x21ef74: 0x3c08006a  lui         $t0, 0x6A
    ctx->pc = 0x21ef74u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)106 << 16));
label_21ef78:
    // 0x21ef78: 0x133880  sll         $a3, $s3, 2
    ctx->pc = 0x21ef78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_21ef7c:
    // 0x21ef7c: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x21ef7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_21ef80:
    // 0x21ef80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21ef80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21ef84:
    // 0x21ef84: 0x25086670  addiu       $t0, $t0, 0x6670
    ctx->pc = 0x21ef84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 26224));
label_21ef88:
    // 0x21ef88: 0xc92017  dsrav       $a0, $t1, $a2
    ctx->pc = 0x21ef88u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 9) >> (GPR_U32(ctx, 6) & 0x3F));
label_21ef8c:
    // 0x21ef8c: 0x2631804  sllv        $v1, $v1, $s3
    ctx->pc = 0x21ef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 19) & 0x1F));
label_21ef90:
    // 0x21ef90: 0xe82821  addu        $a1, $a3, $t0
    ctx->pc = 0x21ef90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_21ef94:
    // 0x21ef94: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x21ef94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_21ef98:
    // 0x21ef98: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x21ef98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_21ef9c:
    // 0x21ef9c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x21ef9cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_21efa0:
    // 0x21efa0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x21efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_21efa4:
    // 0x21efa4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x21efa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_21efa8:
    // 0x21efa8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x21efa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21efac:
    // 0x21efac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_21efb0:
    if (ctx->pc == 0x21EFB0u) {
        ctx->pc = 0x21EFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EFACu;
        // 0x21efb0: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EFB4u;
        goto label_21efb4;
    }
    ctx->pc = 0x21EFACu;
    {
        const bool branch_taken_0x21efac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EFACu;
        // 0x21efb0: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21efac) {
            ctx->pc = 0x21EFC8u;
            goto label_21efc8;
        }
    }
    ctx->pc = 0x21EFB4u;
label_21efb4:
    // 0x21efb4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x21efb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_21efb8:
    // 0x21efb8: 0x246366b0  addiu       $v1, $v1, 0x66B0
    ctx->pc = 0x21efb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26288));
label_21efbc:
    // 0x21efbc: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x21efbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_21efc0:
    // 0x21efc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21efc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21efc4:
    // 0x21efc4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x21efc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_21efc8:
    // 0x21efc8: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x21efc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_21efcc:
    // 0x21efcc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x21efccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_21efd0:
    // 0x21efd0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x21efd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_21efd4:
    // 0x21efd4: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x21efd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_21efd8:
    // 0x21efd8: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x21efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_21efdc:
    // 0x21efdc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_21efe0:
    if (ctx->pc == 0x21EFE0u) {
        ctx->pc = 0x21EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EFDCu;
        // 0x21efe0: 0x8fa70030  lw          $a3, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EFE4u;
        goto label_21efe4;
    }
    ctx->pc = 0x21EFDCu;
    {
        const bool branch_taken_0x21efdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EFDCu;
        // 0x21efe0: 0x8fa70030  lw          $a3, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21efdc) {
            ctx->pc = 0x21F00Cu;
            goto label_21f00c;
        }
    }
    ctx->pc = 0x21EFE4u;
label_21efe4:
    // 0x21efe4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x21efe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_21efe8:
    // 0x21efe8: 0xe51821  addu        $v1, $a3, $a1
    ctx->pc = 0x21efe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_21efec:
    // 0x21efec: 0x8c620168  lw          $v0, 0x168($v1)
    ctx->pc = 0x21efecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 360)));
label_21eff0:
    // 0x21eff0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21eff4:
    // 0x21eff4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x21eff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_21eff8:
    // 0x21eff8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x21eff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_21effc:
    // 0x21effc: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x21effcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_21f000:
    // 0x21f000: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x21f000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
label_21f004:
    // 0x21f004: 0x8fa80040  lw          $t0, 0x40($sp)
    ctx->pc = 0x21f004u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_21f008:
    // 0x21f008: 0xa5130000  sh          $s3, 0x0($t0)
    ctx->pc = 0x21f008u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 19));
label_21f00c:
    // 0x21f00c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x21f00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_21f010:
    // 0x21f010: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x21f010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_21f014:
    // 0x21f014: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x21f014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_21f018:
    // 0x21f018: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x21f018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_21f01c:
    // 0x21f01c: 0x106000f2  beqz        $v1, . + 4 + (0xF2 << 2)
label_21f020:
    if (ctx->pc == 0x21F020u) {
        ctx->pc = 0x21F020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F01Cu;
        // 0x21f020: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F024u;
        goto label_21f024;
    }
    ctx->pc = 0x21F01Cu;
    {
        const bool branch_taken_0x21f01c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F01Cu;
        // 0x21f020: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f01c) {
            ctx->pc = 0x21F3E8u;
            goto label_21f3e8;
        }
    }
    ctx->pc = 0x21F024u;
label_21f024:
    // 0x21f024: 0x28c20008  slti        $v0, $a2, 0x8
    ctx->pc = 0x21f024u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
label_21f028:
    // 0x21f028: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
label_21f02c:
    if (ctx->pc == 0x21F02Cu) {
        ctx->pc = 0x21F02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F028u;
        // 0x21f02c: 0x8fb10014  lw          $s1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F030u;
        goto label_21f030;
    }
    ctx->pc = 0x21F028u;
    {
        const bool branch_taken_0x21f028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F028u;
        // 0x21f02c: 0x8fb10014  lw          $s1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f028) {
            ctx->pc = 0x21F180u;
            goto label_21f180;
        }
    }
    ctx->pc = 0x21F030u;
label_21f030:
    // 0x21f030: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x21f030u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_21f034:
    // 0x21f034: 0x3a0b02d  daddu       $s6, $sp, $zero
    ctx->pc = 0x21f034u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21f038:
    // 0x21f038: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x21f038u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21f03c:
    // 0x21f03c: 0x8e2201a0  lw          $v0, 0x1A0($s1)
    ctx->pc = 0x21f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_21f040:
    // 0x21f040: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x21f040u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_21f044:
    // 0x21f044: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_21f048:
    if (ctx->pc == 0x21F048u) {
        ctx->pc = 0x21F048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F044u;
        // 0x21f048: 0x8fb20004  lw          $s2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F04Cu;
        goto label_21f04c;
    }
    ctx->pc = 0x21F044u;
    {
        const bool branch_taken_0x21f044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F044u;
        // 0x21f048: 0x8fb20004  lw          $s2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f044) {
            ctx->pc = 0x21F0FCu;
            goto label_21f0fc;
        }
    }
    ctx->pc = 0x21F04Cu;
label_21f04c:
    // 0x21f04c: 0x28c20019  slti        $v0, $a2, 0x19
    ctx->pc = 0x21f04cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)25) ? 1 : 0);
label_21f050:
    // 0x21f050: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_21f054:
    if (ctx->pc == 0x21F054u) {
        ctx->pc = 0x21F054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F050u;
        // 0x21f054: 0x241700ff  addiu       $s7, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F058u;
        goto label_21f058;
    }
    ctx->pc = 0x21F050u;
    {
        const bool branch_taken_0x21f050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F050u;
        // 0x21f054: 0x241700ff  addiu       $s7, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f050) {
            ctx->pc = 0x21F150u;
            goto label_21f150;
        }
    }
    ctx->pc = 0x21F058u;
label_21f058:
    // 0x21f058: 0x5640000b  bnel        $s2, $zero, . + 4 + (0xB << 2)
label_21f05c:
    if (ctx->pc == 0x21F05Cu) {
        ctx->pc = 0x21F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F058u;
        // 0x21f05c: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F060u;
        goto label_21f060;
    }
    ctx->pc = 0x21F058u;
    {
        const bool branch_taken_0x21f058 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f058) {
            ctx->pc = 0x21F05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F058u;
            // 0x21f05c: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F088u;
            goto label_21f088;
        }
    }
    ctx->pc = 0x21F060u;
label_21f060:
    // 0x21f060: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x21f060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_21f064:
    // 0x21f064: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x21f064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_21f068:
    // 0x21f068: 0x40f809  jalr        $v0
label_21f06c:
    if (ctx->pc == 0x21F06Cu) {
        ctx->pc = 0x21F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F068u;
        // 0x21f06c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F070u;
        goto label_21f070;
    }
    ctx->pc = 0x21F068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21F070u);
        ctx->pc = 0x21F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F068u;
        // 0x21f06c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F068u, 0x21F070u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21F070u;
label_21f070:
    // 0x21f070: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_21f074:
    if (ctx->pc == 0x21F074u) {
        ctx->pc = 0x21F074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F070u;
        // 0x21f074: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F078u;
        goto label_21f078;
    }
    ctx->pc = 0x21F070u;
    {
        const bool branch_taken_0x21f070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F070u;
        // 0x21f074: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f070) {
            ctx->pc = 0x21F164u;
            goto label_21f164;
        }
    }
    ctx->pc = 0x21F078u;
label_21f078:
    // 0x21f078: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x21f078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_21f07c:
    // 0x21f07c: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x21f07cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21f080:
    // 0x21f080: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x21f080u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21f084:
    // 0x21f084: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x21f084u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_21f088:
    // 0x21f088: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x21f088u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_21f08c:
    // 0x21f08c: 0x14d70014  bne         $a2, $s7, . + 4 + (0x14 << 2)
label_21f090:
    if (ctx->pc == 0x21F090u) {
        ctx->pc = 0x21F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F08Cu;
        // 0x21f090: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F094u;
        goto label_21f094;
    }
    ctx->pc = 0x21F08Cu;
    {
        const bool branch_taken_0x21f08c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 23));
        ctx->pc = 0x21F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F08Cu;
        // 0x21f090: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f08c) {
            ctx->pc = 0x21F0E0u;
            goto label_21f0e0;
        }
    }
    ctx->pc = 0x21F094u;
label_21f094:
    // 0x21f094: 0x241500ff  addiu       $s5, $zero, 0xFF
    ctx->pc = 0x21f094u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_21f098:
    // 0x21f098: 0x5640000b  bnel        $s2, $zero, . + 4 + (0xB << 2)
label_21f09c:
    if (ctx->pc == 0x21F09Cu) {
        ctx->pc = 0x21F09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F098u;
        // 0x21f09c: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F0A0u;
        goto label_21f0a0;
    }
    ctx->pc = 0x21F098u;
    {
        const bool branch_taken_0x21f098 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f098) {
            ctx->pc = 0x21F09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F098u;
            // 0x21f09c: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F0C8u;
            goto label_21f0c8;
        }
    }
    ctx->pc = 0x21F0A0u;
label_21f0a0:
    // 0x21f0a0: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x21f0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_21f0a4:
    // 0x21f0a4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x21f0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_21f0a8:
    // 0x21f0a8: 0x40f809  jalr        $v0
label_21f0ac:
    if (ctx->pc == 0x21F0ACu) {
        ctx->pc = 0x21F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0A8u;
        // 0x21f0ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F0B0u;
        goto label_21f0b0;
    }
    ctx->pc = 0x21F0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21F0B0u);
        ctx->pc = 0x21F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0A8u;
        // 0x21f0ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F0A8u, 0x21F0B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21F0B0u;
label_21f0b0:
    // 0x21f0b0: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_21f0b4:
    if (ctx->pc == 0x21F0B4u) {
        ctx->pc = 0x21F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0B0u;
        // 0x21f0b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F0B8u;
        goto label_21f0b8;
    }
    ctx->pc = 0x21F0B0u;
    {
        const bool branch_taken_0x21f0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0B0u;
        // 0x21f0b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f0b0) {
            ctx->pc = 0x21F164u;
            goto label_21f164;
        }
    }
    ctx->pc = 0x21F0B8u;
label_21f0b8:
    // 0x21f0b8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x21f0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_21f0bc:
    // 0x21f0bc: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x21f0bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21f0c0:
    // 0x21f0c0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x21f0c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21f0c4:
    // 0x21f0c4: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x21f0c4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_21f0c8:
    // 0x21f0c8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x21f0c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_21f0cc:
    // 0x21f0cc: 0x10d5fff2  beq         $a2, $s5, . + 4 + (-0xE << 2)
label_21f0d0:
    if (ctx->pc == 0x21F0D0u) {
        ctx->pc = 0x21F0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0CCu;
        // 0x21f0d0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F0D4u;
        goto label_21f0d4;
    }
    ctx->pc = 0x21F0CCu;
    {
        const bool branch_taken_0x21f0cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 21));
        ctx->pc = 0x21F0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0CCu;
        // 0x21f0d0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f0cc) {
            ctx->pc = 0x21F098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f098;
        }
    }
    ctx->pc = 0x21F0D4u;
label_21f0d4:
    // 0x21f0d4: 0x54c00009  bnel        $a2, $zero, . + 4 + (0x9 << 2)
label_21f0d8:
    if (ctx->pc == 0x21F0D8u) {
        ctx->pc = 0x21F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0D4u;
        // 0x21f0d8: 0xae2601a0  sw          $a2, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F0DCu;
        goto label_21f0dc;
    }
    ctx->pc = 0x21F0D4u;
    {
        const bool branch_taken_0x21f0d4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f0d4) {
            ctx->pc = 0x21F0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F0D4u;
            // 0x21f0d8: 0xae2601a0  sw          $a2, 0x1A0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F0FCu;
            goto label_21f0fc;
        }
    }
    ctx->pc = 0x21F0DCu;
label_21f0dc:
    // 0x21f0dc: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x21f0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_21f0e0:
    // 0x21f0e0: 0x141a38  dsll        $v1, $s4, 8
    ctx->pc = 0x21f0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << 8);
label_21f0e4:
    // 0x21f0e4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x21f0e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_21f0e8:
    // 0x21f0e8: 0x2a620019  slti        $v0, $s3, 0x19
    ctx->pc = 0x21f0e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)25) ? 1 : 0);
label_21f0ec:
    // 0x21f0ec: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_21f0f0:
    if (ctx->pc == 0x21F0F0u) {
        ctx->pc = 0x21F0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0ECu;
        // 0x21f0f0: 0xc3a025  or          $s4, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F0F4u;
        goto label_21f0f4;
    }
    ctx->pc = 0x21F0ECu;
    {
        const bool branch_taken_0x21f0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0ECu;
        // 0x21f0f0: 0xc3a025  or          $s4, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f0ec) {
            ctx->pc = 0x21F058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f058;
        }
    }
    ctx->pc = 0x21F0F4u;
label_21f0f4:
    // 0x21f0f4: 0x10000017  b           . + 4 + (0x17 << 2)
label_21f0f8:
    if (ctx->pc == 0x21F0F8u) {
        ctx->pc = 0x21F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0F4u;
        // 0x21f0f8: 0xaed30010  sw          $s3, 0x10($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F0FCu;
        goto label_21f0fc;
    }
    ctx->pc = 0x21F0F4u;
    {
        const bool branch_taken_0x21f0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0F4u;
        // 0x21f0f8: 0xaed30010  sw          $s3, 0x10($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f0f4) {
            ctx->pc = 0x21F154u;
            goto label_21f154;
        }
    }
    ctx->pc = 0x21F0FCu;
label_21f0fc:
    // 0x21f0fc: 0x6630015  bgezl       $s3, . + 4 + (0x15 << 2)
label_21f100:
    if (ctx->pc == 0x21F100u) {
        ctx->pc = 0x21F100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0FCu;
        // 0x21f100: 0xaed30010  sw          $s3, 0x10($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F104u;
        goto label_21f104;
    }
    ctx->pc = 0x21F0FCu;
    {
        const bool branch_taken_0x21f0fc = (GPR_S64(ctx, 19) >= 0);
        if (branch_taken_0x21f0fc) {
            ctx->pc = 0x21F100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F0FCu;
            // 0x21f100: 0xaed30010  sw          $s3, 0x10($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F154u;
            goto label_21f154;
        }
    }
    ctx->pc = 0x21F104u;
label_21f104:
    // 0x21f104: 0x8e2201bc  lw          $v0, 0x1BC($s1)
    ctx->pc = 0x21f104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
label_21f108:
    // 0x21f108: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x21f108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_21f10c:
    // 0x21f10c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_21f110:
    if (ctx->pc == 0x21F110u) {
        ctx->pc = 0x21F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F10Cu;
        // 0x21f110: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F114u;
        goto label_21f114;
    }
    ctx->pc = 0x21F10Cu;
    {
        const bool branch_taken_0x21f10c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F10Cu;
        // 0x21f110: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f10c) {
            ctx->pc = 0x21F144u;
            goto label_21f144;
        }
    }
    ctx->pc = 0x21F114u;
label_21f114:
    // 0x21f114: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21f114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21f118:
    // 0x21f118: 0x24060075  addiu       $a2, $zero, 0x75
    ctx->pc = 0x21f118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_21f11c:
    // 0x21f11c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21f11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21f120:
    // 0x21f120: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x21f120u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
label_21f124:
    // 0x21f124: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21f124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21f128:
    // 0x21f128: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21f128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21f12c:
    // 0x21f12c: 0x60f809  jalr        $v1
label_21f130:
    if (ctx->pc == 0x21F130u) {
        ctx->pc = 0x21F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F12Cu;
        // 0x21f130: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F134u;
        goto label_21f134;
    }
    ctx->pc = 0x21F12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21F134u);
        ctx->pc = 0x21F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F12Cu;
        // 0x21f130: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F12Cu, 0x21F134u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21F134u;
label_21f134:
    // 0x21f134: 0x8e2201bc  lw          $v0, 0x1BC($s1)
    ctx->pc = 0x21f134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
label_21f138:
    // 0x21f138: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x21f138u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21f13c:
    // 0x21f13c: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x21f13cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
label_21f140:
    // 0x21f140: 0x24080019  addiu       $t0, $zero, 0x19
    ctx->pc = 0x21f140u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_21f144:
    // 0x21f144: 0x1131023  subu        $v0, $t0, $s3
    ctx->pc = 0x21f144u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
label_21f148:
    // 0x21f148: 0x54a014  dsllv       $s4, $s4, $v0
    ctx->pc = 0x21f148u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (GPR_U32(ctx, 2) & 0x3F));
label_21f14c:
    // 0x21f14c: 0x24130019  addiu       $s3, $zero, 0x19
    ctx->pc = 0x21f14cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_21f150:
    // 0x21f150: 0xaed30010  sw          $s3, 0x10($s6)
    ctx->pc = 0x21f150u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 19));
label_21f154:
    // 0x21f154: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21f154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21f158:
    // 0x21f158: 0xaed00000  sw          $s0, 0x0($s6)
    ctx->pc = 0x21f158u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
label_21f15c:
    // 0x21f15c: 0xaed20004  sw          $s2, 0x4($s6)
    ctx->pc = 0x21f15cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 18));
label_21f160:
    // 0x21f160: 0xfed40008  sd          $s4, 0x8($s6)
    ctx->pc = 0x21f160u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 20));
label_21f164:
    // 0x21f164: 0x1040fe97  beqz        $v0, . + 4 + (-0x169 << 2)
label_21f168:
    if (ctx->pc == 0x21F168u) {
        ctx->pc = 0x21F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F164u;
        // 0x21f168: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F16Cu;
        goto label_21f16c;
    }
    ctx->pc = 0x21F164u;
    {
        const bool branch_taken_0x21f164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F164u;
        // 0x21f168: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f164) {
            ctx->pc = 0x21EBC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ebc4;
        }
    }
    ctx->pc = 0x21F16Cu;
label_21f16c:
    // 0x21f16c: 0x28c20008  slti        $v0, $a2, 0x8
    ctx->pc = 0x21f16cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
label_21f170:
    // 0x21f170: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21f174:
    if (ctx->pc == 0x21F174u) {
        ctx->pc = 0x21F174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F170u;
        // 0x21f174: 0xdfa90008  ld          $t1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F178u;
        goto label_21f178;
    }
    ctx->pc = 0x21F170u;
    {
        const bool branch_taken_0x21f170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F170u;
        // 0x21f174: 0xdfa90008  ld          $t1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f170) {
            ctx->pc = 0x21F180u;
            goto label_21f180;
        }
    }
    ctx->pc = 0x21F178u;
label_21f178:
    // 0x21f178: 0x10000010  b           . + 4 + (0x10 << 2)
label_21f17c:
    if (ctx->pc == 0x21F17Cu) {
        ctx->pc = 0x21F17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F178u;
        // 0x21f17c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F180u;
        goto label_21f180;
    }
    ctx->pc = 0x21F178u;
    {
        const bool branch_taken_0x21f178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F178u;
        // 0x21f17c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f178) {
            ctx->pc = 0x21F1BCu;
            goto label_21f1bc;
        }
    }
    ctx->pc = 0x21F180u;
label_21f180:
    // 0x21f180: 0x24c2fff8  addiu       $v0, $a2, -0x8
    ctx->pc = 0x21f180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
label_21f184:
    // 0x21f184: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x21f184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_21f188:
    // 0x21f188: 0x491017  dsrav       $v0, $t1, $v0
    ctx->pc = 0x21f188u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 9) >> (GPR_U32(ctx, 2) & 0x3F));
label_21f18c:
    // 0x21f18c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21f18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_21f190:
    // 0x21f190: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21f190u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_21f194:
    // 0x21f194: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_21f198:
    // 0x21f198: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x21f198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21f19c:
    // 0x21f19c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x21f19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_21f1a0:
    // 0x21f1a0: 0x8c68011c  lw          $t0, 0x11C($v1)
    ctx->pc = 0x21f1a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_21f1a4:
    // 0x21f1a4: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_21f1a8:
    if (ctx->pc == 0x21F1A8u) {
        ctx->pc = 0x21F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1A4u;
        // 0x21f1a8: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F1ACu;
        goto label_21f1ac;
    }
    ctx->pc = 0x21F1A4u;
    {
        const bool branch_taken_0x21f1a4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1A4u;
        // 0x21f1a8: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f1a4) {
            ctx->pc = 0x21F1B8u;
            goto label_21f1b8;
        }
    }
    ctx->pc = 0x21F1ACu;
label_21f1ac:
    // 0x21f1ac: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x21f1acu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_21f1b0:
    // 0x21f1b0: 0x1000000a  b           . + 4 + (0xA << 2)
label_21f1b4:
    if (ctx->pc == 0x21F1B4u) {
        ctx->pc = 0x21F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1B0u;
        // 0x21f1b4: 0x9053051c  lbu         $s3, 0x51C($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F1B8u;
        goto label_21f1b8;
    }
    ctx->pc = 0x21F1B0u;
    {
        const bool branch_taken_0x21f1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1B0u;
        // 0x21f1b4: 0x9053051c  lbu         $s3, 0x51C($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f1b0) {
            ctx->pc = 0x21F1DCu;
            goto label_21f1dc;
        }
    }
    ctx->pc = 0x21F1B8u;
label_21f1b8:
    // 0x21f1b8: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x21f1b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_21f1bc:
    // 0x21f1bc: 0x8fa70044  lw          $a3, 0x44($sp)
    ctx->pc = 0x21f1bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_21f1c0:
    // 0x21f1c0: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x21f1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_21f1c4:
    // 0x21f1c4: 0xc0879b4  jal         func_21E6D0
label_21f1c8:
    if (ctx->pc == 0x21F1C8u) {
        ctx->pc = 0x21F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1C4u;
        // 0x21f1c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F1CCu;
        goto label_21f1cc;
    }
    ctx->pc = 0x21F1C4u;
    SET_GPR_U32(ctx, 31, 0x21F1CCu);
    ctx->pc = 0x21F1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F1C4u;
    // 0x21f1c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E6D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21E6D0u, 0x21F1C4u, 0x21F1CCu)) {
        return;
    }
    ctx->pc = 0x21F1CCu;
label_21f1cc:
    // 0x21f1cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x21f1ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21f1d0:
    // 0x21f1d0: 0x660fe7c  bltz        $s3, . + 4 + (-0x184 << 2)
label_21f1d4:
    if (ctx->pc == 0x21F1D4u) {
        ctx->pc = 0x21F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1D0u;
        // 0x21f1d4: 0xdfa90008  ld          $t1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F1D8u;
        goto label_21f1d8;
    }
    ctx->pc = 0x21F1D0u;
    {
        const bool branch_taken_0x21f1d0 = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x21F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1D0u;
        // 0x21f1d4: 0xdfa90008  ld          $t1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f1d0) {
            ctx->pc = 0x21EBC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ebc4;
        }
    }
    ctx->pc = 0x21F1D8u;
label_21f1d8:
    // 0x21f1d8: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x21f1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_21f1dc:
    // 0x21f1dc: 0x132103  sra         $a0, $s3, 4
    ctx->pc = 0x21f1dcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 19), 4));
label_21f1e0:
    // 0x21f1e0: 0x3273000f  andi        $s3, $s3, 0xF
    ctx->pc = 0x21f1e0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
label_21f1e4:
    // 0x21f1e4: 0x12600076  beqz        $s3, . + 4 + (0x76 << 2)
label_21f1e8:
    if (ctx->pc == 0x21F1E8u) {
        ctx->pc = 0x21F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1E4u;
        // 0x21f1e8: 0xd3102a  slt         $v0, $a2, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F1ECu;
        goto label_21f1ec;
    }
    ctx->pc = 0x21F1E4u;
    {
        const bool branch_taken_0x21f1e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1E4u;
        // 0x21f1e8: 0xd3102a  slt         $v0, $a2, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f1e4) {
            ctx->pc = 0x21F3C0u;
            goto label_21f3c0;
        }
    }
    ctx->pc = 0x21F1ECu;
label_21f1ec:
    // 0x21f1ec: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
label_21f1f0:
    if (ctx->pc == 0x21F1F0u) {
        ctx->pc = 0x21F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1ECu;
        // 0x21f1f0: 0x3c4f021  addu        $fp, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F1F4u;
        goto label_21f1f4;
    }
    ctx->pc = 0x21F1ECu;
    {
        const bool branch_taken_0x21f1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1ECu;
        // 0x21f1f0: 0x3c4f021  addu        $fp, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f1ec) {
            ctx->pc = 0x21F344u;
            goto label_21f344;
        }
    }
    ctx->pc = 0x21F1F4u;
label_21f1f4:
    // 0x21f1f4: 0x8fb10014  lw          $s1, 0x14($sp)
    ctx->pc = 0x21f1f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_21f1f8:
    // 0x21f1f8: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x21f1f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_21f1fc:
    // 0x21f1fc: 0x3a0b82d  daddu       $s7, $sp, $zero
    ctx->pc = 0x21f1fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21f200:
    // 0x21f200: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x21f200u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21f204:
    // 0x21f204: 0x8e2201a0  lw          $v0, 0x1A0($s1)
    ctx->pc = 0x21f204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_21f208:
    // 0x21f208: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x21f208u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_21f20c:
    // 0x21f20c: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
label_21f210:
    if (ctx->pc == 0x21F210u) {
        ctx->pc = 0x21F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F20Cu;
        // 0x21f210: 0x8fb20004  lw          $s2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F214u;
        goto label_21f214;
    }
    ctx->pc = 0x21F20Cu;
    {
        const bool branch_taken_0x21f20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F20Cu;
        // 0x21f210: 0x8fb20004  lw          $s2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f20c) {
            ctx->pc = 0x21F2CCu;
            goto label_21f2cc;
        }
    }
    ctx->pc = 0x21F214u;
label_21f214:
    // 0x21f214: 0x28c20019  slti        $v0, $a2, 0x19
    ctx->pc = 0x21f214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)25) ? 1 : 0);
label_21f218:
    // 0x21f218: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
label_21f21c:
    if (ctx->pc == 0x21F21Cu) {
        ctx->pc = 0x21F21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F218u;
        // 0x21f21c: 0xaef40010  sw          $s4, 0x10($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F220u;
        goto label_21f220;
    }
    ctx->pc = 0x21F218u;
    {
        const bool branch_taken_0x21f218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f218) {
            ctx->pc = 0x21F21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F218u;
            // 0x21f21c: 0xaef40010  sw          $s4, 0x10($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F328u;
            goto label_21f328;
        }
    }
    ctx->pc = 0x21F220u;
label_21f220:
    // 0x21f220: 0x5640000b  bnel        $s2, $zero, . + 4 + (0xB << 2)
label_21f224:
    if (ctx->pc == 0x21F224u) {
        ctx->pc = 0x21F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F220u;
        // 0x21f224: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F228u;
        goto label_21f228;
    }
    ctx->pc = 0x21F220u;
    {
        const bool branch_taken_0x21f220 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f220) {
            ctx->pc = 0x21F224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F220u;
            // 0x21f224: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F250u;
            goto label_21f250;
        }
    }
    ctx->pc = 0x21F228u;
label_21f228:
    // 0x21f228: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x21f228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_21f22c:
    // 0x21f22c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x21f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_21f230:
    // 0x21f230: 0x40f809  jalr        $v0
label_21f234:
    if (ctx->pc == 0x21F234u) {
        ctx->pc = 0x21F234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F230u;
        // 0x21f234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F238u;
        goto label_21f238;
    }
    ctx->pc = 0x21F230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21F238u);
        ctx->pc = 0x21F234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F230u;
        // 0x21f234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F230u, 0x21F238u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21F238u;
label_21f238:
    // 0x21f238: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_21f23c:
    if (ctx->pc == 0x21F23Cu) {
        ctx->pc = 0x21F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F238u;
        // 0x21f23c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F240u;
        goto label_21f240;
    }
    ctx->pc = 0x21F238u;
    {
        const bool branch_taken_0x21f238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F238u;
        // 0x21f23c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f238) {
            ctx->pc = 0x21F338u;
            goto label_21f338;
        }
    }
    ctx->pc = 0x21F240u;
label_21f240:
    // 0x21f240: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x21f240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_21f244:
    // 0x21f244: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x21f244u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21f248:
    // 0x21f248: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x21f248u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21f24c:
    // 0x21f24c: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x21f24cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_21f250:
    // 0x21f250: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x21f250u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_21f254:
    // 0x21f254: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x21f254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_21f258:
    // 0x21f258: 0x14c50015  bne         $a2, $a1, . + 4 + (0x15 << 2)
label_21f25c:
    if (ctx->pc == 0x21F25Cu) {
        ctx->pc = 0x21F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F258u;
        // 0x21f25c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F260u;
        goto label_21f260;
    }
    ctx->pc = 0x21F258u;
    {
        const bool branch_taken_0x21f258 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x21F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F258u;
        // 0x21f25c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f258) {
            ctx->pc = 0x21F2B0u;
            goto label_21f2b0;
        }
    }
    ctx->pc = 0x21F260u;
label_21f260:
    // 0x21f260: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x21f260u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_21f264:
    // 0x21f264: 0x0  nop
    ctx->pc = 0x21f264u;
    // NOP
label_21f268:
    // 0x21f268: 0x5640000b  bnel        $s2, $zero, . + 4 + (0xB << 2)
label_21f26c:
    if (ctx->pc == 0x21F26Cu) {
        ctx->pc = 0x21F26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F268u;
        // 0x21f26c: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F270u;
        goto label_21f270;
    }
    ctx->pc = 0x21F268u;
    {
        const bool branch_taken_0x21f268 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f268) {
            ctx->pc = 0x21F26Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F268u;
            // 0x21f26c: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F298u;
            goto label_21f298;
        }
    }
    ctx->pc = 0x21F270u;
label_21f270:
    // 0x21f270: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x21f270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_21f274:
    // 0x21f274: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x21f274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_21f278:
    // 0x21f278: 0x40f809  jalr        $v0
label_21f27c:
    if (ctx->pc == 0x21F27Cu) {
        ctx->pc = 0x21F27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F278u;
        // 0x21f27c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F280u;
        goto label_21f280;
    }
    ctx->pc = 0x21F278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21F280u);
        ctx->pc = 0x21F27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F278u;
        // 0x21f27c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F278u, 0x21F280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21F280u;
label_21f280:
    // 0x21f280: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_21f284:
    if (ctx->pc == 0x21F284u) {
        ctx->pc = 0x21F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F280u;
        // 0x21f284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F288u;
        goto label_21f288;
    }
    ctx->pc = 0x21F280u;
    {
        const bool branch_taken_0x21f280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F280u;
        // 0x21f284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f280) {
            ctx->pc = 0x21F338u;
            goto label_21f338;
        }
    }
    ctx->pc = 0x21F288u;
label_21f288:
    // 0x21f288: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x21f288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_21f28c:
    // 0x21f28c: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x21f28cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21f290:
    // 0x21f290: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x21f290u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21f294:
    // 0x21f294: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x21f294u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_21f298:
    // 0x21f298: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x21f298u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_21f29c:
    // 0x21f29c: 0x10d6fff2  beq         $a2, $s6, . + 4 + (-0xE << 2)
label_21f2a0:
    if (ctx->pc == 0x21F2A0u) {
        ctx->pc = 0x21F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F29Cu;
        // 0x21f2a0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F2A4u;
        goto label_21f2a4;
    }
    ctx->pc = 0x21F29Cu;
    {
        const bool branch_taken_0x21f29c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 22));
        ctx->pc = 0x21F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F29Cu;
        // 0x21f2a0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f29c) {
            ctx->pc = 0x21F268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f268;
        }
    }
    ctx->pc = 0x21F2A4u;
label_21f2a4:
    // 0x21f2a4: 0x54c00009  bnel        $a2, $zero, . + 4 + (0x9 << 2)
label_21f2a8:
    if (ctx->pc == 0x21F2A8u) {
        ctx->pc = 0x21F2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F2A4u;
        // 0x21f2a8: 0xae2601a0  sw          $a2, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F2ACu;
        goto label_21f2ac;
    }
    ctx->pc = 0x21F2A4u;
    {
        const bool branch_taken_0x21f2a4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f2a4) {
            ctx->pc = 0x21F2A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F2A4u;
            // 0x21f2a8: 0xae2601a0  sw          $a2, 0x1A0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F2CCu;
            goto label_21f2cc;
        }
    }
    ctx->pc = 0x21F2ACu;
label_21f2ac:
    // 0x21f2ac: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x21f2acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_21f2b0:
    // 0x21f2b0: 0x151a38  dsll        $v1, $s5, 8
    ctx->pc = 0x21f2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << 8);
label_21f2b4:
    // 0x21f2b4: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x21f2b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_21f2b8:
    // 0x21f2b8: 0x2a820019  slti        $v0, $s4, 0x19
    ctx->pc = 0x21f2b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)25) ? 1 : 0);
label_21f2bc:
    // 0x21f2bc: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_21f2c0:
    if (ctx->pc == 0x21F2C0u) {
        ctx->pc = 0x21F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F2BCu;
        // 0x21f2c0: 0xc3a825  or          $s5, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F2C4u;
        goto label_21f2c4;
    }
    ctx->pc = 0x21F2BCu;
    {
        const bool branch_taken_0x21f2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F2BCu;
        // 0x21f2c0: 0xc3a825  or          $s5, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f2bc) {
            ctx->pc = 0x21F220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f220;
        }
    }
    ctx->pc = 0x21F2C4u;
label_21f2c4:
    // 0x21f2c4: 0x10000018  b           . + 4 + (0x18 << 2)
label_21f2c8:
    if (ctx->pc == 0x21F2C8u) {
        ctx->pc = 0x21F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F2C4u;
        // 0x21f2c8: 0xaef40010  sw          $s4, 0x10($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F2CCu;
        goto label_21f2cc;
    }
    ctx->pc = 0x21F2C4u;
    {
        const bool branch_taken_0x21f2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F2C4u;
        // 0x21f2c8: 0xaef40010  sw          $s4, 0x10($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f2c4) {
            ctx->pc = 0x21F328u;
            goto label_21f328;
        }
    }
    ctx->pc = 0x21F2CCu;
label_21f2cc:
    // 0x21f2cc: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x21f2ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_21f2d0:
    // 0x21f2d0: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_21f2d4:
    if (ctx->pc == 0x21F2D4u) {
        ctx->pc = 0x21F2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F2D0u;
        // 0x21f2d4: 0xaef40010  sw          $s4, 0x10($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F2D8u;
        goto label_21f2d8;
    }
    ctx->pc = 0x21F2D0u;
    {
        const bool branch_taken_0x21f2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f2d0) {
            ctx->pc = 0x21F2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F2D0u;
            // 0x21f2d4: 0xaef40010  sw          $s4, 0x10($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F328u;
            goto label_21f328;
        }
    }
    ctx->pc = 0x21F2D8u;
label_21f2d8:
    // 0x21f2d8: 0x8e2201bc  lw          $v0, 0x1BC($s1)
    ctx->pc = 0x21f2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
label_21f2dc:
    // 0x21f2dc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x21f2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_21f2e0:
    // 0x21f2e0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_21f2e4:
    if (ctx->pc == 0x21F2E4u) {
        ctx->pc = 0x21F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F2E0u;
        // 0x21f2e4: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F2E8u;
        goto label_21f2e8;
    }
    ctx->pc = 0x21F2E0u;
    {
        const bool branch_taken_0x21f2e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F2E0u;
        // 0x21f2e4: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f2e0) {
            ctx->pc = 0x21F318u;
            goto label_21f318;
        }
    }
    ctx->pc = 0x21F2E8u;
label_21f2e8:
    // 0x21f2e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21f2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21f2ec:
    // 0x21f2ec: 0x24060075  addiu       $a2, $zero, 0x75
    ctx->pc = 0x21f2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_21f2f0:
    // 0x21f2f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21f2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21f2f4:
    // 0x21f2f4: 0xac660014  sw          $a2, 0x14($v1)
    ctx->pc = 0x21f2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
label_21f2f8:
    // 0x21f2f8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21f2fc:
    // 0x21f2fc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21f2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21f300:
    // 0x21f300: 0x60f809  jalr        $v1
label_21f304:
    if (ctx->pc == 0x21F304u) {
        ctx->pc = 0x21F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F300u;
        // 0x21f304: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F308u;
        goto label_21f308;
    }
    ctx->pc = 0x21F300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21F308u);
        ctx->pc = 0x21F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F300u;
        // 0x21f304: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F300u, 0x21F308u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21F308u;
label_21f308:
    // 0x21f308: 0x8e2201bc  lw          $v0, 0x1BC($s1)
    ctx->pc = 0x21f308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
label_21f30c:
    // 0x21f30c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x21f30cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21f310:
    // 0x21f310: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x21f310u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
label_21f314:
    // 0x21f314: 0x24080019  addiu       $t0, $zero, 0x19
    ctx->pc = 0x21f314u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_21f318:
    // 0x21f318: 0x1141023  subu        $v0, $t0, $s4
    ctx->pc = 0x21f318u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 20)));
label_21f31c:
    // 0x21f31c: 0x55a814  dsllv       $s5, $s5, $v0
    ctx->pc = 0x21f31cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (GPR_U32(ctx, 2) & 0x3F));
label_21f320:
    // 0x21f320: 0x24140019  addiu       $s4, $zero, 0x19
    ctx->pc = 0x21f320u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_21f324:
    // 0x21f324: 0xaef40010  sw          $s4, 0x10($s7)
    ctx->pc = 0x21f324u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 20));
label_21f328:
    // 0x21f328: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21f328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21f32c:
    // 0x21f32c: 0xaef00000  sw          $s0, 0x0($s7)
    ctx->pc = 0x21f32cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 16));
label_21f330:
    // 0x21f330: 0xaef20004  sw          $s2, 0x4($s7)
    ctx->pc = 0x21f330u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 18));
label_21f334:
    // 0x21f334: 0xfef50008  sd          $s5, 0x8($s7)
    ctx->pc = 0x21f334u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 21));
label_21f338:
    // 0x21f338: 0x1040fe22  beqz        $v0, . + 4 + (-0x1DE << 2)
label_21f33c:
    if (ctx->pc == 0x21F33Cu) {
        ctx->pc = 0x21F33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F338u;
        // 0x21f33c: 0xdfa90008  ld          $t1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F340u;
        goto label_21f340;
    }
    ctx->pc = 0x21F338u;
    {
        const bool branch_taken_0x21f338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F338u;
        // 0x21f33c: 0xdfa90008  ld          $t1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f338) {
            ctx->pc = 0x21EBC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ebc4;
        }
    }
    ctx->pc = 0x21F340u;
label_21f340:
    // 0x21f340: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x21f340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_21f344:
    // 0x21f344: 0x3c08006a  lui         $t0, 0x6A
    ctx->pc = 0x21f344u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)106 << 16));
label_21f348:
    // 0x21f348: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21f348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21f34c:
    // 0x21f34c: 0x133880  sll         $a3, $s3, 2
    ctx->pc = 0x21f34cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_21f350:
    // 0x21f350: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x21f350u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_21f354:
    // 0x21f354: 0x25086670  addiu       $t0, $t0, 0x6670
    ctx->pc = 0x21f354u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 26224));
label_21f358:
    // 0x21f358: 0x2621804  sllv        $v1, $v0, $s3
    ctx->pc = 0x21f358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
label_21f35c:
    // 0x21f35c: 0xe82821  addu        $a1, $a3, $t0
    ctx->pc = 0x21f35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_21f360:
    // 0x21f360: 0xc92017  dsrav       $a0, $t1, $a2
    ctx->pc = 0x21f360u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 9) >> (GPR_U32(ctx, 6) & 0x3F));
label_21f364:
    // 0x21f364: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x21f364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_21f368:
    // 0x21f368: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x21f368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_21f36c:
    // 0x21f36c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x21f36cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_21f370:
    // 0x21f370: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x21f370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_21f374:
    // 0x21f374: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x21f374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_21f378:
    // 0x21f378: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x21f378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21f37c:
    // 0x21f37c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_21f380:
    if (ctx->pc == 0x21F380u) {
        ctx->pc = 0x21F380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F37Cu;
        // 0x21f380: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F384u;
        goto label_21f384;
    }
    ctx->pc = 0x21F37Cu;
    {
        const bool branch_taken_0x21f37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F37Cu;
        // 0x21f380: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f37c) {
            ctx->pc = 0x21F398u;
            goto label_21f398;
        }
    }
    ctx->pc = 0x21F384u;
label_21f384:
    // 0x21f384: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x21f384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_21f388:
    // 0x21f388: 0x246366b0  addiu       $v1, $v1, 0x66B0
    ctx->pc = 0x21f388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26288));
label_21f38c:
    // 0x21f38c: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x21f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_21f390:
    // 0x21f390: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21f390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21f394:
    // 0x21f394: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x21f394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_21f398:
    // 0x21f398: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x21f398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_21f39c:
    // 0x21f39c: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x21f39cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_21f3a0:
    // 0x21f3a0: 0x248456b8  addiu       $a0, $a0, 0x56B8
    ctx->pc = 0x21f3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22200));
label_21f3a4:
    // 0x21f3a4: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x21f3a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_21f3a8:
    // 0x21f3a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21f3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_21f3ac:
    // 0x21f3ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21f3b0:
    // 0x21f3b0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x21f3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_21f3b4:
    // 0x21f3b4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x21f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_21f3b8:
    // 0x21f3b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_21f3bc:
    if (ctx->pc == 0x21F3BCu) {
        ctx->pc = 0x21F3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F3B8u;
        // 0x21f3bc: 0xa4450000  sh          $a1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F3C0u;
        goto label_21f3c0;
    }
    ctx->pc = 0x21F3B8u;
    {
        const bool branch_taken_0x21f3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F3B8u;
        // 0x21f3bc: 0xa4450000  sh          $a1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f3b8) {
            ctx->pc = 0x21F3D0u;
            goto label_21f3d0;
        }
    }
    ctx->pc = 0x21F3C0u;
label_21f3c0:
    // 0x21f3c0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x21f3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_21f3c4:
    // 0x21f3c4: 0x148200dc  bne         $a0, $v0, . + 4 + (0xDC << 2)
label_21f3c8:
    if (ctx->pc == 0x21F3C8u) {
        ctx->pc = 0x21F3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F3C4u;
        // 0x21f3c8: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F3CCu;
        goto label_21f3cc;
    }
    ctx->pc = 0x21F3C4u;
    {
        const bool branch_taken_0x21f3c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x21F3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F3C4u;
        // 0x21f3c8: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f3c4) {
            ctx->pc = 0x21F738u;
            goto label_21f738;
        }
    }
    ctx->pc = 0x21F3CCu;
label_21f3cc:
    // 0x21f3cc: 0x27de000f  addiu       $fp, $fp, 0xF
    ctx->pc = 0x21f3ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 15));
label_21f3d0:
    // 0x21f3d0: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x21f3d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_21f3d4:
    // 0x21f3d4: 0x2bc20040  slti        $v0, $fp, 0x40
    ctx->pc = 0x21f3d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)64) ? 1 : 0);
label_21f3d8:
    // 0x21f3d8: 0x1440ff13  bnez        $v0, . + 4 + (-0xED << 2)
label_21f3dc:
    if (ctx->pc == 0x21F3DCu) {
        ctx->pc = 0x21F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F3D8u;
        // 0x21f3dc: 0x28c20008  slti        $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F3E0u;
        goto label_21f3e0;
    }
    ctx->pc = 0x21F3D8u;
    {
        const bool branch_taken_0x21f3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F3D8u;
        // 0x21f3dc: 0x28c20008  slti        $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f3d8) {
            ctx->pc = 0x21F028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f028;
        }
    }
    ctx->pc = 0x21F3E0u;
label_21f3e0:
    // 0x21f3e0: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_21f3e4:
    if (ctx->pc == 0x21F3E4u) {
        ctx->pc = 0x21F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F3E0u;
        // 0x21f3e4: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F3E8u;
        goto label_21f3e8;
    }
    ctx->pc = 0x21F3E0u;
    {
        const bool branch_taken_0x21f3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F3E0u;
        // 0x21f3e4: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f3e0) {
            ctx->pc = 0x21F738u;
            goto label_21f738;
        }
    }
    ctx->pc = 0x21F3E8u;
label_21f3e8:
    // 0x21f3e8: 0x28c20008  slti        $v0, $a2, 0x8
    ctx->pc = 0x21f3e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
label_21f3ec:
    // 0x21f3ec: 0x0  nop
    ctx->pc = 0x21f3ecu;
    // NOP
label_21f3f0:
    // 0x21f3f0: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
label_21f3f4:
    if (ctx->pc == 0x21F3F4u) {
        ctx->pc = 0x21F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F3F0u;
        // 0x21f3f4: 0x8fb10014  lw          $s1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F3F8u;
        goto label_21f3f8;
    }
    ctx->pc = 0x21F3F0u;
    {
        const bool branch_taken_0x21f3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F3F0u;
        // 0x21f3f4: 0x8fb10014  lw          $s1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f3f0) {
            ctx->pc = 0x21F548u;
            goto label_21f548;
        }
    }
    ctx->pc = 0x21F3F8u;
label_21f3f8:
    // 0x21f3f8: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x21f3f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_21f3fc:
    // 0x21f3fc: 0x3a0b02d  daddu       $s6, $sp, $zero
    ctx->pc = 0x21f3fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21f400:
    // 0x21f400: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x21f400u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21f404:
    // 0x21f404: 0x8e2201a0  lw          $v0, 0x1A0($s1)
    ctx->pc = 0x21f404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_21f408:
    // 0x21f408: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x21f408u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_21f40c:
    // 0x21f40c: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_21f410:
    if (ctx->pc == 0x21F410u) {
        ctx->pc = 0x21F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F40Cu;
        // 0x21f410: 0x8fb20004  lw          $s2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F414u;
        goto label_21f414;
    }
    ctx->pc = 0x21F40Cu;
    {
        const bool branch_taken_0x21f40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F40Cu;
        // 0x21f410: 0x8fb20004  lw          $s2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f40c) {
            ctx->pc = 0x21F4C4u;
            goto label_21f4c4;
        }
    }
    ctx->pc = 0x21F414u;
label_21f414:
    // 0x21f414: 0x28c20019  slti        $v0, $a2, 0x19
    ctx->pc = 0x21f414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)25) ? 1 : 0);
label_21f418:
    // 0x21f418: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_21f41c:
    if (ctx->pc == 0x21F41Cu) {
        ctx->pc = 0x21F41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F418u;
        // 0x21f41c: 0x241700ff  addiu       $s7, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F420u;
        goto label_21f420;
    }
    ctx->pc = 0x21F418u;
    {
        const bool branch_taken_0x21f418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F418u;
        // 0x21f41c: 0x241700ff  addiu       $s7, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f418) {
            ctx->pc = 0x21F518u;
            goto label_21f518;
        }
    }
    ctx->pc = 0x21F420u;
label_21f420:
    // 0x21f420: 0x5640000b  bnel        $s2, $zero, . + 4 + (0xB << 2)
label_21f424:
    if (ctx->pc == 0x21F424u) {
        ctx->pc = 0x21F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F420u;
        // 0x21f424: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F428u;
        goto label_21f428;
    }
    ctx->pc = 0x21F420u;
    {
        const bool branch_taken_0x21f420 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f420) {
            ctx->pc = 0x21F424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F420u;
            // 0x21f424: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F450u;
            goto label_21f450;
        }
    }
    ctx->pc = 0x21F428u;
label_21f428:
    // 0x21f428: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x21f428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_21f42c:
    // 0x21f42c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x21f42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_21f430:
    // 0x21f430: 0x40f809  jalr        $v0
label_21f434:
    if (ctx->pc == 0x21F434u) {
        ctx->pc = 0x21F434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F430u;
        // 0x21f434: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F438u;
        goto label_21f438;
    }
    ctx->pc = 0x21F430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21F438u);
        ctx->pc = 0x21F434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F430u;
        // 0x21f434: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F430u, 0x21F438u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21F438u;
label_21f438:
    // 0x21f438: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_21f43c:
    if (ctx->pc == 0x21F43Cu) {
        ctx->pc = 0x21F43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F438u;
        // 0x21f43c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F440u;
        goto label_21f440;
    }
    ctx->pc = 0x21F438u;
    {
        const bool branch_taken_0x21f438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F438u;
        // 0x21f43c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f438) {
            ctx->pc = 0x21F52Cu;
            goto label_21f52c;
        }
    }
    ctx->pc = 0x21F440u;
label_21f440:
    // 0x21f440: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x21f440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_21f444:
    // 0x21f444: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x21f444u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21f448:
    // 0x21f448: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x21f448u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21f44c:
    // 0x21f44c: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x21f44cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_21f450:
    // 0x21f450: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x21f450u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_21f454:
    // 0x21f454: 0x14d70014  bne         $a2, $s7, . + 4 + (0x14 << 2)
label_21f458:
    if (ctx->pc == 0x21F458u) {
        ctx->pc = 0x21F458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F454u;
        // 0x21f458: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F45Cu;
        goto label_21f45c;
    }
    ctx->pc = 0x21F454u;
    {
        const bool branch_taken_0x21f454 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 23));
        ctx->pc = 0x21F458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F454u;
        // 0x21f458: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f454) {
            ctx->pc = 0x21F4A8u;
            goto label_21f4a8;
        }
    }
    ctx->pc = 0x21F45Cu;
label_21f45c:
    // 0x21f45c: 0x241500ff  addiu       $s5, $zero, 0xFF
    ctx->pc = 0x21f45cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_21f460:
    // 0x21f460: 0x5640000b  bnel        $s2, $zero, . + 4 + (0xB << 2)
label_21f464:
    if (ctx->pc == 0x21F464u) {
        ctx->pc = 0x21F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F460u;
        // 0x21f464: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F468u;
        goto label_21f468;
    }
    ctx->pc = 0x21F460u;
    {
        const bool branch_taken_0x21f460 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f460) {
            ctx->pc = 0x21F464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F460u;
            // 0x21f464: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F490u;
            goto label_21f490;
        }
    }
    ctx->pc = 0x21F468u;
label_21f468:
    // 0x21f468: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x21f468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_21f46c:
    // 0x21f46c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x21f46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_21f470:
    // 0x21f470: 0x40f809  jalr        $v0
label_21f474:
    if (ctx->pc == 0x21F474u) {
        ctx->pc = 0x21F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F470u;
        // 0x21f474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F478u;
        goto label_21f478;
    }
    ctx->pc = 0x21F470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21F478u);
        ctx->pc = 0x21F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F470u;
        // 0x21f474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F470u, 0x21F478u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21F478u;
label_21f478:
    // 0x21f478: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_21f47c:
    if (ctx->pc == 0x21F47Cu) {
        ctx->pc = 0x21F47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F478u;
        // 0x21f47c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F480u;
        goto label_21f480;
    }
    ctx->pc = 0x21F478u;
    {
        const bool branch_taken_0x21f478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F478u;
        // 0x21f47c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f478) {
            ctx->pc = 0x21F52Cu;
            goto label_21f52c;
        }
    }
    ctx->pc = 0x21F480u;
label_21f480:
    // 0x21f480: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x21f480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_21f484:
    // 0x21f484: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x21f484u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21f488:
    // 0x21f488: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x21f488u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21f48c:
    // 0x21f48c: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x21f48cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_21f490:
    // 0x21f490: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x21f490u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_21f494:
    // 0x21f494: 0x10d5fff2  beq         $a2, $s5, . + 4 + (-0xE << 2)
label_21f498:
    if (ctx->pc == 0x21F498u) {
        ctx->pc = 0x21F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F494u;
        // 0x21f498: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F49Cu;
        goto label_21f49c;
    }
    ctx->pc = 0x21F494u;
    {
        const bool branch_taken_0x21f494 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 21));
        ctx->pc = 0x21F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F494u;
        // 0x21f498: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f494) {
            ctx->pc = 0x21F460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f460;
        }
    }
    ctx->pc = 0x21F49Cu;
label_21f49c:
    // 0x21f49c: 0x54c00009  bnel        $a2, $zero, . + 4 + (0x9 << 2)
label_21f4a0:
    if (ctx->pc == 0x21F4A0u) {
        ctx->pc = 0x21F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F49Cu;
        // 0x21f4a0: 0xae2601a0  sw          $a2, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F4A4u;
        goto label_21f4a4;
    }
    ctx->pc = 0x21F49Cu;
    {
        const bool branch_taken_0x21f49c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f49c) {
            ctx->pc = 0x21F4A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F49Cu;
            // 0x21f4a0: 0xae2601a0  sw          $a2, 0x1A0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F4C4u;
            goto label_21f4c4;
        }
    }
    ctx->pc = 0x21F4A4u;
label_21f4a4:
    // 0x21f4a4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x21f4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_21f4a8:
    // 0x21f4a8: 0x141a38  dsll        $v1, $s4, 8
    ctx->pc = 0x21f4a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << 8);
label_21f4ac:
    // 0x21f4ac: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x21f4acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_21f4b0:
    // 0x21f4b0: 0x2a620019  slti        $v0, $s3, 0x19
    ctx->pc = 0x21f4b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)25) ? 1 : 0);
label_21f4b4:
    // 0x21f4b4: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_21f4b8:
    if (ctx->pc == 0x21F4B8u) {
        ctx->pc = 0x21F4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F4B4u;
        // 0x21f4b8: 0xc3a025  or          $s4, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F4BCu;
        goto label_21f4bc;
    }
    ctx->pc = 0x21F4B4u;
    {
        const bool branch_taken_0x21f4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F4B4u;
        // 0x21f4b8: 0xc3a025  or          $s4, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f4b4) {
            ctx->pc = 0x21F420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f420;
        }
    }
    ctx->pc = 0x21F4BCu;
label_21f4bc:
    // 0x21f4bc: 0x10000017  b           . + 4 + (0x17 << 2)
label_21f4c0:
    if (ctx->pc == 0x21F4C0u) {
        ctx->pc = 0x21F4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F4BCu;
        // 0x21f4c0: 0xaed30010  sw          $s3, 0x10($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F4C4u;
        goto label_21f4c4;
    }
    ctx->pc = 0x21F4BCu;
    {
        const bool branch_taken_0x21f4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F4BCu;
        // 0x21f4c0: 0xaed30010  sw          $s3, 0x10($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f4bc) {
            ctx->pc = 0x21F51Cu;
            goto label_21f51c;
        }
    }
    ctx->pc = 0x21F4C4u;
label_21f4c4:
    // 0x21f4c4: 0x6630015  bgezl       $s3, . + 4 + (0x15 << 2)
label_21f4c8:
    if (ctx->pc == 0x21F4C8u) {
        ctx->pc = 0x21F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F4C4u;
        // 0x21f4c8: 0xaed30010  sw          $s3, 0x10($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F4CCu;
        goto label_21f4cc;
    }
    ctx->pc = 0x21F4C4u;
    {
        const bool branch_taken_0x21f4c4 = (GPR_S64(ctx, 19) >= 0);
        if (branch_taken_0x21f4c4) {
            ctx->pc = 0x21F4C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F4C4u;
            // 0x21f4c8: 0xaed30010  sw          $s3, 0x10($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F51Cu;
            goto label_21f51c;
        }
    }
    ctx->pc = 0x21F4CCu;
label_21f4cc:
    // 0x21f4cc: 0x8e2201bc  lw          $v0, 0x1BC($s1)
    ctx->pc = 0x21f4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
label_21f4d0:
    // 0x21f4d0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x21f4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_21f4d4:
    // 0x21f4d4: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_21f4d8:
    if (ctx->pc == 0x21F4D8u) {
        ctx->pc = 0x21F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F4D4u;
        // 0x21f4d8: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F4DCu;
        goto label_21f4dc;
    }
    ctx->pc = 0x21F4D4u;
    {
        const bool branch_taken_0x21f4d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F4D4u;
        // 0x21f4d8: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f4d4) {
            ctx->pc = 0x21F50Cu;
            goto label_21f50c;
        }
    }
    ctx->pc = 0x21F4DCu;
label_21f4dc:
    // 0x21f4dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21f4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21f4e0:
    // 0x21f4e0: 0x24080075  addiu       $t0, $zero, 0x75
    ctx->pc = 0x21f4e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_21f4e4:
    // 0x21f4e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21f4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21f4e8:
    // 0x21f4e8: 0xac680014  sw          $t0, 0x14($v1)
    ctx->pc = 0x21f4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 8));
label_21f4ec:
    // 0x21f4ec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21f4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21f4f0:
    // 0x21f4f0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21f4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21f4f4:
    // 0x21f4f4: 0x60f809  jalr        $v1
label_21f4f8:
    if (ctx->pc == 0x21F4F8u) {
        ctx->pc = 0x21F4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F4F4u;
        // 0x21f4f8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F4FCu;
        goto label_21f4fc;
    }
    ctx->pc = 0x21F4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21F4FCu);
        ctx->pc = 0x21F4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F4F4u;
        // 0x21f4f8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F4F4u, 0x21F4FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21F4FCu;
label_21f4fc:
    // 0x21f4fc: 0x8e2201bc  lw          $v0, 0x1BC($s1)
    ctx->pc = 0x21f4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
label_21f500:
    // 0x21f500: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21f500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21f504:
    // 0x21f504: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x21f504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_21f508:
    // 0x21f508: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x21f508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_21f50c:
    // 0x21f50c: 0x931023  subu        $v0, $a0, $s3
    ctx->pc = 0x21f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_21f510:
    // 0x21f510: 0x54a014  dsllv       $s4, $s4, $v0
    ctx->pc = 0x21f510u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (GPR_U32(ctx, 2) & 0x3F));
label_21f514:
    // 0x21f514: 0x24130019  addiu       $s3, $zero, 0x19
    ctx->pc = 0x21f514u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_21f518:
    // 0x21f518: 0xaed30010  sw          $s3, 0x10($s6)
    ctx->pc = 0x21f518u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 19));
label_21f51c:
    // 0x21f51c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21f520:
    // 0x21f520: 0xaed00000  sw          $s0, 0x0($s6)
    ctx->pc = 0x21f520u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
label_21f524:
    // 0x21f524: 0xaed20004  sw          $s2, 0x4($s6)
    ctx->pc = 0x21f524u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 18));
label_21f528:
    // 0x21f528: 0xfed40008  sd          $s4, 0x8($s6)
    ctx->pc = 0x21f528u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 20));
label_21f52c:
    // 0x21f52c: 0x1040fda5  beqz        $v0, . + 4 + (-0x25B << 2)
label_21f530:
    if (ctx->pc == 0x21F530u) {
        ctx->pc = 0x21F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F52Cu;
        // 0x21f530: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F534u;
        goto label_21f534;
    }
    ctx->pc = 0x21F52Cu;
    {
        const bool branch_taken_0x21f52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F52Cu;
        // 0x21f530: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f52c) {
            ctx->pc = 0x21EBC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ebc4;
        }
    }
    ctx->pc = 0x21F534u;
label_21f534:
    // 0x21f534: 0x28c20008  slti        $v0, $a2, 0x8
    ctx->pc = 0x21f534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
label_21f538:
    // 0x21f538: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21f53c:
    if (ctx->pc == 0x21F53Cu) {
        ctx->pc = 0x21F53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F538u;
        // 0x21f53c: 0xdfa90008  ld          $t1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F540u;
        goto label_21f540;
    }
    ctx->pc = 0x21F538u;
    {
        const bool branch_taken_0x21f538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F538u;
        // 0x21f53c: 0xdfa90008  ld          $t1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f538) {
            ctx->pc = 0x21F548u;
            goto label_21f548;
        }
    }
    ctx->pc = 0x21F540u;
label_21f540:
    // 0x21f540: 0x10000010  b           . + 4 + (0x10 << 2)
label_21f544:
    if (ctx->pc == 0x21F544u) {
        ctx->pc = 0x21F544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F540u;
        // 0x21f544: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F548u;
        goto label_21f548;
    }
    ctx->pc = 0x21F540u;
    {
        const bool branch_taken_0x21f540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F540u;
        // 0x21f544: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f540) {
            ctx->pc = 0x21F584u;
            goto label_21f584;
        }
    }
    ctx->pc = 0x21F548u;
label_21f548:
    // 0x21f548: 0x24c2fff8  addiu       $v0, $a2, -0x8
    ctx->pc = 0x21f548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
label_21f54c:
    // 0x21f54c: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x21f54cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_21f550:
    // 0x21f550: 0x491017  dsrav       $v0, $t1, $v0
    ctx->pc = 0x21f550u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 9) >> (GPR_U32(ctx, 2) & 0x3F));
label_21f554:
    // 0x21f554: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21f554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_21f558:
    // 0x21f558: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21f558u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_21f55c:
    // 0x21f55c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_21f560:
    // 0x21f560: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x21f560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21f564:
    // 0x21f564: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x21f564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_21f568:
    // 0x21f568: 0x8c68011c  lw          $t0, 0x11C($v1)
    ctx->pc = 0x21f568u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_21f56c:
    // 0x21f56c: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_21f570:
    if (ctx->pc == 0x21F570u) {
        ctx->pc = 0x21F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F56Cu;
        // 0x21f570: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F574u;
        goto label_21f574;
    }
    ctx->pc = 0x21F56Cu;
    {
        const bool branch_taken_0x21f56c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F56Cu;
        // 0x21f570: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f56c) {
            ctx->pc = 0x21F580u;
            goto label_21f580;
        }
    }
    ctx->pc = 0x21F574u;
label_21f574:
    // 0x21f574: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x21f574u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_21f578:
    // 0x21f578: 0x1000000a  b           . + 4 + (0xA << 2)
label_21f57c:
    if (ctx->pc == 0x21F57Cu) {
        ctx->pc = 0x21F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F578u;
        // 0x21f57c: 0x9053051c  lbu         $s3, 0x51C($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F580u;
        goto label_21f580;
    }
    ctx->pc = 0x21F578u;
    {
        const bool branch_taken_0x21f578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F578u;
        // 0x21f57c: 0x9053051c  lbu         $s3, 0x51C($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f578) {
            ctx->pc = 0x21F5A4u;
            goto label_21f5a4;
        }
    }
    ctx->pc = 0x21F580u;
label_21f580:
    // 0x21f580: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x21f580u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_21f584:
    // 0x21f584: 0x8fa70044  lw          $a3, 0x44($sp)
    ctx->pc = 0x21f584u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_21f588:
    // 0x21f588: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x21f588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_21f58c:
    // 0x21f58c: 0xc0879b4  jal         func_21E6D0
label_21f590:
    if (ctx->pc == 0x21F590u) {
        ctx->pc = 0x21F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F58Cu;
        // 0x21f590: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F594u;
        goto label_21f594;
    }
    ctx->pc = 0x21F58Cu;
    SET_GPR_U32(ctx, 31, 0x21F594u);
    ctx->pc = 0x21F590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F58Cu;
    // 0x21f590: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E6D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21E6D0u, 0x21F58Cu, 0x21F594u)) {
        return;
    }
    ctx->pc = 0x21F594u;
label_21f594:
    // 0x21f594: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x21f594u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21f598:
    // 0x21f598: 0x660fd8a  bltz        $s3, . + 4 + (-0x276 << 2)
label_21f59c:
    if (ctx->pc == 0x21F59Cu) {
        ctx->pc = 0x21F59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F598u;
        // 0x21f59c: 0xdfa90008  ld          $t1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F5A0u;
        goto label_21f5a0;
    }
    ctx->pc = 0x21F598u;
    {
        const bool branch_taken_0x21f598 = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x21F59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F598u;
        // 0x21f59c: 0xdfa90008  ld          $t1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f598) {
            ctx->pc = 0x21EBC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ebc4;
        }
    }
    ctx->pc = 0x21F5A0u;
label_21f5a0:
    // 0x21f5a0: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x21f5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_21f5a4:
    // 0x21f5a4: 0x132103  sra         $a0, $s3, 4
    ctx->pc = 0x21f5a4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 19), 4));
label_21f5a8:
    // 0x21f5a8: 0x3273000f  andi        $s3, $s3, 0xF
    ctx->pc = 0x21f5a8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
label_21f5ac:
    // 0x21f5ac: 0x12600059  beqz        $s3, . + 4 + (0x59 << 2)
label_21f5b0:
    if (ctx->pc == 0x21F5B0u) {
        ctx->pc = 0x21F5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5ACu;
        // 0x21f5b0: 0xd3102a  slt         $v0, $a2, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F5B4u;
        goto label_21f5b4;
    }
    ctx->pc = 0x21F5ACu;
    {
        const bool branch_taken_0x21f5ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5ACu;
        // 0x21f5b0: 0xd3102a  slt         $v0, $a2, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f5ac) {
            ctx->pc = 0x21F714u;
            goto label_21f714;
        }
    }
    ctx->pc = 0x21F5B4u;
label_21f5b4:
    // 0x21f5b4: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
label_21f5b8:
    if (ctx->pc == 0x21F5B8u) {
        ctx->pc = 0x21F5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5B4u;
        // 0x21f5b8: 0x3c4f021  addu        $fp, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F5BCu;
        goto label_21f5bc;
    }
    ctx->pc = 0x21F5B4u;
    {
        const bool branch_taken_0x21f5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5B4u;
        // 0x21f5b8: 0x3c4f021  addu        $fp, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f5b4) {
            ctx->pc = 0x21F70Cu;
            goto label_21f70c;
        }
    }
    ctx->pc = 0x21F5BCu;
label_21f5bc:
    // 0x21f5bc: 0x8fb10014  lw          $s1, 0x14($sp)
    ctx->pc = 0x21f5bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_21f5c0:
    // 0x21f5c0: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x21f5c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_21f5c4:
    // 0x21f5c4: 0x3a0b82d  daddu       $s7, $sp, $zero
    ctx->pc = 0x21f5c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21f5c8:
    // 0x21f5c8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x21f5c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21f5cc:
    // 0x21f5cc: 0x8e2201a0  lw          $v0, 0x1A0($s1)
    ctx->pc = 0x21f5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_21f5d0:
    // 0x21f5d0: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x21f5d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_21f5d4:
    // 0x21f5d4: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
label_21f5d8:
    if (ctx->pc == 0x21F5D8u) {
        ctx->pc = 0x21F5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5D4u;
        // 0x21f5d8: 0x8fb20004  lw          $s2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F5DCu;
        goto label_21f5dc;
    }
    ctx->pc = 0x21F5D4u;
    {
        const bool branch_taken_0x21f5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5D4u;
        // 0x21f5d8: 0x8fb20004  lw          $s2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f5d4) {
            ctx->pc = 0x21F694u;
            goto label_21f694;
        }
    }
    ctx->pc = 0x21F5DCu;
label_21f5dc:
    // 0x21f5dc: 0x28c20019  slti        $v0, $a2, 0x19
    ctx->pc = 0x21f5dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)25) ? 1 : 0);
label_21f5e0:
    // 0x21f5e0: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
label_21f5e4:
    if (ctx->pc == 0x21F5E4u) {
        ctx->pc = 0x21F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5E0u;
        // 0x21f5e4: 0xaef40010  sw          $s4, 0x10($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F5E8u;
        goto label_21f5e8;
    }
    ctx->pc = 0x21F5E0u;
    {
        const bool branch_taken_0x21f5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f5e0) {
            ctx->pc = 0x21F5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F5E0u;
            // 0x21f5e4: 0xaef40010  sw          $s4, 0x10($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F6F0u;
            goto label_21f6f0;
        }
    }
    ctx->pc = 0x21F5E8u;
label_21f5e8:
    // 0x21f5e8: 0x5640000b  bnel        $s2, $zero, . + 4 + (0xB << 2)
label_21f5ec:
    if (ctx->pc == 0x21F5ECu) {
        ctx->pc = 0x21F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5E8u;
        // 0x21f5ec: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F5F0u;
        goto label_21f5f0;
    }
    ctx->pc = 0x21F5E8u;
    {
        const bool branch_taken_0x21f5e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f5e8) {
            ctx->pc = 0x21F5ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F5E8u;
            // 0x21f5ec: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F618u;
            goto label_21f618;
        }
    }
    ctx->pc = 0x21F5F0u;
label_21f5f0:
    // 0x21f5f0: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x21f5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_21f5f4:
    // 0x21f5f4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x21f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_21f5f8:
    // 0x21f5f8: 0x40f809  jalr        $v0
label_21f5fc:
    if (ctx->pc == 0x21F5FCu) {
        ctx->pc = 0x21F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5F8u;
        // 0x21f5fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F600u;
        goto label_21f600;
    }
    ctx->pc = 0x21F5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21F600u);
        ctx->pc = 0x21F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5F8u;
        // 0x21f5fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F5F8u, 0x21F600u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21F600u;
label_21f600:
    // 0x21f600: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_21f604:
    if (ctx->pc == 0x21F604u) {
        ctx->pc = 0x21F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F600u;
        // 0x21f604: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F608u;
        goto label_21f608;
    }
    ctx->pc = 0x21F600u;
    {
        const bool branch_taken_0x21f600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F600u;
        // 0x21f604: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f600) {
            ctx->pc = 0x21F700u;
            goto label_21f700;
        }
    }
    ctx->pc = 0x21F608u;
label_21f608:
    // 0x21f608: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x21f608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_21f60c:
    // 0x21f60c: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x21f60cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21f610:
    // 0x21f610: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x21f610u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21f614:
    // 0x21f614: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x21f614u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_21f618:
    // 0x21f618: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x21f618u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_21f61c:
    // 0x21f61c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x21f61cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_21f620:
    // 0x21f620: 0x14c70015  bne         $a2, $a3, . + 4 + (0x15 << 2)
label_21f624:
    if (ctx->pc == 0x21F624u) {
        ctx->pc = 0x21F624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F620u;
        // 0x21f624: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F628u;
        goto label_21f628;
    }
    ctx->pc = 0x21F620u;
    {
        const bool branch_taken_0x21f620 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x21F624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F620u;
        // 0x21f624: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f620) {
            ctx->pc = 0x21F678u;
            goto label_21f678;
        }
    }
    ctx->pc = 0x21F628u;
label_21f628:
    // 0x21f628: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x21f628u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_21f62c:
    // 0x21f62c: 0x0  nop
    ctx->pc = 0x21f62cu;
    // NOP
label_21f630:
    // 0x21f630: 0x5640000b  bnel        $s2, $zero, . + 4 + (0xB << 2)
label_21f634:
    if (ctx->pc == 0x21F634u) {
        ctx->pc = 0x21F634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F630u;
        // 0x21f634: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F638u;
        goto label_21f638;
    }
    ctx->pc = 0x21F630u;
    {
        const bool branch_taken_0x21f630 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f630) {
            ctx->pc = 0x21F634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F630u;
            // 0x21f634: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F660u;
            goto label_21f660;
        }
    }
    ctx->pc = 0x21F638u;
label_21f638:
    // 0x21f638: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x21f638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_21f63c:
    // 0x21f63c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x21f63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_21f640:
    // 0x21f640: 0x40f809  jalr        $v0
label_21f644:
    if (ctx->pc == 0x21F644u) {
        ctx->pc = 0x21F644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F640u;
        // 0x21f644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F648u;
        goto label_21f648;
    }
    ctx->pc = 0x21F640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21F648u);
        ctx->pc = 0x21F644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F640u;
        // 0x21f644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F640u, 0x21F648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21F648u;
label_21f648:
    // 0x21f648: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_21f64c:
    if (ctx->pc == 0x21F64Cu) {
        ctx->pc = 0x21F64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F648u;
        // 0x21f64c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F650u;
        goto label_21f650;
    }
    ctx->pc = 0x21F648u;
    {
        const bool branch_taken_0x21f648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F648u;
        // 0x21f64c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f648) {
            ctx->pc = 0x21F700u;
            goto label_21f700;
        }
    }
    ctx->pc = 0x21F650u;
label_21f650:
    // 0x21f650: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x21f650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_21f654:
    // 0x21f654: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x21f654u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21f658:
    // 0x21f658: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x21f658u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21f65c:
    // 0x21f65c: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x21f65cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_21f660:
    // 0x21f660: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x21f660u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_21f664:
    // 0x21f664: 0x10d6fff2  beq         $a2, $s6, . + 4 + (-0xE << 2)
label_21f668:
    if (ctx->pc == 0x21F668u) {
        ctx->pc = 0x21F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F664u;
        // 0x21f668: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F66Cu;
        goto label_21f66c;
    }
    ctx->pc = 0x21F664u;
    {
        const bool branch_taken_0x21f664 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 22));
        ctx->pc = 0x21F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F664u;
        // 0x21f668: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f664) {
            ctx->pc = 0x21F630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f630;
        }
    }
    ctx->pc = 0x21F66Cu;
label_21f66c:
    // 0x21f66c: 0x54c00009  bnel        $a2, $zero, . + 4 + (0x9 << 2)
label_21f670:
    if (ctx->pc == 0x21F670u) {
        ctx->pc = 0x21F670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F66Cu;
        // 0x21f670: 0xae2601a0  sw          $a2, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F674u;
        goto label_21f674;
    }
    ctx->pc = 0x21F66Cu;
    {
        const bool branch_taken_0x21f66c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f66c) {
            ctx->pc = 0x21F670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F66Cu;
            // 0x21f670: 0xae2601a0  sw          $a2, 0x1A0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F694u;
            goto label_21f694;
        }
    }
    ctx->pc = 0x21F674u;
label_21f674:
    // 0x21f674: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x21f674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_21f678:
    // 0x21f678: 0x151a38  dsll        $v1, $s5, 8
    ctx->pc = 0x21f678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << 8);
label_21f67c:
    // 0x21f67c: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x21f67cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_21f680:
    // 0x21f680: 0x2a820019  slti        $v0, $s4, 0x19
    ctx->pc = 0x21f680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)25) ? 1 : 0);
label_21f684:
    // 0x21f684: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_21f688:
    if (ctx->pc == 0x21F688u) {
        ctx->pc = 0x21F688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F684u;
        // 0x21f688: 0xc3a825  or          $s5, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F68Cu;
        goto label_21f68c;
    }
    ctx->pc = 0x21F684u;
    {
        const bool branch_taken_0x21f684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F684u;
        // 0x21f688: 0xc3a825  or          $s5, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f684) {
            ctx->pc = 0x21F5E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f5e8;
        }
    }
    ctx->pc = 0x21F68Cu;
label_21f68c:
    // 0x21f68c: 0x10000018  b           . + 4 + (0x18 << 2)
label_21f690:
    if (ctx->pc == 0x21F690u) {
        ctx->pc = 0x21F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F68Cu;
        // 0x21f690: 0xaef40010  sw          $s4, 0x10($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F694u;
        goto label_21f694;
    }
    ctx->pc = 0x21F68Cu;
    {
        const bool branch_taken_0x21f68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F68Cu;
        // 0x21f690: 0xaef40010  sw          $s4, 0x10($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f68c) {
            ctx->pc = 0x21F6F0u;
            goto label_21f6f0;
        }
    }
    ctx->pc = 0x21F694u;
label_21f694:
    // 0x21f694: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x21f694u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_21f698:
    // 0x21f698: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_21f69c:
    if (ctx->pc == 0x21F69Cu) {
        ctx->pc = 0x21F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F698u;
        // 0x21f69c: 0xaef40010  sw          $s4, 0x10($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F6A0u;
        goto label_21f6a0;
    }
    ctx->pc = 0x21F698u;
    {
        const bool branch_taken_0x21f698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f698) {
            ctx->pc = 0x21F69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F698u;
            // 0x21f69c: 0xaef40010  sw          $s4, 0x10($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F6F0u;
            goto label_21f6f0;
        }
    }
    ctx->pc = 0x21F6A0u;
label_21f6a0:
    // 0x21f6a0: 0x8e2201bc  lw          $v0, 0x1BC($s1)
    ctx->pc = 0x21f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
label_21f6a4:
    // 0x21f6a4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x21f6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_21f6a8:
    // 0x21f6a8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_21f6ac:
    if (ctx->pc == 0x21F6ACu) {
        ctx->pc = 0x21F6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F6A8u;
        // 0x21f6ac: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F6B0u;
        goto label_21f6b0;
    }
    ctx->pc = 0x21F6A8u;
    {
        const bool branch_taken_0x21f6a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F6A8u;
        // 0x21f6ac: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f6a8) {
            ctx->pc = 0x21F6E0u;
            goto label_21f6e0;
        }
    }
    ctx->pc = 0x21F6B0u;
label_21f6b0:
    // 0x21f6b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21f6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21f6b4:
    // 0x21f6b4: 0x24080075  addiu       $t0, $zero, 0x75
    ctx->pc = 0x21f6b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_21f6b8:
    // 0x21f6b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21f6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21f6bc:
    // 0x21f6bc: 0xac680014  sw          $t0, 0x14($v1)
    ctx->pc = 0x21f6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 8));
label_21f6c0:
    // 0x21f6c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21f6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21f6c4:
    // 0x21f6c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21f6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21f6c8:
    // 0x21f6c8: 0x60f809  jalr        $v1
label_21f6cc:
    if (ctx->pc == 0x21F6CCu) {
        ctx->pc = 0x21F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F6C8u;
        // 0x21f6cc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F6D0u;
        goto label_21f6d0;
    }
    ctx->pc = 0x21F6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21F6D0u);
        ctx->pc = 0x21F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F6C8u;
        // 0x21f6cc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F6C8u, 0x21F6D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21F6D0u;
label_21f6d0:
    // 0x21f6d0: 0x8e2201bc  lw          $v0, 0x1BC($s1)
    ctx->pc = 0x21f6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
label_21f6d4:
    // 0x21f6d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21f6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21f6d8:
    // 0x21f6d8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x21f6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_21f6dc:
    // 0x21f6dc: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x21f6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_21f6e0:
    // 0x21f6e0: 0x941023  subu        $v0, $a0, $s4
    ctx->pc = 0x21f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_21f6e4:
    // 0x21f6e4: 0x55a814  dsllv       $s5, $s5, $v0
    ctx->pc = 0x21f6e4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (GPR_U32(ctx, 2) & 0x3F));
label_21f6e8:
    // 0x21f6e8: 0x24140019  addiu       $s4, $zero, 0x19
    ctx->pc = 0x21f6e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_21f6ec:
    // 0x21f6ec: 0xaef40010  sw          $s4, 0x10($s7)
    ctx->pc = 0x21f6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 20));
label_21f6f0:
    // 0x21f6f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21f6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21f6f4:
    // 0x21f6f4: 0xaef00000  sw          $s0, 0x0($s7)
    ctx->pc = 0x21f6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 16));
label_21f6f8:
    // 0x21f6f8: 0xaef20004  sw          $s2, 0x4($s7)
    ctx->pc = 0x21f6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 18));
label_21f6fc:
    // 0x21f6fc: 0xfef50008  sd          $s5, 0x8($s7)
    ctx->pc = 0x21f6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 21));
label_21f700:
    // 0x21f700: 0x1040fd30  beqz        $v0, . + 4 + (-0x2D0 << 2)
label_21f704:
    if (ctx->pc == 0x21F704u) {
        ctx->pc = 0x21F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F700u;
        // 0x21f704: 0xdfa90008  ld          $t1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F708u;
        goto label_21f708;
    }
    ctx->pc = 0x21F700u;
    {
        const bool branch_taken_0x21f700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F700u;
        // 0x21f704: 0xdfa90008  ld          $t1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f700) {
            ctx->pc = 0x21EBC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ebc4;
        }
    }
    ctx->pc = 0x21F708u;
label_21f708:
    // 0x21f708: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x21f708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_21f70c:
    // 0x21f70c: 0x10000005  b           . + 4 + (0x5 << 2)
label_21f710:
    if (ctx->pc == 0x21F710u) {
        ctx->pc = 0x21F710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F70Cu;
        // 0x21f710: 0xd33023  subu        $a2, $a2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F714u;
        goto label_21f714;
    }
    ctx->pc = 0x21F70Cu;
    {
        const bool branch_taken_0x21f70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F70Cu;
        // 0x21f710: 0xd33023  subu        $a2, $a2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f70c) {
            ctx->pc = 0x21F724u;
            goto label_21f724;
        }
    }
    ctx->pc = 0x21F714u;
label_21f714:
    // 0x21f714: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x21f714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_21f718:
    // 0x21f718: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_21f71c:
    if (ctx->pc == 0x21F71Cu) {
        ctx->pc = 0x21F71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F718u;
        // 0x21f71c: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F720u;
        goto label_21f720;
    }
    ctx->pc = 0x21F718u;
    {
        const bool branch_taken_0x21f718 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x21F71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F718u;
        // 0x21f71c: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f718) {
            ctx->pc = 0x21F738u;
            goto label_21f738;
        }
    }
    ctx->pc = 0x21F720u;
label_21f720:
    // 0x21f720: 0x27de000f  addiu       $fp, $fp, 0xF
    ctx->pc = 0x21f720u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 15));
label_21f724:
    // 0x21f724: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x21f724u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_21f728:
    // 0x21f728: 0x2bc20040  slti        $v0, $fp, 0x40
    ctx->pc = 0x21f728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)64) ? 1 : 0);
label_21f72c:
    // 0x21f72c: 0x1440ff30  bnez        $v0, . + 4 + (-0xD0 << 2)
label_21f730:
    if (ctx->pc == 0x21F730u) {
        ctx->pc = 0x21F730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F72Cu;
        // 0x21f730: 0x28c20008  slti        $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F734u;
        goto label_21f734;
    }
    ctx->pc = 0x21F72Cu;
    {
        const bool branch_taken_0x21f72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F72Cu;
        // 0x21f730: 0x28c20008  slti        $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f72c) {
            ctx->pc = 0x21F3F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f3f0;
        }
    }
    ctx->pc = 0x21F734u;
label_21f734:
    // 0x21f734: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x21f734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_21f738:
    // 0x21f738: 0x8fa7003c  lw          $a3, 0x3C($sp)
    ctx->pc = 0x21f738u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_21f73c:
    // 0x21f73c: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x21f73cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_21f740:
    // 0x21f740: 0x8ca20164  lw          $v0, 0x164($a1)
    ctx->pc = 0x21f740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 356)));
label_21f744:
    // 0x21f744: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x21f744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_21f748:
    // 0x21f748: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x21f748u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_21f74c:
    // 0x21f74c: 0xafa7003c  sw          $a3, 0x3C($sp)
    ctx->pc = 0x21f74cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 7));
label_21f750:
    // 0x21f750: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x21f750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21f754:
    // 0x21f754: 0x1440fd38  bnez        $v0, . + 4 + (-0x2C8 << 2)
label_21f758:
    if (ctx->pc == 0x21F758u) {
        ctx->pc = 0x21F758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F754u;
        // 0x21f758: 0xafa80048  sw          $t0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F75Cu;
        goto label_21f75c;
    }
    ctx->pc = 0x21F754u;
    {
        const bool branch_taken_0x21f754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F754u;
        // 0x21f758: 0xafa80048  sw          $t0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f754) {
            ctx->pc = 0x21EC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ec38;
        }
    }
    ctx->pc = 0x21F75Cu;
label_21f75c:
    // 0x21f75c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x21f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_21f760:
    // 0x21f760: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x21f760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_21f764:
    // 0x21f764: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x21f764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_21f768:
    // 0x21f768: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x21f768u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_21f76c:
    // 0x21f76c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x21f76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_21f770:
    // 0x21f770: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x21f770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_21f774:
    // 0x21f774: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x21f774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_21f778:
    // 0x21f778: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x21f778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_21f77c:
    // 0x21f77c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x21f77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_21f780:
    // 0x21f780: 0xfc890010  sd          $t1, 0x10($a0)
    ctx->pc = 0x21f780u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 9));
label_21f784:
    // 0x21f784: 0xac860018  sw          $a2, 0x18($a0)
    ctx->pc = 0x21f784u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
label_21f788:
    // 0x21f788: 0x6ba50027  ldl         $a1, 0x27($sp)
    ctx->pc = 0x21f788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_21f78c:
    // 0x21f78c: 0x6fa50020  ldr         $a1, 0x20($sp)
    ctx->pc = 0x21f78cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_21f790:
    // 0x21f790: 0x6ba6002f  ldl         $a2, 0x2F($sp)
    ctx->pc = 0x21f790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_21f794:
    // 0x21f794: 0x6fa60028  ldr         $a2, 0x28($sp)
    ctx->pc = 0x21f794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_21f798:
    // 0x21f798: 0xb0850027  sdl         $a1, 0x27($a0)
    ctx->pc = 0x21f798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_21f79c:
    // 0x21f79c: 0xb4850020  sdr         $a1, 0x20($a0)
    ctx->pc = 0x21f79cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_21f7a0:
    // 0x21f7a0: 0xb086002f  sdl         $a2, 0x2F($a0)
    ctx->pc = 0x21f7a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_21f7a4:
    // 0x21f7a4: 0xb4860028  sdr         $a2, 0x28($a0)
    ctx->pc = 0x21f7a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_21f7a8:
    // 0x21f7a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x21f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_21f7ac:
    // 0x21f7ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x21f7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_21f7b0:
    // 0x21f7b0: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x21f7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_21f7b4:
    // 0x21f7b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21f7b8:
    // 0x21f7b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x21f7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_21f7bc:
    // 0x21f7bc: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x21f7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
label_21f7c0:
    // 0x21f7c0: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x21f7c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_21f7c4:
    // 0x21f7c4: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x21f7c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_21f7c8:
    // 0x21f7c8: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x21f7c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_21f7cc:
    // 0x21f7cc: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x21f7ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_21f7d0:
    // 0x21f7d0: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x21f7d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_21f7d4:
    // 0x21f7d4: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x21f7d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_21f7d8:
    // 0x21f7d8: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x21f7d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_21f7dc:
    // 0x21f7dc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x21f7dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21f7e0:
    // 0x21f7e0: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x21f7e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_21f7e4:
    // 0x21f7e4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x21f7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_21f7e8:
    // 0x21f7e8: 0x3e00008  jr          $ra
label_21f7ec:
    if (ctx->pc == 0x21F7ECu) {
        ctx->pc = 0x21F7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F7E8u;
        // 0x21f7ec: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F7F0u;
        goto label_fallthrough_0x21f7e8;
    }
    ctx->pc = 0x21F7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F7E8u;
        // 0x21f7ec: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21f7e8:
    ctx->pc = 0x21F7F0u;
}
