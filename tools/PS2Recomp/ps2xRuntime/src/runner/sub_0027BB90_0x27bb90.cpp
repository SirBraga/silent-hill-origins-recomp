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

// Function: sub_0027BB90
// Address: 0x27bb90 - 0x27c1e0
void sub_0027BB90_0x27bb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027BB90_0x27bb90");
#endif

    switch (ctx->pc) {
        case 0x27bb90u: goto label_27bb90;
        case 0x27bb94u: goto label_27bb94;
        case 0x27bb98u: goto label_27bb98;
        case 0x27bb9cu: goto label_27bb9c;
        case 0x27bba0u: goto label_27bba0;
        case 0x27bba4u: goto label_27bba4;
        case 0x27bba8u: goto label_27bba8;
        case 0x27bbacu: goto label_27bbac;
        case 0x27bbb0u: goto label_27bbb0;
        case 0x27bbb4u: goto label_27bbb4;
        case 0x27bbb8u: goto label_27bbb8;
        case 0x27bbbcu: goto label_27bbbc;
        case 0x27bbc0u: goto label_27bbc0;
        case 0x27bbc4u: goto label_27bbc4;
        case 0x27bbc8u: goto label_27bbc8;
        case 0x27bbccu: goto label_27bbcc;
        case 0x27bbd0u: goto label_27bbd0;
        case 0x27bbd4u: goto label_27bbd4;
        case 0x27bbd8u: goto label_27bbd8;
        case 0x27bbdcu: goto label_27bbdc;
        case 0x27bbe0u: goto label_27bbe0;
        case 0x27bbe4u: goto label_27bbe4;
        case 0x27bbe8u: goto label_27bbe8;
        case 0x27bbecu: goto label_27bbec;
        case 0x27bbf0u: goto label_27bbf0;
        case 0x27bbf4u: goto label_27bbf4;
        case 0x27bbf8u: goto label_27bbf8;
        case 0x27bbfcu: goto label_27bbfc;
        case 0x27bc00u: goto label_27bc00;
        case 0x27bc04u: goto label_27bc04;
        case 0x27bc08u: goto label_27bc08;
        case 0x27bc0cu: goto label_27bc0c;
        case 0x27bc10u: goto label_27bc10;
        case 0x27bc14u: goto label_27bc14;
        case 0x27bc18u: goto label_27bc18;
        case 0x27bc1cu: goto label_27bc1c;
        case 0x27bc20u: goto label_27bc20;
        case 0x27bc24u: goto label_27bc24;
        case 0x27bc28u: goto label_27bc28;
        case 0x27bc2cu: goto label_27bc2c;
        case 0x27bc30u: goto label_27bc30;
        case 0x27bc34u: goto label_27bc34;
        case 0x27bc38u: goto label_27bc38;
        case 0x27bc3cu: goto label_27bc3c;
        case 0x27bc40u: goto label_27bc40;
        case 0x27bc44u: goto label_27bc44;
        case 0x27bc48u: goto label_27bc48;
        case 0x27bc4cu: goto label_27bc4c;
        case 0x27bc50u: goto label_27bc50;
        case 0x27bc54u: goto label_27bc54;
        case 0x27bc58u: goto label_27bc58;
        case 0x27bc5cu: goto label_27bc5c;
        case 0x27bc60u: goto label_27bc60;
        case 0x27bc64u: goto label_27bc64;
        case 0x27bc68u: goto label_27bc68;
        case 0x27bc6cu: goto label_27bc6c;
        case 0x27bc70u: goto label_27bc70;
        case 0x27bc74u: goto label_27bc74;
        case 0x27bc78u: goto label_27bc78;
        case 0x27bc7cu: goto label_27bc7c;
        case 0x27bc80u: goto label_27bc80;
        case 0x27bc84u: goto label_27bc84;
        case 0x27bc88u: goto label_27bc88;
        case 0x27bc8cu: goto label_27bc8c;
        case 0x27bc90u: goto label_27bc90;
        case 0x27bc94u: goto label_27bc94;
        case 0x27bc98u: goto label_27bc98;
        case 0x27bc9cu: goto label_27bc9c;
        case 0x27bca0u: goto label_27bca0;
        case 0x27bca4u: goto label_27bca4;
        case 0x27bca8u: goto label_27bca8;
        case 0x27bcacu: goto label_27bcac;
        case 0x27bcb0u: goto label_27bcb0;
        case 0x27bcb4u: goto label_27bcb4;
        case 0x27bcb8u: goto label_27bcb8;
        case 0x27bcbcu: goto label_27bcbc;
        case 0x27bcc0u: goto label_27bcc0;
        case 0x27bcc4u: goto label_27bcc4;
        case 0x27bcc8u: goto label_27bcc8;
        case 0x27bcccu: goto label_27bccc;
        case 0x27bcd0u: goto label_27bcd0;
        case 0x27bcd4u: goto label_27bcd4;
        case 0x27bcd8u: goto label_27bcd8;
        case 0x27bcdcu: goto label_27bcdc;
        case 0x27bce0u: goto label_27bce0;
        case 0x27bce4u: goto label_27bce4;
        case 0x27bce8u: goto label_27bce8;
        case 0x27bcecu: goto label_27bcec;
        case 0x27bcf0u: goto label_27bcf0;
        case 0x27bcf4u: goto label_27bcf4;
        case 0x27bcf8u: goto label_27bcf8;
        case 0x27bcfcu: goto label_27bcfc;
        case 0x27bd00u: goto label_27bd00;
        case 0x27bd04u: goto label_27bd04;
        case 0x27bd08u: goto label_27bd08;
        case 0x27bd0cu: goto label_27bd0c;
        case 0x27bd10u: goto label_27bd10;
        case 0x27bd14u: goto label_27bd14;
        case 0x27bd18u: goto label_27bd18;
        case 0x27bd1cu: goto label_27bd1c;
        case 0x27bd20u: goto label_27bd20;
        case 0x27bd24u: goto label_27bd24;
        case 0x27bd28u: goto label_27bd28;
        case 0x27bd2cu: goto label_27bd2c;
        case 0x27bd30u: goto label_27bd30;
        case 0x27bd34u: goto label_27bd34;
        case 0x27bd38u: goto label_27bd38;
        case 0x27bd3cu: goto label_27bd3c;
        case 0x27bd40u: goto label_27bd40;
        case 0x27bd44u: goto label_27bd44;
        case 0x27bd48u: goto label_27bd48;
        case 0x27bd4cu: goto label_27bd4c;
        case 0x27bd50u: goto label_27bd50;
        case 0x27bd54u: goto label_27bd54;
        case 0x27bd58u: goto label_27bd58;
        case 0x27bd5cu: goto label_27bd5c;
        case 0x27bd60u: goto label_27bd60;
        case 0x27bd64u: goto label_27bd64;
        case 0x27bd68u: goto label_27bd68;
        case 0x27bd6cu: goto label_27bd6c;
        case 0x27bd70u: goto label_27bd70;
        case 0x27bd74u: goto label_27bd74;
        case 0x27bd78u: goto label_27bd78;
        case 0x27bd7cu: goto label_27bd7c;
        case 0x27bd80u: goto label_27bd80;
        case 0x27bd84u: goto label_27bd84;
        case 0x27bd88u: goto label_27bd88;
        case 0x27bd8cu: goto label_27bd8c;
        case 0x27bd90u: goto label_27bd90;
        case 0x27bd94u: goto label_27bd94;
        case 0x27bd98u: goto label_27bd98;
        case 0x27bd9cu: goto label_27bd9c;
        case 0x27bda0u: goto label_27bda0;
        case 0x27bda4u: goto label_27bda4;
        case 0x27bda8u: goto label_27bda8;
        case 0x27bdacu: goto label_27bdac;
        case 0x27bdb0u: goto label_27bdb0;
        case 0x27bdb4u: goto label_27bdb4;
        case 0x27bdb8u: goto label_27bdb8;
        case 0x27bdbcu: goto label_27bdbc;
        case 0x27bdc0u: goto label_27bdc0;
        case 0x27bdc4u: goto label_27bdc4;
        case 0x27bdc8u: goto label_27bdc8;
        case 0x27bdccu: goto label_27bdcc;
        case 0x27bdd0u: goto label_27bdd0;
        case 0x27bdd4u: goto label_27bdd4;
        case 0x27bdd8u: goto label_27bdd8;
        case 0x27bddcu: goto label_27bddc;
        case 0x27bde0u: goto label_27bde0;
        case 0x27bde4u: goto label_27bde4;
        case 0x27bde8u: goto label_27bde8;
        case 0x27bdecu: goto label_27bdec;
        case 0x27bdf0u: goto label_27bdf0;
        case 0x27bdf4u: goto label_27bdf4;
        case 0x27bdf8u: goto label_27bdf8;
        case 0x27bdfcu: goto label_27bdfc;
        case 0x27be00u: goto label_27be00;
        case 0x27be04u: goto label_27be04;
        case 0x27be08u: goto label_27be08;
        case 0x27be0cu: goto label_27be0c;
        case 0x27be10u: goto label_27be10;
        case 0x27be14u: goto label_27be14;
        case 0x27be18u: goto label_27be18;
        case 0x27be1cu: goto label_27be1c;
        case 0x27be20u: goto label_27be20;
        case 0x27be24u: goto label_27be24;
        case 0x27be28u: goto label_27be28;
        case 0x27be2cu: goto label_27be2c;
        case 0x27be30u: goto label_27be30;
        case 0x27be34u: goto label_27be34;
        case 0x27be38u: goto label_27be38;
        case 0x27be3cu: goto label_27be3c;
        case 0x27be40u: goto label_27be40;
        case 0x27be44u: goto label_27be44;
        case 0x27be48u: goto label_27be48;
        case 0x27be4cu: goto label_27be4c;
        case 0x27be50u: goto label_27be50;
        case 0x27be54u: goto label_27be54;
        case 0x27be58u: goto label_27be58;
        case 0x27be5cu: goto label_27be5c;
        case 0x27be60u: goto label_27be60;
        case 0x27be64u: goto label_27be64;
        case 0x27be68u: goto label_27be68;
        case 0x27be6cu: goto label_27be6c;
        case 0x27be70u: goto label_27be70;
        case 0x27be74u: goto label_27be74;
        case 0x27be78u: goto label_27be78;
        case 0x27be7cu: goto label_27be7c;
        case 0x27be80u: goto label_27be80;
        case 0x27be84u: goto label_27be84;
        case 0x27be88u: goto label_27be88;
        case 0x27be8cu: goto label_27be8c;
        case 0x27be90u: goto label_27be90;
        case 0x27be94u: goto label_27be94;
        case 0x27be98u: goto label_27be98;
        case 0x27be9cu: goto label_27be9c;
        case 0x27bea0u: goto label_27bea0;
        case 0x27bea4u: goto label_27bea4;
        case 0x27bea8u: goto label_27bea8;
        case 0x27beacu: goto label_27beac;
        case 0x27beb0u: goto label_27beb0;
        case 0x27beb4u: goto label_27beb4;
        case 0x27beb8u: goto label_27beb8;
        case 0x27bebcu: goto label_27bebc;
        case 0x27bec0u: goto label_27bec0;
        case 0x27bec4u: goto label_27bec4;
        case 0x27bec8u: goto label_27bec8;
        case 0x27beccu: goto label_27becc;
        case 0x27bed0u: goto label_27bed0;
        case 0x27bed4u: goto label_27bed4;
        case 0x27bed8u: goto label_27bed8;
        case 0x27bedcu: goto label_27bedc;
        case 0x27bee0u: goto label_27bee0;
        case 0x27bee4u: goto label_27bee4;
        case 0x27bee8u: goto label_27bee8;
        case 0x27beecu: goto label_27beec;
        case 0x27bef0u: goto label_27bef0;
        case 0x27bef4u: goto label_27bef4;
        case 0x27bef8u: goto label_27bef8;
        case 0x27befcu: goto label_27befc;
        case 0x27bf00u: goto label_27bf00;
        case 0x27bf04u: goto label_27bf04;
        case 0x27bf08u: goto label_27bf08;
        case 0x27bf0cu: goto label_27bf0c;
        case 0x27bf10u: goto label_27bf10;
        case 0x27bf14u: goto label_27bf14;
        case 0x27bf18u: goto label_27bf18;
        case 0x27bf1cu: goto label_27bf1c;
        case 0x27bf20u: goto label_27bf20;
        case 0x27bf24u: goto label_27bf24;
        case 0x27bf28u: goto label_27bf28;
        case 0x27bf2cu: goto label_27bf2c;
        case 0x27bf30u: goto label_27bf30;
        case 0x27bf34u: goto label_27bf34;
        case 0x27bf38u: goto label_27bf38;
        case 0x27bf3cu: goto label_27bf3c;
        case 0x27bf40u: goto label_27bf40;
        case 0x27bf44u: goto label_27bf44;
        case 0x27bf48u: goto label_27bf48;
        case 0x27bf4cu: goto label_27bf4c;
        case 0x27bf50u: goto label_27bf50;
        case 0x27bf54u: goto label_27bf54;
        case 0x27bf58u: goto label_27bf58;
        case 0x27bf5cu: goto label_27bf5c;
        case 0x27bf60u: goto label_27bf60;
        case 0x27bf64u: goto label_27bf64;
        case 0x27bf68u: goto label_27bf68;
        case 0x27bf6cu: goto label_27bf6c;
        case 0x27bf70u: goto label_27bf70;
        case 0x27bf74u: goto label_27bf74;
        case 0x27bf78u: goto label_27bf78;
        case 0x27bf7cu: goto label_27bf7c;
        case 0x27bf80u: goto label_27bf80;
        case 0x27bf84u: goto label_27bf84;
        case 0x27bf88u: goto label_27bf88;
        case 0x27bf8cu: goto label_27bf8c;
        case 0x27bf90u: goto label_27bf90;
        case 0x27bf94u: goto label_27bf94;
        case 0x27bf98u: goto label_27bf98;
        case 0x27bf9cu: goto label_27bf9c;
        case 0x27bfa0u: goto label_27bfa0;
        case 0x27bfa4u: goto label_27bfa4;
        case 0x27bfa8u: goto label_27bfa8;
        case 0x27bfacu: goto label_27bfac;
        case 0x27bfb0u: goto label_27bfb0;
        case 0x27bfb4u: goto label_27bfb4;
        case 0x27bfb8u: goto label_27bfb8;
        case 0x27bfbcu: goto label_27bfbc;
        case 0x27bfc0u: goto label_27bfc0;
        case 0x27bfc4u: goto label_27bfc4;
        case 0x27bfc8u: goto label_27bfc8;
        case 0x27bfccu: goto label_27bfcc;
        case 0x27bfd0u: goto label_27bfd0;
        case 0x27bfd4u: goto label_27bfd4;
        case 0x27bfd8u: goto label_27bfd8;
        case 0x27bfdcu: goto label_27bfdc;
        case 0x27bfe0u: goto label_27bfe0;
        case 0x27bfe4u: goto label_27bfe4;
        case 0x27bfe8u: goto label_27bfe8;
        case 0x27bfecu: goto label_27bfec;
        case 0x27bff0u: goto label_27bff0;
        case 0x27bff4u: goto label_27bff4;
        case 0x27bff8u: goto label_27bff8;
        case 0x27bffcu: goto label_27bffc;
        case 0x27c000u: goto label_27c000;
        case 0x27c004u: goto label_27c004;
        case 0x27c008u: goto label_27c008;
        case 0x27c00cu: goto label_27c00c;
        case 0x27c010u: goto label_27c010;
        case 0x27c014u: goto label_27c014;
        case 0x27c018u: goto label_27c018;
        case 0x27c01cu: goto label_27c01c;
        case 0x27c020u: goto label_27c020;
        case 0x27c024u: goto label_27c024;
        case 0x27c028u: goto label_27c028;
        case 0x27c02cu: goto label_27c02c;
        case 0x27c030u: goto label_27c030;
        case 0x27c034u: goto label_27c034;
        case 0x27c038u: goto label_27c038;
        case 0x27c03cu: goto label_27c03c;
        case 0x27c040u: goto label_27c040;
        case 0x27c044u: goto label_27c044;
        case 0x27c048u: goto label_27c048;
        case 0x27c04cu: goto label_27c04c;
        case 0x27c050u: goto label_27c050;
        case 0x27c054u: goto label_27c054;
        case 0x27c058u: goto label_27c058;
        case 0x27c05cu: goto label_27c05c;
        case 0x27c060u: goto label_27c060;
        case 0x27c064u: goto label_27c064;
        case 0x27c068u: goto label_27c068;
        case 0x27c06cu: goto label_27c06c;
        case 0x27c070u: goto label_27c070;
        case 0x27c074u: goto label_27c074;
        case 0x27c078u: goto label_27c078;
        case 0x27c07cu: goto label_27c07c;
        case 0x27c080u: goto label_27c080;
        case 0x27c084u: goto label_27c084;
        case 0x27c088u: goto label_27c088;
        case 0x27c08cu: goto label_27c08c;
        case 0x27c090u: goto label_27c090;
        case 0x27c094u: goto label_27c094;
        case 0x27c098u: goto label_27c098;
        case 0x27c09cu: goto label_27c09c;
        case 0x27c0a0u: goto label_27c0a0;
        case 0x27c0a4u: goto label_27c0a4;
        case 0x27c0a8u: goto label_27c0a8;
        case 0x27c0acu: goto label_27c0ac;
        case 0x27c0b0u: goto label_27c0b0;
        case 0x27c0b4u: goto label_27c0b4;
        case 0x27c0b8u: goto label_27c0b8;
        case 0x27c0bcu: goto label_27c0bc;
        case 0x27c0c0u: goto label_27c0c0;
        case 0x27c0c4u: goto label_27c0c4;
        case 0x27c0c8u: goto label_27c0c8;
        case 0x27c0ccu: goto label_27c0cc;
        case 0x27c0d0u: goto label_27c0d0;
        case 0x27c0d4u: goto label_27c0d4;
        case 0x27c0d8u: goto label_27c0d8;
        case 0x27c0dcu: goto label_27c0dc;
        case 0x27c0e0u: goto label_27c0e0;
        case 0x27c0e4u: goto label_27c0e4;
        case 0x27c0e8u: goto label_27c0e8;
        case 0x27c0ecu: goto label_27c0ec;
        case 0x27c0f0u: goto label_27c0f0;
        case 0x27c0f4u: goto label_27c0f4;
        case 0x27c0f8u: goto label_27c0f8;
        case 0x27c0fcu: goto label_27c0fc;
        case 0x27c100u: goto label_27c100;
        case 0x27c104u: goto label_27c104;
        case 0x27c108u: goto label_27c108;
        case 0x27c10cu: goto label_27c10c;
        case 0x27c110u: goto label_27c110;
        case 0x27c114u: goto label_27c114;
        case 0x27c118u: goto label_27c118;
        case 0x27c11cu: goto label_27c11c;
        case 0x27c120u: goto label_27c120;
        case 0x27c124u: goto label_27c124;
        case 0x27c128u: goto label_27c128;
        case 0x27c12cu: goto label_27c12c;
        case 0x27c130u: goto label_27c130;
        case 0x27c134u: goto label_27c134;
        case 0x27c138u: goto label_27c138;
        case 0x27c13cu: goto label_27c13c;
        case 0x27c140u: goto label_27c140;
        case 0x27c144u: goto label_27c144;
        case 0x27c148u: goto label_27c148;
        case 0x27c14cu: goto label_27c14c;
        case 0x27c150u: goto label_27c150;
        case 0x27c154u: goto label_27c154;
        case 0x27c158u: goto label_27c158;
        case 0x27c15cu: goto label_27c15c;
        case 0x27c160u: goto label_27c160;
        case 0x27c164u: goto label_27c164;
        case 0x27c168u: goto label_27c168;
        case 0x27c16cu: goto label_27c16c;
        case 0x27c170u: goto label_27c170;
        case 0x27c174u: goto label_27c174;
        case 0x27c178u: goto label_27c178;
        case 0x27c17cu: goto label_27c17c;
        case 0x27c180u: goto label_27c180;
        case 0x27c184u: goto label_27c184;
        case 0x27c188u: goto label_27c188;
        case 0x27c18cu: goto label_27c18c;
        case 0x27c190u: goto label_27c190;
        case 0x27c194u: goto label_27c194;
        case 0x27c198u: goto label_27c198;
        case 0x27c19cu: goto label_27c19c;
        case 0x27c1a0u: goto label_27c1a0;
        case 0x27c1a4u: goto label_27c1a4;
        case 0x27c1a8u: goto label_27c1a8;
        case 0x27c1acu: goto label_27c1ac;
        case 0x27c1b0u: goto label_27c1b0;
        case 0x27c1b4u: goto label_27c1b4;
        case 0x27c1b8u: goto label_27c1b8;
        case 0x27c1bcu: goto label_27c1bc;
        case 0x27c1c0u: goto label_27c1c0;
        case 0x27c1c4u: goto label_27c1c4;
        case 0x27c1c8u: goto label_27c1c8;
        case 0x27c1ccu: goto label_27c1cc;
        case 0x27c1d0u: goto label_27c1d0;
        case 0x27c1d4u: goto label_27c1d4;
        case 0x27c1d8u: goto label_27c1d8;
        case 0x27c1dcu: goto label_27c1dc;
        default: break;
    }

    ctx->pc = 0x27bb90u;

label_27bb90:
    // 0x27bb90: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x27bb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_27bb94:
    // 0x27bb94: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x27bb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
label_27bb98:
    // 0x27bb98: 0x7fb70110  sq          $s7, 0x110($sp)
    ctx->pc = 0x27bb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 23));
label_27bb9c:
    // 0x27bb9c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x27bb9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_27bba0:
    // 0x27bba0: 0x7fbe0100  sq          $fp, 0x100($sp)
    ctx->pc = 0x27bba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 30));
label_27bba4:
    // 0x27bba4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x27bba4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27bba8:
    // 0x27bba8: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x27bba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
label_27bbac:
    // 0x27bbac: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x27bbacu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_27bbb0:
    // 0x27bbb0: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x27bbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
label_27bbb4:
    // 0x27bbb4: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x27bbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
label_27bbb8:
    // 0x27bbb8: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x27bbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
label_27bbbc:
    // 0x27bbbc: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x27bbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
label_27bbc0:
    // 0x27bbc0: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x27bbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
label_27bbc4:
    // 0x27bbc4: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x27bbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
label_27bbc8:
    // 0x27bbc8: 0xe7b701a8  swc1        $f23, 0x1A8($sp)
    ctx->pc = 0x27bbc8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_27bbcc:
    // 0x27bbcc: 0xe7b601a0  swc1        $f22, 0x1A0($sp)
    ctx->pc = 0x27bbccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_27bbd0:
    // 0x27bbd0: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x27bbd0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_27bbd4:
    // 0x27bbd4: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x27bbd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_27bbd8:
    // 0x27bbd8: 0xafa700e0  sw          $a3, 0xE0($sp)
    ctx->pc = 0x27bbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 7));
label_27bbdc:
    // 0x27bbdc: 0xafa800e4  sw          $t0, 0xE4($sp)
    ctx->pc = 0x27bbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 8));
label_27bbe0:
    // 0x27bbe0: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x27bbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27bbe4:
    // 0x27bbe4: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x27bbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27bbe8:
    // 0x27bbe8: 0xc6820010  lwc1        $f2, 0x10($s4)
    ctx->pc = 0x27bbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27bbec:
    // 0x27bbec: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x27bbecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_27bbf0:
    // 0x27bbf0: 0xc6840004  lwc1        $f4, 0x4($s4)
    ctx->pc = 0x27bbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27bbf4:
    // 0x27bbf4: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x27bbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bbf8:
    // 0x27bbf8: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x27bbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27bbfc:
    // 0x27bbfc: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x27bbfcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_27bc00:
    // 0x27bc00: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x27bc00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_27bc04:
    // 0x27bc04: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x27bc04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_27bc08:
    // 0x27bc08: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x27bc08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_27bc0c:
    // 0x27bc0c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x27bc0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_27bc10:
    // 0x27bc10: 0x84a30004  lh          $v1, 0x4($a1)
    ctx->pc = 0x27bc10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_27bc14:
    // 0x27bc14: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x27bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_27bc18:
    // 0x27bc18: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x27bc18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_27bc1c:
    // 0x27bc1c: 0x8ee6005c  lw          $a2, 0x5C($s7)
    ctx->pc = 0x27bc1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 92)));
label_27bc20:
    // 0x27bc20: 0x84a40006  lh          $a0, 0x6($a1)
    ctx->pc = 0x27bc20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
label_27bc24:
    // 0x27bc24: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x27bc24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27bc28:
    // 0x27bc28: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x27bc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27bc2c:
    // 0x27bc2c: 0x27b2000c  addiu       $s2, $sp, 0xC
    ctx->pc = 0x27bc2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_27bc30:
    // 0x27bc30: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x27bc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bc34:
    // 0x27bc34: 0x823818  mult        $a3, $a0, $v0
    ctx->pc = 0x27bc34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_27bc38:
    // 0x27bc38: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x27bc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_27bc3c:
    // 0x27bc3c: 0x27b10018  addiu       $s1, $sp, 0x18
    ctx->pc = 0x27bc3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_27bc40:
    // 0x27bc40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27bc40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_27bc44:
    // 0x27bc44: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x27bc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_27bc48:
    // 0x27bc48: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x27bc48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_27bc4c:
    // 0x27bc4c: 0xe62021  addu        $a0, $a3, $a2
    ctx->pc = 0x27bc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_27bc50:
    // 0x27bc50: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x27bc50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_27bc54:
    // 0x27bc54: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x27bc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_27bc58:
    // 0x27bc58: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x27bc58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_27bc5c:
    // 0x27bc5c: 0x8ee3002c  lw          $v1, 0x2C($s7)
    ctx->pc = 0x27bc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 44)));
label_27bc60:
    // 0x27bc60: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x27bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_27bc64:
    // 0x27bc64: 0x1840014e  blez        $v0, . + 4 + (0x14E << 2)
label_27bc68:
    if (ctx->pc == 0x27BC68u) {
        ctx->pc = 0x27BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC64u;
        // 0x27bc68: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BC6Cu;
        goto label_27bc6c;
    }
    ctx->pc = 0x27BC64u;
    {
        const bool branch_taken_0x27bc64 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x27BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC64u;
        // 0x27bc68: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bc64) {
            ctx->pc = 0x27C1A0u;
            goto label_27c1a0;
        }
    }
    ctx->pc = 0x27BC6Cu;
label_27bc6c:
    // 0x27bc6c: 0xc7978040  lwc1        $f23, -0x7FC0($gp)
    ctx->pc = 0x27bc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_27bc70:
    // 0x27bc70: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x27bc70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_27bc74:
    // 0x27bc74: 0xc7968044  lwc1        $f22, -0x7FBC($gp)
    ctx->pc = 0x27bc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_27bc78:
    // 0x27bc78: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x27bc78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_27bc7c:
    // 0x27bc7c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x27bc7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_27bc80:
    // 0x27bc80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27bc80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_27bc84:
    // 0x27bc84: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27bc84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_27bc88:
    // 0x27bc88: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x27bc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_27bc8c:
    // 0x27bc8c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x27bc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_27bc90:
    // 0x27bc90: 0x1485000b  bne         $a0, $a1, . + 4 + (0xB << 2)
label_27bc94:
    if (ctx->pc == 0x27BC94u) {
        ctx->pc = 0x27BC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC90u;
        // 0x27bc94: 0x96620000  lhu         $v0, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BC98u;
        goto label_27bc98;
    }
    ctx->pc = 0x27BC90u;
    {
        const bool branch_taken_0x27bc90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x27BC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC90u;
        // 0x27bc94: 0x96620000  lhu         $v0, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bc90) {
            ctx->pc = 0x27BCC0u;
            goto label_27bcc0;
        }
    }
    ctx->pc = 0x27BC98u;
label_27bc98:
    // 0x27bc98: 0x96630002  lhu         $v1, 0x2($s3)
    ctx->pc = 0x27bc98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_27bc9c:
    // 0x27bc9c: 0x553018  mult        $a2, $v0, $s5
    ctx->pc = 0x27bc9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_27bca0:
    // 0x27bca0: 0x96640004  lhu         $a0, 0x4($s3)
    ctx->pc = 0x27bca0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_27bca4:
    // 0x27bca4: 0x751018  mult        $v0, $v1, $s5
    ctx->pc = 0x27bca4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_27bca8:
    // 0x27bca8: 0xc58021  addu        $s0, $a2, $a1
    ctx->pc = 0x27bca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_27bcac:
    // 0x27bcac: 0x459021  addu        $s2, $v0, $a1
    ctx->pc = 0x27bcacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_27bcb0:
    // 0x27bcb0: 0x951018  mult        $v0, $a0, $s5
    ctx->pc = 0x27bcb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_27bcb4:
    // 0x27bcb4: 0x1000005c  b           . + 4 + (0x5C << 2)
label_27bcb8:
    if (ctx->pc == 0x27BCB8u) {
        ctx->pc = 0x27BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BCB4u;
        // 0x27bcb8: 0x458821  addu        $s1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BCBCu;
        goto label_27bcbc;
    }
    ctx->pc = 0x27BCB4u;
    {
        const bool branch_taken_0x27bcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BCB4u;
        // 0x27bcb8: 0x458821  addu        $s1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bcb4) {
            ctx->pc = 0x27BE28u;
            goto label_27be28;
        }
    }
    ctx->pc = 0x27BCBCu;
label_27bcbc:
    // 0x27bcbc: 0x0  nop
    ctx->pc = 0x27bcbcu;
    // NOP
label_27bcc0:
    // 0x27bcc0: 0x551018  mult        $v0, $v0, $s5
    ctx->pc = 0x27bcc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_27bcc4:
    // 0x27bcc4: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x27bcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_27bcc8:
    // 0x27bcc8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_27bccc:
    // 0x27bccc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x27bcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27bcd0:
    // 0x27bcd0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27bcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bcd4:
    // 0x27bcd4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x27bcd4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_27bcd8:
    // 0x27bcd8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x27bcd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_27bcdc:
    // 0x27bcdc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x27bcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bce0:
    // 0x27bce0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x27bce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27bce4:
    // 0x27bce4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27bce4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27bce8:
    // 0x27bce8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x27bce8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_27bcec:
    // 0x27bcec: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x27bcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27bcf0:
    // 0x27bcf0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27bcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bcf4:
    // 0x27bcf4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x27bcf4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_27bcf8:
    // 0x27bcf8: 0xc7a4002c  lwc1        $f4, 0x2C($sp)
    ctx->pc = 0x27bcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27bcfc:
    // 0x27bcfc: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x27bcfcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_27bd00:
    // 0x27bd00: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x27bd00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_27bd04:
    // 0x27bd04: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x27bd04u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_27bd08:
    // 0x27bd08: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x27bd08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_27bd0c:
    // 0x27bd0c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x27bd0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_27bd10:
    // 0x27bd10: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x27bd10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_27bd14:
    // 0x27bd14: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27bd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bd18:
    // 0x27bd18: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x27bd18u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27bd1c:
    // 0x27bd1c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x27bd1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_27bd20:
    // 0x27bd20: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x27bd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bd24:
    // 0x27bd24: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27bd24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27bd28:
    // 0x27bd28: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x27bd28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_27bd2c:
    // 0x27bd2c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27bd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bd30:
    // 0x27bd30: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x27bd30u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_27bd34:
    // 0x27bd34: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x27bd34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_27bd38:
    // 0x27bd38: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x27bd38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_27bd3c:
    // 0x27bd3c: 0x551018  mult        $v0, $v0, $s5
    ctx->pc = 0x27bd3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_27bd40:
    // 0x27bd40: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x27bd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_27bd44:
    // 0x27bd44: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27bd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_27bd48:
    // 0x27bd48: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x27bd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27bd4c:
    // 0x27bd4c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27bd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bd50:
    // 0x27bd50: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x27bd50u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_27bd54:
    // 0x27bd54: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x27bd54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_27bd58:
    // 0x27bd58: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x27bd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bd5c:
    // 0x27bd5c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x27bd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27bd60:
    // 0x27bd60: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27bd60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27bd64:
    // 0x27bd64: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x27bd64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_27bd68:
    // 0x27bd68: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x27bd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27bd6c:
    // 0x27bd6c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27bd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bd70:
    // 0x27bd70: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x27bd70u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_27bd74:
    // 0x27bd74: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x27bd74u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_27bd78:
    // 0x27bd78: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x27bd78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_27bd7c:
    // 0x27bd7c: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x27bd7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_27bd80:
    // 0x27bd80: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x27bd80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_27bd84:
    // 0x27bd84: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x27bd84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_27bd88:
    // 0x27bd88: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x27bd88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_27bd8c:
    // 0x27bd8c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27bd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bd90:
    // 0x27bd90: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x27bd90u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_27bd94:
    // 0x27bd94: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x27bd94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_27bd98:
    // 0x27bd98: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x27bd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bd9c:
    // 0x27bd9c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27bd9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27bda0:
    // 0x27bda0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x27bda0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_27bda4:
    // 0x27bda4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27bda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bda8:
    // 0x27bda8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x27bda8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27bdac:
    // 0x27bdac: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x27bdacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_27bdb0:
    // 0x27bdb0: 0x96620004  lhu         $v0, 0x4($s3)
    ctx->pc = 0x27bdb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_27bdb4:
    // 0x27bdb4: 0x551018  mult        $v0, $v0, $s5
    ctx->pc = 0x27bdb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_27bdb8:
    // 0x27bdb8: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x27bdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_27bdbc:
    // 0x27bdbc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_27bdc0:
    // 0x27bdc0: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x27bdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27bdc4:
    // 0x27bdc4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27bdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bdc8:
    // 0x27bdc8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x27bdc8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_27bdcc:
    // 0x27bdcc: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x27bdccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_27bdd0:
    // 0x27bdd0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x27bdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bdd4:
    // 0x27bdd4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x27bdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27bdd8:
    // 0x27bdd8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27bdd8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27bddc:
    // 0x27bddc: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x27bddcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_27bde0:
    // 0x27bde0: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x27bde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27bde4:
    // 0x27bde4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27bde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bde8:
    // 0x27bde8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x27bde8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_27bdec:
    // 0x27bdec: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x27bdecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_27bdf0:
    // 0x27bdf0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x27bdf0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_27bdf4:
    // 0x27bdf4: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x27bdf4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_27bdf8:
    // 0x27bdf8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x27bdf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_27bdfc:
    // 0x27bdfc: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x27bdfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_27be00:
    // 0x27be00: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x27be00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_27be04:
    // 0x27be04: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27be04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27be08:
    // 0x27be08: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x27be08u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_27be0c:
    // 0x27be0c: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x27be0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_27be10:
    // 0x27be10: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x27be10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27be14:
    // 0x27be14: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27be14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27be18:
    // 0x27be18: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x27be18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_27be1c:
    // 0x27be1c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27be1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27be20:
    // 0x27be20: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x27be20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27be24:
    // 0x27be24: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x27be24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_27be28:
    // 0x27be28: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x27be28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27be2c:
    // 0x27be2c: 0xc6480000  lwc1        $f8, 0x0($s2)
    ctx->pc = 0x27be2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_27be30:
    // 0x27be30: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x27be30u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
label_27be34:
    // 0x27be34: 0xe7a80070  swc1        $f8, 0x70($sp)
    ctx->pc = 0x27be34u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_27be38:
    // 0x27be38: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x27be38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27be3c:
    // 0x27be3c: 0xc64a0004  lwc1        $f10, 0x4($s2)
    ctx->pc = 0x27be3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_27be40:
    // 0x27be40: 0x46005281  sub.s       $f10, $f10, $f0
    ctx->pc = 0x27be40u;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
label_27be44:
    // 0x27be44: 0xe7aa0074  swc1        $f10, 0x74($sp)
    ctx->pc = 0x27be44u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_27be48:
    // 0x27be48: 0xc6490008  lwc1        $f9, 0x8($s2)
    ctx->pc = 0x27be48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_27be4c:
    // 0x27be4c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x27be4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27be50:
    // 0x27be50: 0x46004a41  sub.s       $f9, $f9, $f0
    ctx->pc = 0x27be50u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
label_27be54:
    // 0x27be54: 0xe7a90078  swc1        $f9, 0x78($sp)
    ctx->pc = 0x27be54u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_27be58:
    // 0x27be58: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x27be58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27be5c:
    // 0x27be5c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x27be5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27be60:
    // 0x27be60: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x27be60u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_27be64:
    // 0x27be64: 0xe7a40080  swc1        $f4, 0x80($sp)
    ctx->pc = 0x27be64u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_27be68:
    // 0x27be68: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x27be68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27be6c:
    // 0x27be6c: 0xc6260004  lwc1        $f6, 0x4($s1)
    ctx->pc = 0x27be6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_27be70:
    // 0x27be70: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x27be70u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_27be74:
    // 0x27be74: 0xe7a60084  swc1        $f6, 0x84($sp)
    ctx->pc = 0x27be74u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_27be78:
    // 0x27be78: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x27be78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27be7c:
    // 0x27be7c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x27be7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27be80:
    // 0x27be80: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27be80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27be84:
    // 0x27be84: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x27be84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_27be88:
    // 0x27be88: 0xc7a50034  lwc1        $f5, 0x34($sp)
    ctx->pc = 0x27be88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_27be8c:
    // 0x27be8c: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x27be8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27be90:
    // 0x27be90: 0x460429c2  mul.s       $f7, $f5, $f4
    ctx->pc = 0x27be90u;
    ctx->f[7] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_27be94:
    // 0x27be94: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x27be94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27be98:
    // 0x27be98: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x27be98u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_27be9c:
    // 0x27be9c: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x27be9cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_27bea0:
    // 0x27bea0: 0x460600c2  mul.s       $f3, $f0, $f6
    ctx->pc = 0x27bea0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_27bea4:
    // 0x27bea4: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x27bea4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_27bea8:
    // 0x27bea8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27bea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_27beac:
    // 0x27beac: 0x46071981  sub.s       $f6, $f3, $f7
    ctx->pc = 0x27beacu;
    ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
label_27beb0:
    // 0x27beb0: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x27beb0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_27beb4:
    // 0x27beb4: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x27beb4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_27beb8:
    // 0x27beb8: 0xe7a600a8  swc1        $f6, 0xA8($sp)
    ctx->pc = 0x27beb8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_27bebc:
    // 0x27bebc: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x27bebcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_27bec0:
    // 0x27bec0: 0xe7a400a4  swc1        $f4, 0xA4($sp)
    ctx->pc = 0x27bec0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_27bec4:
    // 0x27bec4: 0x46054202  mul.s       $f8, $f8, $f5
    ctx->pc = 0x27bec4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
label_27bec8:
    // 0x27bec8: 0x46045282  mul.s       $f10, $f10, $f4
    ctx->pc = 0x27bec8u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
label_27becc:
    // 0x27becc: 0x46064a42  mul.s       $f9, $f9, $f6
    ctx->pc = 0x27beccu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
label_27bed0:
    // 0x27bed0: 0x460a4200  add.s       $f8, $f8, $f10
    ctx->pc = 0x27bed0u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[10]);
label_27bed4:
    // 0x27bed4: 0x46094200  add.s       $f8, $f8, $f9
    ctx->pc = 0x27bed4u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[9]);
label_27bed8:
    // 0x27bed8: 0x4608b834  c.lt.s      $f23, $f8
    ctx->pc = 0x27bed8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27bedc:
    // 0x27bedc: 0x0  nop
    ctx->pc = 0x27bedcu;
    // NOP
label_27bee0:
    // 0x27bee0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_27bee4:
    if (ctx->pc == 0x27BEE4u) {
        ctx->pc = 0x27BEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BEE0u;
        // 0x27bee4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BEE8u;
        goto label_27bee8;
    }
    ctx->pc = 0x27BEE0u;
    {
        const bool branch_taken_0x27bee0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27BEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BEE0u;
        // 0x27bee4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bee0) {
            ctx->pc = 0x27BEF0u;
            goto label_27bef0;
        }
    }
    ctx->pc = 0x27BEE8u;
label_27bee8:
    // 0x27bee8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27bee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27beec:
    // 0x27beec: 0x0  nop
    ctx->pc = 0x27beecu;
    // NOP
label_27bef0:
    // 0x27bef0: 0x504000a7  beql        $v0, $zero, . + 4 + (0xA7 << 2)
label_27bef4:
    if (ctx->pc == 0x27BEF4u) {
        ctx->pc = 0x27BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BEF0u;
        // 0x27bef4: 0x8ee20010  lw          $v0, 0x10($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BEF8u;
        goto label_27bef8;
    }
    ctx->pc = 0x27BEF0u;
    {
        const bool branch_taken_0x27bef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bef0) {
            ctx->pc = 0x27BEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BEF0u;
            // 0x27bef4: 0x8ee20010  lw          $v0, 0x10($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C190u;
            goto label_27c190;
        }
    }
    ctx->pc = 0x27BEF8u;
label_27bef8:
    // 0x27bef8: 0x46004007  neg.s       $f0, $f8
    ctx->pc = 0x27bef8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[8]);
label_27befc:
    // 0x27befc: 0x46160282  mul.s       $f10, $f0, $f22
    ctx->pc = 0x27befcu;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_27bf00:
    // 0x27bf00: 0x460a42c1  sub.s       $f11, $f8, $f10
    ctx->pc = 0x27bf00u;
    ctx->f[11] = FPU_SUB_S(ctx->f[8], ctx->f[10]);
label_27bf04:
    // 0x27bf04: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x27bf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27bf08:
    // 0x27bf08: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x27bf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bf0c:
    // 0x27bf0c: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x27bf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27bf10:
    // 0x27bf10: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x27bf10u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_27bf14:
    // 0x27bf14: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x27bf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27bf18:
    // 0x27bf18: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x27bf18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_27bf1c:
    // 0x27bf1c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x27bf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bf20:
    // 0x27bf20: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x27bf20u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_27bf24:
    // 0x27bf24: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x27bf24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_27bf28:
    // 0x27bf28: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x27bf28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bf2c:
    // 0x27bf2c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27bf2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27bf30:
    // 0x27bf30: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x27bf30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_27bf34:
    // 0x27bf34: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x27bf34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_27bf38:
    // 0x27bf38: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x27bf38u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_27bf3c:
    // 0x27bf3c: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x27bf3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_27bf40:
    // 0x27bf40: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x27bf40u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_27bf44:
    // 0x27bf44: 0x46011240  add.s       $f9, $f2, $f1
    ctx->pc = 0x27bf44u;
    ctx->f[9] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_27bf48:
    // 0x27bf48: 0x46095036  c.le.s      $f10, $f9
    ctx->pc = 0x27bf48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27bf4c:
    // 0x27bf4c: 0x0  nop
    ctx->pc = 0x27bf4cu;
    // NOP
label_27bf50:
    // 0x27bf50: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_27bf54:
    if (ctx->pc == 0x27BF54u) {
        ctx->pc = 0x27BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF50u;
        // 0x27bf54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BF58u;
        goto label_27bf58;
    }
    ctx->pc = 0x27BF50u;
    {
        const bool branch_taken_0x27bf50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF50u;
        // 0x27bf54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bf50) {
            ctx->pc = 0x27BF68u;
            goto label_27bf68;
        }
    }
    ctx->pc = 0x27BF58u;
label_27bf58:
    // 0x27bf58: 0x460b4836  c.le.s      $f9, $f11
    ctx->pc = 0x27bf58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27bf5c:
    // 0x27bf5c: 0x0  nop
    ctx->pc = 0x27bf5cu;
    // NOP
label_27bf60:
    // 0x27bf60: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_27bf64:
    if (ctx->pc == 0x27BF64u) {
        ctx->pc = 0x27BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF60u;
        // 0x27bf64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BF68u;
        goto label_27bf68;
    }
    ctx->pc = 0x27BF60u;
    {
        const bool branch_taken_0x27bf60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27bf60) {
            ctx->pc = 0x27BF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BF60u;
            // 0x27bf64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BF68u;
            goto label_27bf68;
        }
    }
    ctx->pc = 0x27BF68u;
label_27bf68:
    // 0x27bf68: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
label_27bf6c:
    if (ctx->pc == 0x27BF6Cu) {
        ctx->pc = 0x27BF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF68u;
        // 0x27bf6c: 0xc7a30098  lwc1        $f3, 0x98($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BF70u;
        goto label_27bf70;
    }
    ctx->pc = 0x27BF68u;
    {
        const bool branch_taken_0x27bf68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF68u;
        // 0x27bf6c: 0xc7a30098  lwc1        $f3, 0x98($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bf68) {
            ctx->pc = 0x27C18Cu;
            goto label_27c18c;
        }
    }
    ctx->pc = 0x27BF70u;
label_27bf70:
    // 0x27bf70: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x27bf70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27bf74:
    // 0x27bf74: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x27bf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27bf78:
    // 0x27bf78: 0xc7a70078  lwc1        $f7, 0x78($sp)
    ctx->pc = 0x27bf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_27bf7c:
    // 0x27bf7c: 0x46041942  mul.s       $f5, $f3, $f4
    ctx->pc = 0x27bf7cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_27bf80:
    // 0x27bf80: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x27bf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bf84:
    // 0x27bf84: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x27bf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27bf88:
    // 0x27bf88: 0x46071182  mul.s       $f6, $f2, $f7
    ctx->pc = 0x27bf88u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_27bf8c:
    // 0x27bf8c: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x27bf8cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_27bf90:
    // 0x27bf90: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x27bf90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_27bf94:
    // 0x27bf94: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x27bf94u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_27bf98:
    // 0x27bf98: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x27bf98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_27bf9c:
    // 0x27bf9c: 0x46053181  sub.s       $f6, $f6, $f5
    ctx->pc = 0x27bf9cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
label_27bfa0:
    // 0x27bfa0: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x27bfa0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_27bfa4:
    // 0x27bfa4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x27bfa4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_27bfa8:
    // 0x27bfa8: 0xe7a600b0  swc1        $f6, 0xB0($sp)
    ctx->pc = 0x27bfa8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_27bfac:
    // 0x27bfac: 0xe7a400b8  swc1        $f4, 0xB8($sp)
    ctx->pc = 0x27bfacu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_27bfb0:
    // 0x27bfb0: 0xe7a300b4  swc1        $f3, 0xB4($sp)
    ctx->pc = 0x27bfb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_27bfb4:
    // 0x27bfb4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x27bfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bfb8:
    // 0x27bfb8: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x27bfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27bfbc:
    // 0x27bfbc: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x27bfbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_27bfc0:
    // 0x27bfc0: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x27bfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27bfc4:
    // 0x27bfc4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x27bfc4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_27bfc8:
    // 0x27bfc8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x27bfc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_27bfcc:
    // 0x27bfcc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x27bfccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_27bfd0:
    // 0x27bfd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27bfd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_27bfd4:
    // 0x27bfd4: 0x46005036  c.le.s      $f10, $f0
    ctx->pc = 0x27bfd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27bfd8:
    // 0x27bfd8: 0x0  nop
    ctx->pc = 0x27bfd8u;
    // NOP
label_27bfdc:
    // 0x27bfdc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_27bfe0:
    if (ctx->pc == 0x27BFE0u) {
        ctx->pc = 0x27BFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BFDCu;
        // 0x27bfe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BFE4u;
        goto label_27bfe4;
    }
    ctx->pc = 0x27BFDCu;
    {
        const bool branch_taken_0x27bfdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27BFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BFDCu;
        // 0x27bfe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bfdc) {
            ctx->pc = 0x27BFF8u;
            goto label_27bff8;
        }
    }
    ctx->pc = 0x27BFE4u;
label_27bfe4:
    // 0x27bfe4: 0x46004800  add.s       $f0, $f9, $f0
    ctx->pc = 0x27bfe4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_27bfe8:
    // 0x27bfe8: 0x460b0036  c.le.s      $f0, $f11
    ctx->pc = 0x27bfe8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27bfec:
    // 0x27bfec: 0x0  nop
    ctx->pc = 0x27bfecu;
    // NOP
label_27bff0:
    // 0x27bff0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_27bff4:
    if (ctx->pc == 0x27BFF4u) {
        ctx->pc = 0x27BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BFF0u;
        // 0x27bff4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BFF8u;
        goto label_27bff8;
    }
    ctx->pc = 0x27BFF0u;
    {
        const bool branch_taken_0x27bff0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27bff0) {
            ctx->pc = 0x27BFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BFF0u;
            // 0x27bff4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BFF8u;
            goto label_27bff8;
        }
    }
    ctx->pc = 0x27BFF8u;
label_27bff8:
    // 0x27bff8: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
label_27bffc:
    if (ctx->pc == 0x27BFFCu) {
        ctx->pc = 0x27BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BFF8u;
        // 0x27bffc: 0xc7a000b0  lwc1        $f0, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C000u;
        goto label_27c000;
    }
    ctx->pc = 0x27BFF8u;
    {
        const bool branch_taken_0x27bff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BFF8u;
        // 0x27bffc: 0xc7a000b0  lwc1        $f0, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bff8) {
            ctx->pc = 0x27C18Cu;
            goto label_27c18c;
        }
    }
    ctx->pc = 0x27C000u;
label_27c000:
    // 0x27c000: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27c000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27c004:
    // 0x27c004: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x27c004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27c008:
    // 0x27c008: 0xc7a30084  lwc1        $f3, 0x84($sp)
    ctx->pc = 0x27c008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27c00c:
    // 0x27c00c: 0xc7a400b4  lwc1        $f4, 0xB4($sp)
    ctx->pc = 0x27c00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27c010:
    // 0x27c010: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x27c010u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_27c014:
    // 0x27c014: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x27c014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c018:
    // 0x27c018: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x27c018u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_27c01c:
    // 0x27c01c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x27c01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c020:
    // 0x27c020: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27c020u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_27c024:
    // 0x27c024: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x27c024u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_27c028:
    // 0x27c028: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x27c028u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_27c02c:
    // 0x27c02c: 0x46025036  c.le.s      $f10, $f2
    ctx->pc = 0x27c02cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c030:
    // 0x27c030: 0x0  nop
    ctx->pc = 0x27c030u;
    // NOP
label_27c034:
    // 0x27c034: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_27c038:
    if (ctx->pc == 0x27C038u) {
        ctx->pc = 0x27C038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C034u;
        // 0x27c038: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C03Cu;
        goto label_27c03c;
    }
    ctx->pc = 0x27C034u;
    {
        const bool branch_taken_0x27c034 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C034u;
        // 0x27c038: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c034) {
            ctx->pc = 0x27C04Cu;
            goto label_27c04c;
        }
    }
    ctx->pc = 0x27C03Cu;
label_27c03c:
    // 0x27c03c: 0x460b1036  c.le.s      $f2, $f11
    ctx->pc = 0x27c03cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c040:
    // 0x27c040: 0x0  nop
    ctx->pc = 0x27c040u;
    // NOP
label_27c044:
    // 0x27c044: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_27c048:
    if (ctx->pc == 0x27C048u) {
        ctx->pc = 0x27C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C044u;
        // 0x27c048: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C04Cu;
        goto label_27c04c;
    }
    ctx->pc = 0x27C044u;
    {
        const bool branch_taken_0x27c044 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c044) {
            ctx->pc = 0x27C048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C044u;
            // 0x27c048: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C04Cu;
            goto label_27c04c;
        }
    }
    ctx->pc = 0x27C04Cu;
label_27c04c:
    // 0x27c04c: 0x50400050  beql        $v0, $zero, . + 4 + (0x50 << 2)
label_27c050:
    if (ctx->pc == 0x27C050u) {
        ctx->pc = 0x27C050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C04Cu;
        // 0x27c050: 0x8ee20010  lw          $v0, 0x10($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C054u;
        goto label_27c054;
    }
    ctx->pc = 0x27C04Cu;
    {
        const bool branch_taken_0x27c04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c04c) {
            ctx->pc = 0x27C050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C04Cu;
            // 0x27c050: 0x8ee20010  lw          $v0, 0x10($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C190u;
            goto label_27c190;
        }
    }
    ctx->pc = 0x27C054u;
label_27c054:
    // 0x27c054: 0x46086303  div.s       $f12, $f12, $f8
    ctx->pc = 0x27c054u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[8]);
label_27c058:
    // 0x27c058: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x27c058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_27c05c:
    // 0x27c05c: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x27c05cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_27c060:
    // 0x27c060: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x27c060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_27c064:
    // 0x27c064: 0xb3a30053  sdl         $v1, 0x53($sp)
    ctx->pc = 0x27c064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27c068:
    // 0x27c068: 0xb7a3004c  sdr         $v1, 0x4C($sp)
    ctx->pc = 0x27c068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27c06c:
    // 0x27c06c: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x27c06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
label_27c070:
    // 0x27c070: 0xafb60058  sw          $s6, 0x58($sp)
    ctx->pc = 0x27c070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 22));
label_27c074:
    // 0x27c074: 0xafb0005c  sw          $s0, 0x5C($sp)
    ctx->pc = 0x27c074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 16));
label_27c078:
    // 0x27c078: 0xafb20060  sw          $s2, 0x60($sp)
    ctx->pc = 0x27c078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 18));
label_27c07c:
    // 0x27c07c: 0xafb10064  sw          $s1, 0x64($sp)
    ctx->pc = 0x27c07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 17));
label_27c080:
    // 0x27c080: 0xc6470000  lwc1        $f7, 0x0($s2)
    ctx->pc = 0x27c080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_27c084:
    // 0x27c084: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x27c084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c088:
    // 0x27c088: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x27c088u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_27c08c:
    // 0x27c08c: 0xe7a700c0  swc1        $f7, 0xC0($sp)
    ctx->pc = 0x27c08cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_27c090:
    // 0x27c090: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x27c090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c094:
    // 0x27c094: 0xc6460004  lwc1        $f6, 0x4($s2)
    ctx->pc = 0x27c094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_27c098:
    // 0x27c098: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x27c098u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_27c09c:
    // 0x27c09c: 0xe7a600c4  swc1        $f6, 0xC4($sp)
    ctx->pc = 0x27c09cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_27c0a0:
    // 0x27c0a0: 0xc6450008  lwc1        $f5, 0x8($s2)
    ctx->pc = 0x27c0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_27c0a4:
    // 0x27c0a4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x27c0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c0a8:
    // 0x27c0a8: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x27c0a8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_27c0ac:
    // 0x27c0ac: 0xe7a500c8  swc1        $f5, 0xC8($sp)
    ctx->pc = 0x27c0acu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_27c0b0:
    // 0x27c0b0: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x27c0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27c0b4:
    // 0x27c0b4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x27c0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c0b8:
    // 0x27c0b8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x27c0b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_27c0bc:
    // 0x27c0bc: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x27c0bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_27c0c0:
    // 0x27c0c0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x27c0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c0c4:
    // 0x27c0c4: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x27c0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27c0c8:
    // 0x27c0c8: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x27c0c8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_27c0cc:
    // 0x27c0cc: 0xe7a400d4  swc1        $f4, 0xD4($sp)
    ctx->pc = 0x27c0ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_27c0d0:
    // 0x27c0d0: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x27c0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c0d4:
    // 0x27c0d4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x27c0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c0d8:
    // 0x27c0d8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27c0d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27c0dc:
    // 0x27c0dc: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x27c0dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_27c0e0:
    // 0x27c0e0: 0x46013002  mul.s       $f0, $f6, $f1
    ctx->pc = 0x27c0e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_27c0e4:
    // 0x27c0e4: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x27c0e4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_27c0e8:
    // 0x27c0e8: 0x460438c2  mul.s       $f3, $f7, $f4
    ctx->pc = 0x27c0e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_27c0ec:
    // 0x27c0ec: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x27c0ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_27c0f0:
    // 0x27c0f0: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x27c0f0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_27c0f4:
    // 0x27c0f4: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x27c0f4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_27c0f8:
    // 0x27c0f8: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x27c0f8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
label_27c0fc:
    // 0x27c0fc: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x27c0fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_27c100:
    // 0x27c100: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x27c100u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_27c104:
    // 0x27c104: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x27c104u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_27c108:
    // 0x27c108: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x27c108u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_27c10c:
    // 0x27c10c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x27c10cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_27c110:
    // 0x27c110: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x27c110u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_27c114:
    // 0x27c114: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x27c114u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_27c118:
    // 0x27c118: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x27c118u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_27c11c:
    // 0x27c11c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x27c11cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_27c120:
    // 0x27c120: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x27c120u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_27c124:
    // 0x27c124: 0x46000004  c1          0x4
    ctx->pc = 0x27c124u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_27c128:
    // 0x27c128: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x27c128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c12c:
    // 0x27c12c: 0x0  nop
    ctx->pc = 0x27c12cu;
    // NOP
label_27c130:
    // 0x27c130: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_27c134:
    if (ctx->pc == 0x27C134u) {
        ctx->pc = 0x27C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C130u;
        // 0x27c134: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C138u;
        goto label_27c138;
    }
    ctx->pc = 0x27C130u;
    {
        const bool branch_taken_0x27c130 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C130u;
        // 0x27c134: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c130) {
            ctx->pc = 0x27C148u;
            goto label_27c148;
        }
    }
    ctx->pc = 0x27C138u;
label_27c138:
    // 0x27c138: 0x4600a0c3  div.s       $f3, $f20, $f0
    ctx->pc = 0x27c138u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[0]);
label_27c13c:
    // 0x27c13c: 0x10000004  b           . + 4 + (0x4 << 2)
label_27c140:
    if (ctx->pc == 0x27C140u) {
        ctx->pc = 0x27C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C13Cu;
        // 0x27c140: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C144u;
        goto label_27c144;
    }
    ctx->pc = 0x27C13Cu;
    {
        const bool branch_taken_0x27c13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C13Cu;
        // 0x27c140: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c13c) {
            ctx->pc = 0x27C150u;
            goto label_27c150;
        }
    }
    ctx->pc = 0x27C144u;
label_27c144:
    // 0x27c144: 0x0  nop
    ctx->pc = 0x27c144u;
    // NOP
label_27c148:
    // 0x27c148: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x27c148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c14c:
    // 0x27c14c: 0x0  nop
    ctx->pc = 0x27c14cu;
    // NOP
label_27c150:
    // 0x27c150: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x27c150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c154:
    // 0x27c154: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x27c154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27c158:
    // 0x27c158: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x27c158u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_27c15c:
    // 0x27c15c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x27c15cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_27c160:
    // 0x27c160: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x27c160u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_27c164:
    // 0x27c164: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x27c164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_27c168:
    // 0x27c168: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x27c168u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_27c16c:
    // 0x27c16c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x27c16cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_27c170:
    // 0x27c170: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x27c170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27c174:
    // 0x27c174: 0x8fa700e4  lw          $a3, 0xE4($sp)
    ctx->pc = 0x27c174u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_27c178:
    // 0x27c178: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x27c178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_27c17c:
    // 0x27c17c: 0xe0f809  jalr        $a3
label_27c180:
    if (ctx->pc == 0x27C180u) {
        ctx->pc = 0x27C180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C17Cu;
        // 0x27c180: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C184u;
        goto label_27c184;
    }
    ctx->pc = 0x27C17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x27C184u);
        ctx->pc = 0x27C180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C17Cu;
        // 0x27c180: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C17Cu, 0x27C184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27C184u;
label_27c184:
    // 0x27c184: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_27c188:
    if (ctx->pc == 0x27C188u) {
        ctx->pc = 0x27C188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C184u;
        // 0x27c188: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C18Cu;
        goto label_27c18c;
    }
    ctx->pc = 0x27C184u;
    {
        const bool branch_taken_0x27c184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c184) {
            ctx->pc = 0x27C188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C184u;
            // 0x27c188: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C1A4u;
            goto label_27c1a4;
        }
    }
    ctx->pc = 0x27C18Cu;
label_27c18c:
    // 0x27c18c: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x27c18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_27c190:
    // 0x27c190: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x27c190u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_27c194:
    // 0x27c194: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x27c194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_27c198:
    // 0x27c198: 0x1440febb  bnez        $v0, . + 4 + (-0x145 << 2)
label_27c19c:
    if (ctx->pc == 0x27C19Cu) {
        ctx->pc = 0x27C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C198u;
        // 0x27c19c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C1A0u;
        goto label_27c1a0;
    }
    ctx->pc = 0x27C198u;
    {
        const bool branch_taken_0x27c198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C198u;
        // 0x27c19c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c198) {
            ctx->pc = 0x27BC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27bc88;
        }
    }
    ctx->pc = 0x27C1A0u;
label_27c1a0:
    // 0x27c1a0: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x27c1a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_27c1a4:
    // 0x27c1a4: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x27c1a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_27c1a8:
    // 0x27c1a8: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x27c1a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_27c1ac:
    // 0x27c1ac: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x27c1acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_27c1b0:
    // 0x27c1b0: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x27c1b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_27c1b4:
    // 0x27c1b4: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x27c1b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_27c1b8:
    // 0x27c1b8: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x27c1b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_27c1bc:
    // 0x27c1bc: 0x7bb70110  lq          $s7, 0x110($sp)
    ctx->pc = 0x27c1bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_27c1c0:
    // 0x27c1c0: 0x7bbe0100  lq          $fp, 0x100($sp)
    ctx->pc = 0x27c1c0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_27c1c4:
    // 0x27c1c4: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x27c1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_27c1c8:
    // 0x27c1c8: 0xc7b701a8  lwc1        $f23, 0x1A8($sp)
    ctx->pc = 0x27c1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_27c1cc:
    // 0x27c1cc: 0xc7b601a0  lwc1        $f22, 0x1A0($sp)
    ctx->pc = 0x27c1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_27c1d0:
    // 0x27c1d0: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x27c1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_27c1d4:
    // 0x27c1d4: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x27c1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27c1d8:
    // 0x27c1d8: 0x3e00008  jr          $ra
label_27c1dc:
    if (ctx->pc == 0x27C1DCu) {
        ctx->pc = 0x27C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C1D8u;
        // 0x27c1dc: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C1E0u;
        goto label_fallthrough_0x27c1d8;
    }
    ctx->pc = 0x27C1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C1D8u;
        // 0x27c1dc: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x27c1d8:
    ctx->pc = 0x27C1E0u;
}
