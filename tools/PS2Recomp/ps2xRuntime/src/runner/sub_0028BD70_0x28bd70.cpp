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

// Function: sub_0028BD70
// Address: 0x28bd70 - 0x28c4a8
void sub_0028BD70_0x28bd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028BD70_0x28bd70");
#endif

    switch (ctx->pc) {
        case 0x28bd70u: goto label_28bd70;
        case 0x28bd74u: goto label_28bd74;
        case 0x28bd78u: goto label_28bd78;
        case 0x28bd7cu: goto label_28bd7c;
        case 0x28bd80u: goto label_28bd80;
        case 0x28bd84u: goto label_28bd84;
        case 0x28bd88u: goto label_28bd88;
        case 0x28bd8cu: goto label_28bd8c;
        case 0x28bd90u: goto label_28bd90;
        case 0x28bd94u: goto label_28bd94;
        case 0x28bd98u: goto label_28bd98;
        case 0x28bd9cu: goto label_28bd9c;
        case 0x28bda0u: goto label_28bda0;
        case 0x28bda4u: goto label_28bda4;
        case 0x28bda8u: goto label_28bda8;
        case 0x28bdacu: goto label_28bdac;
        case 0x28bdb0u: goto label_28bdb0;
        case 0x28bdb4u: goto label_28bdb4;
        case 0x28bdb8u: goto label_28bdb8;
        case 0x28bdbcu: goto label_28bdbc;
        case 0x28bdc0u: goto label_28bdc0;
        case 0x28bdc4u: goto label_28bdc4;
        case 0x28bdc8u: goto label_28bdc8;
        case 0x28bdccu: goto label_28bdcc;
        case 0x28bdd0u: goto label_28bdd0;
        case 0x28bdd4u: goto label_28bdd4;
        case 0x28bdd8u: goto label_28bdd8;
        case 0x28bddcu: goto label_28bddc;
        case 0x28bde0u: goto label_28bde0;
        case 0x28bde4u: goto label_28bde4;
        case 0x28bde8u: goto label_28bde8;
        case 0x28bdecu: goto label_28bdec;
        case 0x28bdf0u: goto label_28bdf0;
        case 0x28bdf4u: goto label_28bdf4;
        case 0x28bdf8u: goto label_28bdf8;
        case 0x28bdfcu: goto label_28bdfc;
        case 0x28be00u: goto label_28be00;
        case 0x28be04u: goto label_28be04;
        case 0x28be08u: goto label_28be08;
        case 0x28be0cu: goto label_28be0c;
        case 0x28be10u: goto label_28be10;
        case 0x28be14u: goto label_28be14;
        case 0x28be18u: goto label_28be18;
        case 0x28be1cu: goto label_28be1c;
        case 0x28be20u: goto label_28be20;
        case 0x28be24u: goto label_28be24;
        case 0x28be28u: goto label_28be28;
        case 0x28be2cu: goto label_28be2c;
        case 0x28be30u: goto label_28be30;
        case 0x28be34u: goto label_28be34;
        case 0x28be38u: goto label_28be38;
        case 0x28be3cu: goto label_28be3c;
        case 0x28be40u: goto label_28be40;
        case 0x28be44u: goto label_28be44;
        case 0x28be48u: goto label_28be48;
        case 0x28be4cu: goto label_28be4c;
        case 0x28be50u: goto label_28be50;
        case 0x28be54u: goto label_28be54;
        case 0x28be58u: goto label_28be58;
        case 0x28be5cu: goto label_28be5c;
        case 0x28be60u: goto label_28be60;
        case 0x28be64u: goto label_28be64;
        case 0x28be68u: goto label_28be68;
        case 0x28be6cu: goto label_28be6c;
        case 0x28be70u: goto label_28be70;
        case 0x28be74u: goto label_28be74;
        case 0x28be78u: goto label_28be78;
        case 0x28be7cu: goto label_28be7c;
        case 0x28be80u: goto label_28be80;
        case 0x28be84u: goto label_28be84;
        case 0x28be88u: goto label_28be88;
        case 0x28be8cu: goto label_28be8c;
        case 0x28be90u: goto label_28be90;
        case 0x28be94u: goto label_28be94;
        case 0x28be98u: goto label_28be98;
        case 0x28be9cu: goto label_28be9c;
        case 0x28bea0u: goto label_28bea0;
        case 0x28bea4u: goto label_28bea4;
        case 0x28bea8u: goto label_28bea8;
        case 0x28beacu: goto label_28beac;
        case 0x28beb0u: goto label_28beb0;
        case 0x28beb4u: goto label_28beb4;
        case 0x28beb8u: goto label_28beb8;
        case 0x28bebcu: goto label_28bebc;
        case 0x28bec0u: goto label_28bec0;
        case 0x28bec4u: goto label_28bec4;
        case 0x28bec8u: goto label_28bec8;
        case 0x28beccu: goto label_28becc;
        case 0x28bed0u: goto label_28bed0;
        case 0x28bed4u: goto label_28bed4;
        case 0x28bed8u: goto label_28bed8;
        case 0x28bedcu: goto label_28bedc;
        case 0x28bee0u: goto label_28bee0;
        case 0x28bee4u: goto label_28bee4;
        case 0x28bee8u: goto label_28bee8;
        case 0x28beecu: goto label_28beec;
        case 0x28bef0u: goto label_28bef0;
        case 0x28bef4u: goto label_28bef4;
        case 0x28bef8u: goto label_28bef8;
        case 0x28befcu: goto label_28befc;
        case 0x28bf00u: goto label_28bf00;
        case 0x28bf04u: goto label_28bf04;
        case 0x28bf08u: goto label_28bf08;
        case 0x28bf0cu: goto label_28bf0c;
        case 0x28bf10u: goto label_28bf10;
        case 0x28bf14u: goto label_28bf14;
        case 0x28bf18u: goto label_28bf18;
        case 0x28bf1cu: goto label_28bf1c;
        case 0x28bf20u: goto label_28bf20;
        case 0x28bf24u: goto label_28bf24;
        case 0x28bf28u: goto label_28bf28;
        case 0x28bf2cu: goto label_28bf2c;
        case 0x28bf30u: goto label_28bf30;
        case 0x28bf34u: goto label_28bf34;
        case 0x28bf38u: goto label_28bf38;
        case 0x28bf3cu: goto label_28bf3c;
        case 0x28bf40u: goto label_28bf40;
        case 0x28bf44u: goto label_28bf44;
        case 0x28bf48u: goto label_28bf48;
        case 0x28bf4cu: goto label_28bf4c;
        case 0x28bf50u: goto label_28bf50;
        case 0x28bf54u: goto label_28bf54;
        case 0x28bf58u: goto label_28bf58;
        case 0x28bf5cu: goto label_28bf5c;
        case 0x28bf60u: goto label_28bf60;
        case 0x28bf64u: goto label_28bf64;
        case 0x28bf68u: goto label_28bf68;
        case 0x28bf6cu: goto label_28bf6c;
        case 0x28bf70u: goto label_28bf70;
        case 0x28bf74u: goto label_28bf74;
        case 0x28bf78u: goto label_28bf78;
        case 0x28bf7cu: goto label_28bf7c;
        case 0x28bf80u: goto label_28bf80;
        case 0x28bf84u: goto label_28bf84;
        case 0x28bf88u: goto label_28bf88;
        case 0x28bf8cu: goto label_28bf8c;
        case 0x28bf90u: goto label_28bf90;
        case 0x28bf94u: goto label_28bf94;
        case 0x28bf98u: goto label_28bf98;
        case 0x28bf9cu: goto label_28bf9c;
        case 0x28bfa0u: goto label_28bfa0;
        case 0x28bfa4u: goto label_28bfa4;
        case 0x28bfa8u: goto label_28bfa8;
        case 0x28bfacu: goto label_28bfac;
        case 0x28bfb0u: goto label_28bfb0;
        case 0x28bfb4u: goto label_28bfb4;
        case 0x28bfb8u: goto label_28bfb8;
        case 0x28bfbcu: goto label_28bfbc;
        case 0x28bfc0u: goto label_28bfc0;
        case 0x28bfc4u: goto label_28bfc4;
        case 0x28bfc8u: goto label_28bfc8;
        case 0x28bfccu: goto label_28bfcc;
        case 0x28bfd0u: goto label_28bfd0;
        case 0x28bfd4u: goto label_28bfd4;
        case 0x28bfd8u: goto label_28bfd8;
        case 0x28bfdcu: goto label_28bfdc;
        case 0x28bfe0u: goto label_28bfe0;
        case 0x28bfe4u: goto label_28bfe4;
        case 0x28bfe8u: goto label_28bfe8;
        case 0x28bfecu: goto label_28bfec;
        case 0x28bff0u: goto label_28bff0;
        case 0x28bff4u: goto label_28bff4;
        case 0x28bff8u: goto label_28bff8;
        case 0x28bffcu: goto label_28bffc;
        case 0x28c000u: goto label_28c000;
        case 0x28c004u: goto label_28c004;
        case 0x28c008u: goto label_28c008;
        case 0x28c00cu: goto label_28c00c;
        case 0x28c010u: goto label_28c010;
        case 0x28c014u: goto label_28c014;
        case 0x28c018u: goto label_28c018;
        case 0x28c01cu: goto label_28c01c;
        case 0x28c020u: goto label_28c020;
        case 0x28c024u: goto label_28c024;
        case 0x28c028u: goto label_28c028;
        case 0x28c02cu: goto label_28c02c;
        case 0x28c030u: goto label_28c030;
        case 0x28c034u: goto label_28c034;
        case 0x28c038u: goto label_28c038;
        case 0x28c03cu: goto label_28c03c;
        case 0x28c040u: goto label_28c040;
        case 0x28c044u: goto label_28c044;
        case 0x28c048u: goto label_28c048;
        case 0x28c04cu: goto label_28c04c;
        case 0x28c050u: goto label_28c050;
        case 0x28c054u: goto label_28c054;
        case 0x28c058u: goto label_28c058;
        case 0x28c05cu: goto label_28c05c;
        case 0x28c060u: goto label_28c060;
        case 0x28c064u: goto label_28c064;
        case 0x28c068u: goto label_28c068;
        case 0x28c06cu: goto label_28c06c;
        case 0x28c070u: goto label_28c070;
        case 0x28c074u: goto label_28c074;
        case 0x28c078u: goto label_28c078;
        case 0x28c07cu: goto label_28c07c;
        case 0x28c080u: goto label_28c080;
        case 0x28c084u: goto label_28c084;
        case 0x28c088u: goto label_28c088;
        case 0x28c08cu: goto label_28c08c;
        case 0x28c090u: goto label_28c090;
        case 0x28c094u: goto label_28c094;
        case 0x28c098u: goto label_28c098;
        case 0x28c09cu: goto label_28c09c;
        case 0x28c0a0u: goto label_28c0a0;
        case 0x28c0a4u: goto label_28c0a4;
        case 0x28c0a8u: goto label_28c0a8;
        case 0x28c0acu: goto label_28c0ac;
        case 0x28c0b0u: goto label_28c0b0;
        case 0x28c0b4u: goto label_28c0b4;
        case 0x28c0b8u: goto label_28c0b8;
        case 0x28c0bcu: goto label_28c0bc;
        case 0x28c0c0u: goto label_28c0c0;
        case 0x28c0c4u: goto label_28c0c4;
        case 0x28c0c8u: goto label_28c0c8;
        case 0x28c0ccu: goto label_28c0cc;
        case 0x28c0d0u: goto label_28c0d0;
        case 0x28c0d4u: goto label_28c0d4;
        case 0x28c0d8u: goto label_28c0d8;
        case 0x28c0dcu: goto label_28c0dc;
        case 0x28c0e0u: goto label_28c0e0;
        case 0x28c0e4u: goto label_28c0e4;
        case 0x28c0e8u: goto label_28c0e8;
        case 0x28c0ecu: goto label_28c0ec;
        case 0x28c0f0u: goto label_28c0f0;
        case 0x28c0f4u: goto label_28c0f4;
        case 0x28c0f8u: goto label_28c0f8;
        case 0x28c0fcu: goto label_28c0fc;
        case 0x28c100u: goto label_28c100;
        case 0x28c104u: goto label_28c104;
        case 0x28c108u: goto label_28c108;
        case 0x28c10cu: goto label_28c10c;
        case 0x28c110u: goto label_28c110;
        case 0x28c114u: goto label_28c114;
        case 0x28c118u: goto label_28c118;
        case 0x28c11cu: goto label_28c11c;
        case 0x28c120u: goto label_28c120;
        case 0x28c124u: goto label_28c124;
        case 0x28c128u: goto label_28c128;
        case 0x28c12cu: goto label_28c12c;
        case 0x28c130u: goto label_28c130;
        case 0x28c134u: goto label_28c134;
        case 0x28c138u: goto label_28c138;
        case 0x28c13cu: goto label_28c13c;
        case 0x28c140u: goto label_28c140;
        case 0x28c144u: goto label_28c144;
        case 0x28c148u: goto label_28c148;
        case 0x28c14cu: goto label_28c14c;
        case 0x28c150u: goto label_28c150;
        case 0x28c154u: goto label_28c154;
        case 0x28c158u: goto label_28c158;
        case 0x28c15cu: goto label_28c15c;
        case 0x28c160u: goto label_28c160;
        case 0x28c164u: goto label_28c164;
        case 0x28c168u: goto label_28c168;
        case 0x28c16cu: goto label_28c16c;
        case 0x28c170u: goto label_28c170;
        case 0x28c174u: goto label_28c174;
        case 0x28c178u: goto label_28c178;
        case 0x28c17cu: goto label_28c17c;
        case 0x28c180u: goto label_28c180;
        case 0x28c184u: goto label_28c184;
        case 0x28c188u: goto label_28c188;
        case 0x28c18cu: goto label_28c18c;
        case 0x28c190u: goto label_28c190;
        case 0x28c194u: goto label_28c194;
        case 0x28c198u: goto label_28c198;
        case 0x28c19cu: goto label_28c19c;
        case 0x28c1a0u: goto label_28c1a0;
        case 0x28c1a4u: goto label_28c1a4;
        case 0x28c1a8u: goto label_28c1a8;
        case 0x28c1acu: goto label_28c1ac;
        case 0x28c1b0u: goto label_28c1b0;
        case 0x28c1b4u: goto label_28c1b4;
        case 0x28c1b8u: goto label_28c1b8;
        case 0x28c1bcu: goto label_28c1bc;
        case 0x28c1c0u: goto label_28c1c0;
        case 0x28c1c4u: goto label_28c1c4;
        case 0x28c1c8u: goto label_28c1c8;
        case 0x28c1ccu: goto label_28c1cc;
        case 0x28c1d0u: goto label_28c1d0;
        case 0x28c1d4u: goto label_28c1d4;
        case 0x28c1d8u: goto label_28c1d8;
        case 0x28c1dcu: goto label_28c1dc;
        case 0x28c1e0u: goto label_28c1e0;
        case 0x28c1e4u: goto label_28c1e4;
        case 0x28c1e8u: goto label_28c1e8;
        case 0x28c1ecu: goto label_28c1ec;
        case 0x28c1f0u: goto label_28c1f0;
        case 0x28c1f4u: goto label_28c1f4;
        case 0x28c1f8u: goto label_28c1f8;
        case 0x28c1fcu: goto label_28c1fc;
        case 0x28c200u: goto label_28c200;
        case 0x28c204u: goto label_28c204;
        case 0x28c208u: goto label_28c208;
        case 0x28c20cu: goto label_28c20c;
        case 0x28c210u: goto label_28c210;
        case 0x28c214u: goto label_28c214;
        case 0x28c218u: goto label_28c218;
        case 0x28c21cu: goto label_28c21c;
        case 0x28c220u: goto label_28c220;
        case 0x28c224u: goto label_28c224;
        case 0x28c228u: goto label_28c228;
        case 0x28c22cu: goto label_28c22c;
        case 0x28c230u: goto label_28c230;
        case 0x28c234u: goto label_28c234;
        case 0x28c238u: goto label_28c238;
        case 0x28c23cu: goto label_28c23c;
        case 0x28c240u: goto label_28c240;
        case 0x28c244u: goto label_28c244;
        case 0x28c248u: goto label_28c248;
        case 0x28c24cu: goto label_28c24c;
        case 0x28c250u: goto label_28c250;
        case 0x28c254u: goto label_28c254;
        case 0x28c258u: goto label_28c258;
        case 0x28c25cu: goto label_28c25c;
        case 0x28c260u: goto label_28c260;
        case 0x28c264u: goto label_28c264;
        case 0x28c268u: goto label_28c268;
        case 0x28c26cu: goto label_28c26c;
        case 0x28c270u: goto label_28c270;
        case 0x28c274u: goto label_28c274;
        case 0x28c278u: goto label_28c278;
        case 0x28c27cu: goto label_28c27c;
        case 0x28c280u: goto label_28c280;
        case 0x28c284u: goto label_28c284;
        case 0x28c288u: goto label_28c288;
        case 0x28c28cu: goto label_28c28c;
        case 0x28c290u: goto label_28c290;
        case 0x28c294u: goto label_28c294;
        case 0x28c298u: goto label_28c298;
        case 0x28c29cu: goto label_28c29c;
        case 0x28c2a0u: goto label_28c2a0;
        case 0x28c2a4u: goto label_28c2a4;
        case 0x28c2a8u: goto label_28c2a8;
        case 0x28c2acu: goto label_28c2ac;
        case 0x28c2b0u: goto label_28c2b0;
        case 0x28c2b4u: goto label_28c2b4;
        case 0x28c2b8u: goto label_28c2b8;
        case 0x28c2bcu: goto label_28c2bc;
        case 0x28c2c0u: goto label_28c2c0;
        case 0x28c2c4u: goto label_28c2c4;
        case 0x28c2c8u: goto label_28c2c8;
        case 0x28c2ccu: goto label_28c2cc;
        case 0x28c2d0u: goto label_28c2d0;
        case 0x28c2d4u: goto label_28c2d4;
        case 0x28c2d8u: goto label_28c2d8;
        case 0x28c2dcu: goto label_28c2dc;
        case 0x28c2e0u: goto label_28c2e0;
        case 0x28c2e4u: goto label_28c2e4;
        case 0x28c2e8u: goto label_28c2e8;
        case 0x28c2ecu: goto label_28c2ec;
        case 0x28c2f0u: goto label_28c2f0;
        case 0x28c2f4u: goto label_28c2f4;
        case 0x28c2f8u: goto label_28c2f8;
        case 0x28c2fcu: goto label_28c2fc;
        case 0x28c300u: goto label_28c300;
        case 0x28c304u: goto label_28c304;
        case 0x28c308u: goto label_28c308;
        case 0x28c30cu: goto label_28c30c;
        case 0x28c310u: goto label_28c310;
        case 0x28c314u: goto label_28c314;
        case 0x28c318u: goto label_28c318;
        case 0x28c31cu: goto label_28c31c;
        case 0x28c320u: goto label_28c320;
        case 0x28c324u: goto label_28c324;
        case 0x28c328u: goto label_28c328;
        case 0x28c32cu: goto label_28c32c;
        case 0x28c330u: goto label_28c330;
        case 0x28c334u: goto label_28c334;
        case 0x28c338u: goto label_28c338;
        case 0x28c33cu: goto label_28c33c;
        case 0x28c340u: goto label_28c340;
        case 0x28c344u: goto label_28c344;
        case 0x28c348u: goto label_28c348;
        case 0x28c34cu: goto label_28c34c;
        case 0x28c350u: goto label_28c350;
        case 0x28c354u: goto label_28c354;
        case 0x28c358u: goto label_28c358;
        case 0x28c35cu: goto label_28c35c;
        case 0x28c360u: goto label_28c360;
        case 0x28c364u: goto label_28c364;
        case 0x28c368u: goto label_28c368;
        case 0x28c36cu: goto label_28c36c;
        case 0x28c370u: goto label_28c370;
        case 0x28c374u: goto label_28c374;
        case 0x28c378u: goto label_28c378;
        case 0x28c37cu: goto label_28c37c;
        case 0x28c380u: goto label_28c380;
        case 0x28c384u: goto label_28c384;
        case 0x28c388u: goto label_28c388;
        case 0x28c38cu: goto label_28c38c;
        case 0x28c390u: goto label_28c390;
        case 0x28c394u: goto label_28c394;
        case 0x28c398u: goto label_28c398;
        case 0x28c39cu: goto label_28c39c;
        case 0x28c3a0u: goto label_28c3a0;
        case 0x28c3a4u: goto label_28c3a4;
        case 0x28c3a8u: goto label_28c3a8;
        case 0x28c3acu: goto label_28c3ac;
        case 0x28c3b0u: goto label_28c3b0;
        case 0x28c3b4u: goto label_28c3b4;
        case 0x28c3b8u: goto label_28c3b8;
        case 0x28c3bcu: goto label_28c3bc;
        case 0x28c3c0u: goto label_28c3c0;
        case 0x28c3c4u: goto label_28c3c4;
        case 0x28c3c8u: goto label_28c3c8;
        case 0x28c3ccu: goto label_28c3cc;
        case 0x28c3d0u: goto label_28c3d0;
        case 0x28c3d4u: goto label_28c3d4;
        case 0x28c3d8u: goto label_28c3d8;
        case 0x28c3dcu: goto label_28c3dc;
        case 0x28c3e0u: goto label_28c3e0;
        case 0x28c3e4u: goto label_28c3e4;
        case 0x28c3e8u: goto label_28c3e8;
        case 0x28c3ecu: goto label_28c3ec;
        case 0x28c3f0u: goto label_28c3f0;
        case 0x28c3f4u: goto label_28c3f4;
        case 0x28c3f8u: goto label_28c3f8;
        case 0x28c3fcu: goto label_28c3fc;
        case 0x28c400u: goto label_28c400;
        case 0x28c404u: goto label_28c404;
        case 0x28c408u: goto label_28c408;
        case 0x28c40cu: goto label_28c40c;
        case 0x28c410u: goto label_28c410;
        case 0x28c414u: goto label_28c414;
        case 0x28c418u: goto label_28c418;
        case 0x28c41cu: goto label_28c41c;
        case 0x28c420u: goto label_28c420;
        case 0x28c424u: goto label_28c424;
        case 0x28c428u: goto label_28c428;
        case 0x28c42cu: goto label_28c42c;
        case 0x28c430u: goto label_28c430;
        case 0x28c434u: goto label_28c434;
        case 0x28c438u: goto label_28c438;
        case 0x28c43cu: goto label_28c43c;
        case 0x28c440u: goto label_28c440;
        case 0x28c444u: goto label_28c444;
        case 0x28c448u: goto label_28c448;
        case 0x28c44cu: goto label_28c44c;
        case 0x28c450u: goto label_28c450;
        case 0x28c454u: goto label_28c454;
        case 0x28c458u: goto label_28c458;
        case 0x28c45cu: goto label_28c45c;
        case 0x28c460u: goto label_28c460;
        case 0x28c464u: goto label_28c464;
        case 0x28c468u: goto label_28c468;
        case 0x28c46cu: goto label_28c46c;
        case 0x28c470u: goto label_28c470;
        case 0x28c474u: goto label_28c474;
        case 0x28c478u: goto label_28c478;
        case 0x28c47cu: goto label_28c47c;
        case 0x28c480u: goto label_28c480;
        case 0x28c484u: goto label_28c484;
        case 0x28c488u: goto label_28c488;
        case 0x28c48cu: goto label_28c48c;
        case 0x28c490u: goto label_28c490;
        case 0x28c494u: goto label_28c494;
        case 0x28c498u: goto label_28c498;
        case 0x28c49cu: goto label_28c49c;
        case 0x28c4a0u: goto label_28c4a0;
        case 0x28c4a4u: goto label_28c4a4;
        default: break;
    }

    ctx->pc = 0x28bd70u;

label_28bd70:
    // 0x28bd70: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x28bd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_28bd74:
    // 0x28bd74: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x28bd74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_28bd78:
    // 0x28bd78: 0x27a50034  addiu       $a1, $sp, 0x34
    ctx->pc = 0x28bd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_28bd7c:
    // 0x28bd7c: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x28bd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_28bd80:
    // 0x28bd80: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x28bd80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_28bd84:
    // 0x28bd84: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x28bd84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_28bd88:
    // 0x28bd88: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x28bd88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_28bd8c:
    // 0x28bd8c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x28bd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_28bd90:
    // 0x28bd90: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x28bd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_28bd94:
    // 0x28bd94: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x28bd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_28bd98:
    // 0x28bd98: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x28bd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_28bd9c:
    // 0x28bd9c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x28bd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_28bda0:
    // 0x28bda0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x28bda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_28bda4:
    // 0x28bda4: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x28bda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_28bda8:
    // 0x28bda8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28bda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_28bdac:
    // 0x28bdac: 0xc096cec  jal         func_25B3B0
label_28bdb0:
    if (ctx->pc == 0x28BDB0u) {
        ctx->pc = 0x28BDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDACu;
        // 0x28bdb0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BDB4u;
        goto label_28bdb4;
    }
    ctx->pc = 0x28BDACu;
    SET_GPR_U32(ctx, 31, 0x28BDB4u);
    ctx->pc = 0x28BDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BDACu;
    // 0x28bdb0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B3B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25B3B0u, 0x28BDACu, 0x28BDB4u)) {
        return;
    }
    ctx->pc = 0x28BDB4u;
label_28bdb4:
    // 0x28bdb4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x28bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_28bdb8:
    // 0x28bdb8: 0xc09294c  jal         func_24A530
label_28bdbc:
    if (ctx->pc == 0x28BDBCu) {
        ctx->pc = 0x28BDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDB8u;
        // 0x28bdbc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BDC0u;
        goto label_28bdc0;
    }
    ctx->pc = 0x28BDB8u;
    SET_GPR_U32(ctx, 31, 0x28BDC0u);
    ctx->pc = 0x28BDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BDB8u;
    // 0x28bdbc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x28BDB8u, 0x28BDC0u)) {
        return;
    }
    ctx->pc = 0x28BDC0u;
label_28bdc0:
    // 0x28bdc0: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x28bdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_28bdc4:
    // 0x28bdc4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x28bdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_28bdc8:
    // 0x28bdc8: 0xc09292a  jal         func_24A4A8
label_28bdcc:
    if (ctx->pc == 0x28BDCCu) {
        ctx->pc = 0x28BDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDC8u;
        // 0x28bdcc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BDD0u;
        goto label_28bdd0;
    }
    ctx->pc = 0x28BDC8u;
    SET_GPR_U32(ctx, 31, 0x28BDD0u);
    ctx->pc = 0x28BDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BDC8u;
    // 0x28bdcc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x28BDC8u, 0x28BDD0u)) {
        return;
    }
    ctx->pc = 0x28BDD0u;
label_28bdd0:
    // 0x28bdd0: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x28bdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_28bdd4:
    // 0x28bdd4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x28bdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_28bdd8:
    // 0x28bdd8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28bdd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28bddc:
    // 0x28bddc: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x28bddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_28bde0:
    // 0x28bde0: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x28bde0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28bde4:
    // 0x28bde4: 0x26100fc8  addiu       $s0, $s0, 0xFC8
    ctx->pc = 0x28bde4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
label_28bde8:
    // 0x28bde8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x28bde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_28bdec:
    // 0x28bdec: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x28bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_28bdf0:
    // 0x28bdf0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x28bdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_28bdf4:
    // 0x28bdf4: 0x34a50190  ori         $a1, $a1, 0x190
    ctx->pc = 0x28bdf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
label_28bdf8:
    // 0x28bdf8: 0x2012  mflo        $a0
    ctx->pc = 0x28bdf8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_28bdfc:
    // 0x28bdfc: 0x2400013  mtlo        $s2
    ctx->pc = 0x28bdfcu;
    ctx->lo = GPR_U64(ctx, 18);
label_28be00:
    // 0x28be00: 0x70c30000  madd        $zero, $a2, $v1
    ctx->pc = 0x28be00u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
label_28be04:
    // 0x28be04: 0x3012  mflo        $a2
    ctx->pc = 0x28be04u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_28be08:
    // 0x28be08: 0x40f809  jalr        $v0
label_28be0c:
    if (ctx->pc == 0x28BE0Cu) {
        ctx->pc = 0x28BE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE08u;
        // 0x28be0c: 0xafa60048  sw          $a2, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE10u;
        goto label_28be10;
    }
    ctx->pc = 0x28BE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28BE10u);
        ctx->pc = 0x28BE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE08u;
        // 0x28be0c: 0xafa60048  sw          $a2, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BE08u, 0x28BE10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28BE10u;
label_28be10:
    // 0x28be10: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x28be10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28be14:
    // 0x28be14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x28be14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_28be18:
    // 0x28be18: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x28be18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_28be1c:
    // 0x28be1c: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x28be1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
label_28be20:
    // 0x28be20: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x28be20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_28be24:
    // 0x28be24: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x28be24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_28be28:
    // 0x28be28: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x28be28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_28be2c:
    // 0x28be2c: 0x124300ab  beq         $s2, $v1, . + 4 + (0xAB << 2)
label_28be30:
    if (ctx->pc == 0x28BE30u) {
        ctx->pc = 0x28BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE2Cu;
        // 0x28be30: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE34u;
        goto label_28be34;
    }
    ctx->pc = 0x28BE2Cu;
    {
        const bool branch_taken_0x28be2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x28BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE2Cu;
        // 0x28be30: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be2c) {
            ctx->pc = 0x28C0DCu;
            goto label_28c0dc;
        }
    }
    ctx->pc = 0x28BE34u;
label_28be34:
    // 0x28be34: 0x0  nop
    ctx->pc = 0x28be34u;
    // NOP
label_28be38:
    // 0x28be38: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x28be38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_28be3c:
    // 0x28be3c: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x28be3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_28be40:
    // 0x28be40: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x28be40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_28be44:
    // 0x28be44: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x28be44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_28be48:
    // 0x28be48: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x28be48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_28be4c:
    // 0x28be4c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x28be4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_28be50:
    // 0x28be50: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x28be50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_28be54:
    // 0x28be54: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x28be54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_28be58:
    // 0x28be58: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x28be58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28be5c:
    // 0x28be5c: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x28be5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_28be60:
    // 0x28be60: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x28be60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
label_28be64:
    // 0x28be64: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x28be64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_28be68:
    // 0x28be68: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x28be68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28be6c:
    // 0x28be6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28be6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28be70:
    // 0x28be70: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_28be74:
    if (ctx->pc == 0x28BE74u) {
        ctx->pc = 0x28BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE70u;
        // 0x28be74: 0x265e000c  addiu       $fp, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE78u;
        goto label_28be78;
    }
    ctx->pc = 0x28BE70u;
    {
        const bool branch_taken_0x28be70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE70u;
        // 0x28be74: 0x265e000c  addiu       $fp, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be70) {
            ctx->pc = 0x28BF8Cu;
            goto label_28bf8c;
        }
    }
    ctx->pc = 0x28BE78u;
label_28be78:
    // 0x28be78: 0x12200085  beqz        $s1, . + 4 + (0x85 << 2)
label_28be7c:
    if (ctx->pc == 0x28BE7Cu) {
        ctx->pc = 0x28BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE78u;
        // 0x28be7c: 0x26760001  addiu       $s6, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BE80u;
        goto label_28be80;
    }
    ctx->pc = 0x28BE78u;
    {
        const bool branch_taken_0x28be78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE78u;
        // 0x28be7c: 0x26760001  addiu       $s6, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be78) {
            ctx->pc = 0x28C090u;
            goto label_28c090;
        }
    }
    ctx->pc = 0x28BE80u;
label_28be80:
    // 0x28be80: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x28be80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_28be84:
    // 0x28be84: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x28be84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28be88:
    // 0x28be88: 0x2639018  mult        $s2, $s3, $v1
    ctx->pc = 0x28be88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_28be8c:
    // 0x28be8c: 0x255b821  addu        $s7, $s2, $s5
    ctx->pc = 0x28be8cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_28be90:
    // 0x28be90: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28be90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_28be94:
    // 0x28be94: 0x0  nop
    ctx->pc = 0x28be94u;
    // NOP
label_28be98:
    // 0x28be98: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
label_28be9c:
    if (ctx->pc == 0x28BE9Cu) {
        ctx->pc = 0x28BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE98u;
        // 0x28be9c: 0x8e310014  lw          $s1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BEA0u;
        goto label_28bea0;
    }
    ctx->pc = 0x28BE98u;
    {
        const bool branch_taken_0x28be98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28be98) {
            ctx->pc = 0x28BE9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BE98u;
            // 0x28be9c: 0x8e310014  lw          $s1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BF7Cu;
            goto label_28bf7c;
        }
    }
    ctx->pc = 0x28BEA0u;
label_28bea0:
    // 0x28bea0: 0xc0a228a  jal         func_288A28
label_28bea4:
    if (ctx->pc == 0x28BEA4u) {
        ctx->pc = 0x28BEA8u;
        goto label_28bea8;
    }
    ctx->pc = 0x28BEA0u;
    SET_GPR_U32(ctx, 31, 0x28BEA8u);
    ctx->pc = 0x288A28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288A28u, 0x28BEA0u, 0x28BEA8u)) {
        return;
    }
    ctx->pc = 0x28BEA8u;
label_28bea8:
    // 0x28bea8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x28bea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_28beac:
    // 0x28beac: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_28beb0:
    if (ctx->pc == 0x28BEB0u) {
        ctx->pc = 0x28BEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEACu;
        // 0x28beb0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BEB4u;
        goto label_28beb4;
    }
    ctx->pc = 0x28BEACu;
    {
        const bool branch_taken_0x28beac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEACu;
        // 0x28beb0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28beac) {
            ctx->pc = 0x28BED4u;
            goto label_28bed4;
        }
    }
    ctx->pc = 0x28BEB4u;
label_28beb4:
    // 0x28beb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28beb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28beb8:
    // 0x28beb8: 0xc0a2048  jal         func_288120
label_28bebc:
    if (ctx->pc == 0x28BEBCu) {
        ctx->pc = 0x28BEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEB8u;
        // 0x28bebc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BEC0u;
        goto label_28bec0;
    }
    ctx->pc = 0x28BEB8u;
    SET_GPR_U32(ctx, 31, 0x28BEC0u);
    ctx->pc = 0x28BEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BEB8u;
    // 0x28bebc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288120u, 0x28BEB8u, 0x28BEC0u)) {
        return;
    }
    ctx->pc = 0x28BEC0u;
label_28bec0:
    // 0x28bec0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x28bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_28bec4:
    // 0x28bec4: 0x14540013  bne         $v0, $s4, . + 4 + (0x13 << 2)
label_28bec8:
    if (ctx->pc == 0x28BEC8u) {
        ctx->pc = 0x28BEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEC4u;
        // 0x28bec8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BECCu;
        goto label_28becc;
    }
    ctx->pc = 0x28BEC4u;
    {
        const bool branch_taken_0x28bec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x28BEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEC4u;
        // 0x28bec8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bec4) {
            ctx->pc = 0x28BF14u;
            goto label_28bf14;
        }
    }
    ctx->pc = 0x28BECCu;
label_28becc:
    // 0x28becc: 0x1000000e  b           . + 4 + (0xE << 2)
label_28bed0:
    if (ctx->pc == 0x28BED0u) {
        ctx->pc = 0x28BED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BECCu;
        // 0x28bed0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BED4u;
        goto label_28bed4;
    }
    ctx->pc = 0x28BECCu;
    {
        const bool branch_taken_0x28becc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BECCu;
        // 0x28bed0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28becc) {
            ctx->pc = 0x28BF08u;
            goto label_28bf08;
        }
    }
    ctx->pc = 0x28BED4u;
label_28bed4:
    // 0x28bed4: 0xc092932  jal         func_24A4C8
label_28bed8:
    if (ctx->pc == 0x28BED8u) {
        ctx->pc = 0x28BED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BED4u;
        // 0x28bed8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BEDCu;
        goto label_28bedc;
    }
    ctx->pc = 0x28BED4u;
    SET_GPR_U32(ctx, 31, 0x28BEDCu);
    ctx->pc = 0x28BED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BED4u;
    // 0x28bed8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4C8u, 0x28BED4u, 0x28BEDCu)) {
        return;
    }
    ctx->pc = 0x28BEDCu;
label_28bedc:
    // 0x28bedc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x28bedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_28bee0:
    // 0x28bee0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x28bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28bee4:
    // 0x28bee4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x28bee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_28bee8:
    // 0x28bee8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x28bee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_28beec:
    // 0x28beec: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x28beecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_28bef0:
    // 0x28bef0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x28bef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_28bef4:
    // 0x28bef4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x28bef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_28bef8:
    // 0x28bef8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28bef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_28befc:
    // 0x28befc: 0x14540005  bne         $v0, $s4, . + 4 + (0x5 << 2)
label_28bf00:
    if (ctx->pc == 0x28BF00u) {
        ctx->pc = 0x28BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEFCu;
        // 0x28bf00: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BF04u;
        goto label_28bf04;
    }
    ctx->pc = 0x28BEFCu;
    {
        const bool branch_taken_0x28befc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x28BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEFCu;
        // 0x28bf00: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28befc) {
            ctx->pc = 0x28BF14u;
            goto label_28bf14;
        }
    }
    ctx->pc = 0x28BF04u;
label_28bf04:
    // 0x28bf04: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x28bf04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28bf08:
    // 0x28bf08: 0xc09294c  jal         func_24A530
label_28bf0c:
    if (ctx->pc == 0x28BF0Cu) {
        ctx->pc = 0x28BF10u;
        goto label_28bf10;
    }
    ctx->pc = 0x28BF08u;
    SET_GPR_U32(ctx, 31, 0x28BF10u);
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x28BF08u, 0x28BF10u)) {
        return;
    }
    ctx->pc = 0x28BF10u;
label_28bf10:
    // 0x28bf10: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x28bf10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28bf14:
    // 0x28bf14: 0x24e2fffd  addiu       $v0, $a3, -0x3
    ctx->pc = 0x28bf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967293));
label_28bf18:
    // 0x28bf18: 0x2553021  addu        $a2, $s2, $s5
    ctx->pc = 0x28bf18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_28bf1c:
    // 0x28bf1c: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x28bf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_28bf20:
    // 0x28bf20: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x28bf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_28bf24:
    // 0x28bf24: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x28bf24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_28bf28:
    // 0x28bf28: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x28bf28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_28bf2c:
    // 0x28bf2c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x28bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_28bf30:
    // 0x28bf30: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x28bf30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
label_28bf34:
    // 0x28bf34: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x28bf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28bf38:
    // 0x28bf38: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x28bf38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_28bf3c:
    // 0x28bf3c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x28bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_28bf40:
    // 0x28bf40: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x28bf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_28bf44:
    // 0x28bf44: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x28bf44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_28bf48:
    // 0x28bf48: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x28bf48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_28bf4c:
    // 0x28bf4c: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x28bf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
label_28bf50:
    // 0x28bf50: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x28bf50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_28bf54:
    // 0x28bf54: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
label_28bf58:
    if (ctx->pc == 0x28BF58u) {
        ctx->pc = 0x28BF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF54u;
        // 0x28bf58: 0xacc2000c  sw          $v0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BF5Cu;
        goto label_28bf5c;
    }
    ctx->pc = 0x28BF54u;
    {
        const bool branch_taken_0x28bf54 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF54u;
        // 0x28bf58: 0xacc2000c  sw          $v0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf54) {
            ctx->pc = 0x28BF64u;
            goto label_28bf64;
        }
    }
    ctx->pc = 0x28BF5Cu;
label_28bf5c:
    // 0x28bf5c: 0x10000005  b           . + 4 + (0x5 << 2)
label_28bf60:
    if (ctx->pc == 0x28BF60u) {
        ctx->pc = 0x28BF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF5Cu;
        // 0x28bf60: 0xae100014  sw          $s0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BF64u;
        goto label_28bf64;
    }
    ctx->pc = 0x28BF5Cu;
    {
        const bool branch_taken_0x28bf5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF5Cu;
        // 0x28bf60: 0xae100014  sw          $s0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf5c) {
            ctx->pc = 0x28BF74u;
            goto label_28bf74;
        }
    }
    ctx->pc = 0x28BF64u;
label_28bf64:
    // 0x28bf64: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x28bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_28bf68:
    // 0x28bf68: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x28bf68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_28bf6c:
    // 0x28bf6c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x28bf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_28bf70:
    // 0x28bf70: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x28bf70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
label_28bf74:
    // 0x28bf74: 0xaef00000  sw          $s0, 0x0($s7)
    ctx->pc = 0x28bf74u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 16));
label_28bf78:
    // 0x28bf78: 0x8e310014  lw          $s1, 0x14($s1)
    ctx->pc = 0x28bf78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_28bf7c:
    // 0x28bf7c: 0x5620ffc6  bnel        $s1, $zero, . + 4 + (-0x3A << 2)
label_28bf80:
    if (ctx->pc == 0x28BF80u) {
        ctx->pc = 0x28BF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF7Cu;
        // 0x28bf80: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BF84u;
        goto label_28bf84;
    }
    ctx->pc = 0x28BF7Cu;
    {
        const bool branch_taken_0x28bf7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x28bf7c) {
            ctx->pc = 0x28BF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BF7Cu;
            // 0x28bf80: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28be98;
        }
    }
    ctx->pc = 0x28BF84u;
label_28bf84:
    // 0x28bf84: 0x10000043  b           . + 4 + (0x43 << 2)
label_28bf88:
    if (ctx->pc == 0x28BF88u) {
        ctx->pc = 0x28BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF84u;
        // 0x28bf88: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BF8Cu;
        goto label_28bf8c;
    }
    ctx->pc = 0x28BF84u;
    {
        const bool branch_taken_0x28bf84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF84u;
        // 0x28bf88: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf84) {
            ctx->pc = 0x28C094u;
            goto label_28c094;
        }
    }
    ctx->pc = 0x28BF8Cu;
label_28bf8c:
    // 0x28bf8c: 0x12200040  beqz        $s1, . + 4 + (0x40 << 2)
label_28bf90:
    if (ctx->pc == 0x28BF90u) {
        ctx->pc = 0x28BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF8Cu;
        // 0x28bf90: 0x26760001  addiu       $s6, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BF94u;
        goto label_28bf94;
    }
    ctx->pc = 0x28BF8Cu;
    {
        const bool branch_taken_0x28bf8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF8Cu;
        // 0x28bf90: 0x26760001  addiu       $s6, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf8c) {
            ctx->pc = 0x28C090u;
            goto label_28c090;
        }
    }
    ctx->pc = 0x28BF94u;
label_28bf94:
    // 0x28bf94: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x28bf94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_28bf98:
    // 0x28bf98: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x28bf98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28bf9c:
    // 0x28bf9c: 0x2659018  mult        $s2, $s3, $a1
    ctx->pc = 0x28bf9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_28bfa0:
    // 0x28bfa0: 0x255b821  addu        $s7, $s2, $s5
    ctx->pc = 0x28bfa0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_28bfa4:
    // 0x28bfa4: 0x0  nop
    ctx->pc = 0x28bfa4u;
    // NOP
label_28bfa8:
    // 0x28bfa8: 0xc0a228a  jal         func_288A28
label_28bfac:
    if (ctx->pc == 0x28BFACu) {
        ctx->pc = 0x28BFB0u;
        goto label_28bfb0;
    }
    ctx->pc = 0x28BFA8u;
    SET_GPR_U32(ctx, 31, 0x28BFB0u);
    ctx->pc = 0x288A28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288A28u, 0x28BFA8u, 0x28BFB0u)) {
        return;
    }
    ctx->pc = 0x28BFB0u;
label_28bfb0:
    // 0x28bfb0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x28bfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_28bfb4:
    // 0x28bfb4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_28bfb8:
    if (ctx->pc == 0x28BFB8u) {
        ctx->pc = 0x28BFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFB4u;
        // 0x28bfb8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BFBCu;
        goto label_28bfbc;
    }
    ctx->pc = 0x28BFB4u;
    {
        const bool branch_taken_0x28bfb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFB4u;
        // 0x28bfb8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bfb4) {
            ctx->pc = 0x28BFDCu;
            goto label_28bfdc;
        }
    }
    ctx->pc = 0x28BFBCu;
label_28bfbc:
    // 0x28bfbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bfbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28bfc0:
    // 0x28bfc0: 0xc0a2048  jal         func_288120
label_28bfc4:
    if (ctx->pc == 0x28BFC4u) {
        ctx->pc = 0x28BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFC0u;
        // 0x28bfc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BFC8u;
        goto label_28bfc8;
    }
    ctx->pc = 0x28BFC0u;
    SET_GPR_U32(ctx, 31, 0x28BFC8u);
    ctx->pc = 0x28BFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BFC0u;
    // 0x28bfc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288120u, 0x28BFC0u, 0x28BFC8u)) {
        return;
    }
    ctx->pc = 0x28BFC8u;
label_28bfc8:
    // 0x28bfc8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x28bfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_28bfcc:
    // 0x28bfcc: 0x14540013  bne         $v0, $s4, . + 4 + (0x13 << 2)
label_28bfd0:
    if (ctx->pc == 0x28BFD0u) {
        ctx->pc = 0x28BFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFCCu;
        // 0x28bfd0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BFD4u;
        goto label_28bfd4;
    }
    ctx->pc = 0x28BFCCu;
    {
        const bool branch_taken_0x28bfcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x28BFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFCCu;
        // 0x28bfd0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bfcc) {
            ctx->pc = 0x28C01Cu;
            goto label_28c01c;
        }
    }
    ctx->pc = 0x28BFD4u;
label_28bfd4:
    // 0x28bfd4: 0x1000000e  b           . + 4 + (0xE << 2)
label_28bfd8:
    if (ctx->pc == 0x28BFD8u) {
        ctx->pc = 0x28BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFD4u;
        // 0x28bfd8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BFDCu;
        goto label_28bfdc;
    }
    ctx->pc = 0x28BFD4u;
    {
        const bool branch_taken_0x28bfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFD4u;
        // 0x28bfd8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bfd4) {
            ctx->pc = 0x28C010u;
            goto label_28c010;
        }
    }
    ctx->pc = 0x28BFDCu;
label_28bfdc:
    // 0x28bfdc: 0xc092932  jal         func_24A4C8
label_28bfe0:
    if (ctx->pc == 0x28BFE0u) {
        ctx->pc = 0x28BFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFDCu;
        // 0x28bfe0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BFE4u;
        goto label_28bfe4;
    }
    ctx->pc = 0x28BFDCu;
    SET_GPR_U32(ctx, 31, 0x28BFE4u);
    ctx->pc = 0x28BFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BFDCu;
    // 0x28bfe0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4C8u, 0x28BFDCu, 0x28BFE4u)) {
        return;
    }
    ctx->pc = 0x28BFE4u;
label_28bfe4:
    // 0x28bfe4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x28bfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_28bfe8:
    // 0x28bfe8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x28bfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28bfec:
    // 0x28bfec: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x28bfecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_28bff0:
    // 0x28bff0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x28bff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_28bff4:
    // 0x28bff4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x28bff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_28bff8:
    // 0x28bff8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x28bff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_28bffc:
    // 0x28bffc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x28bffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_28c000:
    // 0x28c000: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28c000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_28c004:
    // 0x28c004: 0x14540005  bne         $v0, $s4, . + 4 + (0x5 << 2)
label_28c008:
    if (ctx->pc == 0x28C008u) {
        ctx->pc = 0x28C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C004u;
        // 0x28c008: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C00Cu;
        goto label_28c00c;
    }
    ctx->pc = 0x28C004u;
    {
        const bool branch_taken_0x28c004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x28C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C004u;
        // 0x28c008: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c004) {
            ctx->pc = 0x28C01Cu;
            goto label_28c01c;
        }
    }
    ctx->pc = 0x28C00Cu;
label_28c00c:
    // 0x28c00c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x28c00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28c010:
    // 0x28c010: 0xc09294c  jal         func_24A530
label_28c014:
    if (ctx->pc == 0x28C014u) {
        ctx->pc = 0x28C018u;
        goto label_28c018;
    }
    ctx->pc = 0x28C010u;
    SET_GPR_U32(ctx, 31, 0x28C018u);
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x28C010u, 0x28C018u)) {
        return;
    }
    ctx->pc = 0x28C018u;
label_28c018:
    // 0x28c018: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x28c018u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c01c:
    // 0x28c01c: 0x2554021  addu        $t0, $s2, $s5
    ctx->pc = 0x28c01cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_28c020:
    // 0x28c020: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x28c020u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_28c024:
    // 0x28c024: 0x24e2fffe  addiu       $v0, $a3, -0x2
    ctx->pc = 0x28c024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
label_28c028:
    // 0x28c028: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x28c028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_28c02c:
    // 0x28c02c: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x28c02cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_28c030:
    // 0x28c030: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x28c030u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_28c034:
    // 0x28c034: 0x8d06000c  lw          $a2, 0xC($t0)
    ctx->pc = 0x28c034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_28c038:
    // 0x28c038: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x28c038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_28c03c:
    // 0x28c03c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x28c03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_28c040:
    // 0x28c040: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x28c040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28c044:
    // 0x28c044: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x28c044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_28c048:
    // 0x28c048: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x28c048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_28c04c:
    // 0x28c04c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x28c04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_28c050:
    // 0x28c050: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x28c050u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_28c054:
    // 0x28c054: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x28c054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_28c058:
    // 0x28c058: 0xad050008  sw          $a1, 0x8($t0)
    ctx->pc = 0x28c058u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
label_28c05c:
    // 0x28c05c: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x28c05cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
label_28c060:
    // 0x28c060: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
label_28c064:
    if (ctx->pc == 0x28C064u) {
        ctx->pc = 0x28C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C060u;
        // 0x28c064: 0xad06000c  sw          $a2, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C068u;
        goto label_28c068;
    }
    ctx->pc = 0x28C060u;
    {
        const bool branch_taken_0x28c060 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C060u;
        // 0x28c064: 0xad06000c  sw          $a2, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c060) {
            ctx->pc = 0x28C070u;
            goto label_28c070;
        }
    }
    ctx->pc = 0x28C068u;
label_28c068:
    // 0x28c068: 0x10000005  b           . + 4 + (0x5 << 2)
label_28c06c:
    if (ctx->pc == 0x28C06Cu) {
        ctx->pc = 0x28C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C068u;
        // 0x28c06c: 0xae100014  sw          $s0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C070u;
        goto label_28c070;
    }
    ctx->pc = 0x28C068u;
    {
        const bool branch_taken_0x28c068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C068u;
        // 0x28c06c: 0xae100014  sw          $s0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c068) {
            ctx->pc = 0x28C080u;
            goto label_28c080;
        }
    }
    ctx->pc = 0x28C070u;
label_28c070:
    // 0x28c070: 0x8d220014  lw          $v0, 0x14($t1)
    ctx->pc = 0x28c070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
label_28c074:
    // 0x28c074: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x28c074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_28c078:
    // 0x28c078: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x28c078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_28c07c:
    // 0x28c07c: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x28c07cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
label_28c080:
    // 0x28c080: 0xaef00000  sw          $s0, 0x0($s7)
    ctx->pc = 0x28c080u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 16));
label_28c084:
    // 0x28c084: 0x8e310014  lw          $s1, 0x14($s1)
    ctx->pc = 0x28c084u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_28c088:
    // 0x28c088: 0x1620ffc7  bnez        $s1, . + 4 + (-0x39 << 2)
label_28c08c:
    if (ctx->pc == 0x28C08Cu) {
        ctx->pc = 0x28C090u;
        goto label_28c090;
    }
    ctx->pc = 0x28C088u;
    {
        const bool branch_taken_0x28c088 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c088) {
            ctx->pc = 0x28BFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28bfa8;
        }
    }
    ctx->pc = 0x28C090u;
label_28c090:
    // 0x28c090: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x28c090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_28c094:
    // 0x28c094: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x28c094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_28c098:
    // 0x28c098: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x28c098u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_28c09c:
    // 0x28c09c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x28c09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_28c0a0:
    // 0x28c0a0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x28c0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_28c0a4:
    // 0x28c0a4: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x28c0a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_28c0a8:
    // 0x28c0a8: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x28c0a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_28c0ac:
    // 0x28c0ac: 0x553021  addu        $a2, $v0, $s5
    ctx->pc = 0x28c0acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_28c0b0:
    // 0x28c0b0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x28c0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_28c0b4:
    // 0x28c0b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28c0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28c0b8:
    // 0x28c0b8: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x28c0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_28c0bc:
    // 0x28c0bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x28c0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_28c0c0:
    // 0x28c0c0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x28c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_28c0c4:
    // 0x28c0c4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x28c0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_28c0c8:
    // 0x28c0c8: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x28c0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_28c0cc:
    // 0x28c0cc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x28c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_28c0d0:
    // 0x28c0d0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x28c0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_28c0d4:
    // 0x28c0d4: 0x1643ff58  bne         $s2, $v1, . + 4 + (-0xA8 << 2)
label_28c0d8:
    if (ctx->pc == 0x28C0D8u) {
        ctx->pc = 0x28C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0D4u;
        // 0x28c0d8: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C0DCu;
        goto label_28c0dc;
    }
    ctx->pc = 0x28C0D4u;
    {
        const bool branch_taken_0x28c0d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x28C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0D4u;
        // 0x28c0d8: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c0d4) {
            ctx->pc = 0x28BE38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28be38;
        }
    }
    ctx->pc = 0x28C0DCu;
label_28c0dc:
    // 0x28c0dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28c0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_28c0e0:
    // 0x28c0e0: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
label_28c0e4:
    if (ctx->pc == 0x28C0E4u) {
        ctx->pc = 0x28C0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0E0u;
        // 0x28c0e4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C0E8u;
        goto label_28c0e8;
    }
    ctx->pc = 0x28C0E0u;
    {
        const bool branch_taken_0x28c0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0E0u;
        // 0x28c0e4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c0e0) {
            ctx->pc = 0x28C3A0u;
            goto label_28c3a0;
        }
    }
    ctx->pc = 0x28C0E8u;
label_28c0e8:
    // 0x28c0e8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x28c0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_28c0ec:
    // 0x28c0ec: 0x2406006f  addiu       $a2, $zero, 0x6F
    ctx->pc = 0x28c0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_28c0f0:
    // 0x28c0f0: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x28c0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_28c0f4:
    // 0x28c0f4: 0xc095a52  jal         func_256948
label_28c0f8:
    if (ctx->pc == 0x28C0F8u) {
        ctx->pc = 0x28C0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0F4u;
        // 0x28c0f8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C0FCu;
        goto label_28c0fc;
    }
    ctx->pc = 0x28C0F4u;
    SET_GPR_U32(ctx, 31, 0x28C0FCu);
    ctx->pc = 0x28C0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C0F4u;
    // 0x28c0f8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256948u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256948u, 0x28C0F4u, 0x28C0FCu)) {
        return;
    }
    ctx->pc = 0x28C0FCu;
label_28c0fc:
    // 0x28c0fc: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x28c0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_28c100:
    // 0x28c100: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x28c100u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c104:
    // 0x28c104: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x28c104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_28c108:
    // 0x28c108: 0x10a000a5  beqz        $a1, . + 4 + (0xA5 << 2)
label_28c10c:
    if (ctx->pc == 0x28C10Cu) {
        ctx->pc = 0x28C10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C108u;
        // 0x28c10c: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C110u;
        goto label_28c110;
    }
    ctx->pc = 0x28C108u;
    {
        const bool branch_taken_0x28c108 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C108u;
        // 0x28c10c: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c108) {
            ctx->pc = 0x28C3A0u;
            goto label_28c3a0;
        }
    }
    ctx->pc = 0x28C110u;
label_28c110:
    // 0x28c110: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x28c110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28c114:
    // 0x28c114: 0x18a00032  blez        $a1, . + 4 + (0x32 << 2)
label_28c118:
    if (ctx->pc == 0x28C118u) {
        ctx->pc = 0x28C118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C114u;
        // 0x28c118: 0x30a30003  andi        $v1, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C11Cu;
        goto label_28c11c;
    }
    ctx->pc = 0x28C114u;
    {
        const bool branch_taken_0x28c114 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x28C118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C114u;
        // 0x28c118: 0x30a30003  andi        $v1, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c114) {
            ctx->pc = 0x28C1E0u;
            goto label_28c1e0;
        }
    }
    ctx->pc = 0x28C11Cu;
label_28c11c:
    // 0x28c11c: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
label_28c120:
    if (ctx->pc == 0x28C120u) {
        ctx->pc = 0x28C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C11Cu;
        // 0x28c120: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C124u;
        goto label_28c124;
    }
    ctx->pc = 0x28C11Cu;
    {
        const bool branch_taken_0x28c11c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C11Cu;
        // 0x28c120: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c11c) {
            ctx->pc = 0x28C240u;
            goto label_28c240;
        }
    }
    ctx->pc = 0x28C124u;
label_28c124:
    // 0x28c124: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
label_28c128:
    if (ctx->pc == 0x28C128u) {
        ctx->pc = 0x28C128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C124u;
        // 0x28c128: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C12Cu;
        goto label_28c12c;
    }
    ctx->pc = 0x28C124u;
    {
        const bool branch_taken_0x28c124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c124) {
            ctx->pc = 0x28C128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C124u;
            // 0x28c128: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C1E4u;
            goto label_28c1e4;
        }
    }
    ctx->pc = 0x28C12Cu;
label_28c12c:
    // 0x28c12c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x28c12cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_28c130:
    // 0x28c130: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_28c134:
    if (ctx->pc == 0x28C134u) {
        ctx->pc = 0x28C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C130u;
        // 0x28c134: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C138u;
        goto label_28c138;
    }
    ctx->pc = 0x28C130u;
    {
        const bool branch_taken_0x28c130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c130) {
            ctx->pc = 0x28C134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C130u;
            // 0x28c134: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C190u;
            goto label_28c190;
        }
    }
    ctx->pc = 0x28C138u;
label_28c138:
    // 0x28c138: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x28c138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_28c13c:
    // 0x28c13c: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
label_28c140:
    if (ctx->pc == 0x28C140u) {
        ctx->pc = 0x28C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C13Cu;
        // 0x28c140: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C144u;
        goto label_28c144;
    }
    ctx->pc = 0x28C13Cu;
    {
        const bool branch_taken_0x28c13c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c13c) {
            ctx->pc = 0x28C140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C13Cu;
            // 0x28c140: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C188u;
            goto label_28c188;
        }
    }
    ctx->pc = 0x28C144u;
label_28c144:
    // 0x28c144: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x28c144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_28c148:
    // 0x28c148: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28c148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28c14c:
    // 0x28c14c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_28c150:
    if (ctx->pc == 0x28C150u) {
        ctx->pc = 0x28C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C14Cu;
        // 0x28c150: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C154u;
        goto label_28c154;
    }
    ctx->pc = 0x28C14Cu;
    {
        const bool branch_taken_0x28c14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C14Cu;
        // 0x28c150: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c14c) {
            ctx->pc = 0x28C170u;
            goto label_28c170;
        }
    }
    ctx->pc = 0x28C154u;
label_28c154:
    // 0x28c154: 0x8ea50014  lw          $a1, 0x14($s5)
    ctx->pc = 0x28c154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_28c158:
    // 0x28c158: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x28c158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28c15c:
    // 0x28c15c: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x28c15cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_28c160:
    // 0x28c160: 0xc0a3d0a  jal         func_28F428
label_28c164:
    if (ctx->pc == 0x28C164u) {
        ctx->pc = 0x28C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C160u;
        // 0x28c164: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C168u;
        goto label_28c168;
    }
    ctx->pc = 0x28C160u;
    SET_GPR_U32(ctx, 31, 0x28C168u);
    ctx->pc = 0x28C164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C160u;
    // 0x28c164: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F428u, 0x28C160u, 0x28C168u)) {
        return;
    }
    ctx->pc = 0x28C168u;
label_28c168:
    // 0x28c168: 0x10000007  b           . + 4 + (0x7 << 2)
label_28c16c:
    if (ctx->pc == 0x28C16Cu) {
        ctx->pc = 0x28C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C168u;
        // 0x28c16c: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C170u;
        goto label_28c170;
    }
    ctx->pc = 0x28C168u;
    {
        const bool branch_taken_0x28c168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C168u;
        // 0x28c16c: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c168) {
            ctx->pc = 0x28C188u;
            goto label_28c188;
        }
    }
    ctx->pc = 0x28C170u;
label_28c170:
    // 0x28c170: 0x8ea50014  lw          $a1, 0x14($s5)
    ctx->pc = 0x28c170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_28c174:
    // 0x28c174: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x28c174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28c178:
    // 0x28c178: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x28c178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_28c17c:
    // 0x28c17c: 0xc0a3f86  jal         func_28FE18
label_28c180:
    if (ctx->pc == 0x28C180u) {
        ctx->pc = 0x28C180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C17Cu;
        // 0x28c180: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C184u;
        goto label_28c184;
    }
    ctx->pc = 0x28C17Cu;
    SET_GPR_U32(ctx, 31, 0x28C184u);
    ctx->pc = 0x28C180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C17Cu;
    // 0x28c180: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28FE18u, 0x28C17Cu, 0x28C184u)) {
        return;
    }
    ctx->pc = 0x28C184u;
label_28c184:
    // 0x28c184: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x28c184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_28c188:
    // 0x28c188: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x28c188u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_28c18c:
    // 0x28c18c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28c18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28c190:
    // 0x28c190: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
label_28c194:
    if (ctx->pc == 0x28C194u) {
        ctx->pc = 0x28C194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C190u;
        // 0x28c194: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C198u;
        goto label_28c198;
    }
    ctx->pc = 0x28C190u;
    {
        const bool branch_taken_0x28c190 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c190) {
            ctx->pc = 0x28C194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C190u;
            // 0x28c194: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C1DCu;
            goto label_28c1dc;
        }
    }
    ctx->pc = 0x28C198u;
label_28c198:
    // 0x28c198: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x28c198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_28c19c:
    // 0x28c19c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28c19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28c1a0:
    // 0x28c1a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_28c1a4:
    if (ctx->pc == 0x28C1A4u) {
        ctx->pc = 0x28C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1A0u;
        // 0x28c1a4: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C1A8u;
        goto label_28c1a8;
    }
    ctx->pc = 0x28C1A0u;
    {
        const bool branch_taken_0x28c1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1A0u;
        // 0x28c1a4: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c1a0) {
            ctx->pc = 0x28C1C4u;
            goto label_28c1c4;
        }
    }
    ctx->pc = 0x28C1A8u;
label_28c1a8:
    // 0x28c1a8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x28c1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_28c1ac:
    // 0x28c1ac: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x28c1acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28c1b0:
    // 0x28c1b0: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x28c1b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_28c1b4:
    // 0x28c1b4: 0xc0a3d0a  jal         func_28F428
label_28c1b8:
    if (ctx->pc == 0x28C1B8u) {
        ctx->pc = 0x28C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1B4u;
        // 0x28c1b8: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C1BCu;
        goto label_28c1bc;
    }
    ctx->pc = 0x28C1B4u;
    SET_GPR_U32(ctx, 31, 0x28C1BCu);
    ctx->pc = 0x28C1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C1B4u;
    // 0x28c1b8: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F428u, 0x28C1B4u, 0x28C1BCu)) {
        return;
    }
    ctx->pc = 0x28C1BCu;
label_28c1bc:
    // 0x28c1bc: 0x10000007  b           . + 4 + (0x7 << 2)
label_28c1c0:
    if (ctx->pc == 0x28C1C0u) {
        ctx->pc = 0x28C1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1BCu;
        // 0x28c1c0: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C1C4u;
        goto label_28c1c4;
    }
    ctx->pc = 0x28C1BCu;
    {
        const bool branch_taken_0x28c1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1BCu;
        // 0x28c1c0: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c1bc) {
            ctx->pc = 0x28C1DCu;
            goto label_28c1dc;
        }
    }
    ctx->pc = 0x28C1C4u;
label_28c1c4:
    // 0x28c1c4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x28c1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_28c1c8:
    // 0x28c1c8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x28c1c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28c1cc:
    // 0x28c1cc: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x28c1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_28c1d0:
    // 0x28c1d0: 0xc0a3f86  jal         func_28FE18
label_28c1d4:
    if (ctx->pc == 0x28C1D4u) {
        ctx->pc = 0x28C1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1D0u;
        // 0x28c1d4: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C1D8u;
        goto label_28c1d8;
    }
    ctx->pc = 0x28C1D0u;
    SET_GPR_U32(ctx, 31, 0x28C1D8u);
    ctx->pc = 0x28C1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C1D0u;
    // 0x28c1d4: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28FE18u, 0x28C1D0u, 0x28C1D8u)) {
        return;
    }
    ctx->pc = 0x28C1D8u;
label_28c1d8:
    // 0x28c1d8: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x28c1d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_28c1dc:
    // 0x28c1dc: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x28c1dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_28c1e0:
    // 0x28c1e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28c1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28c1e4:
    // 0x28c1e4: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_28c1e8:
    if (ctx->pc == 0x28C1E8u) {
        ctx->pc = 0x28C1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1E4u;
        // 0x28c1e8: 0x8fa60044  lw          $a2, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C1ECu;
        goto label_28c1ec;
    }
    ctx->pc = 0x28C1E4u;
    {
        const bool branch_taken_0x28c1e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1E4u;
        // 0x28c1e8: 0x8fa60044  lw          $a2, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c1e4) {
            ctx->pc = 0x28C230u;
            goto label_28c230;
        }
    }
    ctx->pc = 0x28C1ECu;
label_28c1ec:
    // 0x28c1ec: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x28c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_28c1f0:
    // 0x28c1f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28c1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28c1f4:
    // 0x28c1f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_28c1f8:
    if (ctx->pc == 0x28C1F8u) {
        ctx->pc = 0x28C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1F4u;
        // 0x28c1f8: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C1FCu;
        goto label_28c1fc;
    }
    ctx->pc = 0x28C1F4u;
    {
        const bool branch_taken_0x28c1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1F4u;
        // 0x28c1f8: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c1f4) {
            ctx->pc = 0x28C218u;
            goto label_28c218;
        }
    }
    ctx->pc = 0x28C1FCu;
label_28c1fc:
    // 0x28c1fc: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x28c1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_28c200:
    // 0x28c200: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x28c200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28c204:
    // 0x28c204: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x28c204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_28c208:
    // 0x28c208: 0xc0a3d0a  jal         func_28F428
label_28c20c:
    if (ctx->pc == 0x28C20Cu) {
        ctx->pc = 0x28C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C208u;
        // 0x28c20c: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C210u;
        goto label_28c210;
    }
    ctx->pc = 0x28C208u;
    SET_GPR_U32(ctx, 31, 0x28C210u);
    ctx->pc = 0x28C20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C208u;
    // 0x28c20c: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F428u, 0x28C208u, 0x28C210u)) {
        return;
    }
    ctx->pc = 0x28C210u;
label_28c210:
    // 0x28c210: 0x10000007  b           . + 4 + (0x7 << 2)
label_28c214:
    if (ctx->pc == 0x28C214u) {
        ctx->pc = 0x28C214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C210u;
        // 0x28c214: 0x8fa60044  lw          $a2, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C218u;
        goto label_28c218;
    }
    ctx->pc = 0x28C210u;
    {
        const bool branch_taken_0x28c210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C210u;
        // 0x28c214: 0x8fa60044  lw          $a2, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c210) {
            ctx->pc = 0x28C230u;
            goto label_28c230;
        }
    }
    ctx->pc = 0x28C218u;
label_28c218:
    // 0x28c218: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x28c218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_28c21c:
    // 0x28c21c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x28c21cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28c220:
    // 0x28c220: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x28c220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_28c224:
    // 0x28c224: 0xc0a3f86  jal         func_28FE18
label_28c228:
    if (ctx->pc == 0x28C228u) {
        ctx->pc = 0x28C228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C224u;
        // 0x28c228: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C22Cu;
        goto label_28c22c;
    }
    ctx->pc = 0x28C224u;
    SET_GPR_U32(ctx, 31, 0x28C22Cu);
    ctx->pc = 0x28C228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C224u;
    // 0x28c228: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28FE18u, 0x28C224u, 0x28C22Cu)) {
        return;
    }
    ctx->pc = 0x28C22Cu;
label_28c22c:
    // 0x28c22c: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x28c22cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_28c230:
    // 0x28c230: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x28c230u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_28c234:
    // 0x28c234: 0x2c6102b  sltu        $v0, $s6, $a2
    ctx->pc = 0x28c234u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_28c238:
    // 0x28c238: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
label_28c23c:
    if (ctx->pc == 0x28C23Cu) {
        ctx->pc = 0x28C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C238u;
        // 0x28c23c: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C240u;
        goto label_28c240;
    }
    ctx->pc = 0x28C238u;
    {
        const bool branch_taken_0x28c238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C238u;
        // 0x28c23c: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c238) {
            ctx->pc = 0x28C3A0u;
            goto label_28c3a0;
        }
    }
    ctx->pc = 0x28C240u;
label_28c240:
    // 0x28c240: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x28c240u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28c244:
    // 0x28c244: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x28c244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28c248:
    // 0x28c248: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x28c248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28c24c:
    // 0x28c24c: 0x0  nop
    ctx->pc = 0x28c24cu;
    // NOP
label_28c250:
    // 0x28c250: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x28c250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28c254:
    // 0x28c254: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
label_28c258:
    if (ctx->pc == 0x28C258u) {
        ctx->pc = 0x28C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C254u;
        // 0x28c258: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C25Cu;
        goto label_28c25c;
    }
    ctx->pc = 0x28C254u;
    {
        const bool branch_taken_0x28c254 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c254) {
            ctx->pc = 0x28C258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C254u;
            // 0x28c258: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C2A0u;
            goto label_28c2a0;
        }
    }
    ctx->pc = 0x28C25Cu;
label_28c25c:
    // 0x28c25c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x28c25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_28c260:
    // 0x28c260: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28c260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28c264:
    // 0x28c264: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_28c268:
    if (ctx->pc == 0x28C268u) {
        ctx->pc = 0x28C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C264u;
        // 0x28c268: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C26Cu;
        goto label_28c26c;
    }
    ctx->pc = 0x28C264u;
    {
        const bool branch_taken_0x28c264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C264u;
        // 0x28c268: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c264) {
            ctx->pc = 0x28C288u;
            goto label_28c288;
        }
    }
    ctx->pc = 0x28C26Cu;
label_28c26c:
    // 0x28c26c: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x28c26cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_28c270:
    // 0x28c270: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x28c270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28c274:
    // 0x28c274: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x28c274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_28c278:
    // 0x28c278: 0xc0a3d0a  jal         func_28F428
label_28c27c:
    if (ctx->pc == 0x28C27Cu) {
        ctx->pc = 0x28C27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C278u;
        // 0x28c27c: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C280u;
        goto label_28c280;
    }
    ctx->pc = 0x28C278u;
    SET_GPR_U32(ctx, 31, 0x28C280u);
    ctx->pc = 0x28C27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C278u;
    // 0x28c27c: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F428u, 0x28C278u, 0x28C280u)) {
        return;
    }
    ctx->pc = 0x28C280u;
label_28c280:
    // 0x28c280: 0x10000007  b           . + 4 + (0x7 << 2)
label_28c284:
    if (ctx->pc == 0x28C284u) {
        ctx->pc = 0x28C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C280u;
        // 0x28c284: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C288u;
        goto label_28c288;
    }
    ctx->pc = 0x28C280u;
    {
        const bool branch_taken_0x28c280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C280u;
        // 0x28c284: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c280) {
            ctx->pc = 0x28C2A0u;
            goto label_28c2a0;
        }
    }
    ctx->pc = 0x28C288u;
label_28c288:
    // 0x28c288: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x28c288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_28c28c:
    // 0x28c28c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x28c28cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28c290:
    // 0x28c290: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x28c290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_28c294:
    // 0x28c294: 0xc0a3f86  jal         func_28FE18
label_28c298:
    if (ctx->pc == 0x28C298u) {
        ctx->pc = 0x28C298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C294u;
        // 0x28c298: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C29Cu;
        goto label_28c29c;
    }
    ctx->pc = 0x28C294u;
    SET_GPR_U32(ctx, 31, 0x28C29Cu);
    ctx->pc = 0x28C298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C294u;
    // 0x28c298: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28FE18u, 0x28C294u, 0x28C29Cu)) {
        return;
    }
    ctx->pc = 0x28C29Cu;
label_28c29c:
    // 0x28c29c: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x28c29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_28c2a0:
    // 0x28c2a0: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
label_28c2a4:
    if (ctx->pc == 0x28C2A4u) {
        ctx->pc = 0x28C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2A0u;
        // 0x28c2a4: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C2A8u;
        goto label_28c2a8;
    }
    ctx->pc = 0x28C2A0u;
    {
        const bool branch_taken_0x28c2a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c2a0) {
            ctx->pc = 0x28C2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C2A0u;
            // 0x28c2a4: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C2ECu;
            goto label_28c2ec;
        }
    }
    ctx->pc = 0x28C2A8u;
label_28c2a8:
    // 0x28c2a8: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x28c2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_28c2ac:
    // 0x28c2ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28c2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28c2b0:
    // 0x28c2b0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_28c2b4:
    if (ctx->pc == 0x28C2B4u) {
        ctx->pc = 0x28C2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2B0u;
        // 0x28c2b4: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C2B8u;
        goto label_28c2b8;
    }
    ctx->pc = 0x28C2B0u;
    {
        const bool branch_taken_0x28c2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2B0u;
        // 0x28c2b4: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c2b0) {
            ctx->pc = 0x28C2D4u;
            goto label_28c2d4;
        }
    }
    ctx->pc = 0x28C2B8u;
label_28c2b8:
    // 0x28c2b8: 0x8e65002c  lw          $a1, 0x2C($s3)
    ctx->pc = 0x28c2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_28c2bc:
    // 0x28c2bc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x28c2bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28c2c0:
    // 0x28c2c0: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x28c2c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_28c2c4:
    // 0x28c2c4: 0xc0a3d0a  jal         func_28F428
label_28c2c8:
    if (ctx->pc == 0x28C2C8u) {
        ctx->pc = 0x28C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2C4u;
        // 0x28c2c8: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C2CCu;
        goto label_28c2cc;
    }
    ctx->pc = 0x28C2C4u;
    SET_GPR_U32(ctx, 31, 0x28C2CCu);
    ctx->pc = 0x28C2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C2C4u;
    // 0x28c2c8: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F428u, 0x28C2C4u, 0x28C2CCu)) {
        return;
    }
    ctx->pc = 0x28C2CCu;
label_28c2cc:
    // 0x28c2cc: 0x10000007  b           . + 4 + (0x7 << 2)
label_28c2d0:
    if (ctx->pc == 0x28C2D0u) {
        ctx->pc = 0x28C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2CCu;
        // 0x28c2d0: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C2D4u;
        goto label_28c2d4;
    }
    ctx->pc = 0x28C2CCu;
    {
        const bool branch_taken_0x28c2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2CCu;
        // 0x28c2d0: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c2cc) {
            ctx->pc = 0x28C2ECu;
            goto label_28c2ec;
        }
    }
    ctx->pc = 0x28C2D4u;
label_28c2d4:
    // 0x28c2d4: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x28c2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_28c2d8:
    // 0x28c2d8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x28c2d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28c2dc:
    // 0x28c2dc: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x28c2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_28c2e0:
    // 0x28c2e0: 0xc0a3f86  jal         func_28FE18
label_28c2e4:
    if (ctx->pc == 0x28C2E4u) {
        ctx->pc = 0x28C2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2E0u;
        // 0x28c2e4: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C2E8u;
        goto label_28c2e8;
    }
    ctx->pc = 0x28C2E0u;
    SET_GPR_U32(ctx, 31, 0x28C2E8u);
    ctx->pc = 0x28C2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C2E0u;
    // 0x28c2e4: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28FE18u, 0x28C2E0u, 0x28C2E8u)) {
        return;
    }
    ctx->pc = 0x28C2E8u;
label_28c2e8:
    // 0x28c2e8: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x28c2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_28c2ec:
    // 0x28c2ec: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
label_28c2f0:
    if (ctx->pc == 0x28C2F0u) {
        ctx->pc = 0x28C2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2ECu;
        // 0x28c2f0: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C2F4u;
        goto label_28c2f4;
    }
    ctx->pc = 0x28C2ECu;
    {
        const bool branch_taken_0x28c2ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c2ec) {
            ctx->pc = 0x28C2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C2ECu;
            // 0x28c2f0: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C338u;
            goto label_28c338;
        }
    }
    ctx->pc = 0x28C2F4u;
label_28c2f4:
    // 0x28c2f4: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x28c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_28c2f8:
    // 0x28c2f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28c2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28c2fc:
    // 0x28c2fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_28c300:
    if (ctx->pc == 0x28C300u) {
        ctx->pc = 0x28C300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2FCu;
        // 0x28c300: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C304u;
        goto label_28c304;
    }
    ctx->pc = 0x28C2FCu;
    {
        const bool branch_taken_0x28c2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2FCu;
        // 0x28c300: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c2fc) {
            ctx->pc = 0x28C320u;
            goto label_28c320;
        }
    }
    ctx->pc = 0x28C304u;
label_28c304:
    // 0x28c304: 0x8e650044  lw          $a1, 0x44($s3)
    ctx->pc = 0x28c304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_28c308:
    // 0x28c308: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x28c308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28c30c:
    // 0x28c30c: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x28c30cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_28c310:
    // 0x28c310: 0xc0a3d0a  jal         func_28F428
label_28c314:
    if (ctx->pc == 0x28C314u) {
        ctx->pc = 0x28C314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C310u;
        // 0x28c314: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C318u;
        goto label_28c318;
    }
    ctx->pc = 0x28C310u;
    SET_GPR_U32(ctx, 31, 0x28C318u);
    ctx->pc = 0x28C314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C310u;
    // 0x28c314: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F428u, 0x28C310u, 0x28C318u)) {
        return;
    }
    ctx->pc = 0x28C318u;
label_28c318:
    // 0x28c318: 0x10000007  b           . + 4 + (0x7 << 2)
label_28c31c:
    if (ctx->pc == 0x28C31Cu) {
        ctx->pc = 0x28C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C318u;
        // 0x28c31c: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C320u;
        goto label_28c320;
    }
    ctx->pc = 0x28C318u;
    {
        const bool branch_taken_0x28c318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C318u;
        // 0x28c31c: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c318) {
            ctx->pc = 0x28C338u;
            goto label_28c338;
        }
    }
    ctx->pc = 0x28C320u;
label_28c320:
    // 0x28c320: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x28c320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_28c324:
    // 0x28c324: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x28c324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28c328:
    // 0x28c328: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x28c328u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_28c32c:
    // 0x28c32c: 0xc0a3f86  jal         func_28FE18
label_28c330:
    if (ctx->pc == 0x28C330u) {
        ctx->pc = 0x28C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C32Cu;
        // 0x28c330: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C334u;
        goto label_28c334;
    }
    ctx->pc = 0x28C32Cu;
    SET_GPR_U32(ctx, 31, 0x28C334u);
    ctx->pc = 0x28C330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C32Cu;
    // 0x28c330: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28FE18u, 0x28C32Cu, 0x28C334u)) {
        return;
    }
    ctx->pc = 0x28C334u;
label_28c334:
    // 0x28c334: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x28c334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_28c338:
    // 0x28c338: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_28c33c:
    if (ctx->pc == 0x28C33Cu) {
        ctx->pc = 0x28C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C338u;
        // 0x28c33c: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C340u;
        goto label_28c340;
    }
    ctx->pc = 0x28C338u;
    {
        const bool branch_taken_0x28c338 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C338u;
        // 0x28c33c: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c338) {
            ctx->pc = 0x28C384u;
            goto label_28c384;
        }
    }
    ctx->pc = 0x28C340u;
label_28c340:
    // 0x28c340: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x28c340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_28c344:
    // 0x28c344: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28c344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28c348:
    // 0x28c348: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_28c34c:
    if (ctx->pc == 0x28C34Cu) {
        ctx->pc = 0x28C34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C348u;
        // 0x28c34c: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C350u;
        goto label_28c350;
    }
    ctx->pc = 0x28C348u;
    {
        const bool branch_taken_0x28c348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C348u;
        // 0x28c34c: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c348) {
            ctx->pc = 0x28C36Cu;
            goto label_28c36c;
        }
    }
    ctx->pc = 0x28C350u;
label_28c350:
    // 0x28c350: 0x8e65005c  lw          $a1, 0x5C($s3)
    ctx->pc = 0x28c350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_28c354:
    // 0x28c354: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x28c354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28c358:
    // 0x28c358: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x28c358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_28c35c:
    // 0x28c35c: 0xc0a3d0a  jal         func_28F428
label_28c360:
    if (ctx->pc == 0x28C360u) {
        ctx->pc = 0x28C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C35Cu;
        // 0x28c360: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C364u;
        goto label_28c364;
    }
    ctx->pc = 0x28C35Cu;
    SET_GPR_U32(ctx, 31, 0x28C364u);
    ctx->pc = 0x28C360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C35Cu;
    // 0x28c360: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F428u, 0x28C35Cu, 0x28C364u)) {
        return;
    }
    ctx->pc = 0x28C364u;
label_28c364:
    // 0x28c364: 0x10000007  b           . + 4 + (0x7 << 2)
label_28c368:
    if (ctx->pc == 0x28C368u) {
        ctx->pc = 0x28C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C364u;
        // 0x28c368: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C36Cu;
        goto label_28c36c;
    }
    ctx->pc = 0x28C364u;
    {
        const bool branch_taken_0x28c364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C364u;
        // 0x28c368: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c364) {
            ctx->pc = 0x28C384u;
            goto label_28c384;
        }
    }
    ctx->pc = 0x28C36Cu;
label_28c36c:
    // 0x28c36c: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x28c36cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_28c370:
    // 0x28c370: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x28c370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28c374:
    // 0x28c374: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x28c374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_28c378:
    // 0x28c378: 0xc0a3f86  jal         func_28FE18
label_28c37c:
    if (ctx->pc == 0x28C37Cu) {
        ctx->pc = 0x28C37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C378u;
        // 0x28c37c: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C380u;
        goto label_28c380;
    }
    ctx->pc = 0x28C378u;
    SET_GPR_U32(ctx, 31, 0x28C380u);
    ctx->pc = 0x28C37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C378u;
    // 0x28c37c: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28FE18u, 0x28C378u, 0x28C380u)) {
        return;
    }
    ctx->pc = 0x28C380u;
label_28c380:
    // 0x28c380: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x28c380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_28c384:
    // 0x28c384: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x28c384u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_28c388:
    // 0x28c388: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x28c388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_28c38c:
    // 0x28c38c: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x28c38cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_28c390:
    // 0x28c390: 0x26520060  addiu       $s2, $s2, 0x60
    ctx->pc = 0x28c390u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_28c394:
    // 0x28c394: 0x2c3102b  sltu        $v0, $s6, $v1
    ctx->pc = 0x28c394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_28c398:
    // 0x28c398: 0x1440ffad  bnez        $v0, . + 4 + (-0x53 << 2)
label_28c39c:
    if (ctx->pc == 0x28C39Cu) {
        ctx->pc = 0x28C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C398u;
        // 0x28c39c: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C3A0u;
        goto label_28c3a0;
    }
    ctx->pc = 0x28C398u;
    {
        const bool branch_taken_0x28c398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C398u;
        // 0x28c39c: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c398) {
            ctx->pc = 0x28C250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28c250;
        }
    }
    ctx->pc = 0x28C3A0u;
label_28c3a0:
    // 0x28c3a0: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
label_28c3a4:
    if (ctx->pc == 0x28C3A4u) {
        ctx->pc = 0x28C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3A0u;
        // 0x28c3a4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C3A8u;
        goto label_28c3a8;
    }
    ctx->pc = 0x28C3A0u;
    {
        const bool branch_taken_0x28c3a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3A0u;
        // 0x28c3a4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c3a0) {
            ctx->pc = 0x28C3DCu;
            goto label_28c3dc;
        }
    }
    ctx->pc = 0x28C3A8u;
label_28c3a8:
    // 0x28c3a8: 0x8e90005c  lw          $s0, 0x5C($s4)
    ctx->pc = 0x28c3a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_28c3ac:
    // 0x28c3ac: 0xc095838  jal         func_2560E0
label_28c3b0:
    if (ctx->pc == 0x28C3B0u) {
        ctx->pc = 0x28C3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3ACu;
        // 0x28c3b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C3B4u;
        goto label_28c3b4;
    }
    ctx->pc = 0x28C3ACu;
    SET_GPR_U32(ctx, 31, 0x28C3B4u);
    ctx->pc = 0x28C3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C3ACu;
    // 0x28c3b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2560E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2560E0u, 0x28C3ACu, 0x28C3B4u)) {
        return;
    }
    ctx->pc = 0x28C3B4u;
label_28c3b4:
    // 0x28c3b4: 0x6ba50027  ldl         $a1, 0x27($sp)
    ctx->pc = 0x28c3b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_28c3b8:
    // 0x28c3b8: 0x6fa50020  ldr         $a1, 0x20($sp)
    ctx->pc = 0x28c3b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_28c3bc:
    // 0x28c3bc: 0x6ba6002f  ldl         $a2, 0x2F($sp)
    ctx->pc = 0x28c3bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_28c3c0:
    // 0x28c3c0: 0x6fa60028  ldr         $a2, 0x28($sp)
    ctx->pc = 0x28c3c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_28c3c4:
    // 0x28c3c4: 0xb205000b  sdl         $a1, 0xB($s0)
    ctx->pc = 0x28c3c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c3c8:
    // 0x28c3c8: 0xb6050004  sdr         $a1, 0x4($s0)
    ctx->pc = 0x28c3c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c3cc:
    // 0x28c3cc: 0xb2060013  sdl         $a2, 0x13($s0)
    ctx->pc = 0x28c3ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c3d0:
    // 0x28c3d0: 0xb606000c  sdr         $a2, 0xC($s0)
    ctx->pc = 0x28c3d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28c3d4:
    // 0x28c3d4: 0xc09599c  jal         func_256670
label_28c3d8:
    if (ctx->pc == 0x28C3D8u) {
        ctx->pc = 0x28C3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3D4u;
        // 0x28c3d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C3DCu;
        goto label_28c3dc;
    }
    ctx->pc = 0x28C3D4u;
    SET_GPR_U32(ctx, 31, 0x28C3DCu);
    ctx->pc = 0x28C3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C3D4u;
    // 0x28c3d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256670u, 0x28C3D4u, 0x28C3DCu)) {
        return;
    }
    ctx->pc = 0x28C3DCu;
label_28c3dc:
    // 0x28c3dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_28c3e0:
    // 0x28c3e0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_28c3e4:
    if (ctx->pc == 0x28C3E4u) {
        ctx->pc = 0x28C3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3E0u;
        // 0x28c3e4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C3E8u;
        goto label_28c3e8;
    }
    ctx->pc = 0x28C3E0u;
    {
        const bool branch_taken_0x28c3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3E0u;
        // 0x28c3e4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c3e0) {
            ctx->pc = 0x28C46Cu;
            goto label_28c46c;
        }
    }
    ctx->pc = 0x28C3E8u;
label_28c3e8:
    // 0x28c3e8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_28c3ec:
    if (ctx->pc == 0x28C3ECu) {
        ctx->pc = 0x28C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3E8u;
        // 0x28c3ec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C3F0u;
        goto label_28c3f0;
    }
    ctx->pc = 0x28C3E8u;
    {
        const bool branch_taken_0x28c3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3E8u;
        // 0x28c3ec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c3e8) {
            ctx->pc = 0x28C458u;
            goto label_28c458;
        }
    }
    ctx->pc = 0x28C3F0u;
label_28c3f0:
    // 0x28c3f0: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x28c3f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_28c3f4:
    // 0x28c3f4: 0x2701018  mult        $v0, $s3, $s0
    ctx->pc = 0x28c3f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_28c3f8:
    // 0x28c3f8: 0x26760001  addiu       $s6, $s3, 0x1
    ctx->pc = 0x28c3f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_28c3fc:
    // 0x28c3fc: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x28c3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_28c400:
    // 0x28c400: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28c400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28c404:
    // 0x28c404: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x28c404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28c408:
    // 0x28c408: 0x8c510014  lw          $s1, 0x14($v0)
    ctx->pc = 0x28c408u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_28c40c:
    // 0x28c40c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x28c40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_28c410:
    // 0x28c410: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_28c414:
    if (ctx->pc == 0x28C414u) {
        ctx->pc = 0x28C414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C410u;
        // 0x28c414: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C418u;
        goto label_28c418;
    }
    ctx->pc = 0x28C410u;
    {
        const bool branch_taken_0x28c410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c410) {
            ctx->pc = 0x28C414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C410u;
            // 0x28c414: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C418u;
            goto label_28c418;
        }
    }
    ctx->pc = 0x28C418u;
label_28c418:
    // 0x28c418: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x28c418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28c41c:
    // 0x28c41c: 0x8e310014  lw          $s1, 0x14($s1)
    ctx->pc = 0x28c41cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_28c420:
    // 0x28c420: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x28c420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_28c424:
    // 0x28c424: 0x5622fffa  bnel        $s1, $v0, . + 4 + (-0x6 << 2)
label_28c428:
    if (ctx->pc == 0x28C428u) {
        ctx->pc = 0x28C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C424u;
        // 0x28c428: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C42Cu;
        goto label_28c42c;
    }
    ctx->pc = 0x28C424u;
    {
        const bool branch_taken_0x28c424 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x28c424) {
            ctx->pc = 0x28C428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C424u;
            // 0x28c428: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28c410;
        }
    }
    ctx->pc = 0x28C42Cu;
label_28c42c:
    // 0x28c42c: 0x2701018  mult        $v0, $s3, $s0
    ctx->pc = 0x28c42cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_28c430:
    // 0x28c430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28c434:
    // 0x28c434: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x28c434u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_28c438:
    // 0x28c438: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x28c438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_28c43c:
    // 0x28c43c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28c440:
    // 0x28c440: 0xc0a22a6  jal         func_288A98
label_28c444:
    if (ctx->pc == 0x28C444u) {
        ctx->pc = 0x28C444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C440u;
        // 0x28c444: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C448u;
        goto label_28c448;
    }
    ctx->pc = 0x28C440u;
    SET_GPR_U32(ctx, 31, 0x28C448u);
    ctx->pc = 0x28C444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C440u;
    // 0x28c444: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288A98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288A98u, 0x28C440u, 0x28C448u)) {
        return;
    }
    ctx->pc = 0x28C448u;
label_28c448:
    // 0x28c448: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x28c448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_28c44c:
    // 0x28c44c: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x28c44cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_28c450:
    // 0x28c450: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_28c454:
    if (ctx->pc == 0x28C454u) {
        ctx->pc = 0x28C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C450u;
        // 0x28c454: 0x2701018  mult        $v0, $s3, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C458u;
        goto label_28c458;
    }
    ctx->pc = 0x28C450u;
    {
        const bool branch_taken_0x28c450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C450u;
        // 0x28c454: 0x2701018  mult        $v0, $s3, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c450) {
            ctx->pc = 0x28C3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28c3f8;
        }
    }
    ctx->pc = 0x28C458u;
label_28c458:
    // 0x28c458: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x28c458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
label_28c45c:
    // 0x28c45c: 0x24a30fc8  addiu       $v1, $a1, 0xFC8
    ctx->pc = 0x28c45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4040));
label_28c460:
    // 0x28c460: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x28c460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_28c464:
    // 0x28c464: 0x40f809  jalr        $v0
label_28c468:
    if (ctx->pc == 0x28C468u) {
        ctx->pc = 0x28C468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C464u;
        // 0x28c468: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C46Cu;
        goto label_28c46c;
    }
    ctx->pc = 0x28C464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28C46Cu);
        ctx->pc = 0x28C468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C464u;
        // 0x28c468: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C464u, 0x28C46Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28C46Cu;
label_28c46c:
    // 0x28c46c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x28c46cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_28c470:
    // 0x28c470: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x28c470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28c474:
    // 0x28c474: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x28c474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_28c478:
    // 0x28c478: 0xacd40008  sw          $s4, 0x8($a2)
    ctx->pc = 0x28c478u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 20));
label_28c47c:
    // 0x28c47c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x28c47cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_28c480:
    // 0x28c480: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x28c480u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_28c484:
    // 0x28c484: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x28c484u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_28c488:
    // 0x28c488: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x28c488u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_28c48c:
    // 0x28c48c: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x28c48cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_28c490:
    // 0x28c490: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x28c490u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_28c494:
    // 0x28c494: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x28c494u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_28c498:
    // 0x28c498: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x28c498u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28c49c:
    // 0x28c49c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28c49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_28c4a0:
    // 0x28c4a0: 0x3e00008  jr          $ra
label_28c4a4:
    if (ctx->pc == 0x28C4A4u) {
        ctx->pc = 0x28C4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C4A0u;
        // 0x28c4a4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C4A8u;
        goto label_fallthrough_0x28c4a0;
    }
    ctx->pc = 0x28C4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C4A0u;
        // 0x28c4a4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28c4a0:
    ctx->pc = 0x28C4A8u;
}
